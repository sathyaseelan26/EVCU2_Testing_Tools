/*
 * File: CR3B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CR3B_FUNC_ac'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:23:39 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CR3B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CR3B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, CR3B_FUNC_VAR_INIT) KeCR3B_b_CanLocStatusBypEnbl =
    0;                                 /* Referenced by: '<S11>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, CR3B_FUNC_VAR_INIT)
    KeCR3B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S12>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_CR3B_FUNC
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_ACC_Systemsts_CallStatus;/* '<S18>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT)
    VeSR1B_y_ACC_Wheel_Torque_Enabled_CallStatus;/* '<S24>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_BrakePdlPosn_FD14_CallStatus;/* '<S59>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_Brk_Stat_FD14_CallStatus;/* '<S32>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_IMPACTCommand_FD14_CallStatus;/* '<S79>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_IMPACTConfirm_FD14_CallStatus;/* '<S85>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LatAcceleration_FD14_CallStatus;/* '<S97>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus;/* '<S101>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LatAcceltnOffset_BSM_CallStatus;/* '<S46>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LongAccelration_FD14_CallStatus;/* '<S105>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LongAccltnFailSts_FD14_CallStatus;/* '<S109>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LongAccltnOffset_BSM_CallStatus;/* '<S52>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LwsAngle_FD14_CallStatus;/* '<S67>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_LwsSpeed_FD14_CallStatus;/* '<S73>/Chart' */

#if Rte_SysCon_VrntCR3B_THASTAT

static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_THA_STAT_FD14_CallStatus;/* '<S126>/Chart' */

#endif

#if Rte_SysCon_VrntCR3B_THASpeedLimit

static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_THA_Speed_Limit_FD14_CallStatus;/* '<S133>/Chart' */

#endif

#if Rte_SysCon_VrntCR3B_TRSCSTAT

static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_TRSC_STAT_CallStatus;/* '<S140>/Chart' */

#endif

#if Rte_SysCon_VrntCR3B_TRSCSpeedLimitReq

static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_TRSC_SpeedLimit_Req_CallStatus;/* '<S147>/Chart' */

#endif

