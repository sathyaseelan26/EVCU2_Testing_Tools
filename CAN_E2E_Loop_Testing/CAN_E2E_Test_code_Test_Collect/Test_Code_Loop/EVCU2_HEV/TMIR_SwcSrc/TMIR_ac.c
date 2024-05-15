/*
 * File: TMIR_ac.c
 *
 * Code generated for Simulink model 'TMIR_ac'.
 *
 * Model version                  : 9.78
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:46:35 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TMIR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TMIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_BSG_ECM_RadFanRq_D =
    0.0F;                              /* Referenced by: '<S97>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_BSG_ECM_RadFanRq_INIT =
    0.0F;                              /* Referenced by: '<S185>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_BSG_LTR_PmpSpdAct_D =
    0.0F;                              /* Referenced by: '<S99>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_BSG_LTR_PmpSpdAct_INIT =
    0.0F;                              /* Referenced by: '<S186>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_BSG_PPU_AirFlwRq_D =
    0.0F;                              /* Referenced by: '<S101>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_BSG_PPU_AirFlwRq_INIT =
    0.0F;                              /* Referenced by: '<S187>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_TCU_LdIndx_Init = 0.0F;/* Referenced by: '<S215>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT)
    KeTMIR_Pct_TCU_LdIndx_Invalid_Default = 50.0F;
                    /* Referenced by: '<S19>/PokeTMIR_Pct_TCU_Load_IndexChrt' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_Pct_TCU_Load_Index_D = 0.0F;/* Referenced by: '<S171>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_CntrlBrdTmp_Snrs1_D =
    0.0F;                              /* Referenced by: '<S133>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_CntrlBrdTmp_Snrs2_D =
    0.0F;                              /* Referenced by: '<S137>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_CntrlBrdTmp_Snsr1_INIT =
    25.0F;                             /* Referenced by: '<S211>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_CntrlBrdTmp_Snsr2_INIT =
    25.0F;                             /* Referenced by: '<S213>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_ElecClntHtr_TmpIn_D =
    50.0F;                             /* Referenced by: '<S115>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_HV_BatHghTmp_Thrsh_D =
    25.0F;                             /* Referenced by: '<S81>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_HV_BatHghTmp_Thrsh_INIT =
    55.0F;                             /* Referenced by: '<S193>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_HV_BatLowTmp_Thrsh_D =
    25.0F;                             /* Referenced by: '<S83>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_HV_BatLowTmp_Thrsh_INIT =
    -30.0F;                            /* Referenced by: '<S194>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_LTR_ClntTmpOut_D = 25.0F;/* Referenced by: '<S141>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_LTR_ClntTmpOut_INIT =
    25.0F;                             /* Referenced by: '<S195>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp1_D = 25.0F;/* Referenced by: '<S148>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp1_INIT = 25.0F;/* Referenced by: '<S196>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp2_D = 25.0F;/* Referenced by: '<S156>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp2_INIT = 25.0F;/* Referenced by: '<S197>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp3_D = 35.0F;/* Referenced by: '<S160>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp3_INIT = 25.0F;/* Referenced by: '<S198>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp4_D = 35.0F;/* Referenced by: '<S161>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OBCMTemp4_INIT = 25.0F;/* Referenced by: '<S199>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_OnBrdChrg_ClntTmpIn_D =
    25.0F;                             /* Referenced by: '<S168>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_PsvPmpClnt_TmpIn_D =
    25.0F;                             /* Referenced by: '<S87>/Calib' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_TransOilTempDflt = 80.0F;
                        /* Referenced by: '<S29>/PokeTMIR_T_TransOilTempChrt' */
static volatile CONST(float32, TMIR_VAR_INIT) KeTMIR_T_TransOilTempInit = 80.0F;/* Referenced by: '<S180>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_BSG_ECM_RadFanRq_SD = 0;/* Referenced by: '<S98>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_BSG_LTR_PmpSpdAct_SD = 0;/* Referenced by: '<S100>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_BSG_PPU_AirFlwRq_SD = 0;/* Referenced by: '<S102>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snrs1_FA_D =
    0;                                 /* Referenced by: '<S134>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snrs1_FA_SD =
    0;                                 /* Referenced by: '<S135>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snrs1_SD = 0;/* Referenced by: '<S136>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snrs2_FA_D =
    0;                                 /* Referenced by: '<S138>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snrs2_FA_SD =
    0;                                 /* Referenced by: '<S139>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snrs2_SD = 0;/* Referenced by: '<S140>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snsr1_FA_INIT
    = 0;                               /* Referenced by: '<S212>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_CntrlBrdTmp_Snsr2_FA_INIT
    = 0;                               /* Referenced by: '<S214>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_ECMDrvDrAjar_SD = 0;/* Referenced by: '<S111>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_ECM_LTP_FanAftRunRq_SD =
    0;                                 /* Referenced by: '<S105>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_ElecClntHtr_TmpIn_FA_D =
    0;                                 /* Referenced by: '<S116>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_ElecClntHtr_TmpIn_FA_SD =
    0;                                 /* Referenced by: '<S117>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_ElecClntHtr_TmpIn_SD = 0;/* Referenced by: '<S118>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_HV_BatHghTmp_Thrsh_SD = 0;/* Referenced by: '<S82>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_HV_BatLowTmp_Thrsh_SD = 0;/* Referenced by: '<S84>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_LTR_ClntTmpOut_FAINIT = 0;/* Referenced by: '<S200>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_LTR_ClntTmpOut_SD = 0;/* Referenced by: '<S142>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_MainRly_CmdReq_D = 0;/* Referenced by: '<S108>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_MainRly_CmdReq_Init = 1;/* Referenced by: '<S181>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_MainRly_CmdReq_SD = 0;/* Referenced by: '<S109>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_Dbg_SD = 0;/* Referenced by: '<S144>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_FA_D = 0;/* Referenced by: '<S146>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_FA_INIT = 0;/* Referenced by: '<S201>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_FA_SD = 0;/* Referenced by: '<S147>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_SD = 0;/* Referenced by: '<S149>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_Sig_Rcvd_D = 0;/* Referenced by: '<S150>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_Sig_Rcvd_INIT =
    0;                                 /* Referenced by: '<S202>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp1_Sig_Rcvd_SD = 0;/* Referenced by: '<S151>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_Dbg_SD = 0;/* Referenced by: '<S152>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_FA_D = 0;/* Referenced by: '<S154>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_FA_INIT = 0;/* Referenced by: '<S203>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_FA_SD = 0;/* Referenced by: '<S155>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_SD = 0;/* Referenced by: '<S157>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_Sig_Rcvd_D = 0;/* Referenced by: '<S158>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_Sig_Rcvd_INIT =
    0;                                 /* Referenced by: '<S204>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp2_Sig_Rcvd_SD = 0;/* Referenced by: '<S159>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp3_FA_D = 0;/* Referenced by: '<S162>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp3_FA_INIT = 0;/* Referenced by: '<S205>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp3_FA_SD = 0;/* Referenced by: '<S163>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp3_SD = 0;/* Referenced by: '<S164>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp4_FA_D = 0;/* Referenced by: '<S165>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp4_FA_INIT = 0;/* Referenced by: '<S206>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp4_FA_SD = 0;/* Referenced by: '<S166>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OBCMTemp4_SD = 0;/* Referenced by: '<S167>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_OnBrdChrg_ClntTmpIn_SD =
    0;                                 /* Referenced by: '<S169>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_PsvPmpClnt_TmpIn_SD = 0;/* Referenced by: '<S88>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_TCU_LdIndx_FA_Init = 0;/* Referenced by: '<S216>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_TCU_Load_Index_FA_D = 0;/* Referenced by: '<S172>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_TCU_Load_Index_FA_SD = 0;/* Referenced by: '<S173>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_TCU_Load_Index_SD = 0;/* Referenced by: '<S174>/Calib' */
static volatile CONST(boolean, TMIR_VAR_INIT) KeTMIR_b_TransOilTempInitFA = 0;/* Referenced by: '<S182>/Calib' */
static volatile CONST(TeTMIR_e_ECMDrvDrAjar, TMIR_VAR_INIT)
    KeTMIR_e_ECMDrvDoorAjar_Init = CeTMIR_e_DrvDoorClosed;/* Referenced by: '<S188>/Calib' */
static volatile CONST(TeTMIR_e_ECMDrvDrAjar, TMIR_VAR_INIT)
    KeTMIR_e_ECMDrvDrAjar_D = CeTMIR_e_DrvDoorClosed;/* Referenced by: '<S112>/Calib' */
static volatile CONST(TeTMIR_e_ECM_LTP_FanAftRunRq, TMIR_VAR_INIT)
    KeTMIR_e_ECM_LTP_FanAftRunRq_D = CeTMIR_e_No_AftRunRequest;/* Referenced by: '<S106>/Calib' */
static volatile CONST(TeTMIR_e_ECM_LTP_FanAftRunRq, TMIR_VAR_INIT)
    KeTMIR_e_ECM_LTP_FanAftRunRq_init = CeTMIR_e_No_AftRunRequest;/* Referenced by: '<S183>/Calib' */
