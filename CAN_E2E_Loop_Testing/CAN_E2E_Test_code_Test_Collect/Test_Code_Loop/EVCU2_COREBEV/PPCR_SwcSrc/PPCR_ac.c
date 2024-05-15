/*
 * File: PPCR_ac.c
 *
 * Code generated for Simulink model 'PPCR_ac'.
 *
 * Model version                  : 9.90
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:40:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PPCR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PPCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT) KaPPCR_e_PPawlReq_Map[4] =
{
    0, 1, 2, 3
} ;                                    /* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT) KaPPCR_e_Prmry_MPR_Pos_Sensor_Map[9]
    =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8
} ;                                    /* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT)
    KaPPCR_e_Prmry_PP_Motor_Pos_Stat_Map[8] =
{
    1, 2, 3, 4, 5, 6, 7, 8
} ;                                    /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT)
    KaPPCR_e_Prmry_PP_Motor_Pos_Stat_Map_Front[8] =
{
    1, 2, 3, 4, 5, 6, 7, 8
} ;                                    /* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT) KaPPCR_e_Prmry_PP_Pos_Sensor_Map[8]
    =
{
    1, 2, 3, 4, 5, 6, 7, 8
} ;                                    /* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT)
    KaPPCR_e_Prmry_PP_Pos_Sensor_Map_Front[8] =
{
    1, 2, 3, 4, 5, 6, 7, 8
} ;                                    /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT) KaPPCR_e_Prmry_Park_Pawl_Stat_Map[8]
    =
{
    0, 1, 2, 3, 4, 5, 6, 7
} ;                                    /* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT)
    KaPPCR_e_Prmry_Park_Pawl_Stat_Map_Front[8] =
{
    0, 1, 2, 3, 4, 5, 6, 7
} ;                                    /* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT)
    KaPPCR_e_Prmry_Park_Pawl_flt_Stat_Map[9] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8
} ;                                    /* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(sint16, PPCR_VAR_INIT)
    KaPPCR_e_Prmry_Park_Pawl_flt_Stat_Map_Front[9] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8
} ;                                    /* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_DiagResetOvrd = 0;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_DiagResetOvrdVal = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_HCPShtDwnCmdOvrd = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_HCPShtDwnCmdVal = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_MPR_Pos_SensorOvrd = 0;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_PP_Motor_Pos_StatOvrd = 0;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_PP_Pos_SensorOvrd = 0;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_PPawlCmnd_Ovrd = 0;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_PPawlReq_DBC_FXD = 1;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_Park_Pawl_StatOvrd = 0;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(boolean, PPCR_VAR_INIT) KePPCR_b_Park_Pawl_flt_StatOvrd =
    0;                                 /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(TePPCR_e_PCUCtrl_MPR_Pos, PPCR_VAR_INIT)
    KePPCR_e_MPR_Pos_SensorVal = CePPCR_e_MPR_Init;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(TePPCR_e_PCUCtrl_MtrPosStat, PPCR_VAR_INIT)
    KePPCR_e_PP_Motor_Pos_StatVal = CePPCR_e_Mtr_Unknown;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(TePPCR_e_PCUCtrl_PosSnsr, PPCR_VAR_INIT)
    KePPCR_e_PP_Pos_SensorVal = CePPCR_e_PosSnsr_Unknown;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(TeTRGR_e_PPawlCmnd, PPCR_VAR_INIT)
    KePPCR_e_PPawlCmnd_OvrdVal = CeTRGR_e_PPawlIdle;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(TePPCR_e_PCUCtrl_StateCode, PPCR_VAR_INIT)
    KePPCR_e_Park_Pawl_StatVal = CePPCR_e_SC_Init;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(TePPCR_e_PCUCtrl_Flt_Stat, PPCR_VAR_INIT)
    KePPCR_e_Park_Pawl_flt_StatVal = CePPCR_e_FS_No_Fault;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(float32, PPCR_VAR_INIT) KePPCR_t_BtwRngDbnc = 160.0F;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static volatile CONST(float32, PPCR_VAR_INIT) KePPCR_t_dT = 0.00625F;/* Referenced by: '<S99>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_PPCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(boolean, PPCR_VAR_INIT) VePPCC_b_PPawlFlt_InhibitMtr;/* '<S90>/Logical2' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(boolean, PPCR_VAR_INIT) VePPCC_b_PPawlFlt_UnknownPos;/* '<S90>/Logical1' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(boolean, PPCR_VAR_INIT) VePPCC_b_PPawl_TXFlt;/* '<S90>/Logical3' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PPawl_Fdbck, PPCR_VAR_INIT) VePPCC_e_PPawl_Fdbck;/* '<S89>/Merge' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PCUCtrl_PP_REQ, PPCR_VAR_INIT) VePPCC_e_PPawl_HW_Request;/* '<S58>/Merge2' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PCUCtrl_PP_REQ, PPCR_VAR_INIT) VePPCC_e_PPawl_HW_Request_Map;/* '<S58>/Data Type Conversion2' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PPawl_Request, PPCR_VAR_INIT) VePPCC_e_PPawl_Request;/* '<S58>/Merge1' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(boolean, PPCR_VAR_INIT) VePPCI_b_DiagReset;/* '<S30>/Switch5' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(boolean, PPCR_VAR_INIT) VePPCI_b_Prmry_Fail;/* '<S27>/Merge_4' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TeTRGR_e_PPawlCmnd, PPCR_VAR_INIT) VePPCI_e_PPawlCmnd;/* '<S30>/Switch1' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PCUCtrl_MPR_Pos, PPCR_VAR_INIT)
    VePPCI_e_Prmry_PP_MPR_Pos_Sensor;  /* '<S29>/Switch4' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PCUCtrl_MtrPosStat, PPCR_VAR_INIT)
    VePPCI_e_Prmry_PP_MotorPos_Stat;   /* '<S29>/Switch1' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PCUCtrl_PosSnsr, PPCR_VAR_INIT)
    VePPCI_e_Prmry_PPawl_Pos_Sensor;   /* '<S29>/Switch3' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PCUCtrl_StateCode, PPCR_VAR_INIT)
    VePPCI_e_Prmry_ParkPawl_Stat;      /* '<S29>/Switch6' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(TePPCR_e_PCUCtrl_Flt_Stat, PPCR_VAR_INIT)
    VePPCI_e_Prmry_ParkPawl_flt_Stat;  /* '<S29>/Switch2' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static VAR(boolean, PPCR_VAR_INIT) VePPCR_b_HCPShtDwnCmd;/* '<S30>/Logical1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PPCR
#include "MemMap.h"

CONST(ConstB_PPCR_ac_T, PPCR_VAR_INIT) PPCR_ac_ConstB =
{
    CePPCR_e_PPAWL_UNKNOWN_Request,    /* '<S134>/Const2' */
    CePPCR_e_PPAWL_UNKNOWN_Position,   /* '<S134>/Const1' */

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_SC_Init,                  /* '<S135>/Constant' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_SC_Init,                  /* '<S142>/Constant' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_PosSnsr_Unknown,          /* '<S140>/Constant' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_PosSnsr_Unknown,          /* '<S136>/Constant' */

#endif

    CePPCR_e_Req_No_Req,               /* '<S134>/Const6' */

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_Mtr_Unknown,              /* '<S137>/Constant' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_Mtr_Unknown,              /* '<S143>/Constant' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_MPR_Init,                 /* '<S141>/Constant' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_FS_No_Fault,              /* '<S138>/Constant' */

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    CePPCR_e_FS_No_Fault               /* '<S144>/Constant' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_PPCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

VAR(B_PPCR_ac_T, PPCR_VAR_INIT) PPCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

VAR(DW_PPCR_ac_T, PPCR_VAR_INIT) PPCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static FUNC(void, PPCR_CODE_LOCAL) PPCR_ac_Stuck(P2VAR(TePPCR_e_PPawl_Fdbck,
    AUTOMATIC, PPCR_VAR_INIT) rty_PPawl_Fdbck);

#endif

/* Forward declaration for local functions */
static uint8 PP_safe_cast_to_TePPCR_e_PCUCtrl_MPR_Pos(uint8 input);
static uint8 safe_cast_to_TePPCR_e_PCUCtrl_MtrPosStat(uint8 input);
static uint8 PP_safe_cast_to_TePPCR_e_PCUCtrl_PosSnsr(uint8 input);
static uint8 safe_cast_to_TePPCR_e_PCUCtrl_StateCode(uint8 input);
static uint8 P_safe_cast_to_TePPCR_e_PCUCtrl_Flt_Stat(uint8 input);

/*
 * Output and update for action system:
 *    '<S89>/Stuck'
 *    '<S89>/Fault'
 *    '<S89>/Unknown'
 */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

static FUNC(void, PPCR_CODE_LOCAL) PPCR_ac_Stuck(P2VAR(TePPCR_e_PPawl_Fdbck,
    AUTOMATIC, PPCR_VAR_INIT) rty_PPawl_Fdbck)
{
    /* SignalConversion generated from: '<S120>/PPawl_Fdbck' incorporates:
     *  Constant: '<S130>/Constant'
     */
    *rty_PPawl_Fdbck = CePPCR_e_PPAWL_UNKNOWN_Position;
}

#endif

static uint8 PP_safe_cast_to_TePPCR_e_PCUCtrl_MPR_Pos(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePPCR_e_PCUCtrl_MPR_Pos (CePPCR_e_MPR_Init) */
    y = 0U;
    if (((sint32)input) <= 8)
    {
        /* Set output value to input value if it is a member of TePPCR_e_PCUCtrl_MPR_Pos */
        y = input;
    }

    return y;
}

static uint8 safe_cast_to_TePPCR_e_PCUCtrl_MtrPosStat(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePPCR_e_PCUCtrl_MtrPosStat (CePPCR_e_Mtr_Unknown) */
    y = 1U;
    if ((((sint32)input) >= 1) && (((sint32)input) <= 8))
    {
        /* Set output value to input value if it is a member of TePPCR_e_PCUCtrl_MtrPosStat */
        y = input;
    }

    return y;
}

static uint8 PP_safe_cast_to_TePPCR_e_PCUCtrl_PosSnsr(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePPCR_e_PCUCtrl_PosSnsr (CePPCR_e_PosSnsr_Unknown) */
    y = 1U;
    if ((((sint32)input) >= 1) && (((sint32)input) <= 8))
    {
        /* Set output value to input value if it is a member of TePPCR_e_PCUCtrl_PosSnsr */
        y = input;
    }

    return y;
}

static uint8 safe_cast_to_TePPCR_e_PCUCtrl_StateCode(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePPCR_e_PCUCtrl_StateCode (CePPCR_e_SC_Init) */
    y = 0U;
    if (((sint32)input) <= 7)
    {
        /* Set output value to input value if it is a member of TePPCR_e_PCUCtrl_StateCode */
        y = input;
    }

    return y;
}

static uint8 P_safe_cast_to_TePPCR_e_PCUCtrl_Flt_Stat(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePPCR_e_PCUCtrl_Flt_Stat (CePPCR_e_FS_No_Fault) */
    y = 0U;
    if (((sint32)input) <= 8)
    {
        /* Set output value to input value if it is a member of TePPCR_e_PCUCtrl_Flt_Stat */
        y = input;
    }

    return y;
}