static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_VehiclSpeedVSOSig_FD14_CallStatus;/* '<S38>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_YawRateFailSts_FD14_CallStatus;/* '<S117>/Chart' */
static VAR(uint8, CR3B_FUNC_VAR_INIT) VeSR1B_y_YawRate_FD14_CallStatus;/* '<S113>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_FUNC
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_FUNC
#include "MemMap.h"

VAR(B_CR3B_FUNC_ac_T, CR3B_FUNC_VAR_INIT) CR3B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_FUNC
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, CR3B_FUNC_CODE) CR3B_FUNC_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeSR1B;
    uint8 rtb_TmpSignalConversionAtVeSR_j;
    uint8 rtb_TmpSignalConversionAtVeSR_m;
    uint8 rtb_TmpSignalConversionAtVeSR_p;
    uint8 rtb_TmpSignalConversionAtVeSR_k;
    uint8 rtb_TmpSignalConversionAtVeSR_d;
    uint8 rtb_TmpSignalConversionAtVeS_mf;
    uint8 rtb_TmpSignalConversionAtVeSR_f;
    uint8 rtb_TmpSignalConversionAtVeSR_a;
    uint8 rtb_TmpSignalConversionAtVeS_da;
    uint8 rtb_TmpSignalConversionAtVeSR_g;
    uint8 rtb_TmpSignalConversionAtVeSR_l;
    uint8 rtb_TmpSignalConversionAtVeSR_n;
    uint8 rtb_TmpSignalConversionAtVeS_ap;
    uint8 rtb_TmpSignalConversionAtVeSR_i;
    uint8 rtb_TmpSignalConversionAtVeSR_o;
    uint8 rtb_TmpSignalConversionAtVeS_jo;

#if Rte_SysCon_VrntCR3B_THASTAT

    uint8 rtb_TmpSignalConversionAtVeS_an;

#endif

#if Rte_SysCon_VrntCR3B_THASpeedLimit

    uint8 rtb_TmpSignalConversionAtVeS_lf;

#endif

#if Rte_SysCon_VrntCR3B_TRSCSTAT

    uint8 rtb_TmpSignalConversionAtVe_daj;

#endif

#if Rte_SysCon_VrntCR3B_TRSCSpeedLimitReq

    uint8 rtb_TmpSignalConversionAtVeS_ip;

#endif

    uint8 tmpRead;
    uint8 tmpRead_0;
    uint8 tmpRead_1;
    uint8 tmpRead_2;
    uint8 tmpRead_3;
    uint8 tmpRead_4;
    uint8 tmpRead_5;
    uint8 tmpRead_6;
    uint8 tmpRead_7;
    uint8 tmpRead_8;
    uint8 tmpRead_9;
    uint8 tmpRead_a;
    uint8 tmpRead_b;
    uint8 tmpRead_c;
    uint8 tmpRead_d;
    uint8 tmpRead_e;
    uint8 tmpRead_f;
    uint8 tmpRead_g;

#if Rte_SysCon_VrntCR3B_THASTAT

    uint8 tmpRead_h;

#endif

#if Rte_SysCon_VrntCR3B_THASpeedLimit

    uint8 tmpRead_i;

#endif

#if Rte_SysCon_VrntCR3B_TRSCSTAT

    uint8 tmpRead_j;

#endif

#if Rte_SysCon_VrntCR3B_TRSCSpeedLimitReq

    uint8 tmpRead_k;

#endif

    TePWMD_e_CanLocStatus rtb_Switch;
    boolean FA_out_cz;
    boolean guard1 = false;
    boolean rtb_RelationalOperator;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACC_Systemsts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACC_Systemsts_ErrSts'
     */
    rtb_TmpSignalConversionAtVeSR1B = Rte_Read_VeSR1B_y_ACC_Systemsts_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_A);

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S11>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeCR3B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S12>/Calib'
         */
        rtb_Switch = KeCR3B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S14>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S14>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S9>/Constant'
     *  Switch: '<S14>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACC_Systemsts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S21>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACC_Systemsts_SigSts_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S18>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_0) & 3U) != 0U)
    {
        /* Transition: '<S21>:100' */
        /* Transition: '<S21>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S21>:104' */
        /*  MM */
        if ((((uint32)tmpRead_0) & 4U) != 0U)
        {
            /* Transition: '<S21>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S21>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S21>:110' */
                /* Call Tmot */
                VeSR1B_y_ACC_Systemsts_CallStatus = 3U;

                /* Event: '<S21>:40' */
                /* Transition: '<S21>:115' */
                /* Transition: '<S21>:114' */
            }
        }
        else
        {
            /* Transition: '<S21>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR1B) == 133)
            {
                /* Transition: '<S21>:95' */
                /* Transition: '<S21>:116' */
                /* Call Nothing */
                VeSR1B_y_ACC_Systemsts_CallStatus = 4U;

                /* Transition: '<S21>:114' */
            }
            else
            {
                /* Transition: '<S21>:120' */
                /* Transition: '<S21>:117' */
                /* Call Poke */
                VeSR1B_y_ACC_Systemsts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S16>/Poke' */
                /* FunctionCaller: '<S23>/Function Caller' */
                /* Event: '<S21>:38' */
                Rte_Call_PokePLTR_e_ACCSystemSts_PokePLTR_e_ACCSystemSts
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_A);

                /* End of Outputs for SubSystem: '<S16>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S21>:111' */
        /* Call Fsft */
        VeSR1B_y_ACC_Systemsts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S16>/Fsft' */
        /* FunctionCaller: '<S22>/Function Caller' */
        /* Event: '<S21>:39' */
        Rte_Call_FsftPLTR_e_ACCSystemSts_FsftPLTR_e_ACCSystemSts();

        /* End of Outputs for SubSystem: '<S16>/Fsft' */
        /* Transition: '<S21>:113' */
        /* Transition: '<S21>:115' */
        /* Transition: '<S21>:114' */
    }

    /* End of Chart: '<S18>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACC_Wheel_Torque_Enabled_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACC_Wheel_Torque_Enabled_ErrSts'
     */
    /* Transition: '<S21>:107' */
    rtb_TmpSignalConversionAtVeSR_j =
        Rte_Read_VeSR1B_b_ACC_Wheel_Torque_Enabled_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACC_Wheel_Torque_Enabled_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S27>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACC_Wheel_Torque_Enabled_SigSts_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S24>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1) & 3U) != 0U)
    {
        /* Transition: '<S27>:100' */
        /* Transition: '<S27>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S27>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1) & 4U) != 0U)
        {
            /* Transition: '<S27>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S27>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S27>:110' */
                /* Call Tmot */
                VeSR1B_y_ACC_Wheel_Torque_Enabled_CallStatus = 3U;

                /* Event: '<S27>:40' */
                /* Transition: '<S27>:115' */
                /* Transition: '<S27>:114' */
            }
        }
        else
        {
            /* Transition: '<S27>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_j) == 133)
            {
                /* Transition: '<S27>:95' */
                /* Transition: '<S27>:116' */
                /* Call Nothing */
                VeSR1B_y_ACC_Wheel_Torque_Enabled_CallStatus = 4U;

                /* Transition: '<S27>:114' */
            }
            else
            {
                /* Transition: '<S27>:120' */
                if ((((uint32)tmpRead_1) & 8U) != 0U)
                {
                    /* Transition: '<S27>:122' */
                    /* Transition: '<S27>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S27>:126' */
                }
                else
                {
                    /* Transition: '<S27>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S27>:117' */
                /* Call Poke */
                VeSR1B_y_ACC_Wheel_Torque_Enabled_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S17>/Poke' */
                /* FunctionCaller: '<S29>/Function Caller' */
                /* Event: '<S27>:38' */
                Rte_Call_PokeCCTR_b_ACCTrqEnabled_BSM_PokeCCTR_b_ACCTrqEnabled_BSM
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_A, FA_out_cz);

                /* End of Outputs for SubSystem: '<S17>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S27>:111' */
        /* Call Fsft */
        VeSR1B_y_ACC_Wheel_Torque_Enabled_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S17>/Fsft' */
        /* FunctionCaller: '<S28>/Function Caller' */
        /* Event: '<S27>:39' */
        Rte_Call_FsftCCTR_b_ACCTrqEnabled_BSM_FsftCCTR_b_ACCTrqEnabled_BSM();

        /* End of Outputs for SubSystem: '<S17>/Fsft' */
        /* Transition: '<S27>:113' */
        /* Transition: '<S27>:115' */
        /* Transition: '<S27>:114' */
    }

    /* End of Chart: '<S24>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Brk_Stat_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Brk_Stat_FD14_ErrSts'
     */
    /* Transition: '<S27>:107' */
    rtb_TmpSignalConversionAtVeSR_m = Rte_Read_VeSR1B_y_Brk_Stat_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_Brk_Stat_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S35>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Brk_Stat_FD14_SigSts_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S32>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2) & 3U) != 0U)
    {
        /* Transition: '<S35>:100' */
        /* Transition: '<S35>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S35>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2) & 4U) != 0U)
        {
            /* Transition: '<S35>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S35>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S35>:110' */
                /* Call Tmot */
                VeSR1B_y_Brk_Stat_FD14_CallStatus = 3U;

                /* Event: '<S35>:40' */
                /* Transition: '<S35>:115' */
                /* Transition: '<S35>:114' */
            }
        }
        else
        {
            /* Transition: '<S35>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_m) == 133)
            {
                /* Transition: '<S35>:95' */
                /* Transition: '<S35>:116' */
                /* Call Nothing */
                VeSR1B_y_Brk_Stat_FD14_CallStatus = 4U;

                /* Transition: '<S35>:114' */
            }
            else
            {
                /* Transition: '<S35>:120' */
                if ((((uint32)tmpRead_2) & 8U) != 0U)
                {
                    /* Transition: '<S35>:122' */
                    /* Transition: '<S35>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S35>:126' */
                }
                else
                {
                    /* Transition: '<S35>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S35>:117' */
                /* Call Poke */
                VeSR1B_y_Brk_Stat_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S30>/Poke' */
                /* FunctionCaller: '<S37>/Function Caller' */
                /* Event: '<S35>:38' */
                Rte_Call_PokeBRKR_e_BrkPedalStat2_C2CAN_PokeBRKR_e_BrkPedalStat2_C2CAN
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_B, FA_out_cz);

                /* End of Outputs for SubSystem: '<S30>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S35>:111' */
        /* Call Fsft */
        VeSR1B_y_Brk_Stat_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S30>/Fsft' */
        /* FunctionCaller: '<S36>/Function Caller' */
        /* Event: '<S35>:39' */
        Rte_Call_FsftBRKR_b_BrkPedalStat2_C2CAN_FsftBRKR_b_BrkPedalStat2_C2CAN();

        /* End of Outputs for SubSystem: '<S30>/Fsft' */
        /* Transition: '<S35>:113' */
        /* Transition: '<S35>:115' */
        /* Transition: '<S35>:114' */
    }

    /* End of Chart: '<S32>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_VehiclSpeedVSOSig_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_VehiclSpeedVSOSig_FD14_ErrSts'
     */
    /* Transition: '<S35>:107' */
    rtb_TmpSignalConversionAtVeSR_p =
        Rte_Read_VeSR1B_v_VehiclSpeedVSOSig_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_v_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_VehiclSpeedVSOSig_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S41>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_VehiclSpeedVSOSig_FD14_SigSts_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S38>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3) & 3U) != 0U)
    {
        /* Transition: '<S41>:100' */
        /* Transition: '<S41>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S41>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3) & 4U) != 0U)
        {
            /* Transition: '<S41>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S41>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S41>:110' */
                /* Call Tmot */
                VeSR1B_y_VehiclSpeedVSOSig_FD14_CallStatus = 3U;

                /* Event: '<S41>:40' */
                /* Transition: '<S41>:115' */
                /* Transition: '<S41>:114' */
            }
        }
        else
        {
            /* Transition: '<S41>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_p) == 133)
            {
                /* Transition: '<S41>:95' */
                /* Transition: '<S41>:116' */
                /* Call Nothing */
                VeSR1B_y_VehiclSpeedVSOSig_FD14_CallStatus = 4U;

                /* Transition: '<S41>:114' */
            }
            else
            {
                /* Transition: '<S41>:120' */
                if ((((uint32)tmpRead_3) & 8U) != 0U)
                {
                    /* Transition: '<S41>:122' */
                    /* Transition: '<S41>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S41>:126' */
                }
                else
                {
                    /* Transition: '<S41>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S41>:117' */
                /* Call Poke */
                VeSR1B_y_VehiclSpeedVSOSig_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S31>/Poke' */
                /* FunctionCaller: '<S43>/Function Caller' */
                /* Event: '<S41>:38' */
                Rte_Call_PokeCSVR_v_CanSigVehSpd_CANC2_PokeCSVR_v_CanSigVehSpd_CANC2
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_v_V, FA_out_cz);

                /* End of Outputs for SubSystem: '<S31>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S41>:111' */
        /* Call Fsft */
        VeSR1B_y_VehiclSpeedVSOSig_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S31>/Fsft' */
        /* FunctionCaller: '<S42>/Function Caller' */
        /* Event: '<S41>:39' */
        Rte_Call_FsftCSVR_v_CanSigVehSpd_CANC2_FsftCSVR_v_CanSigVehSpd_CANC2();

        /* End of Outputs for SubSystem: '<S31>/Fsft' */
        /* Transition: '<S41>:113' */
        /* Transition: '<S41>:115' */
        /* Transition: '<S41>:114' */
    }

    /* End of Chart: '<S38>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LatAcceltnOffset_BSM_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LatAcceltnOffset_BSM_ErrSts'
     */
    /* Transition: '<S41>:107' */
    rtb_TmpSignalConversionAtVeSR_k =
        Rte_Read_VeSR1B_a_LatAcceltnOffset_BSM_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LatAcceltnOffset_BSM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S49>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LatAcceltnOffset_BSM_SigSts_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S46>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4) & 3U) != 0U)
    {
        /* Transition: '<S49>:100' */
        /* Transition: '<S49>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S49>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4) & 4U) != 0U)
        {
            /* Transition: '<S49>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S49>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S49>:110' */
                /* Call Tmot */
                VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 3U;

                /* Event: '<S49>:40' */
                /* Transition: '<S49>:115' */
                /* Transition: '<S49>:114' */
            }
        }
        else
        {
            /* Transition: '<S49>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_k) == 133)
            {
                /* Transition: '<S49>:95' */
                /* Transition: '<S49>:116' */
                /* Call Nothing */
                VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 4U;

                /* Transition: '<S49>:114' */
            }
            else
            {
                /* Transition: '<S49>:120' */
                if ((((uint32)tmpRead_4) & 8U) != 0U)
                {
                    /* Transition: '<S49>:122' */
                    /* Transition: '<S49>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S49>:126' */
                }
                else
                {
                    /* Transition: '<S49>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S49>:117' */
                /* Call Poke */
                VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S44>/Poke' */
                /* FunctionCaller: '<S51>/Function Caller' */
                /* Event: '<S49>:38' */
                Rte_Call_PokePLTR_a_TransAccelOffset_PokePLTR_a_TransAccelOffset
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_L, FA_out_cz);

                /* End of Outputs for SubSystem: '<S44>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S49>:111' */
        /* Call Fsft */
        VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S44>/Fsft' */
        /* FunctionCaller: '<S50>/Function Caller' */
        /* Event: '<S49>:39' */
        Rte_Call_FsftPLTR_a_TransAccelOffset_FsftPLTR_a_TransAccelOffset();

        /* End of Outputs for SubSystem: '<S44>/Fsft' */
        /* Transition: '<S49>:113' */
        /* Transition: '<S49>:115' */
        /* Transition: '<S49>:114' */
    }

    /* End of Chart: '<S46>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LongAccltnOffset_BSM_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LongAccltnOffset_BSM_ErrSts'
     */
    /* Transition: '<S49>:107' */
    rtb_TmpSignalConversionAtVeSR_d =
        Rte_Read_VeSR1B_a_LongAccltnOffset_BSM_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LongAccltnOffset_BSM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S55>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LongAccltnOffset_BSM_SigSts_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S52>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5) & 3U) != 0U)
    {
        /* Transition: '<S55>:100' */
        /* Transition: '<S55>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S55>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5) & 4U) != 0U)
        {
            /* Transition: '<S55>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S55>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S55>:110' */
                /* Call Tmot */
                VeSR1B_y_LongAccltnOffset_BSM_CallStatus = 3U;

                /* Event: '<S55>:40' */
                /* Transition: '<S55>:115' */
                /* Transition: '<S55>:114' */
            }
        }
        else
        {
            /* Transition: '<S55>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_d) == 133)
            {
                /* Transition: '<S55>:95' */
                /* Transition: '<S55>:116' */
                /* Call Nothing */
                VeSR1B_y_LongAccltnOffset_BSM_CallStatus = 4U;

                /* Transition: '<S55>:114' */
            }
            else
            {
                /* Transition: '<S55>:120' */
                if ((((uint32)tmpRead_5) & 8U) != 0U)
                {
                    /* Transition: '<S55>:122' */
                    /* Transition: '<S55>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S55>:126' */
                }
                else
                {
                    /* Transition: '<S55>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S55>:117' */
                /* Call Poke */
                VeSR1B_y_LongAccltnOffset_BSM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S45>/Poke' */
                /* FunctionCaller: '<S57>/Function Caller' */
                /* Event: '<S55>:38' */
                Rte_Call_PokePLTR_a_LongAccelOffset_PokePLTR_a_LongAccelOffset
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_j, FA_out_cz);

                /* End of Outputs for SubSystem: '<S45>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S55>:111' */
        /* Call Fsft */
        VeSR1B_y_LongAccltnOffset_BSM_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S45>/Fsft' */
        /* FunctionCaller: '<S56>/Function Caller' */
        /* Event: '<S55>:39' */
        Rte_Call_FsftPLTR_a_LongAccelOffset_FsftPLTR_a_LongAccelOffset();

        /* End of Outputs for SubSystem: '<S45>/Fsft' */
        /* Transition: '<S55>:113' */
        /* Transition: '<S55>:115' */
        /* Transition: '<S55>:114' */
    }

    /* End of Chart: '<S52>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_BrakePdlPosn_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrakePdlPosn_FD14_ErrSts'
     */
    /* Transition: '<S55>:107' */
    rtb_TmpSignalConversionAtVeS_mf =
        Rte_Read_VeSR1B_Pct_BrakePdlPosn_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_BrakePdlPosn_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S62>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrakePdlPosn_FD14_SigSts_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S59>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_6) & 3U) != 0U)
    {
        /* Transition: '<S62>:100' */
        /* Transition: '<S62>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S62>:104' */
        /*  MM */
        if ((((uint32)tmpRead_6) & 4U) != 0U)
        {
            /* Transition: '<S62>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S62>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S62>:110' */
                /* Call Tmot */
                VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 3U;

                /* Event: '<S62>:40' */
                /* Transition: '<S62>:115' */
                /* Transition: '<S62>:114' */
            }
        }
        else
        {
            /* Transition: '<S62>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mf) == 133)
            {
                /* Transition: '<S62>:95' */
                /* Transition: '<S62>:116' */
                /* Call Nothing */
                VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 4U;

                /* Transition: '<S62>:114' */
            }
            else
            {
                /* Transition: '<S62>:120' */
                if ((((uint32)tmpRead_6) & 8U) != 0U)
                {
                    /* Transition: '<S62>:122' */
                    /* Transition: '<S62>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S62>:126' */
                }
                else
                {
                    /* Transition: '<S62>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S62>:117' */
                /* Call Poke */
                VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S58>/Poke' */
                /* FunctionCaller: '<S64>/Function Caller' */
                /* Event: '<S62>:38' */
                Rte_Call_PokeBRKR_Pct_BrkTravelSt_C2CAN_PokeBRKR_Pct_BrkTravelSt_C2CAN
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_Pct, FA_out_cz);

                /* End of Outputs for SubSystem: '<S58>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S62>:111' */
        /* Call Fsft */
        VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S58>/Fsft' */
        /* FunctionCaller: '<S63>/Function Caller' */
        /* Event: '<S62>:39' */
        Rte_Call_FsftBRKR_b_BrkTravelSts_C2CAN_FsftBRKR_b_BrkTravelSts_C2CAN();

        /* End of Outputs for SubSystem: '<S58>/Fsft' */
        /* Transition: '<S62>:113' */
        /* Transition: '<S62>:115' */
        /* Transition: '<S62>:114' */
    }

    /* End of Chart: '<S59>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LwsAngle_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LwsAngle_FD14_ErrSts'
     */
    /* Transition: '<S62>:107' */
    rtb_TmpSignalConversionAtVeSR_f = Rte_Read_VeSR1B_phi_LwsAngle_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_phi);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LwsAngle_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S70>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LwsAngle_FD14_SigSts_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S67>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_7) & 3U) != 0U)
    {
        /* Transition: '<S70>:100' */
        /* Transition: '<S70>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S70>:104' */
        /*  MM */
        if ((((uint32)tmpRead_7) & 4U) != 0U)
        {
            /* Transition: '<S70>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S70>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S70>:110' */
                /* Call Tmot */
                VeSR1B_y_LwsAngle_FD14_CallStatus = 3U;

                /* Event: '<S70>:40' */
                /* Transition: '<S70>:115' */
                /* Transition: '<S70>:114' */
            }
        }
        else
        {
            /* Transition: '<S70>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_f) == 133)
            {
                /* Transition: '<S70>:95' */
                /* Transition: '<S70>:116' */
                /* Call Nothing */
                VeSR1B_y_LwsAngle_FD14_CallStatus = 4U;

                /* Transition: '<S70>:114' */
            }
            else
            {
                /* Transition: '<S70>:120' */
                if ((((uint32)tmpRead_7) & 8U) != 0U)
                {
                    /* Transition: '<S70>:122' */
                    /* Transition: '<S70>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S70>:126' */
                }
                else
                {
                    /* Transition: '<S70>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S70>:117' */
                /* Call Poke */
                VeSR1B_y_LwsAngle_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S65>/Poke' */
                /* FunctionCaller: '<S72>/Function Caller' */
                /* Event: '<S70>:38' */
                Rte_Call_PokePLTR_phi_LwsAngle_PokePLTR_phi_LwsAngle
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_phi, FA_out_cz);

                /* End of Outputs for SubSystem: '<S65>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S70>:111' */
        /* Call Fsft */
        VeSR1B_y_LwsAngle_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S65>/Fsft' */
        /* FunctionCaller: '<S71>/Function Caller' */
        /* Event: '<S70>:39' */
        Rte_Call_FsftPLTR_phi_LwsAngle_FsftPLTR_phi_LwsAngle();

        /* End of Outputs for SubSystem: '<S65>/Fsft' */
        /* Transition: '<S70>:113' */
        /* Transition: '<S70>:115' */
        /* Transition: '<S70>:114' */
    }

    /* End of Chart: '<S67>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LwsSpeed_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LwsSpeed_FD14_ErrSts'
     */
    /* Transition: '<S70>:107' */
    rtb_TmpSignalConversionAtVeSR_a = Rte_Read_VeSR1B_dphi_LwsSpeed_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_dph);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LwsSpeed_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S75>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LwsSpeed_FD14_SigSts_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S73>/Chart' */
    if ((((uint32)tmpRead_8) & 3U) != 0U)
    {
        /* Transition: '<S75>:100' */
        /* Transition: '<S75>:103' */
        /* Transition: '<S75>:111' */
        /* Call Fsft */
        VeSR1B_y_LwsSpeed_FD14_CallStatus = 2U;

        /* Event: '<S75>:39' */
        /* Transition: '<S75>:113' */
        /* Transition: '<S75>:115' */
        /* Transition: '<S75>:114' */
    }
    else
    {
        /* Transition: '<S75>:104' */
        /*  MM */
        if ((((uint32)tmpRead_8) & 4U) != 0U)
        {
            /* Transition: '<S75>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S75>:88' */
                /* Transition: '<S75>:111' */
                /* Call Fsft */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 2U;

                /* Event: '<S75>:39' */
                /* Transition: '<S75>:113' */
                /* Transition: '<S75>:115' */
                /* Transition: '<S75>:114' */
            }
            else
            {
                /* Transition: '<S75>:110' */
                /* Call Tmot */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 3U;

                /* Event: '<S75>:40' */
                /* Transition: '<S75>:115' */
                /* Transition: '<S75>:114' */
            }
        }
        else
        {
            /* Transition: '<S75>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_a) == 133)
            {
                /* Transition: '<S75>:95' */
                /* Transition: '<S75>:116' */
                /* Call Nothing */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 4U;

                /* Transition: '<S75>:114' */
            }
            else
            {
                /* Transition: '<S75>:120' */
                /* Transition: '<S75>:117' */
                /* Call Poke */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S66>/Poke' */
                /* FunctionCaller: '<S76>/Function Caller' */
                /* Event: '<S75>:38' */
                Rte_Call_PokePLTR_dphi_LwsSpeed_PokePLTR_dphi_LwsSpeed
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_dph);

                /* End of Outputs for SubSystem: '<S66>/Poke' */
            }
        }
    }

    /* End of Chart: '<S73>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IMPACTCommand_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IMPACTCommand_FD14_ErrSts'
     */
    /* Transition: '<S75>:107' */
    rtb_TmpSignalConversionAtVeS_da = Rte_Read_VeSR1B_b_IMPACTCommand_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IMPACTCommand_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S82>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IMPACTCommand_FD14_SigSts_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S79>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_9) & 3U) != 0U)
    {
        /* Transition: '<S82>:100' */
        /* Transition: '<S82>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S82>:104' */
        /*  MM */
        if ((((uint32)tmpRead_9) & 4U) != 0U)
        {
            /* Transition: '<S82>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S82>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S82>:110' */
                /* Call Tmot */
                VeSR1B_y_IMPACTCommand_FD14_CallStatus = 3U;

                /* Event: '<S82>:40' */
                /* Transition: '<S82>:115' */
                /* Transition: '<S82>:114' */
            }
        }
        else
        {
            /* Transition: '<S82>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_da) == 133)
            {
                /* Transition: '<S82>:95' */
                /* Transition: '<S82>:116' */
                /* Call Nothing */
                VeSR1B_y_IMPACTCommand_FD14_CallStatus = 4U;

                /* Transition: '<S82>:114' */
            }
            else
            {
                /* Transition: '<S82>:120' */
                /* Transition: '<S82>:117' */
                /* Call Poke */
                VeSR1B_y_IMPACTCommand_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S77>/Poke' */
                /* FunctionCaller: '<S84>/Function Caller' */
                /* Event: '<S82>:38' */
                Rte_Call_PokeIMPR_b_VehImpactDetected_PokeIMPR_b_VehImpactDetected
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_I);

                /* End of Outputs for SubSystem: '<S77>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S82>:111' */
        /* Call Fsft */
        VeSR1B_y_IMPACTCommand_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S77>/Fsft' */
        /* FunctionCaller: '<S83>/Function Caller' */
        /* Event: '<S82>:39' */
        Rte_Call_FsftIMPR_b_VehImpactDetected_FsftIMPR_b_VehImpactDetected();

        /* End of Outputs for SubSystem: '<S77>/Fsft' */
        /* Transition: '<S82>:113' */
        /* Transition: '<S82>:115' */
        /* Transition: '<S82>:114' */
    }

    /* End of Chart: '<S79>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IMPACTConfirm_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IMPACTConfirm_FD14_ErrSts'
     */
    /* Transition: '<S82>:107' */
    rtb_TmpSignalConversionAtVeSR_g = Rte_Read_VeSR1B_b_IMPACTConfirm_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IMPACTConfirm_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S88>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IMPACTConfirm_FD14_SigSts_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S85>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_a) & 3U) != 0U)
    {
        /* Transition: '<S88>:100' */
        /* Transition: '<S88>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S88>:104' */
        /*  MM */
        if ((((uint32)tmpRead_a) & 4U) != 0U)
        {
            /* Transition: '<S88>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S88>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S88>:110' */
                /* Call Tmot */
                VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 3U;

                /* Event: '<S88>:40' */
                /* Transition: '<S88>:115' */
                /* Transition: '<S88>:114' */
            }
        }
        else
        {
            /* Transition: '<S88>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_g) == 133)
            {
                /* Transition: '<S88>:95' */
                /* Transition: '<S88>:116' */
                /* Call Nothing */
                VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 4U;

                /* Transition: '<S88>:114' */
            }
            else
            {
                /* Transition: '<S88>:120' */
                /* Transition: '<S88>:117' */
                /* Call Poke */
                VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S78>/Poke' */
                /* FunctionCaller: '<S90>/Function Caller' */
                /* Event: '<S88>:38' */
                Rte_Call_PokeIMPR_b_ImpactToggle_PokeIMPR_b_ImpactToggle
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_e);

                /* End of Outputs for SubSystem: '<S78>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S88>:111' */
        /* Call Fsft */
        VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S78>/Fsft' */
        /* FunctionCaller: '<S89>/Function Caller' */
        /* Event: '<S88>:39' */
        Rte_Call_FsftIMPR_b_ImpactToggle_FsftIMPR_b_ImpactToggle();

        /* End of Outputs for SubSystem: '<S78>/Fsft' */
        /* Transition: '<S88>:113' */
        /* Transition: '<S88>:115' */
        /* Transition: '<S88>:114' */
    }

    /* End of Chart: '<S85>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LatAcceleration_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LatAcceleration_FD14_ErrSts'
     */
    /* Transition: '<S88>:107' */
    rtb_TmpSignalConversionAtVeSR_l =
        Rte_Read_VeSR1B_a_LatAcceleration_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LatAcceleration_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S99>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LatAcceleration_FD14_SigSts_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S97>/Chart' */
    if ((((uint32)tmpRead_b) & 3U) != 0U)
    {
        /* Transition: '<S99>:100' */
        /* Transition: '<S99>:103' */
        /* Transition: '<S99>:111' */
        /* Call Fsft */
        VeSR1B_y_LatAcceleration_FD14_CallStatus = 2U;

        /* Event: '<S99>:39' */
        /* Transition: '<S99>:113' */
        /* Transition: '<S99>:115' */
        /* Transition: '<S99>:114' */
    }
    else
    {
        /* Transition: '<S99>:104' */
        /*  MM */
        if ((((uint32)tmpRead_b) & 4U) != 0U)
        {
            /* Transition: '<S99>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S99>:88' */
                /* Transition: '<S99>:111' */
                /* Call Fsft */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 2U;

                /* Event: '<S99>:39' */
                /* Transition: '<S99>:113' */
                /* Transition: '<S99>:115' */
                /* Transition: '<S99>:114' */
            }
            else
            {
                /* Transition: '<S99>:110' */
                /* Call Tmot */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 3U;

                /* Event: '<S99>:40' */
                /* Transition: '<S99>:115' */
                /* Transition: '<S99>:114' */
            }
        }
        else
        {
            /* Transition: '<S99>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_l) == 133)
            {
                /* Transition: '<S99>:95' */
                /* Transition: '<S99>:116' */
                /* Call Nothing */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 4U;

                /* Transition: '<S99>:114' */
            }
            else
            {
                /* Transition: '<S99>:120' */
                /* Transition: '<S99>:117' */
                /* Call Poke */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S91>/Poke' */
                /* FunctionCaller: '<S100>/Function Caller' */
                /* Event: '<S99>:38' */
                Rte_Call_PokePLTR_a_LatAccel_ORC_PokePLTR_a_LatAccel_ORC
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_h);

                /* End of Outputs for SubSystem: '<S91>/Poke' */
            }
        }
    }

    /* End of Chart: '<S97>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LatAcceltnFailSts_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LatAcceltnFailSts_FD14_ErrSts'
     */
    /* Transition: '<S99>:107' */
    rtb_TmpSignalConversionAtVeSR_n =
        Rte_Read_VeSR1B_b_LatAcceltnFailSts_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LatAcceltnFailSts_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S103>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LatAcceltnFailSts_FD14_SigSts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S101>/Chart' */
    if ((((uint32)tmpRead_c) & 3U) != 0U)
    {
        /* Transition: '<S103>:100' */
        /* Transition: '<S103>:103' */
        /* Transition: '<S103>:111' */
        /* Call Fsft */
        VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 2U;

        /* Event: '<S103>:39' */
        /* Transition: '<S103>:113' */
        /* Transition: '<S103>:115' */
        /* Transition: '<S103>:114' */
    }
    else
    {
        /* Transition: '<S103>:104' */
        /*  MM */
        if ((((uint32)tmpRead_c) & 4U) != 0U)
        {
            /* Transition: '<S103>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S103>:88' */
                /* Transition: '<S103>:111' */
                /* Call Fsft */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 2U;

                /* Event: '<S103>:39' */
                /* Transition: '<S103>:113' */
                /* Transition: '<S103>:115' */
                /* Transition: '<S103>:114' */
            }
            else
            {
                /* Transition: '<S103>:110' */
                /* Call Tmot */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 3U;

                /* Event: '<S103>:40' */
                /* Transition: '<S103>:115' */
                /* Transition: '<S103>:114' */
            }
        }
        else
        {
            /* Transition: '<S103>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_n) == 133)
            {
                /* Transition: '<S103>:95' */
                /* Transition: '<S103>:116' */
                /* Call Nothing */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 4U;

                /* Transition: '<S103>:114' */
            }
            else
            {
                /* Transition: '<S103>:120' */
                /* Transition: '<S103>:117' */
                /* Call Poke */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S92>/Poke' */
                /* FunctionCaller: '<S104>/Function Caller' */
                /* Event: '<S103>:38' */
                Rte_Call_PokePLTR_b_LatAccelFailSts_ORC_PokePLTR_b_LatAccelFailSts_ORC
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_L);

                /* End of Outputs for SubSystem: '<S92>/Poke' */
            }
        }
    }

    /* End of Chart: '<S101>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LongAccelration_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LongAccelration_FD14_ErrSts'
     */
    /* Transition: '<S103>:107' */
    rtb_TmpSignalConversionAtVeS_ap =
        Rte_Read_VeSR1B_a_LongAccelration_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LongAccelration_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S107>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LongAccelration_FD14_SigSts_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S105>/Chart' */
    if ((((uint32)tmpRead_d) & 3U) != 0U)
    {
        /* Transition: '<S107>:100' */
        /* Transition: '<S107>:103' */
        /* Transition: '<S107>:111' */
        /* Call Fsft */
        VeSR1B_y_LongAccelration_FD14_CallStatus = 2U;

        /* Event: '<S107>:39' */
        /* Transition: '<S107>:113' */
        /* Transition: '<S107>:115' */
        /* Transition: '<S107>:114' */
    }
    else
    {
        /* Transition: '<S107>:104' */
        /*  MM */
        if ((((uint32)tmpRead_d) & 4U) != 0U)
        {
            /* Transition: '<S107>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S107>:88' */
                /* Transition: '<S107>:111' */
                /* Call Fsft */
                VeSR1B_y_LongAccelration_FD14_CallStatus = 2U;

                /* Event: '<S107>:39' */
                /* Transition: '<S107>:113' */
                /* Transition: '<S107>:115' */
                /* Transition: '<S107>:114' */
            }
            else
            {
                /* Transition: '<S107>:110' */
                /* Call Tmot */
                VeSR1B_y_LongAccelration_FD14_CallStatus = 3U;

                /* Event: '<S107>:40' */
                /* Transition: '<S107>:115' */
                /* Transition: '<S107>:114' */
            }
        }
        else
        {
            /* Transition: '<S107>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ap) == 133)
            {
                /* Transition: '<S107>:95' */
                /* Transition: '<S107>:116' */
                /* Call Nothing */
                VeSR1B_y_LongAccelration_FD14_CallStatus = 4U;

                /* Transition: '<S107>:114' */
            }
            else
            {
                /* Transition: '<S107>:120' */
                /* Transition: '<S107>:117' */
                /* Call Poke */
                VeSR1B_y_LongAccelration_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S93>/Poke' */
                /* FunctionCaller: '<S108>/Function Caller' */
                /* Event: '<S107>:38' */
                Rte_Call_PokePLTR_a_LongAccel_ORC_PokePLTR_a_LongAccel_ORC
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_a_m);

                /* End of Outputs for SubSystem: '<S93>/Poke' */
            }
        }
    }

    /* End of Chart: '<S105>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LongAccltnFailSts_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LongAccltnFailSts_FD14_ErrSts'
     */
    /* Transition: '<S107>:107' */
    rtb_TmpSignalConversionAtVeSR_i =
        Rte_Read_VeSR1B_b_LongAccltnFailSts_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LongAccltnFailSts_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S111>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LongAccltnFailSts_FD14_SigSts_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S109>/Chart' */
    if ((((uint32)tmpRead_e) & 3U) != 0U)
    {
        /* Transition: '<S111>:100' */
        /* Transition: '<S111>:103' */
        /* Transition: '<S111>:111' */
        /* Call Fsft */
        VeSR1B_y_LongAccltnFailSts_FD14_CallStatus = 2U;

        /* Event: '<S111>:39' */
        /* Transition: '<S111>:113' */
        /* Transition: '<S111>:115' */
        /* Transition: '<S111>:114' */
    }
    else
    {
        /* Transition: '<S111>:104' */
        /*  MM */
        if ((((uint32)tmpRead_e) & 4U) != 0U)
        {
            /* Transition: '<S111>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S111>:88' */
                /* Transition: '<S111>:111' */
                /* Call Fsft */
                VeSR1B_y_LongAccltnFailSts_FD14_CallStatus = 2U;

                /* Event: '<S111>:39' */
                /* Transition: '<S111>:113' */
                /* Transition: '<S111>:115' */
                /* Transition: '<S111>:114' */
            }
            else
            {
                /* Transition: '<S111>:110' */
                /* Call Tmot */
                VeSR1B_y_LongAccltnFailSts_FD14_CallStatus = 3U;

                /* Event: '<S111>:40' */
                /* Transition: '<S111>:115' */
                /* Transition: '<S111>:114' */
            }
        }
        else
        {
            /* Transition: '<S111>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_i) == 133)
            {
                /* Transition: '<S111>:95' */
                /* Transition: '<S111>:116' */
                /* Call Nothing */
                VeSR1B_y_LongAccltnFailSts_FD14_CallStatus = 4U;

                /* Transition: '<S111>:114' */
            }
            else
            {
                /* Transition: '<S111>:120' */
                /* Transition: '<S111>:117' */
                /* Call Poke */
                VeSR1B_y_LongAccltnFailSts_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S94>/Poke' */
                /* FunctionCaller: '<S112>/Function Caller' */
                /* Event: '<S111>:38' */
                Rte_Call_PokePLTR_b_LongAccelFailSts_ORC_PokePLTR_b_LongAccelFailSts_ORC
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_p);

                /* End of Outputs for SubSystem: '<S94>/Poke' */
            }
        }
    }

    /* End of Chart: '<S109>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_YawRate_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_YawRate_FD14_ErrSts'
     */
    /* Transition: '<S111>:107' */
    rtb_TmpSignalConversionAtVeSR_o = Rte_Read_VeSR1B_dphi_YawRate_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_d_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_YawRate_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S115>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_YawRate_FD14_SigSts_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S113>/Chart' */
    if ((((uint32)tmpRead_f) & 3U) != 0U)
    {
        /* Transition: '<S115>:100' */
        /* Transition: '<S115>:103' */
        /* Transition: '<S115>:111' */
        /* Call Fsft */
        VeSR1B_y_YawRate_FD14_CallStatus = 2U;

        /* Event: '<S115>:39' */
        /* Transition: '<S115>:113' */
        /* Transition: '<S115>:115' */
        /* Transition: '<S115>:114' */
    }
    else
    {
        /* Transition: '<S115>:104' */
        /*  MM */
        if ((((uint32)tmpRead_f) & 4U) != 0U)
        {
            /* Transition: '<S115>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S115>:88' */
                /* Transition: '<S115>:111' */
                /* Call Fsft */
                VeSR1B_y_YawRate_FD14_CallStatus = 2U;

                /* Event: '<S115>:39' */
                /* Transition: '<S115>:113' */
                /* Transition: '<S115>:115' */
                /* Transition: '<S115>:114' */
            }
            else
            {
                /* Transition: '<S115>:110' */
                /* Call Tmot */
                VeSR1B_y_YawRate_FD14_CallStatus = 3U;

                /* Event: '<S115>:40' */
                /* Transition: '<S115>:115' */
                /* Transition: '<S115>:114' */
            }
        }
        else
        {
            /* Transition: '<S115>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_o) == 133)
            {
                /* Transition: '<S115>:95' */
                /* Transition: '<S115>:116' */
                /* Call Nothing */
                VeSR1B_y_YawRate_FD14_CallStatus = 4U;

                /* Transition: '<S115>:114' */
            }
            else
            {
                /* Transition: '<S115>:120' */
                /* Transition: '<S115>:117' */
                /* Call Poke */
                VeSR1B_y_YawRate_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S95>/Poke' */
                /* FunctionCaller: '<S116>/Function Caller' */
                /* Event: '<S115>:38' */
                Rte_Call_PokePLTR_dphi_YawRate_ORC_PokePLTR_dphi_YawRate_ORC
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_d_m);

                /* End of Outputs for SubSystem: '<S95>/Poke' */
            }
        }
    }

    /* End of Chart: '<S113>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_YawRateFailSts_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_YawRateFailSts_FD14_ErrSts'
     */
    /* Transition: '<S115>:107' */
    rtb_TmpSignalConversionAtVeS_jo =
        Rte_Read_VeSR1B_b_YawRateFailSts_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_Y);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_YawRateFailSts_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S119>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_YawRateFailSts_FD14_SigSts_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S117>/Chart' */
    if ((((uint32)tmpRead_g) & 3U) != 0U)
    {
        /* Transition: '<S119>:100' */
        /* Transition: '<S119>:103' */
        /* Transition: '<S119>:111' */
        /* Call Fsft */
        VeSR1B_y_YawRateFailSts_FD14_CallStatus = 2U;

        /* Event: '<S119>:39' */
        /* Transition: '<S119>:113' */
        /* Transition: '<S119>:115' */
        /* Transition: '<S119>:114' */
    }
    else
    {
        /* Transition: '<S119>:104' */
        /*  MM */
        if ((((uint32)tmpRead_g) & 4U) != 0U)
        {
            /* Transition: '<S119>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S119>:88' */
                /* Transition: '<S119>:111' */
                /* Call Fsft */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 2U;

                /* Event: '<S119>:39' */
                /* Transition: '<S119>:113' */
                /* Transition: '<S119>:115' */
                /* Transition: '<S119>:114' */
            }
            else
            {
                /* Transition: '<S119>:110' */
                /* Call Tmot */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 3U;

                /* Event: '<S119>:40' */
                /* Transition: '<S119>:115' */
                /* Transition: '<S119>:114' */
            }
        }
        else
        {
            /* Transition: '<S119>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_jo) == 133)
            {
                /* Transition: '<S119>:95' */
                /* Transition: '<S119>:116' */
                /* Call Nothing */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 4U;

                /* Transition: '<S119>:114' */
            }
            else
            {
                /* Transition: '<S119>:120' */
                /* Transition: '<S119>:117' */
                /* Call Poke */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S96>/Poke' */
                /* FunctionCaller: '<S120>/Function Caller' */
                /* Event: '<S119>:38' */
                Rte_Call_PokePLTR_b_YawRateFailSts_ORC_PokePLTR_b_YawRateFailSts_ORC
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_Y);

                /* End of Outputs for SubSystem: '<S96>/Poke' */
            }
        }
    }

    /* End of Chart: '<S117>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_THA_STAT_FD14' incorporates:
     *  Inport: '<Root>/VeSR1B_y_THA_STAT_FD14_SigSts'
     */
    /* Transition: '<S119>:107' */
