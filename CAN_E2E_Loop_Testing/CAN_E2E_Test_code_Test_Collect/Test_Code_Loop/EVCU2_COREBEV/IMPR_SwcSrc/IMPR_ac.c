/*
 * File: IMPR_ac.c
 *
 * Code generated for Simulink model 'IMPR_ac'.
 *
 * Model version                  : 9.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:16:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IMPR_ac.h"

/* Named constants for Chart: '<S8>/RuntimeEEWrite_ClearImpact' */
#define IMPR_ac_IN_Init                ((uint8)1U)
#define IMPR_ac_IN_Write_Failed        ((uint8)2U)
#define IMPR_ac_IN_Write_Procedure     ((uint8)3U)
#define IMPR_ac_IN_Write_Success       ((uint8)4U)

/* Named constants for Chart: '<S25>/RuntimeEEWrite' */
#define IMPR_ac_IN_Init_f              ((uint8)1U)
#define IMPR_ac_IN_Write_Failed_a      ((uint8)2U)
#define IMPR_ac_IN_Write_Procedure_j   ((uint8)3U)
#define IMPR_ac_IN_Write_Success_b     ((uint8)4U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_IMPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, IMPR_VAR_INIT) HeIMPR_t_MedTEB = 0.01F;/* Referenced by: '<S28>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPC_b_ClearLatchedImpactEvents =
    0;                                 /* Referenced by: '<S75>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPC_b_EnableImpact_BSW = 0;/* Referenced by: '<S33>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPC_b_EnableImpact_C2 = 1;/* Referenced by: '<S46>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPC_b_Enable_Impact = 1;/* Referenced by: '<S34>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPC_b_EnblClrImpct_DiagTool = 0;/* Referenced by: '<S93>/Calib' */
static volatile CONST(uint16, IMPR_VAR_INIT) KeIMPR_Cnt_HVShtDwn_FailLmt = 1401U;/* Referenced by: '<S35>/Calib' */
static volatile CONST(uint16, IMPR_VAR_INIT) KeIMPR_Cnt_HVShtDwn_SmplLmt = 1401U;/* Referenced by: '<S36>/Calib' */
static volatile CONST(uint8, IMPR_VAR_INIT) KeIMPR_Cnt_WriteAttempts = 3U;/* Referenced by:
                                                                      * '<S76>/Calib'
                                                                      * '<S37>/Calib'
                                                                      */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPR_b_CntrlSysShtDwn_LtchEnbl =
    1;                                 /* Referenced by: '<S38>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPR_b_EnableImpactHardwire = 1;/* Referenced by: '<S47>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPR_b_ForceImpactCommand = 1;/* Referenced by: '<S53>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPR_b_ForceImpactConfirm = 0;/* Referenced by: '<S54>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPR_b_ImpactDetected = 1;/* Referenced by: '<S39>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPR_b_ImpactFromCAN = 1;/* Referenced by: '<S40>/Calib' */
static volatile CONST(boolean, IMPR_VAR_INIT) KeIMPR_b_RuntimeLogicReset = 0;/* Referenced by:
                                                                      * '<S77>/Calib'
                                                                      * '<S41>/Calib'
                                                                      */
static volatile CONST(float32, IMPR_VAR_INIT) KeIMPR_t_TwoPulses = 0.025F;/* Referenced by: '<S42>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_IMPR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, IMPR_VAR_INIT) AeIMPR_b_HVRpdShtdwnCmd;/* '<Root>/DSM_23' */
static VAR(boolean, IMPR_VAR_INIT) VeIMPC_b_LossCommORC;/* '<S25>/Logical4' */
static VAR(boolean, IMPR_VAR_INIT) VeIMPC_b_WriteStFailed;
                               /* '<S25>/SigConvForSigProp_Variant_Source2_0' */
static VAR(boolean, IMPR_VAR_INIT) VeIMPC_b_WriteStFailed_ClearLatch;
                                /* '<S8>/SigConvForSigProp_Variant_Source1_0' */
static VAR(boolean, IMPR_VAR_INIT) VeIMPC_b_WriteStSuccess;/* '<S25>/Comparison2' */
static VAR(boolean, IMPR_VAR_INIT) VeIMPC_b_WriteStSuccess_ClearLatch;/* '<S8>/Comparison5' */
static VAR(TeIMPR_e_EepromLogicSts, IMPR_VAR_INIT) VeIMPC_e_EepSetSts;/* '<S25>/RuntimeEEWrite' */
static VAR(TeIMPR_e_EepromLogicSts, IMPR_VAR_INIT) VeIMPC_e_EepSetSts_ClearLatch;/* '<S8>/RuntimeEEWrite_ClearImpact' */
static VAR(uint8, IMPR_VAR_INIT) VeIMPC_e_EepSetWriteCounter;/* '<S25>/RuntimeEEWrite' */
static VAR(uint8, IMPR_VAR_INIT) VeIMPC_e_EepSetWriteCounter_ClearLatch;/* '<S8>/RuntimeEEWrite_ClearImpact' */
static VAR(uint16, IMPR_VAR_INIT) VeIMPR_Cnt_CntrlSysShtDwn_FailCntr;/* '<S64>/Switch1' */
static VAR(uint16, IMPR_VAR_INIT) VeIMPR_Cnt_CntrlSysShtDwn_SmplCntr;/* '<S65>/Switch1' */
static VAR(boolean, IMPR_VAR_INIT) VeIMPR_b_CntrlSysShtDwnFail;/* '<S25>/Logical10' */
static VAR(boolean, IMPR_VAR_INIT) VeIMPR_b_CntrlSysShtDwn_FltDtct;/* '<S56>/Relational Operator' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_IMPR
#include "MemMap.h"

CONST(ConstB_IMPR_ac_T, IMPR_VAR_INIT) IMPR_ac_ConstB =
{
    CeDFIB_e_Init                      /* '<S84>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_IMPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

VAR(B_IMPR_ac_T, IMPR_VAR_INIT) IMPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

VAR(DW_IMPR_ac_T, IMPR_VAR_INIT) IMPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

static FUNC(void, IMPR_CODE_LOCAL) IMPR_ac_RuntimeEEWrite_ClearImpact(void);

/* Output and update for atomic system: '<S8>/RuntimeEEWrite_ClearImpact' */
static FUNC(void, IMPR_CODE_LOCAL) IMPR_ac_RuntimeEEWrite_ClearImpact(void)
{
    /* Chart: '<S8>/RuntimeEEWrite_ClearImpact' incorporates:
     *  Constant: '<S76>/Calib'
     *  Constant: '<S77>/Calib'
     */
    /* Gateway: IMPR_MedTEH/RuntimeEEWrite_ClearImpact */
    /* During: IMPR_MedTEH/RuntimeEEWrite_ClearImpact */
    if (((uint32)IMPR_ac_DW.is_active_c13_IMPR_ac) == 0U)
    {
        /* Entry: IMPR_MedTEH/RuntimeEEWrite_ClearImpact */
        IMPR_ac_DW.is_active_c13_IMPR_ac = 1U;

        /* Entry Internal: IMPR_MedTEH/RuntimeEEWrite_ClearImpact */
        /* Transition: '<S79>:9' */
        VeIMPC_e_EepSetWriteCounter_ClearLatch = 0U;
        IMPR_ac_DW.is_c13_IMPR_ac = IMPR_ac_IN_Init;

        /* Entry 'Init': '<S79>:8' */
        VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_Init;
    }
    else
    {
        switch (IMPR_ac_DW.is_c13_IMPR_ac)
        {
          case IMPR_ac_IN_Init:
            VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_Init;

            /* During 'Init': '<S79>:8' */
            if (IMPR_ac_B.Logical)
            {
                /* Outputs for Function Call SubSystem: '<S8>/ProgramRunTime_HvRpdShtdwnCmd' */
                /* DataStoreWrite: '<S78>/NeIMPR_Cnt_HVShtDwn_MFOP1' */
                /* Transition: '<S79>:22' */
                /* Transition: '<S79>:78' */
                /* ProgramRunTime_HvRpdShtdwnCmd(&LeIMPR_b_HVRpdShtdwnCmd,1); */
                /* Event: '<S79>:93' */
                AeIMPR_b_HVRpdShtdwnCmd = false;

                /* Outport: '<Root>/AeIMPR_b_HVRpdShtdwnCmd_Strimm_Out' incorporates:
                 *  SignalConversion: '<S78>/Signal Conversion'
                 */
                (void)Rte_Write_AeIMPR_b_HVRpdShtdwnCmd_AeIMPR_b_HVRpdShtdwnCmd
                    (false);

                /* End of Outputs for SubSystem: '<S8>/ProgramRunTime_HvRpdShtdwnCmd' */
                IMPR_ac_DW.is_c13_IMPR_ac = IMPR_ac_IN_Write_Procedure;

                /* Entry 'Write_Procedure': '<S79>:10' */
                VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_WriteProcedure;
            }
            break;

          case IMPR_ac_IN_Write_Failed:
            VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_WriteFailed;

            /* During 'Write_Failed': '<S79>:61' */
            if (KeIMPR_b_RuntimeLogicReset)
            {
                /* Transition: '<S79>:69' */
                /* Transition: '<S79>:60' */
                /* Transition: '<S79>:17' */
                IMPR_ac_DW.is_c13_IMPR_ac = IMPR_ac_IN_Init;

                /* Entry 'Init': '<S79>:8' */
                VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_Init;
            }
            break;

          case IMPR_ac_IN_Write_Procedure:
            VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_WriteProcedure;

            /* During 'Write_Procedure': '<S79>:10' */
            if (VeIMPC_e_EepSetWriteCounter_ClearLatch >
                    KeIMPR_Cnt_WriteAttempts)
            {
                /* Transition: '<S79>:62' */
                IMPR_ac_DW.is_c13_IMPR_ac = IMPR_ac_IN_Write_Failed;

                /* Entry 'Write_Failed': '<S79>:61' */
                VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_WriteFailed;
                VeIMPC_e_EepSetWriteCounter_ClearLatch = 0U;
            }
            else if (VeIMPC_b_WriteStFailed_ClearLatch)
            {
                /* Transition: '<S79>:59' */
                VeIMPC_e_EepSetWriteCounter_ClearLatch = (uint8)((sint32)
                    (((sint32)VeIMPC_e_EepSetWriteCounter_ClearLatch) + 1));

                /* Outputs for Function Call SubSystem: '<S8>/ProgramRunTime_HvRpdShtdwnCmd' */
                /* DataStoreWrite: '<S78>/NeIMPR_Cnt_HVShtDwn_MFOP1' */
                /* Transition: '<S79>:84' */
                /* ProgramRunTime_HvRpdShtdwnCmd(&LeIMPR_b_HVRpdShtdwnCmd,1); */
                /* Event: '<S79>:93' */
                AeIMPR_b_HVRpdShtdwnCmd = false;

                /* Outport: '<Root>/AeIMPR_b_HVRpdShtdwnCmd_Strimm_Out' incorporates:
                 *  SignalConversion: '<S78>/Signal Conversion'
                 */
                (void)Rte_Write_AeIMPR_b_HVRpdShtdwnCmd_AeIMPR_b_HVRpdShtdwnCmd
                    (false);

                /* End of Outputs for SubSystem: '<S8>/ProgramRunTime_HvRpdShtdwnCmd' */
                /* Transition: '<S79>:83' */
                IMPR_ac_DW.is_c13_IMPR_ac = IMPR_ac_IN_Write_Procedure;

                /* Entry 'Write_Procedure': '<S79>:10' */
                VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_WriteProcedure;
            }
            else
            {
                if (VeIMPC_b_WriteStSuccess_ClearLatch)
                {
                    /* Transition: '<S79>:86' */
                    IMPR_ac_DW.is_c13_IMPR_ac = IMPR_ac_IN_Write_Success;

                    /* Entry 'Write_Success': '<S79>:85' */
                    VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_WriteSuccess;
                }
            }
            break;

          default:
            VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_WriteSuccess;

            /* During 'Write_Success': '<S79>:85' */
            if ((!IMPR_ac_B.Logical) && (VeIMPC_b_WriteStSuccess_ClearLatch))
            {
                /* Transition: '<S79>:88' */
                /* Transition: '<S79>:91' */
                IMPR_ac_DW.is_c13_IMPR_ac = IMPR_ac_IN_Init;

                /* Entry 'Init': '<S79>:8' */
                VeIMPC_e_EepSetSts_ClearLatch = CeIMPR_e_Init;
            }
            break;
        }
    }

    /* End of Chart: '<S8>/RuntimeEEWrite_ClearImpact' */
}

