/*
 * File: LR1B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'LR1B_BLUEN_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:47:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LR1B_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LR1B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, LR1B_BLUEN_VAR_INIT) KeLR1B_b_CanLocStatusBypEnbl
    = 0;                               /* Referenced by: '<S7>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, LR1B_BLUEN_VAR_INIT)
    KeLR1B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S8>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_LR1B_BLUEN
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_AIR_PRE_ERR_CallStatus;/* '<S27>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_CURR_CallStatus;/* '<S34>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_DBLK_ACTV_CallStatus;/* '<S41>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_DR_RN_ERR_CallStatus;/* '<S48>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus;/* '<S55>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus;/* '<S62>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_MONTRNG_RPM_CallStatus;/* '<S69>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_NODE_ERR_CallStatus;/* '<S76>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_OVR_CUR_ERR_CallStatus;/* '<S83>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_OVR_TMP_ERR_CallStatus;/* '<S90>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_POST_RUN_STAT_CallStatus;/* '<S97>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_RPM_ACTUAL_CallStatus;/* '<S104>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_RPM_TARGET_CallStatus;/* '<S111>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_SUPPLIER_CallStatus;/* '<S146>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_TEMP_CallStatus;/* '<S118>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_VERSION_CallStatus;/* '<S151>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_VLTG_CallStatus;/* '<S125>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_BCP_VLTG_ERR_CallStatus;/* '<S132>/Chart' */
static VAR(uint8, LR1B_BLUEN_VAR_INIT) VeLINR_y_RsErr_BCP_PUMP_CallStatus;/* '<S139>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_BLUEN
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_BLUEN
#include "MemMap.h"

VAR(B_LR1B_BLUEN_ac_T, LR1B_BLUEN_VAR_INIT) LR1B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, LR1B_BLUEN_CODE) LR1B_BLUEN_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeLINR;
    uint8 rtb_TmpSignalConversionAtVeLI_d;
    uint8 rtb_TmpSignalConversionAtVeLI_g;
    uint8 rtb_TmpSignalConversionAtVeLI_e;
    uint8 rtb_TmpSignalConversionAtVeLI_f;
    uint8 rtb_TmpSignalConversionAtVeLI_k;
    uint8 rtb_TmpSignalConversionAtVeL_fh;
    uint8 rtb_TmpSignalConversionAtVeL_dt;
    uint8 rtb_TmpSignalConversionAtVeL_g4;
    uint8 rtb_TmpSignalConversionAtVeL_gq;
    uint8 rtb_TmpSignalConversionAtVeL_go;
    uint8 rtb_TmpSignalConversionAtVeLI_m;
    uint8 rtb_TmpSignalConversionAtVeL_mv;
    uint8 rtb_TmpSignalConversionAtVeLI_i;
    uint8 rtb_TmpSignalConversionAtVeLI_j;
    uint8 rtb_TmpSignalConversionAtVeLI_a;
    uint8 rtb_TmpSignalConversionAtVeL_m0;
    uint8 rtb_TmpSignalConversionAtVeL_eo;
    uint8 rtb_TmpSignalConversionAtVeL_is;
    float32 tmp;
    TePWMD_e_CanLocStatus rtb_Switch;
    uint8 tmpRead;
    boolean FA_out_c;
    boolean FA_out_e;
    boolean FA_out_ec;
    boolean FA_out_ef;
    boolean FA_out_et;
    boolean FA_out_g;
    boolean FA_out_h;
    boolean FA_out_i;
    boolean FA_out_k2;
    boolean FA_out_li;
    boolean FA_out_n;
    boolean FA_out_o;
    boolean FA_out_p;
    boolean FA_out_p5;
    boolean FA_out_pg;
    boolean FA_out_py;
    boolean rtb_RelationalOperator;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_AIR_PRE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_AIR_PRE_ERR_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLINR =
        Rte_Read_VeLINR_e_BCP_AIR_PRE_ERR_VeLINR_e_BCP_AIR_PRE_ERR
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_B);

    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S7>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeLR1B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S8>/Calib'
         */
        rtb_Switch = KeLR1B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S9>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S9>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S6>/Constant'
     *  Switch: '<S9>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_AIR_PRE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S31>:1' */
    (void)Rte_Read_VeLINR_b_BCP_AIR_PRE_ERR_TO_VeLINR_b_BCP_AIR_PRE_ERR_TO
        (&FA_out_ec);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S27>/Chart' */
    if (FA_out_ec)
    {
        /* Transition: '<S31>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S31>:6' */
            /* Transition: '<S31>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S10>/Fsft' */
            /* FunctionCaller: '<S32>/Function Caller' */
            /* Event: '<S31>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpAirPrsntErr_FsftPMIR_b_LTActPumpAirPrsntErr
                ();

            /* End of Outputs for SubSystem: '<S10>/Fsft' */
            /* Transition: '<S31>:29' */
        }
        else
        {
            /* Transition: '<S31>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 3U;

            /* Event: '<S31>:40' */
        }

        /* Transition: '<S31>:36' */
        /* Transition: '<S31>:23' */
    }
    else
    {
        /* Transition: '<S31>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLINR) == 133)
        {
            /* Transition: '<S31>:33' */
            /* Transition: '<S31>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 4U;

            /* Transition: '<S31>:23' */
        }
        else
        {
            /* Transition: '<S31>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLINR) == 1)
            {
                /* Transition: '<S31>:48' */
                /* Transition: '<S31>:53' */
                FA_out_ec = true;

                /* Transition: '<S31>:56' */
            }
            else
            {
                /* Transition: '<S31>:52' */
            }

            /* Transition: '<S31>:37' */
            /* Call Poke */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S10>/Poke' */
            /* FunctionCaller: '<S33>/Function Caller' */
            /* Event: '<S31>:38' */
            Rte_Call_PokePMIR_e_LTActPumpAirPrsntErr_PokePMIR_e_LTActPumpAirPrsntErr
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_B, FA_out_ec);

            /* End of Outputs for SubSystem: '<S10>/Poke' */
        }
    }

    /* End of Chart: '<S27>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_CURR_ErrSts'
     */
    /* Transition: '<S31>:19' */
    rtb_TmpSignalConversionAtVeLI_d =
        Rte_Read_VeLINR_I_BCP_CURR_VeLINR_I_BCP_CURR
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S38>:1' */
    (void)Rte_Read_VeLINR_b_BCP_CURR_TO_VeLINR_b_BCP_CURR_TO(&FA_out_p5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S34>/Chart' */
    if (FA_out_p5)
    {
        /* Transition: '<S38>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S38>:6' */
            /* Transition: '<S38>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S11>/Fsft' */
            /* FunctionCaller: '<S39>/Function Caller' */
            /* Event: '<S38>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpCrnt_FsftPMIR_b_LTActPumpCrnt();

            /* End of Outputs for SubSystem: '<S11>/Fsft' */
            /* Transition: '<S38>:29' */
        }
        else
        {
            /* Transition: '<S38>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_CURR_CallStatus = 3U;

            /* Event: '<S38>:40' */
        }

        /* Transition: '<S38>:36' */
        /* Transition: '<S38>:23' */
    }
    else
    {
        /* Transition: '<S38>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_d) == 133)
        {
            /* Transition: '<S38>:33' */
            /* Transition: '<S38>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_CURR_CallStatus = 4U;

            /* Transition: '<S38>:23' */
        }
        else
        {
            /* Transition: '<S38>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_d) == 1)
            {
                /* Transition: '<S38>:48' */
                /* Transition: '<S38>:53' */
                FA_out_p5 = true;

                /* Transition: '<S38>:56' */
            }
            else
            {
                /* Transition: '<S38>:52' */
            }

            /* Transition: '<S38>:37' */
            /* Call Poke */
            VeLINR_y_BCP_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S11>/Poke' */
            /* FunctionCaller: '<S40>/Function Caller' */
            /* Event: '<S38>:38' */
            Rte_Call_PokePMIR_I_LTActPumpCrnt_PokePMIR_I_LTActPumpCrnt
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_B, FA_out_p5);

            /* End of Outputs for SubSystem: '<S11>/Poke' */
        }
    }

    /* End of Chart: '<S34>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_DBLK_ACTV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_DBLK_ACTV_ErrSts'
     */
    /* Transition: '<S38>:19' */
    rtb_TmpSignalConversionAtVeLI_g =
        Rte_Read_VeLINR_e_BCP_DBLK_ACTV_VeLINR_e_BCP_DBLK_ACTV
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_DBLK_ACTV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S45>:1' */
    (void)Rte_Read_VeLINR_b_BCP_DBLK_ACTV_TO_VeLINR_b_BCP_DBLK_ACTV_TO(&FA_out_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S41>/Chart' */
    if (FA_out_n)
    {
        /* Transition: '<S45>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S45>:6' */
            /* Transition: '<S45>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S12>/Fsft' */
            /* FunctionCaller: '<S46>/Function Caller' */
            /* Event: '<S45>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpDeblock_FsftPMIR_b_LTActPumpDeblock();

            /* End of Outputs for SubSystem: '<S12>/Fsft' */
            /* Transition: '<S45>:29' */
        }
        else
        {
            /* Transition: '<S45>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 3U;

            /* Event: '<S45>:40' */
        }

        /* Transition: '<S45>:36' */
        /* Transition: '<S45>:23' */
    }
    else
    {
        /* Transition: '<S45>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 133)
        {
            /* Transition: '<S45>:33' */
            /* Transition: '<S45>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 4U;

            /* Transition: '<S45>:23' */
        }
        else
        {
            /* Transition: '<S45>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 1)
            {
                /* Transition: '<S45>:48' */
                /* Transition: '<S45>:53' */
                FA_out_n = true;

                /* Transition: '<S45>:56' */
            }
            else
            {
                /* Transition: '<S45>:52' */
            }

            /* Transition: '<S45>:37' */
            /* Call Poke */
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S12>/Poke' */
            /* FunctionCaller: '<S47>/Function Caller' */
            /* Event: '<S45>:38' */
            Rte_Call_PokePMIR_e_LTActPumpDeblock_PokePMIR_e_LTActPumpDeblock
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_h, FA_out_n);

            /* End of Outputs for SubSystem: '<S12>/Poke' */
        }
    }

    /* End of Chart: '<S41>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_DR_RN_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_DR_RN_ERR_ErrSts'
     */
    /* Transition: '<S45>:19' */
    rtb_TmpSignalConversionAtVeLI_e =
        Rte_Read_VeLINR_e_BCP_DR_RN_ERR_VeLINR_e_BCP_DR_RN_ERR
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_DR_RN_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S52>:1' */
    (void)Rte_Read_VeLINR_b_BCP_DR_RN_ERR_TO_VeLINR_b_BCP_DR_RN_ERR_TO(&FA_out_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S48>/Chart' */
    if (FA_out_o)
    {
        /* Transition: '<S52>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S52>:6' */
            /* Transition: '<S52>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S13>/Fsft' */
            /* FunctionCaller: '<S53>/Function Caller' */
            /* Event: '<S52>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpDryRun_FsftPMIR_b_LTActPumpDryRun();

            /* End of Outputs for SubSystem: '<S13>/Fsft' */
            /* Transition: '<S52>:29' */
        }
        else
        {
            /* Transition: '<S52>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 3U;

            /* Event: '<S52>:40' */
        }

        /* Transition: '<S52>:36' */
        /* Transition: '<S52>:23' */
    }
    else
    {
        /* Transition: '<S52>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 133)
        {
            /* Transition: '<S52>:33' */
            /* Transition: '<S52>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 4U;

            /* Transition: '<S52>:23' */
        }
        else
        {
            /* Transition: '<S52>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 1)
            {
                /* Transition: '<S52>:48' */
                /* Transition: '<S52>:53' */
                FA_out_o = true;

                /* Transition: '<S52>:56' */
            }
            else
            {
                /* Transition: '<S52>:52' */
            }

            /* Transition: '<S52>:37' */
            /* Call Poke */
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S13>/Poke' */
            /* FunctionCaller: '<S54>/Function Caller' */
            /* Event: '<S52>:38' */
            Rte_Call_PokePMIR_e_LTActPumpDryRun_PokePMIR_e_LTActPumpDryRun
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_m, FA_out_o);

            /* End of Outputs for SubSystem: '<S13>/Poke' */
        }
    }

    /* End of Chart: '<S48>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_FL_SAFE_ACTVTD_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_FL_SAFE_ACTVTD_ErrSts'
     */
    /* Transition: '<S52>:19' */
    rtb_TmpSignalConversionAtVeLI_f =
        Rte_Read_VeLINR_e_BCP_FL_SAFE_ACTVTD_VeLINR_e_BCP_FL_SAFE_ACTVTD
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_FL_SAFE_ACTVTD_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S59>:1' */
    (void)Rte_Read_VeLINR_b_BCP_FL_SAFE_ACTVTD_TO_VeLINR_b_BCP_FL_SAFE_ACTVTD_TO
        (&FA_out_pg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S55>/Chart' */
    if (FA_out_pg)
    {
        /* Transition: '<S59>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S59>:6' */
            /* Transition: '<S59>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S14>/Fsft' */
            /* FunctionCaller: '<S60>/Function Caller' */
            /* Event: '<S59>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpFailsafe_FsftPMIR_b_LTActPumpFailsafe();

            /* End of Outputs for SubSystem: '<S14>/Fsft' */
            /* Transition: '<S59>:29' */
        }
        else
        {
            /* Transition: '<S59>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 3U;

            /* Event: '<S59>:40' */
        }

        /* Transition: '<S59>:36' */
        /* Transition: '<S59>:23' */
    }
    else
    {
        /* Transition: '<S59>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 133)
        {
            /* Transition: '<S59>:33' */
            /* Transition: '<S59>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 4U;

            /* Transition: '<S59>:23' */
        }
        else
        {
            /* Transition: '<S59>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 1)
            {
                /* Transition: '<S59>:48' */
                /* Transition: '<S59>:53' */
                FA_out_pg = true;

                /* Transition: '<S59>:56' */
            }
            else
            {
                /* Transition: '<S59>:52' */
            }

            /* Transition: '<S59>:37' */
            /* Call Poke */
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S14>/Poke' */
            /* FunctionCaller: '<S61>/Function Caller' */
            /* Event: '<S59>:38' */
            Rte_Call_PokePMIR_e_LTActPumpFailsafe_PokePMIR_e_LTActPumpFailsafe
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_d, FA_out_pg);

            /* End of Outputs for SubSystem: '<S14>/Poke' */
        }
    }

    /* End of Chart: '<S55>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S59>:19' */
    rtb_TmpSignalConversionAtVeLI_k =
        Rte_Read_VeLINR_e_BCP_LMP_HM_AN_ON_VeLINR_e_BCP_LMP_HM_AN_ON
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S66>:1' */
    (void)Rte_Read_VeLINR_b_BCP_LMP_HM_AN_ON_TO_VeLINR_b_BCP_LMP_HM_AN_ON_TO
        (&FA_out_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S62>/Chart' */
    if (FA_out_i)
    {
        /* Transition: '<S66>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S66>:6' */
            /* Transition: '<S66>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S15>/Fsft' */
            /* FunctionCaller: '<S67>/Function Caller' */
            /* Event: '<S66>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpLmpHM_FsftPMIR_b_LTActPumpLmpHM();

            /* End of Outputs for SubSystem: '<S15>/Fsft' */
            /* Transition: '<S66>:29' */
        }
        else
        {
            /* Transition: '<S66>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S66>:40' */
        }

        /* Transition: '<S66>:36' */
        /* Transition: '<S66>:23' */
    }
    else
    {
        /* Transition: '<S66>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 133)
        {
            /* Transition: '<S66>:33' */
            /* Transition: '<S66>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S66>:23' */
        }
        else
        {
            /* Transition: '<S66>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 1)
            {
                /* Transition: '<S66>:48' */
                /* Transition: '<S66>:53' */
                FA_out_i = true;

                /* Transition: '<S66>:56' */
            }
            else
            {
                /* Transition: '<S66>:52' */
            }

            /* Transition: '<S66>:37' */
            /* Call Poke */
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S15>/Poke' */
            /* FunctionCaller: '<S68>/Function Caller' */
            /* Event: '<S66>:38' */
            Rte_Call_PokePMIR_e_LTActPumpLmpHM_PokePMIR_e_LTActPumpLmpHM
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_a, FA_out_i);

            /* End of Outputs for SubSystem: '<S15>/Poke' */
        }
    }

    /* End of Chart: '<S62>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S66>:19' */
    rtb_TmpSignalConversionAtVeL_fh =
        Rte_Read_VeLINR_e_BCP_MONTRNG_RPM_VeLINR_e_BCP_MONTRNG_RPM
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S73>:1' */
    (void)Rte_Read_VeLINR_b_BCP_MONTRNG_RPM_TO_VeLINR_b_BCP_MONTRNG_RPM_TO
        (&FA_out_py);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S69>/Chart' */
    if (FA_out_py)
    {
        /* Transition: '<S73>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S73>:6' */
            /* Transition: '<S73>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S16>/Fsft' */
            /* FunctionCaller: '<S74>/Function Caller' */
            /* Event: '<S73>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpMntrRPM_FsftPMIR_b_LTActPumpMntrRPM();

            /* End of Outputs for SubSystem: '<S16>/Fsft' */
            /* Transition: '<S73>:29' */
        }
        else
        {
            /* Transition: '<S73>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S73>:40' */
        }

        /* Transition: '<S73>:36' */
        /* Transition: '<S73>:23' */
    }
    else
    {
        /* Transition: '<S73>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fh) == 133)
        {
            /* Transition: '<S73>:33' */
            /* Transition: '<S73>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S73>:23' */
        }
        else
        {
            /* Transition: '<S73>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fh) == 1)
            {
                /* Transition: '<S73>:48' */
                /* Transition: '<S73>:53' */
                FA_out_py = true;

                /* Transition: '<S73>:56' */
            }
            else
            {
                /* Transition: '<S73>:52' */
            }

            /* Transition: '<S73>:37' */
            /* Call Poke */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S16>/Poke' */
            /* FunctionCaller: '<S75>/Function Caller' */
            /* Event: '<S73>:38' */
            Rte_Call_PokePMIR_e_LTActPumpMntrRPM_PokePMIR_e_LTActPumpMntrRPM
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_j, FA_out_py);

            /* End of Outputs for SubSystem: '<S16>/Poke' */
        }
    }

    /* End of Chart: '<S69>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_NODE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_NODE_ERR_ErrSts'
     */
    /* Transition: '<S73>:19' */
    rtb_TmpSignalConversionAtVeL_dt =
        Rte_Read_VeLINR_e_BCP_NODE_ERR_VeLINR_e_BCP_NODE_ERR
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_NODE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S80>:1' */
    (void)Rte_Read_VeLINR_b_BCP_NODE_ERR_TO_VeLINR_b_BCP_NODE_ERR_TO(&FA_out_k2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S76>/Chart' */
    if (FA_out_k2)
    {
        /* Transition: '<S80>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S80>:6' */
            /* Transition: '<S80>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_NODE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S17>/Fsft' */
            /* FunctionCaller: '<S81>/Function Caller' */
            /* Event: '<S80>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpNodeErr_FsftPMIR_b_LTActPumpNodeErr();

            /* End of Outputs for SubSystem: '<S17>/Fsft' */
            /* Transition: '<S80>:29' */
        }
        else
        {
            /* Transition: '<S80>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_NODE_ERR_CallStatus = 3U;

            /* Event: '<S80>:40' */
        }

        /* Transition: '<S80>:36' */
        /* Transition: '<S80>:23' */
    }
    else
    {
        /* Transition: '<S80>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dt) == 133)
        {
            /* Transition: '<S80>:33' */
            /* Transition: '<S80>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_NODE_ERR_CallStatus = 4U;

            /* Transition: '<S80>:23' */
        }
        else
        {
            /* Transition: '<S80>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dt) == 1)
            {
                /* Transition: '<S80>:48' */
                /* Transition: '<S80>:53' */
                FA_out_k2 = true;

                /* Transition: '<S80>:56' */
            }
            else
            {
                /* Transition: '<S80>:52' */
            }

            /* Transition: '<S80>:37' */
            /* Call Poke */
            VeLINR_y_BCP_NODE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S17>/Poke' */
            /* FunctionCaller: '<S82>/Function Caller' */
            /* Event: '<S80>:38' */
            Rte_Call_PokePMIR_e_LTActPumpNodeErr_PokePMIR_e_LTActPumpNodeErr
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_l, FA_out_k2);

            /* End of Outputs for SubSystem: '<S17>/Poke' */
        }
    }

    /* End of Chart: '<S76>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_OVR_CUR_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_OVR_CUR_ERR_ErrSts'
     */
    /* Transition: '<S80>:19' */
    rtb_TmpSignalConversionAtVeL_g4 =
        Rte_Read_VeLINR_e_BCP_OVR_CUR_ERR_VeLINR_e_BCP_OVR_CUR_ERR
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_OVR_CUR_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S87>:1' */
    (void)Rte_Read_VeLINR_b_BCP_OVR_CUR_ERR_TO_VeLINR_b_BCP_OVR_CUR_ERR_TO
        (&FA_out_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S83>/Chart' */
    if (FA_out_c)
    {
        /* Transition: '<S87>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S87>:6' */
            /* Transition: '<S87>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S18>/Fsft' */
            /* FunctionCaller: '<S88>/Function Caller' */
            /* Event: '<S87>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpOvrCrnt_FsftPMIR_b_LTActPumpOvrCrnt();

            /* End of Outputs for SubSystem: '<S18>/Fsft' */
            /* Transition: '<S87>:29' */
        }
        else
        {
            /* Transition: '<S87>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 3U;

            /* Event: '<S87>:40' */
        }

        /* Transition: '<S87>:36' */
        /* Transition: '<S87>:23' */
    }
    else
    {
        /* Transition: '<S87>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_g4) == 133)
        {
            /* Transition: '<S87>:33' */
            /* Transition: '<S87>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 4U;

            /* Transition: '<S87>:23' */
        }
        else
        {
            /* Transition: '<S87>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_g4) == 1)
            {
                /* Transition: '<S87>:48' */
                /* Transition: '<S87>:53' */
                FA_out_c = true;

                /* Transition: '<S87>:56' */
            }
            else
            {
                /* Transition: '<S87>:52' */
            }

            /* Transition: '<S87>:37' */
            /* Call Poke */
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S18>/Poke' */
            /* FunctionCaller: '<S89>/Function Caller' */
            /* Event: '<S87>:38' */
            Rte_Call_PokePMIR_e_LTActPumpOvrCrnt_PokePMIR_e_LTActPumpOvrCrnt
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_f, FA_out_c);

            /* End of Outputs for SubSystem: '<S18>/Poke' */
        }
    }

    /* End of Chart: '<S83>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_OVR_TMP_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_OVR_TMP_ERR_ErrSts'
     */
    /* Transition: '<S87>:19' */
    rtb_TmpSignalConversionAtVeL_gq =
        Rte_Read_VeLINR_e_BCP_OVR_TMP_ERR_VeLINR_e_BCP_OVR_TMP_ERR
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_OVR_TMP_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S94>:1' */
    (void)Rte_Read_VeLINR_b_BCP_OVR_TMP_ERR_TO_VeLINR_b_BCP_OVR_TMP_ERR_TO
        (&FA_out_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S90>/Chart' */
    if (FA_out_h)
    {
        /* Transition: '<S94>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S94>:6' */
            /* Transition: '<S94>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S19>/Fsft' */
            /* FunctionCaller: '<S95>/Function Caller' */
            /* Event: '<S94>:39' */
            Rte_Call_FsftPMIR_b_LT_ActvPmpOT_FsftPMIR_b_LT_ActvPmpOT();

            /* End of Outputs for SubSystem: '<S19>/Fsft' */
            /* Transition: '<S94>:29' */
        }
        else
        {
            /* Transition: '<S94>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 3U;

            /* Event: '<S94>:40' */
        }

        /* Transition: '<S94>:36' */
        /* Transition: '<S94>:23' */
    }
    else
    {
        /* Transition: '<S94>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gq) == 133)
        {
            /* Transition: '<S94>:33' */
            /* Transition: '<S94>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 4U;

            /* Transition: '<S94>:23' */
        }
        else
        {
            /* Transition: '<S94>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gq) == 1)
            {
                /* Transition: '<S94>:48' */
                /* Transition: '<S94>:53' */
                FA_out_h = true;

                /* Transition: '<S94>:56' */
            }
            else
            {
                /* Transition: '<S94>:52' */
            }

            /* Transition: '<S94>:37' */
            /* Call Poke */
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S19>/Poke' */
            /* FunctionCaller: '<S96>/Function Caller' */
            /* Event: '<S94>:38' */
            Rte_Call_PokePMIR_e_LT_ActvPmpOT_PokePMIR_e_LT_ActvPmpOT
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_e, FA_out_h);

            /* End of Outputs for SubSystem: '<S19>/Poke' */
        }
    }

    /* End of Chart: '<S90>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S94>:19' */
    rtb_TmpSignalConversionAtVeL_go =
        Rte_Read_VeLINR_e_BCP_POST_RUN_STAT_VeLINR_e_BCP_POST_RUN_STAT
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S101>:1' */
    (void)Rte_Read_VeLINR_b_BCP_POST_RUN_STAT_TO_VeLINR_b_BCP_POST_RUN_STAT_TO
        (&FA_out_ef);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S97>/Chart' */
    if (FA_out_ef)
    {
        /* Transition: '<S101>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S101>:6' */
            /* Transition: '<S101>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S20>/Fsft' */
            /* FunctionCaller: '<S102>/Function Caller' */
            /* Event: '<S101>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpPstRnSt_FsftPMIR_b_LTActPumpPstRnSt();

            /* End of Outputs for SubSystem: '<S20>/Fsft' */
            /* Transition: '<S101>:29' */
        }
        else
        {
            /* Transition: '<S101>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S101>:40' */
        }

        /* Transition: '<S101>:36' */
        /* Transition: '<S101>:23' */
    }
    else
    {
        /* Transition: '<S101>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_go) == 133)
        {
            /* Transition: '<S101>:33' */
            /* Transition: '<S101>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S101>:23' */
        }
        else
        {
            /* Transition: '<S101>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_go) == 1)
            {
                /* Transition: '<S101>:48' */
                /* Transition: '<S101>:53' */
                FA_out_ef = true;

                /* Transition: '<S101>:56' */
            }
            else
            {
                /* Transition: '<S101>:52' */
            }

            /* Transition: '<S101>:37' */
            /* Call Poke */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S20>/Poke' */
            /* FunctionCaller: '<S103>/Function Caller' */
            /* Event: '<S101>:38' */
            Rte_Call_PokePMIR_e_LTActPumpPstRnSt_PokePMIR_e_LTActPumpPstRnSt
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_i, FA_out_ef);

            /* End of Outputs for SubSystem: '<S20>/Poke' */
        }
    }

    /* End of Chart: '<S97>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts'
     */
    /* Transition: '<S101>:19' */
    rtb_TmpSignalConversionAtVeLI_m =
        Rte_Read_VeLINR_Pct_BCP_RPM_ACTUAL_VeLINR_Pct_BCP_RPM_ACTUAL
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_RPM_ACTUAL_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S108>:1' */
    (void)Rte_Read_VeLINR_b_BCP_RPM_ACTUAL_TO_VeLINR_b_BCP_RPM_ACTUAL_TO
        (&FA_out_et);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S104>/Chart' */
    if (FA_out_et)
    {
        /* Transition: '<S108>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S108>:6' */
            /* Transition: '<S108>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S21>/Fsft' */
            /* FunctionCaller: '<S109>/Function Caller' */
            /* Event: '<S108>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpRPMActPct_FsftPMIR_b_LTActPumpRPMActPct
                ();

            /* End of Outputs for SubSystem: '<S21>/Fsft' */
            /* Transition: '<S108>:29' */
        }
        else
        {
            /* Transition: '<S108>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 3U;

            /* Event: '<S108>:40' */
        }

        /* Transition: '<S108>:36' */
        /* Transition: '<S108>:23' */
    }
    else
    {
        /* Transition: '<S108>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 133)
        {
            /* Transition: '<S108>:33' */
            /* Transition: '<S108>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 4U;

            /* Transition: '<S108>:23' */
        }
        else
        {
            /* Transition: '<S108>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 1)
            {
                /* Transition: '<S108>:48' */
                /* Transition: '<S108>:53' */
                FA_out_et = true;

                /* Transition: '<S108>:56' */
            }
            else
            {
                /* Transition: '<S108>:52' */
            }

            /* Transition: '<S108>:37' */
            /* Call Poke */
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S21>/Poke' */
            /* FunctionCaller: '<S110>/Function Caller' */
            /* Event: '<S108>:38' */
            Rte_Call_PokePMIR_Pct_LTActPumpRPMAct_PokePMIR_Pct_LTActPumpRPMAct
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_Pct, FA_out_et);

            /* End of Outputs for SubSystem: '<S21>/Poke' */
        }
    }

    /* End of Chart: '<S104>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_RPM_TARGET_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_RPM_TARGET_ErrSts'
     */
    /* Transition: '<S108>:19' */
    rtb_TmpSignalConversionAtVeL_mv =
        Rte_Read_VeLINR_Pct_BCP_RPM_TARGET_VeLINR_Pct_BCP_RPM_TARGET
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_RPM_TARGET_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S115>:1' */
    (void)Rte_Read_VeLINR_b_BCP_RPM_TARGET_TO_VeLINR_b_BCP_RPM_TARGET_TO
        (&FA_out_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S111>/Chart' */
    if (FA_out_g)
    {
        /* Transition: '<S115>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S115>:6' */
            /* Transition: '<S115>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S22>/Fsft' */
            /* FunctionCaller: '<S116>/Function Caller' */
            /* Event: '<S115>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpRPMTgtPct_FsftPMIR_b_LTActPumpRPMTgtPct
                ();

            /* End of Outputs for SubSystem: '<S22>/Fsft' */
            /* Transition: '<S115>:29' */
        }
        else
        {
            /* Transition: '<S115>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 3U;

            /* Event: '<S115>:40' */
        }

        /* Transition: '<S115>:36' */
        /* Transition: '<S115>:23' */
    }
    else
    {
        /* Transition: '<S115>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mv) == 133)
        {
            /* Transition: '<S115>:33' */
            /* Transition: '<S115>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 4U;

            /* Transition: '<S115>:23' */
        }
        else
        {
            /* Transition: '<S115>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mv) == 1)
            {
                /* Transition: '<S115>:48' */
                /* Transition: '<S115>:53' */
                FA_out_g = true;

                /* Transition: '<S115>:56' */
            }
            else
            {
                /* Transition: '<S115>:52' */
            }

            /* Transition: '<S115>:37' */
            /* Call Poke */
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S22>/Poke' */
            /* FunctionCaller: '<S117>/Function Caller' */
            /* Event: '<S115>:38' */
            Rte_Call_PokePMIR_Pct_LTActPumpRPMTgt_PokePMIR_Pct_LTActPumpRPMTgt
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_p, FA_out_g);

            /* End of Outputs for SubSystem: '<S22>/Poke' */
        }
    }

    /* End of Chart: '<S111>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_TEMP_ErrSts'
     */
    /* Transition: '<S115>:19' */
    rtb_TmpSignalConversionAtVeLI_i =
        Rte_Read_VeLINR_T_BCP_TEMP_VeLINR_T_BCP_TEMP
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S122>:1' */
    (void)Rte_Read_VeLINR_b_BCP_TEMP_TO_VeLINR_b_BCP_TEMP_TO(&FA_out_li);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S118>/Chart' */
    if (FA_out_li)
    {
        /* Transition: '<S122>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S122>:6' */
            /* Transition: '<S122>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S23>/Fsft' */
            /* FunctionCaller: '<S123>/Function Caller' */
            /* Event: '<S122>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpTemp_FsftPMIR_b_LTActPumpTemp();

            /* End of Outputs for SubSystem: '<S23>/Fsft' */
            /* Transition: '<S122>:29' */
        }
        else
        {
            /* Transition: '<S122>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_TEMP_CallStatus = 3U;

            /* Event: '<S122>:40' */
        }

        /* Transition: '<S122>:36' */
        /* Transition: '<S122>:23' */
    }
    else
    {
        /* Transition: '<S122>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 133)
        {
            /* Transition: '<S122>:33' */
            /* Transition: '<S122>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_TEMP_CallStatus = 4U;

            /* Transition: '<S122>:23' */
        }
        else
        {
            /* Transition: '<S122>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 1)
            {
                /* Transition: '<S122>:48' */
                /* Transition: '<S122>:53' */
                FA_out_li = true;

                /* Transition: '<S122>:56' */
            }
            else
            {
                /* Transition: '<S122>:52' */
            }

            /* Transition: '<S122>:37' */
            /* Call Poke */
            VeLINR_y_BCP_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S23>/Poke' */
            /* FunctionCaller: '<S124>/Function Caller' */
            /* Event: '<S122>:38' */
            Rte_Call_PokePMIR_T_LTActPumpTemp_PokePMIR_T_LTActPumpTemp
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_B, FA_out_li);

            /* End of Outputs for SubSystem: '<S23>/Poke' */
        }
    }

    /* End of Chart: '<S118>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_VLTG_ErrSts'
     */
    /* Transition: '<S122>:19' */
    rtb_TmpSignalConversionAtVeLI_j =
        Rte_Read_VeLINR_U_BCP_VLTG_VeLINR_U_BCP_VLTG
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S129>:1' */
    (void)Rte_Read_VeLINR_b_BCP_VLTG_TO_VeLINR_b_BCP_VLTG_TO(&FA_out_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S125>/Chart' */
    if (FA_out_p)
    {
        /* Transition: '<S129>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S129>:6' */
            /* Transition: '<S129>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S24>/Fsft' */
            /* FunctionCaller: '<S130>/Function Caller' */
            /* Event: '<S129>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpVlt_FsftPMIR_b_LTActPumpVlt();

            /* End of Outputs for SubSystem: '<S24>/Fsft' */
            /* Transition: '<S129>:29' */
        }
        else
        {
            /* Transition: '<S129>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_VLTG_CallStatus = 3U;

            /* Event: '<S129>:40' */
        }

        /* Transition: '<S129>:36' */
        /* Transition: '<S129>:23' */
    }
    else
    {
        /* Transition: '<S129>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 133)
        {
            /* Transition: '<S129>:33' */
            /* Transition: '<S129>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_VLTG_CallStatus = 4U;

            /* Transition: '<S129>:23' */
        }
        else
        {
            /* Transition: '<S129>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 1)
            {
                /* Transition: '<S129>:48' */
                /* Transition: '<S129>:53' */
                FA_out_p = true;

                /* Transition: '<S129>:56' */
            }
            else
            {
                /* Transition: '<S129>:52' */
            }

            /* Transition: '<S129>:37' */
            /* Call Poke */
            VeLINR_y_BCP_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S24>/Poke' */
            /* FunctionCaller: '<S131>/Function Caller' */
            /* Event: '<S129>:38' */
            Rte_Call_PokePMIR_U_LTActPumpVlt_PokePMIR_U_LTActPumpVlt
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_B, FA_out_p);

            /* End of Outputs for SubSystem: '<S24>/Poke' */
        }
    }

    /* End of Chart: '<S125>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_VLTG_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_VLTG_ERR_ErrSts'
     */
    /* Transition: '<S129>:19' */
    rtb_TmpSignalConversionAtVeLI_a =
        Rte_Read_VeLINR_e_BCP_VLTG_ERR_VeLINR_e_BCP_VLTG_ERR
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_VLTG_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S136>:1' */
    (void)Rte_Read_VeLINR_b_BCP_VLTG_ERR_TO_VeLINR_b_BCP_VLTG_ERR_TO(&FA_out_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S132>/Chart' */
    if (FA_out_e)
    {
        /* Transition: '<S136>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S136>:6' */
            /* Transition: '<S136>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S25>/Fsft' */
            /* FunctionCaller: '<S137>/Function Caller' */
            /* Event: '<S136>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpSuppVltErr_FsftPMIR_b_LTActPumpSuppVltErr
                ();

            /* End of Outputs for SubSystem: '<S25>/Fsft' */
            /* Transition: '<S136>:29' */
        }
        else
        {
            /* Transition: '<S136>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 3U;

            /* Event: '<S136>:40' */
        }

        /* Transition: '<S136>:36' */
        /* Transition: '<S136>:23' */
    }
    else
    {
        /* Transition: '<S136>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_a) == 133)
        {
            /* Transition: '<S136>:33' */
            /* Transition: '<S136>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 4U;

            /* Transition: '<S136>:23' */
        }
        else
        {
            /* Transition: '<S136>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_a) == 1)
            {
                /* Transition: '<S136>:48' */
                /* Transition: '<S136>:53' */
                FA_out_e = true;

                /* Transition: '<S136>:56' */
            }
            else
            {
                /* Transition: '<S136>:52' */
            }

            /* Transition: '<S136>:37' */
            /* Call Poke */
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S25>/Poke' */
            /* FunctionCaller: '<S138>/Function Caller' */
            /* Event: '<S136>:38' */
            Rte_Call_PokePMIR_e_LTActPumpSuppVltErr_PokePMIR_e_LTActPumpSuppVltErr
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_c, FA_out_e);

            /* End of Outputs for SubSystem: '<S25>/Poke' */
        }
    }

    /* End of Chart: '<S132>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_BCP_PUMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_BCP_PUMP_ErrSts'
     */
    /* Transition: '<S136>:19' */
    rtb_TmpSignalConversionAtVeL_m0 =
        Rte_Read_VeLINR_b_RsErr_BCP_PUMP_VeLINR_b_RsErr_BCP_PUMP
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_BCP_PUMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S142>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_BCP_PUMP_TO_VeLINR_b_RsErr_BCP_PUMP_TO
        (&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S139>/Chart' */
    if (tmpRead_0)
    {
        /* Transition: '<S142>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S142>:6' */
            /* Transition: '<S142>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 2U;

            /* Event: '<S142>:39' */
            /* Transition: '<S142>:29' */
        }
        else
        {
            /* Transition: '<S142>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 3U;

            /* Event: '<S142>:40' */
        }

        /* Transition: '<S142>:36' */
        /* Transition: '<S142>:23' */
    }
    else
    {
        /* Transition: '<S142>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_m0) == 133)
        {
            /* Transition: '<S142>:33' */
            /* Transition: '<S142>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 4U;

            /* Transition: '<S142>:23' */
        }
        else
        {
            /* Transition: '<S142>:46' */
            /* Transition: '<S142>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S26>/Poke' */
            /* FunctionCaller: '<S143>/Function Caller' */
            /* Event: '<S142>:38' */
            Rte_Call_PokePMIR_b_LTActPumpRespErr_PokePMIR_b_LTActPumpRespErr
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_R);

            /* End of Outputs for SubSystem: '<S26>/Poke' */
        }
    }

    /* End of Chart: '<S139>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_SUPPLIER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_SUPPLIER_ErrSts'
     */
    /* Transition: '<S142>:19' */
    rtb_TmpSignalConversionAtVeL_eo =
        Rte_Read_VeLINR_e_BCP_SUPPLIER_VeLINR_e_BCP_SUPPLIER
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_SUPPLIER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S149>:1' */
    (void)Rte_Read_VeLINR_b_BCP_SUPPLIER_TO_VeLINR_b_BCP_SUPPLIER_TO(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S146>/Chart' */
    if (tmpRead_1)
    {
        /* Transition: '<S149>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S149>:6' */
            /* Transition: '<S149>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 2U;

            /* Event: '<S149>:39' */
            /* Transition: '<S149>:29' */
        }
        else
        {
            /* Transition: '<S149>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 3U;

            /* Event: '<S149>:40' */
        }

        /* Transition: '<S149>:36' */
        /* Transition: '<S149>:23' */
    }
    else
    {
        /* Transition: '<S149>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_eo) == 133)
        {
            /* Transition: '<S149>:33' */
            /* Transition: '<S149>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 4U;

            /* Transition: '<S149>:23' */
        }
        else
        {
            /* Transition: '<S149>:46' */
            /* Transition: '<S149>:37' */
            /* Call Poke */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S144>/Poke' */
            /* FunctionCaller: '<S150>/Function Caller' */
            /* Event: '<S149>:38' */
            Rte_Call_PokePMIR_e_LTActPumpProdSuplr_PokePMIR_e_LTActPumpProdSuplr
                (LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_o);

            /* End of Outputs for SubSystem: '<S144>/Poke' */
        }
    }

    /* End of Chart: '<S146>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_VERSION_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_VERSION_ErrSts'
     */
    /* Transition: '<S149>:19' */
    rtb_TmpSignalConversionAtVeL_is =
        Rte_Read_VeLINR_y_BCP_VERSION_VeLINR_y_BCP_VERSION
        (&LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_y_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_VERSION_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S154>:1' */
    (void)Rte_Read_VeLINR_b_BCP_VERSION_TO_VeLINR_b_BCP_VERSION_TO(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S151>/Chart' */
    if (tmpRead_2)
    {
        /* Transition: '<S154>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S154>:6' */
            /* Transition: '<S154>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_VERSION_CallStatus = 2U;

            /* Event: '<S154>:39' */
            /* Transition: '<S154>:29' */
        }
        else
        {
            /* Transition: '<S154>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_VERSION_CallStatus = 3U;

            /* Event: '<S154>:40' */
        }

        /* Transition: '<S154>:36' */
        /* Transition: '<S154>:23' */
    }
    else
    {
        /* Transition: '<S154>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_is) == 133)
        {
            /* Transition: '<S154>:33' */
            /* Transition: '<S154>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_VERSION_CallStatus = 4U;

            /* Transition: '<S154>:23' */
        }
        else
        {
            /* Transition: '<S154>:46' */
            /* Transition: '<S154>:37' */
            /* Call Poke */
            VeLINR_y_BCP_VERSION_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S145>/Poke' */
            /* DataTypeConversion: '<S155>/Data Type Conversion' */
            /* Event: '<S154>:38' */
            tmp = fmodf(floorf(LR1B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_y_B),
                        256.0F);

            /* FunctionCaller: '<S155>/Function Caller' incorporates:
             *  DataTypeConversion: '<S155>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_LTActPump_Ver_PokePMIR_y_LTActPump_Ver((uint8)
                ((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S145>/Poke' */
        }
    }

    /* End of Chart: '<S151>/Chart' */
    /* Transition: '<S154>:19' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, LR1B_BLUEN_CODE) LR1B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