#if Rte_SysCon_VrntCR3B_THASTAT

    /* Outputs for Atomic SubSystem: '<S15>/THA_STAT' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_THA_STAT_FD14' incorporates:
     *  Inport: '<Root>/VeSR1B_y_THA_STAT_FD14'
     */
    rtb_TmpSignalConversionAtVeS_an = Rte_Read_VeSR1B_y_THA_STAT_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_T);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S129>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_THA_STAT_FD14_SigSts_Value(&tmpRead_h);

    /* Outputs for Atomic SubSystem: '<S121>/THA_STAT' */
    /* Chart: '<S126>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_THA_STAT_FD14_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_h) & 3U) != 0U)
    {
        /* Transition: '<S129>:100' */
        /* Transition: '<S129>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S129>:104' */
        /*  MM */
        if ((((uint32)tmpRead_h) & 4U) != 0U)
        {
            /* Transition: '<S129>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S129>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S129>:110' */
                /* Call Tmot */
                VeSR1B_y_THA_STAT_FD14_CallStatus = 3U;

                /* Event: '<S129>:40' */
                /* Transition: '<S129>:115' */
                /* Transition: '<S129>:114' */
            }
        }
        else
        {
            /* Transition: '<S129>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_an) == 133)
            {
                /* Transition: '<S129>:95' */
                /* Transition: '<S129>:116' */
                /* Call Nothing */
                VeSR1B_y_THA_STAT_FD14_CallStatus = 4U;

                /* Transition: '<S129>:114' */
            }
            else
            {
                /* Transition: '<S129>:120' */
                if ((((uint32)tmpRead_h) & 8U) != 0U)
                {
                    /* Transition: '<S129>:122' */
                    /* Transition: '<S129>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S129>:126' */
                }
                else
                {
                    /* Transition: '<S129>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S129>:117' */
                /* Call Poke */
                VeSR1B_y_THA_STAT_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S125>/Poke' */
                /* FunctionCaller: '<S131>/Function Caller' */
                /* Event: '<S129>:38' */
                Rte_Call_PokeCSVR_e_THA_STAT_PokeCSVR_e_THA_STAT
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_T, FA_out_cz);

                /* End of Outputs for SubSystem: '<S125>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S129>:111' */
        /* Call Fsft */
        VeSR1B_y_THA_STAT_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S125>/Fsft' */
        /* FunctionCaller: '<S130>/Function Caller' */
        /* Event: '<S129>:39' */
        Rte_Call_FsftCSVR_b_THA_STAT_FsftCSVR_b_THA_STAT();

        /* End of Outputs for SubSystem: '<S125>/Fsft' */
        /* Transition: '<S129>:113' */
        /* Transition: '<S129>:115' */
        /* Transition: '<S129>:114' */
    }

    /* End of Chart: '<S126>/Chart' */
    /* End of Outputs for SubSystem: '<S121>/THA_STAT' */
    /* End of Outputs for SubSystem: '<S15>/THA_STAT' */
    /* Transition: '<S129>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_THA_STAT_FD14' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_THA_Speed_Limit_FD14' incorporates:
     *  Inport: '<Root>/VeSR1B_y_THA_Speed_Limit_FD14_SigSts'
     */
