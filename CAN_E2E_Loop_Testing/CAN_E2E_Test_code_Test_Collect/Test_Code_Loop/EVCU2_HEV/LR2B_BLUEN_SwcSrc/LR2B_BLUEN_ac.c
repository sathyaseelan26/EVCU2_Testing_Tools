/*
 * File: LR2B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'LR2B_BLUEN_ac'.
 *
 * Model version                  : 1.57
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:48:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LR2B_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LR2B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, LR2B_BLUEN_VAR_INIT) KeLR2B_b_CanLocStatusBypEnbl
    = 0;                               /* Referenced by: '<S9>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, LR2B_BLUEN_VAR_INIT)
    KeLR2B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S10>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_LR2B_BLUEN
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_BoostStat_CallStatus;/* '<S25>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_CalActv_CallStatus;/* '<S30>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_CalStat_CallStatus;/* '<S35>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_CurrPos_CallStatus;/* '<S40>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_ErrLIN_CallStatus;/* '<S47>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_ErrMechBreak_CallStatus;/* '<S54>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_ErrMechStuck_CallStatus;/* '<S59>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_ErrOvrTemp_CallStatus;/* '<S64>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_ErrOvrVolt_CallStatus;/* '<S69>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AGS2_ErrUnVolt_CallStatus;/* '<S74>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_AIR_PRE_ERR_CallStatus;/* '<S101>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_CURR_CallStatus;/* '<S108>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_DBLK_ACTV_CallStatus;/* '<S115>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_DR_RN_ERR_CallStatus;/* '<S122>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus;/* '<S129>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus;/* '<S136>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_MONTRNG_RPM_CallStatus;/* '<S143>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_NODE_ERR_CallStatus;/* '<S150>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_OVR_CUR_ERR_CallStatus;/* '<S157>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_OVR_TMP_ERR_CallStatus;/* '<S164>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_POST_RUN_STAT_CallStatus;/* '<S171>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus;/* '<S178>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus;/* '<S185>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_SUPPLIER_CallStatus;/* '<S220>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_TEMP_CallStatus;/* '<S192>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_VERSION_CallStatus;/* '<S225>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_VLTG_CallStatus;/* '<S199>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_AHP_VLTG_ERR_CallStatus;/* '<S206>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompBoardTemp_CallStatus;/* '<S240>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompElecCurr_CallStatus;/* '<S247>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompElecPwr_CallStatus;/* '<S254>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompFaultStat_CallStatus;/* '<S261>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompHVInput_CallStatus;/* '<S268>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompIGBTTemp_CallStatus;/* '<S275>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompSpdIncrReq_CallStatus;/* '<S282>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompStat_CallStatus;/* '<S287>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_CompressorSpd_CallStatus;/* '<S294>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_AIR_PRE_ERR_CallStatus;/* '<S323>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_CURR_CallStatus;/* '<S330>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_DBLK_ACTV_CallStatus;/* '<S337>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_DR_RN_ERR_CallStatus;/* '<S344>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus;/* '<S351>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus;/* '<S358>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_MONTRNG_RPM_CallStatus;/* '<S365>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_NODE_ERR_CallStatus;/* '<S372>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_OVR_CUR_ERR_CallStatus;/* '<S379>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_OVR_TMP_ERR_CallStatus;/* '<S386>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_POST_RUN_STAT_CallStatus;/* '<S393>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus;/* '<S400>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus;/* '<S407>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_SUPPLIER_CallStatus;/* '<S442>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_TEMP_CallStatus;/* '<S414>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_VERSION_CallStatus;/* '<S447>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_VLTG_CallStatus;/* '<S421>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_PECP_VLTG_ERR_CallStatus;/* '<S428>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_RsErr_AGS2_CallStatus;/* '<S79>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_RsErr_AHP_PUMP_CallStatus;/* '<S213>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_RsErr_EAC2_CallStatus;/* '<S301>/Chart' */
static VAR(uint8, LR2B_BLUEN_VAR_INIT) VeLINR_y_RsErr_PECP_PUMP_CallStatus;/* '<S435>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_BLUEN
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_BLUEN
#include "MemMap.h"

VAR(B_LR2B_BLUEN_ac_T, LR2B_BLUEN_VAR_INIT) LR2B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, LR2B_BLUEN_CODE) LR2B_BLUEN_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeLINR;
    uint8 rtb_TmpSignalConversionAtVeLI_a;
    uint8 rtb_TmpSignalConversionAtVeL_a1;
    uint8 rtb_TmpSignalConversionAtVeLI_k;
    uint8 rtb_TmpSignalConversionAtVeL_kq;
    uint8 rtb_TmpSignalConversionAtVeLI_o;
    uint8 rtb_TmpSignalConversionAtVeL_oq;
    uint8 rtb_TmpSignalConversionAtVeLI_h;
    uint8 rtb_TmpSignalConversionAtVeLI_p;
    uint8 rtb_TmpSignalConversionAtVeLI_d;
    uint8 rtb_TmpSignalConversionAtVeLI_l;
    uint8 rtb_TmpSignalConversionAtVeLI_g;
    uint8 rtb_TmpSignalConversionAtVeL_k4;
    uint8 rtb_TmpSignalConversionAtVeL_hc;
    uint8 rtb_TmpSignalConversionAtVeLI_i;
    uint8 rtb_TmpSignalConversionAtVeLI_n;
    uint8 rtb_TmpSignalConversionAtVeLI_m;
    uint8 rtb_TmpSignalConversionAtVeLI_f;
    uint8 rtb_TmpSignalConversionAtVeL_o1;
    uint8 rtb_TmpSignalConversionAtVeLI_c;
    uint8 rtb_TmpSignalConversionAtVeL_mx;
    uint8 rtb_TmpSignalConversionAtVeL_iv;
    uint8 rtb_TmpSignalConversionAtVeL_lg;
    uint8 rtb_TmpSignalConversionAtVeL_fz;
    uint8 rtb_TmpSignalConversionAtVeL_pp;
    uint8 rtb_TmpSignalConversionAtVeL_i5;
    uint8 rtb_TmpSignalConversionAtVeLI_j;
    uint8 rtb_TmpSignalConversionAtVeL_fh;
    uint8 rtb_TmpSignalConversionAtVeL_ht;
    uint8 rtb_TmpSignalConversionAtVeL_gw;
    uint8 rtb_TmpSignalConversionAtVeL_f1;
    uint8 rtb_TmpSignalConversionAtVeL_ha;
    uint8 rtb_TmpSignalConversionAtVeL_jz;
    uint8 rtb_TmpSignalConversionAtVeL_dl;
    uint8 rtb_TmpSignalConversionAtVeLI_b;
    uint8 rtb_TmpSignalConversionAtVeL_bl;
    uint8 rtb_TmpSignalConversionAtVeL_ie;
    uint8 rtb_TmpSignalConversionAtVeL_gg;
    uint8 rtb_TmpSignalConversionAtVeL_fg;
    uint8 rtb_TmpSignalConversionAtVeL_mb;
    uint8 rtb_TmpSignalConversionAtVeL_no;
    uint8 rtb_TmpSignalConversionAtVeL_c5;
    uint8 rtb_TmpSignalConversionAtVeL_fn;
    uint8 rtb_TmpSignalConversionAtVeL_hh;
    uint8 rtb_TmpSignalConversionAtVeL_bo;
    uint8 rtb_TmpSignalConversionAtVeL_cg;
    uint8 rtb_TmpSignalConversionAtVeLI_e;
    uint8 rtb_TmpSignalConversionAtVeL_b0;
    uint8 rtb_TmpSignalConversionAtVeL_es;
    uint8 rtb_TmpSignalConversionAtVeL_ka;
    uint8 rtb_TmpSignalConversionAtVeL_hl;
    uint8 rtb_TmpSignalConversionAtVeL_ks;
    uint8 rtb_TmpSignalConversionAtVeL_cm;
    uint8 rtb_TmpSignalConversionAtVeL_km;
    uint8 rtb_TmpSignalConversionAtVeL_j3;
    uint8 rtb_TmpSignalConversionAtVeL_mj;
    uint8 rtb_TmpSignalConversionAtVeL_do;
    uint8 rtb_TmpSignalConversionAtVeL_kg;
    uint8 rtb_TmpSignalConversionAtVeL_lh;
    float32 tmp;
    TePWMD_e_CanLocStatus rtb_Switch;
    uint8 tmpRead;
    boolean FA_out_a;
    boolean FA_out_a1;
    boolean FA_out_av;
    boolean FA_out_b;
    boolean FA_out_bk;
    boolean FA_out_c;
    boolean FA_out_c3;
    boolean FA_out_ch;
    boolean FA_out_cq;
    boolean FA_out_d;
    boolean FA_out_e;
    boolean FA_out_ee;
    boolean FA_out_f;
    boolean FA_out_fc;
    boolean FA_out_fq;
    boolean FA_out_g;
    boolean FA_out_gs;
    boolean FA_out_hi;
    boolean FA_out_hx;
    boolean FA_out_i;
    boolean FA_out_k1;
    boolean FA_out_k5;
    boolean FA_out_ki;
    boolean FA_out_kiz;
    boolean FA_out_kt;
    boolean FA_out_l;
    boolean FA_out_lf;
    boolean FA_out_m;
    boolean FA_out_m1;
    boolean FA_out_mb;
    boolean FA_out_mo;
    boolean FA_out_n;
    boolean FA_out_om;
    boolean FA_out_ov;
    boolean FA_out_ox;
    boolean FA_out_oxp;
    boolean FA_out_p;
    boolean FA_out_p0;
    boolean FA_out_pb;
    boolean FA_out_pg;
    boolean FA_out_pp;
    boolean FA_out_pw;
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
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_g;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_BoostStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_BoostStat_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLINR =
        Rte_Read_VeLINR_b_AGS2_BoostStat_VeLINR_b_AGS2_BoostStat
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_A);

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S9>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeLR2B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S10>/Calib'
         */
        rtb_Switch = KeLR2B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S13>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S13>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S8>/Constant'
     *  Switch: '<S13>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_BoostStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S28>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_BoostStatTO_VeLINR_b_AGS2_BoostStatTO
        (&FA_out_om);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S25>/Chart' */
    if (FA_out_om)
    {
        /* Transition: '<S28>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S28>:6' */
            /* Transition: '<S28>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_BoostStat_CallStatus = 2U;

            /* Event: '<S28>:39' */
            /* Transition: '<S28>:29' */
        }
        else
        {
            /* Transition: '<S28>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_BoostStat_CallStatus = 3U;

            /* Event: '<S28>:40' */
        }

        /* Transition: '<S28>:36' */
        /* Transition: '<S28>:23' */
    }
    else
    {
        /* Transition: '<S28>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLINR) == 133)
        {
            /* Transition: '<S28>:33' */
            /* Transition: '<S28>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_BoostStat_CallStatus = 4U;

            /* Transition: '<S28>:23' */
        }
        else
        {
            /* Transition: '<S28>:46' */
            /* Transition: '<S28>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_BoostStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S14>/Poke' */
            /* FunctionCaller: '<S29>/Function Caller' */
            /* Event: '<S28>:38' */
            Rte_Call_PokeTAIR_b_AGS2_BoostSts_PokeTAIR_b_AGS2_BoostSts
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_A);

            /* End of Outputs for SubSystem: '<S14>/Poke' */
        }
    }

    /* End of Chart: '<S25>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_CalActv_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_CalActv_ErrSts'
     */
    /* Transition: '<S28>:19' */
    rtb_TmpSignalConversionAtVeLI_a =
        Rte_Read_VeLINR_b_AGS2_CalActv_VeLINR_b_AGS2_CalActv
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_CalActvTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S33>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_CalActvTO_VeLINR_b_AGS2_CalActvTO(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S30>/Chart' */
    if (tmpRead_0)
    {
        /* Transition: '<S33>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S33>:6' */
            /* Transition: '<S33>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_CalActv_CallStatus = 2U;

            /* Event: '<S33>:39' */
            /* Transition: '<S33>:29' */
        }
        else
        {
            /* Transition: '<S33>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_CalActv_CallStatus = 3U;

            /* Event: '<S33>:40' */
        }

        /* Transition: '<S33>:36' */
        /* Transition: '<S33>:23' */
    }
    else
    {
        /* Transition: '<S33>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_a) == 133)
        {
            /* Transition: '<S33>:33' */
            /* Transition: '<S33>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_CalActv_CallStatus = 4U;

            /* Transition: '<S33>:23' */
        }
        else
        {
            /* Transition: '<S33>:46' */
            /* Transition: '<S33>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_CalActv_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S15>/Poke' */
            /* FunctionCaller: '<S34>/Function Caller' */
            /* Event: '<S33>:38' */
            Rte_Call_PokeTAIR_b_AGS2_CalibrationActv_PokeTAIR_b_AGS2_CalibrationActv
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_c);

            /* End of Outputs for SubSystem: '<S15>/Poke' */
        }
    }

    /* End of Chart: '<S30>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_CalStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_CalStat_ErrSts'
     */
    /* Transition: '<S33>:19' */
    rtb_TmpSignalConversionAtVeL_a1 =
        Rte_Read_VeLINR_b_AGS2_CalStat_VeLINR_b_AGS2_CalStat
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_CalStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S38>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_CalStatTO_VeLINR_b_AGS2_CalStatTO(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S35>/Chart' */
    if (tmpRead_1)
    {
        /* Transition: '<S38>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S38>:6' */
            /* Transition: '<S38>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_CalStat_CallStatus = 2U;

            /* Event: '<S38>:39' */
            /* Transition: '<S38>:29' */
        }
        else
        {
            /* Transition: '<S38>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_CalStat_CallStatus = 3U;

            /* Event: '<S38>:40' */
        }

        /* Transition: '<S38>:36' */
        /* Transition: '<S38>:23' */
    }
    else
    {
        /* Transition: '<S38>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_a1) == 133)
        {
            /* Transition: '<S38>:33' */
            /* Transition: '<S38>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_CalStat_CallStatus = 4U;

            /* Transition: '<S38>:23' */
        }
        else
        {
            /* Transition: '<S38>:46' */
            /* Transition: '<S38>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S16>/Poke' */
            /* FunctionCaller: '<S39>/Function Caller' incorporates:
             *  DataTypeConversion: '<S39>/Data Type Conversion'
             *  DataTypeConversion: '<S39>/Data Type Conversion1'
             */
            /* Event: '<S38>:38' */
            Rte_Call_PokeTAIR_e_AGS2_CalibrationSts_PokeTAIR_e_AGS2_CalibrationSts
                ((TeTAIR_e_AGS_Calibration_Sts)
                 LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_j);

            /* End of Outputs for SubSystem: '<S16>/Poke' */
        }
    }

    /* End of Chart: '<S35>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_CurrPos_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_CurrPos_ErrSts'
     */
    /* Transition: '<S38>:19' */
    rtb_TmpSignalConversionAtVeLI_k =
        Rte_Read_VeLINR_e_AGS2_CurrPos_VeLINR_e_AGS2_CurrPos
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_CurrPosTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S44>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_CurrPosTO_VeLINR_b_AGS2_CurrPosTO(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S40>/Chart' */
    if (tmpRead_2)
    {
        /* Transition: '<S44>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S44>:6' */
            /* Transition: '<S44>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_CurrPos_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S17>/Fsft' */
            /* FunctionCaller: '<S45>/Function Caller' */
            /* Event: '<S44>:39' */
            Rte_Call_FsftTAIR_b_AGS2_CurrPos_FsftTAIR_b_AGS2_CurrPos();

            /* End of Outputs for SubSystem: '<S17>/Fsft' */
            /* Transition: '<S44>:29' */
        }
        else
        {
            /* Transition: '<S44>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_CurrPos_CallStatus = 3U;

            /* Event: '<S44>:40' */
        }

        /* Transition: '<S44>:36' */
        /* Transition: '<S44>:23' */
    }
    else
    {
        /* Transition: '<S44>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 133)
        {
            /* Transition: '<S44>:33' */
            /* Transition: '<S44>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_CurrPos_CallStatus = 4U;

            /* Transition: '<S44>:23' */
        }
        else
        {
            /* Transition: '<S44>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 1)
            {
                /* Transition: '<S44>:48' */
                /* Transition: '<S44>:53' */
                FA_out_om = true;

                /* Transition: '<S44>:56' */
            }
            else
            {
                /* Transition: '<S44>:52' */
                FA_out_om = false;
            }

            /* Transition: '<S44>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_CurrPos_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S17>/Poke' */
            /* FunctionCaller: '<S46>/Function Caller' */
            /* Event: '<S44>:38' */
            Rte_Call_PokeTAIR_e_AGS2_CurrPos_LIN_PokeTAIR_e_AGS2_CurrPos_LIN
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_A, FA_out_om);

            /* End of Outputs for SubSystem: '<S17>/Poke' */
        }
    }

    /* End of Chart: '<S40>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrLIN_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_ErrLIN_ErrSts'
     */
    /* Transition: '<S44>:19' */
    rtb_TmpSignalConversionAtVeL_kq =
        Rte_Read_VeLINR_e_AGS2_ErrLIN_VeLINR_e_AGS2_ErrLIN
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_ErrLIN_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S51>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrLIN_TO_VeLINR_b_AGS2_ErrLIN_TO(&FA_out_pg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S47>/Chart' */
    if (FA_out_pg)
    {
        /* Transition: '<S51>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S51>:6' */
            /* Transition: '<S51>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S18>/Fsft' */
            /* FunctionCaller: '<S52>/Function Caller' */
            /* Event: '<S51>:39' */
            Rte_Call_FsftTAIR_e_AGS2_ErrFdb_FsftTAIR_e_AGS2_ErrFdb();

            /* End of Outputs for SubSystem: '<S18>/Fsft' */
            /* Transition: '<S51>:29' */
        }
        else
        {
            /* Transition: '<S51>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 3U;

            /* Event: '<S51>:40' */
        }

        /* Transition: '<S51>:36' */
        /* Transition: '<S51>:23' */
    }
    else
    {
        /* Transition: '<S51>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kq) == 133)
        {
            /* Transition: '<S51>:33' */
            /* Transition: '<S51>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 4U;

            /* Transition: '<S51>:23' */
        }
        else
        {
            /* Transition: '<S51>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kq) == 1)
            {
                /* Transition: '<S51>:48' */
                /* Transition: '<S51>:53' */
                FA_out_pg = true;

                /* Transition: '<S51>:56' */
            }
            else
            {
                /* Transition: '<S51>:52' */
            }

            /* Transition: '<S51>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S18>/Poke' */
            /* FunctionCaller: '<S53>/Function Caller' */
            /* Event: '<S51>:38' */
            Rte_Call_PokeTAIR_e_AGS2_ErrFdb_PokeTAIR_e_AGS2_ErrFdb
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_f, FA_out_pg);

            /* End of Outputs for SubSystem: '<S18>/Poke' */
        }
    }

    /* End of Chart: '<S47>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrMechBreak_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_ErrMechBreak_ErrSts'
     */
    /* Transition: '<S51>:19' */
    rtb_TmpSignalConversionAtVeLI_o =
        Rte_Read_VeLINR_b_AGS2_ErrMechBreak_VeLINR_b_AGS2_ErrMechBreak
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_cuq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_ErrMechBreakTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S57>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrMechBreakTO_VeLINR_b_AGS2_ErrMechBreakTO
        (&FA_out_c3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S54>/Chart' */
    if (FA_out_c3)
    {
        /* Transition: '<S57>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S57>:6' */
            /* Transition: '<S57>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 2U;

            /* Event: '<S57>:39' */
            /* Transition: '<S57>:29' */
        }
        else
        {
            /* Transition: '<S57>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 3U;

            /* Event: '<S57>:40' */
        }

        /* Transition: '<S57>:36' */
        /* Transition: '<S57>:23' */
    }
    else
    {
        /* Transition: '<S57>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_o) == 133)
        {
            /* Transition: '<S57>:33' */
            /* Transition: '<S57>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 4U;

            /* Transition: '<S57>:23' */
        }
        else
        {
            /* Transition: '<S57>:46' */
            /* Transition: '<S57>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S19>/Poke' */
            /* FunctionCaller: '<S58>/Function Caller' */
            /* Event: '<S57>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrMechBreak_PokeTAIR_b_AGS2_ErrMechBreak
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_cuq);

            /* End of Outputs for SubSystem: '<S19>/Poke' */
        }
    }

    /* End of Chart: '<S54>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrMechStuck_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_ErrMechStuck_ErrSts'
     */
    /* Transition: '<S57>:19' */
    rtb_TmpSignalConversionAtVeL_oq =
        Rte_Read_VeLINR_b_AGS2_ErrMechStuck_VeLINR_b_AGS2_ErrMechStuck
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_ErrMechStuckTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S62>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrMechStuckTO_VeLINR_b_AGS2_ErrMechStuckTO
        (&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S59>/Chart' */
    if (tmpRead_3)
    {
        /* Transition: '<S62>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S62>:6' */
            /* Transition: '<S62>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 2U;

            /* Event: '<S62>:39' */
            /* Transition: '<S62>:29' */
        }
        else
        {
            /* Transition: '<S62>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 3U;

            /* Event: '<S62>:40' */
        }

        /* Transition: '<S62>:36' */
        /* Transition: '<S62>:23' */
    }
    else
    {
        /* Transition: '<S62>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_oq) == 133)
        {
            /* Transition: '<S62>:33' */
            /* Transition: '<S62>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 4U;

            /* Transition: '<S62>:23' */
        }
        else
        {
            /* Transition: '<S62>:46' */
            /* Transition: '<S62>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S20>/Poke' */
            /* FunctionCaller: '<S63>/Function Caller' */
            /* Event: '<S62>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrMechStuck_PokeTAIR_b_AGS2_ErrMechStuck
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_d);

            /* End of Outputs for SubSystem: '<S20>/Poke' */
        }
    }

    /* End of Chart: '<S59>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrOvrTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_ErrOvrTemp_ErrSts'
     */
    /* Transition: '<S62>:19' */
    rtb_TmpSignalConversionAtVeLI_h =
        Rte_Read_VeLINR_b_AGS2_ErrOvrTemp_VeLINR_b_AGS2_ErrOvrTemp
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_ErrOvrTempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S67>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrOvrTempTO_VeLINR_b_AGS2_ErrOvrTempTO
        (&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S64>/Chart' */
    if (tmpRead_4)
    {
        /* Transition: '<S67>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S67>:6' */
            /* Transition: '<S67>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 2U;

            /* Event: '<S67>:39' */
            /* Transition: '<S67>:29' */
        }
        else
        {
            /* Transition: '<S67>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 3U;

            /* Event: '<S67>:40' */
        }

        /* Transition: '<S67>:36' */
        /* Transition: '<S67>:23' */
    }
    else
    {
        /* Transition: '<S67>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_h) == 133)
        {
            /* Transition: '<S67>:33' */
            /* Transition: '<S67>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 4U;

            /* Transition: '<S67>:23' */
        }
        else
        {
            /* Transition: '<S67>:46' */
            /* Transition: '<S67>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S21>/Poke' */
            /* FunctionCaller: '<S68>/Function Caller' */
            /* Event: '<S67>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrOverTemp_PokeTAIR_b_AGS2_ErrOverTemp
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_m);

            /* End of Outputs for SubSystem: '<S21>/Poke' */
        }
    }

    /* End of Chart: '<S64>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrOvrVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_ErrOvrVolt_ErrSts'
     */
    /* Transition: '<S67>:19' */
    rtb_TmpSignalConversionAtVeLI_p =
        Rte_Read_VeLINR_b_AGS2_ErrOvrVolt_VeLINR_b_AGS2_ErrOvrVolt
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_ErrOvrVoltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S72>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrOvrVoltTO_VeLINR_b_AGS2_ErrOvrVoltTO
        (&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S69>/Chart' */
    if (tmpRead_5)
    {
        /* Transition: '<S72>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S72>:6' */
            /* Transition: '<S72>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 2U;

            /* Event: '<S72>:39' */
            /* Transition: '<S72>:29' */
        }
        else
        {
            /* Transition: '<S72>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 3U;

            /* Event: '<S72>:40' */
        }

        /* Transition: '<S72>:36' */
        /* Transition: '<S72>:23' */
    }
    else
    {
        /* Transition: '<S72>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_p) == 133)
        {
            /* Transition: '<S72>:33' */
            /* Transition: '<S72>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 4U;

            /* Transition: '<S72>:23' */
        }
        else
        {
            /* Transition: '<S72>:46' */
            /* Transition: '<S72>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S22>/Poke' */
            /* FunctionCaller: '<S73>/Function Caller' */
            /* Event: '<S72>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrOverVolt_PokeTAIR_b_AGS2_ErrOverVolt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_l);

            /* End of Outputs for SubSystem: '<S22>/Poke' */
        }
    }

    /* End of Chart: '<S69>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrUnVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_ErrUnVolt_ErrSts'
     */
    /* Transition: '<S72>:19' */
    rtb_TmpSignalConversionAtVeLI_d =
        Rte_Read_VeLINR_b_AGS2_ErrUnVolt_VeLINR_b_AGS2_ErrUnVolt
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__mf);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS2_ErrUnVoltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S77>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrUnVoltTO_VeLINR_b_AGS2_ErrUnVoltTO
        (&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S74>/Chart' */
    if (tmpRead_6)
    {
        /* Transition: '<S77>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S77>:6' */
            /* Transition: '<S77>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 2U;

            /* Event: '<S77>:39' */
            /* Transition: '<S77>:29' */
        }
        else
        {
            /* Transition: '<S77>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 3U;

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
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 4U;

            /* Transition: '<S77>:23' */
        }
        else
        {
            /* Transition: '<S77>:46' */
            /* Transition: '<S77>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S23>/Poke' */
            /* FunctionCaller: '<S78>/Function Caller' */
            /* Event: '<S77>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrUnderVolt_PokeTAIR_b_AGS2_ErrUnderVolt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__mf);

            /* End of Outputs for SubSystem: '<S23>/Poke' */
        }
    }

    /* End of Chart: '<S74>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_AGS2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_AGS2_ErrSts'
     */
    /* Transition: '<S77>:19' */
    rtb_TmpSignalConversionAtVeLI_l =
        Rte_Read_VeLINR_b_RsErr_AGS2_VeLINR_b_RsErr_AGS2
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_AGS2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S82>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_AGS2TO_VeLINR_b_RsErr_AGS2TO(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S79>/Chart' */
    if (tmpRead_7)
    {
        /* Transition: '<S82>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S82>:6' */
            /* Transition: '<S82>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_AGS2_CallStatus = 2U;

            /* Event: '<S82>:39' */
            /* Transition: '<S82>:29' */
        }
        else
        {
            /* Transition: '<S82>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_AGS2_CallStatus = 3U;

            /* Event: '<S82>:40' */
        }

        /* Transition: '<S82>:36' */
        /* Transition: '<S82>:23' */
    }
    else
    {
        /* Transition: '<S82>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_l) == 133)
        {
            /* Transition: '<S82>:33' */
            /* Transition: '<S82>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_AGS2_CallStatus = 4U;

            /* Transition: '<S82>:23' */
        }
        else
        {
            /* Transition: '<S82>:46' */
            /* Transition: '<S82>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_AGS2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S24>/Poke' */
            /* FunctionCaller: '<S83>/Function Caller' */
            /* Event: '<S82>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ResErr_PokeTAIR_b_AGS2_ResErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_R);

            /* End of Outputs for SubSystem: '<S24>/Poke' */
        }
    }

    /* End of Chart: '<S79>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_AIR_PRE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_AIR_PRE_ERR_ErrSts'
     */
    /* Transition: '<S82>:19' */
    rtb_TmpSignalConversionAtVeLI_g =
        Rte_Read_VeLINR_e_AHP_AIR_PRE_ERR_VeLINR_e_AHP_AIR_PRE_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_AIR_PRE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S105>:1' */
    (void)Rte_Read_VeLINR_b_AHP_AIR_PRE_ERR_TO_VeLINR_b_AHP_AIR_PRE_ERR_TO
        (&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S101>/Chart' */
    if (tmpRead_8)
    {
        /* Transition: '<S105>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S105>:6' */
            /* Transition: '<S105>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S84>/Fsft' */
            /* FunctionCaller: '<S106>/Function Caller' */
            /* Event: '<S105>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPmpAirPrsntErr_FsftPMIR_b_HTAuxPmpAirPrsntErr
                ();

            /* End of Outputs for SubSystem: '<S84>/Fsft' */
            /* Transition: '<S105>:29' */
        }
        else
        {
            /* Transition: '<S105>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 3U;

            /* Event: '<S105>:40' */
        }

        /* Transition: '<S105>:36' */
        /* Transition: '<S105>:23' */
    }
    else
    {
        /* Transition: '<S105>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 133)
        {
            /* Transition: '<S105>:33' */
            /* Transition: '<S105>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 4U;

            /* Transition: '<S105>:23' */
        }
        else
        {
            /* Transition: '<S105>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 1)
            {
                /* Transition: '<S105>:48' */
                /* Transition: '<S105>:53' */
                FA_out_c3 = true;

                /* Transition: '<S105>:56' */
            }
            else
            {
                /* Transition: '<S105>:52' */
                FA_out_c3 = false;
            }

            /* Transition: '<S105>:37' */
            /* Call Poke */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S84>/Poke' */
            /* FunctionCaller: '<S107>/Function Caller' */
            /* Event: '<S105>:38' */
            Rte_Call_PokePMIR_e_HTAuxPmpAirPrsntErr_PokePMIR_e_HTAuxPmpAirPrsntErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_b, FA_out_c3);

            /* End of Outputs for SubSystem: '<S84>/Poke' */
        }
    }

    /* End of Chart: '<S101>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_CURR_ErrSts'
     */
    /* Transition: '<S105>:19' */
    rtb_TmpSignalConversionAtVeL_k4 =
        Rte_Read_VeLINR_I_AHP_CURR_VeLINR_I_AHP_CURR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S112>:1' */
    (void)Rte_Read_VeLINR_b_AHP_CURR_TO_VeLINR_b_AHP_CURR_TO(&FA_out_kt);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S108>/Chart' */
    if (FA_out_kt)
    {
        /* Transition: '<S112>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S112>:6' */
            /* Transition: '<S112>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S85>/Fsft' */
            /* FunctionCaller: '<S113>/Function Caller' */
            /* Event: '<S112>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpCrnt_FsftPMIR_b_HT_AuxPmpCrnt();

            /* End of Outputs for SubSystem: '<S85>/Fsft' */
            /* Transition: '<S112>:29' */
        }
        else
        {
            /* Transition: '<S112>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_CURR_CallStatus = 3U;

            /* Event: '<S112>:40' */
        }

        /* Transition: '<S112>:36' */
        /* Transition: '<S112>:23' */
    }
    else
    {
        /* Transition: '<S112>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_k4) == 133)
        {
            /* Transition: '<S112>:33' */
            /* Transition: '<S112>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_CURR_CallStatus = 4U;

            /* Transition: '<S112>:23' */
        }
        else
        {
            /* Transition: '<S112>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_k4) == 1)
            {
                /* Transition: '<S112>:48' */
                /* Transition: '<S112>:53' */
                FA_out_kt = true;

                /* Transition: '<S112>:56' */
            }
            else
            {
                /* Transition: '<S112>:52' */
            }

            /* Transition: '<S112>:37' */
            /* Call Poke */
            VeLINR_y_AHP_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S85>/Poke' */
            /* FunctionCaller: '<S114>/Function Caller' */
            /* Event: '<S112>:38' */
            Rte_Call_PokePMIR_I_HT_AuxPmpCrnt_PokePMIR_I_HT_AuxPmpCrnt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_A, FA_out_kt);

            /* End of Outputs for SubSystem: '<S85>/Poke' */
        }
    }

    /* End of Chart: '<S108>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_DBLK_ACTV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_DBLK_ACTV_ErrSts'
     */
    /* Transition: '<S112>:19' */
    rtb_TmpSignalConversionAtVeL_hc =
        Rte_Read_VeLINR_e_AHP_DBLK_ACTV_VeLINR_e_AHP_DBLK_ACTV
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_DBLK_ACTV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S119>:1' */
    (void)Rte_Read_VeLINR_b_AHP_DBLK_ACTV_TO_VeLINR_b_AHP_DBLK_ACTV_TO
        (&FA_out_cq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S115>/Chart' */
    if (FA_out_cq)
    {
        /* Transition: '<S119>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S119>:6' */
            /* Transition: '<S119>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S86>/Fsft' */
            /* FunctionCaller: '<S120>/Function Caller' */
            /* Event: '<S119>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpDeblock_FsftPMIR_b_HTAuxPumpDeblock();

            /* End of Outputs for SubSystem: '<S86>/Fsft' */
            /* Transition: '<S119>:29' */
        }
        else
        {
            /* Transition: '<S119>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 3U;

            /* Event: '<S119>:40' */
        }

        /* Transition: '<S119>:36' */
        /* Transition: '<S119>:23' */
    }
    else
    {
        /* Transition: '<S119>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hc) == 133)
        {
            /* Transition: '<S119>:33' */
            /* Transition: '<S119>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 4U;

            /* Transition: '<S119>:23' */
        }
        else
        {
            /* Transition: '<S119>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hc) == 1)
            {
                /* Transition: '<S119>:48' */
                /* Transition: '<S119>:53' */
                FA_out_cq = true;

                /* Transition: '<S119>:56' */
            }
            else
            {
                /* Transition: '<S119>:52' */
            }

            /* Transition: '<S119>:37' */
            /* Call Poke */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S86>/Poke' */
            /* FunctionCaller: '<S121>/Function Caller' */
            /* Event: '<S119>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpDeblock_PokePMIR_e_HTAuxPumpDeblock
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_n, FA_out_cq);

            /* End of Outputs for SubSystem: '<S86>/Poke' */
        }
    }

    /* End of Chart: '<S115>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_DR_RN_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_DR_RN_ERR_ErrSts'
     */
    /* Transition: '<S119>:19' */
    rtb_TmpSignalConversionAtVeLI_i =
        Rte_Read_VeLINR_e_AHP_DR_RN_ERR_VeLINR_e_AHP_DR_RN_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__n0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_DR_RN_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S126>:1' */
    (void)Rte_Read_VeLINR_b_AHP_DR_RN_ERR_TO_VeLINR_b_AHP_DR_RN_ERR_TO
        (&FA_out_hi);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S122>/Chart' */
    if (FA_out_hi)
    {
        /* Transition: '<S126>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S126>:6' */
            /* Transition: '<S126>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S87>/Fsft' */
            /* FunctionCaller: '<S127>/Function Caller' */
            /* Event: '<S126>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpDryRun_FsftPMIR_b_HTAuxPumpDryRun();

            /* End of Outputs for SubSystem: '<S87>/Fsft' */
            /* Transition: '<S126>:29' */
        }
        else
        {
            /* Transition: '<S126>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 3U;

            /* Event: '<S126>:40' */
        }

        /* Transition: '<S126>:36' */
        /* Transition: '<S126>:23' */
    }
    else
    {
        /* Transition: '<S126>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 133)
        {
            /* Transition: '<S126>:33' */
            /* Transition: '<S126>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 4U;

            /* Transition: '<S126>:23' */
        }
        else
        {
            /* Transition: '<S126>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 1)
            {
                /* Transition: '<S126>:48' */
                /* Transition: '<S126>:53' */
                FA_out_hi = true;

                /* Transition: '<S126>:56' */
            }
            else
            {
                /* Transition: '<S126>:52' */
            }

            /* Transition: '<S126>:37' */
            /* Call Poke */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S87>/Poke' */
            /* FunctionCaller: '<S128>/Function Caller' */
            /* Event: '<S126>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpDryRun_PokePMIR_e_HTAuxPumpDryRun
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__n0, FA_out_hi);

            /* End of Outputs for SubSystem: '<S87>/Poke' */
        }
    }

    /* End of Chart: '<S122>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_FL_SAFE_ACTVTD_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_FL_SAFE_ACTVTD_ErrSts'
     */
    /* Transition: '<S126>:19' */
    rtb_TmpSignalConversionAtVeLI_n =
        Rte_Read_VeLINR_e_AHP_FL_SAFE_ACTVTD_VeLINR_e_AHP_FL_SAFE_ACTVTD
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_FL_SAFE_ACTVTD_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S133>:1' */
    (void)Rte_Read_VeLINR_b_AHP_FL_SAFE_ACTVTD_TO_VeLINR_b_AHP_FL_SAFE_ACTVTD_TO
        (&FA_out_oxp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S129>/Chart' */
    if (FA_out_oxp)
    {
        /* Transition: '<S133>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S133>:6' */
            /* Transition: '<S133>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S88>/Fsft' */
            /* FunctionCaller: '<S134>/Function Caller' */
            /* Event: '<S133>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpFailsafe_FsftPMIR_b_HTAuxPumpFailsafe();

            /* End of Outputs for SubSystem: '<S88>/Fsft' */
            /* Transition: '<S133>:29' */
        }
        else
        {
            /* Transition: '<S133>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 3U;

            /* Event: '<S133>:40' */
        }

        /* Transition: '<S133>:36' */
        /* Transition: '<S133>:23' */
    }
    else
    {
        /* Transition: '<S133>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_n) == 133)
        {
            /* Transition: '<S133>:33' */
            /* Transition: '<S133>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 4U;

            /* Transition: '<S133>:23' */
        }
        else
        {
            /* Transition: '<S133>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_n) == 1)
            {
                /* Transition: '<S133>:48' */
                /* Transition: '<S133>:53' */
                FA_out_oxp = true;

                /* Transition: '<S133>:56' */
            }
            else
            {
                /* Transition: '<S133>:52' */
            }

            /* Transition: '<S133>:37' */
            /* Call Poke */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S88>/Poke' */
            /* FunctionCaller: '<S135>/Function Caller' */
            /* Event: '<S133>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpFailsafe_PokePMIR_e_HTAuxPumpFailsafe
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_i, FA_out_oxp);

            /* End of Outputs for SubSystem: '<S88>/Poke' */
        }
    }

    /* End of Chart: '<S129>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S133>:19' */
    rtb_TmpSignalConversionAtVeLI_m =
        Rte_Read_VeLINR_e_AHP_LMP_HM_AN_ON_VeLINR_e_AHP_LMP_HM_AN_ON
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__no);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S140>:1' */
    (void)Rte_Read_VeLINR_b_AHP_LMP_HM_AN_ON_TO_VeLINR_b_AHP_LMP_HM_AN_ON_TO
        (&FA_out_p0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S136>/Chart' */
    if (FA_out_p0)
    {
        /* Transition: '<S140>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S140>:6' */
            /* Transition: '<S140>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S89>/Fsft' */
            /* FunctionCaller: '<S141>/Function Caller' */
            /* Event: '<S140>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPump_LmpHM_FsftPMIR_b_HTAuxPump_LmpHM();

            /* End of Outputs for SubSystem: '<S89>/Fsft' */
            /* Transition: '<S140>:29' */
        }
        else
        {
            /* Transition: '<S140>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S140>:40' */
        }

        /* Transition: '<S140>:36' */
        /* Transition: '<S140>:23' */
    }
    else
    {
        /* Transition: '<S140>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 133)
        {
            /* Transition: '<S140>:33' */
            /* Transition: '<S140>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S140>:23' */
        }
        else
        {
            /* Transition: '<S140>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 1)
            {
                /* Transition: '<S140>:48' */
                /* Transition: '<S140>:53' */
                FA_out_p0 = true;

                /* Transition: '<S140>:56' */
            }
            else
            {
                /* Transition: '<S140>:52' */
            }

            /* Transition: '<S140>:37' */
            /* Call Poke */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S89>/Poke' */
            /* FunctionCaller: '<S142>/Function Caller' */
            /* Event: '<S140>:38' */
            Rte_Call_PokePMIR_e_HTAuxPump_LmpHM_PokePMIR_e_HTAuxPump_LmpHM
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__no, FA_out_p0);

            /* End of Outputs for SubSystem: '<S89>/Poke' */
        }
    }

    /* End of Chart: '<S136>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S140>:19' */
    rtb_TmpSignalConversionAtVeLI_f =
        Rte_Read_VeLINR_e_AHP_MONTRNG_RPM_VeLINR_e_AHP_MONTRNG_RPM
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S147>:1' */
    (void)Rte_Read_VeLINR_b_AHP_MONTRNG_RPM_TO_VeLINR_b_AHP_MONTRNG_RPM_TO
        (&FA_out_fc);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S143>/Chart' */
    if (FA_out_fc)
    {
        /* Transition: '<S147>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S147>:6' */
            /* Transition: '<S147>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S90>/Fsft' */
            /* FunctionCaller: '<S148>/Function Caller' */
            /* Event: '<S147>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpMntrRPM_FsftPMIR_b_HT_AuxPmpMntrRPM();

            /* End of Outputs for SubSystem: '<S90>/Fsft' */
            /* Transition: '<S147>:29' */
        }
        else
        {
            /* Transition: '<S147>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S147>:40' */
        }

        /* Transition: '<S147>:36' */
        /* Transition: '<S147>:23' */
    }
    else
    {
        /* Transition: '<S147>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 133)
        {
            /* Transition: '<S147>:33' */
            /* Transition: '<S147>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S147>:23' */
        }
        else
        {
            /* Transition: '<S147>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 1)
            {
                /* Transition: '<S147>:48' */
                /* Transition: '<S147>:53' */
                FA_out_fc = true;

                /* Transition: '<S147>:56' */
            }
            else
            {
                /* Transition: '<S147>:52' */
            }

            /* Transition: '<S147>:37' */
            /* Call Poke */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S90>/Poke' */
            /* FunctionCaller: '<S149>/Function Caller' */
            /* Event: '<S147>:38' */
            Rte_Call_PokePMIR_e_HT_AuxPmpMntrRPM_PokePMIR_e_HT_AuxPmpMntrRPM
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_h, FA_out_fc);

            /* End of Outputs for SubSystem: '<S90>/Poke' */
        }
    }

    /* End of Chart: '<S143>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_NODE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_NODE_ERR_ErrSts'
     */
    /* Transition: '<S147>:19' */
    rtb_TmpSignalConversionAtVeL_o1 =
        Rte_Read_VeLINR_e_AHP_NODE_ERR_VeLINR_e_AHP_NODE_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__hx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_NODE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S154>:1' */
    (void)Rte_Read_VeLINR_b_AHP_NODE_ERR_TO_VeLINR_b_AHP_NODE_ERR_TO(&FA_out_bk);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S150>/Chart' */
    if (FA_out_bk)
    {
        /* Transition: '<S154>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S154>:6' */
            /* Transition: '<S154>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S91>/Fsft' */
            /* FunctionCaller: '<S155>/Function Caller' */
            /* Event: '<S154>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpNodeErr_FsftPMIR_b_HTAuxPumpNodeErr();

            /* End of Outputs for SubSystem: '<S91>/Fsft' */
            /* Transition: '<S154>:29' */
        }
        else
        {
            /* Transition: '<S154>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 3U;

            /* Event: '<S154>:40' */
        }

        /* Transition: '<S154>:36' */
        /* Transition: '<S154>:23' */
    }
    else
    {
        /* Transition: '<S154>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_o1) == 133)
        {
            /* Transition: '<S154>:33' */
            /* Transition: '<S154>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 4U;

            /* Transition: '<S154>:23' */
        }
        else
        {
            /* Transition: '<S154>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_o1) == 1)
            {
                /* Transition: '<S154>:48' */
                /* Transition: '<S154>:53' */
                FA_out_bk = true;

                /* Transition: '<S154>:56' */
            }
            else
            {
                /* Transition: '<S154>:52' */
            }

            /* Transition: '<S154>:37' */
            /* Call Poke */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S91>/Poke' */
            /* FunctionCaller: '<S156>/Function Caller' */
            /* Event: '<S154>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpNodeErr_PokePMIR_e_HTAuxPumpNodeErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__hx, FA_out_bk);

            /* End of Outputs for SubSystem: '<S91>/Poke' */
        }
    }

    /* End of Chart: '<S150>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_OVR_CUR_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_OVR_CUR_ERR_ErrSts'
     */
    /* Transition: '<S154>:19' */
    rtb_TmpSignalConversionAtVeLI_c =
        Rte_Read_VeLINR_e_AHP_OVR_CUR_ERR_VeLINR_e_AHP_OVR_CUR_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_OVR_CUR_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S161>:1' */
    (void)Rte_Read_VeLINR_b_AHP_OVR_CUR_ERR_TO_VeLINR_b_AHP_OVR_CUR_ERR_TO
        (&FA_out_fq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S157>/Chart' */
    if (FA_out_fq)
    {
        /* Transition: '<S161>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S161>:6' */
            /* Transition: '<S161>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S92>/Fsft' */
            /* FunctionCaller: '<S162>/Function Caller' */
            /* Event: '<S161>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpOvrCrnt_FsftPMIR_b_HTAuxPumpOvrCrnt();

            /* End of Outputs for SubSystem: '<S92>/Fsft' */
            /* Transition: '<S161>:29' */
        }
        else
        {
            /* Transition: '<S161>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 3U;

            /* Event: '<S161>:40' */
        }

        /* Transition: '<S161>:36' */
        /* Transition: '<S161>:23' */
    }
    else
    {
        /* Transition: '<S161>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 133)
        {
            /* Transition: '<S161>:33' */
            /* Transition: '<S161>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 4U;

            /* Transition: '<S161>:23' */
        }
        else
        {
            /* Transition: '<S161>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 1)
            {
                /* Transition: '<S161>:48' */
                /* Transition: '<S161>:53' */
                FA_out_fq = true;

                /* Transition: '<S161>:56' */
            }
            else
            {
                /* Transition: '<S161>:52' */
            }

            /* Transition: '<S161>:37' */
            /* Call Poke */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S92>/Poke' */
            /* FunctionCaller: '<S163>/Function Caller' */
            /* Event: '<S161>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpOvrCrnt_PokePMIR_e_HTAuxPumpOvrCrnt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_m, FA_out_fq);

            /* End of Outputs for SubSystem: '<S92>/Poke' */
        }
    }

    /* End of Chart: '<S157>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_OVR_TMP_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_OVR_TMP_ERR_ErrSts'
     */
    /* Transition: '<S161>:19' */
    rtb_TmpSignalConversionAtVeL_mx =
        Rte_Read_VeLINR_e_AHP_OVR_TMP_ERR_VeLINR_e_AHP_OVR_TMP_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__nm);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_OVR_TMP_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S168>:1' */
    (void)Rte_Read_VeLINR_b_AHP_OVR_TMP_ERR_TO_VeLINR_b_AHP_OVR_TMP_ERR_TO
        (&FA_out_pw);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S164>/Chart' */
    if (FA_out_pw)
    {
        /* Transition: '<S168>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S168>:6' */
            /* Transition: '<S168>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S93>/Fsft' */
            /* FunctionCaller: '<S169>/Function Caller' */
            /* Event: '<S168>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpOT_FsftPMIR_b_HT_AuxPmpOT();

            /* End of Outputs for SubSystem: '<S93>/Fsft' */
            /* Transition: '<S168>:29' */
        }
        else
        {
            /* Transition: '<S168>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 3U;

            /* Event: '<S168>:40' */
        }

        /* Transition: '<S168>:36' */
        /* Transition: '<S168>:23' */
    }
    else
    {
        /* Transition: '<S168>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mx) == 133)
        {
            /* Transition: '<S168>:33' */
            /* Transition: '<S168>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 4U;

            /* Transition: '<S168>:23' */
        }
        else
        {
            /* Transition: '<S168>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mx) == 1)
            {
                /* Transition: '<S168>:48' */
                /* Transition: '<S168>:53' */
                FA_out_pw = true;

                /* Transition: '<S168>:56' */
            }
            else
            {
                /* Transition: '<S168>:52' */
            }

            /* Transition: '<S168>:37' */
            /* Call Poke */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S93>/Poke' */
            /* FunctionCaller: '<S170>/Function Caller' */
            /* Event: '<S168>:38' */
            Rte_Call_PokePMIR_e_HT_AuxPmpOT_PokePMIR_e_HT_AuxPmpOT
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__nm, FA_out_pw);

            /* End of Outputs for SubSystem: '<S93>/Poke' */
        }
    }

    /* End of Chart: '<S164>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S168>:19' */
    rtb_TmpSignalConversionAtVeL_iv =
        Rte_Read_VeLINR_e_AHP_POST_RUN_STAT_VeLINR_e_AHP_POST_RUN_STAT
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__bw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S175>:1' */
    (void)Rte_Read_VeLINR_b_AHP_POST_RUN_STAT_TO_VeLINR_b_AHP_POST_RUN_STAT_TO
        (&FA_out_m1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S171>/Chart' */
    if (FA_out_m1)
    {
        /* Transition: '<S175>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S175>:6' */
            /* Transition: '<S175>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S94>/Fsft' */
            /* FunctionCaller: '<S176>/Function Caller' */
            /* Event: '<S175>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmp_PstRnSt_FsftPMIR_b_HT_AuxPmp_PstRnSt();

            /* End of Outputs for SubSystem: '<S94>/Fsft' */
            /* Transition: '<S175>:29' */
        }
        else
        {
            /* Transition: '<S175>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S175>:40' */
        }

        /* Transition: '<S175>:36' */
        /* Transition: '<S175>:23' */
    }
    else
    {
        /* Transition: '<S175>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_iv) == 133)
        {
            /* Transition: '<S175>:33' */
            /* Transition: '<S175>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S175>:23' */
        }
        else
        {
            /* Transition: '<S175>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_iv) == 1)
            {
                /* Transition: '<S175>:48' */
                /* Transition: '<S175>:53' */
                FA_out_m1 = true;

                /* Transition: '<S175>:56' */
            }
            else
            {
                /* Transition: '<S175>:52' */
            }

            /* Transition: '<S175>:37' */
            /* Call Poke */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S94>/Poke' */
            /* FunctionCaller: '<S177>/Function Caller' */
            /* Event: '<S175>:38' */
            Rte_Call_PokePMIR_e_HT_AuxPmp_PstRnSt_PokePMIR_e_HT_AuxPmp_PstRnSt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__bw, FA_out_m1);

            /* End of Outputs for SubSystem: '<S94>/Poke' */
        }
    }

    /* End of Chart: '<S171>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_RPM_ACTL_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_RPM_ACTL_PERCT_ErrSts'
     */
    /* Transition: '<S175>:19' */
    rtb_TmpSignalConversionAtVeL_lg =
        Rte_Read_VeLINR_Pct_AHP_RPM_ACTL_PERCT_VeLINR_Pct_AHP_RPM_ACTL_PERCT
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_RPM_ACTL_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S182>:1' */
    (void)Rte_Read_VeLINR_b_AHP_RPM_ACTL_PERCT_TO_VeLINR_b_AHP_RPM_ACTL_PERCT_TO
        (&FA_out_kiz);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S178>/Chart' */
    if (FA_out_kiz)
    {
        /* Transition: '<S182>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S182>:6' */
            /* Transition: '<S182>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S95>/Fsft' */
            /* FunctionCaller: '<S183>/Function Caller' */
            /* Event: '<S182>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpRPMActPct_FsftPMIR_b_HTAuxPumpRPMActPct
                ();

            /* End of Outputs for SubSystem: '<S95>/Fsft' */
            /* Transition: '<S182>:29' */
        }
        else
        {
            /* Transition: '<S182>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 3U;

            /* Event: '<S182>:40' */
        }

        /* Transition: '<S182>:36' */
        /* Transition: '<S182>:23' */
    }
    else
    {
        /* Transition: '<S182>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lg) == 133)
        {
            /* Transition: '<S182>:33' */
            /* Transition: '<S182>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 4U;

            /* Transition: '<S182>:23' */
        }
        else
        {
            /* Transition: '<S182>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_lg) == 1)
            {
                /* Transition: '<S182>:48' */
                /* Transition: '<S182>:53' */
                FA_out_kiz = true;

                /* Transition: '<S182>:56' */
            }
            else
            {
                /* Transition: '<S182>:52' */
            }

            /* Transition: '<S182>:37' */
            /* Call Poke */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S95>/Poke' */
            /* FunctionCaller: '<S184>/Function Caller' */
            /* Event: '<S182>:38' */
            Rte_Call_PokePMIR_Pct_HTAuxPumpRPMAct_PokePMIR_Pct_HTAuxPumpRPMAct
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_Pct, FA_out_kiz);

            /* End of Outputs for SubSystem: '<S95>/Poke' */
        }
    }

    /* End of Chart: '<S178>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_RPM_TGT_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_RPM_TGT_PERCT_ErrSts'
     */
    /* Transition: '<S182>:19' */
    rtb_TmpSignalConversionAtVeL_fz =
        Rte_Read_VeLINR_Pct_AHP_RPM_TGT_PERCT_VeLINR_Pct_AHP_RPM_TGT_PERCT
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_RPM_TGT_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S189>:1' */
    (void)Rte_Read_VeLINR_b_AHP_RPM_TGT_PERCT_TO_VeLINR_b_AHP_RPM_TGT_PERCT_TO
        (&FA_out_pp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S185>/Chart' */
    if (FA_out_pp)
    {
        /* Transition: '<S189>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S189>:6' */
            /* Transition: '<S189>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S96>/Fsft' */
            /* FunctionCaller: '<S190>/Function Caller' */
            /* Event: '<S189>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpRPMTgtPct_FsftPMIR_b_HTAuxPumpRPMTgtPct
                ();

            /* End of Outputs for SubSystem: '<S96>/Fsft' */
            /* Transition: '<S189>:29' */
        }
        else
        {
            /* Transition: '<S189>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 3U;

            /* Event: '<S189>:40' */
        }

        /* Transition: '<S189>:36' */
        /* Transition: '<S189>:23' */
    }
    else
    {
        /* Transition: '<S189>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fz) == 133)
        {
            /* Transition: '<S189>:33' */
            /* Transition: '<S189>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 4U;

            /* Transition: '<S189>:23' */
        }
        else
        {
            /* Transition: '<S189>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fz) == 1)
            {
                /* Transition: '<S189>:48' */
                /* Transition: '<S189>:53' */
                FA_out_pp = true;

                /* Transition: '<S189>:56' */
            }
            else
            {
                /* Transition: '<S189>:52' */
            }

            /* Transition: '<S189>:37' */
            /* Call Poke */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S96>/Poke' */
            /* FunctionCaller: '<S191>/Function Caller' */
            /* Event: '<S189>:38' */
            Rte_Call_PokePMIR_Pct_HTAuxPumpRPMTgt_PokePMIR_Pct_HTAuxPumpRPMTgt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_c, FA_out_pp);

            /* End of Outputs for SubSystem: '<S96>/Poke' */
        }
    }

    /* End of Chart: '<S185>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_TEMP_ErrSts'
     */
    /* Transition: '<S189>:19' */
    rtb_TmpSignalConversionAtVeL_pp =
        Rte_Read_VeLINR_T_AHP_TEMP_VeLINR_T_AHP_TEMP
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S196>:1' */
    (void)Rte_Read_VeLINR_b_AHP_TEMP_TO_VeLINR_b_AHP_TEMP_TO(&FA_out_lf);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S192>/Chart' */
    if (FA_out_lf)
    {
        /* Transition: '<S196>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S196>:6' */
            /* Transition: '<S196>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S97>/Fsft' */
            /* FunctionCaller: '<S197>/Function Caller' */
            /* Event: '<S196>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpTemp_FsftPMIR_b_HT_AuxPmpTemp();

            /* End of Outputs for SubSystem: '<S97>/Fsft' */
            /* Transition: '<S196>:29' */
        }
        else
        {
            /* Transition: '<S196>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_TEMP_CallStatus = 3U;

            /* Event: '<S196>:40' */
        }

        /* Transition: '<S196>:36' */
        /* Transition: '<S196>:23' */
    }
    else
    {
        /* Transition: '<S196>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pp) == 133)
        {
            /* Transition: '<S196>:33' */
            /* Transition: '<S196>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_TEMP_CallStatus = 4U;

            /* Transition: '<S196>:23' */
        }
        else
        {
            /* Transition: '<S196>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pp) == 1)
            {
                /* Transition: '<S196>:48' */
                /* Transition: '<S196>:53' */
                FA_out_lf = true;

                /* Transition: '<S196>:56' */
            }
            else
            {
                /* Transition: '<S196>:52' */
            }

            /* Transition: '<S196>:37' */
            /* Call Poke */
            VeLINR_y_AHP_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S97>/Poke' */
            /* FunctionCaller: '<S198>/Function Caller' */
            /* Event: '<S196>:38' */
            Rte_Call_PokePMIR_T_HT_AuxPmpTemp_PokePMIR_T_HT_AuxPmpTemp
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_A, FA_out_lf);

            /* End of Outputs for SubSystem: '<S97>/Poke' */
        }
    }

    /* End of Chart: '<S192>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_VLTG_ErrSts'
     */
    /* Transition: '<S196>:19' */
    rtb_TmpSignalConversionAtVeL_i5 =
        Rte_Read_VeLINR_U_AHP_VLTG_VeLINR_U_AHP_VLTG
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S203>:1' */
    (void)Rte_Read_VeLINR_b_AHP_VLTG_TO_VeLINR_b_AHP_VLTG_TO(&FA_out_a1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S199>/Chart' */
    if (FA_out_a1)
    {
        /* Transition: '<S203>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S203>:6' */
            /* Transition: '<S203>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S98>/Fsft' */
            /* FunctionCaller: '<S204>/Function Caller' */
            /* Event: '<S203>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpVltg_FsftPMIR_b_HT_AuxPmpVltg();

            /* End of Outputs for SubSystem: '<S98>/Fsft' */
            /* Transition: '<S203>:29' */
        }
        else
        {
            /* Transition: '<S203>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_VLTG_CallStatus = 3U;

            /* Event: '<S203>:40' */
        }

        /* Transition: '<S203>:36' */
        /* Transition: '<S203>:23' */
    }
    else
    {
        /* Transition: '<S203>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_i5) == 133)
        {
            /* Transition: '<S203>:33' */
            /* Transition: '<S203>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_VLTG_CallStatus = 4U;

            /* Transition: '<S203>:23' */
        }
        else
        {
            /* Transition: '<S203>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_i5) == 1)
            {
                /* Transition: '<S203>:48' */
                /* Transition: '<S203>:53' */
                FA_out_a1 = true;

                /* Transition: '<S203>:56' */
            }
            else
            {
                /* Transition: '<S203>:52' */
            }

            /* Transition: '<S203>:37' */
            /* Call Poke */
            VeLINR_y_AHP_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S98>/Poke' */
            /* FunctionCaller: '<S205>/Function Caller' */
            /* Event: '<S203>:38' */
            Rte_Call_PokePMIR_U_HT_AuxPmpVltg_PokePMIR_U_HT_AuxPmpVltg
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_A, FA_out_a1);

            /* End of Outputs for SubSystem: '<S98>/Poke' */
        }
    }

    /* End of Chart: '<S199>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_VLTG_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_VLTG_ERR_ErrSts'
     */
    /* Transition: '<S203>:19' */
    rtb_TmpSignalConversionAtVeLI_j =
        Rte_Read_VeLINR_e_AHP_VLTG_ERR_VeLINR_e_AHP_VLTG_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_VLTG_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S210>:1' */
    (void)Rte_Read_VeLINR_b_AHP_VLTG_ERR_TO_VeLINR_b_AHP_VLTG_ERR_TO(&FA_out_av);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S206>/Chart' */
    if (FA_out_av)
    {
        /* Transition: '<S210>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S210>:6' */
            /* Transition: '<S210>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S99>/Fsft' */
            /* FunctionCaller: '<S211>/Function Caller' */
            /* Event: '<S210>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpSuppVltErr_FsftPMIR_b_HTAuxPumpSuppVltErr
                ();

            /* End of Outputs for SubSystem: '<S99>/Fsft' */
            /* Transition: '<S210>:29' */
        }
        else
        {
            /* Transition: '<S210>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 3U;

            /* Event: '<S210>:40' */
        }

        /* Transition: '<S210>:36' */
        /* Transition: '<S210>:23' */
    }
    else
    {
        /* Transition: '<S210>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 133)
        {
            /* Transition: '<S210>:33' */
            /* Transition: '<S210>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 4U;

            /* Transition: '<S210>:23' */
        }
        else
        {
            /* Transition: '<S210>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 1)
            {
                /* Transition: '<S210>:48' */
                /* Transition: '<S210>:53' */
                FA_out_av = true;

                /* Transition: '<S210>:56' */
            }
            else
            {
                /* Transition: '<S210>:52' */
            }

            /* Transition: '<S210>:37' */
            /* Call Poke */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S99>/Poke' */
            /* FunctionCaller: '<S212>/Function Caller' */
            /* Event: '<S210>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpSuppVltErr_PokePMIR_e_HTAuxPumpSuppVltErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_c, FA_out_av);

            /* End of Outputs for SubSystem: '<S99>/Poke' */
        }
    }

    /* End of Chart: '<S206>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_AHP_PUMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_AHP_PUMP_ErrSts'
     */
    /* Transition: '<S210>:19' */
    rtb_TmpSignalConversionAtVeL_fh =
        Rte_Read_VeLINR_b_RsErr_AHP_PUMP_VeLINR_b_RsErr_AHP_PUMP
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_AHP_PUMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S216>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_AHP_PUMP_TO_VeLINR_b_RsErr_AHP_PUMP_TO
        (&FA_out_ki);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S213>/Chart' */
    if (FA_out_ki)
    {
        /* Transition: '<S216>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S216>:6' */
            /* Transition: '<S216>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 2U;

            /* Event: '<S216>:39' */
            /* Transition: '<S216>:29' */
        }
        else
        {
            /* Transition: '<S216>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 3U;

            /* Event: '<S216>:40' */
        }

        /* Transition: '<S216>:36' */
        /* Transition: '<S216>:23' */
    }
    else
    {
        /* Transition: '<S216>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fh) == 133)
        {
            /* Transition: '<S216>:33' */
            /* Transition: '<S216>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 4U;

            /* Transition: '<S216>:23' */
        }
        else
        {
            /* Transition: '<S216>:46' */
            /* Transition: '<S216>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S100>/Poke' */
            /* FunctionCaller: '<S217>/Function Caller' */
            /* Event: '<S216>:38' */
            Rte_Call_PokePMIR_b_HTAuxPumpRespErr_PokePMIR_b_HTAuxPumpRespErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_g);

            /* End of Outputs for SubSystem: '<S100>/Poke' */
        }
    }

    /* End of Chart: '<S213>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_SUPPLIER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_SUPPLIER_ErrSts'
     */
    /* Transition: '<S216>:19' */
    rtb_TmpSignalConversionAtVeL_ht =
        Rte_Read_VeLINR_e_AHP_SUPPLIER_VeLINR_e_AHP_SUPPLIER
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__cu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_SUPPLIER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S223>:1' */
    (void)Rte_Read_VeLINR_b_AHP_SUPPLIER_TO_VeLINR_b_AHP_SUPPLIER_TO(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S220>/Chart' */
    if (tmpRead_9)
    {
        /* Transition: '<S223>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S223>:6' */
            /* Transition: '<S223>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 2U;

            /* Event: '<S223>:39' */
            /* Transition: '<S223>:29' */
        }
        else
        {
            /* Transition: '<S223>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 3U;

            /* Event: '<S223>:40' */
        }

        /* Transition: '<S223>:36' */
        /* Transition: '<S223>:23' */
    }
    else
    {
        /* Transition: '<S223>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ht) == 133)
        {
            /* Transition: '<S223>:33' */
            /* Transition: '<S223>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 4U;

            /* Transition: '<S223>:23' */
        }
        else
        {
            /* Transition: '<S223>:46' */
            /* Transition: '<S223>:37' */
            /* Call Poke */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S218>/Poke' */
            /* FunctionCaller: '<S224>/Function Caller' */
            /* Event: '<S223>:38' */
            Rte_Call_PokePMIR_e_HTAuxPmpProdSuplr_ID_PokePMIR_e_HTAuxPmpProdSuplr_ID
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__cu);

            /* End of Outputs for SubSystem: '<S218>/Poke' */
        }
    }

    /* End of Chart: '<S220>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_VERSION_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_VERSION_ErrSts'
     */
    /* Transition: '<S223>:19' */
    rtb_TmpSignalConversionAtVeL_gw =
        Rte_Read_VeLINR_y_AHP_VERSION_VeLINR_y_AHP_VERSION
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_y_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_VERSION_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S228>:1' */
    (void)Rte_Read_VeLINR_b_AHP_VERSION_TO_VeLINR_b_AHP_VERSION_TO(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S225>/Chart' */
    if (tmpRead_a)
    {
        /* Transition: '<S228>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S228>:6' */
            /* Transition: '<S228>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_VERSION_CallStatus = 2U;

            /* Event: '<S228>:39' */
            /* Transition: '<S228>:29' */
        }
        else
        {
            /* Transition: '<S228>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_VERSION_CallStatus = 3U;

            /* Event: '<S228>:40' */
        }

        /* Transition: '<S228>:36' */
        /* Transition: '<S228>:23' */
    }
    else
    {
        /* Transition: '<S228>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gw) == 133)
        {
            /* Transition: '<S228>:33' */
            /* Transition: '<S228>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_VERSION_CallStatus = 4U;

            /* Transition: '<S228>:23' */
        }
        else
        {
            /* Transition: '<S228>:46' */
            /* Transition: '<S228>:37' */
            /* Call Poke */
            VeLINR_y_AHP_VERSION_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S219>/Poke' */
            /* DataTypeConversion: '<S229>/Data Type Conversion' */
            /* Event: '<S228>:38' */
            tmp = fmodf(floorf(LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_y_A),
                        256.0F);

            /* FunctionCaller: '<S229>/Function Caller' incorporates:
             *  DataTypeConversion: '<S229>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_HT_AuxPmp_Ver_PokePMIR_y_HT_AuxPmp_Ver((uint8)
                ((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S219>/Poke' */
        }
    }

    /* End of Chart: '<S225>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompBoardTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompBoardTemp_ErrSts'
     */
    /* Transition: '<S228>:19' */
    rtb_TmpSignalConversionAtVeL_f1 =
        Rte_Read_VeLINR_T_CompBoardTemp_VeLINR_T_CompBoardTemp
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompBoardTempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S244>:1' */
    (void)Rte_Read_VeLINR_b_CompBoardTempTO_VeLINR_b_CompBoardTempTO(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S240>/Chart' */
    if (tmpRead_b)
    {
        /* Transition: '<S244>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S244>:6' */
            /* Transition: '<S244>:25' */
            /* Call Fsft */
            VeLINR_y_CompBoardTemp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S230>/Fsft' */
            /* FunctionCaller: '<S245>/Function Caller' */
            /* Event: '<S244>:39' */
            Rte_Call_FsftTAIR_T_CompBoardTemp_FsftTAIR_T_CompBoardTemp();

            /* End of Outputs for SubSystem: '<S230>/Fsft' */
            /* Transition: '<S244>:29' */
        }
        else
        {
            /* Transition: '<S244>:30' */
            /* Call Tmot */
            VeLINR_y_CompBoardTemp_CallStatus = 3U;

            /* Event: '<S244>:40' */
        }

        /* Transition: '<S244>:36' */
        /* Transition: '<S244>:23' */
    }
    else
    {
        /* Transition: '<S244>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_f1) == 133)
        {
            /* Transition: '<S244>:33' */
            /* Transition: '<S244>:35' */
            /* Call Nothing */
            VeLINR_y_CompBoardTemp_CallStatus = 4U;

            /* Transition: '<S244>:23' */
        }
        else
        {
            /* Transition: '<S244>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_f1) == 1)
            {
                /* Transition: '<S244>:48' */
                /* Transition: '<S244>:53' */
                FA_out_ki = true;

                /* Transition: '<S244>:56' */
            }
            else
            {
                /* Transition: '<S244>:52' */
                FA_out_ki = false;
            }

            /* Transition: '<S244>:37' */
            /* Call Poke */
            VeLINR_y_CompBoardTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S230>/Poke' */
            /* FunctionCaller: '<S246>/Function Caller' */
            /* Event: '<S244>:38' */
            Rte_Call_PokeTAIR_T_CompBoardTemp_PokeTAIR_T_CompBoardTemp
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_C, FA_out_ki);

            /* End of Outputs for SubSystem: '<S230>/Poke' */
        }
    }

    /* End of Chart: '<S240>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompElecCurr_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompElecCurr_ErrSts'
     */
    /* Transition: '<S244>:19' */
    rtb_TmpSignalConversionAtVeL_ha =
        Rte_Read_VeLINR_I_CompElecCurr_VeLINR_I_CompElecCurr
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompElecCurrTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S251>:1' */
    (void)Rte_Read_VeLINR_b_CompElecCurrTO_VeLINR_b_CompElecCurrTO(&FA_out_k5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S247>/Chart' */
    if (FA_out_k5)
    {
        /* Transition: '<S251>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S251>:6' */
            /* Transition: '<S251>:25' */
            /* Call Fsft */
            VeLINR_y_CompElecCurr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S231>/Fsft' */
            /* FunctionCaller: '<S252>/Function Caller' */
            /* Event: '<S251>:39' */
            Rte_Call_FsftTAIR_I_ACCElecCurr_FsftTAIR_I_ACCElecCurr();

            /* End of Outputs for SubSystem: '<S231>/Fsft' */
            /* Transition: '<S251>:29' */
        }
        else
        {
            /* Transition: '<S251>:30' */
            /* Call Tmot */
            VeLINR_y_CompElecCurr_CallStatus = 3U;

            /* Event: '<S251>:40' */
        }

        /* Transition: '<S251>:36' */
        /* Transition: '<S251>:23' */
    }
    else
    {
        /* Transition: '<S251>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ha) == 133)
        {
            /* Transition: '<S251>:33' */
            /* Transition: '<S251>:35' */
            /* Call Nothing */
            VeLINR_y_CompElecCurr_CallStatus = 4U;

            /* Transition: '<S251>:23' */
        }
        else
        {
            /* Transition: '<S251>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ha) == 1)
            {
                /* Transition: '<S251>:48' */
                /* Transition: '<S251>:53' */
                FA_out_k5 = true;

                /* Transition: '<S251>:56' */
            }
            else
            {
                /* Transition: '<S251>:52' */
            }

            /* Transition: '<S251>:37' */
            /* Call Poke */
            VeLINR_y_CompElecCurr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S231>/Poke' */
            /* FunctionCaller: '<S253>/Function Caller' */
            /* Event: '<S251>:38' */
            Rte_Call_PokeTAIR_I_ACCElecCurr_PokeTAIR_I_ACCElecCurr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_C, FA_out_k5);

            /* End of Outputs for SubSystem: '<S231>/Poke' */
        }
    }

    /* End of Chart: '<S247>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompElecPwr_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompElecPwr_ErrSts'
     */
    /* Transition: '<S251>:19' */
    rtb_TmpSignalConversionAtVeL_jz =
        Rte_Read_VeLINR_P_CompElecPwr_VeLINR_P_CompElecPwr
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompElecPwrTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S258>:1' */
    (void)Rte_Read_VeLINR_b_CompElecPwrTO_VeLINR_b_CompElecPwrTO(&FA_out_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S254>/Chart' */
    if (FA_out_n)
    {
        /* Transition: '<S258>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S258>:6' */
            /* Transition: '<S258>:25' */
            /* Call Fsft */
            VeLINR_y_CompElecPwr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S232>/Fsft' */
            /* FunctionCaller: '<S259>/Function Caller' */
            /* Event: '<S258>:39' */
            Rte_Call_FsftTAIR_P_ACCompElec_Pwr_FsftTAIR_P_ACCompElec_Pwr();

            /* End of Outputs for SubSystem: '<S232>/Fsft' */
            /* Transition: '<S258>:29' */
        }
        else
        {
            /* Transition: '<S258>:30' */
            /* Call Tmot */
            VeLINR_y_CompElecPwr_CallStatus = 3U;

            /* Event: '<S258>:40' */
        }

        /* Transition: '<S258>:36' */
        /* Transition: '<S258>:23' */
    }
    else
    {
        /* Transition: '<S258>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jz) == 133)
        {
            /* Transition: '<S258>:33' */
            /* Transition: '<S258>:35' */
            /* Call Nothing */
            VeLINR_y_CompElecPwr_CallStatus = 4U;

            /* Transition: '<S258>:23' */
        }
        else
        {
            /* Transition: '<S258>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jz) == 1)
            {
                /* Transition: '<S258>:48' */
                /* Transition: '<S258>:53' */
                FA_out_n = true;

                /* Transition: '<S258>:56' */
            }
            else
            {
                /* Transition: '<S258>:52' */
            }

            /* Transition: '<S258>:37' */
            /* Call Poke */
            VeLINR_y_CompElecPwr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S232>/Poke' */
            /* FunctionCaller: '<S260>/Function Caller' */
            /* Event: '<S258>:38' */
            Rte_Call_PokeTAIR_P_ACCompElec_Pwr_PokeTAIR_P_ACCompElec_Pwr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_C, FA_out_n);

            /* End of Outputs for SubSystem: '<S232>/Poke' */
        }
    }

    /* End of Chart: '<S254>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompFaultStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompFaultStat_ErrSts'
     */
    /* Transition: '<S258>:19' */
    rtb_TmpSignalConversionAtVeL_dl =
        Rte_Read_VeLINR_e_CompFaultStat_VeLINR_e_CompFaultStat
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompFaultStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S265>:1' */
    (void)Rte_Read_VeLINR_b_CompFaultStatTO_VeLINR_b_CompFaultStatTO(&FA_out_pb);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S261>/Chart' */
    if (FA_out_pb)
    {
        /* Transition: '<S265>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S265>:6' */
            /* Transition: '<S265>:25' */
            /* Call Fsft */
            VeLINR_y_CompFaultStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S233>/Fsft' */
            /* FunctionCaller: '<S266>/Function Caller' */
            /* Event: '<S265>:39' */
            Rte_Call_FsftTAIR_e_CompFltStat_FsftTAIR_e_CompFltStat();

            /* End of Outputs for SubSystem: '<S233>/Fsft' */
            /* Transition: '<S265>:29' */
        }
        else
        {
            /* Transition: '<S265>:30' */
            /* Call Tmot */
            VeLINR_y_CompFaultStat_CallStatus = 3U;

            /* Event: '<S265>:40' */
        }

        /* Transition: '<S265>:36' */
        /* Transition: '<S265>:23' */
    }
    else
    {
        /* Transition: '<S265>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dl) == 133)
        {
            /* Transition: '<S265>:33' */
            /* Transition: '<S265>:35' */
            /* Call Nothing */
            VeLINR_y_CompFaultStat_CallStatus = 4U;

            /* Transition: '<S265>:23' */
        }
        else
        {
            /* Transition: '<S265>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dl) == 1)
            {
                /* Transition: '<S265>:48' */
                /* Transition: '<S265>:53' */
                FA_out_pb = true;

                /* Transition: '<S265>:56' */
            }
            else
            {
                /* Transition: '<S265>:52' */
            }

            /* Transition: '<S265>:37' */
            /* Call Poke */
            VeLINR_y_CompFaultStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S233>/Poke' */
            /* FunctionCaller: '<S267>/Function Caller' */
            /* Event: '<S265>:38' */
            Rte_Call_PokeTAIR_e_CompFltStat_PokeTAIR_e_CompFltStat
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_C, FA_out_pb);

            /* End of Outputs for SubSystem: '<S233>/Poke' */
        }
    }

    /* End of Chart: '<S261>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompHVInput_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompHVInput_ErrSts'
     */
    /* Transition: '<S265>:19' */
    rtb_TmpSignalConversionAtVeLI_b =
        Rte_Read_VeLINR_U_CompHVInput_VeLINR_U_CompHVInput
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompHVInputTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S272>:1' */
    (void)Rte_Read_VeLINR_b_CompHVInputTO_VeLINR_b_CompHVInputTO(&FA_out_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S268>/Chart' */
    if (FA_out_f)
    {
        /* Transition: '<S272>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S272>:6' */
            /* Transition: '<S272>:25' */
            /* Call Fsft */
            VeLINR_y_CompHVInput_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S234>/Fsft' */
            /* FunctionCaller: '<S273>/Function Caller' */
            /* Event: '<S272>:39' */
            Rte_Call_FsftTAIR_U_CompHVInput_FsftTAIR_U_CompHVInput();

            /* End of Outputs for SubSystem: '<S234>/Fsft' */
            /* Transition: '<S272>:29' */
        }
        else
        {
            /* Transition: '<S272>:30' */
            /* Call Tmot */
            VeLINR_y_CompHVInput_CallStatus = 3U;

            /* Event: '<S272>:40' */
        }

        /* Transition: '<S272>:36' */
        /* Transition: '<S272>:23' */
    }
    else
    {
        /* Transition: '<S272>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_b) == 133)
        {
            /* Transition: '<S272>:33' */
            /* Transition: '<S272>:35' */
            /* Call Nothing */
            VeLINR_y_CompHVInput_CallStatus = 4U;

            /* Transition: '<S272>:23' */
        }
        else
        {
            /* Transition: '<S272>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_b) == 1)
            {
                /* Transition: '<S272>:48' */
                /* Transition: '<S272>:53' */
                FA_out_f = true;

                /* Transition: '<S272>:56' */
            }
            else
            {
                /* Transition: '<S272>:52' */
            }

            /* Transition: '<S272>:37' */
            /* Call Poke */
            VeLINR_y_CompHVInput_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S234>/Poke' */
            /* FunctionCaller: '<S274>/Function Caller' */
            /* Event: '<S272>:38' */
            Rte_Call_PokeTAIR_U_CompHVInput_PokeTAIR_U_CompHVInput
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_C, FA_out_f);

            /* End of Outputs for SubSystem: '<S234>/Poke' */
        }
    }

    /* End of Chart: '<S268>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompIGBTTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompIGBTTemp_ErrSts'
     */
    /* Transition: '<S272>:19' */
    rtb_TmpSignalConversionAtVeL_bl =
        Rte_Read_VeLINR_T_CompIGBTTemp_VeLINR_T_CompIGBTTemp
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompIGBTTempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S279>:1' */
    (void)Rte_Read_VeLINR_b_CompIGBTTempTO_VeLINR_b_CompIGBTTempTO(&FA_out_hx);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S275>/Chart' */
    if (FA_out_hx)
    {
        /* Transition: '<S279>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S279>:6' */
            /* Transition: '<S279>:25' */
            /* Call Fsft */
            VeLINR_y_CompIGBTTemp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S235>/Fsft' */
            /* FunctionCaller: '<S280>/Function Caller' */
            /* Event: '<S279>:39' */
            Rte_Call_FsftTAIR_T_CompIGBTTemp_FsftTAIR_T_CompIGBTTemp();

            /* End of Outputs for SubSystem: '<S235>/Fsft' */
            /* Transition: '<S279>:29' */
        }
        else
        {
            /* Transition: '<S279>:30' */
            /* Call Tmot */
            VeLINR_y_CompIGBTTemp_CallStatus = 3U;

            /* Event: '<S279>:40' */
        }

        /* Transition: '<S279>:36' */
        /* Transition: '<S279>:23' */
    }
    else
    {
        /* Transition: '<S279>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bl) == 133)
        {
            /* Transition: '<S279>:33' */
            /* Transition: '<S279>:35' */
            /* Call Nothing */
            VeLINR_y_CompIGBTTemp_CallStatus = 4U;

            /* Transition: '<S279>:23' */
        }
        else
        {
            /* Transition: '<S279>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_bl) == 1)
            {
                /* Transition: '<S279>:48' */
                /* Transition: '<S279>:53' */
                FA_out_hx = true;

                /* Transition: '<S279>:56' */
            }
            else
            {
                /* Transition: '<S279>:52' */
            }

            /* Transition: '<S279>:37' */
            /* Call Poke */
            VeLINR_y_CompIGBTTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S235>/Poke' */
            /* FunctionCaller: '<S281>/Function Caller' */
            /* Event: '<S279>:38' */
            Rte_Call_PokeTAIR_T_CompIGBTTemp_PokeTAIR_T_CompIGBTTemp
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_g, FA_out_hx);

            /* End of Outputs for SubSystem: '<S235>/Poke' */
        }
    }

    /* End of Chart: '<S275>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompSpdIncrReq_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompSpdIncrReq_ErrSts'
     */
    /* Transition: '<S279>:19' */
    rtb_TmpSignalConversionAtVeL_ie =
        Rte_Read_VeLINR_b_CompSpdIncrReq_VeLINR_b_CompSpdIncrReq
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompSpdIncrReqTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S285>:1' */
    (void)Rte_Read_VeLINR_b_CompSpdIncrReqTO_VeLINR_b_CompSpdIncrReqTO
        (&FA_out_ee);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S282>/Chart' */
    if (FA_out_ee)
    {
        /* Transition: '<S285>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S285>:6' */
            /* Transition: '<S285>:25' */
            /* Call Fsft */
            VeLINR_y_CompSpdIncrReq_CallStatus = 2U;

            /* Event: '<S285>:39' */
            /* Transition: '<S285>:29' */
        }
        else
        {
            /* Transition: '<S285>:30' */
            /* Call Tmot */
            VeLINR_y_CompSpdIncrReq_CallStatus = 3U;

            /* Event: '<S285>:40' */
        }

        /* Transition: '<S285>:36' */
        /* Transition: '<S285>:23' */
    }
    else
    {
        /* Transition: '<S285>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ie) == 133)
        {
            /* Transition: '<S285>:33' */
            /* Transition: '<S285>:35' */
            /* Call Nothing */
            VeLINR_y_CompSpdIncrReq_CallStatus = 4U;

            /* Transition: '<S285>:23' */
        }
        else
        {
            /* Transition: '<S285>:46' */
            /* Transition: '<S285>:37' */
            /* Call Poke */
            VeLINR_y_CompSpdIncrReq_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S236>/Poke' */
            /* FunctionCaller: '<S286>/Function Caller' */
            /* Event: '<S285>:38' */
            Rte_Call_PokeTAIR_b_CompSpdIncrReq_PokeTAIR_b_CompSpdIncrReq
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_C);

            /* End of Outputs for SubSystem: '<S236>/Poke' */
        }
    }

    /* End of Chart: '<S282>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompStat_ErrSts'
     */
    /* Transition: '<S285>:19' */
    rtb_TmpSignalConversionAtVeL_gg =
        Rte_Read_VeLINR_e_CompStat_VeLINR_e_CompStat
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__fj);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S291>:1' */
    (void)Rte_Read_VeLINR_b_CompStatTO_VeLINR_b_CompStatTO(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S287>/Chart' */
    if (tmpRead_c)
    {
        /* Transition: '<S291>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S291>:6' */
            /* Transition: '<S291>:25' */
            /* Call Fsft */
            VeLINR_y_CompStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S237>/Fsft' */
            /* FunctionCaller: '<S292>/Function Caller' */
            /* Event: '<S291>:39' */
            Rte_Call_FsftTAIR_e_CompStat_FsftTAIR_e_CompStat();

            /* End of Outputs for SubSystem: '<S237>/Fsft' */
            /* Transition: '<S291>:29' */
        }
        else
        {
            /* Transition: '<S291>:30' */
            /* Call Tmot */
            VeLINR_y_CompStat_CallStatus = 3U;

            /* Event: '<S291>:40' */
        }

        /* Transition: '<S291>:36' */
        /* Transition: '<S291>:23' */
    }
    else
    {
        /* Transition: '<S291>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gg) == 133)
        {
            /* Transition: '<S291>:33' */
            /* Transition: '<S291>:35' */
            /* Call Nothing */
            VeLINR_y_CompStat_CallStatus = 4U;

            /* Transition: '<S291>:23' */
        }
        else
        {
            /* Transition: '<S291>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gg) == 1)
            {
                /* Transition: '<S291>:48' */
                /* Transition: '<S291>:53' */
                FA_out_ee = true;

                /* Transition: '<S291>:56' */
            }
            else
            {
                /* Transition: '<S291>:52' */
                FA_out_ee = false;
            }

            /* Transition: '<S291>:37' */
            /* Call Poke */
            VeLINR_y_CompStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S237>/Poke' */
            /* FunctionCaller: '<S293>/Function Caller' */
            /* Event: '<S291>:38' */
            Rte_Call_PokeTAIR_e_CompStat_PokeTAIR_e_CompStat
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__fj, FA_out_ee);

            /* End of Outputs for SubSystem: '<S237>/Poke' */
        }
    }

    /* End of Chart: '<S287>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompressorSpd_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompressorSpd_ErrSts'
     */
    /* Transition: '<S291>:19' */
    rtb_TmpSignalConversionAtVeL_fg =
        Rte_Read_VeLINR_n_CompressorSpd_VeLINR_n_CompressorSpd
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_n_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompressorSpdTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S298>:1' */
    (void)Rte_Read_VeLINR_b_CompressorSpdTO_VeLINR_b_CompressorSpdTO(&FA_out_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S294>/Chart' */
    if (FA_out_l)
    {
        /* Transition: '<S298>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S298>:6' */
            /* Transition: '<S298>:25' */
            /* Call Fsft */
            VeLINR_y_CompressorSpd_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S238>/Fsft' */
            /* FunctionCaller: '<S299>/Function Caller' */
            /* Event: '<S298>:39' */
            Rte_Call_FsftTAIR_n_CompSpdFdb_FsftTAIR_n_CompSpdFdb();

            /* End of Outputs for SubSystem: '<S238>/Fsft' */
            /* Transition: '<S298>:29' */
        }
        else
        {
            /* Transition: '<S298>:30' */
            /* Call Tmot */
            VeLINR_y_CompressorSpd_CallStatus = 3U;

            /* Event: '<S298>:40' */
        }

        /* Transition: '<S298>:36' */
        /* Transition: '<S298>:23' */
    }
    else
    {
        /* Transition: '<S298>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fg) == 133)
        {
            /* Transition: '<S298>:33' */
            /* Transition: '<S298>:35' */
            /* Call Nothing */
            VeLINR_y_CompressorSpd_CallStatus = 4U;

            /* Transition: '<S298>:23' */
        }
        else
        {
            /* Transition: '<S298>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fg) == 1)
            {
                /* Transition: '<S298>:48' */
                /* Transition: '<S298>:53' */
                FA_out_l = true;

                /* Transition: '<S298>:56' */
            }
            else
            {
                /* Transition: '<S298>:52' */
            }

            /* Transition: '<S298>:37' */
            /* Call Poke */
            VeLINR_y_CompressorSpd_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S238>/Poke' */
            /* FunctionCaller: '<S300>/Function Caller' */
            /* Event: '<S298>:38' */
            Rte_Call_PokeTAIR_n_CompSpdFdb_PokeTAIR_n_CompSpdFdb
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_n_C, FA_out_l);

            /* End of Outputs for SubSystem: '<S238>/Poke' */
        }
    }

    /* End of Chart: '<S294>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_EAC2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_EAC2_ErrSts'
     */
    /* Transition: '<S298>:19' */
    rtb_TmpSignalConversionAtVeL_mb =
        Rte_Read_VeLINR_b_RsErr_EAC2_VeLINR_b_RsErr_EAC2
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_EAC2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S304>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_EAC2TO_VeLINR_b_RsErr_EAC2TO(&FA_out_mo);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S301>/Chart' */
    if (FA_out_mo)
    {
        /* Transition: '<S304>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S304>:6' */
            /* Transition: '<S304>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_EAC2_CallStatus = 2U;

            /* Event: '<S304>:39' */
            /* Transition: '<S304>:29' */
        }
        else
        {
            /* Transition: '<S304>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_EAC2_CallStatus = 3U;

            /* Event: '<S304>:40' */
        }

        /* Transition: '<S304>:36' */
        /* Transition: '<S304>:23' */
    }
    else
    {
        /* Transition: '<S304>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mb) == 133)
        {
            /* Transition: '<S304>:33' */
            /* Transition: '<S304>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_EAC2_CallStatus = 4U;

            /* Transition: '<S304>:23' */
        }
        else
        {
            /* Transition: '<S304>:46' */
            /* Transition: '<S304>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_EAC2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S239>/Poke' */
            /* FunctionCaller: '<S305>/Function Caller' */
            /* Event: '<S304>:38' */
            Rte_Call_PokeTAIR_b_RespErr_EAC_PokeTAIR_b_RespErr_EAC
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_k);

            /* End of Outputs for SubSystem: '<S239>/Poke' */
        }
    }

    /* End of Chart: '<S301>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_AIR_PRE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_AIR_PRE_ERR_ErrSts'
     */
    /* Transition: '<S304>:19' */
    rtb_TmpSignalConversionAtVeL_no =
        Rte_Read_VeLINR_e_PECP_AIR_PRE_ERR_VeLINR_e_PECP_AIR_PRE_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_AIR_PRE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S327>:1' */
    (void)Rte_Read_VeLINR_b_PECP_AIR_PRE_ERR_TO_VeLINR_b_PECP_AIR_PRE_ERR_TO
        (&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S323>/Chart' */
    if (tmpRead_d)
    {
        /* Transition: '<S327>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S327>:6' */
            /* Transition: '<S327>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S306>/Fsft' */
            /* FunctionCaller: '<S328>/Function Caller' */
            /* Event: '<S327>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPmpAirPrsntErr_FsftPMIR_b_LTPsvPmpAirPrsntErr
                ();

            /* End of Outputs for SubSystem: '<S306>/Fsft' */
            /* Transition: '<S327>:29' */
        }
        else
        {
            /* Transition: '<S327>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 3U;

            /* Event: '<S327>:40' */
        }

        /* Transition: '<S327>:36' */
        /* Transition: '<S327>:23' */
    }
    else
    {
        /* Transition: '<S327>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_no) == 133)
        {
            /* Transition: '<S327>:33' */
            /* Transition: '<S327>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 4U;

            /* Transition: '<S327>:23' */
        }
        else
        {
            /* Transition: '<S327>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_no) == 1)
            {
                /* Transition: '<S327>:48' */
                /* Transition: '<S327>:53' */
                FA_out_mo = true;

                /* Transition: '<S327>:56' */
            }
            else
            {
                /* Transition: '<S327>:52' */
                FA_out_mo = false;
            }

            /* Transition: '<S327>:37' */
            /* Call Poke */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S306>/Poke' */
            /* FunctionCaller: '<S329>/Function Caller' */
            /* Event: '<S327>:38' */
            Rte_Call_PokePMIR_e_LTPsvPmpAirPrsntErr_PokePMIR_e_LTPsvPmpAirPrsntErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_P, FA_out_mo);

            /* End of Outputs for SubSystem: '<S306>/Poke' */
        }
    }

    /* End of Chart: '<S323>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_CURR_ErrSts'
     */
    /* Transition: '<S327>:19' */
    rtb_TmpSignalConversionAtVeL_c5 =
        Rte_Read_VeLINR_I_PECP_CURR_VeLINR_I_PECP_CURR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S334>:1' */
    (void)Rte_Read_VeLINR_b_PECP_CURR_TO_VeLINR_b_PECP_CURR_TO(&FA_out_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S330>/Chart' */
    if (FA_out_a)
    {
        /* Transition: '<S334>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S334>:6' */
            /* Transition: '<S334>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S307>/Fsft' */
            /* FunctionCaller: '<S335>/Function Caller' */
            /* Event: '<S334>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmpCrnt_FsftPMIR_b_LT_PsvPmpCrnt();

            /* End of Outputs for SubSystem: '<S307>/Fsft' */
            /* Transition: '<S334>:29' */
        }
        else
        {
            /* Transition: '<S334>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_CURR_CallStatus = 3U;

            /* Event: '<S334>:40' */
        }

        /* Transition: '<S334>:36' */
        /* Transition: '<S334>:23' */
    }
    else
    {
        /* Transition: '<S334>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_c5) == 133)
        {
            /* Transition: '<S334>:33' */
            /* Transition: '<S334>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_CURR_CallStatus = 4U;

            /* Transition: '<S334>:23' */
        }
        else
        {
            /* Transition: '<S334>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_c5) == 1)
            {
                /* Transition: '<S334>:48' */
                /* Transition: '<S334>:53' */
                FA_out_a = true;

                /* Transition: '<S334>:56' */
            }
            else
            {
                /* Transition: '<S334>:52' */
            }

            /* Transition: '<S334>:37' */
            /* Call Poke */
            VeLINR_y_PECP_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S307>/Poke' */
            /* FunctionCaller: '<S336>/Function Caller' */
            /* Event: '<S334>:38' */
            Rte_Call_PokePMIR_I_LT_PsvPmpCrnt_PokePMIR_I_LT_PsvPmpCrnt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_I_P, FA_out_a);

            /* End of Outputs for SubSystem: '<S307>/Poke' */
        }
    }

    /* End of Chart: '<S330>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_DBLK_ACTV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_DBLK_ACTV_ErrSts'
     */
    /* Transition: '<S334>:19' */
    rtb_TmpSignalConversionAtVeL_fn =
        Rte_Read_VeLINR_e_PECP_DBLK_ACTV_VeLINR_e_PECP_DBLK_ACTV
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_DBLK_ACTV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S341>:1' */
    (void)Rte_Read_VeLINR_b_PECP_DBLK_ACTV_TO_VeLINR_b_PECP_DBLK_ACTV_TO
        (&FA_out_mb);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S337>/Chart' */
    if (FA_out_mb)
    {
        /* Transition: '<S341>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S341>:6' */
            /* Transition: '<S341>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S308>/Fsft' */
            /* FunctionCaller: '<S342>/Function Caller' */
            /* Event: '<S341>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpDeblock_FsftPMIR_b_LTPsvPumpDeblock();

            /* End of Outputs for SubSystem: '<S308>/Fsft' */
            /* Transition: '<S341>:29' */
        }
        else
        {
            /* Transition: '<S341>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 3U;

            /* Event: '<S341>:40' */
        }

        /* Transition: '<S341>:36' */
        /* Transition: '<S341>:23' */
    }
    else
    {
        /* Transition: '<S341>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fn) == 133)
        {
            /* Transition: '<S341>:33' */
            /* Transition: '<S341>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 4U;

            /* Transition: '<S341>:23' */
        }
        else
        {
            /* Transition: '<S341>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fn) == 1)
            {
                /* Transition: '<S341>:48' */
                /* Transition: '<S341>:53' */
                FA_out_mb = true;

                /* Transition: '<S341>:56' */
            }
            else
            {
                /* Transition: '<S341>:52' */
            }

            /* Transition: '<S341>:37' */
            /* Call Poke */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S308>/Poke' */
            /* FunctionCaller: '<S343>/Function Caller' */
            /* Event: '<S341>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpDeblock_PokePMIR_e_LTPsvPumpDeblock
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_a, FA_out_mb);

            /* End of Outputs for SubSystem: '<S308>/Poke' */
        }
    }

    /* End of Chart: '<S337>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_DR_RN_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_DR_RN_ERR_ErrSts'
     */
    /* Transition: '<S341>:19' */
    rtb_TmpSignalConversionAtVeL_hh =
        Rte_Read_VeLINR_e_PECP_DR_RN_ERR_VeLINR_e_PECP_DR_RN_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ao);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_DR_RN_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S348>:1' */
    (void)Rte_Read_VeLINR_b_PECP_DR_RN_ERR_TO_VeLINR_b_PECP_DR_RN_ERR_TO
        (&FA_out_k1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S344>/Chart' */
    if (FA_out_k1)
    {
        /* Transition: '<S348>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S348>:6' */
            /* Transition: '<S348>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S309>/Fsft' */
            /* FunctionCaller: '<S349>/Function Caller' */
            /* Event: '<S348>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpDryRun_FsftPMIR_b_LTPsvPumpDryRun();

            /* End of Outputs for SubSystem: '<S309>/Fsft' */
            /* Transition: '<S348>:29' */
        }
        else
        {
            /* Transition: '<S348>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 3U;

            /* Event: '<S348>:40' */
        }

        /* Transition: '<S348>:36' */
        /* Transition: '<S348>:23' */
    }
    else
    {
        /* Transition: '<S348>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hh) == 133)
        {
            /* Transition: '<S348>:33' */
            /* Transition: '<S348>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 4U;

            /* Transition: '<S348>:23' */
        }
        else
        {
            /* Transition: '<S348>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hh) == 1)
            {
                /* Transition: '<S348>:48' */
                /* Transition: '<S348>:53' */
                FA_out_k1 = true;

                /* Transition: '<S348>:56' */
            }
            else
            {
                /* Transition: '<S348>:52' */
            }

            /* Transition: '<S348>:37' */
            /* Call Poke */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S309>/Poke' */
            /* FunctionCaller: '<S350>/Function Caller' */
            /* Event: '<S348>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpDryRun_PokePMIR_e_LTPsvPumpDryRun
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ao, FA_out_k1);

            /* End of Outputs for SubSystem: '<S309>/Poke' */
        }
    }

    /* End of Chart: '<S344>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_FL_SAFE_ACTVTD_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_FL_SAFE_ACTVTD_ErrSts'
     */
    /* Transition: '<S348>:19' */
    rtb_TmpSignalConversionAtVeL_bo =
        Rte_Read_VeLINR_e_PECP_FL_SAFE_ACTVTD_VeLINR_e_PECP_FL_SAFE_ACTVTD
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__il);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_FL_SAFE_ACTVTD_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S355>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP_FL_SAFE_ACTVTD_TO_VeLINR_b_PECP_FL_SAFE_ACTVTD_TO
        (&FA_out_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S351>/Chart' */
    if (FA_out_m)
    {
        /* Transition: '<S355>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S355>:6' */
            /* Transition: '<S355>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S310>/Fsft' */
            /* FunctionCaller: '<S356>/Function Caller' */
            /* Event: '<S355>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpFailsafe_FsftPMIR_b_LTPsvPumpFailsafe();

            /* End of Outputs for SubSystem: '<S310>/Fsft' */
            /* Transition: '<S355>:29' */
        }
        else
        {
            /* Transition: '<S355>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 3U;

            /* Event: '<S355>:40' */
        }

        /* Transition: '<S355>:36' */
        /* Transition: '<S355>:23' */
    }
    else
    {
        /* Transition: '<S355>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bo) == 133)
        {
            /* Transition: '<S355>:33' */
            /* Transition: '<S355>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 4U;

            /* Transition: '<S355>:23' */
        }
        else
        {
            /* Transition: '<S355>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_bo) == 1)
            {
                /* Transition: '<S355>:48' */
                /* Transition: '<S355>:53' */
                FA_out_m = true;

                /* Transition: '<S355>:56' */
            }
            else
            {
                /* Transition: '<S355>:52' */
            }

            /* Transition: '<S355>:37' */
            /* Call Poke */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S310>/Poke' */
            /* FunctionCaller: '<S357>/Function Caller' */
            /* Event: '<S355>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpFailsafe_PokePMIR_e_LTPsvPumpFailsafe
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__il, FA_out_m);

            /* End of Outputs for SubSystem: '<S310>/Poke' */
        }
    }

    /* End of Chart: '<S351>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S355>:19' */
    rtb_TmpSignalConversionAtVeL_cg =
        Rte_Read_VeLINR_e_PECP_LMP_HM_AN_ON_VeLINR_e_PECP_LMP_HM_AN_ON
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S362>:1' */
    (void)Rte_Read_VeLINR_b_PECP_LMP_HM_AN_ON_TO_VeLINR_b_PECP_LMP_HM_AN_ON_TO
        (&FA_out_gs);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S358>/Chart' */
    if (FA_out_gs)
    {
        /* Transition: '<S362>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S362>:6' */
            /* Transition: '<S362>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S311>/Fsft' */
            /* FunctionCaller: '<S363>/Function Caller' */
            /* Event: '<S362>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump_LmpHM_FsftPMIR_b_LTPsvPump_LmpHM();

            /* End of Outputs for SubSystem: '<S311>/Fsft' */
            /* Transition: '<S362>:29' */
        }
        else
        {
            /* Transition: '<S362>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S362>:40' */
        }

        /* Transition: '<S362>:36' */
        /* Transition: '<S362>:23' */
    }
    else
    {
        /* Transition: '<S362>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cg) == 133)
        {
            /* Transition: '<S362>:33' */
            /* Transition: '<S362>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S362>:23' */
        }
        else
        {
            /* Transition: '<S362>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cg) == 1)
            {
                /* Transition: '<S362>:48' */
                /* Transition: '<S362>:53' */
                FA_out_gs = true;

                /* Transition: '<S362>:56' */
            }
            else
            {
                /* Transition: '<S362>:52' */
            }

            /* Transition: '<S362>:37' */
            /* Call Poke */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S311>/Poke' */
            /* FunctionCaller: '<S364>/Function Caller' */
            /* Event: '<S362>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump_LmpHM_PokePMIR_e_LTPsvPump_LmpHM
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_g, FA_out_gs);

            /* End of Outputs for SubSystem: '<S311>/Poke' */
        }
    }

    /* End of Chart: '<S358>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S362>:19' */
    rtb_TmpSignalConversionAtVeLI_e =
        Rte_Read_VeLINR_e_PECP_MONTRNG_RPM_VeLINR_e_PECP_MONTRNG_RPM
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S369>:1' */
    (void)Rte_Read_VeLINR_b_PECP_MONTRNG_RPM_TO_VeLINR_b_PECP_MONTRNG_RPM_TO
        (&FA_out_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S365>/Chart' */
    if (FA_out_b)
    {
        /* Transition: '<S369>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S369>:6' */
            /* Transition: '<S369>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S312>/Fsft' */
            /* FunctionCaller: '<S370>/Function Caller' */
            /* Event: '<S369>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpMntrRPM_FsftPMIR_b_LTPsvPumpMntrRPM();

            /* End of Outputs for SubSystem: '<S312>/Fsft' */
            /* Transition: '<S369>:29' */
        }
        else
        {
            /* Transition: '<S369>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S369>:40' */
        }

        /* Transition: '<S369>:36' */
        /* Transition: '<S369>:23' */
    }
    else
    {
        /* Transition: '<S369>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 133)
        {
            /* Transition: '<S369>:33' */
            /* Transition: '<S369>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S369>:23' */
        }
        else
        {
            /* Transition: '<S369>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 1)
            {
                /* Transition: '<S369>:48' */
                /* Transition: '<S369>:53' */
                FA_out_b = true;

                /* Transition: '<S369>:56' */
            }
            else
            {
                /* Transition: '<S369>:52' */
            }

            /* Transition: '<S369>:37' */
            /* Call Poke */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S312>/Poke' */
            /* FunctionCaller: '<S371>/Function Caller' */
            /* Event: '<S369>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpMntrRPM_PokePMIR_e_LTPsvPumpMntrRPM
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_e_o, FA_out_b);

            /* End of Outputs for SubSystem: '<S312>/Poke' */
        }
    }

    /* End of Chart: '<S365>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_NODE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_NODE_ERR_ErrSts'
     */
    /* Transition: '<S369>:19' */
    rtb_TmpSignalConversionAtVeL_b0 =
        Rte_Read_VeLINR_e_PECP_NODE_ERR_VeLINR_e_PECP_NODE_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ox);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_NODE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S376>:1' */
    (void)Rte_Read_VeLINR_b_PECP_NODE_ERR_TO_VeLINR_b_PECP_NODE_ERR_TO(&FA_out_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S372>/Chart' */
    if (FA_out_p)
    {
        /* Transition: '<S376>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S376>:6' */
            /* Transition: '<S376>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S313>/Fsft' */
            /* FunctionCaller: '<S377>/Function Caller' */
            /* Event: '<S376>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpNodeErr_FsftPMIR_b_LTPsvPumpNodeErr();

            /* End of Outputs for SubSystem: '<S313>/Fsft' */
            /* Transition: '<S376>:29' */
        }
        else
        {
            /* Transition: '<S376>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 3U;

            /* Event: '<S376>:40' */
        }

        /* Transition: '<S376>:36' */
        /* Transition: '<S376>:23' */
    }
    else
    {
        /* Transition: '<S376>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_b0) == 133)
        {
            /* Transition: '<S376>:33' */
            /* Transition: '<S376>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 4U;

            /* Transition: '<S376>:23' */
        }
        else
        {
            /* Transition: '<S376>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_b0) == 1)
            {
                /* Transition: '<S376>:48' */
                /* Transition: '<S376>:53' */
                FA_out_p = true;

                /* Transition: '<S376>:56' */
            }
            else
            {
                /* Transition: '<S376>:52' */
            }

            /* Transition: '<S376>:37' */
            /* Call Poke */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S313>/Poke' */
            /* FunctionCaller: '<S378>/Function Caller' */
            /* Event: '<S376>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpNodeErr_PokePMIR_e_LTPsvPumpNodeErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ox, FA_out_p);

            /* End of Outputs for SubSystem: '<S313>/Poke' */
        }
    }

    /* End of Chart: '<S372>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_OVR_CUR_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_OVR_CUR_ERR_ErrSts'
     */
    /* Transition: '<S376>:19' */
    rtb_TmpSignalConversionAtVeL_es =
        Rte_Read_VeLINR_e_PECP_OVR_CUR_ERR_VeLINR_e_PECP_OVR_CUR_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__gw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_OVR_CUR_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S383>:1' */
    (void)Rte_Read_VeLINR_b_PECP_OVR_CUR_ERR_TO_VeLINR_b_PECP_OVR_CUR_ERR_TO
        (&FA_out_ch);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S379>/Chart' */
    if (FA_out_ch)
    {
        /* Transition: '<S383>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S383>:6' */
            /* Transition: '<S383>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S314>/Fsft' */
            /* FunctionCaller: '<S384>/Function Caller' */
            /* Event: '<S383>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpOvrCrnt_FsftPMIR_b_LTPsvPumpOvrCrnt();

            /* End of Outputs for SubSystem: '<S314>/Fsft' */
            /* Transition: '<S383>:29' */
        }
        else
        {
            /* Transition: '<S383>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 3U;

            /* Event: '<S383>:40' */
        }

        /* Transition: '<S383>:36' */
        /* Transition: '<S383>:23' */
    }
    else
    {
        /* Transition: '<S383>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_es) == 133)
        {
            /* Transition: '<S383>:33' */
            /* Transition: '<S383>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 4U;

            /* Transition: '<S383>:23' */
        }
        else
        {
            /* Transition: '<S383>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_es) == 1)
            {
                /* Transition: '<S383>:48' */
                /* Transition: '<S383>:53' */
                FA_out_ch = true;

                /* Transition: '<S383>:56' */
            }
            else
            {
                /* Transition: '<S383>:52' */
            }

            /* Transition: '<S383>:37' */
            /* Call Poke */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S314>/Poke' */
            /* FunctionCaller: '<S385>/Function Caller' */
            /* Event: '<S383>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpOvrCrnt_PokePMIR_e_LTPsvPumpOvrCrnt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__gw, FA_out_ch);

            /* End of Outputs for SubSystem: '<S314>/Poke' */
        }
    }

    /* End of Chart: '<S379>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_OVR_TMP_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_OVR_TMP_ERR_ErrSts'
     */
    /* Transition: '<S383>:19' */
    rtb_TmpSignalConversionAtVeL_ka =
        Rte_Read_VeLINR_e_PECP_OVR_TMP_ERR_VeLINR_e_PECP_OVR_TMP_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__mi);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_OVR_TMP_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S390>:1' */
    (void)Rte_Read_VeLINR_b_PECP_OVR_TMP_ERR_TO_VeLINR_b_PECP_OVR_TMP_ERR_TO
        (&FA_out_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S386>/Chart' */
    if (FA_out_i)
    {
        /* Transition: '<S390>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S390>:6' */
            /* Transition: '<S390>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S315>/Fsft' */
            /* FunctionCaller: '<S391>/Function Caller' */
            /* Event: '<S390>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmpOT_FsftPMIR_b_LT_PsvPmpOT();

            /* End of Outputs for SubSystem: '<S315>/Fsft' */
            /* Transition: '<S390>:29' */
        }
        else
        {
            /* Transition: '<S390>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 3U;

            /* Event: '<S390>:40' */
        }

        /* Transition: '<S390>:36' */
        /* Transition: '<S390>:23' */
    }
    else
    {
        /* Transition: '<S390>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ka) == 133)
        {
            /* Transition: '<S390>:33' */
            /* Transition: '<S390>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 4U;

            /* Transition: '<S390>:23' */
        }
        else
        {
            /* Transition: '<S390>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ka) == 1)
            {
                /* Transition: '<S390>:48' */
                /* Transition: '<S390>:53' */
                FA_out_i = true;

                /* Transition: '<S390>:56' */
            }
            else
            {
                /* Transition: '<S390>:52' */
            }

            /* Transition: '<S390>:37' */
            /* Call Poke */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S315>/Poke' */
            /* FunctionCaller: '<S392>/Function Caller' */
            /* Event: '<S390>:38' */
            Rte_Call_PokePMIR_e_LT_PsvPmpOT_PokePMIR_e_LT_PsvPmpOT
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__mi, FA_out_i);

            /* End of Outputs for SubSystem: '<S315>/Poke' */
        }
    }

    /* End of Chart: '<S386>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S390>:19' */
    rtb_TmpSignalConversionAtVeL_hl =
        Rte_Read_VeLINR_e_PECP_POST_RUN_STAT_VeLINR_e_PECP_POST_RUN_STAT
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ft);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S397>:1' */
    (void)Rte_Read_VeLINR_b_PECP_POST_RUN_STAT_TO_VeLINR_b_PECP_POST_RUN_STAT_TO
        (&FA_out_ox);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S393>/Chart' */
    if (FA_out_ox)
    {
        /* Transition: '<S397>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S397>:6' */
            /* Transition: '<S397>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S316>/Fsft' */
            /* FunctionCaller: '<S398>/Function Caller' */
            /* Event: '<S397>:39' */
            Rte_Call_FsftPMPR_e_LTPsvPump_PstRnSt_FsftPMPR_e_LTPsvPump_PstRnSt();

            /* End of Outputs for SubSystem: '<S316>/Fsft' */
            /* Transition: '<S397>:29' */
        }
        else
        {
            /* Transition: '<S397>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S397>:40' */
        }

        /* Transition: '<S397>:36' */
        /* Transition: '<S397>:23' */
    }
    else
    {
        /* Transition: '<S397>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hl) == 133)
        {
            /* Transition: '<S397>:33' */
            /* Transition: '<S397>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S397>:23' */
        }
        else
        {
            /* Transition: '<S397>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hl) == 1)
            {
                /* Transition: '<S397>:48' */
                /* Transition: '<S397>:53' */
                FA_out_ox = true;

                /* Transition: '<S397>:56' */
            }
            else
            {
                /* Transition: '<S397>:52' */
            }

            /* Transition: '<S397>:37' */
            /* Call Poke */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S316>/Poke' */
            /* FunctionCaller: '<S399>/Function Caller' */
            /* Event: '<S397>:38' */
            Rte_Call_PokePMPR_e_LTPsvPump_PstRnSt_PokePMPR_e_LTPsvPump_PstRnSt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ft, FA_out_ox);

            /* End of Outputs for SubSystem: '<S316>/Poke' */
        }
    }

    /* End of Chart: '<S393>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_RPM_ACTL_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_RPM_ACTL_PERCT_ErrSts'
     */
    /* Transition: '<S397>:19' */
    rtb_TmpSignalConversionAtVeL_ks =
        Rte_Read_VeLINR_Pct_PECP_RPM_ACTL_PERCT_VeLINR_Pct_PECP_RPM_ACTL_PERCT
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_RPM_ACTL_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S404>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP_RPM_ACTL_PERCT_TO_VeLINR_b_PECP_RPM_ACTL_PERCT_TO
        (&FA_out_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S400>/Chart' */
    if (FA_out_c)
    {
        /* Transition: '<S404>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S404>:6' */
            /* Transition: '<S404>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S317>/Fsft' */
            /* FunctionCaller: '<S405>/Function Caller' */
            /* Event: '<S404>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpRPMActPct_FsftPMIR_b_LTPsvPumpRPMActPct
                ();

            /* End of Outputs for SubSystem: '<S317>/Fsft' */
            /* Transition: '<S404>:29' */
        }
        else
        {
            /* Transition: '<S404>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 3U;

            /* Event: '<S404>:40' */
        }

        /* Transition: '<S404>:36' */
        /* Transition: '<S404>:23' */
    }
    else
    {
        /* Transition: '<S404>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ks) == 133)
        {
            /* Transition: '<S404>:33' */
            /* Transition: '<S404>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 4U;

            /* Transition: '<S404>:23' */
        }
        else
        {
            /* Transition: '<S404>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ks) == 1)
            {
                /* Transition: '<S404>:48' */
                /* Transition: '<S404>:53' */
                FA_out_c = true;

                /* Transition: '<S404>:56' */
            }
            else
            {
                /* Transition: '<S404>:52' */
            }

            /* Transition: '<S404>:37' */
            /* Call Poke */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S317>/Poke' */
            /* FunctionCaller: '<S406>/Function Caller' */
            /* Event: '<S404>:38' */
            Rte_Call_PokePMIR_Pct_LTPsvPumpRPMAct_PokePMIR_Pct_LTPsvPumpRPMAct
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_h, FA_out_c);

            /* End of Outputs for SubSystem: '<S317>/Poke' */
        }
    }

    /* End of Chart: '<S400>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_RPM_TGT_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_RPM_TGT_PERCT_ErrSts'
     */
    /* Transition: '<S404>:19' */
    rtb_TmpSignalConversionAtVeL_cm =
        Rte_Read_VeLINR_Pct_PECP_RPM_TGT_PERCT_VeLINR_Pct_PECP_RPM_TGT_PERCT
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_RPM_TGT_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S411>:1' */
    (void)Rte_Read_VeLINR_b_PECP_RPM_TGT_PERCT_TO_VeLINR_b_PECP_RPM_TGT_PERCT_TO
        (&FA_out_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S407>/Chart' */
    if (FA_out_d)
    {
        /* Transition: '<S411>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S411>:6' */
            /* Transition: '<S411>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S318>/Fsft' */
            /* FunctionCaller: '<S412>/Function Caller' */
            /* Event: '<S411>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpRPMTgtPct_FsftPMIR_b_LTPsvPumpRPMTgtPct
                ();

            /* End of Outputs for SubSystem: '<S318>/Fsft' */
            /* Transition: '<S411>:29' */
        }
        else
        {
            /* Transition: '<S411>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 3U;

            /* Event: '<S411>:40' */
        }

        /* Transition: '<S411>:36' */
        /* Transition: '<S411>:23' */
    }
    else
    {
        /* Transition: '<S411>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cm) == 133)
        {
            /* Transition: '<S411>:33' */
            /* Transition: '<S411>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 4U;

            /* Transition: '<S411>:23' */
        }
        else
        {
            /* Transition: '<S411>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cm) == 1)
            {
                /* Transition: '<S411>:48' */
                /* Transition: '<S411>:53' */
                FA_out_d = true;

                /* Transition: '<S411>:56' */
            }
            else
            {
                /* Transition: '<S411>:52' */
            }

            /* Transition: '<S411>:37' */
            /* Call Poke */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S318>/Poke' */
            /* FunctionCaller: '<S413>/Function Caller' */
            /* Event: '<S411>:38' */
            Rte_Call_PokePMIR_Pct_LTPsvPumpRPMTgt_PokePMIR_Pct_LTPsvPumpRPMTgt
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_P_k, FA_out_d);

            /* End of Outputs for SubSystem: '<S318>/Poke' */
        }
    }

    /* End of Chart: '<S407>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_TEMP_ErrSts'
     */
    /* Transition: '<S411>:19' */
    rtb_TmpSignalConversionAtVeL_km =
        Rte_Read_VeLINR_T_PECP_TEMP_VeLINR_T_PECP_TEMP
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S418>:1' */
    (void)Rte_Read_VeLINR_b_PECP_TEMP_TO_VeLINR_b_PECP_TEMP_TO(&FA_out_ov);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S414>/Chart' */
    if (FA_out_ov)
    {
        /* Transition: '<S418>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S418>:6' */
            /* Transition: '<S418>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S319>/Fsft' */
            /* FunctionCaller: '<S419>/Function Caller' */
            /* Event: '<S418>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpTemp_FsftPMIR_b_LTPsvPumpTemp();

            /* End of Outputs for SubSystem: '<S319>/Fsft' */
            /* Transition: '<S418>:29' */
        }
        else
        {
            /* Transition: '<S418>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_TEMP_CallStatus = 3U;

            /* Event: '<S418>:40' */
        }

        /* Transition: '<S418>:36' */
        /* Transition: '<S418>:23' */
    }
    else
    {
        /* Transition: '<S418>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_km) == 133)
        {
            /* Transition: '<S418>:33' */
            /* Transition: '<S418>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_TEMP_CallStatus = 4U;

            /* Transition: '<S418>:23' */
        }
        else
        {
            /* Transition: '<S418>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_km) == 1)
            {
                /* Transition: '<S418>:48' */
                /* Transition: '<S418>:53' */
                FA_out_ov = true;

                /* Transition: '<S418>:56' */
            }
            else
            {
                /* Transition: '<S418>:52' */
            }

            /* Transition: '<S418>:37' */
            /* Call Poke */
            VeLINR_y_PECP_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S319>/Poke' */
            /* FunctionCaller: '<S420>/Function Caller' */
            /* Event: '<S418>:38' */
            Rte_Call_PokePMIR_T_LTPsvPumpTemp_PokePMIR_T_LTPsvPumpTemp
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_T_P, FA_out_ov);

            /* End of Outputs for SubSystem: '<S319>/Poke' */
        }
    }

    /* End of Chart: '<S414>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_VLTG_ErrSts'
     */
    /* Transition: '<S418>:19' */
    rtb_TmpSignalConversionAtVeL_j3 =
        Rte_Read_VeLINR_U_PECP_VLTG_VeLINR_U_PECP_VLTG
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S425>:1' */
    (void)Rte_Read_VeLINR_b_PECP_VLTG_TO_VeLINR_b_PECP_VLTG_TO(&FA_out_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S421>/Chart' */
    if (FA_out_e)
    {
        /* Transition: '<S425>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S425>:6' */
            /* Transition: '<S425>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S320>/Fsft' */
            /* FunctionCaller: '<S426>/Function Caller' */
            /* Event: '<S425>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmpVltg_FsftPMIR_b_LT_PsvPmpVltg();

            /* End of Outputs for SubSystem: '<S320>/Fsft' */
            /* Transition: '<S425>:29' */
        }
        else
        {
            /* Transition: '<S425>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_VLTG_CallStatus = 3U;

            /* Event: '<S425>:40' */
        }

        /* Transition: '<S425>:36' */
        /* Transition: '<S425>:23' */
    }
    else
    {
        /* Transition: '<S425>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_j3) == 133)
        {
            /* Transition: '<S425>:33' */
            /* Transition: '<S425>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_VLTG_CallStatus = 4U;

            /* Transition: '<S425>:23' */
        }
        else
        {
            /* Transition: '<S425>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_j3) == 1)
            {
                /* Transition: '<S425>:48' */
                /* Transition: '<S425>:53' */
                FA_out_e = true;

                /* Transition: '<S425>:56' */
            }
            else
            {
                /* Transition: '<S425>:52' */
            }

            /* Transition: '<S425>:37' */
            /* Call Poke */
            VeLINR_y_PECP_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S320>/Poke' */
            /* FunctionCaller: '<S427>/Function Caller' */
            /* Event: '<S425>:38' */
            Rte_Call_PokePMIR_U_LT_PsvPmpVltg_PokePMIR_U_LT_PsvPmpVltg
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_U_P, FA_out_e);

            /* End of Outputs for SubSystem: '<S320>/Poke' */
        }
    }

    /* End of Chart: '<S421>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_VLTG_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_VLTG_ERR_ErrSts'
     */
    /* Transition: '<S425>:19' */
    rtb_TmpSignalConversionAtVeL_mj =
        Rte_Read_VeLINR_e_PECP_VLTG_ERR_VeLINR_e_PECP_VLTG_ERR
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ni);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_VLTG_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S432>:1' */
    (void)Rte_Read_VeLINR_b_PECP_VLTG_ERR_TO_VeLINR_b_PECP_VLTG_ERR_TO(&FA_out_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S428>/Chart' */
    if (FA_out_g)
    {
        /* Transition: '<S432>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S432>:6' */
            /* Transition: '<S432>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S321>/Fsft' */
            /* FunctionCaller: '<S433>/Function Caller' */
            /* Event: '<S432>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpSuppVltErr_FsftPMIR_b_LTPsvPumpSuppVltErr
                ();

            /* End of Outputs for SubSystem: '<S321>/Fsft' */
            /* Transition: '<S432>:29' */
        }
        else
        {
            /* Transition: '<S432>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 3U;

            /* Event: '<S432>:40' */
        }

        /* Transition: '<S432>:36' */
        /* Transition: '<S432>:23' */
    }
    else
    {
        /* Transition: '<S432>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mj) == 133)
        {
            /* Transition: '<S432>:33' */
            /* Transition: '<S432>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 4U;

            /* Transition: '<S432>:23' */
        }
        else
        {
            /* Transition: '<S432>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mj) == 1)
            {
                /* Transition: '<S432>:48' */
                /* Transition: '<S432>:53' */
                FA_out_g = true;

                /* Transition: '<S432>:56' */
            }
            else
            {
                /* Transition: '<S432>:52' */
            }

            /* Transition: '<S432>:37' */
            /* Call Poke */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S321>/Poke' */
            /* FunctionCaller: '<S434>/Function Caller' */
            /* Event: '<S432>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpSuppVltErr_PokePMIR_e_LTPsvPumpSuppVltErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__ni, FA_out_g);

            /* End of Outputs for SubSystem: '<S321>/Poke' */
        }
    }

    /* End of Chart: '<S428>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_PECP_PUMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_PECP_PUMP_ErrSts'
     */
    /* Transition: '<S432>:19' */
    rtb_TmpSignalConversionAtVeL_do =
        Rte_Read_VeLINR_b_RsErr_PECP_PUMP_VeLINR_b_RsErr_PECP_PUMP
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_PECP_PUMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S438>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_PECP_PUMP_TO_VeLINR_b_RsErr_PECP_PUMP_TO
        (&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S435>/Chart' */
    if (tmpRead_e)
    {
        /* Transition: '<S438>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S438>:6' */
            /* Transition: '<S438>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 2U;

            /* Event: '<S438>:39' */
            /* Transition: '<S438>:29' */
        }
        else
        {
            /* Transition: '<S438>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 3U;

            /* Event: '<S438>:40' */
        }

        /* Transition: '<S438>:36' */
        /* Transition: '<S438>:23' */
    }
    else
    {
        /* Transition: '<S438>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_do) == 133)
        {
            /* Transition: '<S438>:33' */
            /* Transition: '<S438>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 4U;

            /* Transition: '<S438>:23' */
        }
        else
        {
            /* Transition: '<S438>:46' */
            /* Transition: '<S438>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S322>/Poke' */
            /* FunctionCaller: '<S439>/Function Caller' */
            /* Event: '<S438>:38' */
            Rte_Call_PokePMIR_b_LTPsvPumpRespErr_PokePMIR_b_LTPsvPumpRespErr
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_b_o);

            /* End of Outputs for SubSystem: '<S322>/Poke' */
        }
    }

    /* End of Chart: '<S435>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_SUPPLIER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_SUPPLIER_ErrSts'
     */
    /* Transition: '<S438>:19' */
    rtb_TmpSignalConversionAtVeL_kg =
        Rte_Read_VeLINR_e_PECP_SUPPLIER_VeLINR_e_PECP_SUPPLIER
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__hn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_SUPPLIER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S445>:1' */
    (void)Rte_Read_VeLINR_b_PECP_SUPPLIER_TO_VeLINR_b_PECP_SUPPLIER_TO
        (&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S442>/Chart' */
    if (tmpRead_f)
    {
        /* Transition: '<S445>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S445>:6' */
            /* Transition: '<S445>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 2U;

            /* Event: '<S445>:39' */
            /* Transition: '<S445>:29' */
        }
        else
        {
            /* Transition: '<S445>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 3U;

            /* Event: '<S445>:40' */
        }

        /* Transition: '<S445>:36' */
        /* Transition: '<S445>:23' */
    }
    else
    {
        /* Transition: '<S445>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kg) == 133)
        {
            /* Transition: '<S445>:33' */
            /* Transition: '<S445>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 4U;

            /* Transition: '<S445>:23' */
        }
        else
        {
            /* Transition: '<S445>:46' */
            /* Transition: '<S445>:37' */
            /* Call Poke */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S440>/Poke' */
            /* FunctionCaller: '<S446>/Function Caller' */
            /* Event: '<S445>:38' */
            Rte_Call_PokePMIR_e_LTPsvPmpProdSuplr_ID_PokePMIR_e_LTPsvPmpProdSuplr_ID
                (LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR__hn);

            /* End of Outputs for SubSystem: '<S440>/Poke' */
        }
    }

    /* End of Chart: '<S442>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_VERSION_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_VERSION_ErrSts'
     */
    /* Transition: '<S445>:19' */
    rtb_TmpSignalConversionAtVeL_lh =
        Rte_Read_VeLINR_y_PECP_VERSION_VeLINR_y_PECP_VERSION
        (&LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_VERSION_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S450>:1' */
    (void)Rte_Read_VeLINR_b_PECP_VERSION_TO_VeLINR_b_PECP_VERSION_TO(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S447>/Chart' */
    if (tmpRead_g)
    {
        /* Transition: '<S450>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S450>:6' */
            /* Transition: '<S450>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_VERSION_CallStatus = 2U;

            /* Event: '<S450>:39' */
            /* Transition: '<S450>:29' */
        }
        else
        {
            /* Transition: '<S450>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_VERSION_CallStatus = 3U;

            /* Event: '<S450>:40' */
        }

        /* Transition: '<S450>:36' */
        /* Transition: '<S450>:23' */
    }
    else
    {
        /* Transition: '<S450>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lh) == 133)
        {
            /* Transition: '<S450>:33' */
            /* Transition: '<S450>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_VERSION_CallStatus = 4U;

            /* Transition: '<S450>:23' */
        }
        else
        {
            /* Transition: '<S450>:46' */
            /* Transition: '<S450>:37' */
            /* Call Poke */
            VeLINR_y_PECP_VERSION_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S441>/Poke' */
            /* DataTypeConversion: '<S451>/Data Type Conversion' */
            /* Event: '<S450>:38' */
            tmp = fmodf(floorf(LR2B_BLUEN_ac_B.TmpSignalConversionAtVeLINR_y_P),
                        256.0F);

            /* FunctionCaller: '<S451>/Function Caller' incorporates:
             *  DataTypeConversion: '<S451>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_LTPsvPump_Ver_PokePMIR_y_LTPsvPump_Ver((uint8)
                ((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S441>/Poke' */
        }
    }

    /* End of Chart: '<S447>/Chart' */
    /* Transition: '<S450>:19' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, LR2B_BLUEN_CODE) LR2B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