/* Model step function for TID1 */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PPCR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_Comparison1;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_Comparison2;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_Logical1_m;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_Comparison1_ja;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_Comparison3_b;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_Comparison4_j;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_Logical2_a;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* Outputs for Function Call SubSystem: '<Root>/PPCR_MSG_FastTEF' */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_CANOvrds'
     */
    /* Switch: '<S29>/Switch6' incorporates:
     *  Constant: '<S39>/Calib'
     */
    if (KePPCR_b_Park_Pawl_StatOvrd)
    {
        /* RelationalOperator: '<S89>/Comparison1' incorporates:
         *  Constant: '<S44>/Calib'
         *  Switch: '<S29>/Switch6'
         */
        VePPCI_e_Prmry_ParkPawl_Stat = KePPCR_e_Park_Pawl_StatVal;
    }
    else
    {
        /* RelationalOperator: '<S89>/Comparison1' incorporates:
         *  Merge: '<S27>/Merge_13'
         *  Switch: '<S29>/Switch6'
         */
        VePPCI_e_Prmry_ParkPawl_Stat = PPCR_ac_B.Merge_13;
    }

    /* End of Switch: '<S29>/Switch6' */

    /* Switch: '<S29>/Switch2' incorporates:
     *  Constant: '<S40>/Calib'
     */
    if (KePPCR_b_Park_Pawl_flt_StatOvrd)
    {
        /* RelationalOperator: '<S86>/Comparison6' incorporates:
         *  Constant: '<S45>/Calib'
         *  Switch: '<S29>/Switch2'
         */
        VePPCI_e_Prmry_ParkPawl_flt_Stat = KePPCR_e_Park_Pawl_flt_StatVal;
    }
    else
    {
        /* RelationalOperator: '<S86>/Comparison6' incorporates:
         *  Merge: '<S27>/Merge_1'
         *  Switch: '<S29>/Switch2'
         */
        VePPCI_e_Prmry_ParkPawl_flt_Stat = PPCR_ac_B.Merge_1;
    }

    /* End of Switch: '<S29>/Switch2' */

    /* Switch: '<S29>/Switch1' incorporates:
     *  Constant: '<S37>/Calib'
     */
    if (KePPCR_b_PP_Motor_Pos_StatOvrd)
    {
        /* RelationalOperator: '<S88>/Comparison2' incorporates:
         *  Constant: '<S42>/Calib'
         *  Switch: '<S29>/Switch1'
         */
        VePPCI_e_Prmry_PP_MotorPos_Stat = KePPCR_e_PP_Motor_Pos_StatVal;
    }
    else
    {
        /* RelationalOperator: '<S88>/Comparison2' incorporates:
         *  Merge: '<S27>/Merge_2'
         *  Switch: '<S29>/Switch1'
         */
        VePPCI_e_Prmry_PP_MotorPos_Stat = PPCR_ac_B.Merge_2;
    }

    /* End of Switch: '<S29>/Switch1' */

    /* Switch: '<S29>/Switch3' incorporates:
     *  Constant: '<S38>/Calib'
     */
    if (KePPCR_b_PP_Pos_SensorOvrd)
    {
        /* Switch: '<S29>/Switch3' incorporates:
         *  Constant: '<S43>/Calib'
         */
        VePPCI_e_Prmry_PPawl_Pos_Sensor = KePPCR_e_PP_Pos_SensorVal;
    }
    else
    {
        /* Switch: '<S29>/Switch3' incorporates:
         *  Merge: '<S27>/Merge_3'
         */
        VePPCI_e_Prmry_PPawl_Pos_Sensor = PPCR_ac_B.Merge_3;
    }

    /* End of Switch: '<S29>/Switch3' */

    /* Switch: '<S29>/Switch4' incorporates:
     *  Constant: '<S36>/Calib'
     */
    if (KePPCR_b_MPR_Pos_SensorOvrd)
    {
        /* Switch: '<S29>/Switch4' incorporates:
         *  Constant: '<S41>/Calib'
         */
        VePPCI_e_Prmry_PP_MPR_Pos_Sensor = KePPCR_e_MPR_Pos_SensorVal;
    }
    else
    {
        /* Switch: '<S29>/Switch4' incorporates:
         *  Inport: '<S34>/Prmry_MPR_Pos_Sensor'
         */
        VePPCI_e_Prmry_PP_MPR_Pos_Sensor = PPCR_ac_B.Prmry_MPR_Pos_Sensor;
    }

    /* End of Switch: '<S29>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/PPCR_MSG_FastTEF' */

    /* Inport: '<Root>/VePRXR_b_CanNodeMRGB' */
    (void)Rte_Read_VePRXR_b_CanNodeMRGB_Value(&rtb_Comparison3_b);

    /* Outputs for Function Call SubSystem: '<Root>/PPCR_MSG_FastTEF' */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_CANBus'
     */
    /* If: '<S27>/If' incorporates:
     *  Inport: '<S34>/Prmry_MPR_Pos_Sensor'
     *  Merge: '<Root>/Merge_10'
     *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_MPR_Pos_Sensor_read'
     */
    if (rtb_Comparison3_b)
    {
        /* Outputs for IfAction SubSystem: '<S27>/CANBus_Rationalization_F' incorporates:
         *  ActionPort: '<S33>/ActionPort'
         */
        /* Merge: '<S27>/Merge_13' incorporates:
         *  Inport: '<S33>/Prmry_Park_Pawl_Front_Stat'
         *  Merge: '<Root>/Merge_13'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_Park_Pawl_Front_Stat_read'
         */
        PPCR_ac_B.Merge_13 =
            Rte_IrvRead_PPCR_FastTEF_Park_Pawl_Stat_Init_Front_write_IRV();

        /* Merge: '<S27>/Merge_1' incorporates:
         *  Inport: '<S33>/Prmry_Park_Pawl_flt_Front_Stat'
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_Park_Pawl_flt_Front_Stat_read'
         */
        PPCR_ac_B.Merge_1 =
            Rte_IrvRead_PPCR_FastTEF_Park_Pawl_flt_Stat_Init_Front_write_IRV();

        /* Merge: '<S27>/Merge_2' incorporates:
         *  Inport: '<S33>/Prmry_PP_Motor_Pos_Front_Stat'
         *  Merge: '<Root>/Merge_18'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_PP_Motor_Pos_Front_Stat_read'
         */
        PPCR_ac_B.Merge_2 =
            Rte_IrvRead_PPCR_FastTEF_PP_MotorPos_Stat_Init_Front_write_IRV();

        /* Merge: '<S27>/Merge_3' incorporates:
         *  Inport: '<S33>/Prmry_PP_Pos_Front_Sensor'
         *  Merge: '<Root>/Merge_17'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_PP_Pos_Front_Sensor_read'
         */
        PPCR_ac_B.Merge_3 =
            Rte_IrvRead_PPCR_FastTEF_PP_Pos_Sensor_Init_Front_write_IRV();

        /* Merge: '<S27>/Merge_4' incorporates:
         *  Logic: '<S33>/Logical1'
         *  Merge: '<Root>/Merge_14'
         *  Merge: '<Root>/Merge_15'
         *  Merge: '<Root>/Merge_16'
         *  Merge: '<Root>/Merge_19'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_PP_Motor_Pos_Front_StatFA_read'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_PP_Pos_Front_SensorFA_read'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_Park_Pawl_Front_StatFA_read'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_Park_Pawl_flt_Front_StatFA_read'
         */
        VePPCI_b_Prmry_Fail =
            ((((Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_Park_Pawl_StatFA_Front_write_IRV
                ()) ||
               (Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front_write_IRV
                ())) ||
              (Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front_write_IRV
               ())) ||
             (Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_PP_Pos_SensorFA_Front_write_IRV
              ()));

        /* End of Outputs for SubSystem: '<S27>/CANBus_Rationalization_F' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S27>/CANBus_Rationalization_R' incorporates:
         *  ActionPort: '<S34>/ActionPort'
         */
        /* Merge: '<S27>/Merge_13' incorporates:
         *  Inport: '<S34>/Prmry_Park_Pawl_Stat'
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_Park_Pawl_Stat_read'
         */
        PPCR_ac_B.Merge_13 =
            Rte_IrvRead_PPCR_FastTEF_Park_Pawl_Stat_Init_write_IRV();

        /* Merge: '<S27>/Merge_1' incorporates:
         *  Inport: '<S34>/Prmry_Park_Pawl_flt_Stat'
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_Park_Pawl_flt_Stat_read'
         */
        PPCR_ac_B.Merge_1 =
            Rte_IrvRead_PPCR_FastTEF_Park_Pawl_flt_Stat_Init_write_IRV();

        /* Merge: '<S27>/Merge_2' incorporates:
         *  Inport: '<S34>/Prmry_PP_Motor_Pos_Stat'
         *  Merge: '<Root>/Merge_7'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_PP_Motor_Pos_Stat_read'
         */
        PPCR_ac_B.Merge_2 =
            Rte_IrvRead_PPCR_FastTEF_PP_MotorPos_Stat_Init_write_IRV();

        /* Merge: '<S27>/Merge_3' incorporates:
         *  Inport: '<S34>/Prmry_PP_Pos_Sensor'
         *  Merge: '<Root>/Merge_6'
         *  SignalConversion generated from: '<S10>/VePPCR_e_Prmry_PP_Pos_Sensor_read'
         */
        PPCR_ac_B.Merge_3 =
            Rte_IrvRead_PPCR_FastTEF_PP_Pos_Sensor_Init_write_IRV();

        /* Merge: '<S27>/Merge_4' incorporates:
         *  Logic: '<S34>/Logical1'
         *  Merge: '<Root>/Merge_3'
         *  Merge: '<Root>/Merge_4'
         *  Merge: '<Root>/Merge_5'
         *  Merge: '<Root>/Merge_8'
         *  Merge: '<Root>/Merge_9'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_MPR_Pos_SensorFA_read'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_PP_Motor_Pos_StatFA_read'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_PP_Pos_SensorFA_read'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_Park_Pawl_StatFA_read'
         *  SignalConversion generated from: '<S10>/VePPCR_b_Prmry_Park_Pawl_flt_StatFA_read'
         */
        VePPCI_b_Prmry_Fail =
            (((((Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_Park_Pawl_StatFA_write_IRV
                 ()) ||
                (Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_write_IRV
                 ())) ||
               (Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_write_IRV
                ())) ||
              (Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_PP_Pos_SensorFA_write_IRV
               ())) ||
             (Rte_IrvRead_PPCR_FastTEF_VePPCR_b_Prmry_MPR_Pos_SensorFA_write_IRV
              ()));
        PPCR_ac_B.Prmry_MPR_Pos_Sensor =
            Rte_IrvRead_PPCR_FastTEF_MPR_Pos_Sensor_Init_write_IRV();

        /* End of Outputs for SubSystem: '<S27>/CANBus_Rationalization_R' */
    }

    /* End of If: '<S27>/If' */
    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/PPCR_MSG_FastTEF' */

    /* Inport: '<Root>/VeTRGR_e_PPawlCmnd' */
    (void)Rte_Read_VeTRGR_e_PPawlCmnd_Value((&(VePPCI_e_PPawlCmnd)));

    /* Outputs for Function Call SubSystem: '<Root>/PPCR_MSG_FastTEF' */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_IntrnlInputs'
     */
    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KePPCR_b_PPawlCmnd_Ovrd)
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Constant: '<S51>/Calib'
         *  Inport: '<Root>/VeTRGR_e_PPawlCmnd'
         */
        VePPCI_e_PPawlCmnd = KePPCR_e_PPawlCmnd_OvrdVal;
    }

    /* End of Switch: '<S30>/Switch1' */

    /* Switch: '<S30>/Switch5' incorporates:
     *  Constant: '<S46>/Calib'
     *  Inport: '<Root>/VeDFIR_b_DiagSystemDsbl'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    if (KePPCR_b_DiagResetOvrd)
    {
        /* Switch: '<S30>/Switch5' incorporates:
         *  Constant: '<S47>/Calib'
         */
        VePPCI_b_DiagReset = KePPCR_b_DiagResetOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&rtb_Comparison2);
        (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_Logical1_m);
        (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&rtb_Comparison1_ja);

        /* Switch: '<S30>/Switch5' incorporates:
         *  Inport: '<Root>/VeDFIR_b_DiagSystemDsbl'
         *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
         *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
         *  Logic: '<S30>/Logical2'
         */
        VePPCI_b_DiagReset = ((rtb_Comparison1_ja || rtb_Logical1_m) ||
                              rtb_Comparison2);
    }

    /* End of Switch: '<S30>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/PPCR_MSG_FastTEF' */

    /* Inport: '<Root>/VeHPMR_b_CntrlrPwrHold' */
    (void)Rte_Read_VeHPMR_b_CntrlrPwrHold_Value(&rtb_Comparison1);

    /* Outputs for Function Call SubSystem: '<Root>/PPCR_MSG_FastTEF' */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_IntrnlInputs'
     */
    /* Switch: '<S30>/Switch8' incorporates:
     *  Constant: '<S48>/Calib'
     */
    if (KePPCR_b_HCPShtDwnCmdOvrd)
    {
        /* Logic: '<S30>/Logical1' incorporates:
         *  Constant: '<S49>/Calib'
         */
        VePPCR_b_HCPShtDwnCmd = !KePPCR_b_HCPShtDwnCmdVal;
    }
    else
    {
        /* Logic: '<S30>/Logical1' */
        VePPCR_b_HCPShtDwnCmd = !rtb_Comparison1;
    }

    /* End of Switch: '<S30>/Switch8' */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/VldtParkStatus'
     */
    /* DataStoreWrite: '<S58>/DataStoreWrite7' incorporates:
     *  UnitDelay: '<S58>/Unit Delay1'
     */
    PPCR_ac_DW.NePPCR_e_PrvCmdVal = PPCR_ac_DW.UnitDelay1_DSTATE;

    /* RelationalOperator: '<S58>/Comparison1' incorporates:
     *  Constant: '<S63>/Constant'
     */
    rtb_Comparison1 = (((uint32)VePPCI_e_PPawlCmnd) == CeTRGR_e_PPawlEngage);

    /* RelationalOperator: '<S58>/Comparison2' incorporates:
     *  Constant: '<S64>/Constant'
     */
    rtb_Comparison2 = (((uint32)VePPCI_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage);

    /* Outputs for Atomic SubSystem: '<S58>/SignalLatchOnWithReset1' */
    /* Logic: '<S76>/OR1' incorporates:
     *  Logic: '<S76>/NOT'
     *  Logic: '<S76>/OR'
     *  UnitDelay: '<S76>/Unit Delay'
     */
    PPCR_ac_DW.UnitDelay_DSTATE_d = (rtb_Comparison1 || ((!rtb_Comparison2) &&
        (PPCR_ac_DW.UnitDelay_DSTATE_d)));

    /* End of Outputs for SubSystem: '<S58>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S58>/SignalLatchOnWithReset2' */
    /* Logic: '<S77>/OR1' incorporates:
     *  Logic: '<S77>/NOT'
     *  Logic: '<S77>/OR'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    PPCR_ac_DW.UnitDelay_DSTATE_m = (rtb_Comparison2 || ((!rtb_Comparison1) &&
        (PPCR_ac_DW.UnitDelay_DSTATE_m)));

    /* End of Outputs for SubSystem: '<S58>/SignalLatchOnWithReset2' */

    /* Switch: '<S58>/Switch4' incorporates:
     *  Constant: '<S66>/Constant'
     *  Constant: '<S69>/Calib'
     *  Logic: '<S58>/Logical1'
     *  Logic: '<S58>/Logical2'
     *  Logic: '<S58>/Logical3'
     *  RelationalOperator: '<S58>/Comparison5'
     *  UnitDelay: '<S76>/Unit Delay'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    if (KePPCR_b_PPawlReq_DBC_FXD)
    {
        rtb_Logical1_m = (((uint32)VePPCI_e_PPawlCmnd) == CeTRGR_e_PPawlIdle);
    }
    else
    {
        rtb_Logical1_m = (((((uint32)VePPCI_e_PPawlCmnd) == CeTRGR_e_PPawlIdle) &&
                           (!PPCR_ac_DW.UnitDelay_DSTATE_d)) &&
                          (!PPCR_ac_DW.UnitDelay_DSTATE_m));
    }

    /* End of Switch: '<S58>/Switch4' */

    /* If: '<S58>/If' incorporates:
     *  Constant: '<S69>/Calib'
     *  Switch: '<S58>/Switch1'
     *  Switch: '<S58>/Switch2'
     */
    if (rtb_Logical1_m)
    {
        /* Outputs for IfAction SubSystem: '<S58>/No_Req' incorporates:
         *  ActionPort: '<S70>/ActionPort'
         */
        /* Merge: '<S58>/Merge2' incorporates:
         *  Constant: '<S80>/Constant'
         *  SignalConversion generated from: '<S70>/PPawl_Prev_CMD_READ'
         */
        VePPCC_e_PPawl_HW_Request = CePPCR_e_Req_No_Req;

        /* End of Outputs for SubSystem: '<S58>/No_Req' */
    }
    else
    {
        if (!KePPCR_b_PPawlReq_DBC_FXD)
        {
            /* Switch: '<S58>/Switch1' incorporates:
             *  UnitDelay: '<S76>/Unit Delay'
             */
            rtb_Comparison1 = PPCR_ac_DW.UnitDelay_DSTATE_d;
        }

        if (rtb_Comparison1)
        {
            /* Outputs for IfAction SubSystem: '<S58>/Engage' incorporates:
             *  ActionPort: '<S61>/ActionPort'
             */
            /* Merge: '<S58>/Merge2' incorporates:
             *  Constant: '<S79>/Constant'
             *  SignalConversion generated from: '<S61>/PPawl_HW_Req'
             */
            VePPCC_e_PPawl_HW_Request = CePPCR_e_Req_Engage;

            /* End of Outputs for SubSystem: '<S58>/Engage' */
        }
        else
        {
            if (!KePPCR_b_PPawlReq_DBC_FXD)
            {
                /* Switch: '<S58>/Switch2' incorporates:
                 *  UnitDelay: '<S77>/Unit Delay'
                 */
                rtb_Comparison2 = PPCR_ac_DW.UnitDelay_DSTATE_m;
            }

            if (rtb_Comparison2)
            {
                /* Outputs for IfAction SubSystem: '<S58>/Disengage' incorporates:
                 *  ActionPort: '<S60>/ActionPort'
                 */
                /* Merge: '<S58>/Merge2' incorporates:
                 *  Constant: '<S78>/Constant'
                 *  SignalConversion generated from: '<S60>/PPawl_Fdbck'
                 */
                VePPCC_e_PPawl_HW_Request = CePPCR_e_Req_Disengage;

                /* End of Outputs for SubSystem: '<S58>/Disengage' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S58>/SNA' incorporates:
                 *  ActionPort: '<S75>/ActionPort'
                 */
                /* Merge: '<S58>/Merge2' incorporates:
                 *  Constant: '<S85>/Constant'
                 *  SignalConversion generated from: '<S75>/PPawl_Fdbck'
                 */
                VePPCC_e_PPawl_HW_Request = CePPCR_e_Req_SNA;

                /* End of Outputs for SubSystem: '<S58>/SNA' */
            }
        }
    }

    /* End of If: '<S58>/If' */

    /* DataTypeConversion: '<S58>/Data Type Conversion2' incorporates:
     *  Constant: '<S68>/Calib'
     *  DataTypeConversion: '<S58>/Data Type Conversion1'
     *  Merge: '<S58>/Merge2'
     *  Selector: '<S58>/Selector'
     */
    VePPCC_e_PPawl_HW_Request_Map = (TePPCR_e_PCUCtrl_PP_REQ)
        KaPPCR_e_PPawlReq_Map[(VePPCC_e_PPawl_HW_Request)];

    /* If: '<S58>/If1' incorporates:
     *  Constant: '<S62>/Constant'
     *  Constant: '<S65>/Constant'
     *  Constant: '<S67>/Constant'
     *  RelationalOperator: '<S58>/Comparison3'
     *  RelationalOperator: '<S58>/Comparison4'
     *  RelationalOperator: '<S58>/Comparison6'
     */
    if (((uint32)VePPCI_e_PPawlCmnd) == CeTRGR_e_PPawlEngage)
    {
        /* Outputs for IfAction SubSystem: '<S58>/PPawl_e_Engage' incorporates:
         *  ActionPort: '<S72>/ActionPort'
         */
        /* Merge: '<S58>/Merge1' incorporates:
         *  Constant: '<S82>/Constant'
         *  SignalConversion generated from: '<S72>/PPawl_HW_Req'
         */
        VePPCC_e_PPawl_Request = CePPCR_e_PPAWL_MOVE_TO_ENG;

        /* End of Outputs for SubSystem: '<S58>/PPawl_e_Engage' */
    }
    else if (((uint32)VePPCI_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage)
    {
        /* Outputs for IfAction SubSystem: '<S58>/PPawl_e_Disengage' incorporates:
         *  ActionPort: '<S71>/ActionPort'
         */
        /* Merge: '<S58>/Merge1' incorporates:
         *  Constant: '<S81>/Constant'
         *  SignalConversion generated from: '<S71>/PPawl_HW_Req'
         */
        VePPCC_e_PPawl_Request = CePPCR_e_PPAWL_MOVE_TO_DISENG;

        /* End of Outputs for SubSystem: '<S58>/PPawl_e_Disengage' */
    }
    else if (((uint32)VePPCI_e_PPawlCmnd) == CeTRGR_e_PPawlIdle)
    {
        /* Outputs for IfAction SubSystem: '<S58>/PPawl_e_Idle' incorporates:
         *  ActionPort: '<S73>/ActionPort'
         */
        /* Merge: '<S58>/Merge1' incorporates:
         *  Constant: '<S83>/Constant'
         *  SignalConversion generated from: '<S73>/PPawl_HW_Req'
         */
        VePPCC_e_PPawl_Request = CePPCR_e_PPAWL_Idle;

        /* End of Outputs for SubSystem: '<S58>/PPawl_e_Idle' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S58>/PPawl_e_Unknown' incorporates:
         *  ActionPort: '<S74>/ActionPort'
         */
        /* Merge: '<S58>/Merge1' incorporates:
         *  Constant: '<S84>/Constant'
         *  SignalConversion generated from: '<S74>/PPawl_HW_Req'
         */
        VePPCC_e_PPawl_Request = CePPCR_e_PPAWL_UNKNOWN_Request;

        /* End of Outputs for SubSystem: '<S58>/PPawl_e_Unknown' */
    }

    /* End of If: '<S58>/If1' */

    /* RelationalOperator: '<S86>/Comparison6' incorporates:
     *  Constant: '<S93>/Constant'
     */
    rtb_Comparison1 = (((uint32)VePPCI_e_Prmry_ParkPawl_flt_Stat) ==
                       CePPCR_e_FS_SNA);

    /* Outputs for Atomic SubSystem: '<S87>/SignalLatchOnWithReset' */
    /* Logic: '<S95>/OR1' incorporates:
     *  Constant: '<S94>/Constant'
     *  Logic: '<S87>/Logical34'
     *  Logic: '<S95>/NOT'
     *  Logic: '<S95>/OR'
     *  RelationalOperator: '<S87>/Comparison5'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    PPCR_ac_DW.UnitDelay_DSTATE_f = ((((uint32)VePPCI_e_Prmry_ParkPawl_flt_Stat)
        == CePPCR_e_FS_Non_Recoverable) || (((!VePPCR_b_HCPShtDwnCmd) &&
        (!VePPCI_b_DiagReset)) && (PPCR_ac_DW.UnitDelay_DSTATE_f)));

    /* End of Outputs for SubSystem: '<S87>/SignalLatchOnWithReset' */

    /* RelationalOperator: '<S88>/Comparison2' incorporates:
     *  Constant: '<S97>/Constant'
     */
    rtb_Comparison2 = (((uint32)VePPCI_e_Prmry_PP_MotorPos_Stat) ==
                       CePPCR_e_Mtr_SNA);

    /* Outputs for Atomic SubSystem: '<S88>/Timer_Retrigger_Reset_Enabled' */
    /* Switch: '<S100>/Switch2' incorporates:
     *  Constant: '<S96>/Constant'
     *  Constant: '<S98>/Calib'
     *  Logic: '<S88>/Logical5'
     *  RelationalOperator: '<S88>/Comparison1'
     *  Switch: '<S100>/Switch1'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    if (((uint32)VePPCI_e_Prmry_PP_MotorPos_Stat) !=
            CePPCR_e_Mtr_Between_End_Diseng)
    {
        PPCR_ac_DW.UnitDelay_DSTATE = KePPCR_t_BtwRngDbnc;
    }
    else
    {
        /* UnitDelay: '<S100>/Unit Delay' incorporates:
         *  Constant: '<S100>/Constant Value4'
         *  Constant: '<S99>/Calib'
         *  MinMax: '<S100>/Maximum'
         *  Sum: '<S100>/Subtraction'
         *  Switch: '<S100>/Switch2'
         */
        PPCR_ac_DW.UnitDelay_DSTATE = fmaxf(PPCR_ac_DW.UnitDelay_DSTATE -
            KePPCR_t_dT, 0.0F);
    }

    /* End of Switch: '<S100>/Switch2' */

    /* Logic: '<S88>/Logical1' incorporates:
     *  Constant: '<S100>/Constant Value2'
     *  RelationalOperator: '<S100>/Greater Than1'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    rtb_Logical1_m = (PPCR_ac_DW.UnitDelay_DSTATE <= 0.0F);

    /* End of Outputs for SubSystem: '<S88>/Timer_Retrigger_Reset_Enabled' */

    /* RelationalOperator: '<S89>/Comparison1' incorporates:
     *  Constant: '<S107>/Constant'
     */
    rtb_Comparison1_ja = (((uint32)VePPCI_e_Prmry_ParkPawl_Stat) ==
                          CePPCR_e_SC_Engaging);

    /* RelationalOperator: '<S89>/Comparison3' incorporates:
     *  Constant: '<S112>/Constant'
     */
    rtb_Comparison3_b = (((uint32)VePPCI_e_Prmry_ParkPawl_Stat) ==
                         CePPCR_e_SC_Disengaging);

    /* RelationalOperator: '<S89>/Comparison4' incorporates:
     *  Constant: '<S110>/Constant'
     */
    rtb_Comparison4_j = (((uint32)VePPCI_e_Prmry_ParkPawl_Stat) ==
                         CePPCR_e_SC_Init);

    /* Logic: '<S89>/Logical2' incorporates:
     *  Constant: '<S115>/Constant'
     *  Constant: '<S116>/Constant'
     *  RelationalOperator: '<S89>/Comparison7'
     *  RelationalOperator: '<S89>/Comparison8'
     */
    rtb_Logical2_a = ((((uint32)VePPCI_e_Prmry_ParkPawl_flt_Stat) ==
                       CePPCR_e_FS_Dereating) || (((uint32)
                        VePPCI_e_Prmry_ParkPawl_flt_Stat) ==
                       CePPCR_e_FS_Retrying));

    /* If: '<S89>/If' incorporates:
     *  Constant: '<S108>/Constant'
     *  Constant: '<S109>/Constant'
     *  Constant: '<S111>/Constant'
     *  Constant: '<S113>/Constant'
     *  Constant: '<S114>/Constant'
     *  Constant: '<S117>/Constant'
     *  Logic: '<S89>/Logical1'
     *  Logic: '<S89>/Logical3'
     *  Logic: '<S89>/Logical4'
     *  Logic: '<S89>/Logical5'
     *  Logic: '<S89>/Logical6'
     *  RelationalOperator: '<S89>/Comparison10'
     *  RelationalOperator: '<S89>/Comparison11'
     *  RelationalOperator: '<S89>/Comparison2'
     *  RelationalOperator: '<S89>/Comparison5'
     *  RelationalOperator: '<S89>/Comparison6'
     *  RelationalOperator: '<S89>/Comparison9'
     */
    if (((((uint32)VePPCI_e_Prmry_ParkPawl_flt_Stat) ==
            CePPCR_e_FS_Non_Recoverable) || (((uint32)
            VePPCI_e_Prmry_ParkPawl_flt_Stat) == CePPCR_e_FS_SNA)) ||
            (rtb_Logical2_a && rtb_Comparison4_j))
    {
        /* Outputs for IfAction SubSystem: '<S89>/Stuck' incorporates:
         *  ActionPort: '<S120>/ActionPort'
         */
        PPCR_ac_Stuck((&(VePPCC_e_PPawl_Fdbck)));

        /* End of Outputs for SubSystem: '<S89>/Stuck' */
    }
    else if (rtb_Logical2_a && rtb_Comparison1_ja)
    {
        /* Outputs for IfAction SubSystem: '<S89>/Dither_eng' incorporates:
         *  ActionPort: '<S104>/ActionPort'
         */
        /* Merge: '<S89>/Merge' incorporates:
         *  Constant: '<S125>/Constant'
         *  SignalConversion generated from: '<S104>/PPawl_Fdbck'
         */
        VePPCC_e_PPawl_Fdbck = CePPCR_e_PPAWL_AutoUnlock_Engaging;

        /* End of Outputs for SubSystem: '<S89>/Dither_eng' */
    }
    else if (rtb_Logical2_a && rtb_Comparison3_b)
    {
        /* Outputs for IfAction SubSystem: '<S89>/Dither_Diseng' incorporates:
         *  ActionPort: '<S103>/ActionPort'
         */
        /* Merge: '<S89>/Merge' incorporates:
         *  Constant: '<S124>/Constant'
         *  SignalConversion generated from: '<S103>/PPawl_Fdbck'
         */
        VePPCC_e_PPawl_Fdbck = CePPCR_e_PPAWL_AutoUnlock_DisEngaging;

        /* End of Outputs for SubSystem: '<S89>/Dither_Diseng' */
    }
    else if (rtb_Comparison4_j)
    {
        /* Outputs for IfAction SubSystem: '<S89>/Init' incorporates:
         *  ActionPort: '<S119>/ActionPort'
         */
        /* Merge: '<S89>/Merge' incorporates:
         *  Constant: '<S129>/Constant'
         *  SignalConversion generated from: '<S119>/PPawl_Fdbck'
         */
        VePPCC_e_PPawl_Fdbck = CePPCR_e_PPAWL_InitSegOneInProgress;

        /* End of Outputs for SubSystem: '<S89>/Init' */
    }
    else if (rtb_Comparison1_ja)
    {
        /* Outputs for IfAction SubSystem: '<S89>/Engaging' incorporates:
         *  ActionPort: '<S106>/ActionPort'
         */
        /* Merge: '<S89>/Merge' incorporates:
         *  Constant: '<S127>/Constant'
         *  SignalConversion generated from: '<S106>/PPawl_Fdbck'
         */
        VePPCC_e_PPawl_Fdbck = CePPCR_e_PPAWL_Engaging;

        /* End of Outputs for SubSystem: '<S89>/Engaging' */
    }
    else if (((uint32)VePPCI_e_Prmry_ParkPawl_Stat) == CePPCR_e_SC_Engaged)
    {
        /* Outputs for IfAction SubSystem: '<S89>/Engaged' incorporates:
         *  ActionPort: '<S105>/ActionPort'
         */
        /* Merge: '<S89>/Merge' incorporates:
         *  Constant: '<S126>/Constant'
         *  SignalConversion generated from: '<S105>/PPawl_Fdbck'
         */
        VePPCC_e_PPawl_Fdbck = CePPCR_e_PPAWL_ENGAGED;

        /* End of Outputs for SubSystem: '<S89>/Engaged' */
    }
    else if (rtb_Comparison3_b)
    {
        /* Outputs for IfAction SubSystem: '<S89>/Disengaging' incorporates:
         *  ActionPort: '<S102>/ActionPort'
         */
        /* Merge: '<S89>/Merge' incorporates:
         *  Constant: '<S123>/Constant'
         *  SignalConversion generated from: '<S102>/PPawl_Fdbck'
         */
        VePPCC_e_PPawl_Fdbck = CePPCR_e_PPAWL_DisEngaging;

        /* End of Outputs for SubSystem: '<S89>/Disengaging' */
    }
    else if (((uint32)VePPCI_e_Prmry_ParkPawl_Stat) == CePPCR_e_SC_Disengaged)
    {
        /* Outputs for IfAction SubSystem: '<S89>/Disengaged' incorporates:
         *  ActionPort: '<S101>/ActionPort'
         */
        /* Merge: '<S89>/Merge' incorporates:
         *  Constant: '<S122>/Constant'
         *  SignalConversion generated from: '<S101>/PPawl_Fdbck'
         */
        VePPCC_e_PPawl_Fdbck = CePPCR_e_PPAWL_DISENGAGED;

        /* End of Outputs for SubSystem: '<S89>/Disengaged' */
    }
    else if ((((uint32)VePPCI_e_Prmry_ParkPawl_Stat) == CePPCR_e_SC_Fault) ||
             (((uint32)VePPCI_e_Prmry_ParkPawl_Stat) == CePPCR_e_SC_SNA))
    {
        /* Outputs for IfAction SubSystem: '<S89>/Fault' incorporates:
         *  ActionPort: '<S118>/ActionPort'
         */
        PPCR_ac_Stuck((&(VePPCC_e_PPawl_Fdbck)));

        /* End of Outputs for SubSystem: '<S89>/Fault' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S89>/Unknown' incorporates:
         *  ActionPort: '<S121>/ActionPort'
         */
        PPCR_ac_Stuck((&(VePPCC_e_PPawl_Fdbck)));

        /* End of Outputs for SubSystem: '<S89>/Unknown' */
    }

    /* End of If: '<S89>/If' */

    /* Logic: '<S90>/Logical1' incorporates:
     *  Logic: '<S90>/Logical2'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_Comparison1_ja = ((PPCR_ac_DW.UnitDelay_DSTATE_f) || rtb_Comparison1);

    /* Logic: '<S90>/Logical1' */
    VePPCC_b_PPawlFlt_UnknownPos = (((rtb_Comparison1_ja || rtb_Comparison2) ||
        rtb_Logical1_m) || (VePPCI_b_Prmry_Fail));

    /* Logic: '<S90>/Logical2' */
    VePPCC_b_PPawlFlt_InhibitMtr = (rtb_Comparison1_ja || (VePPCI_b_Prmry_Fail));

    /* Logic: '<S90>/Logical3' incorporates:
     *  Constant: '<S92>/Constant'
     *  RelationalOperator: '<S86>/Comparison3'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    VePPCC_b_PPawl_TXFlt = ((((((PPCR_ac_DW.UnitDelay_DSTATE_f) ||
        (VePPCI_b_Prmry_Fail)) || rtb_Comparison1) || (((uint32)
        VePPCI_e_Prmry_ParkPawl_flt_Stat) == CePPCR_e_FS_Retrying)) ||
        rtb_Comparison2) || rtb_Logical1_m);

    /* Update for UnitDelay: '<S58>/Unit Delay1' incorporates:
     *  Merge: '<S58>/Merge2'
     */
    PPCR_ac_DW.UnitDelay1_DSTATE = VePPCC_e_PPawl_HW_Request;

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_IntrnlOutputs'
     */
    /* Outport: '<Root>/VePPCR_b_PPawlFlt_InhibitMtr' incorporates:
     *  Gain: '<S54>/Gain'
     *  SignalConversion generated from: '<S10>/PP_Flt_InhibitMtr'
     */
    (void)Rte_Write_VePPCR_b_PPawlFlt_InhibitMtr_Value
        (VePPCC_b_PPawlFlt_InhibitMtr);

    /* Outport: '<Root>/VePPCR_e_PPawlRequest' incorporates:
     *  DataTypeConversion: '<S52>/DataTypeConversion'
     *  Merge: '<S58>/Merge1'
     *  SignalConversion generated from: '<S10>/PP_Request'
     */
    (void)Rte_Write_VePPCR_e_PPawlRequest_Value(VePPCC_e_PPawl_Request);

    /* Outport: '<Root>/VePPCR_b_PPawl_TXFlt' incorporates:
     *  Gain: '<S55>/Gain'
     *  SignalConversion generated from: '<S10>/PP_TXFlt'
     */
    (void)Rte_Write_VePPCR_b_PPawl_TXFlt_Value(VePPCC_b_PPawl_TXFlt);

    /* Outport: '<Root>/VePPCR_b_PPawlFlt_UnknownPos' incorporates:
     *  Gain: '<S56>/Gain'
     *  SignalConversion generated from: '<S10>/PP_UnknownPos'
     */
    (void)Rte_Write_VePPCR_b_PPawlFlt_UnknownPos_Value
        (VePPCC_b_PPawlFlt_UnknownPos);

    /* Outport: '<Root>/VePPCR_e_PPawlFdbck' incorporates:
     *  DataTypeConversion: '<S53>/DataTypeConversion'
     *  Merge: '<S89>/Merge'
     *  SignalConversion generated from: '<S10>/PPawlFdbck'
     */
    (void)Rte_Write_VePPCR_e_PPawlFdbck_Value(VePPCC_e_PPawl_Fdbck);

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_CANOutputs'
     */
    /* Outport: '<Root>/VePPCR_e_PPawl_HW_Request' incorporates:
     *  DataTypeConversion: '<S35>/DataTypeConversion'
     *  DataTypeConversion: '<S58>/Data Type Conversion2'
     *  SignalConversion generated from: '<S10>/VePPCR_e_PPawl_HW_Request'
     */
    (void)Rte_Write_VePPCR_e_PPawl_HW_Request_Value
        (VePPCC_e_PPawl_HW_Request_Map);

    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/PPCR_MSG_FastTEF' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_MPR_Pos_Sensor(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_MPR_Pos_Sensor' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S1>/FsftPPCR_b_Prmry_MPR_Pos_SensorChrt'
     *  SignalConversion generated from: '<S1>/VePPCR_b_Prmry_MPR_Pos_SensorFA_write'
     */
    /* Gateway: FsftPPCR_b_Prmry_MPR_Pos_Sensor/FsftPPCR_b_Prmry_MPR_Pos_SensorChrt */
    /* During: FsftPPCR_b_Prmry_MPR_Pos_Sensor/FsftPPCR_b_Prmry_MPR_Pos_SensorChrt */
    /* Entry Internal: FsftPPCR_b_Prmry_MPR_Pos_Sensor/FsftPPCR_b_Prmry_MPR_Pos_SensorChrt */
    /* Transition: '<S22>:2' */
    Rte_IrvWrite_FsftPPCR_b_Prmry_MPR_Pos_Sensor_VePPCR_b_Prmry_MPR_Pos_SensorFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_MPR_Pos_Sensor' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_PP_Motor_Pos_Stat(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Motor_Pos_Stat' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S2>/FsftPPCR_b_Prmry_PP_Motor_Pos_StatChrt'
     *  SignalConversion generated from: '<S2>/VePPCR_b_Prmry_PP_Motor_Pos_StatFA_write'
     */
    /* Gateway: FsftPPCR_b_Prmry_PP_Motor_Pos_Stat/FsftPPCR_b_Prmry_PP_Motor_Pos_StatChrt */
    /* During: FsftPPCR_b_Prmry_PP_Motor_Pos_Stat/FsftPPCR_b_Prmry_PP_Motor_Pos_StatChrt */
    /* Entry Internal: FsftPPCR_b_Prmry_PP_Motor_Pos_Stat/FsftPPCR_b_Prmry_PP_Motor_Pos_StatChrt */
    /* Transition: '<S23>:2' */
    Rte_IrvWrite_FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Motor_Pos_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_Front(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_Front' */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  Constant: '<S3>/Constant'
     *  SignalConversion generated from: '<S3>/VePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front_write'
     * */
    Rte_IrvWrite_FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_Front_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_PP_Pos_Sensor(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Pos_Sensor' */
    /* Merge: '<Root>/Merge_5' incorporates:
     *  Chart: '<S4>/FsftPPCR_b_Prmry_PP_Pos_SensorChrt'
     *  SignalConversion generated from: '<S4>/VePPCR_b_Prmry_PP_Pos_SensorFA_write'
     */
    /* Gateway: FsftPPCR_b_Prmry_PP_Pos_Sensor/FsftPPCR_b_Prmry_PP_Pos_SensorChrt */
    /* During: FsftPPCR_b_Prmry_PP_Pos_Sensor/FsftPPCR_b_Prmry_PP_Pos_SensorChrt */
    /* Entry Internal: FsftPPCR_b_Prmry_PP_Pos_Sensor/FsftPPCR_b_Prmry_PP_Pos_SensorChrt */
    /* Transition: '<S24>:2' */
    Rte_IrvWrite_FsftPPCR_b_Prmry_PP_Pos_Sensor_VePPCR_b_Prmry_PP_Pos_SensorFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Pos_Sensor' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_PP_Pos_Sensor_Front(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Pos_Sensor_Front' */
    /* Merge: '<Root>/Merge_16' incorporates:
     *  Constant: '<S5>/Constant'
     *  SignalConversion generated from: '<S5>/VePPCR_b_Prmry_PP_Pos_SensorFA_Front_write'
     * */
    Rte_IrvWrite_FsftPPCR_b_Prmry_PP_Pos_Sensor_Front_VePPCR_b_Prmry_PP_Pos_SensorFA_Front_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_PP_Pos_Sensor_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_Park_Pawl_Stat(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_Stat' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S6>/FsftPPCR_b_Prmry_Park_Pawl_StatChrt'
     *  SignalConversion generated from: '<S6>/VePPCR_b_Prmry_Park_Pawl_StatFA_write'
     */
    /* Gateway: FsftPPCR_b_Prmry_Park_Pawl_Stat/FsftPPCR_b_Prmry_Park_Pawl_StatChrt */
    /* During: FsftPPCR_b_Prmry_Park_Pawl_Stat/FsftPPCR_b_Prmry_Park_Pawl_StatChrt */
    /* Entry Internal: FsftPPCR_b_Prmry_Park_Pawl_Stat/FsftPPCR_b_Prmry_Park_Pawl_StatChrt */
    /* Transition: '<S25>:2' */
    Rte_IrvWrite_FsftPPCR_b_Prmry_Park_Pawl_Stat_VePPCR_b_Prmry_Park_Pawl_StatFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_Park_Pawl_Stat_Front(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_Stat_Front' */
    /* Merge: '<Root>/Merge_14' incorporates:
     *  Constant: '<S7>/Constant'
     *  SignalConversion generated from: '<S7>/VePPCR_b_Prmry_Park_Pawl_StatFA_Front_write'
     * */
    Rte_IrvWrite_FsftPPCR_b_Prmry_Park_Pawl_Stat_Front_VePPCR_b_Prmry_Park_Pawl_StatFA_Front_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_Stat_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_Park_Pawl_flt_Stat(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_flt_Stat' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S8>/FsftPPCR_b_Prmry_Park_Pawl_flt_StatChrt'
     *  SignalConversion generated from: '<S8>/VePPCR_b_Prmry_Park_Pawl_flt_StatFA_write'
     */
    /* Gateway: FsftPPCR_b_Prmry_Park_Pawl_flt_Stat/FsftPPCR_b_Prmry_Park_Pawl_flt_StatChrt */
    /* During: FsftPPCR_b_Prmry_Park_Pawl_flt_Stat/FsftPPCR_b_Prmry_Park_Pawl_flt_StatChrt */
    /* Entry Internal: FsftPPCR_b_Prmry_Park_Pawl_flt_Stat/FsftPPCR_b_Prmry_Park_Pawl_flt_StatChrt */
    /* Transition: '<S26>:2' */
    Rte_IrvWrite_FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_flt_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_Front(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_Front' */
    /* Merge: '<Root>/Merge_15' incorporates:
     *  Constant: '<S9>/Constant'
     *  SignalConversion generated from: '<S9>/VePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front_write'
     * */
    Rte_IrvWrite_FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_Front_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_MPR_Pos_Sensor(VAR(sint16, AUTOMATIC)
    LePPCR_e_Prmry_MPR_Pos_Sensor, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_MPR_Pos_SensorFA)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_MPR_Pos_SensorFA_ou_a;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_MPR_Pos_Sensor);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_MPR_Pos_SensorFA);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_MPR_Pos_Sensor' */
    /* Chart: '<S13>/PokePPCR_e_Prmry_MPR_Pos_SensorChrt' incorporates:
     *  Constant: '<S145>/Calib'
     *  SignalConversion generated from: '<S13>/LePPCR_b_Prmry_MPR_Pos_SensorFA'
     *  SignalConversion generated from: '<S13>/LePPCR_e_Prmry_MPR_Pos_Sensor'
     */
    /* Gateway: PokePPCR_e_Prmry_MPR_Pos_Sensor/PokePPCR_e_Prmry_MPR_Pos_SensorChrt */
    /* During: PokePPCR_e_Prmry_MPR_Pos_Sensor/PokePPCR_e_Prmry_MPR_Pos_SensorChrt */
    /* Entry Internal: PokePPCR_e_Prmry_MPR_Pos_Sensor/PokePPCR_e_Prmry_MPR_Pos_SensorChrt */
    /* Transition: '<S146>:2' */
    if (!LePPCR_b_Prmry_MPR_Pos_SensorFA)
    {
        /* Transition: '<S146>:3' */
        /* Transition: '<S146>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_MPR_Pos_Sensor_out = (TePPCR_e_PCUCtrl_MPR_Pos)
            PP_safe_cast_to_TePPCR_e_PCUCtrl_MPR_Pos((uint8)
            KaPPCR_e_Prmry_MPR_Pos_Sensor_Map[(LePPCR_e_Prmry_MPR_Pos_Sensor)]);
        rtb_LePPCR_b_Prmry_MPR_Pos_SensorFA_ou_a = false;

        /* Transition: '<S146>:18' */
    }
    else
    {
        /* Transition: '<S146>:4' */
        rtb_LePPCR_b_Prmry_MPR_Pos_SensorFA_ou_a = true;
    }

    /* End of Chart: '<S13>/PokePPCR_e_Prmry_MPR_Pos_SensorChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S13>/VePPCR_b_Prmry_MPR_Pos_SensorFA_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_MPR_Pos_Sensor_VePPCR_b_Prmry_MPR_Pos_SensorFA_write_IRV
        (rtb_LePPCR_b_Prmry_MPR_Pos_SensorFA_ou_a);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S13>/VePPCR_e_Prmry_MPR_Pos_Sensor_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_MPR_Pos_Sensor_MPR_Pos_Sensor_Init_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_MPR_Pos_Sensor_out);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_MPR_Pos_Sensor' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_PP_Motor_Pos_Stat(VAR(sint16, AUTOMATIC)
    LePPCR_e_Prmry_PP_Motor_Pos_Stat, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_PP_Motor_Pos_StatFA)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_g;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_PP_Motor_Pos_Stat);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_PP_Motor_Pos_StatFA);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat' */
    /* Chart: '<S14>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt' incorporates:
     *  Constant: '<S147>/Calib'
     *  SignalConversion generated from: '<S14>/LePPCR_b_Prmry_PP_Motor_Pos_StatFA'
     *  SignalConversion generated from: '<S14>/LePPCR_e_Prmry_PP_Motor_Pos_Stat'
     */
    /* Gateway: PokePPCR_e_Prmry_PP_Motor_Pos_Stat/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt */
    /* During: PokePPCR_e_Prmry_PP_Motor_Pos_Stat/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt */
    /* Entry Internal: PokePPCR_e_Prmry_PP_Motor_Pos_Stat/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt */
    /* Transition: '<S148>:2' */
    if (!LePPCR_b_Prmry_PP_Motor_Pos_StatFA)
    {
        /* Transition: '<S148>:3' */
        /* Transition: '<S148>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_out =
            (TePPCR_e_PCUCtrl_MtrPosStat)
            safe_cast_to_TePPCR_e_PCUCtrl_MtrPosStat((uint8)
            KaPPCR_e_Prmry_PP_Motor_Pos_Stat_Map
            [(LePPCR_e_Prmry_PP_Motor_Pos_Stat)]);
        rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_g = false;

        /* Transition: '<S148>:18' */
    }
    else
    {
        /* Transition: '<S148>:4' */
        rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_g = true;
    }

    /* End of Chart: '<S14>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt' */

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S14>/VePPCR_b_Prmry_PP_Motor_Pos_StatFA_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Motor_Pos_Stat_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_write_IRV
        (rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_g);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S14>/VePPCR_e_Prmry_PP_Motor_Pos_Stat_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Motor_Pos_Stat_PP_MotorPos_Stat_Init_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front(VAR(sint16,
    AUTOMATIC) LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_F;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front' */
    /* Chart: '<S15>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front' incorporates:
     *  Constant: '<S149>/Calib'
     *  SignalConversion generated from: '<S15>/LePPCR_b_Prmry_PP_Motor_Pos_StatFA'
     *  SignalConversion generated from: '<S15>/LePPCR_e_Prmry_PP_Motor_Pos_Stat'
     */
    /* Gateway: PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front */
    /* During: PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front */
    /* Entry Internal: PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front */
    /* Transition: '<S150>:2' */
    if (!LePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front)
    {
        /* Transition: '<S150>:3' */
        /* Transition: '<S150>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_o =
            (TePPCR_e_PCUCtrl_MtrPosStat)
            safe_cast_to_TePPCR_e_PCUCtrl_MtrPosStat((uint8)
            KaPPCR_e_Prmry_PP_Motor_Pos_Stat_Map_Front
            [(LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front)]);
        rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_F = false;

        /* Transition: '<S150>:18' */
    }
    else
    {
        /* Transition: '<S150>:4' */
        rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_F = true;
    }

    /* End of Chart: '<S15>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front' */

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S15>/VePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front_write_IRV
        (rtb_LePPCR_b_Prmry_PP_Motor_Pos_StatFA_F);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S15>/VePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_PP_MotorPos_Stat_Init_Front_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_o);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_PP_Pos_Sensor(VAR(sint16, AUTOMATIC)
    LePPCR_e_Prmry_PP_Pos_Sensor, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_PP_Pos_SensorFA)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_out;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_PP_Pos_Sensor);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_PP_Pos_SensorFA);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor' */
    /* Chart: '<S16>/PokePPCR_e_Prmry_PP_Pos_SensorChrt' incorporates:
     *  Constant: '<S151>/Calib'
     *  SignalConversion generated from: '<S16>/LePPCR_b_Prmry_PP_Pos_SensorFA'
     *  SignalConversion generated from: '<S16>/LePPCR_e_Prmry_PP_Pos_Sensor'
     */
    /* Gateway: PokePPCR_e_Prmry_PP_Pos_Sensor/PokePPCR_e_Prmry_PP_Pos_SensorChrt */
    /* During: PokePPCR_e_Prmry_PP_Pos_Sensor/PokePPCR_e_Prmry_PP_Pos_SensorChrt */
    /* Entry Internal: PokePPCR_e_Prmry_PP_Pos_Sensor/PokePPCR_e_Prmry_PP_Pos_SensorChrt */
    /* Transition: '<S152>:2' */
    if (!LePPCR_b_Prmry_PP_Pos_SensorFA)
    {
        /* Transition: '<S152>:3' */
        /* Transition: '<S152>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_out = (TePPCR_e_PCUCtrl_PosSnsr)
            PP_safe_cast_to_TePPCR_e_PCUCtrl_PosSnsr((uint8)
            KaPPCR_e_Prmry_PP_Pos_Sensor_Map[(LePPCR_e_Prmry_PP_Pos_Sensor)]);
        rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_out = false;

        /* Transition: '<S152>:18' */
    }
    else
    {
        /* Transition: '<S152>:4' */
        rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_out = true;
    }

    /* End of Chart: '<S16>/PokePPCR_e_Prmry_PP_Pos_SensorChrt' */

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S16>/VePPCR_b_Prmry_PP_Pos_SensorFA_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Pos_Sensor_VePPCR_b_Prmry_PP_Pos_SensorFA_write_IRV
        (rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_out);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S16>/VePPCR_e_Prmry_PP_Pos_Sensor_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Pos_Sensor_PP_Pos_Sensor_Init_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_out);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_PP_Pos_Sensor_Front(VAR(sint16, AUTOMATIC)
    LePPCR_e_Prmry_PP_Pos_Sensor_Front, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_PP_Pos_SensorFA_Front)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_Front;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_PP_Pos_Sensor_Front);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_PP_Pos_SensorFA_Front);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor_Front' */
    /* Chart: '<S17>/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front' incorporates:
     *  Constant: '<S153>/Calib'
     *  SignalConversion generated from: '<S17>/LePPCR_b_Prmry_PP_Pos_SensorFA'
     *  SignalConversion generated from: '<S17>/LePPCR_e_Prmry_PP_Pos_Sensor'
     */
    /* Gateway: PokePPCR_e_Prmry_PP_Pos_Sensor_Front/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front */
    /* During: PokePPCR_e_Prmry_PP_Pos_Sensor_Front/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front */
    /* Entry Internal: PokePPCR_e_Prmry_PP_Pos_Sensor_Front/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front */
    /* Transition: '<S154>:2' */
    if (!LePPCR_b_Prmry_PP_Pos_SensorFA_Front)
    {
        /* Transition: '<S154>:3' */
        /* Transition: '<S154>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_Front_out =
            (TePPCR_e_PCUCtrl_PosSnsr)PP_safe_cast_to_TePPCR_e_PCUCtrl_PosSnsr
            ((uint8)KaPPCR_e_Prmry_PP_Pos_Sensor_Map_Front
             [(LePPCR_e_Prmry_PP_Pos_Sensor_Front)]);
        rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_Front = false;

        /* Transition: '<S154>:18' */
    }
    else
    {
        /* Transition: '<S154>:4' */
        rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_Front = true;
    }

    /* End of Chart: '<S17>/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front' */

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S17>/VePPCR_b_Prmry_PP_Pos_SensorFA_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Pos_Sensor_Front_VePPCR_b_Prmry_PP_Pos_SensorFA_Front_write_IRV
        (rtb_LePPCR_b_Prmry_PP_Pos_SensorFA_Front);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S17>/VePPCR_e_Prmry_PP_Pos_Sensor_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_PP_Pos_Sensor_Front_PP_Pos_Sensor_Init_Front_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_Front_out);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_Park_Pawl_Stat(VAR(sint16, AUTOMATIC)
    LePPCR_e_Prmry_Park_Pawl_Stat, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_Park_Pawl_StatFA)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_out;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_Park_Pawl_Stat);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_Park_Pawl_StatFA);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat' */
    /* Chart: '<S18>/PokePPCR_e_Prmry_Park_Pawl_StatChrt' incorporates:
     *  Constant: '<S155>/Calib'
     *  SignalConversion generated from: '<S18>/LePPCR_b_Prmry_Park_Pawl_StatFA'
     *  SignalConversion generated from: '<S18>/LePPCR_e_Prmry_Park_Pawl_Stat'
     */
    /* Gateway: PokePPCR_e_Prmry_Park_Pawl_Stat/PokePPCR_e_Prmry_Park_Pawl_StatChrt */
    /* During: PokePPCR_e_Prmry_Park_Pawl_Stat/PokePPCR_e_Prmry_Park_Pawl_StatChrt */
    /* Entry Internal: PokePPCR_e_Prmry_Park_Pawl_Stat/PokePPCR_e_Prmry_Park_Pawl_StatChrt */
    /* Transition: '<S156>:2' */
    if (!LePPCR_b_Prmry_Park_Pawl_StatFA)
    {
        /* Transition: '<S156>:3' */
        /* Transition: '<S156>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_Stat_out =
            (TePPCR_e_PCUCtrl_StateCode)safe_cast_to_TePPCR_e_PCUCtrl_StateCode
            ((uint8)KaPPCR_e_Prmry_Park_Pawl_Stat_Map
             [(LePPCR_e_Prmry_Park_Pawl_Stat)]);
        rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_out = false;

        /* Transition: '<S156>:18' */
    }
    else
    {
        /* Transition: '<S156>:4' */
        rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_out = true;
    }

    /* End of Chart: '<S18>/PokePPCR_e_Prmry_Park_Pawl_StatChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S18>/VePPCR_b_Prmry_Park_Pawl_StatFA_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_Stat_VePPCR_b_Prmry_Park_Pawl_StatFA_write_IRV
        (rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_out);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S18>/VePPCR_e_Prmry_Park_Pawl_Stat_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_Stat_Park_Pawl_Stat_Init_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_Park_Pawl_Stat_Front(VAR(sint16,
    AUTOMATIC) LePPCR_e_Prmry_Park_Pawl_Stat_Front, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_Park_Pawl_StatFA_Front)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_Fr_n;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_Park_Pawl_Stat_Front);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_Park_Pawl_StatFA_Front);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat_Front' */
    /* Chart: '<S19>/PokePPCR_e_Prmry_Park_Pawl_StatChrt_Front' incorporates:
     *  Constant: '<S157>/Calib'
     *  SignalConversion generated from: '<S19>/LePPCR_b_Prmry_Park_Pawl_StatFA_Front'
     *  SignalConversion generated from: '<S19>/LePPCR_e_Prmry_Park_Pawl_Stat_Front'
     */
    /* Gateway: PokePPCR_e_Prmry_Park_Pawl_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_StatChrt_Front */
    /* During: PokePPCR_e_Prmry_Park_Pawl_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_StatChrt_Front */
    /* Entry Internal: PokePPCR_e_Prmry_Park_Pawl_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_StatChrt_Front */
    /* Transition: '<S158>:2' */
    if (!LePPCR_b_Prmry_Park_Pawl_StatFA_Front)
    {
        /* Transition: '<S158>:3' */
        /* Transition: '<S158>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_Stat_Front_out =
            (TePPCR_e_PCUCtrl_StateCode)safe_cast_to_TePPCR_e_PCUCtrl_StateCode
            ((uint8)KaPPCR_e_Prmry_Park_Pawl_Stat_Map_Front
             [(LePPCR_e_Prmry_Park_Pawl_Stat_Front)]);
        rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_Fr_n = false;

        /* Transition: '<S158>:18' */
    }
    else
    {
        /* Transition: '<S158>:4' */
        rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_Fr_n = true;
    }

    /* End of Chart: '<S19>/PokePPCR_e_Prmry_Park_Pawl_StatChrt_Front' */

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S19>/VePPCR_b_Prmry_Park_Pawl_StatFA_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_Stat_Front_VePPCR_b_Prmry_Park_Pawl_StatFA_Front_write_IRV
        (rtb_LePPCR_b_Prmry_Park_Pawl_StatFA_Fr_n);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S19>/VePPCR_e_Prmry_Park_Pawl_Stat_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_Stat_Front_Park_Pawl_Stat_Init_Front_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_Stat_Front_out);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_Park_Pawl_flt_Stat(VAR(sint16, AUTOMATIC)
    LePPCR_e_Prmry_Park_Pawl_flt_Stat, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_Park_Pawl_flt_StatFA)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_Park_Pawl_flt_Stat);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_Park_Pawl_flt_StatFA);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat' */
    /* Chart: '<S20>/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt' incorporates:
     *  Constant: '<S159>/Calib'
     *  SignalConversion generated from: '<S20>/LePPCR_b_Prmry_Park_Pawl_flt_StatFA'
     *  SignalConversion generated from: '<S20>/LePPCR_e_Prmry_Park_Pawl_flt_Stat'
     */
    /* Gateway: PokePPCR_e_Prmry_Park_Pawl_flt_Stat/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt */
    /* During: PokePPCR_e_Prmry_Park_Pawl_flt_Stat/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt */
    /* Entry Internal: PokePPCR_e_Prmry_Park_Pawl_flt_Stat/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt */
    /* Transition: '<S160>:2' */
    if (!LePPCR_b_Prmry_Park_Pawl_flt_StatFA)
    {
        /* Transition: '<S160>:3' */
        /* Transition: '<S160>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_flt_Stat_out =
            (TePPCR_e_PCUCtrl_Flt_Stat)P_safe_cast_to_TePPCR_e_PCUCtrl_Flt_Stat
            ((uint8)KaPPCR_e_Prmry_Park_Pawl_flt_Stat_Map
             [(LePPCR_e_Prmry_Park_Pawl_flt_Stat)]);
        rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_ = false;

        /* Transition: '<S160>:18' */
    }
    else
    {
        /* Transition: '<S160>:4' */
        rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_ = true;
    }

    /* End of Chart: '<S20>/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S20>/VePPCR_b_Prmry_Park_Pawl_flt_StatFA_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_flt_Stat_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_write_IRV
        (rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S20>/VePPCR_e_Prmry_Park_Pawl_flt_Stat_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Park_Pawl_flt_Stat_Init_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_flt_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front(VAR(sint16,
    AUTOMATIC) LePPCR_e_Prmry_Park_Pawl_flt_Stat_Front, VAR(boolean, AUTOMATIC)
    LePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_;

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_e_Prmry_Park_Pawl_flt_Stat_Front);

#endif

#if !Rte_SysCon_Variant_PPCR_FUNC_Enab

    UNUSED_PARAMETER(LePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front);

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Outputs for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front' */
    /* Chart: '<S21>/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt_Front' incorporates:
     *  Constant: '<S161>/Calib'
     *  SignalConversion generated from: '<S21>/LePPCR_b_Prmry_Park_Pawl_flt_StatFA'
     *  SignalConversion generated from: '<S21>/LePPCR_e_Prmry_Park_Pawl_flt_Stat'
     */
    /* Gateway: PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt_Front */
    /* During: PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt_Front */
    /* Entry Internal: PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt_Front */
    /* Transition: '<S162>:2' */
    if (!LePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front)
    {
        /* Transition: '<S162>:3' */
        /* Transition: '<S162>:15' */
        PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_flt_Stat_Front_ =
            (TePPCR_e_PCUCtrl_Flt_Stat)P_safe_cast_to_TePPCR_e_PCUCtrl_Flt_Stat
            ((uint8)KaPPCR_e_Prmry_Park_Pawl_flt_Stat_Map_Front
             [(LePPCR_e_Prmry_Park_Pawl_flt_Stat_Front)]);
        rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_ = false;

        /* Transition: '<S162>:18' */
    }
    else
    {
        /* Transition: '<S162>:4' */
        rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_ = true;
    }

    /* End of Chart: '<S21>/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt_Front' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S21>/VePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front_write_IRV
        (rtb_LePPCR_b_Prmry_Park_Pawl_flt_StatFA_);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S21>/VePPCR_e_Prmry_Park_Pawl_flt_Stat_Front_write'
     * */
    Rte_IrvWrite_PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front_Park_Pawl_flt_Stat_Init_Front_write_IRV
        (PPCR_ac_B.LePPCR_e_Prmry_Park_Pawl_flt_Stat_Front_);

    /* End of Outputs for SubSystem: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

FUNC(void, PPCR_CODE) PPCR_PwrOff(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/PPCR_MSG_PwrOff' */
    /* Outport: '<Root>/NePPCR_e_PrvCmdVal_PM_Out' incorporates:
     *  DataStoreRead: '<S11>/NePPCR_e_PrvCmdVal'
     */
    (void)Rte_Write_NePPCR_e_PrvCmdVal_NePPCR_e_PrvCmdVal
        (PPCR_ac_DW.NePPCR_e_PrvCmdVal);

    /* End of Outputs for SubSystem: '<Root>/PPCR_MSG_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, PPCR_CODE) PPCR_PwrOn(void)
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForMPR_Pos_SensorFA_Ini;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPP_MotorPos_StatFA_I;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPP_MotorPos_StatFA_j;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPP_Pos_SensorFA_Init;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPP_Pos_SensorFA_In_g;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPark_Pawl_StatFA_Ini;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPark_Pawl_StatFA_I_d;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPark_Pawl_flt_StatFA;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean rtb_OutportBufferForPark_Pawl_flt_Stat_a;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MPR_Pos rtb_OutportBufferForMPR_Pos_Sensor_Init_;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MtrPosStat rtb_OutportBufferForPP_MotorPos_Stat_Ini;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MtrPosStat rtb_OutportBufferForPP_MotorPos_Stat_I_p;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PosSnsr rtb_OutportBufferForPP_Pos_Sensor_Init_F;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PosSnsr rtb_OutportBufferForPP_Pos_Sensor_Init_w;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_StateCode rtb_OutportBufferForPark_Pawl_Stat_Init_;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_StateCode rtb_OutportBufferForPark_Pawl_Stat_Ini_a;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_Flt_Stat rtb_OutportBufferForPark_Pawl_flt_Stat_I;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_Flt_Stat rtb_OutportBufferForPark_Pawl_flt_Stat_c;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PPCR_MSG_PwrOn'
     */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* S-Function (fcgen): '<S12>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S12>/DSM_Init' */
    /* DataStoreWrite: '<S132>/NePPCR_e_PrvCmdVal' incorporates:
     *  Inport: '<Root>/NePPCR_e_PrvCmdVal_PM_In'
     */
    (void)Rte_Read_NePPCR_e_PrvCmdVal_Rx_NePPCR_e_PrvCmdVal
        (&PPCR_ac_DW.NePPCR_e_PrvCmdVal);

    /* End of Outputs for SubSystem: '<S12>/DSM_Init' */

    /* Outputs for Function Call SubSystem: '<S12>/Init_PrmryCntrlr1' */
    /* SignalConversion generated from: '<S133>/Park_Pawl_Stat_Init' incorporates:
     *  Constant: '<S135>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_Stat_Init = PPCR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S133>/Park_Pawl_StatFA_Init' */
    PPCR_ac_B.OutportBufferForPark_Pawl_StatFA_Init = false;

    /* SignalConversion generated from: '<S133>/Park_Pawl_flt_Stat_Init' incorporates:
     *  Constant: '<S138>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_flt_Stat_Init =
        PPCR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S133>/Park_Pawl_flt_StatFA_Init' */
    PPCR_ac_B.OutportBufferForPark_Pawl_flt_StatFA_Ini = false;

    /* SignalConversion generated from: '<S133>/PP_MotorPos_Stat_Init' incorporates:
     *  Constant: '<S137>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init = PPCR_ac_ConstB.Constant_kh;

    /* SignalConversion generated from: '<S133>/PP_MotorPos_StatFA_Init' */
    PPCR_ac_B.OutportBufferForPP_MotorPos_StatFA_Init = false;

    /* SignalConversion generated from: '<S133>/PP_Pos_Sensor_Init' incorporates:
     *  Constant: '<S140>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init = PPCR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S133>/PP_Pos_SensorFA_Init' */
    PPCR_ac_B.OutportBufferForPP_Pos_SensorFA_Init = false;

    /* SignalConversion generated from: '<S133>/MPR_Pos_Sensor_Init' incorporates:
     *  Constant: '<S141>/Constant'
     */
    PPCR_ac_B.OutportBufferForMPR_Pos_Sensor_Init = PPCR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S133>/MPR_Pos_SensorFA_Init' */
    PPCR_ac_B.OutportBufferForMPR_Pos_SensorFA_Init = false;

    /* SignalConversion generated from: '<S133>/Park_Pawl_Stat_Init_Front' incorporates:
     *  Constant: '<S142>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_Stat_Init_Fron =
        PPCR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S133>/Park_Pawl_StatFA_Init_Front' */
    PPCR_ac_B.OutportBufferForPark_Pawl_StatFA_Init_Fr = false;

    /* SignalConversion generated from: '<S133>/Park_Pawl_flt_Stat_Init_Front' incorporates:
     *  Constant: '<S144>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_flt_Stat_Init_ =
        PPCR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S133>/Park_Pawl_flt_StatFA_Init_Front' */
    PPCR_ac_B.OutportBufferForPark_Pawl_flt_StatFA_I_i = false;

    /* SignalConversion generated from: '<S133>/PP_MotorPos_Stat_Init_Front' incorporates:
     *  Constant: '<S143>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init_Fr =
        PPCR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S133>/PP_MotorPos_StatFA_Init_Front' */
    PPCR_ac_B.OutportBufferForPP_MotorPos_StatFA_Init_ = false;

    /* SignalConversion generated from: '<S133>/PP_Pos_Sensor_Init_Front' incorporates:
     *  Constant: '<S136>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init_Front =
        PPCR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S133>/PP_Pos_SensorFA_Init_Front' */
    PPCR_ac_B.OutportBufferForPP_Pos_SensorFA_Init_Fro = false;

    /* End of Outputs for SubSystem: '<S12>/Init_PrmryCntrlr1' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S134>/VePPCR_e_PPawlFdbck_Out_Init' incorporates:
     *  Constant: '<S134>/Const1'
     */
    PPCR_ac_B.OutportBufferForVePPCR_e_PPawlFdbck_Out_ = PPCR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S134>/VePPCR_e_PPawlRequest_Out_Init' incorporates:
     *  Constant: '<S134>/Const2'
     */
    PPCR_ac_B.OutportBufferForVePPCR_e_PPawlRequest_Ou = PPCR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S134>/VePPCR_b_PPawl_TXFlt_Out_Init' */
    PPCR_ac_B.OutportBufferForVePPCR_b_PPawl_TXFlt_Out = false;

    /* SignalConversion generated from: '<S134>/VePPCR_b_PPawlFlt_UnknownPos_Out_Init' */
    PPCR_ac_B.OutportBufferForVePPCR_b_PPawlFlt_Unknow = false;

    /* SignalConversion generated from: '<S134>/VePPCR_b_PPawlFlt_InhibitMtr_Out_Init' */
    PPCR_ac_B.OutportBufferForVePPCR_b_PPawlFlt_Inhibi = false;

    /* SignalConversion generated from: '<S134>/VePPCR_e_PPawl_HW_Request_Out_Init' incorporates:
     *  Constant: '<S134>/Const6'
     */
    PPCR_ac_B.OutportBufferForVePPCR_e_PPawl_HW_Reques = PPCR_ac_ConstB.Const6;

    /* Outport: '<Root>/VePPCR_b_PPUnauthorizedMove' incorporates:
     *  SignalConversion generated from: '<S134>/VePPCR_b_PPUnauthorizedMove_Out_Init'
     */
    (void)Rte_Write_VePPCR_b_PPUnauthorizedMove_Value(false);

    /* Outport: '<Root>/VePPCR_b_PPawl_PosSnsrFlt' incorporates:
     *  SignalConversion generated from: '<S134>/VePPCR_b_PPawl_PosSnsrFlt_Out_Init'
     */
    (void)Rte_Write_VePPCR_b_PPawl_PosSnsrFlt_Value(false);

    /* Outport: '<Root>/VePPCR_b_PPawl_CurrSnsrFlt' incorporates:
     *  SignalConversion generated from: '<S134>/VePPCR_b_PPawl_CurrSnsrFlt_Out_Init'
     */
    (void)Rte_Write_VePPCR_b_PPawl_CurrSnsrFlt_Value(false);

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* SignalConversion generated from: '<S12>/MPR_Pos_SensorFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S12>/MPR_Pos_Sensor_Init_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_StatFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_StatFA_Init_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_SensorFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_SensorFA_Init_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_StatFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_StatFA_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_StatFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_StatFA_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_write'
     */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* SignalConversion generated from: '<S12>/MPR_Pos_SensorFA_Init_write' */
    rtb_OutportBufferForMPR_Pos_SensorFA_Ini =
        PPCR_ac_B.OutportBufferForMPR_Pos_SensorFA_Init;

    /* SignalConversion generated from: '<S12>/MPR_Pos_Sensor_Init_write' incorporates:
     *  SignalConversion generated from: '<S133>/MPR_Pos_Sensor_Init'
     */
    rtb_OutportBufferForMPR_Pos_Sensor_Init_ =
        PPCR_ac_B.OutportBufferForMPR_Pos_Sensor_Init;

    /* SignalConversion generated from: '<S12>/PP_MotorPos_StatFA_Init_Front_write' */
    rtb_OutportBufferForPP_MotorPos_StatFA_I =
        PPCR_ac_B.OutportBufferForPP_MotorPos_StatFA_Init_;

    /* SignalConversion generated from: '<S12>/PP_MotorPos_StatFA_Init_write' */
    rtb_OutportBufferForPP_MotorPos_StatFA_j =
        PPCR_ac_B.OutportBufferForPP_MotorPos_StatFA_Init;

    /* SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_Front_write' incorporates:
     *  SignalConversion generated from: '<S133>/PP_MotorPos_Stat_Init_Front'
     */
    rtb_OutportBufferForPP_MotorPos_Stat_Ini =
        PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init_Fr;

    /* SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_write' incorporates:
     *  SignalConversion generated from: '<S133>/PP_MotorPos_Stat_Init'
     */
    rtb_OutportBufferForPP_MotorPos_Stat_I_p =
        PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init;

    /* SignalConversion generated from: '<S12>/PP_Pos_SensorFA_Init_Front_write' */
    rtb_OutportBufferForPP_Pos_SensorFA_Init =
        PPCR_ac_B.OutportBufferForPP_Pos_SensorFA_Init_Fro;

    /* SignalConversion generated from: '<S12>/PP_Pos_SensorFA_Init_write' */
    rtb_OutportBufferForPP_Pos_SensorFA_In_g =
        PPCR_ac_B.OutportBufferForPP_Pos_SensorFA_Init;

    /* SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_Front_write' incorporates:
     *  SignalConversion generated from: '<S133>/PP_Pos_Sensor_Init_Front'
     */
    rtb_OutportBufferForPP_Pos_Sensor_Init_F =
        PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init_Front;

    /* SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_write' incorporates:
     *  SignalConversion generated from: '<S133>/PP_Pos_Sensor_Init'
     */
    rtb_OutportBufferForPP_Pos_Sensor_Init_w =
        PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init;

    /* SignalConversion generated from: '<S12>/Park_Pawl_StatFA_Init_Front_write' */
    rtb_OutportBufferForPark_Pawl_StatFA_Ini =
        PPCR_ac_B.OutportBufferForPark_Pawl_StatFA_Init_Fr;

    /* SignalConversion generated from: '<S12>/Park_Pawl_StatFA_Init_write' */
    rtb_OutportBufferForPark_Pawl_StatFA_I_d =
        PPCR_ac_B.OutportBufferForPark_Pawl_StatFA_Init;

    /* SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_Front_write' incorporates:
     *  SignalConversion generated from: '<S133>/Park_Pawl_Stat_Init_Front'
     */
    rtb_OutportBufferForPark_Pawl_Stat_Init_ =
        PPCR_ac_B.OutportBufferForPark_Pawl_Stat_Init_Fron;

    /* SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_write' incorporates:
     *  SignalConversion generated from: '<S133>/Park_Pawl_Stat_Init'
     */
    rtb_OutportBufferForPark_Pawl_Stat_Ini_a =
        PPCR_ac_B.OutportBufferForPark_Pawl_Stat_Init;

    /* SignalConversion generated from: '<S12>/Park_Pawl_flt_StatFA_Init_Front_write' */
    rtb_OutportBufferForPark_Pawl_flt_StatFA =
        PPCR_ac_B.OutportBufferForPark_Pawl_flt_StatFA_I_i;

    /* SignalConversion generated from: '<S12>/Park_Pawl_flt_StatFA_Init_write' */
    rtb_OutportBufferForPark_Pawl_flt_Stat_a =
        PPCR_ac_B.OutportBufferForPark_Pawl_flt_StatFA_Ini;

    /* SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_Front_write' incorporates:
     *  SignalConversion generated from: '<S133>/Park_Pawl_flt_Stat_Init_Front'
     */
    rtb_OutportBufferForPark_Pawl_flt_Stat_I =
        PPCR_ac_B.OutportBufferForPark_Pawl_flt_Stat_Init_;

    /* SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_write' incorporates:
     *  SignalConversion generated from: '<S133>/Park_Pawl_flt_Stat_Init'
     */
    rtb_OutportBufferForPark_Pawl_flt_Stat_c =
        PPCR_ac_B.OutportBufferForPark_Pawl_flt_Stat_Init;