#if Rte_SysCon_VrntCR3B_THASpeedLimit

    /* Outputs for Atomic SubSystem: '<S15>/THA_Speed_Limit' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_THA_Speed_Limit_FD14' incorporates:
     *  Inport: '<Root>/VeSR1B_y_THA_Speed_Limit_FD14'
     */
    rtb_TmpSignalConversionAtVeS_lf =
        Rte_Read_VeSR1B_y_THA_Speed_Limit_FD14_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_a);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S136>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_THA_Speed_Limit_FD14_SigSts_Value(&tmpRead_i);

    /* Outputs for Atomic SubSystem: '<S122>/THA_Speed_Limit' */
    /* Chart: '<S133>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_THA_Speed_Limit_FD14_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_i) & 3U) != 0U)
    {
        /* Transition: '<S136>:100' */
        /* Transition: '<S136>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S136>:104' */
        /*  MM */
        if ((((uint32)tmpRead_i) & 4U) != 0U)
        {
            /* Transition: '<S136>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S136>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S136>:110' */
                /* Call Tmot */
                VeSR1B_y_THA_Speed_Limit_FD14_CallStatus = 3U;

                /* Event: '<S136>:40' */
                /* Transition: '<S136>:115' */
                /* Transition: '<S136>:114' */
            }
        }
        else
        {
            /* Transition: '<S136>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_lf) == 133)
            {
                /* Transition: '<S136>:95' */
                /* Transition: '<S136>:116' */
                /* Call Nothing */
                VeSR1B_y_THA_Speed_Limit_FD14_CallStatus = 4U;

                /* Transition: '<S136>:114' */
            }
            else
            {
                /* Transition: '<S136>:120' */
                if ((((uint32)tmpRead_i) & 8U) != 0U)
                {
                    /* Transition: '<S136>:122' */
                    /* Transition: '<S136>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S136>:126' */
                }
                else
                {
                    /* Transition: '<S136>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S136>:117' */
                /* Call Poke */
                VeSR1B_y_THA_Speed_Limit_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S132>/Poke' */
                /* FunctionCaller: '<S138>/Function Caller' */
                /* Event: '<S136>:38' */
                Rte_Call_PokeCSVR_e_THA_SpdLim_PokeCSVR_e_THA_SpdLim
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_a, FA_out_cz);

                /* End of Outputs for SubSystem: '<S132>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S136>:111' */
        /* Call Fsft */
        VeSR1B_y_THA_Speed_Limit_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S132>/Fsft' */
        /* FunctionCaller: '<S137>/Function Caller' */
        /* Event: '<S136>:39' */
        Rte_Call_FsftCSVR_b_THA_SpdLim_FsftCSVR_b_THA_SpdLim();

        /* End of Outputs for SubSystem: '<S132>/Fsft' */
        /* Transition: '<S136>:113' */
        /* Transition: '<S136>:115' */
        /* Transition: '<S136>:114' */
    }

    /* End of Chart: '<S133>/Chart' */
    /* End of Outputs for SubSystem: '<S122>/THA_Speed_Limit' */
    /* End of Outputs for SubSystem: '<S15>/THA_Speed_Limit' */
    /* Transition: '<S136>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_THA_Speed_Limit_FD14' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_TRSC_STAT' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TRSC_STAT_SigSts'
     */