/* Model step function for TID1 */
FUNC(void, IMPR_CODE) IMPR_MedTEB(void) /* Explicit Task: MedTEB */
{
    uint8 rtb_TmpSignalConversionAtVeBSWR_e_HvRp_n;
    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;
    boolean rtb_AND;
    boolean rtb_Logical1;
    boolean rtb_RelationalOperator3;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;
    boolean rtb_TmpSignalConversionAtVeIMPI_b_Impa_b;
    boolean rtb_TmpSignalConversionAtVeIMPI_b_Impact;
    boolean rtb_TmpSignalConversionAtVeIMPI_b_VehI_a;
    boolean rtb_TmpSignalConversionAtVeIMPI_b_VehImp;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_Impc_h;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_ImpctT;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_VehI_a;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_VehI_m;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_VehImp;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_Veh_el;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_Veh_hy;
    boolean rtb_TmpSignalConversionAtVeIMPR_b_Veh_ml;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/IMPR_MedTEB'
     */
    /* SignalConversion generated from: '<S7>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

    /* SignalConversion generated from: '<S7>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S7>/VeIMPI_b_VehImpactDetected_M_3' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeIMPI_b_VehImp =
        Rte_IrvRead_IMPR_MedTEB_VeIMPI_b_VehImpactDetected_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPI_b_ImpactToggle_M_2' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TmpSignalConversionAtVeIMPI_b_Impact =
        Rte_IrvRead_IMPR_MedTEB_VeIMPI_b_ImpactToggle_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPI_b_VehImpactDetectedFA_M_1' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TmpSignalConversionAtVeIMPI_b_VehI_a =
        Rte_IrvRead_IMPR_MedTEB_VeIMPR_b_VehImpactDetectedFA_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPI_b_ImpactToggleFA_M_4' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    rtb_TmpSignalConversionAtVeIMPI_b_Impa_b =
        Rte_IrvRead_IMPR_MedTEB_VeIMPR_b_ImpactToggleFA_IRV();

    /* SignalConversion generated from: '<S7>/VeBSWR_e_HvRpdShtdwnCmdEEProgStatus' incorporates:
     *  Inport: '<Root>/VeBSWR_e_HvRpdShtdwnCmdEEProgStatus'
     */
    (void)Rte_Read_VeBSWR_e_HvRpdShtdwnCmdEEProgStatus_Value
        (&rtb_TmpSignalConversionAtVeBSWR_e_HvRp_n);

    /* SignalConversion generated from: '<S7>/VeIMPR_b_VehImpactDetected_C2FA' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_VehImp =
        Rte_IrvRead_IMPR_MedTEB_VeIMPR_b_VehImpactDetected_C2FA_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPR_b_ImpctToggle_C2FA' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_ImpctT =
        Rte_IrvRead_IMPR_MedTEB_VeIMPI_b_ImpactToggle_C2_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPR_b_VehImpactDetected_C2' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_Veh_el =
        Rte_IrvRead_IMPR_MedTEB_VeIMPI_b_VehImpactDetected_C2_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPR_b_ImpctToggle_C2' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_Impc_h =
        Rte_IrvRead_IMPR_MedTEB_VeIMPR_b_ImpactToggle_C2FA_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPR_b_VehImpactHardwireV' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_VehI_a =
        Rte_IrvRead_IMPR_MedTEB_VeIMPI_b_VehImpactHardwireV_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPR_b_VehImpactHardwire' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_Veh_ml =
        Rte_IrvRead_IMPR_MedTEB_VeIMPI_b_VehImpactHardwire_IRV();

    /* SignalConversion generated from: '<S7>/VeDMAB_y_StatusByte_CntrlSysShtDwn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CntrlSysShtDwn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CntrlSysShtDwn_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S7>/VeIMPR_b_VehImpactHardwireV_FA' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_Veh_hy =
        Rte_IrvRead_IMPR_MedTEB_VeIMPR_b_ImpactHardwireV_FA_IRV();

    /* SignalConversion generated from: '<S7>/VeIMPR_b_VehImpactHardwire_FA' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_VehI_m =
        Rte_IrvRead_IMPR_MedTEB_VeIMPR_b_ImpactHardwire_FA_IRV();

    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/IMPC_DtrmnHVRpdShtDwn'
     */

    /* RelationalOperator: '<S56>/Relational Operator3' incorporates:
     *  Constant: '<S56>/Constant3'
     *  S-Function (sfix_bitop): '<S56>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Logic: '<S56>/Logical1' incorporates:
     *  Constant: '<S38>/Calib'
     *  Constant: '<S56>/Constant1'
     *  Logic: '<S56>/Logical Operator'
     *  Logic: '<S56>/Logical10'
     *  Logic: '<S56>/Logical12'
     *  RelationalOperator: '<S56>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S56>/Bitwise Operator3'
     */
    rtb_Logical1 = ((!KeIMPR_b_CntrlSysShtDwn_LtchEnbl) || (((((uint32)
                        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
                     (!rtb_RelationalOperator3)));

    /* UnitDelay: '<S58>/Unit Delay' incorporates:
     *  Logic: '<S25>/Logical9'
     */
    rtb_TmpSignalConversionAtVeIMPI_b_VehI_a =
        (rtb_TmpSignalConversionAtVeIMPI_b_VehI_a ||
         rtb_TmpSignalConversionAtVeIMPI_b_Impa_b);

    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S46>/Calib'
     */
    if (KeIMPC_b_EnableImpact_C2)
    {
        /* DataStoreRead: '<S25>/NeIMPR_Cnt_HVShtDwn_MSOF1' incorporates:
         *  Logic: '<S25>/Logical11'
         */
        rtb_TmpSignalConversionAtVeIMPR_b_VehImp =
            (rtb_TmpSignalConversionAtVeIMPR_b_VehImp ||
             rtb_TmpSignalConversionAtVeIMPR_b_ImpctT);
    }
    else
    {
        /* DataStoreRead: '<S25>/NeIMPR_Cnt_HVShtDwn_MSOF1' incorporates:
         *  Logic: '<S25>/Logical12'
         */
        rtb_TmpSignalConversionAtVeIMPR_b_VehImp = !KeIMPC_b_EnableImpact_C2;
    }

    /* End of Switch: '<S49>/Switch' */

    /* Switch: '<S50>/Switch' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeIMPR_b_EnableImpactHardwire)
    {
        /* Logic: '<S25>/Logical' incorporates:
         *  Logic: '<S25>/Logical14'
         */
        rtb_TmpSignalConversionAtVeIMPR_b_VehI_a =
            ((rtb_TmpSignalConversionAtVeIMPR_b_VehI_a ||
              rtb_TmpSignalConversionAtVeIMPR_b_Veh_hy) ||
             rtb_TmpSignalConversionAtVeIMPR_b_VehI_m);
    }
    else
    {
        /* Logic: '<S25>/Logical' incorporates:
         *  Logic: '<S25>/Logical13'
         */
        rtb_TmpSignalConversionAtVeIMPR_b_VehI_a =
            !KeIMPR_b_EnableImpactHardwire;
    }

    /* End of Switch: '<S50>/Switch' */

    /* Logic: '<S25>/Logical4' */
    VeIMPC_b_LossCommORC = ((rtb_TmpSignalConversionAtVeIMPI_b_VehI_a &&
        rtb_TmpSignalConversionAtVeIMPR_b_VehImp) &&
                            rtb_TmpSignalConversionAtVeIMPR_b_VehI_a);

    /* If: '<S25>/If' */
    if (!rtb_TmpSignalConversionAtVeIMPI_b_VehI_a)
    {
        /* Outputs for IfAction SubSystem: '<S25>/IfAct' incorporates:
         *  ActionPort: '<S29>/Action Port'
         */
        /* Merge: '<S25>/Merge' incorporates:
         *  Inport: '<S29>/VeIMPR_b_VehImpactDetected'
         */
        IMPR_ac_B.Merge_h = rtb_TmpSignalConversionAtVeIMPI_b_VehImp;

        /* Merge: '<S25>/Merge1' incorporates:
         *  Inport: '<S29>/VeIMPR_b_ImpctToggle'
         */
        IMPR_ac_B.Merge1 = rtb_TmpSignalConversionAtVeIMPI_b_Impact;

        /* End of Outputs for SubSystem: '<S25>/IfAct' */
    }
    else if (!rtb_TmpSignalConversionAtVeIMPR_b_VehImp)
    {
        /* Outputs for IfAction SubSystem: '<S25>/IfAct1' incorporates:
         *  ActionPort: '<S30>/Action Port'
         */
        /* Merge: '<S25>/Merge' incorporates:
         *  Inport: '<S30>/VeIMPR_b_VehImpactDetected_C2'
         */
        IMPR_ac_B.Merge_h = rtb_TmpSignalConversionAtVeIMPR_b_Veh_el;

        /* Merge: '<S25>/Merge1' incorporates:
         *  Inport: '<S30>/VeIMPR_b_ImpctToggle_C2'
         */
        IMPR_ac_B.Merge1 = rtb_TmpSignalConversionAtVeIMPR_b_Impc_h;

        /* End of Outputs for SubSystem: '<S25>/IfAct1' */
    }
    else if (!rtb_TmpSignalConversionAtVeIMPR_b_VehI_a)
    {
        /* Outputs for IfAction SubSystem: '<S25>/IfAct3' incorporates:
         *  ActionPort: '<S32>/Action Port'
         */
        /* Merge: '<S25>/Merge1' incorporates:
         *  Inport: '<S32>/VeIMPR_b_VehImpactDetected_Hardwire'
         *  Logic: '<S32>/Logical1'
         */
        IMPR_ac_B.Merge1 = !rtb_TmpSignalConversionAtVeIMPR_b_Veh_ml;

        /* Merge: '<S25>/Merge' incorporates:
         *  Inport: '<S32>/VeIMPR_b_VehImpactDetected_Hardwire'
         *  SignalConversion generated from: '<S32>/VehImpactDetected'
         */
        IMPR_ac_B.Merge_h = rtb_TmpSignalConversionAtVeIMPR_b_Veh_ml;

        /* End of Outputs for SubSystem: '<S25>/IfAct3' */
    }
    else
    {
        if (VeIMPC_b_LossCommORC)
        {
            /* Outputs for IfAction SubSystem: '<S25>/IfAct2' incorporates:
             *  ActionPort: '<S31>/Action Port'
             */
            /* Merge: '<S25>/Merge' incorporates:
             *  Constant: '<S53>/Calib'
             *  SignalConversion generated from: '<S31>/VehImpactDetected'
             */
            IMPR_ac_B.Merge_h = KeIMPR_b_ForceImpactCommand;

            /* Merge: '<S25>/Merge1' incorporates:
             *  Constant: '<S54>/Calib'
             *  SignalConversion generated from: '<S31>/ImpactToggle'
             */
            IMPR_ac_B.Merge1 = KeIMPR_b_ForceImpactConfirm;

            /* End of Outputs for SubSystem: '<S25>/IfAct2' */
        }
    }

    /* End of If: '<S25>/If' */

    /* Logic: '<S25>/Logical7' incorporates:
     *  Logic: '<S25>/Logical8'
     */
    rtb_TmpSignalConversionAtVeIMPI_b_VehImp = ((IMPR_ac_B.Merge_h) &&
        (!IMPR_ac_B.Merge1));

    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S51>/EdgeRising' */
    /* Logic: '<S55>/AND' incorporates:
     *  Logic: '<S55>/OR1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeIMPI_b_Impact =
        (rtb_TmpSignalConversionAtVeIMPI_b_VehImp &&
         (!IMPR_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    IMPR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeIMPI_b_VehImp;

    /* End of Outputs for SubSystem: '<S51>/EdgeRising' */

    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S28>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S51>/Constant Value1'
     *  Logic: '<S51>/OR'
     *  Logic: '<S51>/OR1'
     *  MinMax: '<S51>/Minimum'
     *  Sum: '<S51>/Summation'
     *  UnitDelay: '<S51>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeIMPI_b_VehImp) ||
            rtb_TmpSignalConversionAtVeIMPI_b_Impact)
    {
        IMPR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        IMPR_ac_DW.UnitDelay_DSTATE = fminf(KeIMPR_t_TwoPulses, HeIMPR_t_MedTEB
            + IMPR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S51>/Switch1' */
    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S7>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBSWR_b_ImpctDtctd_HVShtdwn' */
    (void)Rte_Read_VeBSWR_b_ImpctDtctd_HVShtdwn_Value(&rtb_AND);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/IMPR_MedTEB'
     */
    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/IMPC_DtrmnHVRpdShtDwn'
     */
    /* Switch: '<S48>/Switch' incorporates:
     *  Constant: '<S40>/Calib'
     *  Constant: '<S42>/Calib'
     *  Logic: '<S51>/AND'
     *  RelationalOperator: '<S51>/Greater  Than'
     *  UnitDelay: '<S51>/Unit Delay'
     */
    if (KeIMPR_b_ImpactFromCAN)
    {
        /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Time' */
        rtb_AND = (rtb_TmpSignalConversionAtVeIMPI_b_VehImp &&
                   (IMPR_ac_DW.UnitDelay_DSTATE >= KeIMPR_t_TwoPulses));

        /* End of Outputs for SubSystem: '<S25>/Turn On Delay Time' */
    }

    /* End of Switch: '<S48>/Switch' */

    /* Logic: '<S25>/Logical' incorporates:
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  Logic: '<S25>/Logical1'
     *  Logic: '<S25>/Logical6'
     */
    rtb_TmpSignalConversionAtVeIMPR_b_VehI_a = ((((KeIMPC_b_EnableImpact_BSW) ||
        rtb_AND) && (KeIMPC_b_Enable_Impact)) &&
        (!rtb_TmpSignalConversionAtVeDFIR_b_DsblDi));

    /* Logic: '<S25>/Logical10' incorporates:
     *  Constant: '<S39>/Calib'
     *  DataStoreRead: '<S25>/NeIMPR_Cnt_HVShtDwn_MSOF1'
     *  Logic: '<S25>/Logical5'
     */
    VeIMPR_b_CntrlSysShtDwnFail = ((rtb_TmpSignalConversionAtVeIMPR_b_VehI_a ||
        (AeIMPR_b_HVRpdShtdwnCmd)) && (KeIMPR_b_ImpactDetected));

    /* Outputs for Atomic SubSystem: '<S56>/EdgeFalling1' */
    /* Logic: '<S58>/AND' incorporates:
     *  Logic: '<S58>/OR1'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    rtb_AND = ((!rtb_RelationalOperator3) && (IMPR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S58>/Unit Delay' */
    IMPR_ac_DW.UnitDelay_DSTATE_m = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S56>/EdgeFalling1' */

    /* Logic: '<S56>/Logical5' incorporates:
     *  Logic: '<S44>/NOT4'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
          rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_AND);

    /* Outputs for Atomic SubSystem: '<S57>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S57>/Counter Reset  Enabled ' */
    /* Switch: '<S64>/Switch1' incorporates:
     *  Logic: '<S57>/Fail Counter Reset'
     *  Logic: '<S57>/NOT6'
     *  Switch: '<S64>/Switch2'
     *  Switch: '<S65>/Switch1'
     *  UnitDelay: '<S57>/Unit Delay'
     *  UnitDelay: '<S57>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
            (IMPR_ac_DW.UnitDelay_DSTATE_as)) || (IMPR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S64>/Switch1' incorporates:
         *  Constant: '<S64>/Constant Value2'
         */
        VeIMPR_Cnt_CntrlSysShtDwn_FailCntr = 0U;

        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S65>/Constant Value2'
         */
        VeIMPR_Cnt_CntrlSysShtDwn_SmplCntr = 0U;
    }
    else
    {
        if (rtb_Logical1 && (VeIMPR_b_CntrlSysShtDwnFail))
        {
            /* Switch: '<S64>/Switch1' incorporates:
             *  Constant: '<S64>/Constant Value1'
             *  Sum: '<S64>/Subtraction'
             *  Switch: '<S64>/Switch2'
             *  UnitDelay: '<S64>/Unit Delay'
             */
            VeIMPR_Cnt_CntrlSysShtDwn_FailCntr = (uint16)(((uint32)
                VeIMPR_Cnt_CntrlSysShtDwn_FailCntr) + 1U);
        }

        /* Switch: '<S65>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S65>/Switch1' incorporates:
             *  Constant: '<S65>/Constant Value1'
             *  Sum: '<S65>/Subtraction'
             *  Switch: '<S65>/Switch2'
             *  UnitDelay: '<S65>/Unit Delay'
             */
            VeIMPR_Cnt_CntrlSysShtDwn_SmplCntr = (uint16)(((uint32)
                VeIMPR_Cnt_CntrlSysShtDwn_SmplCntr) + 1U);
        }

        /* End of Switch: '<S65>/Switch2' */
    }

    /* End of Switch: '<S64>/Switch1' */
    /* End of Outputs for SubSystem: '<S57>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S57>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S57>/Greater Than or Equal ' incorporates:
     *  Constant: '<S35>/Calib'
     */
    IMPR_ac_DW.UnitDelay1_DSTATE = (VeIMPR_Cnt_CntrlSysShtDwn_FailCntr >=
        KeIMPR_Cnt_HVShtDwn_FailLmt);

    /* Logic: '<S57>/NOT5' incorporates:
     *  Constant: '<S36>/Calib'
     *  Logic: '<S57>/NOT3'
     *  RelationalOperator: '<S57>/Less Than  or Equal'
     */
    IMPR_ac_DW.UnitDelay_DSTATE_as = ((VeIMPR_Cnt_CntrlSysShtDwn_SmplCntr >=
        KeIMPR_Cnt_HVShtDwn_SmplLmt) && (!IMPR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S63>/Constant Value'
     *  DataStoreWrite: '<S25>/Data Store Write1'
     *  Switch: '<S69>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        IMPR_ac_DW.NeIMPR_Cnt_HVShtDwn_MFOP = 0U;
    }
    else
    {
        if (IMPR_ac_DW.UnitDelay_DSTATE_as)
        {
            /* MinMax: '<S63>/Minimum2' incorporates:
             *  DataStoreRead: '<S25>/Data Store Read1'
             *  Switch: '<S69>/Switch1'
             */
            if (VeIMPR_Cnt_CntrlSysShtDwn_FailCntr >
                    IMPR_ac_DW.NeIMPR_Cnt_HVShtDwn_MFOP)
            {
                /* DataStoreWrite: '<S25>/Data Store Write1' incorporates:
                 *  Switch: '<S69>/Switch1'
                 */
                IMPR_ac_DW.NeIMPR_Cnt_HVShtDwn_MFOP =
                    VeIMPR_Cnt_CntrlSysShtDwn_FailCntr;
            }

            /* End of MinMax: '<S63>/Minimum2' */
        }
    }

    /* End of Switch: '<S70>/Switch1' */

    /* S-Function (sfix_bitop): '<S25>/Bitwise Logical Operator1' incorporates:
     *  RelationalOperator: '<S25>/Comparison1'
     */
#if !Rte_SysCon_Variant_IMPR_1

    /* VariantMerge generated from: '<S25>/Variant_Source2' incorporates:
     *  Constant: '<S25>/Constant Value6'
     */
    VeIMPC_b_WriteStFailed = ((((sint32)rtb_TmpSignalConversionAtVeBSWR_e_HvRp_n)
        & 1) == 1);

#endif

    /* End of S-Function (sfix_bitop): '<S25>/Bitwise Logical Operator1' */

    /* RelationalOperator: '<S25>/Comparison2' incorporates:
     *  Constant: '<S25>/Constant Value3'
     */
    VeIMPC_b_WriteStSuccess = (((sint32)rtb_TmpSignalConversionAtVeBSWR_e_HvRp_n)
        == 0);

    /* RelationalOperator: '<S25>/Comparison8' */
#if Rte_SysCon_Variant_IMPR_1

    /* VariantMerge generated from: '<S25>/Variant_Source2' incorporates:
     *  Constant: '<S25>/Constant Value7'
     */
    VeIMPC_b_WriteStFailed = (1 == ((sint32)
        rtb_TmpSignalConversionAtVeBSWR_e_HvRp_n));

#endif

    /* End of RelationalOperator: '<S25>/Comparison8' */

    /* Logic: '<S25>/Logical2' incorporates:
     *  DataStoreRead: '<S25>/NeIMPR_Cnt_HVShtDwn_MSOF1'
     *  Logic: '<S25>/Logical3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo =
        (rtb_TmpSignalConversionAtVeIMPR_b_VehI_a && (!AeIMPR_b_HVRpdShtdwnCmd));

    /* Chart: '<S25>/RuntimeEEWrite' incorporates:
     *  Constant: '<S37>/Calib'
     *  Constant: '<S41>/Calib'
     */
    /* Gateway: IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/RuntimeEEWrite */
    /* During: IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/RuntimeEEWrite */
    if (((uint32)IMPR_ac_DW.is_active_c11_IMPR_ac) == 0U)
    {
        /* Entry: IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/RuntimeEEWrite */
        IMPR_ac_DW.is_active_c11_IMPR_ac = 1U;

        /* Entry Internal: IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/RuntimeEEWrite */
        /* Transition: '<S45>:9' */
        VeIMPC_e_EepSetWriteCounter = 0U;
        IMPR_ac_DW.is_c11_IMPR_ac = IMPR_ac_IN_Init_f;

        /* Entry 'Init': '<S45>:8' */
        VeIMPC_e_EepSetSts = CeIMPR_e_Init;
    }
    else
    {
        switch (IMPR_ac_DW.is_c11_IMPR_ac)
        {
          case IMPR_ac_IN_Init_f:
            VeIMPC_e_EepSetSts = CeIMPR_e_Init;

            /* During 'Init': '<S45>:8' */
            if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
            {
                /* Outputs for Function Call SubSystem: '<S25>/ProgramRunTime_HvRpdShtdwnCmd' */
                /* DataStoreWrite: '<S43>/NeIMPR_Cnt_HVShtDwn_MFOP1' */
                /* Transition: '<S45>:22' */
                /* Transition: '<S45>:78' */
                /* ProgramRunTime_HvRpdShtdwnCmd(&LeIMPR_b_HVRpdShtdwnCmd,1); */
                /* Event: '<S45>:93' */
                AeIMPR_b_HVRpdShtdwnCmd = true;

                /* SignalConversion: '<S43>/Signal Conversion' */
                (void)Rte_Write_AeIMPR_b_HVRpdShtdwnCmd_AeIMPR_b_HVRpdShtdwnCmd
                    (true);

                /* End of Outputs for SubSystem: '<S25>/ProgramRunTime_HvRpdShtdwnCmd' */
                IMPR_ac_DW.is_c11_IMPR_ac = IMPR_ac_IN_Write_Procedure_j;

                /* Entry 'Write_Procedure': '<S45>:10' */
                VeIMPC_e_EepSetSts = CeIMPR_e_WriteProcedure;
            }
            break;

          case IMPR_ac_IN_Write_Failed_a:
            VeIMPC_e_EepSetSts = CeIMPR_e_WriteFailed;

            /* During 'Write_Failed': '<S45>:61' */
            if (KeIMPR_b_RuntimeLogicReset)
            {
                /* Transition: '<S45>:69' */
                /* Transition: '<S45>:60' */
                /* Transition: '<S45>:17' */
                IMPR_ac_DW.is_c11_IMPR_ac = IMPR_ac_IN_Init_f;

                /* Entry 'Init': '<S45>:8' */
                VeIMPC_e_EepSetSts = CeIMPR_e_Init;
            }
            break;

          case IMPR_ac_IN_Write_Procedure_j:
            VeIMPC_e_EepSetSts = CeIMPR_e_WriteProcedure;

            /* During 'Write_Procedure': '<S45>:10' */
            if (VeIMPC_e_EepSetWriteCounter > KeIMPR_Cnt_WriteAttempts)
            {
                /* Transition: '<S45>:62' */
                IMPR_ac_DW.is_c11_IMPR_ac = IMPR_ac_IN_Write_Failed_a;

                /* Entry 'Write_Failed': '<S45>:61' */
                VeIMPC_e_EepSetSts = CeIMPR_e_WriteFailed;
                VeIMPC_e_EepSetWriteCounter = 0U;
            }
            else if (VeIMPC_b_WriteStFailed)
            {
                /* Transition: '<S45>:59' */
                VeIMPC_e_EepSetWriteCounter = (uint8)((sint32)(((sint32)
                    VeIMPC_e_EepSetWriteCounter) + 1));

                /* Outputs for Function Call SubSystem: '<S25>/ProgramRunTime_HvRpdShtdwnCmd' */
                /* DataStoreWrite: '<S43>/NeIMPR_Cnt_HVShtDwn_MFOP1' */
                /* Transition: '<S45>:84' */
                /* ProgramRunTime_HvRpdShtdwnCmd(&LeIMPR_b_HVRpdShtdwnCmd,1); */
                /* Event: '<S45>:93' */
                AeIMPR_b_HVRpdShtdwnCmd = true;

                /* SignalConversion: '<S43>/Signal Conversion' */
                (void)Rte_Write_AeIMPR_b_HVRpdShtdwnCmd_AeIMPR_b_HVRpdShtdwnCmd
                    (true);

                /* End of Outputs for SubSystem: '<S25>/ProgramRunTime_HvRpdShtdwnCmd' */
                /* Transition: '<S45>:83' */
                IMPR_ac_DW.is_c11_IMPR_ac = IMPR_ac_IN_Write_Procedure_j;

                /* Entry 'Write_Procedure': '<S45>:10' */
                VeIMPC_e_EepSetSts = CeIMPR_e_WriteProcedure;
            }
            else
            {
                if (VeIMPC_b_WriteStSuccess)
                {
                    /* Transition: '<S45>:86' */
                    IMPR_ac_DW.is_c11_IMPR_ac = IMPR_ac_IN_Write_Success_b;

                    /* Entry 'Write_Success': '<S45>:85' */
                    VeIMPC_e_EepSetSts = CeIMPR_e_WriteSuccess;
                }
            }
            break;

          default:
            VeIMPC_e_EepSetSts = CeIMPR_e_WriteSuccess;

            /* During 'Write_Success': '<S45>:85' */
            if ((!rtb_TmpSignalConversionAtVeDFIR_b_PostCo) &&
                    (VeIMPC_b_WriteStSuccess))
            {
                /* Transition: '<S45>:88' */
                /* Transition: '<S45>:91' */
                IMPR_ac_DW.is_c11_IMPR_ac = IMPR_ac_IN_Init_f;

                /* Entry 'Init': '<S45>:8' */
                VeIMPC_e_EepSetSts = CeIMPR_e_Init;
            }
            break;
        }
    }

    /* End of Chart: '<S25>/RuntimeEEWrite' */

    /* Outputs for Enabled SubSystem: '<S56>/Fail' incorporates:
     *  EnablePort: '<S60>/Enable'
     */
    if (IMPR_ac_DW.UnitDelay1_DSTATE)
    {
        /* Merge: '<S56>/Merge' incorporates:
         *  Constant: '<S66>/Constant'
         *  SignalConversion generated from: '<S60>/FaultSts'
         */
        IMPR_ac_B.Merge_j = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S56>/Fail' */

    /* Outputs for Enabled SubSystem: '<S56>/Init' incorporates:
     *  EnablePort: '<S61>/Enable'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi)
    {
        /* Merge: '<S56>/Merge' incorporates:
         *  Constant: '<S67>/Constant'
         *  SignalConversion generated from: '<S61>/FaultSts'
         */
        IMPR_ac_B.Merge_j = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S56>/Init' */

    /* Outputs for Enabled SubSystem: '<S56>/Pass' incorporates:
     *  EnablePort: '<S62>/Enable'
     */
    if (IMPR_ac_DW.UnitDelay_DSTATE_as)
    {
        /* Merge: '<S56>/Merge' incorporates:
         *  Constant: '<S68>/Constant'
         *  SignalConversion generated from: '<S62>/FaultSts'
         */
        IMPR_ac_B.Merge_j = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S56>/Pass' */

    /* RelationalOperator: '<S56>/Relational Operator' incorporates:
     *  Constant: '<S59>/Constant'
     *  Merge: '<S56>/Merge'
     */
    VeIMPR_b_CntrlSysShtDwn_FltDtct = (((uint32)IMPR_ac_B.Merge_j) ==
        CeDFIB_e_Fail);

    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/IMPO_ProcessOutputs'
     */
    /* Outport: '<Root>/VeIMPR_b_HighVoltageRapidShtdwnCmnd' incorporates:
     *  Logic: '<S71>/AND'
     *  SignalConversion generated from: '<S7>/VeIMPR_b_HighVoltageRapidShtdwnCmnd'
     */
    (void)Rte_Write_VeIMPR_b_HighVoltageRapidShtdwnCmnd_Value
        (VeIMPR_b_CntrlSysShtDwnFail);

    /* Outport: '<Root>/VeIMPR_b_ImpactDetectedCAN' incorporates:
     *  Logic: '<S73>/AND'
     *  SignalConversion generated from: '<S7>/VeIMPR_b_ImpactDetectedCAN'
     */
    (void)Rte_Write_VeIMPR_b_ImpactDetectedCAN_Value(IMPR_ac_B.Merge_h);

    /* Outport: '<Root>/VeIMPR_b_ImpactToggleCAN' incorporates:
     *  Logic: '<S74>/AND'
     *  SignalConversion generated from: '<S7>/VeIMPR_b_ImpactToggleCAN'
     */
    (void)Rte_Write_VeIMPR_b_ImpactToggleCAN_Value(IMPR_ac_B.Merge1);

    /* Outport: '<Root>/VeIMPR_b_LossCommORC' incorporates:
     *  Logic: '<S72>/AND'
     *  SignalConversion generated from: '<S7>/VeIMPR_b_LossCommORC'
     */
    (void)Rte_Write_VeIMPR_b_LossCommORC_Value(VeIMPC_b_LossCommORC);

    /* End of Outputs for S-Function (fcgen): '<S7>/FcnCallGen' */

    /* Outport: '<Root>/VeIMPR_e_FaultSts_CntrlSysShtDwn' incorporates:
     *  Merge: '<S56>/Merge'
     *  SignalConversion generated from: '<S7>/VeIMPR_e_FaultSts_CntrlSysShtDwn'
     */
    (void)Rte_Write_VeIMPR_e_FaultSts_CntrlSysShtDwn_Value(IMPR_ac_B.Merge_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, IMPR_CODE) IMPR_MedTEH(void) /* Explicit Task: MedTEH */
{
    uint8 rtb_TmpSignalConversionAtVeBSWR_e_HvRpdS;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/IMPR_MedTEH'
     */
    /* SignalConversion generated from: '<S8>/VeBSWR_e_HvRpdShtdwnCmdEEProgStatus' incorporates:
     *  Inport: '<Root>/VeBSWR_e_HvRpdShtdwnCmdEEProgStatus'
     */
    (void)Rte_Read_VeBSWR_e_HvRpdShtdwnCmdEEProgStatus_Value
        (&rtb_TmpSignalConversionAtVeBSWR_e_HvRpdS);

    /* S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator1' incorporates:
     *  RelationalOperator: '<S8>/Comparison1'
     */
#if !Rte_SysCon_Variant_IMPR_1

    /* VariantMerge generated from: '<S8>/Variant_Source1' incorporates:
     *  Constant: '<S8>/Constant Value6'
     */
    VeIMPC_b_WriteStFailed_ClearLatch = ((((sint32)
        rtb_TmpSignalConversionAtVeBSWR_e_HvRpdS) & 1) == 1);

#endif

    /* End of S-Function (sfix_bitop): '<S8>/Bitwise Logical Operator1' */

    /* RelationalOperator: '<S8>/Comparison5' incorporates:
     *  Constant: '<S8>/Constant Value5'
     */
    VeIMPC_b_WriteStSuccess_ClearLatch = (0 == ((sint32)
        rtb_TmpSignalConversionAtVeBSWR_e_HvRpdS));

    /* RelationalOperator: '<S8>/Comparison8' */
#if Rte_SysCon_Variant_IMPR_1

    /* VariantMerge generated from: '<S8>/Variant_Source1' incorporates:
     *  Constant: '<S8>/Constant Value7'
     */
    VeIMPC_b_WriteStFailed_ClearLatch = (1 == ((sint32)
        rtb_TmpSignalConversionAtVeBSWR_e_HvRpdS));

#endif

    /* End of RelationalOperator: '<S8>/Comparison8' */

    /* Logic: '<S8>/Logical' incorporates:
     *  Constant: '<S75>/Calib'
     *  DataStoreRead: '<S8>/NeIMPR_Cnt_HVShtDwn_MSOF2'
     */
    IMPR_ac_B.Logical = ((KeIMPC_b_ClearLatchedImpactEvents) &&
                         (AeIMPR_b_HVRpdShtdwnCmd));

    /* Chart: '<S8>/RuntimeEEWrite_ClearImpact' */
    IMPR_ac_RuntimeEEWrite_ClearImpact();

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, IMPR_CODE) DidWrite_RWD3202_ImpactResponse(void)
{
    boolean rtb_TmpSignalConversionAtVeDCAB_b_RWD320;

    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD3202_ImpactResponse' incorporates:
     *  SubSystem: '<Root>/RWD9E3B_IPEETstMilgeLmt'
     */
    /* SignalConversion generated from: '<S18>/VeDCAB_b_RWD3202_ImpactResponse' incorporates:
     *  Inport: '<Root>/VeDCAB_b_RWD3202_ImpactResponse'
     */
    (void)Rte_Read_VeDCAB_b_RWD3202_ImpactResponse_Value
        (&rtb_TmpSignalConversionAtVeDCAB_b_RWD320);

    /* If: '<S18>/If' incorporates:
     *  Constant: '<S93>/Calib'
     *  DataStoreRead: '<S18>/NeIMPR_Cnt_HVShtDwn_MSOF1'
     *  Logic: '<S18>/Logical Operator'
     *  Logic: '<S18>/Logical Operator1'
     *  Logic: '<S18>/Logical Operator3'
     *  Logic: '<S18>/Logical Operator4'
     *  Logic: '<S18>/Logical Operator5'
     */
    if ((!rtb_TmpSignalConversionAtVeDCAB_b_RWD320) && (AeIMPR_b_HVRpdShtdwnCmd))
    {
        /* Outputs for IfAction SubSystem: '<S18>/Clear_Latched_Impact' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* DataStoreWrite: '<S92>/NeIMPR_Cnt_HVShtDwn_MFOP1' incorporates:
         *  Constant: '<S92>/FALSE Constant'
         */
        AeIMPR_b_HVRpdShtdwnCmd = false;

        /* SignalConversion: '<S92>/Signal Conversion' incorporates:
         *  Constant: '<S92>/FALSE Constant'
         */
        (void)Rte_Write_AeIMPR_b_HVRpdShtdwnCmd_AeIMPR_b_HVRpdShtdwnCmd(false);

        /* End of Outputs for SubSystem: '<S18>/Clear_Latched_Impact' */
    }
    else
    {
        if ((!AeIMPR_b_HVRpdShtdwnCmd) &&
                (rtb_TmpSignalConversionAtVeDCAB_b_RWD320 &&
                 (KeIMPC_b_EnblClrImpct_DiagTool)))
        {
            /* Outputs for IfAction SubSystem: '<S18>/Set_ImpactBit' incorporates:
             *  ActionPort: '<S94>/Action Port'
             */
            /* DataStoreWrite: '<S94>/NeIMPR_Cnt_HVShtDwn_MFOP1' incorporates:
             *  Constant: '<S94>/FALSE Constant'
             */
            AeIMPR_b_HVRpdShtdwnCmd = true;

            /* SignalConversion: '<S94>/Signal Conversion1' incorporates:
             *  Constant: '<S94>/FALSE Constant'
             */
            (void)Rte_Write_AeIMPR_b_HVRpdShtdwnCmd_AeIMPR_b_HVRpdShtdwnCmd(true);

            /* End of Outputs for SubSystem: '<S18>/Set_ImpactBit' */
        }
    }

    /* End of If: '<S18>/If' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD3202_ImpactResponse' */
}

/* Output function */
FUNC(void, IMPR_CODE) FsftIMPR_b_ImpactHardwire(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMPR_b_ImpactHardwire' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S1>/FsftIMPR_b_ImpactHardwire_Chrt'
     *  SignalConversion generated from: '<S1>/VeIMPR_b_ImpactHardwire_FA'
     */
    /* Gateway: FsftIMPR_b_ImpactHardwire/FsftIMPR_b_ImpactHardwire_Chrt */
    /* During: FsftIMPR_b_ImpactHardwire/FsftIMPR_b_ImpactHardwire_Chrt */
    /* Entry Internal: FsftIMPR_b_ImpactHardwire/FsftIMPR_b_ImpactHardwire_Chrt */
    /* Transition: '<S19>:2' */
    Rte_IrvWrite_FsftIMPR_b_ImpactHardwire_VeIMPR_b_ImpactHardwire_FA_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIMPR_b_ImpactHardwire' */
}

/* Output function */
FUNC(void, IMPR_CODE) FsftIMPR_b_ImpactHardwireV(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMPR_b_ImpactHardwireV' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S2>/FsftIMPR_b_ImpactHardwireV_C2Chrt'
     *  SignalConversion generated from: '<S2>/VeIMPR_b_ImpactHardwireV_FA'
     */
    /* Gateway: FsftIMPR_b_ImpactHardwireV/FsftIMPR_b_ImpactHardwireV_C2Chrt */
    /* During: FsftIMPR_b_ImpactHardwireV/FsftIMPR_b_ImpactHardwireV_C2Chrt */
    /* Entry Internal: FsftIMPR_b_ImpactHardwireV/FsftIMPR_b_ImpactHardwireV_C2Chrt */
    /* Transition: '<S20>:2' */
    Rte_IrvWrite_FsftIMPR_b_ImpactHardwireV_VeIMPR_b_ImpactHardwireV_FA_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIMPR_b_ImpactHardwireV' */
}

/* Output function */
FUNC(void, IMPR_CODE) FsftIMPR_b_ImpactToggle(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMPR_b_ImpactToggle' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S3>/FsftIMPR_b_ImpactToggleChrt'
     *  SignalConversion generated from: '<S3>/VeIMPR_b_ImpactToggleFA'
     */
    /* Gateway: FsftIMPR_b_ImpactToggle/FsftIMPR_b_ImpactToggleChrt */
    /* During: FsftIMPR_b_ImpactToggle/FsftIMPR_b_ImpactToggleChrt */
    /* Entry Internal: FsftIMPR_b_ImpactToggle/FsftIMPR_b_ImpactToggleChrt */
    /* Transition: '<S21>:2' */
    Rte_IrvWrite_FsftIMPR_b_ImpactToggle_VeIMPR_b_ImpactToggleFA_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIMPR_b_ImpactToggle' */
}

/* Output function */
FUNC(void, IMPR_CODE) FsftIMPR_b_ImpactToggle_C2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMPR_b_ImpactToggle_C2' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S4>/FsftIMPR_b_ImpactToggle_C2Chrt'
     *  SignalConversion generated from: '<S4>/VeIMPR_b_ImpactToggle_C2FA'
     */
    /* Gateway: FsftIMPR_b_ImpactToggle_C2/FsftIMPR_b_ImpactToggle_C2Chrt */
    /* During: FsftIMPR_b_ImpactToggle_C2/FsftIMPR_b_ImpactToggle_C2Chrt */
    /* Entry Internal: FsftIMPR_b_ImpactToggle_C2/FsftIMPR_b_ImpactToggle_C2Chrt */
    /* Transition: '<S22>:2' */
    Rte_IrvWrite_FsftIMPR_b_ImpactToggle_C2_VeIMPR_b_ImpactToggle_C2FA_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftIMPR_b_ImpactToggle_C2' */
}

/* Output function */
FUNC(void, IMPR_CODE) FsftIMPR_b_VehImpactDetected(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMPR_b_VehImpactDetected' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  Chart: '<S5>/FsftIMPR_b_VehImpactDetectedChrt'
     *  SignalConversion generated from: '<S5>/VeIMPR_b_VehImpactDetectedFA'
     */
    /* Gateway: FsftIMPR_b_VehImpactDetected/FsftIMPR_b_VehImpactDetectedChrt */
    /* During: FsftIMPR_b_VehImpactDetected/FsftIMPR_b_VehImpactDetectedChrt */
    /* Entry Internal: FsftIMPR_b_VehImpactDetected/FsftIMPR_b_VehImpactDetectedChrt */
    /* Transition: '<S23>:2' */
    Rte_IrvWrite_FsftIMPR_b_VehImpactDetected_VeIMPR_b_VehImpactDetectedFA_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftIMPR_b_VehImpactDetected' */
}

/* Output function */
FUNC(void, IMPR_CODE) FsftIMPR_b_VehImpactDetected_C2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMPR_b_VehImpactDetected_C2' */
    /* Merge: '<Root>/Merge_5' incorporates:
     *  Chart: '<S6>/FsftIMPR_b_VehImpactDetected_C2Chrt'
     *  SignalConversion generated from: '<S6>/VeIMPR_b_VehImpactDetected_C2FA'
     */
    /* Gateway: FsftIMPR_b_VehImpactDetected_C2/FsftIMPR_b_VehImpactDetected_C2Chrt */
    /* During: FsftIMPR_b_VehImpactDetected_C2/FsftIMPR_b_VehImpactDetected_C2Chrt */
    /* Entry Internal: FsftIMPR_b_VehImpactDetected_C2/FsftIMPR_b_VehImpactDetected_C2Chrt */
    /* Transition: '<S24>:2' */
    Rte_IrvWrite_FsftIMPR_b_VehImpactDetected_C2_VeIMPR_b_VehImpactDetected_C2FA_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftIMPR_b_VehImpactDetected_C2' */
}

/* Output function */
FUNC(void, IMPR_CODE) PokeIMPR_b_ImpactHardwire(VAR(boolean, AUTOMATIC)
    LeIMPR_b_ImpactHardwire)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIMPR_b_ImpactHardwire' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S11>/LeIMPR_b_ImpactHardwire'
     *  SignalConversion generated from: '<S11>/VeIMPR_b_ImpactHardwire'
     */
    /* Gateway: PokeIMPR_b_ImpactHardwire/PokeIMPR_b_ImpactHardwire_Chrt */
    /* During: PokeIMPR_b_ImpactHardwire/PokeIMPR_b_ImpactHardwire_Chrt */
    /* Entry Internal: PokeIMPR_b_ImpactHardwire/PokeIMPR_b_ImpactHardwire_Chrt */
    /* Transition: '<S85>:2' */
    Rte_IrvWrite_PokeIMPR_b_ImpactHardwire_VeIMPI_b_VehImpactHardwire_IRV
        (LeIMPR_b_ImpactHardwire);

    /* End of Outputs for SubSystem: '<Root>/PokeIMPR_b_ImpactHardwire' */
}

/* Output function */
FUNC(void, IMPR_CODE) PokeIMPR_b_ImpactHardwireV(VAR(boolean, AUTOMATIC)
    LeIMPR_b_ImpactHardwireV)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIMPR_b_ImpactHardwireV' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S12>/LeIMPR_b_ImpactHardwireV'
     *  SignalConversion generated from: '<S12>/VeIMPR_b_ImpactHardwireV'
     */
    /* Gateway: PokeIMPR_b_ImpactHardwireV/PokeIMPR_b_ImpactHardwireV_Chrt */
    /* During: PokeIMPR_b_ImpactHardwireV/PokeIMPR_b_ImpactHardwireV_Chrt */
    /* Entry Internal: PokeIMPR_b_ImpactHardwireV/PokeIMPR_b_ImpactHardwireV_Chrt */
    /* Transition: '<S86>:2' */
    Rte_IrvWrite_PokeIMPR_b_ImpactHardwireV_VeIMPI_b_VehImpactHardwireV_IRV
        (LeIMPR_b_ImpactHardwireV);

    /* End of Outputs for SubSystem: '<Root>/PokeIMPR_b_ImpactHardwireV' */
}

/* Output function */
FUNC(void, IMPR_CODE) PokeIMPR_b_ImpactToggle(VAR(boolean, AUTOMATIC)
    LeIMPR_b_ImpactToggle)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIMPR_b_ImpactToggle' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S13>/LeIMPR_b_ImpactToggle'
     *  SignalConversion generated from: '<S13>/VeIMPR_b_ImpactToggle'
     */
    /* Gateway: PokeIMPR_b_ImpactToggle/PokeIMPR_b_ImpactToggleChrt */
    /* During: PokeIMPR_b_ImpactToggle/PokeIMPR_b_ImpactToggleChrt */
    /* Entry Internal: PokeIMPR_b_ImpactToggle/PokeIMPR_b_ImpactToggleChrt */
    /* Transition: '<S87>:2' */
    Rte_IrvWrite_PokeIMPR_b_ImpactToggle_VeIMPI_b_ImpactToggle_IRV
        (LeIMPR_b_ImpactToggle);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S13>/PokeIMPR_b_ImpactToggleChrt'
     *  SignalConversion generated from: '<S13>/VeIMPR_b_ImpactToggle_Fa_Rst'
     */
    Rte_IrvWrite_PokeIMPR_b_ImpactToggle_VeIMPR_b_ImpactToggleFA_IRV(false);

    /* End of Outputs for SubSystem: '<Root>/PokeIMPR_b_ImpactToggle' */
}