#endif

    /* End of SignalConversion generated from: '<S12>/MPR_Pos_SensorFA_Init_write' */

    /* Outport: '<Root>/VePPCR_b_PPawlFlt_InhibitMtr' incorporates:
     *  SignalConversion generated from: '<S12>/VePPCR_b_PPawlFlt_InhibitMtr_Out_Init'
     */
    (void)Rte_Write_VePPCR_b_PPawlFlt_InhibitMtr_Value
        (PPCR_ac_B.OutportBufferForVePPCR_b_PPawlFlt_Inhibi);

    /* Outport: '<Root>/VePPCR_b_PPawlFlt_UnknownPos' incorporates:
     *  SignalConversion generated from: '<S12>/VePPCR_b_PPawlFlt_UnknownPos_Out_Init'
     */
    (void)Rte_Write_VePPCR_b_PPawlFlt_UnknownPos_Value
        (PPCR_ac_B.OutportBufferForVePPCR_b_PPawlFlt_Unknow);

    /* Outport: '<Root>/VePPCR_b_PPawl_TXFlt' incorporates:
     *  SignalConversion generated from: '<S12>/VePPCR_b_PPawl_TXFlt_Out_Init'
     */
    (void)Rte_Write_VePPCR_b_PPawl_TXFlt_Value
        (PPCR_ac_B.OutportBufferForVePPCR_b_PPawl_TXFlt_Out);

    /* Outport: '<Root>/VePPCR_e_PPawlFdbck' incorporates:
     *  SignalConversion generated from: '<S12>/VePPCR_e_PPawlFdbck_Out_Init'
     *  SignalConversion generated from: '<S134>/VePPCR_e_PPawlFdbck_Out_Init'
     */
    (void)Rte_Write_VePPCR_e_PPawlFdbck_Value
        (PPCR_ac_B.OutportBufferForVePPCR_e_PPawlFdbck_Out_);

    /* Outport: '<Root>/VePPCR_e_PPawlRequest' incorporates:
     *  SignalConversion generated from: '<S12>/VePPCR_e_PPawlRequest_Out_Init'
     *  SignalConversion generated from: '<S134>/VePPCR_e_PPawlRequest_Out_Init'
     */
    (void)Rte_Write_VePPCR_e_PPawlRequest_Value
        (PPCR_ac_B.OutportBufferForVePPCR_e_PPawlRequest_Ou);

    /* Outport: '<Root>/VePPCR_e_PPawl_HW_Request' incorporates:
     *  SignalConversion generated from: '<S12>/VePPCR_e_PPawl_HW_Request_Out_Init'
     *  SignalConversion generated from: '<S134>/VePPCR_e_PPawl_HW_Request_Out_Init'
     */
    (void)Rte_Write_VePPCR_e_PPawl_HW_Request_Value
        (PPCR_ac_B.OutportBufferForVePPCR_e_PPawl_HW_Reques);

    /* SignalConversion generated from: '<S12>/MPR_Pos_SensorFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S12>/MPR_Pos_Sensor_Init_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_StatFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_StatFA_Init_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_SensorFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_SensorFA_Init_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_Front_write'
     *  SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_StatFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_StatFA_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_StatFA_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_StatFA_Init_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_Front_write'
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_write'
     */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* Merge: '<Root>/Merge_9' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_MPR_Pos_SensorFA_write_IRV
        (rtb_OutportBufferForMPR_Pos_SensorFA_Ini);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S12>/MPR_Pos_Sensor_Init_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_MPR_Pos_Sensor_Init_write_IRV
        (rtb_OutportBufferForMPR_Pos_Sensor_Init_);

    /* Merge: '<Root>/Merge_19' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_Front_write_IRV
        (rtb_OutportBufferForPP_MotorPos_StatFA_I);

    /* Merge: '<Root>/Merge_8' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_PP_Motor_Pos_StatFA_write_IRV
        (rtb_OutportBufferForPP_MotorPos_StatFA_j);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_Front_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_PP_MotorPos_Stat_Init_Front_write_IRV
        (rtb_OutportBufferForPP_MotorPos_Stat_Ini);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S12>/PP_MotorPos_Stat_Init_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_PP_MotorPos_Stat_Init_write_IRV
        (rtb_OutportBufferForPP_MotorPos_Stat_I_p);

    /* Merge: '<Root>/Merge_16' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_PP_Pos_SensorFA_Front_write_IRV
        (rtb_OutportBufferForPP_Pos_SensorFA_Init);

    /* Merge: '<Root>/Merge_5' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_PP_Pos_SensorFA_write_IRV
        (rtb_OutportBufferForPP_Pos_SensorFA_In_g);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_Front_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_PP_Pos_Sensor_Init_Front_write_IRV
        (rtb_OutportBufferForPP_Pos_Sensor_Init_F);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S12>/PP_Pos_Sensor_Init_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_PP_Pos_Sensor_Init_write_IRV
        (rtb_OutportBufferForPP_Pos_Sensor_Init_w);

    /* Merge: '<Root>/Merge_14' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_Park_Pawl_StatFA_Front_write_IRV
        (rtb_OutportBufferForPark_Pawl_StatFA_Ini);

    /* Merge: '<Root>/Merge_3' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_Park_Pawl_StatFA_write_IRV
        (rtb_OutportBufferForPark_Pawl_StatFA_I_d);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_Front_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_Park_Pawl_Stat_Init_Front_write_IRV
        (rtb_OutportBufferForPark_Pawl_Stat_Init_);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S12>/Park_Pawl_Stat_Init_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_Park_Pawl_Stat_Init_write_IRV
        (rtb_OutportBufferForPark_Pawl_Stat_Ini_a);

    /* Merge: '<Root>/Merge_15' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_Front_write_IRV
        (rtb_OutportBufferForPark_Pawl_flt_StatFA);

    /* Merge: '<Root>/Merge_4' */
    Rte_IrvWrite_PPCR_PwrOn_VePPCR_b_Prmry_Park_Pawl_flt_StatFA_write_IRV
        (rtb_OutportBufferForPark_Pawl_flt_Stat_a);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_Front_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_Park_Pawl_flt_Stat_Init_Front_write_IRV
        (rtb_OutportBufferForPark_Pawl_flt_Stat_I);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S12>/Park_Pawl_flt_Stat_Init_write'
     */
    Rte_IrvWrite_PPCR_PwrOn_Park_Pawl_flt_Stat_Init_write_IRV
        (rtb_OutportBufferForPark_Pawl_flt_Stat_c);