#if Rte_SysCon_VrntCR3B_TRSCSTAT

    /* Outputs for Atomic SubSystem: '<S15>/TRSC_STAT' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_TRSC_STAT' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TRSC_STAT'
     */
    rtb_TmpSignalConversionAtVe_daj = Rte_Read_VeSR1B_y_TRSC_STAT_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_d);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S143>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TRSC_STAT_SigSts_Value(&tmpRead_j);

    /* Outputs for Atomic SubSystem: '<S123>/TRSC_STAT' */
    /* Chart: '<S140>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TRSC_STAT_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_j) & 3U) != 0U)
    {
        /* Transition: '<S143>:100' */
        /* Transition: '<S143>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S143>:104' */
        /*  MM */
        if ((((uint32)tmpRead_j) & 4U) != 0U)
        {
            /* Transition: '<S143>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S143>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S143>:110' */
                /* Call Tmot */
                VeSR1B_y_TRSC_STAT_CallStatus = 3U;

                /* Event: '<S143>:40' */
                /* Transition: '<S143>:115' */
                /* Transition: '<S143>:114' */
            }
        }
        else
        {
            /* Transition: '<S143>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_daj) == 133)
            {
                /* Transition: '<S143>:95' */
                /* Transition: '<S143>:116' */
                /* Call Nothing */
                VeSR1B_y_TRSC_STAT_CallStatus = 4U;

                /* Transition: '<S143>:114' */
            }
            else
            {
                /* Transition: '<S143>:120' */
                if ((((uint32)tmpRead_j) & 8U) != 0U)
                {
                    /* Transition: '<S143>:122' */
                    /* Transition: '<S143>:125' */
                    FA_out_cz = true;

                    /* Transition: '<S143>:126' */
                }
                else
                {
                    /* Transition: '<S143>:124' */
                    FA_out_cz = false;
                }

                /* Transition: '<S143>:117' */
                /* Call Poke */
                VeSR1B_y_TRSC_STAT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S139>/Poke' */
                /* FunctionCaller: '<S145>/Function Caller' */
                /* Event: '<S143>:38' */
                Rte_Call_PokeCSVR_e_TRSC_STAT_PokeCSVR_e_TRSC_STAT
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_d, FA_out_cz);

                /* End of Outputs for SubSystem: '<S139>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S143>:111' */
        /* Call Fsft */
        VeSR1B_y_TRSC_STAT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S139>/Fsft' */
        /* FunctionCaller: '<S144>/Function Caller' */
        /* Event: '<S143>:39' */
        Rte_Call_FsftCSVR_b_TRSC_STAT_FsftCSVR_b_TRSC_STAT();

        /* End of Outputs for SubSystem: '<S139>/Fsft' */
        /* Transition: '<S143>:113' */
        /* Transition: '<S143>:115' */
        /* Transition: '<S143>:114' */
    }

    /* End of Chart: '<S140>/Chart' */
    /* End of Outputs for SubSystem: '<S123>/TRSC_STAT' */
    /* End of Outputs for SubSystem: '<S15>/TRSC_STAT' */
    /* Transition: '<S143>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_TRSC_STAT' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_TRSC_SpeedLimit_Req' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TRSC_SpeedLimit_Req_SigSts'
     */
