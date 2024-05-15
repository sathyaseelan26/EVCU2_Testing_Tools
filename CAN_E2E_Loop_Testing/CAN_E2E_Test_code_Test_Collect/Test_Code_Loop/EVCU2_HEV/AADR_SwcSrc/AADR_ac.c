/*
 * File: AADR_ac.c
 *
 * Code generated for Simulink model 'AADR_ac'.
 *
 * Model version                  : 9.87
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:01:44 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AADR_ac.h"

/* Named constants for Chart: '<S18>/AAD_Control_Calib' */
#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_CAL_SEQ         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_Control_Deploy  ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_Control_Retract ((uint8)2U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_EOL_CALIBRATION_CMD ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_EOL_DID         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_EOL_POSITION_CMD ((uint8)2U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_FAIL            ((uint8)2U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_FAULTED_WAIT    ((uint8)3U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_NORMAL_CONTROL  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_OPERATIONAL     ((uint8)4U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_AAD_OPERATION_MODE_DISABLE ((uint8)3U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_IDLE                ((uint8)5U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_PSA                 ((uint8)6U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_REQ_CAL_SEQ         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AADR_1
#define AADR_ac_IN_WAIT_BEFORE_NEXT_ATTEMPT ((uint8)2U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_AADR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KaAADR_Pct_AAD_CurrPos[16] =
{
    100.0F, 89.0F, 77.0F, 66.0F, 55.0F, 44.0F, 33.0F, 22.0F, 11.0F, 0.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                      /* Referenced by: '<S13>/PokeAADR_e_AAD_CurrPosChrt' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(TeAADR_e_AAD_Pos, AADR_VAR_INIT) KaAADR_e_AAD_CurrPos[16] =
{
    CeAADR_e_Deploy100, CeAADR_e_Deploy89, CeAADR_e_Deploy77, CeAADR_e_Deploy66,
    CeAADR_e_Deploy55, CeAADR_e_Deploy44, CeAADR_e_Deploy33, CeAADR_e_Deploy22,
    CeAADR_e_Deploy11, CeAADR_e_Deploy0, CeAADR_e_Unused1, CeAADR_e_Unused2,
    CeAADR_e_Unused3, CeAADR_e_Unused4, CeAADR_e_Unused5, CeAADR_e_SNA
};                       /* Referenced by: '<S13>/PokeAADR_e_AAD_CurrPosChrt' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(uint8, AADR_VAR_INIT) KeAADR_Cnt_AAD_MaxCalTry = 3U;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(uint16, AADR_VAR_INIT) KeAADR_Cnt_AAD_PerfDiag_FailCnt =
    180U;                              /* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(uint16, AADR_VAR_INIT) KeAADR_Cnt_AAD_PerfDiag_SmpCnt =
    200U;                              /* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(uint8, AADR_VAR_INIT) KeAADR_Cnt_MaxKeyCyclefromLstCal =
    3U;                                /* Referenced by: '<S83>/Calib' */

#endif

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_Pct_AAD_CurrPos_Init = 0.0F;/* Referenced by: '<S143>/Calib' */

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_T_AAD_MinAmbTempForCal =
    2.0F;                              /* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_U_AAD_MaxBattVltg_Alw =
    16.0F;                             /* Referenced by:
                                        * '<S101>/Calib'
                                        * '<S110>/Calib'
                                        * '<S118>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_U_AAD_MinBattVltg_Alw =
    10.0F;                             /* Referenced by:
                                        * '<S102>/Calib'
                                        * '<S111>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_a_AAD_MaxLatAccel = 25.0F;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_a_AAD_MaxLongAccel = 25.0F;/* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AADCommBus_Slct = 1;/* Referenced by:
                                                                      * '<S84>/Calib'
                                                                      * '<S47>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_Diag_CalFail_Enbl = 1;/* Referenced by:
                                                                      * '<S48>/Calib'
                                                                      * '<S67>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_Diag_Errors_Enbl = 1;/* Referenced by:
                                                                      * '<S49>/Calib'
                                                                      * '<S68>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_Diag_OverVolt_Enbl =
    1;                                 /* Referenced by:
                                        * '<S50>/Calib'
                                        * '<S69>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_IsDiagGlblCnd_Ovrd =
    0;                                 /* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT)
    KeAADR_b_AAD_PerfDiag_LINBusOff_Ovrd = 0;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_PerfDiag_LOC_Ovrd = 0;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_PerfDiag_XYEnbl = 1;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_PropSysActv_Ovrd = 0;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_SNAEnblCndsOV = 1;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(boolean, AADR_VAR_INIT) KeAADR_b_AAD_SNAFaultEnable = 1;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(TeAADR_e_AAD_Pos, AADR_VAR_INIT) KeAADR_e_AAD_DefaultPos =
    CeAADR_e_Deploy0;                  /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(TeAADR_e_AAD_Pos, AADR_VAR_INIT) KeAADR_e_AAD_DeployPos =
    CeAADR_e_Deploy100;                /* Referenced by:
                                        * '<S86>/Calib'
                                        * '<S56>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(TeAADR_e_AAD_Pos, AADR_VAR_INIT) KeAADR_e_AAD_RetractPos =
    CeAADR_e_Deploy0;                  /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(TeTMDR_e_TrrnMd, AADR_VAR_INIT) KeAADR_e_AAD_TrrnMdStOne =
    CeTMDR_e_Snow;                     /* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(TeTMDR_e_TrrnMd, AADR_VAR_INIT) KeAADR_e_AAD_TrrnMdStThree
    = CeTMDR_e_Rock;                   /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(TeTMDR_e_TrrnMd, AADR_VAR_INIT) KeAADR_e_AAD_TrrnMdStTwo =
    CeTMDR_e_MudSand;                  /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_CalWaitTime = 8.0F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_FA_WaitTime = 2.0F;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_FaultWaitTime = 25.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT)
    KeAADR_t_AAD_Perf_PosReqNoChgTime_Enbl = 3.0F;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_StartWaitTime = 2.0F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_TimeBeforeNextCal =
    20.0F;                             /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_TmDlyABSDetected =
    2.0F;                              /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_TmDlyASDetected =
    2.0F;                              /* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_TmDlyToRetract = 2.0F;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_TskRate = 0.1F;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S125>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_t_AAD_WaitTimeCommRx = 0.5F;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_v_AAD_MaxVehSpdToEnblCal =
    25.0F;                             /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_v_AAD_MinVehSpdToEnblCal =
    1.0F;                              /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_v_AAD_VehSpdThrToDeploy =
    35.0F;                             /* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_AADR_1

static volatile CONST(float32, AADR_VAR_INIT) KeAADR_v_AAD_VehSpdThrToRetract =
    25.0F;                             /* Referenced by: '<S126>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_AADR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, AADR_VAR_INIT) EeAADR_Cnt_AAD_PSACntrLastCal;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_AADR_1

static VAR(boolean, AADR_VAR_INIT) VeAADC_b_AAD_CalibrationIsActv;/* '<S18>/Logical2' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(boolean, AADR_VAR_INIT) VeAADC_b_AAD_DeployEnblConds;/* '<S76>/Logical1' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(boolean, AADR_VAR_INIT) VeAADC_b_AAD_EnableCondsForCal;/* '<S77>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(boolean, AADR_VAR_INIT) VeAADC_b_AAD_RetractEnblConds;/* '<S94>/Logical4' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(boolean, AADR_VAR_INIT) VeAADD_b_AAD_PerfDiag_FltDtct;/* '<S26>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(uint16, AADR_VAR_INIT) VeAADR_Cnt_AAD_PerfDiag_FailCnt;/* '<S34>/Switch1' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(uint16, AADR_VAR_INIT) VeAADR_Cnt_AAD_PerfDiag_SmpCnt;/* '<S35>/Switch1' */

#endif

static VAR(boolean, AADR_VAR_INIT) VeAADR_b_AAD_CalibrationRequestFlag;/* '<Root>/DSM_2' */

#if Rte_SysCon_Variant_AADR_1

static VAR(boolean, AADR_VAR_INIT) VeAADR_b_AAD_PerfDiag_En;/* '<S20>/Logical11' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(boolean, AADR_VAR_INIT) VeAADR_b_AAD_PerfDiag_FailSym;/* '<S22>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_AADR_1

static VAR(uint8, AADR_VAR_INIT) VeAADR_i_AAD_State;/* '<S18>/AAD_Control_Calib' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_AADR
#include "MemMap.h"

CONST(ConstB_AADR_ac_T, AADR_VAR_INIT) AADR_ac_ConstB =
{
    CeTAIR_e_Return_Control_to_ECU,    /* '<S142>/Constant' */
    CeDFIB_e_Init,                     /* '<S144>/Constant' */
    CeAADR_e_Deploy0,                  /* '<S138>/Constant' */
    CeAADR_e_Deploy100,                /* '<S141>/Constant' */
    CeAADR_e_Deploy100,                /* '<S139>/Constant' */
    CeAADR_e_AAD_CalFailed,            /* '<S137>/Constant' */
    CeAADR_e_AAD_NotCalibrated         /* '<S140>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_AADR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

VAR(B_AADR_ac_T, AADR_VAR_INIT) AADR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

VAR(DW_AADR_ac_T, AADR_VAR_INIT) AADR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_AADR_1

static void AADR_ac_AAD_CAL_SEQ(const boolean *RelationalOperator1);

#endif

#if Rte_SysCon_Variant_AADR_1

static void AADR_ac_AAD_NORMAL_CONTROL(const boolean
    *TmpSignalConversionAtVeAADR_b_AAD_Operat, const boolean
    *RelationalOperator1, const boolean *LogicalOperator1, const boolean
    *LogicalOperator3, const TeTAIR_e_IO_CntrlSt
    *TmpSignalConversionAtVeAADF_e_AAD_IO_Cnt);

#endif

/* Function for Chart: '<S18>/AAD_Control_Calib' */
#if Rte_SysCon_Variant_AADR_1

static void AADR_ac_AAD_CAL_SEQ(const boolean *RelationalOperator1)
{
    sint32 tmp;
    boolean guard1 = false;
    boolean tmpRead;

    /* During 'AAD_CAL_SEQ': '<S72>:238' */
    /* Transition: '<S72>:257' */
    if (!AADR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct)
    {
        /* Transition: '<S72>:334' */
        /* Transition: '<S72>:336' */
        /* Transition: '<S72>:349' */
        /* Exit Internal 'AAD_CAL_SEQ': '<S72>:238' */
        AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_NO_ACTIVE_CHILD;
        AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S72>:68' */
        AADR_ac_B.VeAADC_b_AAD_CalReq = false;
        AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;

        /* Constant: '<S85>/Calib' */
        AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
        AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
        VeAADR_i_AAD_State = 0U;
    }
    else if (!VeAADC_b_AAD_EnableCondsForCal)
    {
        /* Transition: '<S72>:210' */
        AADR_ac_B.VeAADC_b_AAD_CalReq = false;

        /* Exit Internal 'AAD_CAL_SEQ': '<S72>:238' */
        AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_NO_ACTIVE_CHILD;
        AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_PSA;

        /* Entry 'PSA': '<S72>:330' */
        VeAADR_i_AAD_State = 1U;
    }
    else if (((*RelationalOperator1) && (!VeAADC_b_AAD_CalibrationIsActv)) &&
             (AADR_ac_DW.LeAADR_t_AAD_CalWaitTime >= KeAADR_t_AAD_WaitTimeCommRx))
    {
        /* Transition: '<S72>:258' */
        AADR_ac_B.VeAADC_b_AAD_CalReq = false;
        EeAADR_Cnt_AAD_PSACntrLastCal = 0U;

        /* Inport: '<Root>/VePLTR_b_BatteryWasDisconnected' */
        (void)Rte_Read_VePLTR_b_BatteryWasDisconnected_Value(&tmpRead);
        if (tmpRead)
        {
            /* Transition: '<S72>:291' */
            AADR_ac_DW.LeAADR_b_CalAfterBatDiscDone = true;
        }
        else
        {
            /* Transition: '<S72>:289' */
            /* Transition: '<S72>:293' */
        }

        /* Exit Internal 'AAD_CAL_SEQ': '<S72>:238' */
        AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_NO_ACTIVE_CHILD;
        AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_AAD_OPERATIONAL;

        /* Entry 'AAD_OPERATIONAL': '<S72>:184' */
        /* Entry Internal 'AAD_OPERATIONAL': '<S72>:184' */
        /* Transition: '<S72>:187' */
        AADR_ac_DW.is_AAD_OPERATIONAL = AADR_ac_IN_AAD_Control_Retract;

        /* Constant: '<S87>/Calib' */
        /* Entry 'AAD_Control_Retract': '<S72>:188' */
        AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_RetractPos;
        VeAADR_i_AAD_State = 4U;
    }
    else if (((uint32)AADR_ac_DW.is_AAD_CAL_SEQ) == AADR_ac_IN_REQ_CAL_SEQ)
    {
        VeAADR_i_AAD_State = 2U;

        /* Constant: '<S88>/Calib' */
        /* During 'REQ_CAL_SEQ': '<S72>:268' */
        if (AADR_ac_DW.LeAADR_t_AAD_CalWaitTime >= KeAADR_t_AAD_CalWaitTime)
        {
            /* Transition: '<S72>:270' */
            AADR_ac_B.VeAADC_b_AAD_CalReq = false;

            /* Constant: '<S82>/Calib' */
            guard1 = false;
            if (AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt >= KeAADR_Cnt_AAD_MaxCalTry)
            {
                /* Transition: '<S72>:275' */
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = true;

                /* Constant: '<S85>/Calib' */
                AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
                if (VeAADD_b_AAD_PerfDiag_FltDtct)
                {
                    /* Transition: '<S72>:401' */
                    AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_NO_ACTIVE_CHILD;
                    AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_AAD_FAIL;

                    /* Entry 'AAD_FAIL': '<S72>:278' */
                    VeAADR_i_AAD_State = 7U;
                    AADR_ac_B.VeAADC_b_AAD_DiagEnable = false;
                }
                else
                {
                    guard1 = true;
                }
            }
            else
            {
                guard1 = true;
            }

            if (guard1)
            {
                /* Transition: '<S72>:276' */
                AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_WAIT_BEFORE_NEXT_ATTEMPT;

                /* Entry 'WAIT_BEFORE_NEXT_ATTEMPT': '<S72>:271' */
                AADR_ac_DW.LeAADR_t_AAD_CalWaitTime = 0.0F;
                VeAADR_i_AAD_State = 3U;
            }

            /* End of Constant: '<S82>/Calib' */
        }
        else
        {
            /* Constant: '<S92>/Calib' */
            AADR_ac_DW.LeAADR_t_AAD_CalWaitTime += KeAADR_t_AAD_TskRate;
        }

        /* End of Constant: '<S88>/Calib' */
    }
    else
    {
        VeAADR_i_AAD_State = 3U;

        /* Constant: '<S91>/Calib' */
        /* During 'WAIT_BEFORE_NEXT_ATTEMPT': '<S72>:271' */
        if (AADR_ac_DW.LeAADR_t_AAD_CalWaitTime >=
                KeAADR_t_AAD_TimeBeforeNextCal)
        {
            /* Transition: '<S72>:274' */
            AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_REQ_CAL_SEQ;

            /* Entry 'REQ_CAL_SEQ': '<S72>:268' */
            AADR_ac_B.VeAADC_b_AAD_CalReq = true;
            tmp = (sint32)((uint32)(((uint32)
                             AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt) + 1U));
            if ((((uint32)AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt) + 1U) > 255U)
            {
                tmp = 255;
            }

            AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt = (uint8)tmp;
            AADR_ac_DW.LeAADR_t_AAD_CalWaitTime = 0.0F;
            VeAADR_i_AAD_State = 2U;
        }
        else
        {
            /* Constant: '<S92>/Calib' */
            AADR_ac_DW.LeAADR_t_AAD_CalWaitTime += KeAADR_t_AAD_TskRate;
        }

        /* End of Constant: '<S91>/Calib' */
    }
}

#endif

/* Function for Chart: '<S18>/AAD_Control_Calib' */
#if Rte_SysCon_Variant_AADR_1

static void AADR_ac_AAD_NORMAL_CONTROL(const boolean
    *TmpSignalConversionAtVeAADR_b_AAD_Operat, const boolean
    *RelationalOperator1, const boolean *LogicalOperator1, const boolean
    *LogicalOperator3, const TeTAIR_e_IO_CntrlSt
    *TmpSignalConversionAtVeAADF_e_AAD_IO_Cnt)
{
    sint32 tmp;
    boolean tmpRead;

    /* SignalConversion generated from: '<S1>/VeAADF_e_AAD_IO_CntrlSt_read' incorporates:
     *  Constant: '<S83>/Calib'
     *  Constant: '<S85>/Calib'
     *  Constant: '<S86>/Calib'
     *  Constant: '<S87>/Calib'
     *  Constant: '<S89>/Calib'
     *  Constant: '<S90>/Calib'
     *  Constant: '<S92>/Calib'
     *  Inport: '<Root>/VePLTR_b_BatteryWasDisconnected'
     */
    /* During 'AAD_NORMAL_CONTROL': '<S72>:351' */
    if (((!(*TmpSignalConversionAtVeAADR_b_AAD_Operat)) ||
            (VeAADR_b_AAD_CalibrationRequestFlag)) || (((uint32)
            (*TmpSignalConversionAtVeAADF_e_AAD_IO_Cnt)) ==
            CeTAIR_e_Short_Term_Adjustment))
    {
        /* Transition: '<S72>:353' */
        /* Exit Internal 'AAD_NORMAL_CONTROL': '<S72>:351' */
        /* Exit Internal 'AAD_CAL_SEQ': '<S72>:238' */
        AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_NO_ACTIVE_CHILD;

        /* Exit Internal 'AAD_OPERATIONAL': '<S72>:184' */
        AADR_ac_DW.is_AAD_OPERATIONAL = AADR_ac_IN_NO_ACTIVE_CHILD;
        AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_NO_ACTIVE_CHILD;
        AADR_ac_DW.is_c2_AADR_ac = AADR_ac_IN_AAD_EOL_DID;

        /* Entry 'AAD_EOL_DID': '<S72>:366' */
        /* Entry Internal 'AAD_EOL_DID': '<S72>:366' */
        /* Transition: '<S72>:409' */
        if (!(*TmpSignalConversionAtVeAADR_b_AAD_Operat))
        {
            /* Transition: '<S72>:417' */
            AADR_ac_DW.is_AAD_EOL_DID = AADR_ac_IN_AAD_OPERATION_MODE_DISABLE;

            /* Entry 'AAD_OPERATION_MODE_DISABLE': '<S72>:410' */
            VeAADR_i_AAD_State = 8U;
            AADR_ac_B.VeAADC_b_AAD_CalReq = false;
            AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
        }
        else
        {
            /* Transition: '<S72>:415' */
            if (VeAADR_b_AAD_CalibrationRequestFlag)
            {
                /* Transition: '<S72>:418' */
                AADR_ac_DW.is_AAD_EOL_DID = AADR_ac_IN_AAD_EOL_CALIBRATION_CMD;

                /* Entry 'AAD_EOL_CALIBRATION_CMD': '<S72>:411' */
                VeAADR_i_AAD_State = 9U;
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
                AADR_ac_B.VeAADC_b_AAD_InitialIP_CalRq = true;
                AADR_ac_DW.LeAADR_t_AAD_CalWaitTime = 0.0F;
            }
            else
            {
                /* Transition: '<S72>:416' */
                /* Transition: '<S72>:426' */
                AADR_ac_DW.is_AAD_EOL_DID = AADR_ac_IN_AAD_EOL_POSITION_CMD;

                /* Entry 'AAD_EOL_POSITION_CMD': '<S72>:412' */
                VeAADR_i_AAD_State = 10U;
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
            }
        }
    }
    else
    {
        switch (AADR_ac_DW.is_AAD_NORMAL_CONTROL)
        {
          case AADR_ac_IN_AAD_CAL_SEQ:
            AADR_ac_AAD_CAL_SEQ(RelationalOperator1);
            break;

          case AADR_ac_IN_AAD_FAIL:
            VeAADR_i_AAD_State = 7U;

            /* During 'AAD_FAIL': '<S72>:278' */
            break;

          case AADR_ac_IN_AAD_FAULTED_WAIT:
            VeAADR_i_AAD_State = 6U;

            /* During 'AAD_FAULTED_WAIT': '<S72>:304' */
            if (!AADR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct)
            {
                /* Transition: '<S72>:347' */
                /* Transition: '<S72>:349' */
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S72>:68' */
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;
                AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
                AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
                VeAADR_i_AAD_State = 0U;
            }
            else if (((VeAADC_b_AAD_EnableCondsForCal) && (!(*LogicalOperator1)))
                     && (AADR_ac_DW.LeAADR_t_AAD_FaultWaitTime >=
                         KeAADR_t_AAD_FaultWaitTime))
            {
                /* Transition: '<S72>:317' */
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_AAD_CAL_SEQ;

                /* Entry Internal 'AAD_CAL_SEQ': '<S72>:238' */
                /* Transition: '<S72>:272' */
                AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt = 0U;
                AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_REQ_CAL_SEQ;

                /* Entry 'REQ_CAL_SEQ': '<S72>:268' */
                AADR_ac_B.VeAADC_b_AAD_CalReq = true;
                tmp = (sint32)((uint32)(((uint32)
                                 AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt) + 1U));
                if ((((uint32)AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt) + 1U) > 255U)
                {
                    tmp = 255;
                }

                AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt = (uint8)tmp;
                AADR_ac_DW.LeAADR_t_AAD_CalWaitTime = 0.0F;
                VeAADR_i_AAD_State = 2U;
            }
            else
            {
                AADR_ac_DW.LeAADR_t_AAD_FaultWaitTime += KeAADR_t_AAD_TskRate;
            }
            break;

          case AADR_ac_IN_AAD_OPERATIONAL:
            /* During 'AAD_OPERATIONAL': '<S72>:184' */
            if (!AADR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct)
            {
                /* Transition: '<S72>:259' */
                /* Exit Internal 'AAD_OPERATIONAL': '<S72>:184' */
                AADR_ac_DW.is_AAD_OPERATIONAL = AADR_ac_IN_NO_ACTIVE_CHILD;
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S72>:68' */
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;
                AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
                AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
                VeAADR_i_AAD_State = 0U;
            }
            else if ((*LogicalOperator3) || (*LogicalOperator1))
            {
                /* Transition: '<S72>:305' */
                /* Transition: '<S72>:346' */
                /* Exit Internal 'AAD_OPERATIONAL': '<S72>:184' */
                AADR_ac_DW.is_AAD_OPERATIONAL = AADR_ac_IN_NO_ACTIVE_CHILD;
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_AAD_FAULTED_WAIT;

                /* Entry 'AAD_FAULTED_WAIT': '<S72>:304' */
                VeAADR_i_AAD_State = 6U;
                AADR_ac_DW.LeAADR_t_AAD_FaultWaitTime = 0.0F;
            }
            else
            {
                /* Transition: '<S72>:398' */
                if (VeAADD_b_AAD_PerfDiag_FltDtct)
                {
                    /* Transition: '<S72>:401' */
                    /* Exit Internal 'AAD_OPERATIONAL': '<S72>:184' */
                    AADR_ac_DW.is_AAD_OPERATIONAL = AADR_ac_IN_NO_ACTIVE_CHILD;
                    AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_AAD_FAIL;

                    /* Entry 'AAD_FAIL': '<S72>:278' */
                    VeAADR_i_AAD_State = 7U;
                    AADR_ac_B.VeAADC_b_AAD_DiagEnable = false;
                }
                else if (((uint32)AADR_ac_DW.is_AAD_OPERATIONAL) ==
                         AADR_ac_IN_AAD_Control_Deploy)
                {
                    VeAADR_i_AAD_State = 5U;

                    /* During 'AAD_Control_Deploy': '<S72>:186' */
                    if (VeAADC_b_AAD_RetractEnblConds)
                    {
                        /* Transition: '<S72>:192' */
                        AADR_ac_DW.is_AAD_OPERATIONAL =
                            AADR_ac_IN_AAD_Control_Retract;

                        /* Entry 'AAD_Control_Retract': '<S72>:188' */
                        AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_RetractPos;
                        VeAADR_i_AAD_State = 4U;
                    }
                }
                else
                {
                    VeAADR_i_AAD_State = 4U;

                    /* During 'AAD_Control_Retract': '<S72>:188' */
                    if ((!VeAADC_b_AAD_RetractEnblConds) &&
                            (VeAADC_b_AAD_DeployEnblConds))
                    {
                        /* Transition: '<S72>:191' */
                        AADR_ac_DW.is_AAD_OPERATIONAL =
                            AADR_ac_IN_AAD_Control_Deploy;

                        /* Entry 'AAD_Control_Deploy': '<S72>:186' */
                        AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DeployPos;
                        VeAADR_i_AAD_State = 5U;
                    }
                }
            }
            break;

          case AADR_ac_IN_IDLE:
            VeAADR_i_AAD_State = 0U;

            /* During 'IDLE': '<S72>:68' */
            if ((AADR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct) &&
                    (AADR_ac_DW.LeAADR_t_AAD_StartWaitTime >=
                     KeAADR_t_AAD_StartWaitTime))
            {
                /* Transition: '<S72>:331' */
                tmp = (sint32)((uint32)(((uint32)EeAADR_Cnt_AAD_PSACntrLastCal)
                                        + 1U));
                if ((((uint32)EeAADR_Cnt_AAD_PSACntrLastCal) + 1U) > 255U)
                {
                    tmp = 255;
                }

                EeAADR_Cnt_AAD_PSACntrLastCal = (uint8)tmp;
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_PSA;

                /* Entry 'PSA': '<S72>:330' */
                VeAADR_i_AAD_State = 1U;
            }
            else
            {
                AADR_ac_DW.LeAADR_t_AAD_StartWaitTime += KeAADR_t_AAD_TskRate;
            }
            break;

          default:
            VeAADR_i_AAD_State = 1U;

            /* During 'PSA': '<S72>:330' */
            if (!AADR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct)
            {
                /* Transition: '<S72>:341' */
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S72>:68' */
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;
                AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
                AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
                VeAADR_i_AAD_State = 0U;
            }
            else if ((*LogicalOperator3) || (*LogicalOperator1))
            {
                /* Transition: '<S72>:344' */
                /* Transition: '<S72>:346' */
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_AAD_FAULTED_WAIT;

                /* Entry 'AAD_FAULTED_WAIT': '<S72>:304' */
                VeAADR_i_AAD_State = 6U;
                AADR_ac_DW.LeAADR_t_AAD_FaultWaitTime = 0.0F;
            }
            else
            {
                (void)Rte_Read_VePLTR_b_BatteryWasDisconnected_Value(&tmpRead);
                if (((((tmpRead && (!AADR_ac_DW.LeAADR_b_CalAfterBatDiscDone)) ||
                       (!(*RelationalOperator1))) ||
                        (VeAADC_b_AAD_CalibrationIsActv)) ||
                        (EeAADR_Cnt_AAD_PSACntrLastCal >
                         KeAADR_Cnt_MaxKeyCyclefromLstCal)) &&
                        (VeAADC_b_AAD_EnableCondsForCal))
                {
                    /* Transition: '<S72>:70' */
                    /* Transition: '<S72>:206' */
                    AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_AAD_CAL_SEQ;

                    /* Entry Internal 'AAD_CAL_SEQ': '<S72>:238' */
                    /* Transition: '<S72>:272' */
                    AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt = 0U;
                    AADR_ac_DW.is_AAD_CAL_SEQ = AADR_ac_IN_REQ_CAL_SEQ;

                    /* Entry 'REQ_CAL_SEQ': '<S72>:268' */
                    AADR_ac_B.VeAADC_b_AAD_CalReq = true;
                    tmp = (sint32)((uint32)(((uint32)
                                     AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt) + 1U));
                    if ((((uint32)AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt) + 1U) >
                            255U)
                    {
                        tmp = 255;
                    }

                    AADR_ac_DW.LeAADR_Cnt_AAD_CalAttempt = (uint8)tmp;
                    AADR_ac_DW.LeAADR_t_AAD_CalWaitTime = 0.0F;
                    VeAADR_i_AAD_State = 2U;
                }
                else
                {
                    if ((*RelationalOperator1) &&
                            (!VeAADC_b_AAD_CalibrationIsActv))
                    {
                        /* Transition: '<S72>:74' */
                        AADR_ac_DW.is_AAD_NORMAL_CONTROL =
                            AADR_ac_IN_AAD_OPERATIONAL;

                        /* Entry 'AAD_OPERATIONAL': '<S72>:184' */
                        /* Entry Internal 'AAD_OPERATIONAL': '<S72>:184' */
                        /* Transition: '<S72>:187' */
                        AADR_ac_DW.is_AAD_OPERATIONAL =
                            AADR_ac_IN_AAD_Control_Retract;

                        /* Entry 'AAD_Control_Retract': '<S72>:188' */
                        AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_RetractPos;
                        VeAADR_i_AAD_State = 4U;
                    }
                }
            }
            break;
        }
    }

    /* End of SignalConversion generated from: '<S1>/VeAADF_e_AAD_IO_CntrlSt_read' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) AADR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_AADR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_AADR_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_AADR_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeAADR_b_AAD_Er;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeAADR_b_AAD_Ca;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeAADR_b_AAD_er;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeAADR_b_AAD__h;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeAADR_b_AAD__d;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeAADR_b_AAD__g;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_Logical6;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_Logical14;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_RelationalOperator1_g;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_UnitDelay_l;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_Logical5_f;

#endif

#if Rte_SysCon_Variant_AADR_1

    float32 rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy;

#endif

#if Rte_SysCon_Variant_AADR_1

    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeTHMR_b_AAD_Re;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeCSVR_b_VehSpd;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_AND_ph;

#endif

#if Rte_SysCon_Variant_AADR_1

    float32 rtb_Switch1_j;

#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeBRKR_b_ASRAct;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_TmpSignalConversionAtVeBRKR_b_ABSAct;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_Calibration_Sts rtb_TmpSignalConversionAtVeAADR_e_AAD_Ca;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_Pos rtb_TmpSignalConversionAtVeAADR_e_AAD_Cu;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVePLTR_e_ESMTra;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd;

#endif

#if Rte_SysCon_Variant_AADR_1

    boolean TmpSignalConversionAtVeAADR_b_AAD_Operat;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_Pos TmpSignalConversionAtVeAADF_e_AAD_PstnCm;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeTAIR_e_IO_CntrlSt TmpSignalConversionAtVeAADF_e_AAD_IO_Cnt;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_EOLCalibration tmp;

#endif

#if Rte_SysCon_Variant_AADR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Outputs for Function Call SubSystem: '<Root>/AADR_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommActAirDamMod' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommActAirDamMod'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommActAirDamMod_Value
        (&AADR_ac_DW.StatusByte_LostCommActAirDamMod);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&AADR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&AADR_ac_DW.StatusByte_LIN1_BusOff);

    /* End of Outputs for SubSystem: '<Root>/AADR_MedTEH' */

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value(&rtb_Logical6);

    /* Outputs for Function Call SubSystem: '<Root>/AADR_MedTEH' */
    /* SignalConversion generated from: '<S1>/VeAADR_b_AAD_ErrOverVolt_read' incorporates:
     *  Merge: '<Root>/Merge_11_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD_Er =
        Rte_IrvRead_AADR_MedTEH_AAD_ErrOverVolt_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADR_e_AAD_CalibrationSts_read' incorporates:
     *  Merge: '<Root>/Merge_2_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_e_AAD_Ca =
        Rte_IrvRead_AADR_MedTEH_AAD_CalibrationSts_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADF_e_AAD_PstnCmnd_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    TmpSignalConversionAtVeAADF_e_AAD_PstnCm =
        Rte_IrvRead_AADR_MedTEH_EOL_AAD_PstnCmnd_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADF_e_AAD_IO_CntrlSt_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    TmpSignalConversionAtVeAADF_e_AAD_IO_Cnt =
        Rte_IrvRead_AADR_MedTEH_EOL_AAD_IO_CntrlSt_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&AADR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* SignalConversion generated from: '<S1>/VeCSVR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_VehSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value
        (&rtb_TmpSignalConversionAtVeCSVR_b_VehSpd);

    /* SignalConversion generated from: '<S1>/VePMDR_U_BF1_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
     */
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy);

    /* SignalConversion generated from: '<S1>/VeBRKR_b_ABSActive' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ABSActive'
     */
    (void)Rte_Read_VeBRKR_b_ABSActive_Value
        (&rtb_TmpSignalConversionAtVeBRKR_b_ABSAct);

    /* SignalConversion generated from: '<S1>/VeBRKR_b_ASRActive' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ASRActive'
     */
    (void)Rte_Read_VeBRKR_b_ASRActive_Value
        (&rtb_TmpSignalConversionAtVeBRKR_b_ASRAct);

    /* SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt' incorporates:
     *  Inport: '<Root>/VeTIMR_e_TrrnMdSt'
     */
    (void)Rte_Read_VeTIMR_e_TrrnMdSt_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd);

    /* SignalConversion generated from: '<S1>/VePLTR_e_ESMTransRngSt' incorporates:
     *  Inport: '<Root>/VePLTR_e_ESMTransRngSt'
     */
    (void)Rte_Read_VePLTR_e_ESMTransRngSt_Value
        (&rtb_TmpSignalConversionAtVePLTR_e_ESMTra);

    /* SignalConversion generated from: '<S1>/VeAADR_b_AAD_CalibrationActv_read' incorporates:
     *  Merge: '<Root>/Merge_1_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD_Ca =
        Rte_IrvRead_AADR_MedTEH_AAD_CalibrationActv_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADR_b_AAD_ErrMechBreak_read' incorporates:
     *  Merge: '<Root>/Merge_8_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD_er =
        Rte_IrvRead_AADR_MedTEH_AAD_ErrMechBreak_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADR_b_AAD_ErrMechStuck_read' incorporates:
     *  Merge: '<Root>/Merge_9_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD__h =
        Rte_IrvRead_AADR_MedTEH_AAD_ErrMechStuck_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADR_b_AAD_ErrUnderVolt_read' incorporates:
     *  Merge: '<Root>/Merge_12_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD__d =
        Rte_IrvRead_AADR_MedTEH_AAD_ErrUnderVolt_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADR_b_AAD_ErrOverTemp_read' incorporates:
     *  Merge: '<Root>/Merge_10_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD__g =
        Rte_IrvRead_AADR_MedTEH_AAD_ErrOverTemp_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAADR_b_AAD_OperationModeEnbl_read' incorporates:
     *  Merge: '<Root>/Merge_9_Irv2'
     */
    TmpSignalConversionAtVeAADR_b_AAD_Operat =
        Rte_IrvRead_AADR_MedTEH_EOL_AAD_OperationModeEnbl_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeTHMR_b_AAD_RetrctReq' incorporates:
     *  Inport: '<Root>/VeTHMR_b_AAD_RetrctReq'
     */
    (void)Rte_Read_VeTHMR_b_AAD_RetrctReq_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_AAD_Re);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S1>/VeAADR_e_AAD_CurrPos_read' incorporates:
     *  Merge: '<Root>/Merge_3_Irv'
     */
    rtb_TmpSignalConversionAtVeAADR_e_AAD_Cu =
        Rte_IrvRead_AADR_MedTEH_e_AAD_CurrPos_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_ActAirDamCntrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ActAirDamCntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ActAirDamCntrlCktPerf_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AADD'
     */

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S44>/Constant1'
     *  Constant: '<S44>/Constant2'
     *  Constant: '<S45>/Constant1'
     *  Constant: '<S45>/Constant2'
     *  Constant: '<S47>/Calib'
     *  DataStoreRead: '<S44>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S45>/StatusByte_LIN2_BusOff'
     *  Logic: '<S44>/Logical Operator'
     *  Logic: '<S45>/Logical Operator'
     *  RelationalOperator: '<S44>/Relational Operator1'
     *  RelationalOperator: '<S44>/Relational Operator2'
     *  RelationalOperator: '<S45>/Relational Operator1'
     *  RelationalOperator: '<S45>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S45>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S45>/Bitwise Operator2'
     */
    if (KeAADR_b_AADCommBus_Slct)
    {
        rtb_Logical14 = (((((sint32)AADR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0)
                         && ((((uint32)AADR_ac_DW.StatusByte_LIN1_BusOff) & 64U)
                             == 0U));
    }
    else
    {
        rtb_Logical14 = (((((sint32)AADR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0)
                         && ((((uint32)AADR_ac_DW.StatusByte_LIN2_BusOff) & 64U)
                             == 0U));
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Logic: '<S20>/Logical6' incorporates:
     *  Constant: '<S46>/Constant1'
     *  Constant: '<S46>/Constant2'
     *  Constant: '<S51>/Calib'
     *  Constant: '<S52>/Calib'
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Calib'
     *  DataStoreRead: '<S46>/StatusByte_LostCommActAirDamMod'
     *  Logic: '<S20>/Logical1'
     *  Logic: '<S20>/Logical18'
     *  Logic: '<S20>/Logical21'
     *  Logic: '<S20>/Logical3'
     *  Logic: '<S20>/Logical4'
     *  Logic: '<S20>/Logical5'
     *  Logic: '<S46>/Logical Operator'
     *  RelationalOperator: '<S46>/Relational Operator1'
     *  RelationalOperator: '<S46>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S46>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S46>/Bitwise Operator2'
     */
    rtb_Logical6 = (((((rtb_Logical6 || (KeAADR_b_AAD_IsDiagGlblCnd_Ovrd)) &&
                       ((AADR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct) ||
                        (KeAADR_b_AAD_PropSysActv_Ovrd))) && ((!rtb_Logical14) ||
                       (KeAADR_b_AAD_PerfDiag_LINBusOff_Ovrd))) && ((((((sint32)
                          AADR_ac_DW.StatusByte_LostCommActAirDamMod) & 1) <= 0)
                       || ((((uint32)AADR_ac_DW.StatusByte_LostCommActAirDamMod)
                            & 64U) != 0U)) || (KeAADR_b_AAD_PerfDiag_LOC_Ovrd)))
                    && (AADR_ac_B.VeAADC_b_AAD_DiagEnable));

    /* Logic: '<S20>/Logical14' incorporates:
     *  Constant: '<S41>/Constant'
     *  RelationalOperator: '<S20>/Relational Operator2'
     */
    rtb_Logical14 = ((((uint32)rtb_TmpSignalConversionAtVeAADR_e_AAD_Cu) ==
                      CeAADR_e_SNA) && rtb_Logical6);

    /* Outputs for Atomic SubSystem: '<S20>/Turn_On_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S60>/EdgeRising' */
    /* Logic: '<S62>/AND' incorporates:
     *  Logic: '<S62>/OR1'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    rtb_AND_ph = (rtb_Logical14 && (!AADR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S62>/Unit Delay' */
    AADR_ac_DW.UnitDelay_DSTATE_m = rtb_Logical14;

    /* End of Outputs for SubSystem: '<S60>/EdgeRising' */

    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S20>/TaskTime_0_025s'
     *  Constant: '<S57>/Calib'
     *  Constant: '<S60>/Constant_Value1'
     *  Logic: '<S60>/OR'
     *  Logic: '<S60>/OR1'
     *  MinMax: '<S60>/Minimum'
     *  Sum: '<S60>/Summation'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    if ((!rtb_Logical14) || rtb_AND_ph)
    {
        AADR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }
    else
    {
        AADR_ac_DW.UnitDelay_DSTATE_e = fminf(KeAADR_t_AAD_FA_WaitTime,
            AADR_ac_DW.UnitDelay_DSTATE_e + 0.1F);
    }

    /* End of Switch: '<S60>/Switch1' */

    /* Logic: '<S60>/AND' incorporates:
     *  Constant: '<S57>/Calib'
     *  RelationalOperator: '<S60>/Greater_Than'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    rtb_Logical14 = (rtb_Logical14 && (AADR_ac_DW.UnitDelay_DSTATE_e >=
                      KeAADR_t_AAD_FA_WaitTime));

    /* End of Outputs for SubSystem: '<S20>/Turn_On_Delay_Time' */

    /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
     *  UnitDelay: '<S20>/Unit Delay3'
     */
    rtb_RelationalOperator1_g = (AADR_ac_B.VeAADC_e_AAD_PosReq ==
        AADR_ac_DW.UnitDelay3_DSTATE);

    /* Outputs for Atomic SubSystem: '<S20>/Turn_On_Delay_Time_with_Resetable_delay' */
    /* Logic: '<S20>/Logical Operator7' incorporates:
     *  Logic: '<S61>/OR1'
     */
    rtb_AND_ph = !rtb_RelationalOperator1_g;

    /* Outputs for Atomic SubSystem: '<S61>/EdgeRising_with_resetable_delay' */
    /* Switch: '<S65>/Switch1' incorporates:
     *  Logic: '<S20>/Logical Operator7'
     */
    if (rtb_AND_ph)
    {
        /* UnitDelay: '<S28>/Unit Delay' incorporates:
         *  Constant: '<S63>/Constant1'
         */
        rtb_UnitDelay_l = true;
    }
    else
    {
        /* UnitDelay: '<S28>/Unit Delay' incorporates:
         *  UnitDelay: '<S65>/Unit Delay'
         */
        rtb_UnitDelay_l = AADR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S65>/Switch1' */

    /* Switch: '<S65>/Switch3' incorporates:
     *  Logic: '<S20>/Logical Operator7'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    AADR_ac_DW.UnitDelay_DSTATE_o = (rtb_AND_ph || rtb_RelationalOperator1_g);

    /* Switch: '<S61>/Switch1' incorporates:
     *  Logic: '<S20>/Logical Operator7'
     *  Logic: '<S61>/OR'
     *  Logic: '<S63>/AND'
     *  Logic: '<S63>/OR1'
     *  Switch: '<S64>/Switch1'
     */
    if (rtb_AND_ph || (rtb_RelationalOperator1_g && (!rtb_UnitDelay_l)))
    {
        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S61>/Constant_Value1'
         */
        rtb_Switch1_j = 0.0F;
    }
    else
    {
        if (rtb_AND_ph)
        {
            /* Switch: '<S64>/Switch1' incorporates:
             *  Constant: '<S61>/Constant1'
             */
            AADR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
        }

        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S20>/Constant_Value'
         *  Constant: '<S58>/Calib'
         *  MinMax: '<S61>/Minimum'
         *  Sum: '<S61>/Summation'
         */
        rtb_Switch1_j = fminf(KeAADR_t_AAD_Perf_PosReqNoChgTime_Enbl,
                              AADR_ac_DW.UnitDelay_DSTATE_n + 0.1F);
    }

    /* End of Switch: '<S61>/Switch1' */
    /* End of Outputs for SubSystem: '<S61>/EdgeRising_with_resetable_delay' */
    /* End of Outputs for SubSystem: '<S20>/Turn_On_Delay_Time_with_Resetable_delay' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/AADR_MedTEH' */

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_Logical5_f);

    /* Outputs for Function Call SubSystem: '<Root>/AADR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AADD'
     */
    /* Outputs for Atomic SubSystem: '<S20>/Turn_On_Delay_Time_with_Resetable_delay' */
    /* Switch: '<S64>/Switch3' incorporates:
     *  Logic: '<S20>/Logical Operator7'
     */
    if (rtb_AND_ph)
    {
        /* Switch: '<S64>/Switch1' incorporates:
         *  Constant: '<S61>/Constant1'
         *  UnitDelay: '<S64>/Unit Delay'
         */
        AADR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        /* Switch: '<S64>/Switch1' incorporates:
         *  UnitDelay: '<S64>/Unit Delay'
         */
        AADR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_j;
    }

    /* End of Switch: '<S64>/Switch3' */
    /* End of Outputs for SubSystem: '<S20>/Turn_On_Delay_Time_with_Resetable_delay' */

    /* Outputs for Atomic SubSystem: '<S20>/Signal_Latch_On' */
    /* Logic: '<S59>/OR2' incorporates:
     *  Constant: '<S56>/Calib'
     *  RelationalOperator: '<S20>/Relational Operator4'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    AADR_ac_DW.UnitDelay_DSTATE_j2 = ((AADR_ac_B.VeAADC_e_AAD_PosReq ==
        KeAADR_e_AAD_DeployPos) || (AADR_ac_DW.UnitDelay_DSTATE_j2));

    /* End of Outputs for SubSystem: '<S20>/Signal_Latch_On' */

    /* Logic: '<S20>/Logical12' incorporates:
     *  Constant: '<S48>/Calib'
     *  Logic: '<S22>/Logical Operator2'
     */
    rtb_AND_ph = ((AADR_ac_B.VeAADC_b_AAD_CalibrationFail) &&
                  (KeAADR_b_AAD_Diag_CalFail_Enbl));

    /* Logic: '<S20>/Logical2' incorporates:
     *  Constant: '<S49>/Calib'
     *  Logic: '<S17>/Logical Operator3'
     *  Logic: '<S22>/Logical Operator3'
     */
    rtb_UnitDelay_l = ((rtb_TmpSignalConversionAtVeAADR_b_AAD__d ||
                        rtb_TmpSignalConversionAtVeAADR_b_AAD__g) &&
                       (KeAADR_b_AAD_Diag_Errors_Enbl));

    /* Outputs for Atomic SubSystem: '<S20>/Turn_On_Delay_Time_with_Resetable_delay' */
    /* Logic: '<S20>/Logical11' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S55>/Calib'
     *  Constant: '<S58>/Calib'
     *  Logic: '<S20>/Logical Operator4'
     *  Logic: '<S20>/Logical10'
     *  Logic: '<S20>/Logical12'
     *  Logic: '<S20>/Logical2'
     *  Logic: '<S20>/Logical7'
     *  Logic: '<S20>/Logical8'
     *  Logic: '<S20>/Logical9'
     *  Logic: '<S61>/AND'
     *  RelationalOperator: '<S20>/Relational Operator3'
     *  RelationalOperator: '<S20>/Relational Operator5'
     *  RelationalOperator: '<S61>/Greater_Than'
     *  SignalConversion generated from: '<S1>/VeAADR_e_AAD_CalibrationSts_read'
     */
    VeAADR_b_AAD_PerfDiag_En = ((((((rtb_Logical14 &&
        (KeAADR_b_AAD_SNAEnblCndsOV)) || (((rtb_RelationalOperator1_g &&
        (rtb_Switch1_j >= KeAADR_t_AAD_Perf_PosReqNoChgTime_Enbl)) &&
        (AADR_ac_DW.UnitDelay_DSTATE_j2)) && rtb_Logical6)) && (((uint32)
        rtb_TmpSignalConversionAtVeAADR_e_AAD_Ca) == CeAADR_e_AAD_Calibrated)) ||
        (rtb_AND_ph && rtb_Logical6)) || (rtb_UnitDelay_l && rtb_Logical6)) ||
        (((rtb_TmpSignalConversionAtVeAADR_b_AAD_Er && (((uint32)
        rtb_TmpSignalConversionAtVeAADR_e_AAD_Cu) == CeAADR_e_Deploy0)) &&
          (KeAADR_b_AAD_Diag_OverVolt_Enbl)) && rtb_Logical6));

    /* End of Outputs for SubSystem: '<S20>/Turn_On_Delay_Time_with_Resetable_delay' */

    /* RelationalOperator: '<S26>/Relational Operator3' incorporates:
     *  Constant: '<S26>/Constant3'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Operator2'
     */
    rtb_RelationalOperator1_g = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Logic: '<S26>/Logical1' incorporates:
     *  Constant: '<S25>/Calib'
     *  Logic: '<S19>/AND1'
     */
    rtb_Logical6 = ((VeAADR_b_AAD_PerfDiag_En) && (KeAADR_b_AAD_PerfDiag_XYEnbl));

    /* Logic: '<S22>/Logical Operator' incorporates:
     *  Constant: '<S66>/Constant'
     *  Constant: '<S69>/Calib'
     *  Constant: '<S70>/Calib'
     *  Logic: '<S22>/Logical Operator1'
     *  Logic: '<S22>/Logical Operator4'
     *  RelationalOperator: '<S22>/Relational Operator'
     *  RelationalOperator: '<S22>/Relational Operator2'
     */
    VeAADR_b_AAD_PerfDiag_FailSym = (((((AADR_ac_B.VeAADC_e_AAD_PosReq !=
        rtb_TmpSignalConversionAtVeAADR_e_AAD_Cu) || (rtb_Logical14 &&
        (KeAADR_b_AAD_SNAFaultEnable))) || rtb_AND_ph) || rtb_UnitDelay_l) ||
        ((rtb_TmpSignalConversionAtVeAADR_b_AAD_Er && (((uint32)
        rtb_TmpSignalConversionAtVeAADR_e_AAD_Cu) == CeAADR_e_Deploy0)) &&
         (KeAADR_b_AAD_Diag_OverVolt_Enbl)));

    /* Outputs for Atomic SubSystem: '<S26>/EdgeFalling1' */
    /* Logic: '<S28>/AND' incorporates:
     *  Logic: '<S28>/OR1'
     *  UnitDelay: '<S28>/Unit Delay'
     */
    rtb_Logical14 = ((!rtb_RelationalOperator1_g) &&
                     (AADR_ac_DW.UnitDelay_DSTATE_l4));

    /* Update for UnitDelay: '<S28>/Unit Delay' */
    AADR_ac_DW.UnitDelay_DSTATE_l4 = rtb_RelationalOperator1_g;

    /* End of Outputs for SubSystem: '<S26>/EdgeFalling1' */

    /* Logic: '<S26>/Logical5' incorporates:
     *  Logic: '<S21>/NOT4'
     */
    rtb_Logical5_f = ((rtb_Logical5_f ||
                       rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
                      rtb_Logical14);

    /* Outputs for Atomic SubSystem: '<S27>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S27>/Counter Reset  Enabled ' */
    /* Switch: '<S34>/Switch1' incorporates:
     *  Logic: '<S27>/Fail Counter Reset'
     *  Logic: '<S27>/NOT6'
     *  Switch: '<S34>/Switch2'
     *  Switch: '<S35>/Switch1'
     *  UnitDelay: '<S27>/Unit Delay'
     *  UnitDelay: '<S27>/Unit Delay1'
     */
    if ((rtb_Logical5_f || (AADR_ac_DW.UnitDelay_DSTATE_l)) ||
            (AADR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S34>/Switch1' incorporates:
         *  Constant: '<S34>/Constant Value2'
         */
        VeAADR_Cnt_AAD_PerfDiag_FailCnt = 0U;

        /* Switch: '<S35>/Switch1' incorporates:
         *  Constant: '<S35>/Constant Value2'
         */
        VeAADR_Cnt_AAD_PerfDiag_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical6 && (VeAADR_b_AAD_PerfDiag_FailSym))
        {
            /* Switch: '<S34>/Switch1' incorporates:
             *  Constant: '<S34>/Constant Value1'
             *  Sum: '<S34>/Subtraction'
             *  Switch: '<S34>/Switch2'
             *  UnitDelay: '<S34>/Unit Delay'
             */
            VeAADR_Cnt_AAD_PerfDiag_FailCnt = (uint16)(((uint32)
                VeAADR_Cnt_AAD_PerfDiag_FailCnt) + 1U);
        }

        /* Switch: '<S35>/Switch2' */
        if (rtb_Logical6)
        {
            /* Switch: '<S35>/Switch1' incorporates:
             *  Constant: '<S35>/Constant Value1'
             *  Sum: '<S35>/Subtraction'
             *  Switch: '<S35>/Switch2'
             *  UnitDelay: '<S35>/Unit Delay'
             */
            VeAADR_Cnt_AAD_PerfDiag_SmpCnt = (uint16)(((uint32)
                VeAADR_Cnt_AAD_PerfDiag_SmpCnt) + 1U);
        }

        /* End of Switch: '<S35>/Switch2' */
    }

    /* End of Switch: '<S34>/Switch1' */
    /* End of Outputs for SubSystem: '<S27>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S27>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S27>/Greater Than or Equal ' incorporates:
     *  Constant: '<S23>/Calib'
     */
    AADR_ac_DW.UnitDelay1_DSTATE = (VeAADR_Cnt_AAD_PerfDiag_FailCnt >=
        KeAADR_Cnt_AAD_PerfDiag_FailCnt);

    /* Logic: '<S27>/NOT5' incorporates:
     *  Constant: '<S24>/Calib'
     *  Logic: '<S27>/NOT3'
     *  RelationalOperator: '<S27>/Less Than  or Equal'
     */
    AADR_ac_DW.UnitDelay_DSTATE_l = ((VeAADR_Cnt_AAD_PerfDiag_SmpCnt >=
        KeAADR_Cnt_AAD_PerfDiag_SmpCnt) && (!AADR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S33>/Constant Value'
     *  DataStoreWrite: '<S19>/Data Store Write1'
     *  Switch: '<S39>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        AADR_ac_DW.NeAADR_Cnt_AAD_PerfDiag_MFOP = 0U;
    }
    else
    {
        if (AADR_ac_DW.UnitDelay_DSTATE_l)
        {
            /* MinMax: '<S33>/Minimum2' incorporates:
             *  DataStoreRead: '<S19>/Data Store Read'
             *  Switch: '<S39>/Switch1'
             */
            if (VeAADR_Cnt_AAD_PerfDiag_FailCnt >
                    AADR_ac_DW.NeAADR_Cnt_AAD_PerfDiag_MFOP)
            {
                /* DataStoreWrite: '<S19>/Data Store Write1' incorporates:
                 *  Switch: '<S39>/Switch1'
                 */
                AADR_ac_DW.NeAADR_Cnt_AAD_PerfDiag_MFOP =
                    VeAADR_Cnt_AAD_PerfDiag_FailCnt;
            }

            /* End of MinMax: '<S33>/Minimum2' */
        }
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S26>/Fail' incorporates:
     *  EnablePort: '<S30>/Enable'
     */
    if (AADR_ac_DW.UnitDelay1_DSTATE)
    {
        /* Merge: '<S26>/Merge' incorporates:
         *  Constant: '<S36>/Constant'
         *  SignalConversion generated from: '<S30>/FaultSts'
         */
        AADR_ac_B.Merge = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S26>/Fail' */

    /* Outputs for Enabled SubSystem: '<S26>/Init' incorporates:
     *  EnablePort: '<S31>/Enable'
     */
    if (rtb_Logical5_f)
    {
        /* Merge: '<S26>/Merge' incorporates:
         *  Constant: '<S37>/Constant'
         *  SignalConversion generated from: '<S31>/FaultSts'
         */
        AADR_ac_B.Merge = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S26>/Init' */

    /* Outputs for Enabled SubSystem: '<S26>/Pass' incorporates:
     *  EnablePort: '<S32>/Enable'
     */
    if (AADR_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Merge: '<S26>/Merge' incorporates:
         *  Constant: '<S38>/Constant'
         *  SignalConversion generated from: '<S32>/FaultSts'
         */
        AADR_ac_B.Merge = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S26>/Pass' */

    /* RelationalOperator: '<S26>/Relational Operator' incorporates:
     *  Constant: '<S29>/Constant'
     *  Merge: '<S26>/Merge'
     */
    VeAADD_b_AAD_PerfDiag_FltDtct = (((uint32)AADR_ac_B.Merge) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S20>/Unit Delay3' */
    AADR_ac_DW.UnitDelay3_DSTATE = AADR_ac_B.VeAADC_e_AAD_PosReq;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AAD_Calib_Control'
     */
    /* Logic: '<S18>/Logical2' */
    VeAADC_b_AAD_CalibrationIsActv = !rtb_TmpSignalConversionAtVeAADR_b_AAD_Ca;

    /* RelationalOperator: '<S73>/Relational Operator1' incorporates:
     *  Constant: '<S98>/Constant'
     *  SignalConversion generated from: '<S1>/VeAADR_e_AAD_CalibrationSts_read'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD_Ca = (((uint32)
        rtb_TmpSignalConversionAtVeAADR_e_AAD_Ca) == CeAADR_e_AAD_Calibrated);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/AADR_MedTEH' */

    /* Inport: '<Root>/VeAATR_T_EstAmbAirTemp' */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&tmpRead_3);

    /* Inport: '<Root>/VePLTR_a_LatAccel' */
    (void)Rte_Read_VePLTR_a_LatAccel_Value(&tmpRead_0);

    /* Inport: '<Root>/VePLTR_a_LongAccel' */
    (void)Rte_Read_VePLTR_a_LongAccel_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/AADR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AAD_Calib_Control'
     */
    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S79>/Constant1'
     *  Constant: '<S79>/Constant2'
     *  Constant: '<S80>/Constant1'
     *  Constant: '<S80>/Constant2'
     *  Constant: '<S84>/Calib'
     *  DataStoreRead: '<S79>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S80>/StatusByte_LIN2_BusOff'
     *  Logic: '<S79>/Logical Operator'
     *  Logic: '<S80>/Logical Operator'
     *  RelationalOperator: '<S79>/Relational Operator1'
     *  RelationalOperator: '<S79>/Relational Operator2'
     *  RelationalOperator: '<S80>/Relational Operator1'
     *  RelationalOperator: '<S80>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S79>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S79>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S80>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S80>/Bitwise Operator2'
     */
    if (KeAADR_b_AADCommBus_Slct)
    {
        rtb_Logical14 = (((((sint32)AADR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0)
                         && ((((uint32)AADR_ac_DW.StatusByte_LIN1_BusOff) & 64U)
                             == 0U));
    }
    else
    {
        rtb_Logical14 = (((((sint32)AADR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0)
                         && ((((uint32)AADR_ac_DW.StatusByte_LIN2_BusOff) & 64U)
                             == 0U));
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Logic: '<S18>/Logical Operator1' incorporates:
     *  Constant: '<S81>/Constant1'
     *  Constant: '<S81>/Constant2'
     *  DataStoreRead: '<S81>/StatusByte_LostCommActAirDamMod'
     *  Logic: '<S81>/Logical Operator'
     *  RelationalOperator: '<S81>/Relational Operator1'
     *  RelationalOperator: '<S81>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S81>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S81>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (rtb_Logical14 || (((((sint32)
        AADR_ac_DW.StatusByte_LostCommActAirDamMod) & 1) > 0) && ((((uint32)
        AADR_ac_DW.StatusByte_LostCommActAirDamMod) & 64U) == 0U)));

    /* Logic: '<S77>/Logical Operator1' incorporates:
     *  Logic: '<S18>/Logical Operator2'
     *  Logic: '<S76>/Logical3'
     *  Logic: '<S76>/Logical4'
     *  Logic: '<S94>/Logical5'
     */
    rtb_Logical5_f = !rtb_TmpSignalConversionAtVeCSVR_b_VehSpd;
    rtb_TmpSignalConversionAtVeAADR_b_AAD__d =
        ((!rtb_TmpSignalConversionAtVeAADR_b_AAD__d) &&
         (!rtb_TmpSignalConversionAtVeAADR_b_AAD__g));

    /* Logic: '<S77>/Logical Operator' incorporates:
     *  Constant: '<S106>/Constant'
     *  Constant: '<S107>/Constant'
     *  Constant: '<S108>/Constant'
     *  Constant: '<S109>/Calib'
     *  Constant: '<S110>/Calib'
     *  Constant: '<S111>/Calib'
     *  Constant: '<S112>/Calib'
     *  Constant: '<S113>/Calib'
     *  Logic: '<S77>/Logical Operator1'
     *  Logic: '<S77>/Logical Operator2'
     *  Logic: '<S77>/Logical1'
     *  Logic: '<S77>/Logical2'
     *  Logic: '<S77>/Logical25'
     *  RelationalOperator: '<S77>/Comparison1'
     *  RelationalOperator: '<S77>/Comparison2'
     *  RelationalOperator: '<S77>/Comparison3'
     *  RelationalOperator: '<S77>/Comparison4'
     *  RelationalOperator: '<S77>/Comparison5'
     *  RelationalOperator: '<S77>/Comparison6'
     *  RelationalOperator: '<S77>/Comparison7'
     *  RelationalOperator: '<S77>/Comparison8'
     */
    VeAADC_b_AAD_EnableCondsForCal =
        (((((((rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy >=
               KeAADR_U_AAD_MinBattVltg_Alw) &&
              (rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy <=
               KeAADR_U_AAD_MaxBattVltg_Alw)) && ((((uint32)
                rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
               CeTRGR_e_TransRangeDrive) || (((uint32)
                rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
               CeTRGR_e_TransRangeNeutral))) &&
            ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >=
              KeAADR_v_AAD_MinVehSpdToEnblCal) &&
             (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd <=
              KeAADR_v_AAD_MaxVehSpdToEnblCal))) && (tmpRead_3 >=
            KeAADR_T_AAD_MinAmbTempForCal)) &&
          (!rtb_TmpSignalConversionAtVeTHMR_b_AAD_Re)) &&
         ((((rtb_TmpSignalConversionAtVeAADR_b_AAD__d && (((uint32)
               rtb_TmpSignalConversionAtVePLTR_e_ESMTra) !=
              CeTRGR_e_TransRangeIllegal)) && rtb_Logical5_f) &&
           (!rtb_TmpSignalConversionAtVeDFIR_b_PostCo)) &&
          (!rtb_TmpSignalConversionAtVeAADR_b_AAD_Er)));

    /* Logic: '<S76>/Logical1' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S105>/Calib'
     *  Constant: '<S99>/Constant'
     *  Logic: '<S76>/Logical2'
     *  Logic: '<S76>/Logical25'
     *  RelationalOperator: '<S76>/Comparison10'
     *  RelationalOperator: '<S76>/Comparison2'
     *  RelationalOperator: '<S76>/Comparison4'
     *  RelationalOperator: '<S76>/Comparison5'
     *  RelationalOperator: '<S76>/Comparison7'
     *  RelationalOperator: '<S76>/Comparison8'
     *  RelationalOperator: '<S76>/Comparison9'
     */
    VeAADC_b_AAD_DeployEnblConds =
        (((((((((rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy >=
                 KeAADR_U_AAD_MinBattVltg_Alw) &&
                (rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy <=
                 KeAADR_U_AAD_MaxBattVltg_Alw)) && (((uint32)
                 rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                CeTRGR_e_TransRangeDrive)) &&
              (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >=
               KeAADR_v_AAD_VehSpdThrToDeploy)) && (((uint32)
               rtb_TmpSignalConversionAtVePLTR_e_ESMTra) !=
              CeTRGR_e_TransRangeIllegal)) && rtb_Logical5_f) && (tmpRead <=
            KeAADR_a_AAD_MaxLongAccel)) && (tmpRead_0 <=
           KeAADR_a_AAD_MaxLatAccel)) &&
         rtb_TmpSignalConversionAtVeAADR_b_AAD__d);

    /* RelationalOperator: '<S94>/Comparison4' incorporates:
     *  Constant: '<S126>/Calib'
     */
    rtb_TmpSignalConversionAtVeAADR_b_AAD__g =
        (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd <=
         KeAADR_v_AAD_VehSpdThrToRetract);

    /* Outputs for Atomic SubSystem: '<S94>/Turn_On_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S129>/EdgeRising' */
    /* Logic: '<S132>/AND' incorporates:
     *  Logic: '<S132>/OR1'
     *  UnitDelay: '<S132>/Unit Delay'
     */
    rtb_Logical5_f = (rtb_TmpSignalConversionAtVeAADR_b_AAD__g &&
                      (!AADR_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S132>/Unit Delay' */
    AADR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeAADR_b_AAD__g;

    /* End of Outputs for SubSystem: '<S129>/EdgeRising' */

    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S124>/Calib'
     *  Constant: '<S125>/Calib'
     *  Constant: '<S129>/Constant Value1'
     *  Logic: '<S129>/OR'
     *  Logic: '<S129>/OR1'
     *  MinMax: '<S129>/Minimum'
     *  Sum: '<S129>/Summation'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeAADR_b_AAD__g) || rtb_Logical5_f)
    {
        AADR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        AADR_ac_DW.UnitDelay_DSTATE = fminf(KeAADR_t_AAD_TmDlyToRetract,
            KeAADR_t_AAD_TskRate + AADR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S129>/Switch1' */
    /* End of Outputs for SubSystem: '<S94>/Turn_On_Delay_Time' */

    /* Outputs for Atomic SubSystem: '<S94>/Turn_Off_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S127>/EdgeFalling' */
    /* Logic: '<S130>/AND' incorporates:
     *  Logic: '<S130>/OR1'
     *  UnitDelay: '<S130>/Unit Delay'
     */
    rtb_Logical5_f = ((!rtb_TmpSignalConversionAtVeBRKR_b_ASRAct) &&
                      (AADR_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S130>/Unit Delay' */
    AADR_ac_DW.UnitDelay_DSTATE_i = rtb_TmpSignalConversionAtVeBRKR_b_ASRAct;

    /* End of Outputs for SubSystem: '<S127>/EdgeFalling' */

    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S123>/Calib'
     *  Constant: '<S125>/Calib'
     *  Constant: '<S127>/Constant Value1'
     *  MinMax: '<S127>/Minimum'
     *  Sum: '<S127>/Summation'
     *  UnitDelay: '<S127>/Unit Delay'
     */
    if (rtb_Logical5_f)
    {
        AADR_ac_DW.UnitDelay_DSTATE_a = KeAADR_t_AAD_TmDlyASDetected;
    }
    else
    {
        AADR_ac_DW.UnitDelay_DSTATE_a = fmaxf(AADR_ac_DW.UnitDelay_DSTATE_a -
            KeAADR_t_AAD_TskRate, 0.0F);
    }

    /* End of Switch: '<S127>/Switch' */
    /* End of Outputs for SubSystem: '<S94>/Turn_Off_Delay_Time' */

    /* Outputs for Atomic SubSystem: '<S94>/Turn_Off_Delay_Time1' */
    /* Outputs for Atomic SubSystem: '<S128>/EdgeFalling' */
    /* Logic: '<S131>/AND' incorporates:
     *  Logic: '<S131>/OR1'
     *  UnitDelay: '<S131>/Unit Delay'
     */
    rtb_Logical5_f = ((!rtb_TmpSignalConversionAtVeBRKR_b_ABSAct) &&
                      (AADR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S131>/Unit Delay' */
    AADR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeBRKR_b_ABSAct;

    /* End of Outputs for SubSystem: '<S128>/EdgeFalling' */

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S125>/Calib'
     *  Constant: '<S128>/Constant Value1'
     *  MinMax: '<S128>/Minimum'
     *  Sum: '<S128>/Summation'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    if (rtb_Logical5_f)
    {
        AADR_ac_DW.UnitDelay_DSTATE_j = KeAADR_t_AAD_TmDlyABSDetected;
    }
    else
    {
        AADR_ac_DW.UnitDelay_DSTATE_j = fmaxf(AADR_ac_DW.UnitDelay_DSTATE_j -
            KeAADR_t_AAD_TskRate, 0.0F);
    }

    /* End of Switch: '<S128>/Switch' */
    /* End of Outputs for SubSystem: '<S94>/Turn_Off_Delay_Time1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/AADR_MedTEH' */

    /* Inport: '<Root>/VeBRKR_b_ABSActiveFA' */
    (void)Rte_Read_VeBRKR_b_ABSActiveFA_Value(&tmpRead_2);

    /* Inport: '<Root>/VeBRKR_b_ASRActive_FA' */
    (void)Rte_Read_VeBRKR_b_ASRActive_FA_Value(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<Root>/AADR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AAD_Calib_Control'
     */
    /* Outputs for Atomic SubSystem: '<S94>/Turn_On_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S94>/Turn_Off_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S94>/Turn_Off_Delay_Time1' */
    /* Logic: '<S94>/Logical4' incorporates:
     *  Constant: '<S114>/Constant'
     *  Constant: '<S115>/Constant'
     *  Constant: '<S116>/Constant'
     *  Constant: '<S117>/Constant'
     *  Constant: '<S118>/Calib'
     *  Constant: '<S119>/Calib'
     *  Constant: '<S120>/Calib'
     *  Constant: '<S121>/Calib'
     *  Constant: '<S124>/Calib'
     *  Constant: '<S127>/Constant Value2'
     *  Constant: '<S128>/Constant Value2'
     *  Logic: '<S127>/AND'
     *  Logic: '<S128>/AND'
     *  Logic: '<S129>/AND'
     *  Logic: '<S94>/Logical Operator2'
     *  Logic: '<S94>/Logical1'
     *  Logic: '<S94>/Logical2'
     *  Logic: '<S94>/Logical3'
     *  RelationalOperator: '<S127>/Greater  Than'
     *  RelationalOperator: '<S128>/Greater  Than'
     *  RelationalOperator: '<S129>/Greater  Than'
     *  RelationalOperator: '<S94>/Comparison1'
     *  RelationalOperator: '<S94>/Comparison2'
     *  RelationalOperator: '<S94>/Comparison3'
     *  RelationalOperator: '<S94>/Comparison5'
     *  RelationalOperator: '<S94>/Comparison6'
     *  RelationalOperator: '<S94>/Comparison7'
     *  RelationalOperator: '<S94>/Comparison8'
     *  RelationalOperator: '<S94>/Comparison9'
     *  UnitDelay: '<S127>/Unit Delay'
     *  UnitDelay: '<S128>/Unit Delay'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    VeAADC_b_AAD_RetractEnblConds =
        ((((((((((rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy >=
                  KeAADR_U_AAD_MaxBattVltg_Alw) ||
                 (rtb_TmpSignalConversionAtVeAADR_b_AAD__g &&
                  (AADR_ac_DW.UnitDelay_DSTATE >= KeAADR_t_AAD_TmDlyToRetract)))
                || (((((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                      CeTRGR_e_TransRangePark) || (((uint32)
                    rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                   CeTRGR_e_TransRangeNeutral)) || (((uint32)
                   rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                  CeTRGR_e_TransRangeReverse))) ||
               (rtb_TmpSignalConversionAtVeBRKR_b_ASRAct ||
                (AADR_ac_DW.UnitDelay_DSTATE_a > 0.0F))) ||
              (rtb_TmpSignalConversionAtVeBRKR_b_ABSAct ||
               (AADR_ac_DW.UnitDelay_DSTATE_j > 0.0F))) ||
             rtb_TmpSignalConversionAtVeAADR_b_AAD_Er) ||
            rtb_TmpSignalConversionAtVeTHMR_b_AAD_Re) || ((((((uint32)
                rtb_TmpSignalConversionAtVePLTR_e_ESMTra) ==
               CeTRGR_e_TransRangeIllegal) ||
              rtb_TmpSignalConversionAtVeCSVR_b_VehSpd) || tmpRead_1) ||
            tmpRead_2)) || (((rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd ==
             KeAADR_e_AAD_TrrnMdStOne) ||
            (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd ==
             KeAADR_e_AAD_TrrnMdStTwo)) ||
                            (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd ==
            KeAADR_e_AAD_TrrnMdStThree))) &&
         rtb_TmpSignalConversionAtVeAADR_b_AAD__d);

    /* End of Outputs for SubSystem: '<S94>/Turn_Off_Delay_Time1' */
    /* End of Outputs for SubSystem: '<S94>/Turn_Off_Delay_Time' */
    /* End of Outputs for SubSystem: '<S94>/Turn_On_Delay_Time' */

    /* Logic: '<S18>/Logical Operator3' */
    rtb_TmpSignalConversionAtVeAADR_b_AAD_er =
        (rtb_TmpSignalConversionAtVeAADR_b_AAD_er ||
         rtb_TmpSignalConversionAtVeAADR_b_AAD__h);

    /* Chart: '<S18>/AAD_Control_Calib' incorporates:
     *  Constant: '<S88>/Calib'
     *  Constant: '<S92>/Calib'
     *  SignalConversion generated from: '<S1>/VeAADF_e_AAD_IO_CntrlSt_read'
     */
    /* Gateway: AADR_MedTEH/AAD_Calib_Control/AAD_Control_Calib */
    /* During: AADR_MedTEH/AAD_Calib_Control/AAD_Control_Calib */
    if (((uint32)AADR_ac_DW.is_active_c2_AADR_ac) == 0U)
    {
        /* Entry: AADR_MedTEH/AAD_Calib_Control/AAD_Control_Calib */
        AADR_ac_DW.is_active_c2_AADR_ac = 1U;

        /* Entry Internal: AADR_MedTEH/AAD_Calib_Control/AAD_Control_Calib */
        /* Transition: '<S72>:352' */
        AADR_ac_B.VeAADC_b_AAD_DiagEnable = true;
        AADR_ac_DW.is_c2_AADR_ac = AADR_ac_IN_AAD_NORMAL_CONTROL;

        /* Entry Internal 'AAD_NORMAL_CONTROL': '<S72>:351' */
        /* Transition: '<S72>:237' */
        AADR_ac_DW.LeAADR_b_CalAfterBatDiscDone = false;
        AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S72>:68' */
        AADR_ac_B.VeAADC_b_AAD_CalReq = false;
        AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;

        /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
         *  Constant: '<S85>/Calib'
         */
        AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
        AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
        VeAADR_i_AAD_State = 0U;
    }
    else if (((sint32)AADR_ac_DW.is_c2_AADR_ac) == 1)
    {
        /* During 'AAD_EOL_DID': '<S72>:366' */
        switch (AADR_ac_DW.is_AAD_EOL_DID)
        {
          case AADR_ac_IN_AAD_EOL_CALIBRATION_CMD:
            VeAADR_i_AAD_State = 9U;

            /* During 'AAD_EOL_CALIBRATION_CMD': '<S72>:411' */
            if ((!VeAADC_b_AAD_CalibrationIsActv) &&
                    (AADR_ac_DW.LeAADR_t_AAD_CalWaitTime >=
                     KeAADR_t_AAD_CalWaitTime))
            {
                /* Transition: '<S72>:421' */
                /* Exit 'AAD_EOL_CALIBRATION_CMD': '<S72>:411' */
                VeAADR_b_AAD_CalibrationRequestFlag = false;
                AADR_ac_B.VeAADC_b_AAD_InitialIP_CalRq = false;
                AADR_ac_DW.is_AAD_EOL_DID = AADR_ac_IN_NO_ACTIVE_CHILD;
                AADR_ac_DW.is_c2_AADR_ac = AADR_ac_IN_AAD_NORMAL_CONTROL;

                /* Entry Internal 'AAD_NORMAL_CONTROL': '<S72>:351' */
                /* Transition: '<S72>:237' */
                AADR_ac_DW.LeAADR_b_CalAfterBatDiscDone = false;
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S72>:68' */
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;

                /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
                 *  Constant: '<S85>/Calib'
                 */
                AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
                AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
                VeAADR_i_AAD_State = 0U;
            }
            else
            {
                AADR_ac_DW.LeAADR_t_AAD_CalWaitTime += KeAADR_t_AAD_TskRate;
            }
            break;

          case AADR_ac_IN_AAD_EOL_POSITION_CMD:
            VeAADR_i_AAD_State = 10U;

            /* During 'AAD_EOL_POSITION_CMD': '<S72>:412' */
            if (((uint32)TmpSignalConversionAtVeAADF_e_AAD_IO_Cnt) !=
                    CeTAIR_e_Short_Term_Adjustment)
            {
                /* Transition: '<S72>:423' */
                /* Exit 'AAD_EOL_POSITION_CMD': '<S72>:412' */
                AADR_ac_DW.is_AAD_EOL_DID = AADR_ac_IN_NO_ACTIVE_CHILD;
                AADR_ac_DW.is_c2_AADR_ac = AADR_ac_IN_AAD_NORMAL_CONTROL;

                /* Entry Internal 'AAD_NORMAL_CONTROL': '<S72>:351' */
                /* Transition: '<S72>:237' */
                AADR_ac_DW.LeAADR_b_CalAfterBatDiscDone = false;
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S72>:68' */
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;

                /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
                 *  Constant: '<S85>/Calib'
                 */
                AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
                AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
                VeAADR_i_AAD_State = 0U;
            }
            else
            {
                /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
                 *  SignalConversion generated from: '<S1>/VeAADF_e_AAD_PstnCmnd_read'
                 */
                AADR_ac_B.VeAADC_e_AAD_PosReq =
                    TmpSignalConversionAtVeAADF_e_AAD_PstnCm;
            }
            break;

          default:
            VeAADR_i_AAD_State = 8U;

            /* During 'AAD_OPERATION_MODE_DISABLE': '<S72>:410' */
            if (TmpSignalConversionAtVeAADR_b_AAD_Operat)
            {
                /* Transition: '<S72>:419' */
                AADR_ac_DW.is_AAD_EOL_DID = AADR_ac_IN_NO_ACTIVE_CHILD;
                AADR_ac_DW.is_c2_AADR_ac = AADR_ac_IN_AAD_NORMAL_CONTROL;

                /* Entry Internal 'AAD_NORMAL_CONTROL': '<S72>:351' */
                /* Transition: '<S72>:237' */
                AADR_ac_DW.LeAADR_b_CalAfterBatDiscDone = false;
                AADR_ac_DW.is_AAD_NORMAL_CONTROL = AADR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S72>:68' */
                AADR_ac_B.VeAADC_b_AAD_CalReq = false;
                AADR_ac_B.VeAADC_b_AAD_CalibrationFail = false;

                /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
                 *  Constant: '<S85>/Calib'
                 */
                AADR_ac_B.VeAADC_e_AAD_PosReq = KeAADR_e_AAD_DefaultPos;
                AADR_ac_DW.LeAADR_t_AAD_StartWaitTime = 0.0F;
                VeAADR_i_AAD_State = 0U;
            }
            break;
        }
    }
    else
    {
        AADR_ac_AAD_NORMAL_CONTROL(&TmpSignalConversionAtVeAADR_b_AAD_Operat,
            &rtb_TmpSignalConversionAtVeAADR_b_AAD_Ca,
            &rtb_TmpSignalConversionAtVeDFIR_b_PostCo,
            &rtb_TmpSignalConversionAtVeAADR_b_AAD_er,
            &TmpSignalConversionAtVeAADF_e_AAD_IO_Cnt);
    }

    /* End of Chart: '<S18>/AAD_Control_Calib' */

    /* Outport: '<Root>/VeAADR_b_AAD_CalReq' incorporates:
     *  Logic: '<S75>/AND'
     *  SignalConversion generated from: '<S1>/VeAADC_b_AAD_CalReq'
     */
    (void)Rte_Write_VeAADR_b_AAD_CalReq_Value(AADR_ac_B.VeAADC_b_AAD_CalReq);

    /* Outport: '<Root>/VeAADR_b_AAD_InitialIP_CalRq' incorporates:
     *  Logic: '<S74>/AND'
     *  SignalConversion generated from: '<S1>/VeAADC_b_AAD_InitialIP_CalRq'
     */
    (void)Rte_Write_VeAADR_b_AAD_InitialIP_CalRq_Value
        (AADR_ac_B.VeAADC_b_AAD_InitialIP_CalRq);

    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S95>/Constant'
     *  Constant: '<S96>/Constant'
     *  Switch: '<S71>/Switch2'
     */
    if (VeAADC_b_AAD_CalibrationIsActv)
    {
        tmp = CeAADR_e_AAD_CalInProgress;
    }
    else if (rtb_TmpSignalConversionAtVeAADR_b_AAD_Ca)
    {
        /* Switch: '<S71>/Switch2' incorporates:
         *  Constant: '<S97>/Constant'
         */
        tmp = CeAADR_e_AAD_CalPassed;
    }
    else
    {
        tmp = CeAADR_e_AAD_CalFailed;
    }

    /* End of Switch: '<S71>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAADR_e_AAD_EOLCalResults' incorporates:
     *  SignalConversion generated from: '<S1>/VeAADC_e_AAD_EOLCalResults'
     */
    (void)Rte_Write_VeAADR_e_AAD_EOLCalResults_Value(tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AAD_Calib_Control'
     */
    /* Outport: '<Root>/VeAADR_e_AAD_PosReq' incorporates:
     *  DataTypeConversion: '<S78>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeAADC_e_AAD_PosReq'
     */
    (void)Rte_Write_VeAADR_e_AAD_PosReq_Value(AADR_ac_B.VeAADC_e_AAD_PosReq);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAADR_e_FaultSts_ActAirDamCntrlCktPerf' incorporates:
     *  Merge: '<S26>/Merge'
     *  SignalConversion generated from: '<S1>/VeAADR_e_FaultSts_ActAirDamCntrlCktPerf'
     */
    (void)Rte_Write_VeAADR_e_FaultSts_ActAirDamCntrlCktPerf_Value
        (AADR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<Root>/AADR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, AADR_CODE) DidWrite_RWDB62F_ActAirDamOperMd(void)
{
    boolean tmpRead;

    /* Inport: '<Root>/VeDCAB_b_RWDB62F_ActAirDamOperMd_Op' */
    (void)Rte_Read_VeDCAB_b_RWDB62F_ActAirDamOperMd_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWDB62F_ActAirDamOperMd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AAD_OperationModeEnbl'
     */
    /* Outport: '<Root>/VeAADR_b_AAD_OperationModeEnbl' incorporates:
     *  SignalConversion: '<S15>/Signal Copy'
     *  SignalConversion generated from: '<S15>/VeDCAB_b_RWDB62F_ActAirDamOperMd'
     */
    (void)Rte_Write_VeAADR_b_AAD_OperationModeEnbl_Value(tmpRead);

    /* Merge: '<Root>/Merge_9_Irv2' incorporates:
     *  SignalConversion generated from: '<S15>/VeAADI_b_AAD_OperationModeEnbl_write'
     *  SignalConversion generated from: '<S15>/VeDCAB_b_RWDB62F_ActAirDamOperMd'
     */
    Rte_IrvWrite_DidWrite_RWDB62F_ActAirDamOperMd_EOL_AAD_OperationModeEnbl_Init_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWDB62F_ActAirDamOperMd' */
}

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) FsftAADR_b_AAD_CurrPos(void)
{

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftAADR_b_AAD_CurrPos' */
    /* Outport: '<Root>/VeAADR_b_AAD_CurrPosFA' incorporates:
     *  Chart: '<S4>/FsftAADR_b_AAD_CurrPosChrt'
     *  SignalConversion generated from: '<S4>/VeAADR_b_AAD_CurrPosFA'
     */
    /* Gateway: FsftAADR_b_AAD_CurrPos/FsftAADR_b_AAD_CurrPosChrt */
    /* During: FsftAADR_b_AAD_CurrPos/FsftAADR_b_AAD_CurrPosChrt */
    /* Entry Internal: FsftAADR_b_AAD_CurrPos/FsftAADR_b_AAD_CurrPosChrt */
    /* Transition: '<S145>:2' */
    (void)Rte_Write_VeAADR_b_AAD_CurrPosFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftAADR_b_AAD_CurrPos' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) IOControl_IOCD030_ActAirDamCon(void)
{

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_Pos tmpRead;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCont;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

#endif

#if Rte_SysCon_Variant_AADR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD030_ActAirDamCon' */
    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_AAD_PstnCmnd' */
    /* SignalConversion generated from: '<S16>/VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD030_ActAirDamCon_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCont);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_AAD_PstnCmnd' */

    /* Inport: '<Root>/VeDCAB_e_IOCD030_ActAirDamCon' */
    (void)Rte_Read_VeDCAB_e_IOCD030_ActAirDamCon_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_AAD_PstnCmnd' */
    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S156>/Constant'
     *  Constant: '<S157>/Constant'
     *  Constant: '<S158>/Constant'
     *  Constant: '<S160>/Constant'
     *  RelationalOperator: '<S16>/Equal1'
     *  RelationalOperator: '<S16>/Equal2'
     *  Switch: '<S16>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
             CeDCAB_e_IO_ReturnControl)
    {
        /* Switch: '<S16>/Switch1' incorporates:
         *  Constant: '<S159>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }

    /* End of Switch: '<S16>/Switch' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S16>/VeAADF_e_AAD_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD030_ActAirDamCon_EOL_AAD_IO_CntrlSt_Init_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOCD030_ActAirDamCon'
     *  SignalConversion generated from: '<S16>/VeAADF_e_AAD_PstnCmnd_write'
     *  SignalConversion generated from: '<S16>/VeDCAB_e_IOCD030_ActAirDamCon'
     */
    Rte_IrvWrite_IOControl_IOCD030_ActAirDamCon_EOL_AAD_PstnCmnd_Init_write_IRV
        (tmpRead);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_AAD_PstnCmnd' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD030_ActAirDamCon' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_b_AAD_CalibrationActv(VAR(boolean, AUTOMATIC)
    LeAADR_b_AAD_CalibrationActv)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_CalibrationActv);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_b_AAD_CalibrationActv' */
    /* Outport: '<Root>/VeAADR_b_AAD_CalibrationActv' incorporates:
     *  SignalConversion generated from: '<S5>/VeAADR_b_AAD_CalibrationActv'
     *  SignalConversion generated from: '<S5>/LeAADR_b_AAD_CalibrationActv'
     */
    /* Gateway: PokeAADR_b_AAD_CalibrationActv/PokeAADR_b_AAD_CalibrationActvChrt */
    /* During: PokeAADR_b_AAD_CalibrationActv/PokeAADR_b_AAD_CalibrationActvChrt */
    /* Entry Internal: PokeAADR_b_AAD_CalibrationActv/PokeAADR_b_AAD_CalibrationActvChrt */
    /* Transition: '<S146>:2' */
    (void)Rte_Write_VeAADR_b_AAD_CalibrationActv_Value
        (LeAADR_b_AAD_CalibrationActv);

    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/LeAADR_b_AAD_CalibrationActv'
     *  SignalConversion generated from: '<S5>/VeAADR_b_AAD_CalibrationActv_write'
     */
    Rte_IrvWrite_PokeAADR_b_AAD_CalibrationActv_AAD_CalibrationActv_Init_write_IRV
        (LeAADR_b_AAD_CalibrationActv);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_b_AAD_CalibrationActv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_b_AAD_ErrMechBreak(VAR(boolean, AUTOMATIC)
    LeAADR_b_AAD_ErrMechBreak)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_ErrMechBreak);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_b_AAD_ErrMechBreak' */
    /* Outport: '<Root>/VeAADR_b_AAD_ErrMechBreak' incorporates:
     *  SignalConversion generated from: '<S6>/VeAADR_b_AAD_ErrMechBreak'
     *  SignalConversion generated from: '<S6>/LeAADR_b_AAD_ErrMechBreak'
     */
    /* Gateway: PokeAADR_b_AAD_ErrMechBreak/PokeAADR_b_AAD_ErrMechBreakChrt */
    /* During: PokeAADR_b_AAD_ErrMechBreak/PokeAADR_b_AAD_ErrMechBreakChrt */
    /* Entry Internal: PokeAADR_b_AAD_ErrMechBreak/PokeAADR_b_AAD_ErrMechBreakChrt */
    /* Transition: '<S147>:2' */
    (void)Rte_Write_VeAADR_b_AAD_ErrMechBreak_Value(LeAADR_b_AAD_ErrMechBreak);

    /* Merge: '<Root>/Merge_8_Irv' incorporates:
     *  SignalConversion generated from: '<S6>/LeAADR_b_AAD_ErrMechBreak'
     *  SignalConversion generated from: '<S6>/VeAADR_b_AAD_ErrMechBreak_write'
     */
    Rte_IrvWrite_PokeAADR_b_AAD_ErrMechBreak_AAD_ErrMechBreak_Init_write_IRV
        (LeAADR_b_AAD_ErrMechBreak);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_b_AAD_ErrMechBreak' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_b_AAD_ErrMechStuck(VAR(boolean, AUTOMATIC)
    LeAADR_b_AAD_ErrMechStuck)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_ErrMechStuck);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_b_AAD_ErrMechStuck' */
    /* Outport: '<Root>/VeAADR_b_AAD_ErrMechStuck' incorporates:
     *  SignalConversion generated from: '<S7>/VeAADR_b_AAD_ErrMechStuck'
     *  SignalConversion generated from: '<S7>/LeAADR_b_AAD_ErrMechStuck'
     */
    /* Gateway: PokeAADR_b_AAD_ErrMechStuck/PokeAADR_b_AAD_ErrMechStuckChrt */
    /* During: PokeAADR_b_AAD_ErrMechStuck/PokeAADR_b_AAD_ErrMechStuckChrt */
    /* Entry Internal: PokeAADR_b_AAD_ErrMechStuck/PokeAADR_b_AAD_ErrMechStuckChrt */
    /* Transition: '<S148>:2' */
    (void)Rte_Write_VeAADR_b_AAD_ErrMechStuck_Value(LeAADR_b_AAD_ErrMechStuck);

    /* Merge: '<Root>/Merge_9_Irv' incorporates:
     *  SignalConversion generated from: '<S7>/LeAADR_b_AAD_ErrMechStuck'
     *  SignalConversion generated from: '<S7>/VeAADR_b_AAD_ErrMechStuck_write'
     */
    Rte_IrvWrite_PokeAADR_b_AAD_ErrMechStuck_AAD_ErrMechStuck_Init_write_IRV
        (LeAADR_b_AAD_ErrMechStuck);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_b_AAD_ErrMechStuck' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_b_AAD_ErrOverTemp(VAR(boolean, AUTOMATIC)
    LeAADR_b_AAD_ErrOverTemp)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_ErrOverTemp);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_b_AAD_ErrOverTemp' */
    /* Outport: '<Root>/VeAADR_b_AAD_ErrOverTemp' incorporates:
     *  SignalConversion generated from: '<S8>/VeAADR_b_AAD_ErrOverTemp'
     *  SignalConversion generated from: '<S8>/LeAADR_b_AAD_ErrOverTemp'
     */
    /* Gateway: PokeAADR_b_AAD_ErrOverTemp/PokeAADR_b_AAD_ErrOverTempChrt */
    /* During: PokeAADR_b_AAD_ErrOverTemp/PokeAADR_b_AAD_ErrOverTempChrt */
    /* Entry Internal: PokeAADR_b_AAD_ErrOverTemp/PokeAADR_b_AAD_ErrOverTempChrt */
    /* Transition: '<S149>:2' */
    (void)Rte_Write_VeAADR_b_AAD_ErrOverTemp_Value(LeAADR_b_AAD_ErrOverTemp);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  SignalConversion generated from: '<S8>/LeAADR_b_AAD_ErrOverTemp'
     *  SignalConversion generated from: '<S8>/VeAADR_b_AAD_ErrOverTemp_write'
     */
    Rte_IrvWrite_PokeAADR_b_AAD_ErrOverTemp_AAD_ErrOverTemp_Init_write_IRV
        (LeAADR_b_AAD_ErrOverTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_b_AAD_ErrOverTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_b_AAD_ErrOverVolt(VAR(boolean, AUTOMATIC)
    LeAADR_b_AAD_ErrOverVolt)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_ErrOverVolt);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_b_AAD_ErrOverVolt' */
    /* Outport: '<Root>/VeAADR_b_AAD_ErrOverVolt' incorporates:
     *  SignalConversion generated from: '<S9>/VeAADR_b_AAD_ErrOverVolt'
     *  SignalConversion generated from: '<S9>/LeAADR_b_AAD_ErrOverVolt'
     */
    /* Gateway: PokeAADR_b_AAD_ErrOverVolt/PokeAADR_b_AAD_ErrOverVoltChrt */
    /* During: PokeAADR_b_AAD_ErrOverVolt/PokeAADR_b_AAD_ErrOverVoltChrt */
    /* Entry Internal: PokeAADR_b_AAD_ErrOverVolt/PokeAADR_b_AAD_ErrOverVoltChrt */
    /* Transition: '<S150>:2' */
    (void)Rte_Write_VeAADR_b_AAD_ErrOverVolt_Value(LeAADR_b_AAD_ErrOverVolt);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S9>/LeAADR_b_AAD_ErrOverVolt'
     *  SignalConversion generated from: '<S9>/VeAADR_b_AAD_ErrOverVolt_write'
     */
    Rte_IrvWrite_PokeAADR_b_AAD_ErrOverVolt_AAD_ErrOverVolt_Init_write_IRV
        (LeAADR_b_AAD_ErrOverVolt);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_b_AAD_ErrOverVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_b_AAD_ErrUnderVolt(VAR(boolean, AUTOMATIC)
    LeAADR_b_AAD_ErrUnderVolt)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_ErrUnderVolt);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_b_AAD_ErrUnderVolt' */
    /* Outport: '<Root>/VeAADR_b_AAD_ErrUnderVolt' incorporates:
     *  SignalConversion generated from: '<S10>/VeAADR_b_AAD_ErrUnderVolt'
     *  SignalConversion generated from: '<S10>/LeAADR_b_AAD_ErrUnderVolt'
     */
    /* Gateway: PokeAADR_b_AAD_ErrUnderVolt/PokeAADR_b_AAD_ErrUnderVoltChrt */
    /* During: PokeAADR_b_AAD_ErrUnderVolt/PokeAADR_b_AAD_ErrUnderVoltChrt */
    /* Entry Internal: PokeAADR_b_AAD_ErrUnderVolt/PokeAADR_b_AAD_ErrUnderVoltChrt */
    /* Transition: '<S151>:2' */
    (void)Rte_Write_VeAADR_b_AAD_ErrUnderVolt_Value(LeAADR_b_AAD_ErrUnderVolt);

    /* Merge: '<Root>/Merge_12_Irv' incorporates:
     *  SignalConversion generated from: '<S10>/LeAADR_b_AAD_ErrUnderVolt'
     *  SignalConversion generated from: '<S10>/VeAADR_b_AAD_ErrUnderVolt_write'
     */
    Rte_IrvWrite_PokeAADR_b_AAD_ErrUnderVolt_AAD_ErrUnderVolt_Init_write_IRV
        (LeAADR_b_AAD_ErrUnderVolt);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_b_AAD_ErrUnderVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_b_AAD_ResErr(VAR(boolean, AUTOMATIC)
    LeAADR_b_AAD_ResErr)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_ResErr);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_b_AAD_ResErr' */
    /* Outport: '<Root>/VeAADR_b_AAD_ResErr' incorporates:
     *  SignalConversion generated from: '<S11>/VeAADR_b_AAD_ResErr'
     *  SignalConversion generated from: '<S11>/LeAADR_b_AAD_ResErr'
     */
    /* Gateway: PokeAADR_b_AAD_ResErr/PokeAADR_b_AAD_ResErrChrt */
    /* During: PokeAADR_b_AAD_ResErr/PokeAADR_b_AAD_ResErrChrt */
    /* Entry Internal: PokeAADR_b_AAD_ResErr/PokeAADR_b_AAD_ResErrChrt */
    /* Transition: '<S152>:2' */
    (void)Rte_Write_VeAADR_b_AAD_ResErr_Value(LeAADR_b_AAD_ResErr);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_b_AAD_ResErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_e_AAD_CalibrationSts(VAR
    (TeAADR_e_AAD_Calibration_Sts, AUTOMATIC) LeAADR_e_AAD_CalibrationSts)
{

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_e_AAD_CalibrationSts);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_e_AAD_CalibrationSts' */
    /* Outport: '<Root>/VeAADR_e_AAD_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S12>/VeAADR_e_AAD_CalibrationSts'
     *  SignalConversion generated from: '<S12>/LeAADR_e_AAD_CalibrationSts'
     */
    /* Gateway: PokeAADR_e_AAD_CalibrationSts/PokeAADR_e_AAD_CalibrationStsChrt */
    /* During: PokeAADR_e_AAD_CalibrationSts/PokeAADR_e_AAD_CalibrationStsChrt */
    /* Entry Internal: PokeAADR_e_AAD_CalibrationSts/PokeAADR_e_AAD_CalibrationStsChrt */
    /* Transition: '<S153>:2' */
    (void)Rte_Write_VeAADR_e_AAD_CalibrationSts_Value
        (LeAADR_e_AAD_CalibrationSts);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S12>/LeAADR_e_AAD_CalibrationSts'
     *  SignalConversion generated from: '<S12>/VeAADR_e_AAD_CalibrationSts_write'
     */
    Rte_IrvWrite_PokeAADR_e_AAD_CalibrationSts_AAD_CalibrationSts_Init_write_IRV
        (LeAADR_e_AAD_CalibrationSts);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_e_AAD_CalibrationSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AADR_1

FUNC(void, AADR_CODE) PokeAADR_e_AAD_CurrPos(VAR(TeAADR_e_AAD_Pos, AUTOMATIC)
    LeAADR_e_AAD_CurrPos, VAR(boolean, AUTOMATIC) LeAADR_b_AAD_CurrPosFA)
{

#if Rte_SysCon_Variant_AADR_1

    boolean rtb_LeAADR_b_AAD_CurrPosFA_out_h;

#endif

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_Pos rtb_LeAADR_e_AAD_CurrPos_out;

#endif

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_e_AAD_CurrPos);

#endif

#if !Rte_SysCon_Variant_AADR_1

    UNUSED_PARAMETER(LeAADR_b_AAD_CurrPosFA);

#endif

#if Rte_SysCon_Variant_AADR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeAADR_e_AAD_CurrPos' */
    /* Chart: '<S13>/PokeAADR_e_AAD_CurrPosChrt' incorporates:
     *  SignalConversion generated from: '<S13>/LeAADR_b_AAD_CurrPosFA'
     *  SignalConversion generated from: '<S13>/LeAADR_e_AAD_CurrPos'
     */
    /* Gateway: PokeAADR_e_AAD_CurrPos/PokeAADR_e_AAD_CurrPosChrt */
    /* During: PokeAADR_e_AAD_CurrPos/PokeAADR_e_AAD_CurrPosChrt */
    /* Entry Internal: PokeAADR_e_AAD_CurrPos/PokeAADR_e_AAD_CurrPosChrt */
    /* Transition: '<S154>:2' */
    if (!LeAADR_b_AAD_CurrPosFA)
    {
        /* Transition: '<S154>:3' */
        /* Transition: '<S154>:15' */
        rtb_LeAADR_e_AAD_CurrPos_out = KaAADR_e_AAD_CurrPos
            [(LeAADR_e_AAD_CurrPos)];
        AADR_ac_B.LeAADR_Pct_AAD_CurrPos_out = KaAADR_Pct_AAD_CurrPos
            [(LeAADR_e_AAD_CurrPos)];
        rtb_LeAADR_b_AAD_CurrPosFA_out_h = false;

        /* Transition: '<S154>:18' */
    }
    else
    {
        /* Transition: '<S154>:4' */
        rtb_LeAADR_b_AAD_CurrPosFA_out_h = true;
        rtb_LeAADR_e_AAD_CurrPos_out = CeAADR_e_SNA;
    }

    /* End of Chart: '<S13>/PokeAADR_e_AAD_CurrPosChrt' */

    /* Outport: '<Root>/VeAADR_Pct_AAD_CurrPos' incorporates:
     *  SignalConversion generated from: '<S13>/VeAADR_Pct_AAD_CurrPos'
     */
    (void)Rte_Write_VeAADR_Pct_AAD_CurrPos_Value
        (AADR_ac_B.LeAADR_Pct_AAD_CurrPos_out);

    /* Outport: '<Root>/VeAADR_b_AAD_CurrPosFA' incorporates:
     *  SignalConversion generated from: '<S13>/VeAADR_b_AAD_CurrPosFA'
     */
    (void)Rte_Write_VeAADR_b_AAD_CurrPosFA_Value
        (rtb_LeAADR_b_AAD_CurrPosFA_out_h);

    /* Outport: '<Root>/VeAADR_e_AAD_CurrPos' incorporates:
     *  SignalConversion generated from: '<S13>/VeAADR_e_AAD_CurrPos'
     */
    (void)Rte_Write_VeAADR_e_AAD_CurrPos_Value(rtb_LeAADR_e_AAD_CurrPos_out);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S13>/VeAADR_e_AAD_CurrPos_write'
     * */
    Rte_IrvWrite_PokeAADR_e_AAD_CurrPos_e_AAD_CurrPos_Init_write_IRV
        (rtb_LeAADR_e_AAD_CurrPos_out);

    /* End of Outputs for SubSystem: '<Root>/PokeAADR_e_AAD_CurrPos' */
#endif

}

#endif

/* Output function */
FUNC(void, AADR_CODE) AADR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/AADR_PwrOff'
     */
    /* Outport: '<Root>/EeAADR_Cnt_AAD_PSACntrLastCal_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeAADR_Cnt_AAD_PSACntrLastCal'
     */
    (void)Rte_Write_EeAADR_Cnt_AAD_PSACntrLastCal_EeAADR_Cnt_AAD_PSACntrLastCal
        (EeAADR_Cnt_AAD_PSACntrLastCal);

    /* Outport: '<Root>/NeAADR_Cnt_AAD_PerfDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAADR_Cnt_AAD_PerfDiag_MFOP'
     */
    (void)Rte_Write_NeAADR_Cnt_AAD_PerfDiag_MFOP_NeAADR_Cnt_AAD_PerfDiag_MFOP
        (AADR_ac_DW.NeAADR_Cnt_AAD_PerfDiag_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, AADR_CODE) AADR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AADR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S135>/NeAADR_Cnt_AAD_PerfDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeAADR_Cnt_AAD_PerfDiag_MFOP_PM_In'
     */
    (void)Rte_Read_NeAADR_Cnt_AAD_PerfDiag_MFOP_Rx_NeAADR_Cnt_AAD_PerfDiag_MFOP(
        &AADR_ac_DW.NeAADR_Cnt_AAD_PerfDiag_MFOP);

    /* DataStoreWrite: '<S135>/EeAADR_Cnt_AAD_PSACntrLastCal' incorporates:
     *  Inport: '<Root>/EeAADR_Cnt_AAD_PSACntrLastCal_PM_In'
     */
    (void)
        Rte_Read_EeAADR_Cnt_AAD_PSACntrLastCal_Rx_EeAADR_Cnt_AAD_PSACntrLastCal
        ((&(EeAADR_Cnt_AAD_PSACntrLastCal)));

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/AAD_INIT_Cals'
     */
    /* SignalConversion generated from: '<S134>/e_AAD_CurrPos_Init' incorporates:
     *  Constant: '<S141>/Constant'
     */
    AADR_ac_B.OutportBufferFore_AAD_CurrPos_Init = AADR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S134>/EOL_AAD_IO_CntrlSt_Init' incorporates:
     *  Constant: '<S142>/Constant'
     */
    AADR_ac_B.OutportBufferForEOL_AAD_IO_CntrlSt_Init = AADR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S134>/EOL_AAD_PstnCmnd_Init' incorporates:
     *  Constant: '<S139>/Constant'
     */
    AADR_ac_B.OutportBufferForEOL_AAD_PstnCmnd_Init = AADR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S134>/AAD_CalibrationSts_Init' incorporates:
     *  Constant: '<S140>/Constant'
     */
    AADR_ac_B.OutportBufferForAAD_CalibrationSts_Init =
        AADR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S134>/AAD_CalibrationActv_Init' */
    AADR_ac_B.OutportBufferForAAD_CalibrationActv_Init = false;

    /* SignalConversion generated from: '<S134>/AAD_ErrUnderVolt_Init' */
    AADR_ac_B.OutportBufferForAAD_ErrUnderVolt_Init = false;

    /* SignalConversion generated from: '<S134>/AAD_ErrOverVolt_Init' */
    AADR_ac_B.OutportBufferForAAD_ErrOverVolt_Init = false;

    /* SignalConversion generated from: '<S134>/AAD_ErrOverTemp_Init' */
    AADR_ac_B.OutportBufferForAAD_ErrOverTemp_Init = false;

    /* SignalConversion generated from: '<S134>/AAD_ErrMechStuck_Init' */
    AADR_ac_B.OutportBufferForAAD_ErrMechStuck_Init = false;

    /* SignalConversion generated from: '<S134>/AAD_ErrMechBreak_Init' */
    AADR_ac_B.OutportBufferForAAD_ErrMechBreak_Init = false;

    /* SignalConversion generated from: '<S134>/AAD_ResErr_Init' */
    AADR_ac_B.OutportBufferForAAD_ResErr_Init = false;

    /* SignalConversion generated from: '<S134>/AAD_CurrPosFA_Init' */
    AADR_ac_B.OutportBufferForAAD_CurrPosFA_Init = false;

    /* SignalConversion generated from: '<S134>/Pct_AAD_CurrPos_Init' incorporates:
     *  Constant: '<S143>/Calib'
     */
    AADR_ac_B.OutportBufferForPct_AAD_CurrPos_Init = KeAADR_Pct_AAD_CurrPos_Init;

    /* SignalConversion generated from: '<S134>/EOL_AAD_OperationModeEnbl_Init' */
    AADR_ac_B.OutportBufferForEOL_AAD_OperationModeEnb = true;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/AADO_Init'
     */
    /* SignalConversion generated from: '<S133>/e_AAD_PosReq_Init' incorporates:
     *  Constant: '<S138>/Constant'
     */
    AADR_ac_B.OutportBufferFore_AAD_PosReq_Init = AADR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S133>/b_AAD_CalReq_Init' */
    AADR_ac_B.OutportBufferForb_AAD_CalReq_Init = false;

    /* SignalConversion generated from: '<S133>/e_AAD_EOLCalResults_Init' incorporates:
     *  Constant: '<S137>/Constant'
     */
    AADR_ac_B.OutportBufferFore_AAD_EOLCalResults_Init =
        AADR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S133>/b_AAD_InitialIP_CalRq_Init' */
    AADR_ac_B.OutportBufferForb_AAD_InitialIP_CalRq_In = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S136>/VeAADR_e_FaultSts_ActAirDamCntrlCktPerf' incorporates:
     *  Constant: '<S144>/Constant'
     */
    AADR_ac_B.OutportBufferForVeAADR_e_FaultSts_ActAir =
        AADR_ac_ConstB.Constant_g;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeAADR_b_AAD_CalibrationActv' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_CalibrationActv_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_CalibrationActv_Value
        (AADR_ac_B.OutportBufferForAAD_CalibrationActv_Init);

    /* Outport: '<Root>/VeAADR_e_AAD_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S134>/AAD_CalibrationSts_Init'
     *  SignalConversion generated from: '<S3>/AAD_CalibrationSts_Init'
     */
    (void)Rte_Write_VeAADR_e_AAD_CalibrationSts_Value
        (AADR_ac_B.OutportBufferForAAD_CalibrationSts_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_CurrPosFA' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_CurrPosFA_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_CurrPosFA_Value
        (AADR_ac_B.OutportBufferForAAD_CurrPosFA_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_ErrMechBreak' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrMechBreak_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_ErrMechBreak_Value
        (AADR_ac_B.OutportBufferForAAD_ErrMechBreak_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_ErrMechStuck' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrMechStuck_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_ErrMechStuck_Value
        (AADR_ac_B.OutportBufferForAAD_ErrMechStuck_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_ErrOverTemp' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrOverTemp_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_ErrOverTemp_Value
        (AADR_ac_B.OutportBufferForAAD_ErrOverTemp_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_ErrOverVolt' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrOverVolt_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_ErrOverVolt_Value
        (AADR_ac_B.OutportBufferForAAD_ErrOverVolt_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_ErrUnderVolt' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrUnderVolt_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_ErrUnderVolt_Value
        (AADR_ac_B.OutportBufferForAAD_ErrUnderVolt_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_ResErr' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ResErr_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_ResErr_Value
        (AADR_ac_B.OutportBufferForAAD_ResErr_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_OperationModeEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/EOL_AAD_OperationModeEnbl_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_OperationModeEnbl_Value
        (AADR_ac_B.OutportBufferForEOL_AAD_OperationModeEnb);

    /* Outport: '<Root>/VeAADR_Pct_AAD_CurrPos' incorporates:
     *  SignalConversion generated from: '<S3>/Pct_AAD_CurrPos_Init'
     */
    (void)Rte_Write_VeAADR_Pct_AAD_CurrPos_Value
        (AADR_ac_B.OutportBufferForPct_AAD_CurrPos_Init);

    /* Outport: '<Root>/VeAADR_e_FaultSts_ActAirDamCntrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S136>/VeAADR_e_FaultSts_ActAirDamCntrlCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeAADR_e_FaultSts_ActAirDamCntrlCktPerf'
     */
    (void)Rte_Write_VeAADR_e_FaultSts_ActAirDamCntrlCktPerf_Value
        (AADR_ac_B.OutportBufferForVeAADR_e_FaultSts_ActAir);

    /* Outport: '<Root>/VeAADR_b_AAD_CalReq' incorporates:
     *  SignalConversion generated from: '<S3>/b_AAD_CalReq_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_CalReq_Value
        (AADR_ac_B.OutportBufferForb_AAD_CalReq_Init);

    /* Outport: '<Root>/VeAADR_b_AAD_InitialIP_CalRq' incorporates:
     *  SignalConversion generated from: '<S3>/b_AAD_InitialIP_CalRq_Init'
     */
    (void)Rte_Write_VeAADR_b_AAD_InitialIP_CalRq_Value
        (AADR_ac_B.OutportBufferForb_AAD_InitialIP_CalRq_In);

    /* Outport: '<Root>/VeAADR_e_AAD_CurrPos' incorporates:
     *  SignalConversion generated from: '<S134>/e_AAD_CurrPos_Init'
     *  SignalConversion generated from: '<S3>/e_AAD_CurrPos_Init'
     */
    (void)Rte_Write_VeAADR_e_AAD_CurrPos_Value
        (AADR_ac_B.OutportBufferFore_AAD_CurrPos_Init);

    /* Outport: '<Root>/VeAADR_e_AAD_EOLCalResults' incorporates:
     *  SignalConversion generated from: '<S133>/e_AAD_EOLCalResults_Init'
     *  SignalConversion generated from: '<S3>/e_AAD_EOLCalResults_Init'
     */
    (void)Rte_Write_VeAADR_e_AAD_EOLCalResults_Value
        (AADR_ac_B.OutportBufferFore_AAD_EOLCalResults_Init);

    /* Outport: '<Root>/VeAADR_e_AAD_PosReq' incorporates:
     *  SignalConversion generated from: '<S133>/e_AAD_PosReq_Init'
     *  SignalConversion generated from: '<S3>/e_AAD_PosReq_Init'
     */
    (void)Rte_Write_VeAADR_e_AAD_PosReq_Value
        (AADR_ac_B.OutportBufferFore_AAD_PosReq_Init);

    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_CalibrationActv_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_AAD_CalibrationActv_Init_write_IRV
        (AADR_ac_B.OutportBufferForAAD_CalibrationActv_Init);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S134>/AAD_CalibrationSts_Init'
     *  SignalConversion generated from: '<S3>/AAD_CalibrationSts_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_AAD_CalibrationSts_Init_write_IRV
        (AADR_ac_B.OutportBufferForAAD_CalibrationSts_Init);

    /* Merge: '<Root>/Merge_8_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrMechBreak_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_AAD_ErrMechBreak_Init_write_IRV
        (AADR_ac_B.OutportBufferForAAD_ErrMechBreak_Init);

    /* Merge: '<Root>/Merge_9_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrMechStuck_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_AAD_ErrMechStuck_Init_write_IRV
        (AADR_ac_B.OutportBufferForAAD_ErrMechStuck_Init);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrOverTemp_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_AAD_ErrOverTemp_Init_write_IRV
        (AADR_ac_B.OutportBufferForAAD_ErrOverTemp_Init);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrOverVolt_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_AAD_ErrOverVolt_Init_write_IRV
        (AADR_ac_B.OutportBufferForAAD_ErrOverVolt_Init);

    /* Merge: '<Root>/Merge_12_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/AAD_ErrUnderVolt_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_AAD_ErrUnderVolt_Init_write_IRV
        (AADR_ac_B.OutportBufferForAAD_ErrUnderVolt_Init);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S134>/EOL_AAD_IO_CntrlSt_Init'
     *  SignalConversion generated from: '<S3>/EOL_AAD_IO_CntrlSt_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_EOL_AAD_IO_CntrlSt_Init_write_IRV
        (AADR_ac_B.OutportBufferForEOL_AAD_IO_CntrlSt_Init);

    /* Merge: '<Root>/Merge_9_Irv2' incorporates:
     *  SignalConversion generated from: '<S3>/EOL_AAD_OperationModeEnbl_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_EOL_AAD_OperationModeEnbl_Init_write_IRV
        (AADR_ac_B.OutportBufferForEOL_AAD_OperationModeEnb);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S134>/EOL_AAD_PstnCmnd_Init'
     *  SignalConversion generated from: '<S3>/EOL_AAD_PstnCmnd_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_EOL_AAD_PstnCmnd_Init_write_IRV
        (AADR_ac_B.OutportBufferForEOL_AAD_PstnCmnd_Init);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S134>/e_AAD_CurrPos_Init'
     *  SignalConversion generated from: '<S3>/e_AAD_CurrPos_Init_write'
     * */
    Rte_IrvWrite_AADR_PwrOn_e_AAD_CurrPos_Init_write_IRV
        (AADR_ac_B.OutportBufferFore_AAD_CurrPos_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, AADR_CODE) Routine_RC1330_ActAirDamCal(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC1330_ActAirDamCal_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1330_ActAirDamCal_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1330_ActAirDamCal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AAD_Calibration_Start'
     */
    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S155>/Constant'
     *  DataStoreWrite: '<S14>/Data Store Write'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1330_ActAirDamCal_Op'
     *  RelationalOperator: '<S14>/Equal'
     */
    VeAADR_b_AAD_CalibrationRequestFlag = (((uint32)tmpRead) ==
        CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1330_ActAirDamCal' */
}

/* Model initialize function */
FUNC(void, AADR_CODE) AADR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        AADR_ac_B.OutportBufferFore_AAD_PosReq_Init = CeAADR_e_SNA;
        AADR_ac_B.OutportBufferFore_AAD_CurrPos_Init = CeAADR_e_SNA;
        AADR_ac_B.OutportBufferForEOL_AAD_PstnCmnd_Init = CeAADR_e_SNA;

#if Rte_SysCon_Variant_AADR_1

        AADR_ac_B.VeAADC_e_AAD_PosReq = CeAADR_e_SNA;

#endif

    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AADR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/AAD_INIT_Cals'
     */
    /* SystemInitialize for SignalConversion generated from: '<S134>/e_AAD_CurrPos_Init' incorporates:
     *  Constant: '<S141>/Constant'
     */
    AADR_ac_B.OutportBufferFore_AAD_CurrPos_Init = AADR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S134>/EOL_AAD_IO_CntrlSt_Init' incorporates:
     *  Constant: '<S142>/Constant'
     */
    AADR_ac_B.OutportBufferForEOL_AAD_IO_CntrlSt_Init = AADR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S134>/EOL_AAD_PstnCmnd_Init' incorporates:
     *  Constant: '<S139>/Constant'
     */
    AADR_ac_B.OutportBufferForEOL_AAD_PstnCmnd_Init = AADR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S134>/AAD_CalibrationSts_Init' incorporates:
     *  Constant: '<S140>/Constant'
     */
    AADR_ac_B.OutportBufferForAAD_CalibrationSts_Init =
        AADR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S134>/Pct_AAD_CurrPos_Init' incorporates:
     *  Constant: '<S143>/Calib'
     */
    AADR_ac_B.OutportBufferForPct_AAD_CurrPos_Init = KeAADR_Pct_AAD_CurrPos_Init;

    /* SystemInitialize for SignalConversion generated from: '<S134>/EOL_AAD_OperationModeEnbl_Init' */
    AADR_ac_B.OutportBufferForEOL_AAD_OperationModeEnb = true;

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/AADO_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S133>/e_AAD_PosReq_Init' incorporates:
     *  Constant: '<S138>/Constant'
     */
    AADR_ac_B.OutportBufferFore_AAD_PosReq_Init = AADR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S133>/e_AAD_EOLCalResults_Init' incorporates:
     *  Constant: '<S137>/Constant'
     */
    AADR_ac_B.OutportBufferFore_AAD_EOLCalResults_Init =
        AADR_ac_ConstB.Constant_c;

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S136>/VeAADR_e_FaultSts_ActAirDamCntrlCktPerf' incorporates:
     *  Constant: '<S144>/Constant'
     */
    AADR_ac_B.OutportBufferForVeAADR_e_FaultSts_ActAir =
        AADR_ac_ConstB.Constant_g;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeAADR_e_AAD_CurrPos' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeAADR_e_AAD_CurrPos_Value(CeAADR_e_SNA);

    /* SystemInitialize for Outport: '<Root>/VeAADR_e_AAD_CalibrationSts' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeAADR_e_AAD_CalibrationSts_Value(CeAADR_e_AAD_Calibrated);

#if Rte_SysCon_Variant_AADR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/AADR_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AADD'
     */

    /* InitializeConditions for UnitDelay: '<S20>/Unit Delay3' */
    AADR_ac_DW.UnitDelay3_DSTATE = CeAADR_e_Deploy100;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/AADR_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeAADR_e_AAD_PosReq' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeAADR_e_AAD_PosReq_Value(CeAADR_e_SNA);

    /* SystemInitialize for Outport: '<Root>/VeAADR_e_AAD_EOLCalResults' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeAADR_e_AAD_EOLCalResults_Value(CeAADR_e_AAD_CalInProgress);

    /* SystemInitialize for Outport: '<Root>/VeAADR_e_FaultSts_ActAirDamCntrlCktPerf' incorporates:
     *  Merge: '<Root>/M_VeAADR_e_FaultSts_ActAirDamCntrlCktPerf'
     */
    (void)Rte_Write_VeAADR_e_FaultSts_ActAirDamCntrlCktPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