#endif

    /* End of SignalConversion generated from: '<S12>/MPR_Pos_SensorFA_Init_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, PPCR_CODE) PPCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_Front_out =
            CePPCR_e_PosSnsr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_out = CePPCR_e_PosSnsr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init = CePPCR_e_PosSnsr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init_Front =
            CePPCR_e_PosSnsr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.Merge_3 = CePPCR_e_PosSnsr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_o =
            CePPCR_e_Mtr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_out = CePPCR_e_Mtr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init = CePPCR_e_Mtr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init_Fr =
            CePPCR_e_Mtr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

        PPCR_ac_B.Merge_2 = CePPCR_e_Mtr_Unknown;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    VePPCI_e_Prmry_PPawl_Pos_Sensor = CePPCR_e_PosSnsr_Unknown;

#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    VePPCI_e_Prmry_PP_MotorPos_Stat = CePPCR_e_Mtr_Unknown;

#endif

    /* Start for DataStoreMemory: '<Root>/DSM_1' */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    PPCR_ac_DW.NePPCR_e_PrvCmdVal = CePPCR_e_Req_Engage;

#endif

    /* End of Start for DataStoreMemory: '<Root>/DSM_1' */
#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PPCR_MSG_PwrOn'
     */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor_Front' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat_Front' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_MPR_Pos_Sensor' */
    /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S12>/Init_PrmryCntrlr1' */
    /* SystemInitialize for SignalConversion generated from: '<S133>/Park_Pawl_Stat_Init' incorporates:
     *  Constant: '<S135>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_Stat_Init = PPCR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S133>/Park_Pawl_flt_Stat_Init' incorporates:
     *  Constant: '<S138>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_flt_Stat_Init =
        PPCR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S133>/PP_MotorPos_Stat_Init' incorporates:
     *  Constant: '<S137>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init = PPCR_ac_ConstB.Constant_kh;

    /* SystemInitialize for SignalConversion generated from: '<S133>/PP_Pos_Sensor_Init' incorporates:
     *  Constant: '<S140>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init = PPCR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S133>/MPR_Pos_Sensor_Init' incorporates:
     *  Constant: '<S141>/Constant'
     */
    PPCR_ac_B.OutportBufferForMPR_Pos_Sensor_Init = PPCR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S133>/Park_Pawl_Stat_Init_Front' incorporates:
     *  Constant: '<S142>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_Stat_Init_Fron =
        PPCR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S133>/Park_Pawl_flt_Stat_Init_Front' incorporates:
     *  Constant: '<S144>/Constant'
     */
    PPCR_ac_B.OutportBufferForPark_Pawl_flt_Stat_Init_ =
        PPCR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S133>/PP_MotorPos_Stat_Init_Front' incorporates:
     *  Constant: '<S143>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_MotorPos_Stat_Init_Fr =
        PPCR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S133>/PP_Pos_Sensor_Init_Front' incorporates:
     *  Constant: '<S136>/Constant'
     */
    PPCR_ac_B.OutportBufferForPP_Pos_Sensor_Init_Front =
        PPCR_ac_ConstB.Constant_n;

    /* End of SystemInitialize for SubSystem: '<S12>/Init_PrmryCntrlr1' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor_Front' */
    /* SystemInitialize for Chart: '<S17>/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front' */
    PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_Front_out = CePPCR_e_PosSnsr_Unknown;

    /* End of SystemInitialize for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor_Front' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front' */
    /* SystemInitialize for Chart: '<S15>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front' */
    PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_o = CePPCR_e_Mtr_Unknown;

    /* End of SystemInitialize for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor' */
    /* SystemInitialize for Chart: '<S16>/PokePPCR_e_Prmry_PP_Pos_SensorChrt' */
    PPCR_ac_B.LePPCR_e_Prmry_PP_Pos_Sensor_out = CePPCR_e_PosSnsr_Unknown;

    /* End of SystemInitialize for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat' */
    /* SystemInitialize for Chart: '<S14>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt' */
    PPCR_ac_B.LePPCR_e_Prmry_PP_Motor_Pos_Stat_out = CePPCR_e_Mtr_Unknown;

    /* End of SystemInitialize for SubSystem: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/PPCR_MSG_FastTEF' */
    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_CANOvrds'
     */
    /* SystemInitialize for RelationalOperator: '<S88>/Comparison2' incorporates:
     *  Outport: '<S29>/PP_Motor_Pos_Stat'
     *  Switch: '<S29>/Switch1'
     */
    VePPCI_e_Prmry_PP_MotorPos_Stat = CePPCR_e_Mtr_Unknown;

    /* SystemInitialize for Switch: '<S29>/Switch3' incorporates:
     *  Outport: '<S29>/PP_Pos_Sensor'
     */
    VePPCI_e_Prmry_PPawl_Pos_Sensor = CePPCR_e_PosSnsr_Unknown;

    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Proc_CANBus'
     */
    /* SystemInitialize for Merge: '<S27>/Merge_2' */
    PPCR_ac_B.Merge_2 = CePPCR_e_Mtr_Unknown;

    /* SystemInitialize for Merge: '<S27>/Merge_3' */
    PPCR_ac_B.Merge_3 = CePPCR_e_PosSnsr_Unknown;

    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/VldtParkStatus'
     */
    /* InitializeConditions for UnitDelay: '<S58>/Unit Delay1' */
    PPCR_ac_DW.UnitDelay1_DSTATE = CePPCR_e_Req_Engage;

    /* End of SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/PPCR_MSG_FastTEF' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_MPR_Pos_Sensor' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_flt_Stat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat_Front' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_Park_Pawl_Stat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor_Front' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Pos_Sensor' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePPCR_e_Prmry_PP_Motor_Pos_Stat' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

    /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S134>/VePPCR_e_PPawlFdbck_Out_Init' incorporates:
     *  Constant: '<S134>/Const1'
     */
    PPCR_ac_B.OutportBufferForVePPCR_e_PPawlFdbck_Out_ = PPCR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S134>/VePPCR_e_PPawlRequest_Out_Init' incorporates:
     *  Constant: '<S134>/Const2'
     */
    PPCR_ac_B.OutportBufferForVePPCR_e_PPawlRequest_Ou = PPCR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S134>/VePPCR_e_PPawl_HW_Request_Out_Init' incorporates:
     *  Constant: '<S134>/Const6'
     */
    PPCR_ac_B.OutportBufferForVePPCR_e_PPawl_HW_Reques = PPCR_ac_ConstB.Const6;

    /* End of SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VePPCR_e_PPawlFdbck' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VePPCR_e_PPawlFdbck_Value(CePPCR_e_PPAWL_UNKNOWN_Position);

    /* SystemInitialize for Outport: '<Root>/VePPCR_e_PPawlRequest' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VePPCR_e_PPawlRequest_Value(CePPCR_e_PPAWL_UNKNOWN_Request);

    /* SystemInitialize for Outport: '<Root>/VePPCR_e_PPawl_HW_Request' incorporates:
     *  Merge: '<Root>/Merge_Outport_6'
     */
    (void)Rte_Write_VePPCR_e_PPawl_HW_Request_Value(CePPCR_e_Req_No_Req);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