/* Output function */
FUNC(void, IMPR_CODE) PokeIMPR_b_ImpactToggle_C2(VAR(boolean, AUTOMATIC)
    LeIMPR_b_ImpactToggle_C2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIMPR_b_ImpactToggle_C2' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S14>/PokeIMPR_b_ImpactToggle_C2Chrt'
     *  SignalConversion generated from: '<S14>/VeIMPR_b_ImpactToggle_C2FA_Rst'
     */
    /* Gateway: PokeIMPR_b_ImpactToggle_C2/PokeIMPR_b_ImpactToggle_C2Chrt */
    /* During: PokeIMPR_b_ImpactToggle_C2/PokeIMPR_b_ImpactToggle_C2Chrt */
    /* Entry Internal: PokeIMPR_b_ImpactToggle_C2/PokeIMPR_b_ImpactToggle_C2Chrt */
    /* Transition: '<S88>:2' */
    Rte_IrvWrite_PokeIMPR_b_ImpactToggle_C2_VeIMPR_b_ImpactToggle_C2FA_IRV(false);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S14>/LeIMPR_b_ImpactToggle_C2'
     *  SignalConversion generated from: '<S14>/VeIMPR_b_ImpactToggle_C2'
     */
    Rte_IrvWrite_PokeIMPR_b_ImpactToggle_C2_VeIMPI_b_ImpactToggle_C2_IRV
        (LeIMPR_b_ImpactToggle_C2);

    /* End of Outputs for SubSystem: '<Root>/PokeIMPR_b_ImpactToggle_C2' */
}