static volatile CONST(uint8, TMIR_VAR_INIT) KeTMIR_y_OBCMTemp1_Dbg_D = 0U;/* Referenced by: '<S145>/Calib' */
static volatile CONST(uint8, TMIR_VAR_INIT) KeTMIR_y_OBCMTemp1_Dbg_INIT = 1U;/* Referenced by: '<S207>/Calib' */
static volatile CONST(uint8, TMIR_VAR_INIT) KeTMIR_y_OBCMTemp2_Dbg_D = 0U;/* Referenced by: '<S153>/Calib' */
static volatile CONST(uint8, TMIR_VAR_INIT) KeTMIR_y_OBCMTemp2_Dbg_INIT = 1U;/* Referenced by: '<S208>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_TMIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TMIR
#include "MemMap.h"

CONST(ConstB_TMIR_ac_T, TMIR_VAR_INIT) TMIR_ac_ConstB =
{
    CeTMIR_e_No_AftRunRequest          /* '<S176>/Const16' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TMIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMIR
#include "MemMap.h"

VAR(B_TMIR_ac_T, TMIR_VAR_INIT) TMIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMIR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, TMIR_CODE) TMIR_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 tmp;
    float32 tmpRead_0;
    boolean tmpRead;

    /* Inport: '<Root>/VeTMIB_T_PsvPmpClnt_TmpIn' */
    (void)Rte_Read_VeTMIB_T_PsvPmpClnt_TmpIn_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTMIB_b_PsvPmpClnt_TmpIn_FA' */
    (void)Rte_Read_VeTMIB_b_PsvPmpClnt_TmpIn_FA_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TMIR_FastTEF'
     */
    /* S-Function (fcgen): '<S35>/FcnCallGen' incorporates:
     *  SubSystem: '<S35>/BatTmp_Thrsh_and_PsvPmpClnt_TmpIn'
     */
    /* Switch: '<S79>/Switch' incorporates:
     *  Constant: '<S81>/Calib'
     *  Constant: '<S82>/Calib'
     *  Merge: '<Root>/Merge_10'
     *  SignalConversion generated from: '<S35>/LeTMIR_T_HV_BatHghTmp_Thrsh_read'
     */
    if (KeTMIR_b_HV_BatHghTmp_Thrsh_SD)
    {
        tmp = KeTMIR_T_HV_BatHghTmp_Thrsh_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_FastTEF_VeTMIR_T_HV_BatHghTmp_Thrsh_write_IRV();
    }

    /* End of Switch: '<S79>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S35>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_HV_BatHghTmp_Thrsh' incorporates:
     *  SignalConversion generated from: '<S35>/HV_BatHghTmp_Thrsh_AftDial'
     */
    (void)Rte_Write_VeTMIR_T_HV_BatHghTmp_Thrsh_Value(tmp);

    /* S-Function (fcgen): '<S35>/FcnCallGen' incorporates:
     *  SubSystem: '<S35>/BatTmp_Thrsh_and_PsvPmpClnt_TmpIn'
     */
    /* Switch: '<S80>/Switch' incorporates:
     *  Constant: '<S83>/Calib'
     *  Constant: '<S84>/Calib'
     *  Merge: '<Root>/Merge_11'
     *  SignalConversion generated from: '<S35>/LeTMIR_T_HV_BatLowTmp_Thrsh_read'
     */
    if (KeTMIR_b_HV_BatLowTmp_Thrsh_SD)
    {
        tmp = KeTMIR_T_HV_BatLowTmp_Thrsh_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_FastTEF_VeTMIR_T_HV_BatLowTmp_Thrsh_write_IRV();
    }

    /* End of Switch: '<S80>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S35>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_HV_BatLowTmp_Thrsh' incorporates:
     *  SignalConversion generated from: '<S35>/HV_BatLowTmp_Thrsh_AftDial'
     */
    (void)Rte_Write_VeTMIR_T_HV_BatLowTmp_Thrsh_Value(tmp);

    /* S-Function (fcgen): '<S35>/FcnCallGen' incorporates:
     *  SubSystem: '<S35>/BatTmp_Thrsh_and_PsvPmpClnt_TmpIn'
     */
    /* Switch: '<S78>/Switch' incorporates:
     *  Constant: '<S88>/Calib'
     */
    if (KeTMIR_b_PsvPmpClnt_TmpIn_SD)
    {
        /* Outport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' incorporates:
         *  Constant: '<S87>/Calib'
         *  SignalConversion generated from: '<S35>/PsvPmpClnt_TmpIn_AftDial'
         */
        (void)Rte_Write_VeTMIR_T_PsvPmpClnt_TmpIn_Value
            (KeTMIR_T_PsvPmpClnt_TmpIn_D);
    }
    else
    {
        /* Outport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' incorporates:
         *  SignalConversion generated from: '<S35>/PsvPmpClnt_TmpIn_AftDial'
         */
        (void)Rte_Write_VeTMIR_T_PsvPmpClnt_TmpIn_Value(tmpRead_0);
    }

    /* End of Switch: '<S78>/Switch' */

    /* Outport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  Gain: '<S89>/Gain'
     *  SignalConversion generated from: '<S35>/PsvPmpClnt_TmpIn_FA'
     */
    (void)Rte_Write_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value(tmpRead);

    /* End of Outputs for S-Function (fcgen): '<S35>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, TMIR_CODE) TMIR_MedTEH(void) /* Explicit Task: MedTEH */
{
    float32 tmp;
    float32 tmpRead;
    float32 tmpRead_2;
    TeTMIR_e_ECMDrvDrAjar tmp_0;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmp_1;
    uint8 tmp_2;
    boolean rtb_TmpSignalConversionAtLeTMIR_b_Main_k;
    boolean rtb_VariantMerge_For_Variant_Source_Vari;
    boolean tmpRead_0;
    boolean tmpRead_1;

    /* Inport: '<Root>/VeTMIB_T_OnBrdChrg_ClntTmpIn' */
    (void)Rte_Read_VeTMIB_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FA' */
    (void)Rte_Read_VeTMIB_b_OnBrdChrg_ClntTmpIn_FA_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTMIB_b_ElecClntHtr_TmpIn_FA' */
    (void)Rte_Read_VeTMIB_b_ElecClntHtr_TmpIn_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTMIB_T_ElecClntHtr_TmpIn' */
    (void)Rte_Read_VeTMIB_T_ElecClntHtr_TmpIn_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TMIR_MedTEH'
     */
    /* SignalConversion generated from: '<S36>/LeTMIR_b_MainRly_CmdReq_read' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
        Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_MainRly_CmdReq_write_IRV();

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Status_Sig_Overwrite'
     */
    /* Logic: '<S92>/Logical Operator' incorporates:
     *  SignalConversion generated from: '<S92>/Variant Source'
     */
#if Rte_SysCon_Variant_TMIR_1

    /* VariantMerge generated from: '<S92>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Vari =
        !rtb_TmpSignalConversionAtLeTMIR_b_Main_k;

#else

    /* VariantMerge generated from: '<S92>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S92>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k;

#endif

    /* End of Logic: '<S92>/Logical Operator' */

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S133>/Calib'
     *  Constant: '<S136>/Calib'
     *  Merge: '<Root>/Merge_12'
     *  SignalConversion generated from: '<S36>/LeTMIR_T_PIM_CntrlBoardTmp1_read'
     */
    if (KeTMIR_b_CntrlBrdTmp_Snrs1_SD)
    {
        tmp = KeTMIR_T_CntrlBrdTmp_Snrs1_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_T_PIM_CntrlBoardTmp1_write_IRV();
    }

    /* End of Switch: '<S131>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_CntrlBrdTmp_Snsr1_AD' incorporates:
     *  SignalConversion generated from: '<S36>/CntrlBrdTmp_Snrs1_AD'
     */
    (void)Rte_Write_VeTMIR_T_CntrlBrdTmp_Snsr1_AD_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S132>/Switch1' incorporates:
     *  Constant: '<S138>/Calib'
     *  Constant: '<S139>/Calib'
     *  Merge: '<Root>/Merge_14'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_PIM_CntrlBoardTmp2FA_read'
     */
    if (KeTMIR_b_CntrlBrdTmp_Snrs2_FA_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            KeTMIR_b_CntrlBrdTmp_Snrs2_FA_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_PIM_CntrlBoardTmp2FA_write_IRV();
    }

    /* End of Switch: '<S132>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_CntrlBrdTmp_Snsr2_FA_AD' incorporates:
     *  SignalConversion generated from: '<S36>/CntrlBrdTmp_Snrs2_FA_AD'
     */
    (void)Rte_Write_VeTMIR_b_CntrlBrdTmp_Snsr2_FA_AD_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S134>/Calib'
     *  Constant: '<S135>/Calib'
     *  Merge: '<Root>/Merge_13'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_PIM_CntrlBoardTmp1FA_read'
     */
    if (KeTMIR_b_CntrlBrdTmp_Snrs1_FA_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            KeTMIR_b_CntrlBrdTmp_Snrs1_FA_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_PIM_CntrlBoardTmp1FA_write_IRV();
    }

    /* End of Switch: '<S131>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_CntrlBrdTmp_Snsr1_FA_AD' incorporates:
     *  SignalConversion generated from: '<S36>/CntrlBrdTmp_Snsr1_FA_AD'
     */
    (void)Rte_Write_VeTMIR_b_CntrlBrdTmp_Snsr1_FA_AD_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S132>/Switch' incorporates:
     *  Constant: '<S137>/Calib'
     *  Constant: '<S140>/Calib'
     *  Merge: '<Root>/Merge_15'
     *  SignalConversion generated from: '<S36>/LeTMIR_T_PIM_CntrlBoardTmp2_read'
     */
    if (KeTMIR_b_CntrlBrdTmp_Snrs2_SD)
    {
        tmp = KeTMIR_T_CntrlBrdTmp_Snrs2_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_T_PIM_CntrlBoardTmp2_write_IRV();
    }

    /* End of Switch: '<S132>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_CntrlBrdTmp_Snsr2_AD' incorporates:
     *  SignalConversion generated from: '<S36>/CntrlBrdTmp_Snsr2_AD'
     */
    (void)Rte_Write_VeTMIR_T_CntrlBrdTmp_Snsr2_AD_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Status_Sig_Overwrite'
     */
    /* Switch: '<S107>/Switch' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S112>/Calib'
     *  Merge: '<Root>/Merge_4'
     *  SignalConversion generated from: '<S36>/LeTMIR_e_ECMDrvDoorAjar_read'
     */
    if (KeTMIR_b_ECMDrvDrAjar_SD)
    {
        tmp_0 = KeTMIR_e_ECMDrvDrAjar_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_TMIR_MedTEH_VeTMIR_e_ECMDrvDoorAjar_write_IRV();
    }

    /* End of Switch: '<S107>/Switch' */

    /* Outport: '<Root>/VeTMIR_b_ECMDrvDoorAjar' incorporates:
     *  Constant: '<S110>/Constant'
     *  RelationalOperator: '<S107>/Comparison4'
     *  SignalConversion generated from: '<S36>/ECMDrvDoorAjar_AD'
     */
    (void)Rte_Write_VeTMIR_b_ECMDrvDoorAjar_Value(((uint32)tmp_0) !=
        CeTMIR_e_DrvDoorClosed);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/ECM_LTP_Overwrite'
     */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S105>/Calib'
     *  Constant: '<S106>/Calib'
     *  Merge: '<Root>/Merge_5'
     *  SignalConversion generated from: '<S36>/LeTMIR_e_ECM_LTP_FanAftRun_Rq_read'
     */
    if (KeTMIR_b_ECM_LTP_FanAftRunRq_SD)
    {
        tmp_1 = KeTMIR_e_ECM_LTP_FanAftRunRq_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TMIR_MedTEH_VeTMIR_e_ECM_LTP_FanAftRun_Rq_write_IRV();
    }

    /* Outport: '<Root>/VeTMIR_e_ECM_LTP_FanAftRunRq' incorporates:
     *  SignalConversion generated from: '<S36>/ECM_LTP_FanAftRunRq_AD'
     *  Switch: '<S103>/Switch1'
     */
    (void)Rte_Write_VeTMIR_e_ECM_LTP_FanAftRunRq_Value(tmp_1);

    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_ECM_FanAftRunRq_FA' incorporates:
     *  Merge: '<Root>/Merge_6'
     *  SignalConversion generated from: '<S36>/ECM_LTP_FanAftRunRq_FA_OP'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_ECM_LTP_FanAftRun_RqFA_read'
     */
    (void)Rte_Write_VeTMIR_b_ECM_FanAftRunRq_FA_Value
        (Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_ECM_LTP_FanAftRun_RqFA_write_IRV());

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S117>/Calib'
     */
    if (KeTMIR_b_ElecClntHtr_TmpIn_FA_SD)
    {
        /* Outport: '<Root>/VeTMIR_b_ElecClntHtr_TmpIn_FA' incorporates:
         *  Constant: '<S116>/Calib'
         *  SignalConversion generated from: '<S36>/ElecClntHtr_TmpIn_FA'
         */
        (void)Rte_Write_VeTMIR_b_ElecClntHtr_TmpIn_FA_Value
            (KeTMIR_b_ElecClntHtr_TmpIn_FA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTMIR_b_ElecClntHtr_TmpIn_FA' incorporates:
         *  SignalConversion generated from: '<S36>/ElecClntHtr_TmpIn_FA'
         */
        (void)Rte_Write_VeTMIR_b_ElecClntHtr_TmpIn_FA_Value(tmpRead_0);
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Switch: '<S93>/Switch' incorporates:
     *  Constant: '<S118>/Calib'
     */
    if (KeTMIR_b_ElecClntHtr_TmpIn_SD)
    {
        /* Outport: '<Root>/VeTMIR_T_ElecClntHtr_TmpIn' incorporates:
         *  Constant: '<S115>/Calib'
         *  SignalConversion generated from: '<S36>/ElecClntHtr_Tmp_In'
         */
        (void)Rte_Write_VeTMIR_T_ElecClntHtr_TmpIn_Value
            (KeTMIR_T_ElecClntHtr_TmpIn_D);
    }
    else
    {
        /* Outport: '<Root>/VeTMIR_T_ElecClntHtr_TmpIn' incorporates:
         *  SignalConversion generated from: '<S36>/ElecClntHtr_Tmp_In'
         */
        (void)Rte_Write_VeTMIR_T_ElecClntHtr_TmpIn_Value(tmpRead);
    }

    /* End of Switch: '<S93>/Switch' */

    /* Switch: '<S119>/Switch2' incorporates:
     *  Constant: '<S141>/Calib'
     *  Constant: '<S142>/Calib'
     *  Merge: '<Root>/Merge_16'
     *  SignalConversion generated from: '<S36>/LeTMIR_T_LTR_ClntTmpOut_read'
     */
    if (KeTMIR_b_LTR_ClntTmpOut_SD)
    {
        tmp = KeTMIR_T_LTR_ClntTmpOut_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_T_LTR_ClntTmpOut_write_IRV();
    }

    /* End of Switch: '<S119>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_LTR_ClntTmpOut' incorporates:
     *  SignalConversion generated from: '<S36>/LTR_ClntTmpOut_AD'
     */
    (void)Rte_Write_VeTMIR_T_LTR_ClntTmpOut_Value(tmp);

    /* Outport: '<Root>/VeTMIR_b_LTR_ClntTmpOut_FA' incorporates:
     *  Merge: '<Root>/Merge_19'
     *  SignalConversion generated from: '<S36>/LTR_ClntTmpOut_FA_AD'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_LTR_ClntTmpOutFA_read'
     */
    (void)Rte_Write_VeTMIR_b_LTR_ClntTmpOut_FA_Value
        (Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_LTR_ClntTmpOutFA_write_IRV());

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Status_Sig_Overwrite'
     */
    /* Switch: '<S92>/Switch1' incorporates:
     *  Constant: '<S109>/Calib'
     */
    if (KeTMIR_b_MainRly_CmdReq_SD)
    {
        /* Outport: '<Root>/VeTMIR_b_MainRly_CmdReq' incorporates:
         *  Constant: '<S108>/Calib'
         *  SignalConversion generated from: '<S36>/MainRly_CmdReq_AD'
         */
        (void)Rte_Write_VeTMIR_b_MainRly_CmdReq_Value(KeTMIR_b_MainRly_CmdReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeTMIR_b_MainRly_CmdReq' incorporates:
         *  SignalConversion generated from: '<S36>/MainRly_CmdReq_AD'
         */
        (void)Rte_Write_VeTMIR_b_MainRly_CmdReq_Value
            (rtb_VariantMerge_For_Variant_Source_Vari);
    }

    /* End of Switch: '<S92>/Switch1' */

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S122>/Switch' incorporates:
     *  Constant: '<S148>/Calib'
     *  Constant: '<S149>/Calib'
     *  Merge: '<Root>/Merge_20'
     *  SignalConversion generated from: '<S36>/LeTMIR_T_OBCMTemp1_read'
     */
    if (KeTMIR_b_OBCMTemp1_SD)
    {
        tmp = KeTMIR_T_OBCMTemp1_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_T_OBCMTemp1_write_IRV();
    }

    /* End of Switch: '<S122>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp1' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp1'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp1_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S144>/Calib'
     *  Constant: '<S145>/Calib'
     *  Merge: '<Root>/Merge_27'
     *  SignalConversion generated from: '<S36>/LeTMIR_y_Dbg_OBCMTemp1_read'
     */
    if (KeTMIR_b_OBCMTemp1_Dbg_SD)
    {
        tmp_2 = KeTMIR_y_OBCMTemp1_Dbg_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TMIR_MedTEH_VeTMIR_y_Dbg_OBCMTemp1_write_IRV();
    }

    /* End of Switch: '<S120>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_y_OBCMTemp1_Dbg' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp1_Dbg'
     */
    (void)Rte_Write_VeTMIR_y_OBCMTemp1_Dbg_Value(tmp_2);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S121>/Switch' incorporates:
     *  Constant: '<S146>/Calib'
     *  Constant: '<S147>/Calib'
     *  Merge: '<Root>/Merge_21'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_OBCMTemp1FA_read'
     */
    if (KeTMIR_b_OBCMTemp1_FA_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k = KeTMIR_b_OBCMTemp1_FA_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_OBCMTemp1FA_write_IRV();
    }

    /* End of Switch: '<S121>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp1_FA' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp1_FA'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp1_FA_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S123>/Switch' incorporates:
     *  Constant: '<S150>/Calib'
     *  Constant: '<S151>/Calib'
     *  Merge: '<Root>/Merge_26'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_OBCMTemp1_Sig_Rcvd_read'
     */
    if (KeTMIR_b_OBCMTemp1_Sig_Rcvd_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k = KeTMIR_b_OBCMTemp1_Sig_Rcvd_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_OBCMTemp1_Sig_Rcvd_write_IRV();
    }

    /* End of Switch: '<S123>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp1_Sig_Rcvd' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp1_Sig_Rcvd'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp1_Sig_Rcvd_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S156>/Calib'
     *  Constant: '<S157>/Calib'
     *  Merge: '<Root>/Merge_22'
     *  SignalConversion generated from: '<S36>/LeTMIR_T_OBCMTemp2_read'
     */
    if (KeTMIR_b_OBCMTemp2_SD)
    {
        tmp = KeTMIR_T_OBCMTemp2_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_T_OBCMTemp2_write_IRV();
    }

    /* End of Switch: '<S126>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp2' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp2'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp2_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S152>/Calib'
     *  Constant: '<S153>/Calib'
     *  Merge: '<Root>/Merge_28'
     *  SignalConversion generated from: '<S36>/LeTMIR_y_Dbg_OBCMTemp2_read'
     */
    if (KeTMIR_b_OBCMTemp2_Dbg_SD)
    {
        tmp_2 = KeTMIR_y_OBCMTemp2_Dbg_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TMIR_MedTEH_VeTMIR_y_Dbg_OBCMTemp2_write_IRV();
    }

    /* End of Switch: '<S124>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_y_OBCMTemp2_Dbg' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp2_Dbg'
     */
    (void)Rte_Write_VeTMIR_y_OBCMTemp2_Dbg_Value(tmp_2);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S154>/Calib'
     *  Constant: '<S155>/Calib'
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_OBCMTemp2FA_read'
     */
    if (KeTMIR_b_OBCMTemp2_FA_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k = KeTMIR_b_OBCMTemp2_FA_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_OBCMTemp2FA_write_IRV();
    }

    /* End of Switch: '<S125>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp2_FA' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp2_FA'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp2_FA_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S158>/Calib'
     *  Constant: '<S159>/Calib'
     *  Merge: '<Root>/Merge_25'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_OBCMTemp2_Sig_Rcvd_read'
     */
    if (KeTMIR_b_OBCMTemp2_Sig_Rcvd_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k = KeTMIR_b_OBCMTemp2_Sig_Rcvd_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_OBCMTemp2_Sig_Rcvd_write_IRV();
    }

    /* End of Switch: '<S127>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp2_Sig_Rcvd' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp2_Sig_Rcvd'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp2_Sig_Rcvd_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S128>/Switch2' incorporates:
     *  Constant: '<S160>/Calib'
     *  Constant: '<S164>/Calib'
     *  Merge: '<Root>/Merge_29'
     *  SignalConversion generated from: '<S36>/LeTMIR_T_OBCMTemp3_read'
     */
    if (KeTMIR_b_OBCMTemp3_SD)
    {
        tmp = KeTMIR_T_OBCMTemp3_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_T_OBCMTemp3_write_IRV();
    }

    /* End of Switch: '<S128>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp3_AD' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp3_AD'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp3_AD_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S128>/Switch3' incorporates:
     *  Constant: '<S162>/Calib'
     *  Constant: '<S163>/Calib'
     *  Merge: '<Root>/Merge_30'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_OBCMTemp3FA_read'
     */
    if (KeTMIR_b_OBCMTemp3_FA_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k = KeTMIR_b_OBCMTemp3_FA_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_OBCMTemp3FA_write_IRV();
    }

    /* End of Switch: '<S128>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp3_FA_AD' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp3_FA_AD'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp3_FA_AD_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S128>/Switch4' incorporates:
     *  Constant: '<S161>/Calib'
     *  Constant: '<S167>/Calib'
     *  Merge: '<Root>/Merge_31'
     *  SignalConversion generated from: '<S36>/LeTMIR_T_OBCMTemp4_read'
     */
    if (KeTMIR_b_OBCMTemp4_SD)
    {
        tmp = KeTMIR_T_OBCMTemp4_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_T_OBCMTemp4_write_IRV();
    }

    /* End of Switch: '<S128>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp4_AD' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp4_AD'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp4_AD_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S128>/Switch5' incorporates:
     *  Constant: '<S165>/Calib'
     *  Constant: '<S166>/Calib'
     *  Merge: '<Root>/Merge_18'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_OBCMTemp4FA_read'
     */
    if (KeTMIR_b_OBCMTemp4_FA_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k = KeTMIR_b_OBCMTemp4_FA_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_OBCMTemp4FA_write_IRV();
    }

    /* End of Switch: '<S128>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp4_FA_AD' incorporates:
     *  SignalConversion generated from: '<S36>/OBCMTemp4_FA_AD'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp4_FA_AD_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S129>/Switch' incorporates:
     *  Constant: '<S169>/Calib'
     */
    if (KeTMIR_b_OnBrdChrg_ClntTmpIn_SD)
    {
        /* Outport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' incorporates:
         *  Constant: '<S168>/Calib'
         *  SignalConversion generated from: '<S36>/OnBrdChrg_ClntTmpIn_AftDial'
         */
        (void)Rte_Write_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value
            (KeTMIR_T_OnBrdChrg_ClntTmpIn_D);
    }
    else
    {
        /* Outport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' incorporates:
         *  SignalConversion generated from: '<S36>/OnBrdChrg_ClntTmpIn_AftDial'
         */
        (void)Rte_Write_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(tmpRead_2);
    }

    /* End of Switch: '<S129>/Switch' */

    /* Outport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' incorporates:
     *  Gain: '<S170>/Gain'
     *  SignalConversion generated from: '<S36>/OnBrdChrg_ClntTmpIn_FA_AD'
     */
    (void)Rte_Write_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(tmpRead_1);

    /* Switch: '<S130>/Switch2' incorporates:
     *  Constant: '<S171>/Calib'
     *  Constant: '<S174>/Calib'
     *  Merge: '<Root>/Merge_36'
     *  SignalConversion generated from: '<S36>/LeTMIR_Pct_TCU_Load_Index_read'
     */
    if (KeTMIR_b_TCU_Load_Index_SD)
    {
        tmp = KeTMIR_Pct_TCU_Load_Index_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_Pct_TCU_Load_Index_write_IRV();
    }

    /* End of Switch: '<S130>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_Pct_TCU_Load_Index' incorporates:
     *  SignalConversion generated from: '<S36>/TCU_Load_Index_AD'
     */
    (void)Rte_Write_VeTMIR_Pct_TCU_Load_Index_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/Temp_Sig_and_Transmission_Overwrite'
     */
    /* Switch: '<S130>/Switch3' incorporates:
     *  Constant: '<S172>/Calib'
     *  Constant: '<S173>/Calib'
     *  Merge: '<Root>/Merge_37'
     *  SignalConversion generated from: '<S36>/LeTMIR_b_TCU_Load_IndexFA_read'
     */
    if (KeTMIR_b_TCU_Load_Index_FA_SD)
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k = KeTMIR_b_TCU_Load_Index_FA_D;
    }
    else
    {
        rtb_TmpSignalConversionAtLeTMIR_b_Main_k =
            Rte_IrvRead_TMIR_MedTEH_VeTMIR_b_TCU_Load_IndexFA_write_IRV();
    }

    /* End of Switch: '<S130>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_b_TCU_Load_Index_FA' incorporates:
     *  SignalConversion generated from: '<S36>/TCU_Load_Index_FA_AD'
     */
    (void)Rte_Write_VeTMIR_b_TCU_Load_Index_FA_Value
        (rtb_TmpSignalConversionAtLeTMIR_b_Main_k);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/BSG_Overwrite'
     */
    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  Merge: '<Root>/Merge_1'
     *  SignalConversion generated from: '<S36>/LeTMIR_Pct_BSG_ECM_RadFanRq_read'
     */
    if (KeTMIR_b_BSG_ECM_RadFanRq_SD)
    {
        tmp = KeTMIR_Pct_BSG_ECM_RadFanRq_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_Pct_BSG_ECM_RadFanRq_write_IRV();
    }

    /* End of Switch: '<S94>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_Pct_BSG_ECM_RadFanRq' incorporates:
     *  SignalConversion generated from: '<S36>/TMIR_BSG_ECM_RadFanRq_AD'
     */
    (void)Rte_Write_VeTMIR_Pct_BSG_ECM_RadFanRq_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/BSG_Overwrite'
     */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S99>/Calib'
     *  Merge: '<Root>/Merge_3'
     *  SignalConversion generated from: '<S36>/LeTMIR_Pct_BSG_LTR_PmpSpdAct_read'
     */
    if (KeTMIR_b_BSG_LTR_PmpSpdAct_SD)
    {
        tmp = KeTMIR_Pct_BSG_LTR_PmpSpdAct_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_Pct_BSG_LTR_PmpSpdAct_write_IRV();
    }

    /* End of Switch: '<S95>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_Pct_BSG_LTR_PmpSpdAct' incorporates:
     *  SignalConversion generated from: '<S36>/TMIR_BSG_LTR_PmpSpdAct_AD'
     */
    (void)Rte_Write_VeTMIR_Pct_BSG_LTR_PmpSpdAct_Value(tmp);

    /* S-Function (fcgen): '<S36>/FcnCallGen' incorporates:
     *  SubSystem: '<S36>/BSG_Overwrite'
     */
    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Merge: '<Root>/Merge_2'
     *  SignalConversion generated from: '<S36>/LeTMIR_Pct_BSG_PPU_AirFlwRq_read'
     */
    if (KeTMIR_b_BSG_PPU_AirFlwRq_SD)
    {
        tmp = KeTMIR_Pct_BSG_PPU_AirFlwRq_D;
    }
    else
    {
        tmp = Rte_IrvRead_TMIR_MedTEH_VeTMIR_Pct_BSG_PPU_AirFlwRq_write_IRV();
    }

    /* End of Switch: '<S96>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S36>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_Pct_BSG_PPU_AirFlwRq' incorporates:
     *  SignalConversion generated from: '<S36>/TMIR_BSG_PPU_AirFlwRq_AD'
     */
    (void)Rte_Write_VeTMIR_Pct_BSG_PPU_AirFlwRq_Value(tmp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_Pct_BSG_ECM_RadFanRq(void)
{
    /* Gateway: FsftTMIR_Pct_BSG_ECM_RadFanRq/FsftTMIR_Pct_BSG_ECM_RadFanRqChrt */
    /* During: FsftTMIR_Pct_BSG_ECM_RadFanRq/FsftTMIR_Pct_BSG_ECM_RadFanRqChrt */
    /* Entry Internal: FsftTMIR_Pct_BSG_ECM_RadFanRq/FsftTMIR_Pct_BSG_ECM_RadFanRqChrt */
    /* Transition: '<S41>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_Pct_BSG_LTR_PmpSpdAct(void)
{
    /* Gateway: FsftTMIR_Pct_BSG_LTR_PmpSpdAct/FsftTMIR_Pct_BSG_LTR_PmpSpdActChrt */
    /* During: FsftTMIR_Pct_BSG_LTR_PmpSpdAct/FsftTMIR_Pct_BSG_LTR_PmpSpdActChrt */
    /* Entry Internal: FsftTMIR_Pct_BSG_LTR_PmpSpdAct/FsftTMIR_Pct_BSG_LTR_PmpSpdActChrt */
    /* Transition: '<S42>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_Pct_BSG_PPU_AirFlwRq(void)
{
    /* Gateway: FsftTMIR_Pct_BSG_PPU_AirFlwRq/FsftTMIR_Pct_BSG_PPU_AirFlwRqChrt */
    /* During: FsftTMIR_Pct_BSG_PPU_AirFlwRq/FsftTMIR_Pct_BSG_PPU_AirFlwRqChrt */
    /* Entry Internal: FsftTMIR_Pct_BSG_PPU_AirFlwRq/FsftTMIR_Pct_BSG_PPU_AirFlwRqChrt */
    /* Transition: '<S43>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_Pct_TCU_Load_Index(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTMIR_Pct_TCU_Load_Index' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S4>/FsftTMIR_Pct_TCU_Load_IndexChrt'
     *  SignalConversion generated from: '<S4>/VeTMIR_b_TCU_Load_IndexFA_write'
     */
    /* Gateway: FsftTMIR_Pct_TCU_Load_Index/FsftTMIR_Pct_TCU_Load_IndexChrt */
    /* During: FsftTMIR_Pct_TCU_Load_Index/FsftTMIR_Pct_TCU_Load_IndexChrt */
    /* Entry Internal: FsftTMIR_Pct_TCU_Load_Index/FsftTMIR_Pct_TCU_Load_IndexChrt */
    /* Transition: '<S44>:2' */
    Rte_IrvWrite_FsftTMIR_Pct_TCU_Load_Index_VeTMIR_b_TCU_Load_IndexFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTMIR_Pct_TCU_Load_Index' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_T_HV_BatHghTmp_Thrsh(void)
{
    /* Gateway: FsftTMIR_T_HV_BatHghTmp_Thrsh/FsftTMIR_T_HV_BatHghTmp_ThrshChrt */
    /* During: FsftTMIR_T_HV_BatHghTmp_Thrsh/FsftTMIR_T_HV_BatHghTmp_ThrshChrt */
    /* Entry Internal: FsftTMIR_T_HV_BatHghTmp_Thrsh/FsftTMIR_T_HV_BatHghTmp_ThrshChrt */
    /* Transition: '<S45>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_T_HV_BatLowTmp_Thrsh(void)
{
    /* Gateway: FsftTMIR_T_HV_BatLowTmp_Thrsh/FsftTMIR_T_HV_BatLowTmp_ThrshChrt */
    /* During: FsftTMIR_T_HV_BatLowTmp_Thrsh/FsftTMIR_T_HV_BatLowTmp_ThrshChrt */
    /* Entry Internal: FsftTMIR_T_HV_BatLowTmp_Thrsh/FsftTMIR_T_HV_BatLowTmp_ThrshChrt */
    /* Transition: '<S46>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_T_LTR_ClntTmpOut(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTMIR_T_LTR_ClntTmpOut' */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S7>/FsftTMIR_T_LTR_ClntTmpOutChrt'
     *  SignalConversion generated from: '<S7>/VeTMIR_b_LTR_ClntTmpOutFA_write'
     */
    /* Gateway: FsftTMIR_T_LTR_ClntTmpOut/FsftTMIR_T_LTR_ClntTmpOutChrt */
    /* During: FsftTMIR_T_LTR_ClntTmpOut/FsftTMIR_T_LTR_ClntTmpOutChrt */
    /* Entry Internal: FsftTMIR_T_LTR_ClntTmpOut/FsftTMIR_T_LTR_ClntTmpOutChrt */
    /* Transition: '<S47>:2' */
    Rte_IrvWrite_FsftTMIR_T_LTR_ClntTmpOut_VeTMIR_b_LTR_ClntTmpOutFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTMIR_T_LTR_ClntTmpOut' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_T_OBCMTemp1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTMIR_T_OBCMTemp1' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S8>/FsftTMIR_T_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S8>/VeTMIR_b_OBCMTemp1FA_write'
     */
    /* Gateway: FsftTMIR_T_OBCMTemp1/FsftTMIR_T_OBCMTemp1Chrt */
    /* During: FsftTMIR_T_OBCMTemp1/FsftTMIR_T_OBCMTemp1Chrt */
    /* Entry Internal: FsftTMIR_T_OBCMTemp1/FsftTMIR_T_OBCMTemp1Chrt */
    /* Transition: '<S48>:2' */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp1_VeTMIR_b_OBCMTemp1FA_write_IRV(true);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S8>/FsftTMIR_T_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S8>/VeTMIR_b_OBCMTemp1_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp1_VeTMIR_b_OBCMTemp1_Sig_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S8>/FsftTMIR_T_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S8>/VeTMIR_y_Dbg_OBCMTemp1_write'
     */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp1_VeTMIR_y_Dbg_OBCMTemp1_write_IRV((uint8)3U);

    /* End of Outputs for SubSystem: '<Root>/FsftTMIR_T_OBCMTemp1' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_T_OBCMTemp2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTMIR_T_OBCMTemp2' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S9>/FsftTMIR_T_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S9>/VeTMIR_b_OBCMTemp2FA_write'
     */
    /* Gateway: FsftTMIR_T_OBCMTemp2/FsftTMIR_T_OBCMTemp2Chrt */
    /* During: FsftTMIR_T_OBCMTemp2/FsftTMIR_T_OBCMTemp2Chrt */
    /* Entry Internal: FsftTMIR_T_OBCMTemp2/FsftTMIR_T_OBCMTemp2Chrt */
    /* Transition: '<S49>:2' */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp2_VeTMIR_b_OBCMTemp2FA_write_IRV(true);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S9>/FsftTMIR_T_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S9>/VeTMIR_b_OBCMTemp2_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp2_VeTMIR_b_OBCMTemp2_Sig_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S9>/FsftTMIR_T_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S9>/VeTMIR_y_Dbg_OBCMTemp2_write'
     */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp2_VeTMIR_y_Dbg_OBCMTemp2_write_IRV((uint8)3U);

    /* End of Outputs for SubSystem: '<Root>/FsftTMIR_T_OBCMTemp2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_T_OBCMTemp3(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTMIR_T_OBCMTemp3' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S10>/FsftTMIR_T_OBCMTemp3Chrt'
     *  SignalConversion generated from: '<S10>/VeTMIR_b_OBCMTemp3FA_write'
     */
    /* Gateway: FsftTMIR_T_OBCMTemp3/FsftTMIR_T_OBCMTemp3Chrt */
    /* During: FsftTMIR_T_OBCMTemp3/FsftTMIR_T_OBCMTemp3Chrt */
    /* Entry Internal: FsftTMIR_T_OBCMTemp3/FsftTMIR_T_OBCMTemp3Chrt */
    /* Transition: '<S50>:2' */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp3_VeTMIR_b_OBCMTemp3FA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTMIR_T_OBCMTemp3' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_T_OBCMTemp4(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTMIR_T_OBCMTemp4' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S11>/FsftTMIR_T_OBCMTemp4Chrt'
     *  SignalConversion generated from: '<S11>/VeTMIR_b_OBCMTemp4FA_write'
     */
    /* Gateway: FsftTMIR_T_OBCMTemp4/FsftTMIR_T_OBCMTemp4Chrt */
    /* During: FsftTMIR_T_OBCMTemp4/FsftTMIR_T_OBCMTemp4Chrt */
    /* Entry Internal: FsftTMIR_T_OBCMTemp4/FsftTMIR_T_OBCMTemp4Chrt */
    /* Transition: '<S51>:2' */
    Rte_IrvWrite_FsftTMIR_T_OBCMTemp4_VeTMIR_b_OBCMTemp4FA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTMIR_T_OBCMTemp4' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_V_DISPLACEMENT(void)
{
    /* Gateway: FsftTMIR_V_DISPLACEMENT/FsftTMIR_V_DISPLACEMENTChrt */
    /* During: FsftTMIR_V_DISPLACEMENT/FsftTMIR_V_DISPLACEMENTChrt */
    /* Entry Internal: FsftTMIR_V_DISPLACEMENT/FsftTMIR_V_DISPLACEMENTChrt */
    /* Transition: '<S52>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_b_ECMDrvDoorAjar(void)
{
    /* Gateway: FsftTMIR_b_ECMDrvDoorAjar/FsftTMIR_b_ECMDrvDoorAjarChrt */
    /* During: FsftTMIR_b_ECMDrvDoorAjar/FsftTMIR_b_ECMDrvDoorAjarChrt */
    /* Entry Internal: FsftTMIR_b_ECMDrvDoorAjar/FsftTMIR_b_ECMDrvDoorAjarChrt */
    /* Transition: '<S53>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_e_ECM_LTP_FanAftRun_Rq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTMIR_e_ECM_LTP_FanAftRun_Rq' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S14>/FsftTMIR_e_ECM_LTP_FanAftRun_RqChrt'
     *  SignalConversion generated from: '<S14>/VeTMIR_b_ECM_LTP_FanAftRun_RqFA_write'
     */
    /* Gateway: FsftTMIR_e_ECM_LTP_FanAftRun_Rq/FsftTMIR_e_ECM_LTP_FanAftRun_RqChrt */
    /* During: FsftTMIR_e_ECM_LTP_FanAftRun_Rq/FsftTMIR_e_ECM_LTP_FanAftRun_RqChrt */
    /* Entry Internal: FsftTMIR_e_ECM_LTP_FanAftRun_Rq/FsftTMIR_e_ECM_LTP_FanAftRun_RqChrt */
    /* Transition: '<S54>:2' */
    Rte_IrvWrite_FsftTMIR_e_ECM_LTP_FanAftRun_Rq_VeTMIR_b_ECM_LTP_FanAftRun_RqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTMIR_e_ECM_LTP_FanAftRun_Rq' */
}

/* Output function */
FUNC(void, TMIR_CODE) FsftTMIR_e_VC_VEH_LINE(void)
{
    /* Gateway: FsftTMIR_e_VC_VEH_LINE/FsftTMIR_e_VC_VEH_LINEChrt */
    /* During: FsftTMIR_e_VC_VEH_LINE/FsftTMIR_e_VC_VEH_LINEChrt */
    /* Entry Internal: FsftTMIR_e_VC_VEH_LINE/FsftTMIR_e_VC_VEH_LINEChrt */
    /* Transition: '<S55>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_Pct_BSG_ECM_RadFanRq(VAR(float32, AUTOMATIC)
    LeTMIR_Pct_BSG_ECM_RadFanRq, VAR(boolean, AUTOMATIC)
    LeTMIR_b_BSG_ECM_RadFanRqFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_Pct_BSG_ECM_RadFanRq' */
    /* Chart: '<S16>/PokeTMIR_Pct_BSG_ECM_RadFanRqChrt' incorporates:
     *  SignalConversion generated from: '<S16>/LeTMIR_Pct_BSG_ECM_RadFanRq'
     *  SignalConversion generated from: '<S16>/LeTMIR_b_BSG_ECM_RadFanRqFA'
     */
    /* Gateway: PokeTMIR_Pct_BSG_ECM_RadFanRq/PokeTMIR_Pct_BSG_ECM_RadFanRqChrt */
    /* During: PokeTMIR_Pct_BSG_ECM_RadFanRq/PokeTMIR_Pct_BSG_ECM_RadFanRqChrt */
    /* Entry Internal: PokeTMIR_Pct_BSG_ECM_RadFanRq/PokeTMIR_Pct_BSG_ECM_RadFanRqChrt */
    /* Transition: '<S56>:2' */
    if (!LeTMIR_b_BSG_ECM_RadFanRqFA)
    {
        /* Transition: '<S56>:3' */
        /* Transition: '<S56>:15' */
        TMIR_ac_B.LeTMIR_Pct_BSG_ECM_RadFanRq_out = LeTMIR_Pct_BSG_ECM_RadFanRq;

        /* Transition: '<S56>:18' */
    }
    else
    {
        /* Transition: '<S56>:4' */
    }

    /* End of Chart: '<S16>/PokeTMIR_Pct_BSG_ECM_RadFanRqChrt' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S16>/VeTMIR_Pct_BSG_ECM_RadFanRq_write'
     * */
    Rte_IrvWrite_PokeTMIR_Pct_BSG_ECM_RadFanRq_VeTMIR_Pct_BSG_ECM_RadFanRq_write_IRV
        (TMIR_ac_B.LeTMIR_Pct_BSG_ECM_RadFanRq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_Pct_BSG_ECM_RadFanRq' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_Pct_BSG_LTR_PmpSpdAct(VAR(float32, AUTOMATIC)
    LeTMIR_Pct_BSG_LTR_PmpSpdAct, VAR(boolean, AUTOMATIC)
    LeTMIR_b_BSG_LTR_PmpSpdActFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_Pct_BSG_LTR_PmpSpdAct' */
    /* Chart: '<S17>/PokeTMIR_Pct_BSG_LTR_PmpSpdActChrt' incorporates:
     *  SignalConversion generated from: '<S17>/LeTMIR_Pct_BSG_LTR_PmpSpdAct'
     *  SignalConversion generated from: '<S17>/LeTMIR_b_BSG_LTR_PmpSpdActFA'
     */
    /* Gateway: PokeTMIR_Pct_BSG_LTR_PmpSpdAct/PokeTMIR_Pct_BSG_LTR_PmpSpdActChrt */
    /* During: PokeTMIR_Pct_BSG_LTR_PmpSpdAct/PokeTMIR_Pct_BSG_LTR_PmpSpdActChrt */
    /* Entry Internal: PokeTMIR_Pct_BSG_LTR_PmpSpdAct/PokeTMIR_Pct_BSG_LTR_PmpSpdActChrt */
    /* Transition: '<S57>:2' */
    if (!LeTMIR_b_BSG_LTR_PmpSpdActFA)
    {
        /* Transition: '<S57>:3' */
        /* Transition: '<S57>:15' */
        TMIR_ac_B.LeTMIR_Pct_BSG_LTR_PmpSpdAct_out =
            LeTMIR_Pct_BSG_LTR_PmpSpdAct;

        /* Transition: '<S57>:18' */
    }
    else
    {
        /* Transition: '<S57>:4' */
    }

    /* End of Chart: '<S17>/PokeTMIR_Pct_BSG_LTR_PmpSpdActChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S17>/VeTMIR_Pct_BSG_LTR_PmpSpdAct_write'
     * */
    Rte_IrvWrite_PokeTMIR_Pct_BSG_LTR_PmpSpdAct_VeTMIR_Pct_BSG_LTR_PmpSpdAct_write_IRV
        (TMIR_ac_B.LeTMIR_Pct_BSG_LTR_PmpSpdAct_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_Pct_BSG_LTR_PmpSpdAct' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_Pct_BSG_PPU_AirFlwRq(VAR(float32, AUTOMATIC)
    LeTMIR_Pct_BSG_PPU_AirFlwRq, VAR(boolean, AUTOMATIC)
    LeTMIR_b_BSG_PPU_AirFlwRqFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_Pct_BSG_PPU_AirFlwRq' */
    /* Chart: '<S18>/PokeTMIR_Pct_BSG_PPU_AirFlwRqChrt' incorporates:
     *  SignalConversion generated from: '<S18>/LeTMIR_Pct_BSG_PPU_AirFlwRq'
     *  SignalConversion generated from: '<S18>/LeTMIR_b_BSG_PPU_AirFlwRqFA'
     */
    /* Gateway: PokeTMIR_Pct_BSG_PPU_AirFlwRq/PokeTMIR_Pct_BSG_PPU_AirFlwRqChrt */
    /* During: PokeTMIR_Pct_BSG_PPU_AirFlwRq/PokeTMIR_Pct_BSG_PPU_AirFlwRqChrt */
    /* Entry Internal: PokeTMIR_Pct_BSG_PPU_AirFlwRq/PokeTMIR_Pct_BSG_PPU_AirFlwRqChrt */
    /* Transition: '<S58>:2' */
    if (!LeTMIR_b_BSG_PPU_AirFlwRqFA)
    {
        /* Transition: '<S58>:3' */
        /* Transition: '<S58>:15' */
        TMIR_ac_B.LeTMIR_Pct_BSG_PPU_AirFlwRq_out = LeTMIR_Pct_BSG_PPU_AirFlwRq;

        /* Transition: '<S58>:18' */
    }
    else
    {
        /* Transition: '<S58>:4' */
    }

    /* End of Chart: '<S18>/PokeTMIR_Pct_BSG_PPU_AirFlwRqChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S18>/VeTMIR_Pct_BSG_PPU_AirFlwRq_write'
     * */
    Rte_IrvWrite_PokeTMIR_Pct_BSG_PPU_AirFlwRq_VeTMIR_Pct_BSG_PPU_AirFlwRq_write_IRV
        (TMIR_ac_B.LeTMIR_Pct_BSG_PPU_AirFlwRq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_Pct_BSG_PPU_AirFlwRq' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_Pct_TCU_Load_Index(VAR(float32, AUTOMATIC)
    LeTMIR_Pct_TCU_Load_Index, VAR(boolean, AUTOMATIC) LeTMIR_b_TCU_Load_IndexFA)
{
    boolean rtb_LeTMIR_b_TCU_Load_IndexFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_Pct_TCU_Load_Index' */
    /* Chart: '<S19>/PokeTMIR_Pct_TCU_Load_IndexChrt' incorporates:
     *  SignalConversion generated from: '<S19>/LeTMIR_b_TCU_Load_IndexFA'
     */
    /* Gateway: PokeTMIR_Pct_TCU_Load_Index/PokeTMIR_Pct_TCU_Load_IndexChrt */
    /* During: PokeTMIR_Pct_TCU_Load_Index/PokeTMIR_Pct_TCU_Load_IndexChrt */
    /* Entry Internal: PokeTMIR_Pct_TCU_Load_Index/PokeTMIR_Pct_TCU_Load_IndexChrt */
    /* Transition: '<S59>:2' */
    if (!LeTMIR_b_TCU_Load_IndexFA)
    {
        /* SignalConversion generated from: '<S19>/VeTMIR_Pct_TCU_Load_Index_write' incorporates:
         *  Merge: '<Root>/Merge_36'
         *  SignalConversion generated from: '<S19>/LeTMIR_Pct_TCU_Load_Index'
         */
        /* Transition: '<S59>:3' */
        /* Transition: '<S59>:15' */
        Rte_IrvWrite_PokeTMIR_Pct_TCU_Load_Index_VeTMIR_Pct_TCU_Load_Index_write_IRV
            (LeTMIR_Pct_TCU_Load_Index);
        rtb_LeTMIR_b_TCU_Load_IndexFA_out = false;

        /* Transition: '<S59>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S19>/VeTMIR_Pct_TCU_Load_Index_write' incorporates:
         *  Merge: '<Root>/Merge_36'
         */
        /* Transition: '<S59>:4' */
        Rte_IrvWrite_PokeTMIR_Pct_TCU_Load_Index_VeTMIR_Pct_TCU_Load_Index_write_IRV
            (KeTMIR_Pct_TCU_LdIndx_Invalid_Default);
        rtb_LeTMIR_b_TCU_Load_IndexFA_out = true;
    }

    /* End of Chart: '<S19>/PokeTMIR_Pct_TCU_Load_IndexChrt' */

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S19>/VeTMIR_b_TCU_Load_IndexFA_write'
     * */
    Rte_IrvWrite_PokeTMIR_Pct_TCU_Load_Index_VeTMIR_b_TCU_Load_IndexFA_write_IRV
        (rtb_LeTMIR_b_TCU_Load_IndexFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_Pct_TCU_Load_Index' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_HV_BatHghTmp_Thrsh(VAR(float32, AUTOMATIC)
    LeTMIR_T_HV_BatHghTmp_Thrsh, VAR(boolean, AUTOMATIC)
    LeTMIR_b_HV_BatHghTmp_ThrshFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_HV_BatHghTmp_Thrsh' */
    /* Chart: '<S20>/PokeTMIR_T_HV_BatHghTmp_ThrshChrt' incorporates:
     *  SignalConversion generated from: '<S20>/LeTMIR_T_HV_BatHghTmp_Thrsh'
     *  SignalConversion generated from: '<S20>/LeTMIR_b_HV_BatHghTmp_ThrshFA'
     */
    /* Gateway: PokeTMIR_T_HV_BatHghTmp_Thrsh/PokeTMIR_T_HV_BatHghTmp_ThrshChrt */
    /* During: PokeTMIR_T_HV_BatHghTmp_Thrsh/PokeTMIR_T_HV_BatHghTmp_ThrshChrt */
    /* Entry Internal: PokeTMIR_T_HV_BatHghTmp_Thrsh/PokeTMIR_T_HV_BatHghTmp_ThrshChrt */
    /* Transition: '<S60>:2' */
    if (!LeTMIR_b_HV_BatHghTmp_ThrshFA)
    {
        /* Transition: '<S60>:3' */
        /* Transition: '<S60>:15' */
        TMIR_ac_B.LeTMIR_T_HV_BatHghTmp_Thrsh_out = LeTMIR_T_HV_BatHghTmp_Thrsh;

        /* Transition: '<S60>:18' */
    }
    else
    {
        /* Transition: '<S60>:4' */
    }

    /* End of Chart: '<S20>/PokeTMIR_T_HV_BatHghTmp_ThrshChrt' */

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S20>/VeTMIR_T_HV_BatHghTmp_Thrsh_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_HV_BatHghTmp_Thrsh_VeTMIR_T_HV_BatHghTmp_Thrsh_write_IRV
        (TMIR_ac_B.LeTMIR_T_HV_BatHghTmp_Thrsh_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_HV_BatHghTmp_Thrsh' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_HV_BatLowTmp_Thrsh(VAR(float32, AUTOMATIC)
    LeTMIR_T_HV_BatLowTmp_Thrsh, VAR(boolean, AUTOMATIC)
    LeTMIR_b_HV_BatLowTmp_ThrshFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_HV_BatLowTmp_Thrsh' */
    /* Chart: '<S21>/PokeTMIR_T_HV_BatLowTmp_ThrshChrt' incorporates:
     *  SignalConversion generated from: '<S21>/LeTMIR_T_HV_BatLowTmp_Thrsh'
     *  SignalConversion generated from: '<S21>/LeTMIR_b_HV_BatLowTmp_ThrshFA'
     */
    /* Gateway: PokeTMIR_T_HV_BatLowTmp_Thrsh/PokeTMIR_T_HV_BatLowTmp_ThrshChrt */
    /* During: PokeTMIR_T_HV_BatLowTmp_Thrsh/PokeTMIR_T_HV_BatLowTmp_ThrshChrt */
    /* Entry Internal: PokeTMIR_T_HV_BatLowTmp_Thrsh/PokeTMIR_T_HV_BatLowTmp_ThrshChrt */
    /* Transition: '<S61>:2' */
    if (!LeTMIR_b_HV_BatLowTmp_ThrshFA)
    {
        /* Transition: '<S61>:3' */
        /* Transition: '<S61>:15' */
        TMIR_ac_B.LeTMIR_T_HV_BatLowTmp_Thrsh_out = LeTMIR_T_HV_BatLowTmp_Thrsh;

        /* Transition: '<S61>:18' */
    }
    else
    {
        /* Transition: '<S61>:4' */
    }

    /* End of Chart: '<S21>/PokeTMIR_T_HV_BatLowTmp_ThrshChrt' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S21>/VeTMIR_T_HV_BatLowTmp_Thrsh_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_HV_BatLowTmp_Thrsh_VeTMIR_T_HV_BatLowTmp_Thrsh_write_IRV
        (TMIR_ac_B.LeTMIR_T_HV_BatLowTmp_Thrsh_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_HV_BatLowTmp_Thrsh' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_LTR_ClntTmpOut(VAR(float32, AUTOMATIC)
    LeTMIR_T_LTR_ClntTmpOut, VAR(boolean, AUTOMATIC) LeTMIR_b_LTR_ClntTmpOutFA)
{
    boolean rtb_LeTMIR_b_LTR_ClntTmpOutFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_LTR_ClntTmpOut' */
    /* Chart: '<S22>/PokeTMIR_T_LTR_ClntTmpOutChrt' incorporates:
     *  SignalConversion generated from: '<S22>/LeTMIR_T_LTR_ClntTmpOut'
     *  SignalConversion generated from: '<S22>/LeTMIR_b_LTR_ClntTmpOutFA'
     */
    /* Gateway: PokeTMIR_T_LTR_ClntTmpOut/PokeTMIR_T_LTR_ClntTmpOutChrt */
    /* During: PokeTMIR_T_LTR_ClntTmpOut/PokeTMIR_T_LTR_ClntTmpOutChrt */
    /* Entry Internal: PokeTMIR_T_LTR_ClntTmpOut/PokeTMIR_T_LTR_ClntTmpOutChrt */
    /* Transition: '<S62>:2' */
    if (!LeTMIR_b_LTR_ClntTmpOutFA)
    {
        /* Transition: '<S62>:3' */
        /* Transition: '<S62>:15' */
        TMIR_ac_B.LeTMIR_T_LTR_ClntTmpOut_out = LeTMIR_T_LTR_ClntTmpOut;
        rtb_LeTMIR_b_LTR_ClntTmpOutFA_out = false;

        /* Transition: '<S62>:18' */
    }
    else
    {
        /* Transition: '<S62>:4' */
        rtb_LeTMIR_b_LTR_ClntTmpOutFA_out = true;
    }

    /* End of Chart: '<S22>/PokeTMIR_T_LTR_ClntTmpOutChrt' */

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S22>/VeTMIR_T_LTR_ClntTmpOut_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_LTR_ClntTmpOut_VeTMIR_T_LTR_ClntTmpOut_write_IRV
        (TMIR_ac_B.LeTMIR_T_LTR_ClntTmpOut_out);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S22>/VeTMIR_b_LTR_ClntTmpOutFA_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_LTR_ClntTmpOut_VeTMIR_b_LTR_ClntTmpOutFA_write_IRV
        (rtb_LeTMIR_b_LTR_ClntTmpOutFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_LTR_ClntTmpOut' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_OBCMTemp1(VAR(float32, AUTOMATIC)
    LeTMIR_T_OBCMTemp1, VAR(boolean, AUTOMATIC) LeTMIR_b_OBCMTemp1FA)
{
    boolean rtb_LeTMIR_b_OBCMTemp1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_OBCMTemp1' */
    /* Chart: '<S23>/PokeTMIR_T_OBCMTemp1Chrt' incorporates:
     *  SignalConversion generated from: '<S23>/LeTMIR_T_OBCMTemp1'
     *  SignalConversion generated from: '<S23>/LeTMIR_b_OBCMTemp1FA'
     */
    /* Gateway: PokeTMIR_T_OBCMTemp1/PokeTMIR_T_OBCMTemp1Chrt */
    /* During: PokeTMIR_T_OBCMTemp1/PokeTMIR_T_OBCMTemp1Chrt */
    /* Entry Internal: PokeTMIR_T_OBCMTemp1/PokeTMIR_T_OBCMTemp1Chrt */
    /* Transition: '<S63>:2' */
    if (!LeTMIR_b_OBCMTemp1FA)
    {
        /* Transition: '<S63>:3' */
        /* Transition: '<S63>:15' */
        TMIR_ac_B.LeTMIR_T_OBCMTemp1_out = LeTMIR_T_OBCMTemp1;
        rtb_LeTMIR_b_OBCMTemp1FA_out = false;

        /* Transition: '<S63>:18' */
    }
    else
    {
        /* Transition: '<S63>:4' */
        rtb_LeTMIR_b_OBCMTemp1FA_out = true;
    }

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S23>/VeTMIR_T_OBCMTemp1_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp1_VeTMIR_T_OBCMTemp1_write_IRV
        (TMIR_ac_B.LeTMIR_T_OBCMTemp1_out);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S23>/VeTMIR_b_OBCMTemp1FA_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp1_VeTMIR_b_OBCMTemp1FA_write_IRV
        (rtb_LeTMIR_b_OBCMTemp1FA_out);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S23>/PokeTMIR_T_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S23>/VeTMIR_b_OBCMTemp1_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp1_VeTMIR_b_OBCMTemp1_Sig_Rcvd_write_IRV(true);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S23>/PokeTMIR_T_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S23>/VeTMIR_y_Dbg_OBCMTemp1_write'
     */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp1_VeTMIR_y_Dbg_OBCMTemp1_write_IRV((uint8)2U);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_OBCMTemp1' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_OBCMTemp2(VAR(float32, AUTOMATIC)
    LeTMIR_T_OBCMTemp2, VAR(boolean, AUTOMATIC) LeTMIR_b_OBCMTemp2FA)
{
    boolean rtb_LeTMIR_b_OBCMTemp2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_OBCMTemp2' */
    /* Chart: '<S24>/PokeTMIR_T_OBCMTemp2Chrt' incorporates:
     *  SignalConversion generated from: '<S24>/LeTMIR_T_OBCMTemp2'
     *  SignalConversion generated from: '<S24>/LeTMIR_b_OBCMTemp2FA'
     */
    /* Gateway: PokeTMIR_T_OBCMTemp2/PokeTMIR_T_OBCMTemp2Chrt */
    /* During: PokeTMIR_T_OBCMTemp2/PokeTMIR_T_OBCMTemp2Chrt */
    /* Entry Internal: PokeTMIR_T_OBCMTemp2/PokeTMIR_T_OBCMTemp2Chrt */
    /* Transition: '<S64>:2' */
    if (!LeTMIR_b_OBCMTemp2FA)
    {
        /* Transition: '<S64>:3' */
        /* Transition: '<S64>:15' */
        TMIR_ac_B.LeTMIR_T_OBCMTemp2_out = LeTMIR_T_OBCMTemp2;
        rtb_LeTMIR_b_OBCMTemp2FA_out = false;

        /* Transition: '<S64>:18' */
    }
    else
    {
        /* Transition: '<S64>:4' */
        rtb_LeTMIR_b_OBCMTemp2FA_out = true;
    }

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S24>/VeTMIR_T_OBCMTemp2_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp2_VeTMIR_T_OBCMTemp2_write_IRV
        (TMIR_ac_B.LeTMIR_T_OBCMTemp2_out);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S24>/VeTMIR_b_OBCMTemp2FA_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp2_VeTMIR_b_OBCMTemp2FA_write_IRV
        (rtb_LeTMIR_b_OBCMTemp2FA_out);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S24>/PokeTMIR_T_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S24>/VeTMIR_b_OBCMTemp2_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp2_VeTMIR_b_OBCMTemp2_Sig_Rcvd_write_IRV(true);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S24>/PokeTMIR_T_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S24>/VeTMIR_y_Dbg_OBCMTemp2_write'
     */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp2_VeTMIR_y_Dbg_OBCMTemp2_write_IRV((uint8)2U);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_OBCMTemp2' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_OBCMTemp3(VAR(float32, AUTOMATIC)
    LeTMIR_T_OBCMTemp3, VAR(boolean, AUTOMATIC) LeTMIR_b_OBCMTemp3FA)
{
    boolean rtb_LeTMIR_b_OBCMTemp3FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_OBCMTemp3' */
    /* Chart: '<S25>/PokeTMIR_T_OBCMTemp3Chrt' incorporates:
     *  SignalConversion generated from: '<S25>/LeTMIR_T_OBCMTemp3'
     *  SignalConversion generated from: '<S25>/LeTMIR_b_OBCMTemp3FA'
     */
    /* Gateway: PokeTMIR_T_OBCMTemp3/PokeTMIR_T_OBCMTemp3Chrt */
    /* During: PokeTMIR_T_OBCMTemp3/PokeTMIR_T_OBCMTemp3Chrt */
    /* Entry Internal: PokeTMIR_T_OBCMTemp3/PokeTMIR_T_OBCMTemp3Chrt */
    /* Transition: '<S65>:2' */
    if (!LeTMIR_b_OBCMTemp3FA)
    {
        /* Transition: '<S65>:3' */
        /* Transition: '<S65>:15' */
        TMIR_ac_B.LeTMIR_T_OBCMTemp3_out = LeTMIR_T_OBCMTemp3;
        rtb_LeTMIR_b_OBCMTemp3FA_out = false;

        /* Transition: '<S65>:18' */
    }
    else
    {
        /* Transition: '<S65>:4' */
        rtb_LeTMIR_b_OBCMTemp3FA_out = true;
    }

    /* End of Chart: '<S25>/PokeTMIR_T_OBCMTemp3Chrt' */

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S25>/VeTMIR_T_OBCMTemp3_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp3_VeTMIR_T_OBCMTemp3_write_IRV
        (TMIR_ac_B.LeTMIR_T_OBCMTemp3_out);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S25>/VeTMIR_b_OBCMTemp3FA_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp3_VeTMIR_b_OBCMTemp3FA_write_IRV
        (rtb_LeTMIR_b_OBCMTemp3FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_OBCMTemp3' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_OBCMTemp4(VAR(float32, AUTOMATIC)
    LeTMIR_T_OBCMTemp4, VAR(boolean, AUTOMATIC) LeTMIR_b_OBCMTemp4FA)
{
    boolean rtb_LeTMIR_b_OBCMTemp4FA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_OBCMTemp4' */
    /* Chart: '<S26>/PokeTMIR_T_OBCMTemp4Chrt' incorporates:
     *  SignalConversion generated from: '<S26>/LeTMIR_T_OBCMTemp4'
     *  SignalConversion generated from: '<S26>/LeTMIR_b_OBCMTemp4FA'
     */
    /* Gateway: PokeTMIR_T_OBCMTemp4/PokeTMIR_T_OBCMTemp4Chrt */
    /* During: PokeTMIR_T_OBCMTemp4/PokeTMIR_T_OBCMTemp4Chrt */
    /* Entry Internal: PokeTMIR_T_OBCMTemp4/PokeTMIR_T_OBCMTemp4Chrt */
    /* Transition: '<S66>:2' */
    if (!LeTMIR_b_OBCMTemp4FA)
    {
        /* Transition: '<S66>:3' */
        /* Transition: '<S66>:15' */
        TMIR_ac_B.LeTMIR_T_OBCMTemp4_out = LeTMIR_T_OBCMTemp4;
        rtb_LeTMIR_b_OBCMTemp4FA_out_a = false;

        /* Transition: '<S66>:18' */
    }
    else
    {
        /* Transition: '<S66>:4' */
        rtb_LeTMIR_b_OBCMTemp4FA_out_a = true;
    }

    /* End of Chart: '<S26>/PokeTMIR_T_OBCMTemp4Chrt' */

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S26>/VeTMIR_T_OBCMTemp4_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp4_VeTMIR_T_OBCMTemp4_write_IRV
        (TMIR_ac_B.LeTMIR_T_OBCMTemp4_out);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S26>/VeTMIR_b_OBCMTemp4FA_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_OBCMTemp4_VeTMIR_b_OBCMTemp4FA_write_IRV
        (rtb_LeTMIR_b_OBCMTemp4FA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_OBCMTemp4' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_PIM_CntrlBoardTmp1(VAR(float32, AUTOMATIC)
    LeTMIR_T_PIM_CntrlBoardTmp1, VAR(boolean, AUTOMATIC)
    LeTMIR_b_PIM_CntrlBoardTmp1FA)
{
    boolean rtb_LeTMIR_b_PIM_CntrlBoardTmp1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_PIM_CntrlBoardTmp1' */
    /* Chart: '<S27>/PokeTMIR_T_PIM_CntrlBoardTmp1Chrt' incorporates:
     *  SignalConversion generated from: '<S27>/LeTMIR_T_PIM_CntrlBoardTmp1'
     *  SignalConversion generated from: '<S27>/LeTMIR_b_PIM_CntrlBoardTmp1FA'
     */
    /* Gateway: PokeTMIR_T_PIM_CntrlBoardTmp1/PokeTMIR_T_PIM_CntrlBoardTmp1Chrt */
    /* During: PokeTMIR_T_PIM_CntrlBoardTmp1/PokeTMIR_T_PIM_CntrlBoardTmp1Chrt */
    /* Entry Internal: PokeTMIR_T_PIM_CntrlBoardTmp1/PokeTMIR_T_PIM_CntrlBoardTmp1Chrt */
    /* Transition: '<S67>:2' */
    if (!LeTMIR_b_PIM_CntrlBoardTmp1FA)
    {
        /* Transition: '<S67>:3' */
        /* Transition: '<S67>:15' */
        TMIR_ac_B.LeTMIR_T_PIM_CntrlBoardTmp1_out = LeTMIR_T_PIM_CntrlBoardTmp1;
        rtb_LeTMIR_b_PIM_CntrlBoardTmp1FA_out = false;

        /* Transition: '<S67>:18' */
    }
    else
    {
        /* Transition: '<S67>:4' */
        rtb_LeTMIR_b_PIM_CntrlBoardTmp1FA_out = true;
    }

    /* End of Chart: '<S27>/PokeTMIR_T_PIM_CntrlBoardTmp1Chrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S27>/VeTMIR_T_PIM_CntrlBoardTmp1_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_PIM_CntrlBoardTmp1_VeTMIR_T_PIM_CntrlBoardTmp1_write_IRV
        (TMIR_ac_B.LeTMIR_T_PIM_CntrlBoardTmp1_out);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S27>/VeTMIR_b_PIM_CntrlBoardTmp1FA_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_PIM_CntrlBoardTmp1_VeTMIR_b_PIM_CntrlBoardTmp1FA_write_IRV
        (rtb_LeTMIR_b_PIM_CntrlBoardTmp1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_PIM_CntrlBoardTmp1' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_PIM_CntrlBoardTmp2(VAR(float32, AUTOMATIC)
    LeTMIR_T_PIM_CntrlBoardTmp2, VAR(boolean, AUTOMATIC)
    LeTMIR_b_PIM_CntrlBoardTmp2FA)
{
    boolean rtb_LeTMIR_b_PIM_CntrlBoardTmp2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_PIM_CntrlBoardTmp2' */
    /* Chart: '<S28>/PokeTMIR_T_PIM_CntrlBoardTmp2Chrt' incorporates:
     *  SignalConversion generated from: '<S28>/LeTMIR_T_PIM_CntrlBoardTmp2'
     *  SignalConversion generated from: '<S28>/LeTMIR_b_PIM_CntrlBoardTmp2FA'
     */
    /* Gateway: PokeTMIR_T_PIM_CntrlBoardTmp2/PokeTMIR_T_PIM_CntrlBoardTmp2Chrt */
    /* During: PokeTMIR_T_PIM_CntrlBoardTmp2/PokeTMIR_T_PIM_CntrlBoardTmp2Chrt */
    /* Entry Internal: PokeTMIR_T_PIM_CntrlBoardTmp2/PokeTMIR_T_PIM_CntrlBoardTmp2Chrt */
    /* Transition: '<S68>:2' */
    if (!LeTMIR_b_PIM_CntrlBoardTmp2FA)
    {
        /* Transition: '<S68>:3' */
        /* Transition: '<S68>:15' */
        TMIR_ac_B.LeTMIR_T_PIM_CntrlBoardTmp2_out = LeTMIR_T_PIM_CntrlBoardTmp2;
        rtb_LeTMIR_b_PIM_CntrlBoardTmp2FA_out = false;

        /* Transition: '<S68>:18' */
    }
    else
    {
        /* Transition: '<S68>:4' */
        rtb_LeTMIR_b_PIM_CntrlBoardTmp2FA_out = true;
    }

    /* End of Chart: '<S28>/PokeTMIR_T_PIM_CntrlBoardTmp2Chrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S28>/VeTMIR_T_PIM_CntrlBoardTmp2_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_PIM_CntrlBoardTmp2_VeTMIR_T_PIM_CntrlBoardTmp2_write_IRV
        (TMIR_ac_B.LeTMIR_T_PIM_CntrlBoardTmp2_out);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S28>/VeTMIR_b_PIM_CntrlBoardTmp2FA_write'
     * */
    Rte_IrvWrite_PokeTMIR_T_PIM_CntrlBoardTmp2_VeTMIR_b_PIM_CntrlBoardTmp2FA_write_IRV
        (rtb_LeTMIR_b_PIM_CntrlBoardTmp2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_PIM_CntrlBoardTmp2' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_T_TransOilTemp(VAR(float32, AUTOMATIC)
    LeTMIR_T_TransOilTemp, VAR(boolean, AUTOMATIC) LeTMIR_b_TransOilTempFA)
{
    boolean rtb_LeTMIR_b_TransOilTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_T_TransOilTemp' */
    /* Chart: '<S29>/PokeTMIR_T_TransOilTempChrt' incorporates:
     *  SignalConversion generated from: '<S29>/LeTMIR_b_TransOilTempFA'
     */
    /* Gateway: PokeTMIR_T_TransOilTemp/PokeTMIR_T_TransOilTempChrt */
    /* During: PokeTMIR_T_TransOilTemp/PokeTMIR_T_TransOilTempChrt */
    /* Entry Internal: PokeTMIR_T_TransOilTemp/PokeTMIR_T_TransOilTempChrt */
    /* Transition: '<S69>:2' */
    if (!LeTMIR_b_TransOilTempFA)
    {
        /* SignalConversion generated from: '<S29>/VeTMIR_T_TransOilTemp' incorporates:
         *  Outport: '<Root>/VeTMIR_T_TransOilTemp'
         *  SignalConversion generated from: '<S29>/LeTMIR_T_TransOilTemp'
         */
        /* Transition: '<S69>:3' */
        /* Transition: '<S69>:15' */
        (void)Rte_Write_VeTMIR_T_TransOilTemp_Value(LeTMIR_T_TransOilTemp);
        rtb_LeTMIR_b_TransOilTempFA_out = false;

        /* Transition: '<S69>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S29>/VeTMIR_T_TransOilTemp' incorporates:
         *  Outport: '<Root>/VeTMIR_T_TransOilTemp'
         */
        /* Transition: '<S69>:4' */
        (void)Rte_Write_VeTMIR_T_TransOilTemp_Value(KeTMIR_T_TransOilTempDflt);
        rtb_LeTMIR_b_TransOilTempFA_out = true;
    }

    /* End of Chart: '<S29>/PokeTMIR_T_TransOilTempChrt' */

    /* Outport: '<Root>/VeTMIR_b_TransOilTempFA' incorporates:
     *  SignalConversion generated from: '<S29>/VeTMIR_b_TransOilTempFA'
     */
    (void)Rte_Write_VeTMIR_b_TransOilTempFA_Value
        (rtb_LeTMIR_b_TransOilTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_T_TransOilTemp' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_V_DISPLACEMENT(VAR(sint16, AUTOMATIC)
    LeTMIR_V_DISPLACEMENT, VAR(boolean, AUTOMATIC) LeTMIR_b_DISPLACEMENTFA)
{
    UNUSED_PARAMETER(LeTMIR_V_DISPLACEMENT);
    UNUSED_PARAMETER(LeTMIR_b_DISPLACEMENTFA);

    /* Gateway: PokeTMIR_V_DISPLACEMENT/PokeTMIR_V_DISPLACEMENTChrt */
    /* During: PokeTMIR_V_DISPLACEMENT/PokeTMIR_V_DISPLACEMENTChrt */
    /* Entry Internal: PokeTMIR_V_DISPLACEMENT/PokeTMIR_V_DISPLACEMENTChrt */
    /* Transition: '<S70>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_b_MainRly_CmdReq(VAR(boolean, AUTOMATIC)
    LeTMIR_b_MainRly_CmdReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_b_MainRly_CmdReq' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S31>/LeTMIR_b_MainRly_CmdReq'
     *  SignalConversion generated from: '<S31>/VeTMIR_b_MainRly_CmdReq_write'
     */
    /* Gateway: PokeTMIR_b_MainRly_CmdReq/PokeTMIR_b_MainRly_CmdReqChrt */
    /* During: PokeTMIR_b_MainRly_CmdReq/PokeTMIR_b_MainRly_CmdReqChrt */
    /* Entry Internal: PokeTMIR_b_MainRly_CmdReq/PokeTMIR_b_MainRly_CmdReqChrt */
    /* Transition: '<S71>:2' */
    Rte_IrvWrite_PokeTMIR_b_MainRly_CmdReq_VeTMIR_b_MainRly_CmdReq_write_IRV
        (LeTMIR_b_MainRly_CmdReq);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_b_MainRly_CmdReq' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_e_ECMDrvDoorAjar(VAR(TeTMIR_e_ECMDrvDrAjar,
    AUTOMATIC) LeTMIR_e_ECMDrvDoorAjar, VAR(boolean, AUTOMATIC)
    LeTMIR_b_ECMDrvDoorAjarFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_e_ECMDrvDoorAjar' */
    /* Chart: '<S32>/PokeTMIR_e_ECMDrvDoorAjarChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeTMIR_b_ECMDrvDoorAjarFA'
     *  SignalConversion generated from: '<S32>/LeTMIR_e_ECMDrvDoorAjar'
     */
    /* Gateway: PokeTMIR_e_ECMDrvDoorAjar/PokeTMIR_e_ECMDrvDoorAjarChrt */
    /* During: PokeTMIR_e_ECMDrvDoorAjar/PokeTMIR_e_ECMDrvDoorAjarChrt */
    /* Entry Internal: PokeTMIR_e_ECMDrvDoorAjar/PokeTMIR_e_ECMDrvDoorAjarChrt */
    /* Transition: '<S72>:2' */
    /* Transition: '<S72>:24' */
    if (!LeTMIR_b_ECMDrvDoorAjarFA)
    {
        /* Transition: '<S72>:3' */
        /* Transition: '<S72>:15' */
        TMIR_ac_B.LeTMIR_e_ECMDrvDoorAjar_out = LeTMIR_e_ECMDrvDoorAjar;

        /* Transition: '<S72>:18' */
    }
    else
    {
        /* Transition: '<S72>:4' */
    }

    /* End of Chart: '<S32>/PokeTMIR_e_ECMDrvDoorAjarChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S32>/VeTMIR_e_ECMDrvDoorAjar_write'
     * */
    Rte_IrvWrite_PokeTMIR_e_ECMDrvDoorAjar_VeTMIR_e_ECMDrvDoorAjar_write_IRV
        (TMIR_ac_B.LeTMIR_e_ECMDrvDoorAjar_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_e_ECMDrvDoorAjar' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_e_ECM_LTP_FanAftRun_Rq(VAR
    (TeTMIR_e_ECM_LTP_FanAftRunRq, AUTOMATIC) LeTMIR_e_ECM_LTP_FanAftRun_Rq, VAR
    (boolean, AUTOMATIC) LeTMIR_b_ECM_LTP_FanAftRun_RqFA)
{
    boolean rtb_LeTMIR_b_ECM_LTP_FanAftRun_RqFA_ou_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTMIR_e_ECM_LTP_FanAftRun_Rq' */
    /* Chart: '<S33>/PokeTMIR_e_ECM_LTP_FanAftRun_RqChrt' incorporates:
     *  SignalConversion generated from: '<S33>/LeTMIR_b_ECM_LTP_FanAftRun_RqFA'
     *  SignalConversion generated from: '<S33>/LeTMIR_e_ECM_LTP_FanAftRun_Rq'
     */
    /* Gateway: PokeTMIR_e_ECM_LTP_FanAftRun_Rq/PokeTMIR_e_ECM_LTP_FanAftRun_RqChrt */
    /* During: PokeTMIR_e_ECM_LTP_FanAftRun_Rq/PokeTMIR_e_ECM_LTP_FanAftRun_RqChrt */
    /* Entry Internal: PokeTMIR_e_ECM_LTP_FanAftRun_Rq/PokeTMIR_e_ECM_LTP_FanAftRun_RqChrt */
    /* Transition: '<S73>:2' */
    if (!LeTMIR_b_ECM_LTP_FanAftRun_RqFA)
    {
        /* Transition: '<S73>:3' */
        /* Transition: '<S73>:15' */
        TMIR_ac_B.LeTMIR_e_ECM_LTP_FanAftRun_Rq_out =
            LeTMIR_e_ECM_LTP_FanAftRun_Rq;
        rtb_LeTMIR_b_ECM_LTP_FanAftRun_RqFA_ou_m = false;

        /* Transition: '<S73>:18' */
    }
    else
    {
        /* Transition: '<S73>:4' */
        rtb_LeTMIR_b_ECM_LTP_FanAftRun_RqFA_ou_m = true;
    }

    /* End of Chart: '<S33>/PokeTMIR_e_ECM_LTP_FanAftRun_RqChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S33>/VeTMIR_b_ECM_LTP_FanAftRun_RqFA_write'
     * */
    Rte_IrvWrite_PokeTMIR_e_ECM_LTP_FanAftRun_Rq_VeTMIR_b_ECM_LTP_FanAftRun_RqFA_write_IRV
        (rtb_LeTMIR_b_ECM_LTP_FanAftRun_RqFA_ou_m);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S33>/VeTMIR_e_ECM_LTP_FanAftRun_Rq_write'
     * */
    Rte_IrvWrite_PokeTMIR_e_ECM_LTP_FanAftRun_Rq_VeTMIR_e_ECM_LTP_FanAftRun_Rq_write_IRV
        (TMIR_ac_B.LeTMIR_e_ECM_LTP_FanAftRun_Rq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTMIR_e_ECM_LTP_FanAftRun_Rq' */
}

/* Output function */
FUNC(void, TMIR_CODE) PokeTMIR_e_VC_VEH_LINE(VAR(uint8, AUTOMATIC)
    LeTMIR_e_VC_VEH_LINE, VAR(boolean, AUTOMATIC) LeTMIR_b_VC_VEH_LINEFA)
{
    UNUSED_PARAMETER(LeTMIR_e_VC_VEH_LINE);
    UNUSED_PARAMETER(LeTMIR_b_VC_VEH_LINEFA);

    /* Gateway: PokeTMIR_e_VC_VEH_LINE/PokeTMIR_e_VC_VEH_LINEChrt */
    /* During: PokeTMIR_e_VC_VEH_LINE/PokeTMIR_e_VC_VEH_LINEChrt */
    /* Entry Internal: PokeTMIR_e_VC_VEH_LINE/PokeTMIR_e_VC_VEH_LINEChrt */
    /* Transition: '<S74>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) TMIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TMIR_PwrOn'
     */
    /* S-Function (fcgen): '<S37>/FcnCallGen' incorporates:
     *  SubSystem: '<S37>/Initialize_inputs'
     */
    /* SignalConversion generated from: '<S175>/CntrlBrdTmp_Snrs1_FA_INIT' incorporates:
     *  Constant: '<S212>/Calib'
     */
    TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snrs1_FA_INI =
        KeTMIR_b_CntrlBrdTmp_Snsr1_FA_INIT;

    /* SignalConversion generated from: '<S175>/CntrlBrdTmp_Snsr1_INIT' incorporates:
     *  Constant: '<S211>/Calib'
     */
    TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snsr1_INIT =
        KeTMIR_T_CntrlBrdTmp_Snsr1_INIT;

    /* SignalConversion generated from: '<S175>/CntrlBrdTmp_Snsr2_INIT' incorporates:
     *  Constant: '<S213>/Calib'
     */
    TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snsr2_INIT =
        KeTMIR_T_CntrlBrdTmp_Snsr2_INIT;

    /* SignalConversion generated from: '<S175>/CtnrlBrdTmp_Snsr2_FA_INIT' incorporates:
     *  Constant: '<S214>/Calib'
     */
    TMIR_ac_B.OutportBufferForCtnrlBrdTmp_Snsr2_FA_INI =
        KeTMIR_b_CntrlBrdTmp_Snsr2_FA_INIT;

    /* SignalConversion generated from: '<S175>/HV_BatHghTmp_Thrsh_INIT' incorporates:
     *  Constant: '<S193>/Calib'
     */
    TMIR_ac_B.OutportBufferForHV_BatHghTmp_Thrsh_INIT =
        KeTMIR_T_HV_BatHghTmp_Thrsh_INIT;

    /* SignalConversion generated from: '<S175>/HV_BatLowTmp_Thrsh_INIT' incorporates:
     *  Constant: '<S194>/Calib'
     */
    TMIR_ac_B.OutportBufferForHV_BatLowTmp_Thrsh_INIT =
        KeTMIR_T_HV_BatLowTmp_Thrsh_INIT;

    /* SignalConversion generated from: '<S175>/LTR_ClntTmpOut_FAINIT' incorporates:
     *  Constant: '<S200>/Calib'
     */
    TMIR_ac_B.OutportBufferForLTR_ClntTmpOut_FAINIT =
        KeTMIR_b_LTR_ClntTmpOut_FAINIT;

    /* SignalConversion generated from: '<S175>/LTR_ClntTmpOut_INIT' incorporates:
     *  Constant: '<S195>/Calib'
     */
    TMIR_ac_B.OutportBufferForLTR_ClntTmpOut_INIT = KeTMIR_T_LTR_ClntTmpOut_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp1_Dbg_INIT' incorporates:
     *  Constant: '<S207>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_Dbg_INIT = KeTMIR_y_OBCMTemp1_Dbg_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp1_FA_INIT' incorporates:
     *  Constant: '<S201>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_FA_INIT = KeTMIR_b_OBCMTemp1_FA_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp1_INIT' incorporates:
     *  Constant: '<S196>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_INIT = KeTMIR_T_OBCMTemp1_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp1_Sig_Rcvd_INIT' incorporates:
     *  Constant: '<S202>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_Sig_Rcvd_INIT =
        KeTMIR_b_OBCMTemp1_Sig_Rcvd_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp2_Dbg_INIT' incorporates:
     *  Constant: '<S208>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_Dbg_INIT = KeTMIR_y_OBCMTemp2_Dbg_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp2_FA_INIT' incorporates:
     *  Constant: '<S203>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_FA_INIT = KeTMIR_b_OBCMTemp2_FA_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp2_INIT' incorporates:
     *  Constant: '<S197>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_INIT = KeTMIR_T_OBCMTemp2_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp2_Sig_Rcvd_INIT' incorporates:
     *  Constant: '<S204>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_Sig_Rcvd_INIT =
        KeTMIR_b_OBCMTemp2_Sig_Rcvd_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp3_FA_INIT' incorporates:
     *  Constant: '<S205>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp3_FA_INIT = KeTMIR_b_OBCMTemp3_FA_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp3_INIT' incorporates:
     *  Constant: '<S198>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp3_INIT = KeTMIR_T_OBCMTemp3_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp4_FA_INIT' incorporates:
     *  Constant: '<S206>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp4_FA_INIT = KeTMIR_b_OBCMTemp4_FA_INIT;

    /* SignalConversion generated from: '<S175>/OBCMTemp4_INIT' incorporates:
     *  Constant: '<S199>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp4_INIT = KeTMIR_T_OBCMTemp4_INIT;

    /* SignalConversion generated from: '<S175>/TCU_Load_Index_FA_INIT' incorporates:
     *  Constant: '<S216>/Calib'
     */
    TMIR_ac_B.OutportBufferForTCU_Load_Index_FA_INIT =
        KeTMIR_b_TCU_LdIndx_FA_Init;

    /* SignalConversion generated from: '<S175>/TCU_Load_Index_INIT' incorporates:
     *  Constant: '<S215>/Calib'
     */
    TMIR_ac_B.OutportBufferForTCU_Load_Index_INIT = KeTMIR_Pct_TCU_LdIndx_Init;

    /* SignalConversion generated from: '<S175>/BSG_ECM_RadFanRq_INIT' incorporates:
     *  Constant: '<S185>/Calib'
     */
    TMIR_ac_B.OutportBufferForBSG_ECM_RadFanRq_INIT =
        KeTMIR_Pct_BSG_ECM_RadFanRq_INIT;

    /* SignalConversion generated from: '<S175>/BSG_LTR_PmpSpdAct_INIT' incorporates:
     *  Constant: '<S186>/Calib'
     */
    TMIR_ac_B.OutportBufferForBSG_LTR_PmpSpdAct_INIT =
        KeTMIR_Pct_BSG_LTR_PmpSpdAct_INIT;

    /* SignalConversion generated from: '<S175>/BSG_PPU_AirFlwRq_INIT' incorporates:
     *  Constant: '<S187>/Calib'
     */
    TMIR_ac_B.OutportBufferForBSG_PPU_AirFlwRq_INIT =
        KeTMIR_Pct_BSG_PPU_AirFlwRq_INIT;

    /* SignalConversion generated from: '<S175>/ECM_LTP_FanAftRunRq_init' incorporates:
     *  Constant: '<S183>/Calib'
     */
    TMIR_ac_B.OutportBufferForECM_LTP_FanAftRunRq_init =
        KeTMIR_e_ECM_LTP_FanAftRunRq_init;

    /* SignalConversion generated from: '<S175>/ECMDrvDoorAjar_Init' incorporates:
     *  Constant: '<S188>/Calib'
     */
    TMIR_ac_B.OutportBufferForECMDrvDoorAjar_Init = KeTMIR_e_ECMDrvDoorAjar_Init;

    /* SignalConversion generated from: '<S175>/LeTMIR_T_TransOilTemp' incorporates:
     *  Constant: '<S180>/Calib'
     */
    TMIR_ac_B.OutportBufferForLeTMIR_T_TransOilTemp = KeTMIR_T_TransOilTempInit;

    /* SignalConversion generated from: '<S175>/LeTMIR_b_TransOilTempFA' incorporates:
     *  Constant: '<S182>/Calib'
     */
    TMIR_ac_B.OutportBufferForLeTMIR_b_TransOilTempFA =
        KeTMIR_b_TransOilTempInitFA;

    /* SignalConversion generated from: '<S175>/MainRly_CmdReq_Init' incorporates:
     *  Constant: '<S181>/Calib'
     */
    TMIR_ac_B.OutportBufferForMainRly_CmdReq_Init = KeTMIR_b_MainRly_CmdReq_Init;

    /* S-Function (fcgen): '<S37>/FcnCallGen' incorporates:
     *  SubSystem: '<S37>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S176>/VeTMIR_T_HV_BatHghTmp_Thrsh_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_HV_BatHghTmp_Th = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_HV_BatLowTmp_Thrsh_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_HV_BatLowTmp_Th = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_OnBrdChrg_ClntTmpIn_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_OnBrdChrg_ClntT = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_OnBrdChrg_ClntT = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_OBCMTemp1_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp1_Out_I = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_OBCMTemp1_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp1_FA_Ou = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_OBCMTemp2_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp2_Out_I = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_OBCMTemp2_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp2_FA_Ou = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_PsvPmpClnt_TmpIn_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_PsvPmpClnt_TmpI = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_PsvPmpClnt_TmpIn_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_PsvPmpClnt_TmpI = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_ElecClntHtr_TmpIn_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_ElecClntHtr_Tmp = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_ElecClntHtr_TmpIn_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_ElecClntHtr_Tmp = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_Pct_BSG_ECM_RadFanRq_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_Pct_BSG_ECM_RadFa = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_Pct_BSG_PPU_AirFlwRq_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_Pct_BSG_PPU_AirFl = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_Pct_BSG_LTR_PmpSpdAct_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_Pct_BSG_LTR_PmpSp = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_e_ECM_LTP_FanAftRunRq_Out_Init' incorporates:
     *  Constant: '<S176>/Const16'
     */
    TMIR_ac_B.OutportBufferForVeTMIR_e_ECM_LTP_FanAftR = TMIR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_ECM_FanAftRunRq_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_ECM_FanAftRunRq = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_CntrlBrdTmp_Snsr1_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_CntrlBrdTmp_Sns = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_CntrlBrdTmp_Snsr1_FA_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_CntrlBrdTmp_Sns = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_CntrlBrdTmp_Snsr2_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_CntrlBrdTmp_S_e = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_CntrlBrdTmp_Snsr2_FA_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_CntrlBrdTmp_S_e = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_ECMDrvDoorAjar_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_ECMDrvDoorAjar_ = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_OBCMTemp1_Sig_Rcvd_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp1_Sig_R = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_y_OBCMTemp1_Dbg_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_y_OBCMTemp1_Dbg_O = 0U;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_OBCMTemp2_Sig_Rcvd_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp2_Sig_R = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_y_OBCMTemp2_Dbg_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_y_OBCMTemp2_Dbg_O = 0U;

    /* SignalConversion generated from: '<S176>/VeTMIR_Pct_TCU_Load_Index_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_Pct_TCU_Load_Inde = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_TCU_Load_Index_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_TCU_Load_Index_ = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_OBCMTemp3_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp3_AD_Ou = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_OBCMTemp3_FA_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp3_FA_AD = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_OBCMTemp4_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp4_AD_Ou = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_OBCMTemp4_FA_AD_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp4_FA_AD = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_T_LTR_ClntTmpOut_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_T_LTR_ClntTmpOut_ = 0.0F;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_LTR_ClntTmpOut_FA_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_LTR_ClntTmpOut_ = false;

    /* SignalConversion generated from: '<S176>/VeTMIR_b_MainRly_CmdReq_Out_Init' */
    TMIR_ac_B.OutportBufferForVeTMIR_b_MainRly_CmdReq_ = false;

    /* End of Outputs for S-Function (fcgen): '<S37>/FcnCallGen' */

    /* Outport: '<Root>/VeTMIR_T_TransOilTemp' incorporates:
     *  SignalConversion generated from: '<S37>/LeTMIR_T_TransOilTemp'
     */
    (void)Rte_Write_VeTMIR_T_TransOilTemp_Value
        (TMIR_ac_B.OutportBufferForLeTMIR_T_TransOilTemp);

    /* Outport: '<Root>/VeTMIR_b_TransOilTempFA' incorporates:
     *  SignalConversion generated from: '<S37>/LeTMIR_b_TransOilTempFA'
     */
    (void)Rte_Write_VeTMIR_b_TransOilTempFA_Value
        (TMIR_ac_B.OutportBufferForLeTMIR_b_TransOilTempFA);

    /* Outport: '<Root>/VeTMIR_Pct_BSG_ECM_RadFanRq' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_BSG_ECM_RadFanRq_Out_Init'
     */
    (void)Rte_Write_VeTMIR_Pct_BSG_ECM_RadFanRq_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_Pct_BSG_ECM_RadFa);

    /* Outport: '<Root>/VeTMIR_Pct_BSG_LTR_PmpSpdAct' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_BSG_LTR_PmpSpdAct_Out_Init'
     */
    (void)Rte_Write_VeTMIR_Pct_BSG_LTR_PmpSpdAct_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_Pct_BSG_LTR_PmpSp);

    /* Outport: '<Root>/VeTMIR_Pct_BSG_PPU_AirFlwRq' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_BSG_PPU_AirFlwRq_Out_Init'
     */
    (void)Rte_Write_VeTMIR_Pct_BSG_PPU_AirFlwRq_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_Pct_BSG_PPU_AirFl);

    /* Outport: '<Root>/VeTMIR_Pct_TCU_Load_Index' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_TCU_Load_Index_Out_Init'
     */
    (void)Rte_Write_VeTMIR_Pct_TCU_Load_Index_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_Pct_TCU_Load_Inde);

    /* Outport: '<Root>/VeTMIR_T_CntrlBrdTmp_Snsr1_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_CntrlBrdTmp_Snsr1_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_CntrlBrdTmp_Snsr1_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_CntrlBrdTmp_Sns);

    /* Outport: '<Root>/VeTMIR_T_CntrlBrdTmp_Snsr2_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_CntrlBrdTmp_Snsr2_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_CntrlBrdTmp_Snsr2_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_CntrlBrdTmp_S_e);

    /* Outport: '<Root>/VeTMIR_T_ElecClntHtr_TmpIn' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_ElecClntHtr_TmpIn_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_ElecClntHtr_TmpIn_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_ElecClntHtr_Tmp);

    /* Outport: '<Root>/VeTMIR_T_HV_BatHghTmp_Thrsh' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_HV_BatHghTmp_Thrsh_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_HV_BatHghTmp_Thrsh_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_HV_BatHghTmp_Th);

    /* Outport: '<Root>/VeTMIR_T_HV_BatLowTmp_Thrsh' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_HV_BatLowTmp_Thrsh_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_HV_BatLowTmp_Thrsh_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_HV_BatLowTmp_Th);

    /* Outport: '<Root>/VeTMIR_T_LTR_ClntTmpOut' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_LTR_ClntTmpOut_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_LTR_ClntTmpOut_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_LTR_ClntTmpOut_);

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp1' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp1_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp1_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp1_Out_I);

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp2' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp2_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp2_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp2_Out_I);

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp3_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp3_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp3_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp3_AD_Ou);

    /* Outport: '<Root>/VeTMIR_T_OBCMTemp4_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp4_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_OBCMTemp4_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_OBCMTemp4_AD_Ou);

    /* Outport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OnBrdChrg_ClntTmpIn_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_OnBrdChrg_ClntT);

    /* Outport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_PsvPmpClnt_TmpIn_Out_Init'
     */
    (void)Rte_Write_VeTMIR_T_PsvPmpClnt_TmpIn_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_T_PsvPmpClnt_TmpI);

    /* Outport: '<Root>/VeTMIR_b_CntrlBrdTmp_Snsr1_FA_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_CntrlBrdTmp_Snsr1_FA_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_CntrlBrdTmp_Snsr1_FA_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_CntrlBrdTmp_Sns);

    /* Outport: '<Root>/VeTMIR_b_CntrlBrdTmp_Snsr2_FA_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_CntrlBrdTmp_Snsr2_FA_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_CntrlBrdTmp_Snsr2_FA_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_CntrlBrdTmp_S_e);

    /* Outport: '<Root>/VeTMIR_b_ECMDrvDoorAjar' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_ECMDrvDoorAjar_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_ECMDrvDoorAjar_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_ECMDrvDoorAjar_);

    /* Outport: '<Root>/VeTMIR_b_ECM_FanAftRunRq_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_ECM_FanAftRunRq_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_ECM_FanAftRunRq_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_ECM_FanAftRunRq);

    /* Outport: '<Root>/VeTMIR_b_ElecClntHtr_TmpIn_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_ElecClntHtr_TmpIn_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_ElecClntHtr_TmpIn_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_ElecClntHtr_Tmp);

    /* Outport: '<Root>/VeTMIR_b_LTR_ClntTmpOut_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_LTR_ClntTmpOut_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_LTR_ClntTmpOut_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_LTR_ClntTmpOut_);

    /* Outport: '<Root>/VeTMIR_b_MainRly_CmdReq' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_MainRly_CmdReq_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_MainRly_CmdReq_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_MainRly_CmdReq_);

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp1_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp1_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp1_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp1_FA_Ou);

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp1_Sig_Rcvd' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp1_Sig_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp1_Sig_Rcvd_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp1_Sig_R);

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp2_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp2_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp2_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp2_FA_Ou);

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp2_Sig_Rcvd' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp2_Sig_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp2_Sig_Rcvd_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp2_Sig_R);

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp3_FA_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp3_FA_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp3_FA_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp3_FA_AD);

    /* Outport: '<Root>/VeTMIR_b_OBCMTemp4_FA_AD' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp4_FA_AD_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_OBCMTemp4_FA_AD_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_OBCMTemp4_FA_AD);

    /* Outport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_OnBrdChrg_ClntT);

    /* Outport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_PsvPmpClnt_TmpIn_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_PsvPmpClnt_TmpI);

    /* Outport: '<Root>/VeTMIR_b_TCU_Load_Index_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_TCU_Load_Index_FA_Out_Init'
     */
    (void)Rte_Write_VeTMIR_b_TCU_Load_Index_FA_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_b_TCU_Load_Index_);

    /* Outport: '<Root>/VeTMIR_e_ECM_LTP_FanAftRunRq' incorporates:
     *  SignalConversion generated from: '<S176>/VeTMIR_e_ECM_LTP_FanAftRunRq_Out_Init'
     *  SignalConversion generated from: '<S37>/VeTMIR_e_ECM_LTP_FanAftRunRq_Out_Init'
     */
    (void)Rte_Write_VeTMIR_e_ECM_LTP_FanAftRunRq_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_e_ECM_LTP_FanAftR);

    /* Outport: '<Root>/VeTMIR_y_OBCMTemp1_Dbg' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_y_OBCMTemp1_Dbg_Out_Init'
     */
    (void)Rte_Write_VeTMIR_y_OBCMTemp1_Dbg_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_y_OBCMTemp1_Dbg_O);

    /* Outport: '<Root>/VeTMIR_y_OBCMTemp2_Dbg' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_y_OBCMTemp2_Dbg_Out_Init'
     */
    (void)Rte_Write_VeTMIR_y_OBCMTemp2_Dbg_Value
        (TMIR_ac_B.OutportBufferForVeTMIR_y_OBCMTemp2_Dbg_O);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_BSG_ECM_RadFanRq_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_Pct_BSG_ECM_RadFanRq_write_IRV
        (TMIR_ac_B.OutportBufferForBSG_ECM_RadFanRq_INIT);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_BSG_LTR_PmpSpdAct_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_Pct_BSG_LTR_PmpSpdAct_write_IRV
        (TMIR_ac_B.OutportBufferForBSG_LTR_PmpSpdAct_INIT);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_BSG_PPU_AirFlwRq_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_Pct_BSG_PPU_AirFlwRq_write_IRV
        (TMIR_ac_B.OutportBufferForBSG_PPU_AirFlwRq_INIT);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_Pct_TCU_Load_Index_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_Pct_TCU_Load_Index_write_IRV
        (TMIR_ac_B.OutportBufferForTCU_Load_Index_INIT);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_HV_BatHghTmp_Thrsh_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_HV_BatHghTmp_Thrsh_write_IRV
        (TMIR_ac_B.OutportBufferForHV_BatHghTmp_Thrsh_INIT);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_HV_BatLowTmp_Thrsh_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_HV_BatLowTmp_Thrsh_write_IRV
        (TMIR_ac_B.OutportBufferForHV_BatLowTmp_Thrsh_INIT);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_LTR_ClntTmpOut_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_LTR_ClntTmpOut_write_IRV
        (TMIR_ac_B.OutportBufferForLTR_ClntTmpOut_INIT);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp1_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_OBCMTemp1_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp1_INIT);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp2_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_OBCMTemp2_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp2_INIT);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp3_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_OBCMTemp3_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp3_INIT);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_OBCMTemp4_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_OBCMTemp4_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp4_INIT);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_PIM_CntrlBoardTmp1_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_PIM_CntrlBoardTmp1_write_IRV
        (TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snsr1_INIT);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_T_PIM_CntrlBoardTmp2_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_T_PIM_CntrlBoardTmp2_write_IRV
        (TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snsr2_INIT);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_LTR_ClntTmpOutFA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_LTR_ClntTmpOutFA_write_IRV
        (TMIR_ac_B.OutportBufferForLTR_ClntTmpOut_FAINIT);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_MainRly_CmdReq_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_MainRly_CmdReq_write_IRV
        (TMIR_ac_B.OutportBufferForMainRly_CmdReq_Init);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp1FA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_OBCMTemp1FA_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp1_FA_INIT);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp1_Sig_Rcvd_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_OBCMTemp1_Sig_Rcvd_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp1_Sig_Rcvd_INIT);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp2FA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_OBCMTemp2FA_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp2_FA_INIT);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp2_Sig_Rcvd_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_OBCMTemp2_Sig_Rcvd_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp2_Sig_Rcvd_INIT);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp3FA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_OBCMTemp3FA_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp3_FA_INIT);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_OBCMTemp4FA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_OBCMTemp4FA_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp4_FA_INIT);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_PIM_CntrlBoardTmp1FA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_PIM_CntrlBoardTmp1FA_write_IRV
        (TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snrs1_FA_INI);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_PIM_CntrlBoardTmp2FA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_PIM_CntrlBoardTmp2FA_write_IRV
        (TMIR_ac_B.OutportBufferForCtnrlBrdTmp_Snsr2_FA_INI);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_b_TCU_Load_IndexFA_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_b_TCU_Load_IndexFA_write_IRV
        (TMIR_ac_B.OutportBufferForTCU_Load_Index_FA_INIT);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S175>/ECMDrvDoorAjar_Init'
     *  SignalConversion generated from: '<S37>/VeTMIR_e_ECMDrvDoorAjar_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_e_ECMDrvDoorAjar_write_IRV
        (TMIR_ac_B.OutportBufferForECMDrvDoorAjar_Init);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S175>/ECM_LTP_FanAftRunRq_init'
     *  SignalConversion generated from: '<S37>/VeTMIR_e_ECM_LTP_FanAftRun_Rq_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_e_ECM_LTP_FanAftRun_Rq_write_IRV
        (TMIR_ac_B.OutportBufferForECM_LTP_FanAftRunRq_init);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_y_Dbg_OBCMTemp1_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_y_Dbg_OBCMTemp1_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp1_Dbg_INIT);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S37>/VeTMIR_y_Dbg_OBCMTemp2_Init'
     * */
    Rte_IrvWrite_TMIR_PwrOn_VeTMIR_y_Dbg_OBCMTemp2_write_IRV
        (TMIR_ac_B.OutportBufferForOBCMTemp2_Dbg_INIT);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, TMIR_CODE) TmotTMIR_b_ECMDrvDoorAjar(void)
{
    /* Gateway: TmotTMIR_b_ECMDrvDoorAjar/TmotTMIR_b_ECMDrvDoorAjarChrt */
    /* During: TmotTMIR_b_ECMDrvDoorAjar/TmotTMIR_b_ECMDrvDoorAjarChrt */
    /* Entry Internal: TmotTMIR_b_ECMDrvDoorAjar/TmotTMIR_b_ECMDrvDoorAjarChrt */
    /* Transition: '<S217>:2' */
}

