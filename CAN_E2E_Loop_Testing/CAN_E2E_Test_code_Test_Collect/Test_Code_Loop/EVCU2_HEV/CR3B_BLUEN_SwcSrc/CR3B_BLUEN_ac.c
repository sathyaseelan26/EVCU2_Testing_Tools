/*
 * File: CR3B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'CR3B_BLUEN_ac'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:45:00 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CR3B_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CR3B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, CR3B_BLUEN_VAR_INIT) KeCR3B_b_CanLocStatusBypEnbl
    = 0;                               /* Referenced by: '<S11>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, CR3B_BLUEN_VAR_INIT)
    KeCR3B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S12>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_CR3B_BLUEN
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_ACC_Systemsts_CallStatus;/* '<S16>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_BrakePdlPosn_FD14_CallStatus;/* '<S51>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_Brk_Stat_FD14_CallStatus;/* '<S24>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_IMPACTCommand_FD14_CallStatus;/* '<S71>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_IMPACTConfirm_FD14_CallStatus;/* '<S77>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_LatAcceleration_FD14_CallStatus;/* '<S89>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT)
    VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus;/* '<S93>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_LatAcceltnOffset_BSM_CallStatus;/* '<S38>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT)
    VeSR1B_y_LngAcceltnFailSts_FD14_CallStatus;/* '<S101>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_LongAcceleration_FD14_CallStatus;/* '<S97>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_LongAcceltnOffset_BSM_CallStatus;/* '<S44>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_LwsAngle_FD14_CallStatus;/* '<S59>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_LwsSpeed_FD14_CallStatus;/* '<S65>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_VehSpeedVSOSig_FD14_CallStatus;/* '<S30>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_YawRateFailSts_FD14_CallStatus;/* '<S109>/Chart' */