/* Output function */
FUNC(void, IMPR_CODE) PokeIMPR_b_ImpctDtctd_HVShtdwn(VAR(boolean, AUTOMATIC)
    LeIMPR_b_ImpctDtctd_HVShtdwn)
{
    UNUSED_PARAMETER(LeIMPR_b_ImpctDtctd_HVShtdwn);

    /* Gateway: PokeIMPR_b_ImpctDtctd_HVShtdwn/PokeIMPR_b_ImpctDtctd_HVShtdwnChrt */
    /* During: PokeIMPR_b_ImpctDtctd_HVShtdwn/PokeIMPR_b_ImpctDtctd_HVShtdwnChrt */
    /* Entry Internal: PokeIMPR_b_ImpctDtctd_HVShtdwn/PokeIMPR_b_ImpctDtctd_HVShtdwnChrt */
    /* Transition: '<S89>:2' */
}

/* Output function */
FUNC(void, IMPR_CODE) PokeIMPR_b_VehImpactDetected(VAR(boolean, AUTOMATIC)
    LeIMPR_b_VehImpactDetected)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIMPR_b_VehImpactDetected' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  Chart: '<S16>/PokeIMPR_b_VehImpactDetectedChrt'
     *  SignalConversion generated from: '<S16>/LeIMPR_b_VehImpactDetected_FA_Rst'
     */
    /* Gateway: PokeIMPR_b_VehImpactDetected/PokeIMPR_b_VehImpactDetectedChrt */
    /* During: PokeIMPR_b_VehImpactDetected/PokeIMPR_b_VehImpactDetectedChrt */
    /* Entry Internal: PokeIMPR_b_VehImpactDetected/PokeIMPR_b_VehImpactDetectedChrt */
    /* Transition: '<S90>:2' */
    Rte_IrvWrite_PokeIMPR_b_VehImpactDetected_VeIMPR_b_VehImpactDetectedFA_IRV
        (false);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S16>/LeIMPR_b_VehImpactDetected'
     *  SignalConversion generated from: '<S16>/VeIMPR_b_VehImpactDetected'
     */
    Rte_IrvWrite_PokeIMPR_b_VehImpactDetected_VeIMPI_b_VehImpactDetected_IRV
        (LeIMPR_b_VehImpactDetected);

    /* End of Outputs for SubSystem: '<Root>/PokeIMPR_b_VehImpactDetected' */
}