/* Output function */
FUNC(void, TMIR_CODE) TmotTMIR_b_OBCMTemp1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotTMIR_b_OBCMTemp1' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S39>/TmotTMIR_b_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S39>/VeTMIR_b_OBCMTemp1FA_write'
     */
    /* Gateway: TmotTMIR_b_OBCMTemp1/TmotTMIR_b_OBCMTemp1Chrt */
    /* During: TmotTMIR_b_OBCMTemp1/TmotTMIR_b_OBCMTemp1Chrt */
    /* Entry Internal: TmotTMIR_b_OBCMTemp1/TmotTMIR_b_OBCMTemp1Chrt */
    /* Transition: '<S218>:2' */
    Rte_IrvWrite_TmotTMIR_b_OBCMTemp1_VeTMIR_b_OBCMTemp1FA_write_IRV(true);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S39>/TmotTMIR_b_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S39>/VeTMIR_b_OBCMTemp1_Sig_Rcvd_write'
     */
    Rte_IrvWrite_TmotTMIR_b_OBCMTemp1_VeTMIR_b_OBCMTemp1_Sig_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S39>/TmotTMIR_b_OBCMTemp1Chrt'
     *  SignalConversion generated from: '<S39>/VeTMIR_y_Dbg_OBCMTemp1_write'
     */
    Rte_IrvWrite_TmotTMIR_b_OBCMTemp1_VeTMIR_y_Dbg_OBCMTemp1_write_IRV((uint8)4U);

    /* End of Outputs for SubSystem: '<Root>/TmotTMIR_b_OBCMTemp1' */
}