static VAR(uint8, CR3B_BLUEN_VAR_INIT) VeSR1B_y_YawRate_FD14_CallStatus;/* '<S105>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_BLUEN
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_BLUEN
#include "MemMap.h"

VAR(B_CR3B_BLUEN_ac_T, CR3B_BLUEN_VAR_INIT) CR3B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, CR3B_BLUEN_CODE) CR3B_BLUEN_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeSR1B;
    uint8 rtb_TmpSignalConversionAtVeSR_m;
    uint8 rtb_TmpSignalConversionAtVeS_mb;
    uint8 rtb_TmpSignalConversionAtVeSR_k;
    uint8 rtb_TmpSignalConversionAtVeSR_o;
    uint8 rtb_TmpSignalConversionAtVeS_mf;
    uint8 rtb_TmpSignalConversionAtVeSR_f;
    uint8 rtb_TmpSignalConversionAtVeSR_a;
    uint8 rtb_TmpSignalConversionAtVeSR_d;
    uint8 rtb_TmpSignalConversionAtVeSR_g;
    uint8 rtb_TmpSignalConversionAtVeSR_l;
    uint8 rtb_TmpSignalConversionAtVeSR_n;
    uint8 rtb_TmpSignalConversionAtVeS_a2;
    uint8 rtb_TmpSignalConversionAtVeSR_c;
    uint8 rtb_TmpSignalConversionAtVeS_ol;
    uint8 rtb_TmpSignalConversionAtVeSR_j;
    TePWMD_e_CanLocStatus rtb_Switch;
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
    boolean FA_out_g3;
    boolean guard1 = false;
    boolean rtb_RelationalOperator;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACC_Systemsts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACC_Systemsts_ErrSts'
     */
    rtb_TmpSignalConversionAtVeSR1B = Rte_Read_VeSR1B_y_ACC_Systemsts_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_A);

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
    /* Transition: '<S19>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACC_Systemsts_SigSts_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S16>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_0) & 3U) != 0U)
    {
        /* Transition: '<S19>:100' */
        /* Transition: '<S19>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S19>:104' */
        /*  MM */
        if ((((uint32)tmpRead_0) & 4U) != 0U)
        {
            /* Transition: '<S19>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S19>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S19>:110' */
                /* Call Tmot */
                VeSR1B_y_ACC_Systemsts_CallStatus = 3U;

                /* Event: '<S19>:40' */
                /* Transition: '<S19>:115' */
                /* Transition: '<S19>:114' */
            }
        }
        else
        {
            /* Transition: '<S19>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR1B) == 133)
            {
                /* Transition: '<S19>:95' */
                /* Transition: '<S19>:116' */
                /* Call Nothing */
                VeSR1B_y_ACC_Systemsts_CallStatus = 4U;

                /* Transition: '<S19>:114' */
            }
            else
            {
                /* Transition: '<S19>:120' */
                /* Transition: '<S19>:117' */
                /* Call Poke */
                VeSR1B_y_ACC_Systemsts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S15>/Poke' */
                /* FunctionCaller: '<S21>/Function Caller' */
                /* Event: '<S19>:38' */
                Rte_Call_PokePLTR_e_ACCSystemSts_PokePLTR_e_ACCSystemSts
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_A);

                /* End of Outputs for SubSystem: '<S15>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S19>:111' */
        /* Call Fsft */
        VeSR1B_y_ACC_Systemsts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S15>/Fsft' */
        /* FunctionCaller: '<S20>/Function Caller' */
        /* Event: '<S19>:39' */
        Rte_Call_FsftPLTR_e_ACCSystemSts_FsftPLTR_e_ACCSystemSts();

        /* End of Outputs for SubSystem: '<S15>/Fsft' */
        /* Transition: '<S19>:113' */
        /* Transition: '<S19>:115' */
        /* Transition: '<S19>:114' */
    }

    /* End of Chart: '<S16>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Brk_Stat_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Brk_Stat_FD14_ErrSts'
     */
    /* Transition: '<S19>:107' */
    rtb_TmpSignalConversionAtVeSR_m = Rte_Read_VeSR1B_y_Brk_Stat_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_Brk_Stat_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S27>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Brk_Stat_FD14_SigSts_Value(&tmpRead_1);

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
                VeSR1B_y_Brk_Stat_FD14_CallStatus = 3U;

                /* Event: '<S27>:40' */
                /* Transition: '<S27>:115' */
                /* Transition: '<S27>:114' */
            }
        }
        else
        {
            /* Transition: '<S27>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_m) == 133)
            {
                /* Transition: '<S27>:95' */
                /* Transition: '<S27>:116' */
                /* Call Nothing */
                VeSR1B_y_Brk_Stat_FD14_CallStatus = 4U;

                /* Transition: '<S27>:114' */
            }
            else
            {
                /* Transition: '<S27>:120' */
                if ((((uint32)tmpRead_1) & 8U) != 0U)
                {
                    /* Transition: '<S27>:122' */
                    /* Transition: '<S27>:125' */
                    FA_out_g3 = true;

                    /* Transition: '<S27>:126' */
                }
                else
                {
                    /* Transition: '<S27>:124' */
                    FA_out_g3 = false;
                }

                /* Transition: '<S27>:117' */
                /* Call Poke */
                VeSR1B_y_Brk_Stat_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S22>/Poke' */
                /* FunctionCaller: '<S29>/Function Caller' */
                /* Event: '<S27>:38' */
                Rte_Call_PokeBRKR_e_BrkPedalStat2_C2CAN_PokeBRKR_e_BrkPedalStat2_C2CAN
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_B, FA_out_g3);

                /* End of Outputs for SubSystem: '<S22>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S27>:111' */
        /* Call Fsft */
        VeSR1B_y_Brk_Stat_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S22>/Fsft' */
        /* FunctionCaller: '<S28>/Function Caller' */
        /* Event: '<S27>:39' */
        Rte_Call_FsftBRKR_b_BrkPedalStat2_C2CAN_FsftBRKR_b_BrkPedalStat2_C2CAN();

        /* End of Outputs for SubSystem: '<S22>/Fsft' */
        /* Transition: '<S27>:113' */
        /* Transition: '<S27>:115' */
        /* Transition: '<S27>:114' */
    }

    /* End of Chart: '<S24>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_VehSpeedVSOSig_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_VehSpeedVSOSig_FD14_ErrSts'
     */
    /* Transition: '<S27>:107' */
    rtb_TmpSignalConversionAtVeS_mb =
        Rte_Read_VeSR1B_v_VehSpeedVSOSig_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_VehSpeedVSOSig_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S33>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_VehSpeedVSOSig_FD14_SigSts_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S30>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2) & 3U) != 0U)
    {
        /* Transition: '<S33>:100' */
        /* Transition: '<S33>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S33>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2) & 4U) != 0U)
        {
            /* Transition: '<S33>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S33>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S33>:110' */
                /* Call Tmot */
                VeSR1B_y_VehSpeedVSOSig_FD14_CallStatus = 3U;

                /* Event: '<S33>:40' */
                /* Transition: '<S33>:115' */
                /* Transition: '<S33>:114' */
            }
        }
        else
        {
            /* Transition: '<S33>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mb) == 133)
            {
                /* Transition: '<S33>:95' */
                /* Transition: '<S33>:116' */
                /* Call Nothing */
                VeSR1B_y_VehSpeedVSOSig_FD14_CallStatus = 4U;

                /* Transition: '<S33>:114' */
            }
            else
            {
                /* Transition: '<S33>:120' */
                if ((((uint32)tmpRead_2) & 8U) != 0U)
                {
                    /* Transition: '<S33>:122' */
                    /* Transition: '<S33>:125' */
                    FA_out_g3 = true;

                    /* Transition: '<S33>:126' */
                }
                else
                {
                    /* Transition: '<S33>:124' */
                    FA_out_g3 = false;
                }

                /* Transition: '<S33>:117' */
                /* Call Poke */
                VeSR1B_y_VehSpeedVSOSig_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S23>/Poke' */
                /* FunctionCaller: '<S35>/Function Caller' */
                /* Event: '<S33>:38' */
                Rte_Call_PokeCSVR_v_CanSigVehSpd_CANC2_PokeCSVR_v_CanSigVehSpd_CANC2
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_V, FA_out_g3);

                /* End of Outputs for SubSystem: '<S23>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S33>:111' */
        /* Call Fsft */
        VeSR1B_y_VehSpeedVSOSig_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S23>/Fsft' */
        /* FunctionCaller: '<S34>/Function Caller' */
        /* Event: '<S33>:39' */
        Rte_Call_FsftCSVR_v_CanSigVehSpd_CANC2_FsftCSVR_v_CanSigVehSpd_CANC2();

        /* End of Outputs for SubSystem: '<S23>/Fsft' */
        /* Transition: '<S33>:113' */
        /* Transition: '<S33>:115' */
        /* Transition: '<S33>:114' */
    }

    /* End of Chart: '<S30>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LatAcceltnOffset_BSM_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LatAcceltnOffset_BSM_ErrSts'
     */
    /* Transition: '<S33>:107' */
    rtb_TmpSignalConversionAtVeSR_k =
        Rte_Read_VeSR1B_a_LatAcceltnOffset_BSM_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LatAcceltnOffset_BSM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S41>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LatAcceltnOffset_BSM_SigSts_Value(&tmpRead_3);

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
                VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 3U;

                /* Event: '<S41>:40' */
                /* Transition: '<S41>:115' */
                /* Transition: '<S41>:114' */
            }
        }
        else
        {
            /* Transition: '<S41>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_k) == 133)
            {
                /* Transition: '<S41>:95' */
                /* Transition: '<S41>:116' */
                /* Call Nothing */
                VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 4U;

                /* Transition: '<S41>:114' */
            }
            else
            {
                /* Transition: '<S41>:120' */
                if ((((uint32)tmpRead_3) & 8U) != 0U)
                {
                    /* Transition: '<S41>:122' */
                    /* Transition: '<S41>:125' */
                    FA_out_g3 = true;

                    /* Transition: '<S41>:126' */
                }
                else
                {
                    /* Transition: '<S41>:124' */
                    FA_out_g3 = false;
                }

                /* Transition: '<S41>:117' */
                /* Call Poke */
                VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S36>/Poke' */
                /* FunctionCaller: '<S43>/Function Caller' */
                /* Event: '<S41>:38' */
                Rte_Call_PokePLTR_a_TransAccelOffset_PokePLTR_a_TransAccelOffset
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_L, FA_out_g3);

                /* End of Outputs for SubSystem: '<S36>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S41>:111' */
        /* Call Fsft */
        VeSR1B_y_LatAcceltnOffset_BSM_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S36>/Fsft' */
        /* FunctionCaller: '<S42>/Function Caller' */
        /* Event: '<S41>:39' */
        Rte_Call_FsftPLTR_a_TransAccelOffset_FsftPLTR_a_TransAccelOffset();

        /* End of Outputs for SubSystem: '<S36>/Fsft' */
        /* Transition: '<S41>:113' */
        /* Transition: '<S41>:115' */
        /* Transition: '<S41>:114' */
    }

    /* End of Chart: '<S38>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LongAcceltnOffset_BSM_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LongAcceltnOffset_BSM_ErrSts'
     */
    /* Transition: '<S41>:107' */
    rtb_TmpSignalConversionAtVeSR_o =
        Rte_Read_VeSR1B_a_LongAcceltnOffset_BSM_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LongAcceltnOffset_BSM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S47>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LongAcceltnOffset_BSM_SigSts_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S44>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4) & 3U) != 0U)
    {
        /* Transition: '<S47>:100' */
        /* Transition: '<S47>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S47>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4) & 4U) != 0U)
        {
            /* Transition: '<S47>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S47>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S47>:110' */
                /* Call Tmot */
                VeSR1B_y_LongAcceltnOffset_BSM_CallStatus = 3U;

                /* Event: '<S47>:40' */
                /* Transition: '<S47>:115' */
                /* Transition: '<S47>:114' */
            }
        }
        else
        {
            /* Transition: '<S47>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_o) == 133)
            {
                /* Transition: '<S47>:95' */
                /* Transition: '<S47>:116' */
                /* Call Nothing */
                VeSR1B_y_LongAcceltnOffset_BSM_CallStatus = 4U;

                /* Transition: '<S47>:114' */
            }
            else
            {
                /* Transition: '<S47>:120' */
                if ((((uint32)tmpRead_4) & 8U) != 0U)
                {
                    /* Transition: '<S47>:122' */
                    /* Transition: '<S47>:125' */
                    FA_out_g3 = true;

                    /* Transition: '<S47>:126' */
                }
                else
                {
                    /* Transition: '<S47>:124' */
                    FA_out_g3 = false;
                }

                /* Transition: '<S47>:117' */
                /* Call Poke */
                VeSR1B_y_LongAcceltnOffset_BSM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S37>/Poke' */
                /* FunctionCaller: '<S49>/Function Caller' */
                /* Event: '<S47>:38' */
                Rte_Call_PokePLTR_a_LongAccelOffset_PokePLTR_a_LongAccelOffset
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_i, FA_out_g3);

                /* End of Outputs for SubSystem: '<S37>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S47>:111' */
        /* Call Fsft */
        VeSR1B_y_LongAcceltnOffset_BSM_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S37>/Fsft' */
        /* FunctionCaller: '<S48>/Function Caller' */
        /* Event: '<S47>:39' */
        Rte_Call_FsftPLTR_a_LongAccelOffset_FsftPLTR_a_LongAccelOffset();

        /* End of Outputs for SubSystem: '<S37>/Fsft' */
        /* Transition: '<S47>:113' */
        /* Transition: '<S47>:115' */
        /* Transition: '<S47>:114' */
    }

    /* End of Chart: '<S44>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_BrakePdlPosn_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrakePdlPosn_FD14_ErrSts'
     */
    /* Transition: '<S47>:107' */
    rtb_TmpSignalConversionAtVeS_mf =
        Rte_Read_VeSR1B_Pct_BrakePdlPosn_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_BrakePdlPosn_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S54>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrakePdlPosn_FD14_SigSts_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S51>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5) & 3U) != 0U)
    {
        /* Transition: '<S54>:100' */
        /* Transition: '<S54>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S54>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5) & 4U) != 0U)
        {
            /* Transition: '<S54>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S54>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S54>:110' */
                /* Call Tmot */
                VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 3U;

                /* Event: '<S54>:40' */
                /* Transition: '<S54>:115' */
                /* Transition: '<S54>:114' */
            }
        }
        else
        {
            /* Transition: '<S54>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mf) == 133)
            {
                /* Transition: '<S54>:95' */
                /* Transition: '<S54>:116' */
                /* Call Nothing */
                VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 4U;

                /* Transition: '<S54>:114' */
            }
            else
            {
                /* Transition: '<S54>:120' */
                if ((((uint32)tmpRead_5) & 8U) != 0U)
                {
                    /* Transition: '<S54>:122' */
                    /* Transition: '<S54>:125' */
                    FA_out_g3 = true;

                    /* Transition: '<S54>:126' */
                }
                else
                {
                    /* Transition: '<S54>:124' */
                    FA_out_g3 = false;
                }

                /* Transition: '<S54>:117' */
                /* Call Poke */
                VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S50>/Poke' */
                /* FunctionCaller: '<S56>/Function Caller' */
                /* Event: '<S54>:38' */
                Rte_Call_PokeBRKR_Pct_BrkTravelSt_C2CAN_PokeBRKR_Pct_BrkTravelSt_C2CAN
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_Pct, FA_out_g3);

                /* End of Outputs for SubSystem: '<S50>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S54>:111' */
        /* Call Fsft */
        VeSR1B_y_BrakePdlPosn_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S50>/Fsft' */
        /* FunctionCaller: '<S55>/Function Caller' */
        /* Event: '<S54>:39' */
        Rte_Call_FsftBRKR_b_BrkTravelSts_C2CAN_FsftBRKR_b_BrkTravelSts_C2CAN();

        /* End of Outputs for SubSystem: '<S50>/Fsft' */
        /* Transition: '<S54>:113' */
        /* Transition: '<S54>:115' */
        /* Transition: '<S54>:114' */
    }

    /* End of Chart: '<S51>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LwsAngle_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LwsAngle_FD14_ErrSts'
     */
    /* Transition: '<S54>:107' */
    rtb_TmpSignalConversionAtVeSR_f = Rte_Read_VeSR1B_phi_LwsAngle_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_phi);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LwsAngle_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S62>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LwsAngle_FD14_SigSts_Value(&tmpRead_6);

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
                VeSR1B_y_LwsAngle_FD14_CallStatus = 3U;

                /* Event: '<S62>:40' */
                /* Transition: '<S62>:115' */
                /* Transition: '<S62>:114' */
            }
        }
        else
        {
            /* Transition: '<S62>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_f) == 133)
            {
                /* Transition: '<S62>:95' */
                /* Transition: '<S62>:116' */
                /* Call Nothing */
                VeSR1B_y_LwsAngle_FD14_CallStatus = 4U;

                /* Transition: '<S62>:114' */
            }
            else
            {
                /* Transition: '<S62>:120' */
                if ((((uint32)tmpRead_6) & 8U) != 0U)
                {
                    /* Transition: '<S62>:122' */
                    /* Transition: '<S62>:125' */
                    FA_out_g3 = true;

                    /* Transition: '<S62>:126' */
                }
                else
                {
                    /* Transition: '<S62>:124' */
                    FA_out_g3 = false;
                }

                /* Transition: '<S62>:117' */
                /* Call Poke */
                VeSR1B_y_LwsAngle_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S57>/Poke' */
                /* FunctionCaller: '<S64>/Function Caller' */
                /* Event: '<S62>:38' */
                Rte_Call_PokePLTR_phi_LwsAngle_PokePLTR_phi_LwsAngle
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_phi, FA_out_g3);

                /* End of Outputs for SubSystem: '<S57>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S62>:111' */
        /* Call Fsft */
        VeSR1B_y_LwsAngle_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S57>/Fsft' */
        /* FunctionCaller: '<S63>/Function Caller' */
        /* Event: '<S62>:39' */
        Rte_Call_FsftPLTR_phi_LwsAngle_FsftPLTR_phi_LwsAngle();

        /* End of Outputs for SubSystem: '<S57>/Fsft' */
        /* Transition: '<S62>:113' */
        /* Transition: '<S62>:115' */
        /* Transition: '<S62>:114' */
    }

    /* End of Chart: '<S59>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LwsSpeed_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LwsSpeed_FD14_ErrSts'
     */
    /* Transition: '<S62>:107' */
    rtb_TmpSignalConversionAtVeSR_a = Rte_Read_VeSR1B_dphi_LwsSpeed_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_dph);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LwsSpeed_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S67>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LwsSpeed_FD14_SigSts_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S65>/Chart' */
    if ((((uint32)tmpRead_7) & 3U) != 0U)
    {
        /* Transition: '<S67>:100' */
        /* Transition: '<S67>:103' */
        /* Transition: '<S67>:111' */
        /* Call Fsft */
        VeSR1B_y_LwsSpeed_FD14_CallStatus = 2U;

        /* Event: '<S67>:39' */
        /* Transition: '<S67>:113' */
        /* Transition: '<S67>:115' */
        /* Transition: '<S67>:114' */
    }
    else
    {
        /* Transition: '<S67>:104' */
        /*  MM */
        if ((((uint32)tmpRead_7) & 4U) != 0U)
        {
            /* Transition: '<S67>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S67>:88' */
                /* Transition: '<S67>:111' */
                /* Call Fsft */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 2U;

                /* Event: '<S67>:39' */
                /* Transition: '<S67>:113' */
                /* Transition: '<S67>:115' */
                /* Transition: '<S67>:114' */
            }
            else
            {
                /* Transition: '<S67>:110' */
                /* Call Tmot */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 3U;

                /* Event: '<S67>:40' */
                /* Transition: '<S67>:115' */
                /* Transition: '<S67>:114' */
            }
        }
        else
        {
            /* Transition: '<S67>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_a) == 133)
            {
                /* Transition: '<S67>:95' */
                /* Transition: '<S67>:116' */
                /* Call Nothing */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 4U;

                /* Transition: '<S67>:114' */
            }
            else
            {
                /* Transition: '<S67>:120' */
                /* Transition: '<S67>:117' */
                /* Call Poke */
                VeSR1B_y_LwsSpeed_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S58>/Poke' */
                /* FunctionCaller: '<S68>/Function Caller' */
                /* Event: '<S67>:38' */
                Rte_Call_PokePLTR_dphi_LwsSpeed_PokePLTR_dphi_LwsSpeed
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_dph);

                /* End of Outputs for SubSystem: '<S58>/Poke' */
            }
        }
    }

    /* End of Chart: '<S65>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IMPACTCommand_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IMPACTCommand_FD14_ErrSts'
     */
    /* Transition: '<S67>:107' */
    rtb_TmpSignalConversionAtVeSR_d = Rte_Read_VeSR1B_b_IMPACTCommand_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IMPACTCommand_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S74>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IMPACTCommand_FD14_SigSts_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S71>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_8) & 3U) != 0U)
    {
        /* Transition: '<S74>:100' */
        /* Transition: '<S74>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S74>:104' */
        /*  MM */
        if ((((uint32)tmpRead_8) & 4U) != 0U)
        {
            /* Transition: '<S74>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S74>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S74>:110' */
                /* Call Tmot */
                VeSR1B_y_IMPACTCommand_FD14_CallStatus = 3U;

                /* Event: '<S74>:40' */
                /* Transition: '<S74>:115' */
                /* Transition: '<S74>:114' */
            }
        }
        else
        {
            /* Transition: '<S74>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_d) == 133)
            {
                /* Transition: '<S74>:95' */
                /* Transition: '<S74>:116' */
                /* Call Nothing */
                VeSR1B_y_IMPACTCommand_FD14_CallStatus = 4U;

                /* Transition: '<S74>:114' */
            }
            else
            {
                /* Transition: '<S74>:120' */
                /* Transition: '<S74>:117' */
                /* Call Poke */
                VeSR1B_y_IMPACTCommand_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S69>/Poke' */
                /* FunctionCaller: '<S76>/Function Caller' */
                /* Event: '<S74>:38' */
                Rte_Call_PokeIMPR_b_VehImpactDetected_PokeIMPR_b_VehImpactDetected
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_I);

                /* End of Outputs for SubSystem: '<S69>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S74>:111' */
        /* Call Fsft */
        VeSR1B_y_IMPACTCommand_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S69>/Fsft' */
        /* FunctionCaller: '<S75>/Function Caller' */
        /* Event: '<S74>:39' */
        Rte_Call_FsftIMPR_b_VehImpactDetected_FsftIMPR_b_VehImpactDetected();

        /* End of Outputs for SubSystem: '<S69>/Fsft' */
        /* Transition: '<S74>:113' */
        /* Transition: '<S74>:115' */
        /* Transition: '<S74>:114' */
    }

    /* End of Chart: '<S71>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IMPACTConfirm_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IMPACTConfirm_FD14_ErrSts'
     */
    /* Transition: '<S74>:107' */
    rtb_TmpSignalConversionAtVeSR_g = Rte_Read_VeSR1B_b_IMPACTConfirm_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IMPACTConfirm_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S80>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IMPACTConfirm_FD14_SigSts_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S77>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_9) & 3U) != 0U)
    {
        /* Transition: '<S80>:100' */
        /* Transition: '<S80>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S80>:104' */
        /*  MM */
        if ((((uint32)tmpRead_9) & 4U) != 0U)
        {
            /* Transition: '<S80>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S80>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S80>:110' */
                /* Call Tmot */
                VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 3U;

                /* Event: '<S80>:40' */
                /* Transition: '<S80>:115' */
                /* Transition: '<S80>:114' */
            }
        }
        else
        {
            /* Transition: '<S80>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_g) == 133)
            {
                /* Transition: '<S80>:95' */
                /* Transition: '<S80>:116' */
                /* Call Nothing */
                VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 4U;

                /* Transition: '<S80>:114' */
            }
            else
            {
                /* Transition: '<S80>:120' */
                /* Transition: '<S80>:117' */
                /* Call Poke */
                VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S70>/Poke' */
                /* FunctionCaller: '<S82>/Function Caller' */
                /* Event: '<S80>:38' */
                Rte_Call_PokeIMPR_b_ImpactToggle_PokeIMPR_b_ImpactToggle
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_e);

                /* End of Outputs for SubSystem: '<S70>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S80>:111' */
        /* Call Fsft */
        VeSR1B_y_IMPACTConfirm_FD14_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S70>/Fsft' */
        /* FunctionCaller: '<S81>/Function Caller' */
        /* Event: '<S80>:39' */
        Rte_Call_FsftIMPR_b_ImpactToggle_FsftIMPR_b_ImpactToggle();

        /* End of Outputs for SubSystem: '<S70>/Fsft' */
        /* Transition: '<S80>:113' */
        /* Transition: '<S80>:115' */
        /* Transition: '<S80>:114' */
    }

    /* End of Chart: '<S77>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LatAcceleration_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LatAcceleration_FD14_ErrSts'
     */
    /* Transition: '<S80>:107' */
    rtb_TmpSignalConversionAtVeSR_l =
        Rte_Read_VeSR1B_a_LatAcceleration_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LatAcceleration_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S91>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LatAcceleration_FD14_SigSts_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S89>/Chart' */
    if ((((uint32)tmpRead_a) & 3U) != 0U)
    {
        /* Transition: '<S91>:100' */
        /* Transition: '<S91>:103' */
        /* Transition: '<S91>:111' */
        /* Call Fsft */
        VeSR1B_y_LatAcceleration_FD14_CallStatus = 2U;

        /* Event: '<S91>:39' */
        /* Transition: '<S91>:113' */
        /* Transition: '<S91>:115' */
        /* Transition: '<S91>:114' */
    }
    else
    {
        /* Transition: '<S91>:104' */
        /*  MM */
        if ((((uint32)tmpRead_a) & 4U) != 0U)
        {
            /* Transition: '<S91>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S91>:88' */
                /* Transition: '<S91>:111' */
                /* Call Fsft */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 2U;

                /* Event: '<S91>:39' */
                /* Transition: '<S91>:113' */
                /* Transition: '<S91>:115' */
                /* Transition: '<S91>:114' */
            }
            else
            {
                /* Transition: '<S91>:110' */
                /* Call Tmot */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 3U;

                /* Event: '<S91>:40' */
                /* Transition: '<S91>:115' */
                /* Transition: '<S91>:114' */
            }
        }
        else
        {
            /* Transition: '<S91>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_l) == 133)
            {
                /* Transition: '<S91>:95' */
                /* Transition: '<S91>:116' */
                /* Call Nothing */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 4U;

                /* Transition: '<S91>:114' */
            }
            else
            {
                /* Transition: '<S91>:120' */
                /* Transition: '<S91>:117' */
                /* Call Poke */
                VeSR1B_y_LatAcceleration_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S83>/Poke' */
                /* FunctionCaller: '<S92>/Function Caller' */
                /* Event: '<S91>:38' */
                Rte_Call_PokePLTR_a_LatAccel_ORC_PokePLTR_a_LatAccel_ORC
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_h);

                /* End of Outputs for SubSystem: '<S83>/Poke' */
            }
        }
    }

    /* End of Chart: '<S89>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LatAcceltnFailSts_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LatAcceltnFailSts_FD14_ErrSts'
     */
    /* Transition: '<S91>:107' */
    rtb_TmpSignalConversionAtVeSR_n =
        Rte_Read_VeSR1B_b_LatAcceltnFailSts_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LatAcceltnFailSts_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S95>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LatAcceltnFailSts_FD14_SigSts_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S93>/Chart' */
    if ((((uint32)tmpRead_b) & 3U) != 0U)
    {
        /* Transition: '<S95>:100' */
        /* Transition: '<S95>:103' */
        /* Transition: '<S95>:111' */
        /* Call Fsft */
        VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 2U;

        /* Event: '<S95>:39' */
        /* Transition: '<S95>:113' */
        /* Transition: '<S95>:115' */
        /* Transition: '<S95>:114' */
    }
    else
    {
        /* Transition: '<S95>:104' */
        /*  MM */
        if ((((uint32)tmpRead_b) & 4U) != 0U)
        {
            /* Transition: '<S95>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S95>:88' */
                /* Transition: '<S95>:111' */
                /* Call Fsft */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 2U;

                /* Event: '<S95>:39' */
                /* Transition: '<S95>:113' */
                /* Transition: '<S95>:115' */
                /* Transition: '<S95>:114' */
            }
            else
            {
                /* Transition: '<S95>:110' */
                /* Call Tmot */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 3U;

                /* Event: '<S95>:40' */
                /* Transition: '<S95>:115' */
                /* Transition: '<S95>:114' */
            }
        }
        else
        {
            /* Transition: '<S95>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_n) == 133)
            {
                /* Transition: '<S95>:95' */
                /* Transition: '<S95>:116' */
                /* Call Nothing */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 4U;

                /* Transition: '<S95>:114' */
            }
            else
            {
                /* Transition: '<S95>:120' */
                /* Transition: '<S95>:117' */
                /* Call Poke */
                VeSR1B_y_LatAcceltnFailSts_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S84>/Poke' */
                /* FunctionCaller: '<S96>/Function Caller' */
                /* Event: '<S95>:38' */
                Rte_Call_PokePLTR_b_LatAccelFailSts_ORC_PokePLTR_b_LatAccelFailSts_ORC
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_L);

                /* End of Outputs for SubSystem: '<S84>/Poke' */
            }
        }
    }

    /* End of Chart: '<S93>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LongAcceleration_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LongAcceleration_FD14_ErrSts'
     */
    /* Transition: '<S95>:107' */
    rtb_TmpSignalConversionAtVeS_a2 =
        Rte_Read_VeSR1B_a_LongAcceleration_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LongAcceleration_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S99>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LongAcceleration_FD14_SigSts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S97>/Chart' */
    if ((((uint32)tmpRead_c) & 3U) != 0U)
    {
        /* Transition: '<S99>:100' */
        /* Transition: '<S99>:103' */
        /* Transition: '<S99>:111' */
        /* Call Fsft */
        VeSR1B_y_LongAcceleration_FD14_CallStatus = 2U;

        /* Event: '<S99>:39' */
        /* Transition: '<S99>:113' */
        /* Transition: '<S99>:115' */
        /* Transition: '<S99>:114' */
    }
    else
    {
        /* Transition: '<S99>:104' */
        /*  MM */
        if ((((uint32)tmpRead_c) & 4U) != 0U)
        {
            /* Transition: '<S99>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S99>:88' */
                /* Transition: '<S99>:111' */
                /* Call Fsft */
                VeSR1B_y_LongAcceleration_FD14_CallStatus = 2U;

                /* Event: '<S99>:39' */
                /* Transition: '<S99>:113' */
                /* Transition: '<S99>:115' */
                /* Transition: '<S99>:114' */
            }
            else
            {
                /* Transition: '<S99>:110' */
                /* Call Tmot */
                VeSR1B_y_LongAcceleration_FD14_CallStatus = 3U;

                /* Event: '<S99>:40' */
                /* Transition: '<S99>:115' */
                /* Transition: '<S99>:114' */
            }
        }
        else
        {
            /* Transition: '<S99>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_a2) == 133)
            {
                /* Transition: '<S99>:95' */
                /* Transition: '<S99>:116' */
                /* Call Nothing */
                VeSR1B_y_LongAcceleration_FD14_CallStatus = 4U;

                /* Transition: '<S99>:114' */
            }
            else
            {
                /* Transition: '<S99>:120' */
                /* Transition: '<S99>:117' */
                /* Call Poke */
                VeSR1B_y_LongAcceleration_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S85>/Poke' */
                /* FunctionCaller: '<S100>/Function Caller' */
                /* Event: '<S99>:38' */
                Rte_Call_PokePLTR_a_LongAccel_ORC_PokePLTR_a_LongAccel_ORC
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_o);

                /* End of Outputs for SubSystem: '<S85>/Poke' */
            }
        }
    }

    /* End of Chart: '<S97>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_LngAcceltnFailSts_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LngAcceltnFailSts_FD14_ErrSts'
     */
    /* Transition: '<S99>:107' */
    rtb_TmpSignalConversionAtVeSR_c =
        Rte_Read_VeSR1B_b_LngAcceltnFailSts_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_LngAcceltnFailSts_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S103>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LngAcceltnFailSts_FD14_SigSts_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S101>/Chart' */
    if ((((uint32)tmpRead_d) & 3U) != 0U)
    {
        /* Transition: '<S103>:100' */
        /* Transition: '<S103>:103' */
        /* Transition: '<S103>:111' */
        /* Call Fsft */
        VeSR1B_y_LngAcceltnFailSts_FD14_CallStatus = 2U;

        /* Event: '<S103>:39' */
        /* Transition: '<S103>:113' */
        /* Transition: '<S103>:115' */
        /* Transition: '<S103>:114' */
    }
    else
    {
        /* Transition: '<S103>:104' */
        /*  MM */
        if ((((uint32)tmpRead_d) & 4U) != 0U)
        {
            /* Transition: '<S103>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S103>:88' */
                /* Transition: '<S103>:111' */
                /* Call Fsft */
                VeSR1B_y_LngAcceltnFailSts_FD14_CallStatus = 2U;

                /* Event: '<S103>:39' */
                /* Transition: '<S103>:113' */
                /* Transition: '<S103>:115' */
                /* Transition: '<S103>:114' */
            }
            else
            {
                /* Transition: '<S103>:110' */
                /* Call Tmot */
                VeSR1B_y_LngAcceltnFailSts_FD14_CallStatus = 3U;

                /* Event: '<S103>:40' */
                /* Transition: '<S103>:115' */
                /* Transition: '<S103>:114' */
            }
        }
        else
        {
            /* Transition: '<S103>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_c) == 133)
            {
                /* Transition: '<S103>:95' */
                /* Transition: '<S103>:116' */
                /* Call Nothing */
                VeSR1B_y_LngAcceltnFailSts_FD14_CallStatus = 4U;

                /* Transition: '<S103>:114' */
            }
            else
            {
                /* Transition: '<S103>:120' */
                /* Transition: '<S103>:117' */
                /* Call Poke */
                VeSR1B_y_LngAcceltnFailSts_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S86>/Poke' */
                /* FunctionCaller: '<S104>/Function Caller' */
                /* Event: '<S103>:38' */
                Rte_Call_PokePLTR_b_LongAccelFailSts_ORC_PokePLTR_b_LongAccelFailSts_ORC
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_o);

                /* End of Outputs for SubSystem: '<S86>/Poke' */
            }
        }
    }

    /* End of Chart: '<S101>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_YawRate_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_YawRate_FD14_ErrSts'
     */
    /* Transition: '<S103>:107' */
    rtb_TmpSignalConversionAtVeS_ol = Rte_Read_VeSR1B_dphi_YawRate_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_d_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_YawRate_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S107>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_YawRate_FD14_SigSts_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S105>/Chart' */
    if ((((uint32)tmpRead_e) & 3U) != 0U)
    {
        /* Transition: '<S107>:100' */
        /* Transition: '<S107>:103' */
        /* Transition: '<S107>:111' */
        /* Call Fsft */
        VeSR1B_y_YawRate_FD14_CallStatus = 2U;

        /* Event: '<S107>:39' */
        /* Transition: '<S107>:113' */
        /* Transition: '<S107>:115' */
        /* Transition: '<S107>:114' */
    }
    else
    {
        /* Transition: '<S107>:104' */
        /*  MM */
        if ((((uint32)tmpRead_e) & 4U) != 0U)
        {
            /* Transition: '<S107>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S107>:88' */
                /* Transition: '<S107>:111' */
                /* Call Fsft */
                VeSR1B_y_YawRate_FD14_CallStatus = 2U;

                /* Event: '<S107>:39' */
                /* Transition: '<S107>:113' */
                /* Transition: '<S107>:115' */
                /* Transition: '<S107>:114' */
            }
            else
            {
                /* Transition: '<S107>:110' */
                /* Call Tmot */
                VeSR1B_y_YawRate_FD14_CallStatus = 3U;

                /* Event: '<S107>:40' */
                /* Transition: '<S107>:115' */
                /* Transition: '<S107>:114' */
            }
        }
        else
        {
            /* Transition: '<S107>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ol) == 133)
            {
                /* Transition: '<S107>:95' */
                /* Transition: '<S107>:116' */
                /* Call Nothing */
                VeSR1B_y_YawRate_FD14_CallStatus = 4U;

                /* Transition: '<S107>:114' */
            }
            else
            {
                /* Transition: '<S107>:120' */
                /* Transition: '<S107>:117' */
                /* Call Poke */
                VeSR1B_y_YawRate_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S87>/Poke' */
                /* FunctionCaller: '<S108>/Function Caller' */
                /* Event: '<S107>:38' */
                Rte_Call_PokePLTR_dphi_YawRate_ORC_PokePLTR_dphi_YawRate_ORC
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_d_m);

                /* End of Outputs for SubSystem: '<S87>/Poke' */
            }
        }
    }

    /* End of Chart: '<S105>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_YawRateFailSts_FD14_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_YawRateFailSts_FD14_ErrSts'
     */
    /* Transition: '<S107>:107' */
    rtb_TmpSignalConversionAtVeSR_j =
        Rte_Read_VeSR1B_b_YawRateFailSts_FD14_Value
        (&CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_Y);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_YawRateFailSts_FD14_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S111>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_YawRateFailSts_FD14_SigSts_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S109>/Chart' */
    if ((((uint32)tmpRead_f) & 3U) != 0U)
    {
        /* Transition: '<S111>:100' */
        /* Transition: '<S111>:103' */
        /* Transition: '<S111>:111' */
        /* Call Fsft */
        VeSR1B_y_YawRateFailSts_FD14_CallStatus = 2U;

        /* Event: '<S111>:39' */
        /* Transition: '<S111>:113' */
        /* Transition: '<S111>:115' */
        /* Transition: '<S111>:114' */
    }
    else
    {
        /* Transition: '<S111>:104' */
        /*  MM */
        if ((((uint32)tmpRead_f) & 4U) != 0U)
        {
            /* Transition: '<S111>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S111>:88' */
                /* Transition: '<S111>:111' */
                /* Call Fsft */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 2U;

                /* Event: '<S111>:39' */
                /* Transition: '<S111>:113' */
                /* Transition: '<S111>:115' */
                /* Transition: '<S111>:114' */
            }
            else
            {
                /* Transition: '<S111>:110' */
                /* Call Tmot */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 3U;

                /* Event: '<S111>:40' */
                /* Transition: '<S111>:115' */
                /* Transition: '<S111>:114' */
            }
        }
        else
        {
            /* Transition: '<S111>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_j) == 133)
            {
                /* Transition: '<S111>:95' */
                /* Transition: '<S111>:116' */
                /* Call Nothing */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 4U;

                /* Transition: '<S111>:114' */
            }
            else
            {
                /* Transition: '<S111>:120' */
                /* Transition: '<S111>:117' */
                /* Call Poke */
                VeSR1B_y_YawRateFailSts_FD14_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S88>/Poke' */
                /* FunctionCaller: '<S112>/Function Caller' */
                /* Event: '<S111>:38' */
                Rte_Call_PokePLTR_b_YawRateFailSts_ORC_PokePLTR_b_YawRateFailSts_ORC
                    (CR3B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_Y);

                /* End of Outputs for SubSystem: '<S88>/Poke' */
            }
        }
    }

    /* End of Chart: '<S109>/Chart' */
    /* Transition: '<S111>:107' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, CR3B_BLUEN_CODE) CR3B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
