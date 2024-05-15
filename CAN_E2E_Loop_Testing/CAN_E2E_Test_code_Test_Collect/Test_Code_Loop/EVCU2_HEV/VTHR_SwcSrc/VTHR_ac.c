/*
 * File: VTHR_ac.c
 *
 * Code generated for Simulink model 'VTHR_ac'.
 *
 * Model version                  : 9.1252
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:05:47 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VTHR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_VTHR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_P_BattLTMaxLim_Val = 0.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_P_HVAccPwr_Val = 0.0F;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_P_V2H_DschgCap_Val = 0.0F;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_P_V2H_EVMaxPwrLim_Val =
    0.0F;                              /* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_P_V2H_InstPwrDraw_Val =
    0.0F;                              /* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_Pct_V2H_BattBulkSOC_Val =
    0.0F;                              /* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_Pct_V2H_ResrvBattSts_Val =
    0.0F;                              /* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_BPCMRdy_Ovrd = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_BPCMRdy_Val = 0;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_BattLTMaxLim_Ovrd = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_DrvDrUnlcking_Ovrd = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_DrvDrUnlcking_Val = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_EVSE_PilotStat_Ovrd = 0;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_EnblDschrg_Ovrd = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_EnblDschrg_Val = 0;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_HVAccPwr_Ovrd = 0;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_HoodAjarOvrd = 0;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_HoodAjarVal = 0;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_J1772S2Sts_Ovrd = 0;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_J1772S2Sts_Val = 0;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_OBCMd_Ovrd = 0;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_PMMPwrMd_Ovrd = 0;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_Prox_Ovrd = 0;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_Rdy4shutdown_Val = 0;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_TurtleMdSts_Ovrd = 0;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_V2HEnable_Ovrd = 1;/* Referenced by: '<S5>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_V2H_Detected_Val = 0;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT) KeVTHR_b_V2H_MdSts_Val = 0;/* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(boolean, VTHR_VAR_INIT)
    KeVTHR_b_V2H_SelEnergyTransType_Val = 0;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TeVTHR_e_DschrgSysSts, VTHR_VAR_INIT)
    KeVTHR_e_DschrgSysSts_Val = CeVTHR_e_Inactive;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TeOBCR_e_EVSE_PilotStat_OBCM, VTHR_VAR_INIT)
    KeVTHR_e_EVSE_PilotStat_Val = CeOBCR_e_NO_EVSE_OBCM;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TeVTHR_e_FOTA_ReadySts, VTHR_VAR_INIT)
    KeVTHR_e_FOTA_ReadySts_Val = CeVTHR_e_Eval_in_Progress;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TeOBCR_e_ChrgrModeStat_OBCM, VTHR_VAR_INIT)
    KeVTHR_e_OBCMd_Val = CeOBCR_e_Idle_OBCM;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TePMDR_e_PowerMode, VTHR_VAR_INIT) KeVTHR_e_PMMPwrMd_Val =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TeOBCR_e_ProxStat_OBCM, VTHR_VAR_INIT) KeVTHR_e_Prox_Val =
    CeOBCR_e_ProxOut_OBCM;             /* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TeDMDR_e_TurtleMdSts, VTHR_VAR_INIT)
    KeVTHR_e_TurtleMdSts_Val = CeDMDR_e_No_Turtle_Mode;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(TeVTHR_e_V2H_Sts, VTHR_VAR_INIT) KeVTHR_e_V2H_Sts_Val =
    CeVTHR_e_V2H_Inactive;             /* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_t_V2H_TotPwrDays_Val = 0.0F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_t_V2H_TotPwrHrs_Val = 0.0F;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static volatile CONST(float32, VTHR_VAR_INIT) KeVTHR_t_V2H_TotPwrMin_Val = 0.0F;/* Referenced by: '<S37>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_VTHR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTHR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_VTHR_3

static VAR(float32, VTHR_VAR_INIT) VeVTHR_P_BattLTMaxLim;/* '<S4>/Switch9' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(float32, VTHR_VAR_INIT) VeVTHR_P_HV_AccPwr;/* '<S4>/Switch7' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(boolean, VTHR_VAR_INIT) VeVTHR_b_BPCMRdy;/* '<S4>/Switch13' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(boolean, VTHR_VAR_INIT) VeVTHR_b_DrvDrUnlcking;/* '<S4>/Switch14' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(boolean, VTHR_VAR_INIT) VeVTHR_b_EnblDschrg;/* '<S4>/Switch3' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(boolean, VTHR_VAR_INIT) VeVTHR_b_HoodAjar;/* '<S4>/Switch5' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(boolean, VTHR_VAR_INIT) VeVTHR_b_J1772_S2_Sts;/* '<S4>/Switch11' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(TeOBCR_e_EVSE_PilotStat_OBCM, VTHR_VAR_INIT)
    VeVTHR_e_EVSE_PilotStat_In;        /* '<S4>/Switch58' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(TeOBCR_e_ChrgrModeStat_OBCM, VTHR_VAR_INIT) VeVTHR_e_OBCMd;/* '<S4>/Switch10' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(TePMDR_e_PowerMode, VTHR_VAR_INIT) VeVTHR_e_PMM_PowerMode;/* '<S4>/Switch1' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(TeOBCR_e_ProxStat_OBCM, VTHR_VAR_INIT) VeVTHR_e_ProxStat;/* '<S4>/Switch2' */