/* Output function */
FUNC(void, TMIR_CODE) TmotTMIR_b_OBCMTemp2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotTMIR_b_OBCMTemp2' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S40>/TmotTMIR_b_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S40>/VeTMIR_b_OBCMTemp2FA_write'
     */
    /* Gateway: TmotTMIR_b_OBCMTemp2/TmotTMIR_b_OBCMTemp2Chrt */
    /* During: TmotTMIR_b_OBCMTemp2/TmotTMIR_b_OBCMTemp2Chrt */
    /* Entry Internal: TmotTMIR_b_OBCMTemp2/TmotTMIR_b_OBCMTemp2Chrt */
    /* Transition: '<S219>:2' */
    Rte_IrvWrite_TmotTMIR_b_OBCMTemp2_VeTMIR_b_OBCMTemp2FA_write_IRV(true);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S40>/TmotTMIR_b_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S40>/VeTMIR_b_OBCMTemp2_Sig_Rcvd_write'
     */
    Rte_IrvWrite_TmotTMIR_b_OBCMTemp2_VeTMIR_b_OBCMTemp2_Sig_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S40>/TmotTMIR_b_OBCMTemp2Chrt'
     *  SignalConversion generated from: '<S40>/VeTMIR_y_Dbg_OBCMTemp2_write'
     */
    Rte_IrvWrite_TmotTMIR_b_OBCMTemp2_VeTMIR_y_Dbg_OBCMTemp2_write_IRV((uint8)4U);

    /* End of Outputs for SubSystem: '<Root>/TmotTMIR_b_OBCMTemp2' */
}

