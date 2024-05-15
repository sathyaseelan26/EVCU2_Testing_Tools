/*
 * File: LR3B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'LR3B_BLUEN_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:49:19 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LR3B_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LR3B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, LR3B_BLUEN_VAR_INIT) KeLR3B_b_CanLocStatusBypEnbl
    = 0;                               /* Referenced by: '<S6>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, LR3B_BLUEN_VAR_INIT)
    KeLR3B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S7>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_LR3B_BLUEN
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_BoostStat_CallStatus;/* '<S20>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_CalActv_CallStatus;/* '<S25>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_CalStat_CallStatus;/* '<S30>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_CurrPos_CallStatus;/* '<S35>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_ErrLIN_CallStatus;/* '<S42>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_ErrMechBreak_CallStatus;/* '<S49>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_ErrMechStuck_CallStatus;/* '<S54>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_ErrOvrTemp_CallStatus;/* '<S59>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_ErrOvrVolt_CallStatus;/* '<S64>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_AGS_ErrUnVolt_CallStatus;/* '<S69>/Chart' */
static VAR(uint8, LR3B_BLUEN_VAR_INIT) VeLINR_y_RsErr_AGS_CallStatus;/* '<S74>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_BLUEN
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_BLUEN
#include "MemMap.h"

VAR(B_LR3B_BLUEN_ac_T, LR3B_BLUEN_VAR_INIT) LR3B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, LR3B_BLUEN_CODE) LR3B_BLUEN_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeLINR;
    uint8 rtb_TmpSignalConversionAtVeLI_j;
    uint8 rtb_TmpSignalConversionAtVeLI_i;
    uint8 rtb_TmpSignalConversionAtVeLI_g;
    uint8 rtb_TmpSignalConversionAtVeLI_c;
    uint8 rtb_TmpSignalConversionAtVeLI_l;
    uint8 rtb_TmpSignalConversionAtVeLI_h;
    uint8 rtb_TmpSignalConversionAtVeLI_f;
    uint8 rtb_TmpSignalConversionAtVeL_cr;
    uint8 rtb_TmpSignalConversionAtVeLI_a;
    uint8 rtb_TmpSignalConversionAtVeLI_d;
    TePWMD_e_CanLocStatus rtb_Switch;
    uint8 tmpRead;
    boolean FA_out_o;
    boolean FA_out_pg;
    boolean rtb_RelationalOperator;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_BoostStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_BoostStat_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLINR =
        Rte_Read_VeLINR_b_AGS_BoostStat_VeLINR_b_AGS_BoostStat
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_A);

    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S6>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeLR3B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S7>/Calib'
         */
        rtb_Switch = KeLR3B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S8>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S8>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S5>/Constant'
     *  Switch: '<S8>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_BoostStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S23>:1' */
    (void)Rte_Read_VeLINR_b_AGS_BoostStatTO_VeLINR_b_AGS_BoostStatTO(&FA_out_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S20>/Chart' */
    if (FA_out_o)
    {
        /* Transition: '<S23>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S23>:6' */
            /* Transition: '<S23>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_BoostStat_CallStatus = 2U;

            /* Event: '<S23>:39' */
            /* Transition: '<S23>:29' */
        }
        else
        {
            /* Transition: '<S23>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_BoostStat_CallStatus = 3U;

            /* Event: '<S23>:40' */
        }

        /* Transition: '<S23>:36' */
        /* Transition: '<S23>:23' */
    }
    else
    {
        /* Transition: '<S23>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLINR) == 133)
        {
            /* Transition: '<S23>:33' */
            /* Transition: '<S23>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_BoostStat_CallStatus = 4U;

            /* Transition: '<S23>:23' */
        }
        else
        {
            /* Transition: '<S23>:46' */
            /* Transition: '<S23>:37' */
            /* Call Poke */
            VeLINR_y_AGS_BoostStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S9>/Poke' */
            /* FunctionCaller: '<S24>/Function Caller' */
            /* Event: '<S23>:38' */
            Rte_Call_PokeTAIR_b_AGS_BoostSts_PokeTAIR_b_AGS_BoostSts
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_A);

            /* End of Outputs for SubSystem: '<S9>/Poke' */
        }
    }

    /* End of Chart: '<S20>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_CalActv_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_CalActv_ErrSts'
     */
    /* Transition: '<S23>:19' */
    rtb_TmpSignalConversionAtVeLI_j =
        Rte_Read_VeLINR_b_AGS_CalActv_VeLINR_b_AGS_CalActv
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_CalActvTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S28>:1' */
    (void)Rte_Read_VeLINR_b_AGS_CalActvTO_VeLINR_b_AGS_CalActvTO(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S25>/Chart' */
    if (tmpRead_0)
    {
        /* Transition: '<S28>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S28>:6' */
            /* Transition: '<S28>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_CalActv_CallStatus = 2U;

            /* Event: '<S28>:39' */
            /* Transition: '<S28>:29' */
        }
        else
        {
            /* Transition: '<S28>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_CalActv_CallStatus = 3U;

            /* Event: '<S28>:40' */
        }

        /* Transition: '<S28>:36' */
        /* Transition: '<S28>:23' */
    }
    else
    {
        /* Transition: '<S28>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 133)
        {
            /* Transition: '<S28>:33' */
            /* Transition: '<S28>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_CalActv_CallStatus = 4U;

            /* Transition: '<S28>:23' */
        }
        else
        {
            /* Transition: '<S28>:46' */
            /* Transition: '<S28>:37' */
            /* Call Poke */
            VeLINR_y_AGS_CalActv_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S10>/Poke' */
            /* FunctionCaller: '<S29>/Function Caller' */
            /* Event: '<S28>:38' */
            Rte_Call_PokeTAIR_b_AGS_CalibrationActv_PokeTAIR_b_AGS_CalibrationActv
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_g);

            /* End of Outputs for SubSystem: '<S10>/Poke' */
        }
    }

    /* End of Chart: '<S25>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_CalStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_CalStat_ErrSts'
     */
    /* Transition: '<S28>:19' */
    rtb_TmpSignalConversionAtVeLI_i =
        Rte_Read_VeLINR_b_AGS_CalStat_VeLINR_b_AGS_CalStat
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_CalStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S33>:1' */
    (void)Rte_Read_VeLINR_b_AGS_CalStatTO_VeLINR_b_AGS_CalStatTO(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S30>/Chart' */
    if (tmpRead_1)
    {
        /* Transition: '<S33>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S33>:6' */
            /* Transition: '<S33>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_CalStat_CallStatus = 2U;

            /* Event: '<S33>:39' */
            /* Transition: '<S33>:29' */
        }
        else
        {
            /* Transition: '<S33>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_CalStat_CallStatus = 3U;

            /* Event: '<S33>:40' */
        }

        /* Transition: '<S33>:36' */
        /* Transition: '<S33>:23' */
    }
    else
    {
        /* Transition: '<S33>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 133)
        {
            /* Transition: '<S33>:33' */
            /* Transition: '<S33>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_CalStat_CallStatus = 4U;

            /* Transition: '<S33>:23' */
        }
        else
        {
            /* Transition: '<S33>:46' */
            /* Transition: '<S33>:37' */
            /* Call Poke */
            VeLINR_y_AGS_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S11>/Poke' */
            /* FunctionCaller: '<S34>/Function Caller' incorporates:
             *  DataTypeConversion: '<S34>/Data Type Conversion'
             *  DataTypeConversion: '<S34>/Data Type Conversion1'
             */
            /* Event: '<S33>:38' */
            Rte_Call_PokeTAIR_e_AGS_CalibrationSts_PokeTAIR_e_AGS_CalibrationSts
                ((TeTAIR_e_AGS_Calibration_Sts)
                 LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_m);

            /* End of Outputs for SubSystem: '<S11>/Poke' */
        }
    }

    /* End of Chart: '<S30>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_CurrPos_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_CurrPos_ErrSts'
     */
    /* Transition: '<S33>:19' */
    rtb_TmpSignalConversionAtVeLI_g =
        Rte_Read_VeLINR_e_AGS_CurrPos_VeLINR_e_AGS_CurrPos
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_CurrPosTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S39>:1' */
    (void)Rte_Read_VeLINR_b_AGS_CurrPosTO_VeLINR_b_AGS_CurrPosTO(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S35>/Chart' */
    if (tmpRead_2)
    {
        /* Transition: '<S39>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S39>:6' */
            /* Transition: '<S39>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_CurrPos_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S12>/Fsft' */
            /* FunctionCaller: '<S40>/Function Caller' */
            /* Event: '<S39>:39' */
            Rte_Call_FsftTAIR_b_AGS_CurrPos_FsftTAIR_b_AGS_CurrPos();

            /* End of Outputs for SubSystem: '<S12>/Fsft' */
            /* Transition: '<S39>:29' */
        }
        else
        {
            /* Transition: '<S39>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_CurrPos_CallStatus = 3U;

            /* Event: '<S39>:40' */
        }

        /* Transition: '<S39>:36' */
        /* Transition: '<S39>:23' */
    }
    else
    {
        /* Transition: '<S39>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 133)
        {
            /* Transition: '<S39>:33' */
            /* Transition: '<S39>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_CurrPos_CallStatus = 4U;

            /* Transition: '<S39>:23' */
        }
        else
        {
            /* Transition: '<S39>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 1)
            {
                /* Transition: '<S39>:48' */
                /* Transition: '<S39>:53' */
                FA_out_o = true;

                /* Transition: '<S39>:56' */
            }
            else
            {
                /* Transition: '<S39>:52' */
                FA_out_o = false;
            }

            /* Transition: '<S39>:37' */
            /* Call Poke */
            VeLINR_y_AGS_CurrPos_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S12>/Poke' */
            /* FunctionCaller: '<S41>/Function Caller' */
            /* Event: '<S39>:38' */
            Rte_Call_PokeTAIR_e_AGS_CurrPos_LIN_PokeTAIR_e_AGS_CurrPos_LIN
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_A, FA_out_o);

            /* End of Outputs for SubSystem: '<S12>/Poke' */
        }
    }

    /* End of Chart: '<S35>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrLIN_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrLIN_ErrSts'
     */
    /* Transition: '<S39>:19' */
    rtb_TmpSignalConversionAtVeLI_c =
        Rte_Read_VeLINR_e_AGS_ErrLIN_VeLINR_e_AGS_ErrLIN
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrLIN_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S46>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrLIN_TO_VeLINR_b_AGS_ErrLIN_TO(&FA_out_pg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S42>/Chart' */
    if (FA_out_pg)
    {
        /* Transition: '<S46>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S46>:6' */
            /* Transition: '<S46>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrLIN_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S13>/Fsft' */
            /* FunctionCaller: '<S47>/Function Caller' */
            /* Event: '<S46>:39' */
            Rte_Call_FsftTAIR_e_AGS_ErrFdb_FsftTAIR_e_AGS_ErrFdb();

            /* End of Outputs for SubSystem: '<S13>/Fsft' */
            /* Transition: '<S46>:29' */
        }
        else
        {
            /* Transition: '<S46>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrLIN_CallStatus = 3U;

            /* Event: '<S46>:40' */
        }

        /* Transition: '<S46>:36' */
        /* Transition: '<S46>:23' */
    }
    else
    {
        /* Transition: '<S46>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 133)
        {
            /* Transition: '<S46>:33' */
            /* Transition: '<S46>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrLIN_CallStatus = 4U;

            /* Transition: '<S46>:23' */
        }
        else
        {
            /* Transition: '<S46>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 1)
            {
                /* Transition: '<S46>:48' */
                /* Transition: '<S46>:53' */
                FA_out_pg = true;

                /* Transition: '<S46>:56' */
            }
            else
            {
                /* Transition: '<S46>:52' */
            }

            /* Transition: '<S46>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrLIN_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S13>/Poke' */
            /* FunctionCaller: '<S48>/Function Caller' */
            /* Event: '<S46>:38' */
            Rte_Call_PokeTAIR_e_AGS_ErrFdb_PokeTAIR_e_AGS_ErrFdb
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_l, FA_out_pg);

            /* End of Outputs for SubSystem: '<S13>/Poke' */
        }
    }

    /* End of Chart: '<S42>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrMechBreak_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrMechBreak_ErrSts'
     */
    /* Transition: '<S46>:19' */
    rtb_TmpSignalConversionAtVeLI_l =
        Rte_Read_VeLINR_b_AGS_ErrMechBreak_VeLINR_b_AGS_ErrMechBreak
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrMechBreakTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S52>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrMechBreakTO_VeLINR_b_AGS_ErrMechBreakTO
        (&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S49>/Chart' */
    if (tmpRead_3)
    {
        /* Transition: '<S52>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S52>:6' */
            /* Transition: '<S52>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 2U;

            /* Event: '<S52>:39' */
            /* Transition: '<S52>:29' */
        }
        else
        {
            /* Transition: '<S52>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 3U;

            /* Event: '<S52>:40' */
        }

        /* Transition: '<S52>:36' */
        /* Transition: '<S52>:23' */
    }
    else
    {
        /* Transition: '<S52>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_l) == 133)
        {
            /* Transition: '<S52>:33' */
            /* Transition: '<S52>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 4U;

            /* Transition: '<S52>:23' */
        }
        else
        {
            /* Transition: '<S52>:46' */
            /* Transition: '<S52>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S14>/Poke' */
            /* FunctionCaller: '<S53>/Function Caller' */
            /* Event: '<S52>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrMechBreak_PokeTAIR_b_AGS_ErrMechBreak
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_d);

            /* End of Outputs for SubSystem: '<S14>/Poke' */
        }
    }

    /* End of Chart: '<S49>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrMechStuck_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrMechStuck_ErrSts'
     */
    /* Transition: '<S52>:19' */
    rtb_TmpSignalConversionAtVeLI_h =
        Rte_Read_VeLINR_b_AGS_ErrMechStuck_VeLINR_b_AGS_ErrMechStuck
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrMechStuckTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S57>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrMechStuckTO_VeLINR_b_AGS_ErrMechStuckTO
        (&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S54>/Chart' */
    if (tmpRead_4)
    {
        /* Transition: '<S57>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S57>:6' */
            /* Transition: '<S57>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 2U;

            /* Event: '<S57>:39' */
            /* Transition: '<S57>:29' */
        }
        else
        {
            /* Transition: '<S57>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 3U;

            /* Event: '<S57>:40' */
        }

        /* Transition: '<S57>:36' */
        /* Transition: '<S57>:23' */
    }
    else
    {
        /* Transition: '<S57>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_h) == 133)
        {
            /* Transition: '<S57>:33' */
            /* Transition: '<S57>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 4U;

            /* Transition: '<S57>:23' */
        }
        else
        {
            /* Transition: '<S57>:46' */
            /* Transition: '<S57>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S15>/Poke' */
            /* FunctionCaller: '<S58>/Function Caller' */
            /* Event: '<S57>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrMechStuck_PokeTAIR_b_AGS_ErrMechStuck
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_j);

            /* End of Outputs for SubSystem: '<S15>/Poke' */
        }
    }

    /* End of Chart: '<S54>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrOvrTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrOvrTemp_ErrSts'
     */
    /* Transition: '<S57>:19' */
    rtb_TmpSignalConversionAtVeLI_f =
        Rte_Read_VeLINR_b_AGS_ErrOvrTemp_VeLINR_b_AGS_ErrOvrTemp
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrOvrTempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S62>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrOvrTempTO_VeLINR_b_AGS_ErrOvrTempTO
        (&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S59>/Chart' */
    if (tmpRead_5)
    {
        /* Transition: '<S62>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S62>:6' */
            /* Transition: '<S62>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 2U;

            /* Event: '<S62>:39' */
            /* Transition: '<S62>:29' */
        }
        else
        {
            /* Transition: '<S62>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 3U;

            /* Event: '<S62>:40' */
        }

        /* Transition: '<S62>:36' */
        /* Transition: '<S62>:23' */
    }
    else
    {
        /* Transition: '<S62>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 133)
        {
            /* Transition: '<S62>:33' */
            /* Transition: '<S62>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 4U;

            /* Transition: '<S62>:23' */
        }
        else
        {
            /* Transition: '<S62>:46' */
            /* Transition: '<S62>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S16>/Poke' */
            /* FunctionCaller: '<S63>/Function Caller' */
            /* Event: '<S62>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrOverTemp_PokeTAIR_b_AGS_ErrOverTemp
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_e);

            /* End of Outputs for SubSystem: '<S16>/Poke' */
        }
    }

    /* End of Chart: '<S59>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrOvrVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrOvrVolt_ErrSts'
     */
    /* Transition: '<S62>:19' */
    rtb_TmpSignalConversionAtVeL_cr =
        Rte_Read_VeLINR_b_AGS_ErrOvrVolt_VeLINR_b_AGS_ErrOvrVolt
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrOvrVoltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S67>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrOvrVoltTO_VeLINR_b_AGS_ErrOvrVoltTO
        (&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S64>/Chart' */
    if (tmpRead_6)
    {
        /* Transition: '<S67>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S67>:6' */
            /* Transition: '<S67>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 2U;

            /* Event: '<S67>:39' */
            /* Transition: '<S67>:29' */
        }
        else
        {
            /* Transition: '<S67>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 3U;

            /* Event: '<S67>:40' */
        }

        /* Transition: '<S67>:36' */
        /* Transition: '<S67>:23' */
    }
    else
    {
        /* Transition: '<S67>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cr) == 133)
        {
            /* Transition: '<S67>:33' */
            /* Transition: '<S67>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 4U;

            /* Transition: '<S67>:23' */
        }
        else
        {
            /* Transition: '<S67>:46' */
            /* Transition: '<S67>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S17>/Poke' */
            /* FunctionCaller: '<S68>/Function Caller' */
            /* Event: '<S67>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrOverVolt_PokeTAIR_b_AGS_ErrOverVolt
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_f);

            /* End of Outputs for SubSystem: '<S17>/Poke' */
        }
    }

    /* End of Chart: '<S64>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrUnVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrUnVolt_ErrSts'
     */
    /* Transition: '<S67>:19' */
    rtb_TmpSignalConversionAtVeLI_a =
        Rte_Read_VeLINR_b_AGS_ErrUnVolt_VeLINR_b_AGS_ErrUnVolt
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__fw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrUnVoltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S72>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrUnVoltTO_VeLINR_b_AGS_ErrUnVoltTO(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S69>/Chart' */
    if (tmpRead_7)
    {
        /* Transition: '<S72>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S72>:6' */
            /* Transition: '<S72>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 2U;

            /* Event: '<S72>:39' */
            /* Transition: '<S72>:29' */
        }
        else
        {
            /* Transition: '<S72>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 3U;

            /* Event: '<S72>:40' */
        }

        /* Transition: '<S72>:36' */
        /* Transition: '<S72>:23' */
    }
    else
    {
        /* Transition: '<S72>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_a) == 133)
        {
            /* Transition: '<S72>:33' */
            /* Transition: '<S72>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 4U;

            /* Transition: '<S72>:23' */
        }
        else
        {
            /* Transition: '<S72>:46' */
            /* Transition: '<S72>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S18>/Poke' */
            /* FunctionCaller: '<S73>/Function Caller' */
            /* Event: '<S72>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrUnderVolt_PokeTAIR_b_AGS_ErrUnderVolt
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__fw);

            /* End of Outputs for SubSystem: '<S18>/Poke' */
        }
    }

    /* End of Chart: '<S69>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_AGS_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_AGS_ErrSts'
     */
    /* Transition: '<S72>:19' */
    rtb_TmpSignalConversionAtVeLI_d =
        Rte_Read_VeLINR_b_RsErr_AGS_VeLINR_b_RsErr_AGS
        (&LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_AGS_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S77>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_AGS_TO_VeLINR_b_RsErr_AGS_TO(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S74>/Chart' */
    if (tmpRead_8)
    {
        /* Transition: '<S77>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S77>:6' */
            /* Transition: '<S77>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_AGS_CallStatus = 2U;

            /* Event: '<S77>:39' */
            /* Transition: '<S77>:29' */
        }
        else
        {
            /* Transition: '<S77>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_AGS_CallStatus = 3U;

            /* Event: '<S77>:40' */
        }

        /* Transition: '<S77>:36' */
        /* Transition: '<S77>:23' */
    }
    else
    {
        /* Transition: '<S77>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_d) == 133)
        {
            /* Transition: '<S77>:33' */
            /* Transition: '<S77>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_AGS_CallStatus = 4U;

            /* Transition: '<S77>:23' */
        }
        else
        {
            /* Transition: '<S77>:46' */
            /* Transition: '<S77>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_AGS_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S19>/Poke' */
            /* FunctionCaller: '<S78>/Function Caller' */
            /* Event: '<S77>:38' */
            Rte_Call_PokeTAIR_b_AGS_ResErr_PokeTAIR_b_AGS_ResErr
                (LR3B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_R);

            /* End of Outputs for SubSystem: '<S19>/Poke' */
        }
    }

    /* End of Chart: '<S74>/Chart' */
    /* Transition: '<S77>:19' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, LR3B_BLUEN_CODE) LR3B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