#if Rte_SysCon_VrntCR3B_TRSCSpeedLimitReq

    /* Outputs for Atomic SubSystem: '<S15>/TRSC_SpeedLimit_Req' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_TRSC_SpeedLimit_Req' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TRSC_SpeedLimit_Req'
     */
    rtb_TmpSignalConversionAtVeS_ip =
        Rte_Read_VeSR1B_y_TRSC_SpeedLimit_Req_Value
        (&CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_h);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S150>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TRSC_SpeedLimit_Req_SigSts_Value(&tmpRead_k);

    /* Outputs for Atomic SubSystem: '<S124>/TRSC_SpeedLimit_Req' */
    /* Chart: '<S147>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TRSC_SpeedLimit_Req_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_k) & 3U) != 0U)
    {
        /* Transition: '<S150>:100' */
        /* Transition: '<S150>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S150>:104' */
        /*  MM */
        if ((((uint32)tmpRead_k) & 4U) != 0U)
        {
            /* Transition: '<S150>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S150>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S150>:110' */
                /* Call Tmot */
                VeSR1B_y_TRSC_SpeedLimit_Req_CallStatus = 3U;

                /* Event: '<S150>:40' */
                /* Transition: '<S150>:115' */
                /* Transition: '<S150>:114' */
            }
        }
        else
        {
            /* Transition: '<S150>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ip) == 133)
            {
                /* Transition: '<S150>:95' */
                /* Transition: '<S150>:116' */
                /* Call Nothing */
                VeSR1B_y_TRSC_SpeedLimit_Req_CallStatus = 4U;

                /* Transition: '<S150>:114' */
            }
            else
            {
                /* Transition: '<S150>:120' */
                if ((((uint32)tmpRead_k) & 8U) != 0U)
                {
                    /* Transition: '<S150>:122' */
                    /* Transition: '<S150>:125' */
                    rtb_RelationalOperator = true;

                    /* Transition: '<S150>:126' */
                }
                else
                {
                    /* Transition: '<S150>:124' */
                    rtb_RelationalOperator = false;
                }

                /* Transition: '<S150>:117' */
                /* Call Poke */
                VeSR1B_y_TRSC_SpeedLimit_Req_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S146>/Poke' */
                /* FunctionCaller: '<S152>/Function Caller' */
                /* Event: '<S150>:38' */
                Rte_Call_PokeCSVR_e_TRSC_SpdLimReq_PokeCSVR_e_TRSC_SpdLimReq
                    (CR3B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_h,
                     rtb_RelationalOperator);

                /* End of Outputs for SubSystem: '<S146>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S150>:111' */
        /* Call Fsft */
        VeSR1B_y_TRSC_SpeedLimit_Req_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S146>/Fsft' */
        /* FunctionCaller: '<S151>/Function Caller' */
        /* Event: '<S150>:39' */
        Rte_Call_FsftCSVR_b_TRSC_SpdLimReq_FsftCSVR_b_TRSC_SpdLimReq();

        /* End of Outputs for SubSystem: '<S146>/Fsft' */
        /* Transition: '<S150>:113' */
        /* Transition: '<S150>:115' */
        /* Transition: '<S150>:114' */
    }

    /* End of Chart: '<S147>/Chart' */
    /* End of Outputs for SubSystem: '<S124>/TRSC_SpeedLimit_Req' */
    /* End of Outputs for SubSystem: '<S15>/TRSC_SpeedLimit_Req' */
    /* Transition: '<S150>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_TRSC_SpeedLimit_Req' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, CR3B_FUNC_CODE) CR3B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