/* Model initialize function */
FUNC(void, TMIR_CODE) TMIR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TMIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S37>/FcnCallGen' incorporates:
     *  SubSystem: '<S37>/Initialize_inputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S175>/CntrlBrdTmp_Snrs1_FA_INIT' incorporates:
     *  Constant: '<S212>/Calib'
     */
    TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snrs1_FA_INI =
        KeTMIR_b_CntrlBrdTmp_Snsr1_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/CntrlBrdTmp_Snsr1_INIT' incorporates:
     *  Constant: '<S211>/Calib'
     */
    TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snsr1_INIT =
        KeTMIR_T_CntrlBrdTmp_Snsr1_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/CntrlBrdTmp_Snsr2_INIT' incorporates:
     *  Constant: '<S213>/Calib'
     */
    TMIR_ac_B.OutportBufferForCntrlBrdTmp_Snsr2_INIT =
        KeTMIR_T_CntrlBrdTmp_Snsr2_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/CtnrlBrdTmp_Snsr2_FA_INIT' incorporates:
     *  Constant: '<S214>/Calib'
     */
    TMIR_ac_B.OutportBufferForCtnrlBrdTmp_Snsr2_FA_INI =
        KeTMIR_b_CntrlBrdTmp_Snsr2_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/HV_BatHghTmp_Thrsh_INIT' incorporates:
     *  Constant: '<S193>/Calib'
     */
    TMIR_ac_B.OutportBufferForHV_BatHghTmp_Thrsh_INIT =
        KeTMIR_T_HV_BatHghTmp_Thrsh_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/HV_BatLowTmp_Thrsh_INIT' incorporates:
     *  Constant: '<S194>/Calib'
     */
    TMIR_ac_B.OutportBufferForHV_BatLowTmp_Thrsh_INIT =
        KeTMIR_T_HV_BatLowTmp_Thrsh_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/LTR_ClntTmpOut_FAINIT' incorporates:
     *  Constant: '<S200>/Calib'
     */
    TMIR_ac_B.OutportBufferForLTR_ClntTmpOut_FAINIT =
        KeTMIR_b_LTR_ClntTmpOut_FAINIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/LTR_ClntTmpOut_INIT' incorporates:
     *  Constant: '<S195>/Calib'
     */
    TMIR_ac_B.OutportBufferForLTR_ClntTmpOut_INIT = KeTMIR_T_LTR_ClntTmpOut_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp1_Dbg_INIT' incorporates:
     *  Constant: '<S207>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_Dbg_INIT = KeTMIR_y_OBCMTemp1_Dbg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp1_FA_INIT' incorporates:
     *  Constant: '<S201>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_FA_INIT = KeTMIR_b_OBCMTemp1_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp1_INIT' incorporates:
     *  Constant: '<S196>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_INIT = KeTMIR_T_OBCMTemp1_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp1_Sig_Rcvd_INIT' incorporates:
     *  Constant: '<S202>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp1_Sig_Rcvd_INIT =
        KeTMIR_b_OBCMTemp1_Sig_Rcvd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp2_Dbg_INIT' incorporates:
     *  Constant: '<S208>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_Dbg_INIT = KeTMIR_y_OBCMTemp2_Dbg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp2_FA_INIT' incorporates:
     *  Constant: '<S203>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_FA_INIT = KeTMIR_b_OBCMTemp2_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp2_INIT' incorporates:
     *  Constant: '<S197>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_INIT = KeTMIR_T_OBCMTemp2_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp2_Sig_Rcvd_INIT' incorporates:
     *  Constant: '<S204>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp2_Sig_Rcvd_INIT =
        KeTMIR_b_OBCMTemp2_Sig_Rcvd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp3_FA_INIT' incorporates:
     *  Constant: '<S205>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp3_FA_INIT = KeTMIR_b_OBCMTemp3_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp3_INIT' incorporates:
     *  Constant: '<S198>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp3_INIT = KeTMIR_T_OBCMTemp3_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp4_FA_INIT' incorporates:
     *  Constant: '<S206>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp4_FA_INIT = KeTMIR_b_OBCMTemp4_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/OBCMTemp4_INIT' incorporates:
     *  Constant: '<S199>/Calib'
     */
    TMIR_ac_B.OutportBufferForOBCMTemp4_INIT = KeTMIR_T_OBCMTemp4_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/TCU_Load_Index_FA_INIT' incorporates:
     *  Constant: '<S216>/Calib'
     */
    TMIR_ac_B.OutportBufferForTCU_Load_Index_FA_INIT =
        KeTMIR_b_TCU_LdIndx_FA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S175>/TCU_Load_Index_INIT' incorporates:
     *  Constant: '<S215>/Calib'
     */
    TMIR_ac_B.OutportBufferForTCU_Load_Index_INIT = KeTMIR_Pct_TCU_LdIndx_Init;

    /* SystemInitialize for SignalConversion generated from: '<S175>/BSG_ECM_RadFanRq_INIT' incorporates:
     *  Constant: '<S185>/Calib'
     */
    TMIR_ac_B.OutportBufferForBSG_ECM_RadFanRq_INIT =
        KeTMIR_Pct_BSG_ECM_RadFanRq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/BSG_LTR_PmpSpdAct_INIT' incorporates:
     *  Constant: '<S186>/Calib'
     */
    TMIR_ac_B.OutportBufferForBSG_LTR_PmpSpdAct_INIT =
        KeTMIR_Pct_BSG_LTR_PmpSpdAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/BSG_PPU_AirFlwRq_INIT' incorporates:
     *  Constant: '<S187>/Calib'
     */
    TMIR_ac_B.OutportBufferForBSG_PPU_AirFlwRq_INIT =
        KeTMIR_Pct_BSG_PPU_AirFlwRq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S175>/ECM_LTP_FanAftRunRq_init' incorporates:
     *  Constant: '<S183>/Calib'
     */
    TMIR_ac_B.OutportBufferForECM_LTP_FanAftRunRq_init =
        KeTMIR_e_ECM_LTP_FanAftRunRq_init;

    /* SystemInitialize for SignalConversion generated from: '<S175>/ECMDrvDoorAjar_Init' incorporates:
     *  Constant: '<S188>/Calib'
     */
    TMIR_ac_B.OutportBufferForECMDrvDoorAjar_Init = KeTMIR_e_ECMDrvDoorAjar_Init;

    /* SystemInitialize for SignalConversion generated from: '<S175>/LeTMIR_T_TransOilTemp' incorporates:
     *  Constant: '<S180>/Calib'
     */
    TMIR_ac_B.OutportBufferForLeTMIR_T_TransOilTemp = KeTMIR_T_TransOilTempInit;

    /* SystemInitialize for SignalConversion generated from: '<S175>/LeTMIR_b_TransOilTempFA' incorporates:
     *  Constant: '<S182>/Calib'
     */
    TMIR_ac_B.OutportBufferForLeTMIR_b_TransOilTempFA =
        KeTMIR_b_TransOilTempInitFA;

    /* SystemInitialize for SignalConversion generated from: '<S175>/MainRly_CmdReq_Init' incorporates:
     *  Constant: '<S181>/Calib'
     */
    TMIR_ac_B.OutportBufferForMainRly_CmdReq_Init = KeTMIR_b_MainRly_CmdReq_Init;

    /* SystemInitialize for S-Function (fcgen): '<S37>/FcnCallGen' incorporates:
     *  SubSystem: '<S37>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S176>/VeTMIR_e_ECM_LTP_FanAftRunRq_Out_Init' incorporates:
     *  Constant: '<S176>/Const16'
     */
    TMIR_ac_B.OutportBufferForVeTMIR_e_ECM_LTP_FanAftR = TMIR_ac_ConstB.Const16;

    /* End of SystemInitialize for S-Function (fcgen): '<S37>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeTMIR_e_ECM_LTP_FanAftRunRq' incorporates:
     *  Merge: '<Root>/Merge_Outport_16'
     */
    (void)Rte_Write_VeTMIR_e_ECM_LTP_FanAftRunRq_Value(CeTMIR_e_No_AftRunRequest);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