/* Output function */
FUNC(void, IMPR_CODE) PokeIMPR_b_VehImpactDetected_C2(VAR(boolean, AUTOMATIC)
    LeIMPR_b_VehImpactDetected_C2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeIMPR_b_VehImpactDetected_C2' */
    /* Merge: '<Root>/Merge_5' incorporates:
     *  Chart: '<S17>/PokeIMPR_b_VehImpactDetected_C2Chrt'
     *  SignalConversion generated from: '<S17>/LeIMPR_b_VehImpactDetected_FA_Rst'
     */
    /* Gateway: PokeIMPR_b_VehImpactDetected_C2/PokeIMPR_b_VehImpactDetected_C2Chrt */
    /* During: PokeIMPR_b_VehImpactDetected_C2/PokeIMPR_b_VehImpactDetected_C2Chrt */
    /* Entry Internal: PokeIMPR_b_VehImpactDetected_C2/PokeIMPR_b_VehImpactDetected_C2Chrt */
    /* Transition: '<S91>:2' */
    Rte_IrvWrite_PokeIMPR_b_VehImpactDetected_C2_VeIMPR_b_VehImpactDetected_C2FA_IRV
        (false);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S17>/LeIMPR_b_VehImpactDetected_C2'
     *  SignalConversion generated from: '<S17>/VeIMPR_b_VehImpactDetected'
     */
    Rte_IrvWrite_PokeIMPR_b_VehImpactDetected_C2_VeIMPI_b_VehImpactDetected_C2_IRV
        (LeIMPR_b_VehImpactDetected_C2);

    /* End of Outputs for SubSystem: '<Root>/PokeIMPR_b_VehImpactDetected_C2' */
}