#endif

#if Rte_SysCon_Variant_VTHR_3

static VAR(TeDMDR_e_TurtleMdSts, VTHR_VAR_INIT) VeVTHR_e_TurtleMdSts;/* '<S4>/Switch4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTHR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_VTHR_3

FUNC(void, VTHR_CODE) VTHR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_VTHR_3

    boolean Merge_4;

#endif

#if Rte_SysCon_Variant_VTHR_3

    boolean Merge_13_b;

#endif

#if Rte_SysCon_Variant_VTHR_3

    boolean Merge_5;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_14_n;

#endif

#if Rte_SysCon_Variant_VTHR_3

    boolean Merge_3;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_9;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_11;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_12_d;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_19;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_17;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_1;

#endif

#if Rte_SysCon_Variant_VTHR_3

    boolean Merge_16;

#endif

#if Rte_SysCon_Variant_VTHR_3

    float32 Merge_18;

#endif

#if Rte_SysCon_Variant_VTHR_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeVTHR_e_PMM_PowerMode)));

    /* Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM' */
    (void)Rte_Read_VeIDCR_e_EVSE_PilotStat_OBCM_Value
        ((&(VeVTHR_e_EVSE_PilotStat_In)));

    /* Inport: '<Root>/VeHSWR_b_HoodOpen' */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value((&(VeVTHR_b_HoodAjar)));

    /* Inport: '<Root>/VeOBCR_b_BPCM_Rdy' */
    (void)Rte_Read_VeOBCR_b_BPCM_Rdy_Value((&(VeVTHR_b_BPCMRdy)));

    /* Inport: '<Root>/VeCITR_b_Drv_Dr_Unlocking' */
    (void)Rte_Read_VeCITR_b_Drv_Dr_Unlocking_Value((&(VeVTHR_b_DrvDrUnlcking)));

    /* Inport: '<Root>/VeIDCR_b_J1772_S2_Status' */
    (void)Rte_Read_VeIDCR_b_J1772_S2_Status_Value((&(VeVTHR_b_J1772_S2_Sts)));

    /* Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' */
    (void)Rte_Read_VeIDCR_e_ChrgrModeStat_OBCM_Value((&(VeVTHR_e_OBCMd)));

    /* Inport: '<Root>/VeESMR_P_BattLTMaxLim' */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value((&(VeVTHR_P_BattLTMaxLim)));

    /* Inport: '<Root>/VeHVTR_P_HV_AccPwr' */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value((&(VeVTHR_P_HV_AccPwr)));

    /* Inport: '<Root>/VeDMDR_e_TurtleMdSts' */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value((&(VeVTHR_e_TurtleMdSts)));

    /* Inport: '<Root>/VeOBCR_b_EnablePowerTransfer' */
    (void)Rte_Read_VeOBCR_b_EnablePowerTransfer_Value((&(VeVTHR_b_EnblDschrg)));

    /* Inport: '<Root>/VeIDCR_e_ProxStat' */
    (void)Rte_Read_VeIDCR_e_ProxStat_Value((&(VeVTHR_e_ProxStat)));

    /* Outputs for Function Call SubSystem: '<Root>/VTHR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTHI'
     */
    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S60>/Calib'
     */
    if (KeVTHR_b_Prox_Ovrd)
    {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S65>/Calib'
         *  Inport: '<Root>/VeIDCR_e_ProxStat'
         */
        VeVTHR_e_ProxStat = KeVTHR_e_Prox_Val;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S51>/Calib'
     */
    if (KeVTHR_b_EnblDschrg_Ovrd)
    {
        /* Switch: '<S4>/Switch3' incorporates:
         *  Constant: '<S52>/Calib'
         *  Inport: '<Root>/VeOBCR_b_EnablePowerTransfer'
         */
        VeVTHR_b_EnblDschrg = KeVTHR_b_EnblDschrg_Val;
    }

    /* End of Switch: '<S4>/Switch3' */

    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S61>/Calib'
     */
    if (KeVTHR_b_TurtleMdSts_Ovrd)
    {
        /* Switch: '<S4>/Switch4' incorporates:
         *  Constant: '<S66>/Calib'
         *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
         */
        VeVTHR_e_TurtleMdSts = KeVTHR_e_TurtleMdSts_Val;
    }

    /* End of Switch: '<S4>/Switch4' */

    /* Switch: '<S4>/Switch7' incorporates:
     *  Constant: '<S53>/Calib'
     */
    if (KeVTHR_b_HVAccPwr_Ovrd)
    {
        /* Switch: '<S4>/Switch7' incorporates:
         *  Constant: '<S44>/Calib'
         *  Inport: '<Root>/VeHVTR_P_HV_AccPwr'
         */
        VeVTHR_P_HV_AccPwr = KeVTHR_P_HVAccPwr_Val;
    }

    /* End of Switch: '<S4>/Switch7' */

    /* Switch: '<S4>/Switch9' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeVTHR_b_BattLTMaxLim_Ovrd)
    {
        /* Switch: '<S4>/Switch9' incorporates:
         *  Constant: '<S43>/Calib'
         *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
         */
        VeVTHR_P_BattLTMaxLim = KeVTHR_P_BattLTMaxLim_Val;
    }

    /* End of Switch: '<S4>/Switch9' */

    /* Switch: '<S4>/Switch10' incorporates:
     *  Constant: '<S58>/Calib'
     */
    if (KeVTHR_b_OBCMd_Ovrd)
    {
        /* Switch: '<S4>/Switch10' incorporates:
         *  Constant: '<S63>/Calib'
         *  Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM'
         */
        VeVTHR_e_OBCMd = KeVTHR_e_OBCMd_Val;
    }

    /* End of Switch: '<S4>/Switch10' */

    /* Switch: '<S4>/Switch11' incorporates:
     *  Constant: '<S56>/Calib'
     */
    if (KeVTHR_b_J1772S2Sts_Ovrd)
    {
        /* Switch: '<S4>/Switch11' incorporates:
         *  Constant: '<S57>/Calib'
         *  Inport: '<Root>/VeIDCR_b_J1772_S2_Status'
         */
        VeVTHR_b_J1772_S2_Sts = KeVTHR_b_J1772S2Sts_Val;
    }

    /* End of Switch: '<S4>/Switch11' */

    /* Switch: '<S4>/Switch14' incorporates:
     *  Constant: '<S48>/Calib'
     */
    if (KeVTHR_b_DrvDrUnlcking_Ovrd)
    {
        /* Switch: '<S4>/Switch14' incorporates:
         *  Constant: '<S49>/Calib'
         *  Inport: '<Root>/VeCITR_b_Drv_Dr_Unlocking'
         */
        VeVTHR_b_DrvDrUnlcking = KeVTHR_b_DrvDrUnlcking_Val;
    }

    /* End of Switch: '<S4>/Switch14' */

    /* Switch: '<S4>/Switch13' incorporates:
     *  Constant: '<S45>/Calib'
     */
    if (KeVTHR_b_BPCMRdy_Ovrd)
    {
        /* Switch: '<S4>/Switch13' incorporates:
         *  Constant: '<S46>/Calib'
         *  Inport: '<Root>/VeOBCR_b_BPCM_Rdy'
         */
        VeVTHR_b_BPCMRdy = KeVTHR_b_BPCMRdy_Val;
    }

    /* End of Switch: '<S4>/Switch13' */

    /* Switch: '<S4>/Switch5' incorporates:
     *  Constant: '<S54>/Calib'
     */
    if (KeVTHR_b_HoodAjarOvrd)
    {
        /* Switch: '<S4>/Switch5' incorporates:
         *  Constant: '<S55>/Calib'
         *  Inport: '<Root>/VeHSWR_b_HoodOpen'
         */
        VeVTHR_b_HoodAjar = KeVTHR_b_HoodAjarVal;
    }

    /* End of Switch: '<S4>/Switch5' */

    /* Switch: '<S4>/Switch58' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KeVTHR_b_EVSE_PilotStat_Ovrd)
    {
        /* Switch: '<S4>/Switch58' incorporates:
         *  Constant: '<S62>/Calib'
         *  Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM'
         */
        VeVTHR_e_EVSE_PilotStat_In = KeVTHR_e_EVSE_PilotStat_Val;
    }

    /* End of Switch: '<S4>/Switch58' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S59>/Calib'
     */
    if (KeVTHR_b_PMMPwrMd_Ovrd)
    {
        /* Switch: '<S4>/Switch1' incorporates:
         *  Constant: '<S64>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeVTHR_e_PMM_PowerMode = KeVTHR_e_PMMPwrMd_Val;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTHC'
     */
    /* If: '<S3>/If' incorporates:
     *  Constant: '<S5>/Calib'
     */
    if (KeVTHR_b_V2HEnable_Ovrd)
    {
        /* Merge: '<S3>/Merge_5' incorporates:
         *  Inport: '<Root>/VeDCCR_b_V2H_MaxCurrPwrLim_NegVal'
         */
        (void)Rte_Read_VeDCCR_b_V2H_MaxCurrPwrLim_NegVal_Value(&Merge_5);

        /* Outputs for IfAction SubSystem: '<S3>/VTHC' incorporates:
         *  ActionPort: '<S7>/ActionPort'
         */
        /* Merge: '<S3>/Merge_13' incorporates:
         *  Constant: '<S35>/Calib'
         *  SignalConversion generated from: '<S7>/SelEnergyTransType'
         */
        Merge_13_b = KeVTHR_b_V2H_SelEnergyTransType_Val;

        /* Merge: '<S3>/Merge_14' incorporates:
         *  Constant: '<S30>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_BattBulkSOC'
         */
        Merge_14_n = KeVTHR_Pct_V2H_BattBulkSOC_Val;

        /* Merge: '<S3>/Merge_17' incorporates:
         *  Constant: '<S28>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_EVMaxPwrLim'
         */
        Merge_17 = KeVTHR_P_V2H_EVMaxPwrLim_Val;

        /* Merge: '<S3>/Merge_18' incorporates:
         *  Constant: '<S31>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_ResrvBattSts'
         */
        Merge_18 = KeVTHR_Pct_V2H_ResrvBattSts_Val;

        /* Merge: '<S3>/Merge_16' incorporates:
         *  Constant: '<S34>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_MdSts'
         */
        Merge_16 = KeVTHR_b_V2H_MdSts_Val;

        /* Merge: '<S3>/Merge_19' incorporates:
         *  Constant: '<S27>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_DschgCap'
         */
        Merge_19 = KeVTHR_P_V2H_DschgCap_Val;

        /* SignalConversion generated from: '<S1>/FOTA_ReadySts' incorporates:
         *  Constant: '<S40>/Calib'
         *  Merge: '<S3>/Merge_8'
         *  Outport: '<Root>/VeVTHR_e_FOTA_ReadySts'
         *  SignalConversion generated from: '<S7>/FOTA_ReadySts'
         */
        (void)Rte_Write_VeVTHR_e_FOTA_ReadySts_Value(KeVTHR_e_FOTA_ReadySts_Val);

        /* Merge: '<S3>/Merge_1' incorporates:
         *  Constant: '<S29>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_InstantPower'
         */
        Merge_1 = KeVTHR_P_V2H_InstPwrDraw_Val;

        /* Merge: '<S3>/Merge_9' incorporates:
         *  Constant: '<S36>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_Discharge_Days'
         */
        Merge_9 = KeVTHR_t_V2H_TotPwrDays_Val;

        /* Merge: '<S3>/Merge_11' incorporates:
         *  Constant: '<S39>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_Discharge_Hours'
         */
        Merge_11 = KeVTHR_t_V2H_TotPwrHrs_Val;

        /* Merge: '<S3>/Merge_12' incorporates:
         *  Constant: '<S37>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_Discharge_Minutes'
         */
        Merge_12_d = KeVTHR_t_V2H_TotPwrMin_Val;

        /* SignalConversion generated from: '<S1>/V2H_Sts' incorporates:
         *  Constant: '<S38>/Calib'
         *  Merge: '<S3>/Merge_10'
         *  Outport: '<Root>/VeVTHR_e_V2H_Sts'
         *  SignalConversion generated from: '<S7>/V2H_Sts'
         */
        (void)Rte_Write_VeVTHR_e_V2H_Sts_Value(KeVTHR_e_V2H_Sts_Val);

        /* SignalConversion generated from: '<S1>/DschrgSysSts' incorporates:
         *  Constant: '<S41>/Calib'
         *  Merge: '<S3>/Merge_2'
         *  Outport: '<Root>/VeVTHR_e_DschrgSysSts'
         *  SignalConversion generated from: '<S7>/DschrgSysSts'
         */
        (void)Rte_Write_VeVTHR_e_DschrgSysSts_Value(KeVTHR_e_DschrgSysSts_Val);

        /* Merge: '<S3>/Merge_3' incorporates:
         *  Constant: '<S33>/Calib'
         *  SignalConversion generated from: '<S7>/V2H_Detected'
         */
        Merge_3 = KeVTHR_b_V2H_Detected_Val;

        /* Merge: '<S3>/Merge_4' incorporates:
         *  Constant: '<S32>/Calib'
         *  SignalConversion generated from: '<S7>/Rdy4shutdown'
         */
        Merge_4 = KeVTHR_b_Rdy4shutdown_Val;

        /* End of Outputs for SubSystem: '<S3>/VTHC' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S3>/Subsystem' incorporates:
         *  ActionPort: '<S6>/ActionPort'
         */
        /* Merge: '<S3>/Merge_13' incorporates:
         *  Constant: '<S6>/ConstantValue19'
         *  Gain: '<S22>/Gain'
         */
        Merge_13_b = false;

        /* Merge: '<S3>/Merge_14' incorporates:
         *  Constant: '<S6>/ConstantValue17'
         *  Gain: '<S21>/Gain'
         */
        Merge_14_n = 0.0F;

        /* Merge: '<S3>/Merge_17' incorporates:
         *  Constant: '<S6>/ConstantValue15'
         *  Gain: '<S19>/Gain'
         */
        Merge_17 = 0.0F;

        /* Merge: '<S3>/Merge_18' incorporates:
         *  Constant: '<S6>/ConstantValue16'
         *  Gain: '<S20>/Gain'
         */
        Merge_18 = 0.0F;

        /* Merge: '<S3>/Merge_16' incorporates:
         *  Constant: '<S6>/ConstantValue20'
         *  Gain: '<S17>/Gain'
         */
        Merge_16 = false;

        /* Merge: '<S3>/Merge_19' incorporates:
         *  Constant: '<S6>/ConstantValue21'
         *  Gain: '<S18>/Gain'
         */
        Merge_19 = 0.0F;

        /* SignalConversion generated from: '<S1>/FOTA_ReadySts' incorporates:
         *  Constant: '<S13>/Constant'
         *  DataTypeConversion: '<S9>/DataTypeConversion'
         *  Merge: '<S3>/Merge_8'
         *  Outport: '<Root>/VeVTHR_e_FOTA_ReadySts'
         */
        (void)Rte_Write_VeVTHR_e_FOTA_ReadySts_Value(CeVTHR_e_Eval_in_Progress);

        /* Merge: '<S3>/Merge_1' incorporates:
         *  Constant: '<S6>/ConstantValue23'
         *  Gain: '<S24>/Gain'
         */
        Merge_1 = 0.0F;

        /* Merge: '<S3>/Merge_9' incorporates:
         *  Constant: '<S6>/ConstantValue22'
         *  Gain: '<S25>/Gain'
         */
        Merge_9 = 0.0F;

        /* Merge: '<S3>/Merge_11' incorporates:
         *  Constant: '<S6>/ConstantValue24'
         *  Gain: '<S26>/Gain'
         */
        Merge_11 = 0.0F;

        /* Merge: '<S3>/Merge_12' incorporates:
         *  Constant: '<S6>/ConstantValue25'
         *  Gain: '<S23>/Gain'
         */
        Merge_12_d = 0.0F;

        /* SignalConversion generated from: '<S1>/V2H_Sts' incorporates:
         *  Constant: '<S12>/Constant'
         *  DataTypeConversion: '<S10>/DataTypeConversion'
         *  Merge: '<S3>/Merge_10'
         *  Outport: '<Root>/VeVTHR_e_V2H_Sts'
         */
        (void)Rte_Write_VeVTHR_e_V2H_Sts_Value(CeVTHR_e_V2H_Inactive);

        /* SignalConversion generated from: '<S1>/DschrgSysSts' incorporates:
         *  Constant: '<S11>/Constant'
         *  DataTypeConversion: '<S8>/DataTypeConversion'
         *  Merge: '<S3>/Merge_2'
         *  Outport: '<Root>/VeVTHR_e_DschrgSysSts'
         */
        (void)Rte_Write_VeVTHR_e_DschrgSysSts_Value(CeVTHR_e_Inactive);

        /* Merge: '<S3>/Merge_3' incorporates:
         *  Constant: '<S6>/ConstantValue2'
         *  Gain: '<S14>/Gain'
         */
        Merge_3 = false;

        /* Merge: '<S3>/Merge_4' incorporates:
         *  Constant: '<S6>/ConstantValue3'
         *  Gain: '<S15>/Gain'
         */
        Merge_4 = false;

        /* Merge: '<S3>/Merge_5' incorporates:
         *  Constant: '<S6>/ConstantValue4'
         *  Gain: '<S16>/Gain'
         */
        Merge_5 = false;

        /* End of Outputs for SubSystem: '<S3>/Subsystem' */
    }

    /* End of If: '<S3>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVTHR_b_Rdy4shutdown' incorporates:
     *  SignalConversion generated from: '<S1>/Rdy4ShutDown'
     */
    (void)Rte_Write_VeVTHR_b_Rdy4shutdown_Value(Merge_4);

    /* Outport: '<Root>/VeVTHR_b_V2H_SelEnergyTransType' incorporates:
     *  SignalConversion generated from: '<S1>/SelEnergyTransType'
     */
    (void)Rte_Write_VeVTHR_b_V2H_SelEnergyTransType_Value(Merge_13_b);

    /* Outport: '<Root>/VeVTHR_b_V2H_Active' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_Active'
     */
    (void)Rte_Write_VeVTHR_b_V2H_Active_Value(Merge_5);

    /* Outport: '<Root>/VeVTHR_Pct_V2H_BattBulkSOC' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_BattBulkSOC'
     */
    (void)Rte_Write_VeVTHR_Pct_V2H_BattBulkSOC_Value(Merge_14_n);

    /* Outport: '<Root>/VeVTHR_b_V2H_Detected' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_Detected'
     */
    (void)Rte_Write_VeVTHR_b_V2H_Detected_Value(Merge_3);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrDays' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_Discharge_Days'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrDays_Value(Merge_9);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrHrs' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_Discharge_Hours'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrHrs_Value(Merge_11);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrMin' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_Discharge_Minutes'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrMin_Value(Merge_12_d);

    /* Outport: '<Root>/VeVTHR_P_V2H_DschgCap' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_DschgCap'
     */
    (void)Rte_Write_VeVTHR_P_V2H_DschgCap_Value(Merge_19);

    /* Outport: '<Root>/VeVTHR_P_V2H_EVMaxPwrLim' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_EVMaxPwrLim'
     */
    (void)Rte_Write_VeVTHR_P_V2H_EVMaxPwrLim_Value(Merge_17);

    /* Outport: '<Root>/VeVTHR_P_V2H_InstPwrDraw' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_InstantPower'
     */
    (void)Rte_Write_VeVTHR_P_V2H_InstPwrDraw_Value(Merge_1);

    /* Outport: '<Root>/VeVTHR_b_V2H_MdSts' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_MdSts'
     */
    (void)Rte_Write_VeVTHR_b_V2H_MdSts_Value(Merge_16);

    /* Outport: '<Root>/VeVTHR_Pct_V2H_ResrvBattSts' incorporates:
     *  SignalConversion generated from: '<S1>/V2H_ResrvBattSts'
     */
    (void)Rte_Write_VeVTHR_Pct_V2H_ResrvBattSts_Value(Merge_18);

    /* End of Outputs for SubSystem: '<Root>/VTHR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
FUNC(void, VTHR_CODE) VTHR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VTHR_PwrOn'
     */
    /* Outputs for Atomic SubSystem: '<S2>/VariantSubsystem' */
#if Rte_SysCon_Variant_VTHR_3

    /* Outputs for Atomic SubSystem: '<S67>/VTHO_FUNC' */
    /* Outport: '<Root>/VeVTHR_e_V2H_Sts' incorporates:
     *  Constant: '<S71>/Constant'
     */
    (void)Rte_Write_VeVTHR_e_V2H_Sts_Value(CeVTHR_e_V2H_Inactive);

    /* Outport: '<Root>/VeVTHR_P_V2H_InstPwrDraw' incorporates:
     *  Constant: '<S68>/ConstantValue25'
     */
    (void)Rte_Write_VeVTHR_P_V2H_InstPwrDraw_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrHrs' incorporates:
     *  Constant: '<S68>/ConstantValue26'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrHrs_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrDays' incorporates:
     *  Constant: '<S68>/ConstantValue27'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrDays_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrMin' incorporates:
     *  Constant: '<S68>/ConstantValue15'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrMin_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_b_V2H_SelEnergyTransType' incorporates:
     *  Constant: '<S68>/ConstantValue18'
     */
    (void)Rte_Write_VeVTHR_b_V2H_SelEnergyTransType_Value(false);

    /* Outport: '<Root>/VeVTHR_Pct_V2H_BattBulkSOC' incorporates:
     *  Constant: '<S68>/ConstantValue19'
     */
    (void)Rte_Write_VeVTHR_Pct_V2H_BattBulkSOC_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_P_V2H_EVMaxPwrLim' incorporates:
     *  Constant: '<S68>/ConstantValue21'
     */
    (void)Rte_Write_VeVTHR_P_V2H_EVMaxPwrLim_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_Pct_V2H_ResrvBattSts' incorporates:
     *  Constant: '<S68>/ConstantValue22'
     */
    (void)Rte_Write_VeVTHR_Pct_V2H_ResrvBattSts_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_b_V2H_MdSts' incorporates:
     *  Constant: '<S68>/ConstantValue23'
     */
    (void)Rte_Write_VeVTHR_b_V2H_MdSts_Value(false);

    /* Outport: '<Root>/VeVTHR_P_V2H_DschgCap' incorporates:
     *  Constant: '<S68>/ConstantValue1'
     */
    (void)Rte_Write_VeVTHR_P_V2H_DschgCap_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_e_FOTA_ReadySts' incorporates:
     *  Constant: '<S72>/Constant'
     */
    (void)Rte_Write_VeVTHR_e_FOTA_ReadySts_Value(CeVTHR_e_Eval_in_Progress);

    /* Outport: '<Root>/VeVTHR_e_DschrgSysSts' incorporates:
     *  Constant: '<S70>/Constant'
     */
    (void)Rte_Write_VeVTHR_e_DschrgSysSts_Value(CeVTHR_e_Inactive);

    /* Outport: '<Root>/VeVTHR_b_V2H_Detected' incorporates:
     *  Constant: '<S68>/ConstantValue2'
     */
    (void)Rte_Write_VeVTHR_b_V2H_Detected_Value(false);

    /* Outport: '<Root>/VeVTHR_b_Rdy4shutdown' incorporates:
     *  Constant: '<S68>/ConstantValue3'
     */
    (void)Rte_Write_VeVTHR_b_Rdy4shutdown_Value(false);

    /* Outport: '<Root>/VeVTHR_b_V2H_Active' incorporates:
     *  Constant: '<S68>/ConstantValue4'
     */
    (void)Rte_Write_VeVTHR_b_V2H_Active_Value(false);

    /* End of Outputs for SubSystem: '<S67>/VTHO_FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S67>/VTHO_NF' */
    /* Outport: '<Root>/VeVTHR_e_V2H_Sts' incorporates:
     *  Constant: '<S77>/Constant'
     *  DataTypeConversion: '<S75>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTHR_e_V2H_Sts_Value(CeVTHR_e_V2H_Inactive);

    /* Outport: '<Root>/VeVTHR_P_V2H_InstPwrDraw' incorporates:
     *  Constant: '<S69>/ConstantValue25'
     *  Gain: '<S84>/Gain'
     */
    (void)Rte_Write_VeVTHR_P_V2H_InstPwrDraw_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrHrs' incorporates:
     *  Constant: '<S69>/ConstantValue26'
     *  Gain: '<S79>/Gain'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrHrs_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrDays' incorporates:
     *  Constant: '<S69>/ConstantValue27'
     *  Gain: '<S83>/Gain'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrDays_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_t_V2H_TotPwrMin' incorporates:
     *  Constant: '<S69>/ConstantValue15'
     *  Gain: '<S85>/Gain'
     */
    (void)Rte_Write_VeVTHR_t_V2H_TotPwrMin_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_b_V2H_SelEnergyTransType' incorporates:
     *  Constant: '<S69>/ConstantValue18'
     *  Gain: '<S88>/Gain'
     */
    (void)Rte_Write_VeVTHR_b_V2H_SelEnergyTransType_Value(false);

    /* Outport: '<Root>/VeVTHR_Pct_V2H_BattBulkSOC' incorporates:
     *  Constant: '<S69>/ConstantValue19'
     *  Gain: '<S89>/Gain'
     */
    (void)Rte_Write_VeVTHR_Pct_V2H_BattBulkSOC_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_P_V2H_EVMaxPwrLim' incorporates:
     *  Constant: '<S69>/ConstantValue21'
     *  Gain: '<S91>/Gain'
     */
    (void)Rte_Write_VeVTHR_P_V2H_EVMaxPwrLim_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_Pct_V2H_ResrvBattSts' incorporates:
     *  Constant: '<S69>/ConstantValue22'
     *  Gain: '<S80>/Gain'
     */
    (void)Rte_Write_VeVTHR_Pct_V2H_ResrvBattSts_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_b_V2H_MdSts' incorporates:
     *  Constant: '<S69>/ConstantValue23'
     *  Gain: '<S81>/Gain'
     */
    (void)Rte_Write_VeVTHR_b_V2H_MdSts_Value(false);

    /* Outport: '<Root>/VeVTHR_P_V2H_DschgCap' incorporates:
     *  Constant: '<S69>/ConstantValue1'
     *  Gain: '<S82>/Gain'
     */
    (void)Rte_Write_VeVTHR_P_V2H_DschgCap_Value(0.0F);

    /* Outport: '<Root>/VeVTHR_e_FOTA_ReadySts' incorporates:
     *  Constant: '<S78>/Constant'
     *  DataTypeConversion: '<S73>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTHR_e_FOTA_ReadySts_Value(CeVTHR_e_Eval_in_Progress);

    /* Outport: '<Root>/VeVTHR_e_DschrgSysSts' incorporates:
     *  Constant: '<S76>/Constant'
     *  DataTypeConversion: '<S74>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTHR_e_DschrgSysSts_Value(CeVTHR_e_Inactive);

    /* Outport: '<Root>/VeVTHR_b_V2H_Detected' incorporates:
     *  Constant: '<S69>/ConstantValue2'
     *  Gain: '<S86>/Gain'
     */
    (void)Rte_Write_VeVTHR_b_V2H_Detected_Value(false);

    /* Outport: '<Root>/VeVTHR_b_Rdy4shutdown' incorporates:
     *  Constant: '<S69>/ConstantValue3'
     *  Gain: '<S87>/Gain'
     */
    (void)Rte_Write_VeVTHR_b_Rdy4shutdown_Value(false);

    /* Outport: '<Root>/VeVTHR_b_V2H_Active' incorporates:
     *  Constant: '<S69>/ConstantValue4'
     *  Gain: '<S90>/Gain'
     */
    (void)Rte_Write_VeVTHR_b_V2H_Active_Value(false);

    /* End of Outputs for SubSystem: '<S67>/VTHO_NF' */
#endif

    /* End of Outputs for SubSystem: '<S2>/VariantSubsystem' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VTHR_CODE) VTHR_ac_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeVTHR_e_V2H_Sts' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeVTHR_e_V2H_Sts_Value(CeVTHR_e_V2H_Inactive);

    /* SystemInitialize for Outport: '<Root>/VeVTHR_e_FOTA_ReadySts' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    (void)Rte_Write_VeVTHR_e_FOTA_ReadySts_Value(CeVTHR_e_Eval_in_Progress);

    /* SystemInitialize for Outport: '<Root>/VeVTHR_e_DschrgSysSts' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeVTHR_e_DschrgSysSts_Value(CeVTHR_e_Inactive);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