/* Output function */
FUNC(void, IMPR_CODE) IMPR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/IMPR_PwrOff'
     */
    /* Outport: '<Root>/NeIMPR_Cnt_HVShtDwn_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S9>/NeIMPR_Cnt_HVShtDwn_MFOP'
     */
    (void)Rte_Write_NeIMPR_Cnt_HVShtDwn_MFOP_NeIMPR_Cnt_HVShtDwn_MFOP
        (IMPR_ac_DW.NeIMPR_Cnt_HVShtDwn_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, IMPR_CODE) IMPR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/IMPR_PwrOn'
     */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/DSM_Init'
     */
    /* DataStoreWrite: '<S80>/NeIMPR_Cnt_HVShtDwn_MFOP' incorporates:
     *  Inport: '<Root>/NeIMPR_Cnt_HVShtDwn_MFOP_PM_In'
     */
    (void)Rte_Read_NeIMPR_Cnt_HVShtDwn_MFOP_Rx_NeIMPR_Cnt_HVShtDwn_MFOP
        (&IMPR_ac_DW.NeIMPR_Cnt_HVShtDwn_MFOP);

    /* DataStoreWrite: '<S80>/NeIMPR_Cnt_HVShtDwn_MFOP1' incorporates:
     *  Inport: '<Root>/AeIMPR_b_HVRpdShtdwnCmd_Strimm_In'
     */
    (void)Rte_Read_AeIMPR_b_HVRpdShtdwnCmd_Rx_AeIMPR_b_HVRpdShtdwnCmd
        ((&(AeIMPR_b_HVRpdShtdwnCmd)));

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Init_IMPI_Output'
     */
    /* SignalConversion generated from: '<S82>/VeIMPR_b_VehImpactDetectedFA' */
    IMPR_ac_B.OutportBufferForVeIMPR_b_VehImpactDetect = false;

    /* SignalConversion generated from: '<S82>/VeIMPR_b_ImpactToogleFA' */
    IMPR_ac_B.OutportBufferForVeIMPR_b_ImpactToogleFA = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_VehImpactDetected' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactDetect = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_ImpactToggle' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_ImpactToggle = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_VehImpactDetected_C2FA' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactDete_a = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_ImpactToggle_C2FA' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_ImpactToggle_C2 = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_VehImpactDetected_C2' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactDete_f = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_ImpactToggle_C2' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_ImpactToggle__c = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_VehImpactHardwireV' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHardwi = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_VehImpactHardwire' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHard_d = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_VehImpactHardwireV_FA' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHard_e = false;

    /* SignalConversion generated from: '<S82>/VeIMPI_b_VehImpactHardwire_FA' */
    IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHar_dt = false;

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S83>/VeIMPR_b_HighVoltageRapidShtdwnCmnd_Out_Init' */
    IMPR_ac_B.OutportBufferForVeIMPR_b_HighVoltageRapi = false;

    /* SignalConversion generated from: '<S83>/VeIMPR_b_LossCommORC_Out_Init' */
    IMPR_ac_B.OutportBufferForVeIMPR_b_LossCommORC_Out = false;

    /* SignalConversion generated from: '<S83>/VeIMPR_e_FaultSts_CntrlSysShtDwn' incorporates:
     *  Constant: '<S84>/Constant'
     */
    IMPR_ac_B.OutportBufferForVeIMPR_e_FaultSts_CntrlS = IMPR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S83>/VeIMPR_b_ImpactDetectedCAN_Out_Init' */
    IMPR_ac_B.OutportBufferForVeIMPR_b_ImpactDetectedC = false;

    /* SignalConversion generated from: '<S83>/VeIMPR_b_ImpactToggleCAN_Out_Init' */
    IMPR_ac_B.OutportBufferForVeIMPR_b_ImpactToggleCAN = false;

    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */

    /* Outport: '<Root>/VeIMPR_e_FaultSts_CntrlSysShtDwn' incorporates:
     *  SignalConversion generated from: '<S10>/R_VeIMPR_e_FaultSts_CntrlSysShtDwn'
     *  SignalConversion generated from: '<S83>/VeIMPR_e_FaultSts_CntrlSysShtDwn'
     */
    (void)Rte_Write_VeIMPR_e_FaultSts_CntrlSysShtDwn_Value
        (IMPR_ac_B.OutportBufferForVeIMPR_e_FaultSts_CntrlS);

    /* Outport: '<Root>/VeIMPR_b_HighVoltageRapidShtdwnCmnd' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPR_b_HighVoltageRapidShtdwnCmnd_Out_Init'
     */
    (void)Rte_Write_VeIMPR_b_HighVoltageRapidShtdwnCmnd_Value
        (IMPR_ac_B.OutportBufferForVeIMPR_b_HighVoltageRapi);

    /* Outport: '<Root>/VeIMPR_b_ImpactDetectedCAN' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPR_b_ImpactDetectedCAN_Out_Init'
     */
    (void)Rte_Write_VeIMPR_b_ImpactDetectedCAN_Value
        (IMPR_ac_B.OutportBufferForVeIMPR_b_ImpactDetectedC);

    /* Outport: '<Root>/VeIMPR_b_ImpactToggleCAN' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPR_b_ImpactToggleCAN_Out_Init'
     */
    (void)Rte_Write_VeIMPR_b_ImpactToggleCAN_Value
        (IMPR_ac_B.OutportBufferForVeIMPR_b_ImpactToggleCAN);

    /* Outport: '<Root>/VeIMPR_b_LossCommORC' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPR_b_LossCommORC_Out_Init'
     */
    (void)Rte_Write_VeIMPR_b_LossCommORC_Value
        (IMPR_ac_B.OutportBufferForVeIMPR_b_LossCommORC_Out);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_ImpactToggle'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPI_b_ImpactToggle_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_ImpactToggle);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_ImpactToggle_C2FA'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPR_b_ImpactToggle_C2FA_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_ImpactToggle_C2);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_ImpactToggle_C2'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPI_b_ImpactToggle_C2_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_ImpactToggle__c);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_VehImpactDetected'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPI_b_VehImpactDetected_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactDetect);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_VehImpactDetected_C2FA'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPR_b_VehImpactDetected_C2FA_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactDete_a);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_VehImpactDetected_C2'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPI_b_VehImpactDetected_C2_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactDete_f);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_VehImpactHardwire'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPI_b_VehImpactHardwire_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHard_d);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_VehImpactHardwireV'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPI_b_VehImpactHardwireV_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHardwi);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_VehImpactHardwireV_FA'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPR_b_ImpactHardwireV_FA_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHard_e);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPI_b_VehImpactHardwire_FA'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPR_b_ImpactHardwire_FA_IRV
        (IMPR_ac_B.OutportBufferForVeIMPI_b_VehImpactHar_dt);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPR_b_ImpactToogleFA'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPR_b_ImpactToggleFA_IRV
        (IMPR_ac_B.OutportBufferForVeIMPR_b_ImpactToogleFA);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMPR_b_VehImpactDetectedFA'
     * */
    Rte_IrvWrite_IMPR_PwrOn_VeIMPR_b_VehImpactDetectedFA_IRV
        (IMPR_ac_B.OutportBufferForVeIMPR_b_VehImpactDetect);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, IMPR_CODE) IMPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/IMPR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S83>/VeIMPR_e_FaultSts_CntrlSysShtDwn' incorporates:
     *  Constant: '<S84>/Constant'
     */
    IMPR_ac_B.OutportBufferForVeIMPR_e_FaultSts_CntrlS = IMPR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeIMPR_e_FaultSts_CntrlSysShtDwn' incorporates:
     *  Merge: '<Root>/M_VeIMPR_e_FaultSts_CntrlSysShtDwn'
     */
    (void)Rte_Write_VeIMPR_e_FaultSts_CntrlSysShtDwn_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
