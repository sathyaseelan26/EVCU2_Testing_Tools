/*
 * File: MMMR_ac.c
 *
 * Code generated for Simulink model 'MMMR_ac'.
 *
 * Model version                  : 9.333
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:27:47 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MMMR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_MMMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(uint8, MMMR_VAR_INIT) KeMMMR_Cnt_MdVldtnCntrDec = 1U;/* Referenced by: '<S35>/Calib' */
static volatile CONST(uint8, MMMR_VAR_INIT) KeMMMR_Cnt_MdVldtnCntrInc = 3U;/* Referenced by: '<S36>/Calib' */
static volatile CONST(uint8, MMMR_VAR_INIT) KeMMMR_Cnt_MdVldtnCntrLim = 36U;/* Referenced by: '<S37>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_DisblMtrMdMonitor = 0;/* Referenced by: '<S38>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_DualMtr_IO_Ctrl_OvrdEnbl =
    0;                                 /* Referenced by: '<S99>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_InFieldMode_Allow = 1;/* Referenced by: '<S39>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_InFieldMode_OvrdEnbl = 0;/* Referenced by: '<S119>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_InFieldMode_OvrdVal = 0;/* Referenced by: '<S120>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_InService_OvrdEnbl = 0;/* Referenced by: '<S100>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_KeyRunCrank_Allow = 1;/* Referenced by: '<S40>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_KeySts_OvrdEnbl = 0;/* Referenced by: '<S85>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_Lv1_FltShtDwnCmndRet_OvrdEnbl = 0;/* Referenced by: '<S109>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_Lv1_FltShtDwnCmndRet_OvrdVal = 0;/* Referenced by: '<S110>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_Lv1_FltShtDwnCmnd_OvrdEnbl = 0;/* Referenced by: '<S111>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_Lv1_FltShtDwnCmnd_OvrdVal
    = 0;                               /* Referenced by: '<S112>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_Lv2BSW_KeyStsFA_OvrdEnbl =
    0;                                 /* Referenced by: '<S86>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_Lv2BSW_KeyStsFA_OvrdVal =
    0;                                 /* Referenced by: '<S87>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_Lv2_RunCrankNotActive_OvrdEnbl = 0;/* Referenced by: '<S17>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_Lv2_RunCrankNotActive_OvrdVal = 0;/* Referenced by: '<S18>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_Lv2_TransOutTrqCmdFlt_OvrdEnbl = 0;/* Referenced by: '<S114>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_Lv2_TransOutTrqCmdFlt_OvrdVal = 0;/* Referenced by: '<S117>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_MtrA_MdCmnd_OvrdEnbl = 0;/* Referenced by: '<S93>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_MtrA_TrqCntrl_Allow = 1;/* Referenced by: '<S41>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_MtrA_VltgCntrl_Allow = 1;/* Referenced by: '<S42>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_MtrB_MdCmnd_OvrdEnbl = 0;/* Referenced by: '<S94>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_MtrB_TrqCntrl_Allow = 1;/* Referenced by: '<S43>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_MtrB_VltgCntrl_Allow = 1;/* Referenced by: '<S44>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_ROL_Cmnd_OvrdEnbl = 0;/* Referenced by: '<S101>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_ROL_Cmnd_OvrdVal = 0;/* Referenced by: '<S102>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_RetShtDwn_Allow = 1;/* Referenced by: '<S45>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_SingleMtr_IO_Ctrl_OvrdEnbl = 0;/* Referenced by: '<S103>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_SysShtDwn_Allow = 1;/* Referenced by: '<S46>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT)
    KeMMMR_b_TestDevicePresent_OvrdEnbl = 0;/* Referenced by: '<S104>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_TestDevicePresent_OvrdVal
    = 0;                               /* Referenced by: '<S105>/Calib' */
static volatile CONST(boolean, MMMR_VAR_INIT) KeMMMR_b_TransFlt_Allow = 1;/* Referenced by: '<S47>/Calib' */
static volatile CONST(TeMMMR_e_IO_CntrlSt, MMMR_VAR_INIT)
    KeMMMR_e_DualMtr_IO_Ctrl_OvrdVal = CeMMMR_e_Lv2Return_ECU_Cntrl;/* Referenced by: '<S106>/Calib' */
static volatile CONST(TeLTIR_e_KeySts, MMMR_VAR_INIT) KeMMMR_e_KeySts_OvrdVal =
    CeLTIR_e_IGN_INIT;                 /* Referenced by: '<S88>/Calib' */
static volatile CONST(TeHTDR_e_SwitchMd, MMMR_VAR_INIT)
    KeMMMR_e_MtrA_MdCmnd_OvrdVal = CeHTDR_e_DsblNoSwitch;/* Referenced by: '<S95>/Calib' */
static volatile CONST(TeHTDR_e_SwitchMd, MMMR_VAR_INIT)
    KeMMMR_e_MtrB_MdCmnd_OvrdVal = CeHTDR_e_DsblNoSwitch;/* Referenced by: '<S96>/Calib' */
static volatile CONST(TeMMMR_e_IO_CntrlSt, MMMR_VAR_INIT)
    KeMMMR_e_SingleMtr_IO_Ctrl_OvrdVal = CeMMMR_e_Lv2Return_ECU_Cntrl;/* Referenced by: '<S107>/Calib' */
static volatile CONST(float32, MMMR_VAR_INIT) KeMMMR_t_FltShtDwnCmndRet = 50.0F;/* Referenced by: '<S48>/Calib' */
static volatile CONST(float32, MMMR_VAR_INIT)
    KeMMMR_t_Lv2_RunCrankNotActive_TurnOnDly = 0.1F;/* Referenced by: '<S19>/Calib' */
static volatile CONST(float32, MMMR_VAR_INIT) KeMMMR_t_ShutDwnDelay = 0.85F;/* Referenced by: '<S49>/Calib' */
static volatile CONST(float32, MMMR_VAR_INIT) KeMMMR_t_dT = 0.025F;/* Referenced by:
                                                                    * '<S20>/Calib'
                                                                    * '<S50>/Calib'
                                                                    */

#define STOP_SEC_CALIB_UNSPECIFIED_MMMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, MMMR_VAR_INIT) VeMMMC_b_Lv2_CAN_KeyInCrank;/* '<S10>/Comparison2' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMC_b_Lv2_KeyInRunCrank;/* '<S10>/Logical1' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMC_b_Lv2_RunCrankNotActiveBeforeDly;/* '<S11>/Switch2' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMC_b_Lv2_RunCrankNotActiveBeforeOvrd;/* '<S11>/Switch1' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_FltShtDwnCmndRetDly;/* '<S54>/AND' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrA_InFieldViolation;/* '<S26>/Logical13' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrA_InSpeedCntrl;/* '<S26>/Comparison8' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrA_InTorqueCntrl;/* '<S26>/Comparison2' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrA_InVoltageCntrl;/* '<S26>/Comparison3' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrA_TrqCntrl_Allowed;/* '<S26>/Logical1' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrA_VltgCntrl_Allowed;/* '<S26>/Logical2' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrB_InFieldViolation;/* '<S26>/Logical14' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrB_InSpeedCntrl;/* '<S26>/Comparison7' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrB_InTorqueCntrl;/* '<S26>/Comparison1' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrB_InVoltageCntrl;/* '<S26>/Comparison4' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrB_TrqCntrl_Allowed;/* '<S26>/Logical3' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrB_VltgCntrl_Allowed;/* '<S26>/Logical4' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrMd_DBC_Fault_Reset;/* '<S26>/Logical16' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrMd_InViolation;/* '<S26>/Logical15' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_MtrMd_OffViolation;/* '<S26>/Logical12' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_RunCrankNotActive;/* '<S26>/Logical6' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_ShutDwnBeforeDly;/* '<S26>/Logical5' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMD_b_Lv2_ShutDwnDly;/* '<S55>/AND' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv1_FltShtDownCmnd;/* '<S81>/Switch' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv1_FltShtDownCmndRet;/* '<S81>/Switch1' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv1_InFieldMode;/* '<S83>/Switch' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv1_ROL_Cmnd;/* '<S80>/Switch3' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_CAN_KeyStsFA;/* '<S78>/Switch' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_DVC_DualMtr_IO_Cntrl;/* '<S80>/Comparison5' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_DVC_Mtr_IO_Cntrl;/* '<S80>/Logical3' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_DVC_SingleMtr_IO_Cntrl;/* '<S80>/Comparison6' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_DVC_TestDevicePresent;/* '<S80>/Switch' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_InServiceMode;/* '<S80>/Logical4' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_ResetMtrMdDiagCntrl;/* '<S80>/Logical2' */
static VAR(boolean, MMMR_VAR_INIT) VeMMMI_b_Lv2_TransOutTrqCmndFA;/* '<S82>/Merge' */
static VAR(TeMMMR_e_IO_CntrlSt, MMMR_VAR_INIT) VeMMMI_e_Lv2_DVC_DualMtr_IO_Cntrl;/* '<S80>/Switch1' */
static VAR(TeMMMR_e_IO_CntrlSt, MMMR_VAR_INIT)
    VeMMMI_e_Lv2_DVC_SingleMtr_IO_Cntrl;/* '<S80>/Switch2' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_MMMR
#include "MemMap.h"

CONST(ConstB_MMMR_ac_T, MMMR_VAR_INIT) MMMR_ac_ConstB =
{
    CeLTIR_e_IGN_INIT,                 /* '<S124>/Constant' */
    CeHTDR_e_DsblNoSwitch,             /* '<S122>/Constant' */
    CeHTDR_e_DsblNoSwitch,             /* '<S123>/Constant' */
    CeDFIB_e_Init,                     /* '<S125>/Constant' */
    CeDFIB_e_Init                      /* '<S126>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_MMMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

VAR(B_MMMR_ac_T, MMMR_VAR_INIT) MMMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

VAR(DW_MMMR_ac_T, MMMR_VAR_INIT) MMMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

static FUNC(void, MMMR_CODE_LOCAL) MMMR_ac_Monitor_Motor_Mode(void);

/* Output and update for atomic system: '<S4>/Monitor_Motor_Mode' */
static FUNC(void, MMMR_CODE_LOCAL) MMMR_ac_Monitor_Motor_Mode(void)
{
    uint8 rtb_Inc_Cntr;
    uint8 tmpRead;
    boolean VeMMMR_b_Lv2_MtrMdVldtnFailing_tmp;
    boolean rtb_AND;
    boolean rtb_Compare;

    /* Inport: '<Root>/VeDMAB_y_StatusByte_PIM_ContMod' */
    (void)Rte_Read_VeDMAB_y_StatusByte_PIM_ContMod_Value(&tmpRead);

    /* RelationalOperator: '<S26>/Comparison1' incorporates:
     *  Constant: '<S31>/Constant'
     */
    VeMMMD_b_Lv2_MtrB_InTorqueCntrl = (((uint32)
        MMMR_ac_B.VeMMMR_e_Lv1_MtrB_ModeCmnd) == CeHTDR_e_TorqCntrl);

    /* RelationalOperator: '<S26>/Comparison2' incorporates:
     *  Constant: '<S29>/Constant'
     */
    VeMMMD_b_Lv2_MtrA_InTorqueCntrl = (((uint32)
        MMMR_ac_B.VeMMMR_e_Lv1_MtrA_ModeCmnd) == CeHTDR_e_TorqCntrl);

    /* RelationalOperator: '<S26>/Comparison3' incorporates:
     *  Constant: '<S28>/Constant'
     */
    VeMMMD_b_Lv2_MtrA_InVoltageCntrl = (((uint32)
        MMMR_ac_B.VeMMMR_e_Lv1_MtrA_ModeCmnd) == CeHTDR_e_VoltageControl);

    /* RelationalOperator: '<S26>/Comparison4' incorporates:
     *  Constant: '<S32>/Constant'
     */
    VeMMMD_b_Lv2_MtrB_InVoltageCntrl = (((uint32)
        MMMR_ac_B.VeMMMR_e_Lv1_MtrB_ModeCmnd) == CeHTDR_e_VoltageControl);

    /* RelationalOperator: '<S26>/Comparison7' incorporates:
     *  Constant: '<S33>/Constant'
     */
    VeMMMD_b_Lv2_MtrB_InSpeedCntrl = (((uint32)
        MMMR_ac_B.VeMMMR_e_Lv1_MtrB_ModeCmnd) == CeHTDR_e_SpeedCntrl);

    /* RelationalOperator: '<S26>/Comparison8' incorporates:
     *  Constant: '<S30>/Constant'
     */
    VeMMMD_b_Lv2_MtrA_InSpeedCntrl = (((uint32)
        MMMR_ac_B.VeMMMR_e_Lv1_MtrA_ModeCmnd) == CeHTDR_e_SpeedCntrl);

    /* Logic: '<S26>/Logical1' incorporates:
     *  Constant: '<S41>/Calib'
     */
    VeMMMD_b_Lv2_MtrA_TrqCntrl_Allowed = ((VeMMMD_b_Lv2_MtrA_InTorqueCntrl) &&
        (KeMMMR_b_MtrA_TrqCntrl_Allow));

    /* Logic: '<S26>/Logical2' incorporates:
     *  Constant: '<S42>/Calib'
     */
    VeMMMD_b_Lv2_MtrA_VltgCntrl_Allowed = ((VeMMMD_b_Lv2_MtrA_InVoltageCntrl) &&
        (KeMMMR_b_MtrA_VltgCntrl_Allow));

    /* Logic: '<S26>/Logical3' incorporates:
     *  Constant: '<S43>/Calib'
     */
    VeMMMD_b_Lv2_MtrB_TrqCntrl_Allowed = ((VeMMMD_b_Lv2_MtrB_InTorqueCntrl) &&
        (KeMMMR_b_MtrB_TrqCntrl_Allow));

    /* Logic: '<S26>/Logical4' incorporates:
     *  Constant: '<S44>/Calib'
     */
    VeMMMD_b_Lv2_MtrB_VltgCntrl_Allowed = ((VeMMMD_b_Lv2_MtrB_InVoltageCntrl) &&
        (KeMMMR_b_MtrB_VltgCntrl_Allow));

    /* Logic: '<S26>/Logical10' */
    MMMR_ac_B.VeMMMR_b_Lv2_MtrMdMntrSet = ((((VeMMMD_b_Lv2_MtrA_TrqCntrl_Allowed)
        || (VeMMMD_b_Lv2_MtrA_VltgCntrl_Allowed)) ||
        (VeMMMD_b_Lv2_MtrB_TrqCntrl_Allowed)) ||
        (VeMMMD_b_Lv2_MtrB_VltgCntrl_Allowed));

    /* Logic: '<S26>/Logical7' incorporates:
     *  Constant: '<S47>/Calib'
     */
    MMMR_ac_B.VeMMMR_b_Lv2_TransOutTrqCmndFlt = ((VeMMMI_b_Lv2_TransOutTrqCmndFA)
        && (KeMMMR_b_TransFlt_Allow));

    /* Outputs for Atomic SubSystem: '<S26>/LV2_Turn_On_Delay_Time' */
    /* Switch: '<S54>/Switch1' incorporates:
     *  Logic: '<S54>/OR'
     *  Logic: '<S54>/OR1'
     *  Logic: '<S65>/AND1'
     *  Logic: '<S65>/OR2'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    if ((!VeMMMI_b_Lv1_FltShtDownCmndRet) || ((VeMMMI_b_Lv1_FltShtDownCmndRet) &&
         (!MMMR_ac_DW.VeMMMR_b_Lv2Lv1FltShtDwnCmndRet_Delay_pr)))
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S54>/Constant Value1'
         */
        MMMR_ac_DW.VeMMMR_t_Lv2Lv1FltShtDwnCmndRet_Delay_pr = 0.0F;
    }
    else
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S48>/Calib'
         *  Constant: '<S50>/Calib'
         *  MinMax: '<S54>/Minimum'
         *  Sum: '<S54>/Summation'
         *  UnitDelay: '<S54>/Unit Delay1'
         */
        MMMR_ac_DW.VeMMMR_t_Lv2Lv1FltShtDwnCmndRet_Delay_pr = fminf
            (KeMMMR_t_FltShtDwnCmndRet, KeMMMR_t_dT +
             MMMR_ac_DW.VeMMMR_t_Lv2Lv1FltShtDwnCmndRet_Delay_pr);
    }

    /* End of Switch: '<S54>/Switch1' */

    /* Logic: '<S54>/AND' incorporates:
     *  Constant: '<S48>/Calib'
     *  RelationalOperator: '<S54>/Greater Than'
     */
    VeMMMD_b_Lv2_FltShtDwnCmndRetDly = ((VeMMMI_b_Lv1_FltShtDownCmndRet) &&
        (MMMR_ac_DW.VeMMMR_t_Lv2Lv1FltShtDwnCmndRet_Delay_pr >=
         KeMMMR_t_FltShtDwnCmndRet));

    /* Update for UnitDelay: '<S65>/Unit Delay' */
    MMMR_ac_DW.VeMMMR_b_Lv2Lv1FltShtDwnCmndRet_Delay_pr =
        VeMMMI_b_Lv1_FltShtDownCmndRet;

    /* End of Outputs for SubSystem: '<S26>/LV2_Turn_On_Delay_Time' */

    /* Logic: '<S26>/Logical8' incorporates:
     *  Constant: '<S45>/Calib'
     */
    MMMR_ac_B.VeMMMR_b_Lv2_FltShtDwnCmndRet = ((VeMMMD_b_Lv2_FltShtDwnCmndRetDly)
        && (KeMMMR_b_RetShtDwn_Allow));

    /* Logic: '<S26>/Logical9' incorporates:
     *  Constant: '<S46>/Calib'
     */
    MMMR_ac_B.VeMMMR_b_Lv2_FltShtDwnCmnd = ((VeMMMI_b_Lv1_FltShtDownCmnd) &&
        (KeMMMR_b_SysShtDwn_Allow));

    /* Logic: '<S26>/Logical5' */
    VeMMMD_b_Lv2_ShutDwnBeforeDly = (((MMMR_ac_B.VeMMMR_b_Lv2_TransOutTrqCmndFlt)
        || (MMMR_ac_B.VeMMMR_b_Lv2_FltShtDwnCmndRet)) ||
        (MMMR_ac_B.VeMMMR_b_Lv2_FltShtDwnCmnd));

    /* Outputs for Atomic SubSystem: '<S26>/LV2_Turn_On_Delay_Time1' */
    /* Switch: '<S55>/Switch1' incorporates:
     *  Logic: '<S55>/OR'
     *  Logic: '<S55>/OR1'
     *  Logic: '<S66>/AND1'
     *  Logic: '<S66>/OR2'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    if ((!VeMMMD_b_Lv2_ShutDwnBeforeDly) || ((VeMMMD_b_Lv2_ShutDwnBeforeDly) &&
            (!MMMR_ac_DW.VeMMMR_b_ShutDwnDelay_prev)))
    {
        /* Switch: '<S55>/Switch1' incorporates:
         *  Constant: '<S55>/Constant Value1'
         */
        MMMR_ac_DW.VeMMMR_t_ShutDwnDelay_prev = 0.0F;
    }
    else
    {
        /* Switch: '<S55>/Switch1' incorporates:
         *  Constant: '<S49>/Calib'
         *  Constant: '<S50>/Calib'
         *  MinMax: '<S55>/Minimum'
         *  Sum: '<S55>/Summation'
         *  UnitDelay: '<S55>/Unit Delay1'
         */
        MMMR_ac_DW.VeMMMR_t_ShutDwnDelay_prev = fminf(KeMMMR_t_ShutDwnDelay,
            KeMMMR_t_dT + MMMR_ac_DW.VeMMMR_t_ShutDwnDelay_prev);
    }

    /* End of Switch: '<S55>/Switch1' */

    /* Logic: '<S55>/AND' incorporates:
     *  Constant: '<S49>/Calib'
     *  RelationalOperator: '<S55>/Greater Than'
     */
    VeMMMD_b_Lv2_ShutDwnDly = ((VeMMMD_b_Lv2_ShutDwnBeforeDly) &&
        (MMMR_ac_DW.VeMMMR_t_ShutDwnDelay_prev >= KeMMMR_t_ShutDwnDelay));

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    MMMR_ac_DW.VeMMMR_b_ShutDwnDelay_prev = VeMMMD_b_Lv2_ShutDwnBeforeDly;

    /* End of Outputs for SubSystem: '<S26>/LV2_Turn_On_Delay_Time1' */

    /* Logic: '<S26>/Logical6' incorporates:
     *  Constant: '<S40>/Calib'
     */
    VeMMMD_b_Lv2_RunCrankNotActive = ((MMMR_ac_B.AND_o) &&
        (KeMMMR_b_KeyRunCrank_Allow));

    /* Logic: '<S26>/Logical11' */
    MMMR_ac_B.VeMMMR_b_Lv2_MtrMdNotAllwdSet = ((VeMMMD_b_Lv2_ShutDwnDly) ||
        (VeMMMD_b_Lv2_RunCrankNotActive));

    /* Logic: '<S26>/Logical12' */
    VeMMMD_b_Lv2_MtrMd_OffViolation = ((MMMR_ac_B.VeMMMR_b_Lv2_MtrMdMntrSet) &&
        (MMMR_ac_B.VeMMMR_b_Lv2_MtrMdNotAllwdSet));

    /* Logic: '<S26>/Logical13' incorporates:
     *  Constant: '<S39>/Calib'
     */
    VeMMMD_b_Lv2_MtrA_InFieldViolation = (((VeMMMD_b_Lv2_MtrA_InSpeedCntrl) &&
        (KeMMMR_b_InFieldMode_Allow)) && (VeMMMI_b_Lv1_InFieldMode));

    /* Logic: '<S26>/Logical14' incorporates:
     *  Constant: '<S39>/Calib'
     */
    VeMMMD_b_Lv2_MtrB_InFieldViolation = (((VeMMMI_b_Lv1_InFieldMode) &&
        (KeMMMR_b_InFieldMode_Allow)) && (VeMMMD_b_Lv2_MtrB_InSpeedCntrl));

    /* Logic: '<S26>/Logical15' */
    VeMMMD_b_Lv2_MtrMd_InViolation = (((VeMMMD_b_Lv2_MtrMd_OffViolation) ||
        (VeMMMD_b_Lv2_MtrA_InFieldViolation)) ||
        (VeMMMD_b_Lv2_MtrB_InFieldViolation));

    /* Logic: '<S26>/Logical16' incorporates:
     *  Constant: '<S38>/Calib'
     *  Logic: '<S52>/AND1'
     *  Logic: '<S52>/OR2'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    VeMMMD_b_Lv2_MtrMd_DBC_Fault_Reset = (((KeMMMR_b_DisblMtrMdMonitor) ||
        (VeMMMI_b_Lv2_ResetMtrMdDiagCntrl)) ||
        ((MMMR_ac_B.VeMMMR_b_Lv2_CAN_KeyInRun) &&
         (!MMMR_ac_DW.VeMMMD_b_KeySts_RsngEdg_prev)));

    /* Logic: '<S26>/Logical17' incorporates:
     *  Logic: '<S53>/NOT'
     */
    VeMMMR_b_Lv2_MtrMdVldtnFailing_tmp = !VeMMMD_b_Lv2_MtrMd_DBC_Fault_Reset;

    /* Logic: '<S26>/Logical18' incorporates:
     *  Logic: '<S26>/Logical17'
     */
    MMMR_ac_B.VeMMMR_b_Lv2_MtrMdVldtnFailing = ((VeMMMD_b_Lv2_MtrMd_InViolation)
        && VeMMMR_b_Lv2_MtrMdVldtnFailing_tmp);

    /* Switch: '<S51>/dec_if_Ok_else_inc' incorporates:
     *  Constant: '<S35>/Calib'
     *  MinMax: '<S51>/FixPtMinax'
     *  UnitDelay: '<S51>/UnitDelay'
     */
    if (MMMR_ac_B.VeMMMR_b_Lv2_MtrMdVldtnFailing)
    {
        /* Sum: '<S51>/Inc_Cntr' incorporates:
         *  Constant: '<S36>/Calib'
         *  UnitDelay: '<S51>/UnitDelay'
         */
        rtb_Inc_Cntr = (uint8)(((uint32)MMMR_ac_DW.UnitDelay_DSTATE) + ((uint32)
                                KeMMMR_Cnt_MdVldtnCntrInc));

        /* Switch: '<S51>/Switch1' incorporates:
         *  RelationalOperator: '<S51>/Relational_Operator'
         *  UnitDelay: '<S51>/UnitDelay'
         */
        if (rtb_Inc_Cntr < MMMR_ac_DW.UnitDelay_DSTATE)
        {
            /* Switch: '<S51>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S51>/CounterMax'
             */
            rtb_Inc_Cntr = MAX_uint8_T;
        }

        /* End of Switch: '<S51>/Switch1' */
    }
    else
    {
        if (MMMR_ac_DW.UnitDelay_DSTATE <= KeMMMR_Cnt_MdVldtnCntrDec)
        {
            /* MinMax: '<S51>/FixPtMinax' incorporates:
             *  Constant: '<S35>/Calib'
             */
            MMMR_ac_DW.UnitDelay_DSTATE = KeMMMR_Cnt_MdVldtnCntrDec;
        }

        /* Switch: '<S51>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S35>/Calib'
         *  Sum: '<S51>/Dec_Cntr'
         */
        rtb_Inc_Cntr = (uint8)(MMMR_ac_DW.UnitDelay_DSTATE -
                               KeMMMR_Cnt_MdVldtnCntrDec);
    }

    /* End of Switch: '<S51>/dec_if_Ok_else_inc' */

    /* RelationalOperator: '<S62>/Compare' incorporates:
     *  Constant: '<S62>/Constant'
     *  S-Function (sfix_bitop): '<S51>/Bit6'
     */
    rtb_Compare = ((((uint32)tmpRead) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S51>/EdgeFalling' */
    /* Logic: '<S58>/AND' incorporates:
     *  Logic: '<S58>/OR1'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    rtb_AND = ((!rtb_Compare) && (MMMR_ac_DW.UnitDelay_DSTATE_j));

    /* Update for UnitDelay: '<S58>/Unit Delay' */
    MMMR_ac_DW.UnitDelay_DSTATE_j = rtb_Compare;

    /* End of Outputs for SubSystem: '<S51>/EdgeFalling' */

    /* Logic: '<S51>/passDBCparam2' */
    MMMR_ac_B.passDBCparam2 = ((VeMMMD_b_Lv2_MtrMd_DBC_Fault_Reset) || rtb_AND);

    /* Switch: '<S51>/Switch2' incorporates:
     *  Switch: '<S51>/Switch3'
     *  Switch: '<S57>/Switch1'
     */
    if (MMMR_ac_B.passDBCparam2)
    {
        /* MinMax: '<S51>/FixPtMinax' incorporates:
         *  Constant: '<S51>/ResetZero'
         *  UnitDelay: '<S51>/UnitDelay'
         */
        MMMR_ac_DW.UnitDelay_DSTATE = 0U;

        /* Switch: '<S51>/Switch3' incorporates:
         *  Constant: '<S51>/ResetZero1'
         */
        MMMR_ac_DW.UnitDelay1_DSTATE = false;

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S60>/Constant'
         */
        MMMR_ac_B.Switch1 = CeDFIB_e_Init;
    }
    else
    {
        /* MinMax: '<S51>/FixPtMinax' incorporates:
         *  UnitDelay: '<S51>/UnitDelay'
         */
        MMMR_ac_DW.UnitDelay_DSTATE = rtb_Inc_Cntr;

        /* Switch: '<S51>/Switch3' incorporates:
         *  Constant: '<S37>/Calib'
         *  Logic: '<S51>/Cntr_fail'
         *  RelationalOperator: '<S51>/Enough_counts_to_Fail'
         *  UnitDelay: '<S51>/UnitDelay1'
         */
        MMMR_ac_DW.UnitDelay1_DSTATE = ((rtb_Inc_Cntr >=
            KeMMMR_Cnt_MdVldtnCntrLim) || (MMMR_ac_DW.UnitDelay1_DSTATE));

        /* Switch: '<S57>/Switch2' incorporates:
         *  Constant: '<S63>/Constant'
         *  RelationalOperator: '<S63>/Compare'
         *  Switch: '<S57>/Switch3'
         *  UnitDelay: '<S51>/UnitDelay'
         */
        if (MMMR_ac_DW.UnitDelay1_DSTATE)
        {
            /* Switch: '<S57>/Switch1' incorporates:
             *  Constant: '<S59>/Constant'
             *  Switch: '<S57>/Switch2'
             */
            MMMR_ac_B.Switch1 = CeDFIB_e_Fail;
        }
        else if (((sint32)MMMR_ac_DW.UnitDelay_DSTATE) == 0)
        {
            /* Switch: '<S57>/Switch3' incorporates:
             *  Constant: '<S61>/Constant'
             *  Switch: '<S57>/Switch1'
             */
            MMMR_ac_B.Switch1 = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S57>/Switch1' incorporates:
             *  Switch: '<S57>/Switch3'
             *  UnitDelay: '<S57>/UnitDelay'
             */
            MMMR_ac_B.Switch1 = (TeDFIB_e_FaultDebounceStatus)
                MMMR_ac_DW.UnitDelay_DSTATE_h;
        }

        /* End of Switch: '<S57>/Switch2' */
    }

    /* End of Switch: '<S51>/Switch2' */

    /* Logic: '<S53>/OR1' incorporates:
     *  Logic: '<S53>/OR'
     *  UnitDelay: '<S53>/Unit Delay1'
     */
    MMMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev = ((MMMR_ac_DW.UnitDelay1_DSTATE)
        || (VeMMMR_b_Lv2_MtrMdVldtnFailing_tmp &&
            (MMMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev)));

    /* Update for UnitDelay: '<S52>/Unit Delay' */
    MMMR_ac_DW.VeMMMD_b_KeySts_RsngEdg_prev =
        MMMR_ac_B.VeMMMR_b_Lv2_CAN_KeyInRun;

    /* Update for UnitDelay: '<S57>/UnitDelay' incorporates:
     *  DataTypeConversion: '<S57>/UNIT8'
     *  Switch: '<S57>/Switch1'
     */
    MMMR_ac_DW.UnitDelay_DSTATE_h = (uint8)MMMR_ac_B.Switch1;
}

/* Model step function for TID1 */
FUNC(void, MMMR_CODE) MMMR_MedTED(void) /* Explicit Task: MedTED */
{
    TeLTIR_e_KeySts VeMMMR_e_Lv2_CAN_KeySts;
    boolean rtb_TmpSignalConversionAtHWIO_b_Lv2IgnSw;
    boolean rtb_TmpSignalConversionAtLTIR_b_Lv2KeySt;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;

    /* Inport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt' */
    (void)Rte_Read_VeSTMR_b_TransOutTrqCmdFlt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSTMR_b_OutTrq_MinLimFail' */
    (void)Rte_Read_VeSTMR_b_OutTrq_MinLimFail_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSTMR_b_OutTrq_MaxLimFail' */
    (void)Rte_Read_VeSTMR_b_OutTrq_MaxLimFail_Value(&tmpRead_3);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnCmndRet' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnCmndRet_Value
        ((&(VeMMMI_b_Lv1_FltShtDownCmndRet)));

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnCmnd_Value((&(VeMMMI_b_Lv1_FltShtDownCmnd)));

    /* Inport: '<Root>/VeSCMR_e_SingleMtr_IO_Ctrl' */
    (void)Rte_Read_VeSCMR_e_SingleMtr_IO_Ctrl_Value
        ((&(VeMMMI_e_Lv2_DVC_SingleMtr_IO_Cntrl)));

    /* Inport: '<Root>/VeSCMR_e_DualMtr_IO_Ctrl' */
    (void)Rte_Read_VeSCMR_e_DualMtr_IO_Ctrl_Value
        ((&(VeMMMI_e_Lv2_DVC_DualMtr_IO_Cntrl)));

    /* Inport: '<Root>/VeSCMR_b_Lv2TestDevicePresent' */
    (void)Rte_Read_VeSCMR_b_Lv2TestDevicePresent_Value
        ((&(VeMMMI_b_Lv2_DVC_TestDevicePresent)));

    /* Inport: '<Root>/VeRTMR_b_EnaReslvrOfsLrnRtn' */
    (void)Rte_Read_VeRTMR_b_EnaReslvrOfsLrnRtn_Value((&(VeMMMI_b_Lv1_ROL_Cmnd)));

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value((&(VeMMMI_b_Lv1_InFieldMode)));

    /* Inport: '<Root>/VeLTIR_e_Lv2MtrA_MdCmnd' */
    (void)Rte_Read_VeLTIR_e_Lv2MtrA_MdCmnd_Value
        (&MMMR_ac_B.VeMMMR_e_Lv1_MtrA_ModeCmnd);

    /* Inport: '<Root>/VeLTIR_e_Lv2KeySts' */
    (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value(&VeMMMR_e_Lv2_CAN_KeySts);

    /* Inport: '<Root>/VeHTDR_e_MtrB_MdCmnd' */
    (void)Rte_Read_VeHTDR_e_MtrB_MdCmnd_Value
        (&MMMR_ac_B.VeMMMR_e_Lv1_MtrB_ModeCmnd);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_0);

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/MMMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/LTIR_b_Lv2KeySts_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value
        (&rtb_TmpSignalConversionAtLTIR_b_Lv2KeySt);

    /* SignalConversion generated from: '<S1>/HWIO_b_Lv2IgnSwitch' incorporates:
     *  Inport: '<Root>/VeHWIO_b_Lv2IgnSwitch'
     */
    (void)Rte_Read_VeHWIO_b_Lv2IgnSwitch_Value
        (&rtb_TmpSignalConversionAtHWIO_b_Lv2IgnSw);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MMMR_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S5>/MMMR_FastTEF_StartCheckpoint' */
    Rte_Call_MMMR_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Process_Input_Task'
     */
    /* Switch: '<S78>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     */
    if (KeMMMR_b_Lv2BSW_KeyStsFA_OvrdEnbl)
    {
        /* Switch: '<S78>/Switch' incorporates:
         *  Constant: '<S87>/Calib'
         */
        VeMMMI_b_Lv2_CAN_KeyStsFA = KeMMMR_b_Lv2BSW_KeyStsFA_OvrdVal;
    }
    else
    {
        /* Switch: '<S78>/Switch' */
        VeMMMI_b_Lv2_CAN_KeyStsFA = rtb_TmpSignalConversionAtLTIR_b_Lv2KeySt;
    }

    /* End of Switch: '<S78>/Switch' */

    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S85>/Calib'
     */
    if (KeMMMR_b_KeySts_OvrdEnbl)
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S88>/Calib'
         */
        VeMMMR_e_Lv2_CAN_KeySts = KeMMMR_e_KeySts_OvrdVal;
    }

    /* End of Switch: '<S78>/Switch1' */

    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S99>/Calib'
     */
    if (KeMMMR_b_DualMtr_IO_Ctrl_OvrdEnbl)
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Constant: '<S106>/Calib'
         *  Inport: '<Root>/VeSCMR_e_DualMtr_IO_Ctrl'
         */
        VeMMMI_e_Lv2_DVC_DualMtr_IO_Cntrl = KeMMMR_e_DualMtr_IO_Ctrl_OvrdVal;
    }

    /* End of Switch: '<S80>/Switch1' */

    /* RelationalOperator: '<S80>/Comparison5' incorporates:
     *  Constant: '<S97>/Constant'
     *  Switch: '<S80>/Switch1'
     */
    VeMMMI_b_Lv2_DVC_DualMtr_IO_Cntrl = (((uint32)
        VeMMMI_e_Lv2_DVC_DualMtr_IO_Cntrl) == CeMMMR_e_Lv2ShortTermAdjust);

    /* Switch: '<S80>/Switch2' incorporates:
     *  Constant: '<S103>/Calib'
     */
    if (KeMMMR_b_SingleMtr_IO_Ctrl_OvrdEnbl)
    {
        /* Switch: '<S80>/Switch2' incorporates:
         *  Constant: '<S107>/Calib'
         *  Inport: '<Root>/VeSCMR_e_SingleMtr_IO_Ctrl'
         */
        VeMMMI_e_Lv2_DVC_SingleMtr_IO_Cntrl = KeMMMR_e_SingleMtr_IO_Ctrl_OvrdVal;
    }

    /* End of Switch: '<S80>/Switch2' */

    /* RelationalOperator: '<S80>/Comparison6' incorporates:
     *  Constant: '<S97>/Constant'
     *  Switch: '<S80>/Switch2'
     */
    VeMMMI_b_Lv2_DVC_SingleMtr_IO_Cntrl = (CeMMMR_e_Lv2ShortTermAdjust ==
        ((uint32)VeMMMI_e_Lv2_DVC_SingleMtr_IO_Cntrl));

    /* Switch: '<S80>/Switch' incorporates:
     *  Constant: '<S104>/Calib'
     */
    if (KeMMMR_b_TestDevicePresent_OvrdEnbl)
    {
        /* Switch: '<S80>/Switch' incorporates:
         *  Constant: '<S105>/Calib'
         *  Inport: '<Root>/VeSCMR_b_Lv2TestDevicePresent'
         */
        VeMMMI_b_Lv2_DVC_TestDevicePresent = KeMMMR_b_TestDevicePresent_OvrdVal;
    }

    /* End of Switch: '<S80>/Switch' */

    /* Logic: '<S80>/Logical3' */
    VeMMMI_b_Lv2_DVC_Mtr_IO_Cntrl = ((VeMMMI_b_Lv2_DVC_DualMtr_IO_Cntrl) ||
        (VeMMMI_b_Lv2_DVC_SingleMtr_IO_Cntrl));

    /* Logic: '<S80>/Logical4' */
    VeMMMI_b_Lv2_InServiceMode = ((VeMMMI_b_Lv2_DVC_TestDevicePresent) &&
        (VeMMMI_b_Lv2_DVC_Mtr_IO_Cntrl));

    /* Switch: '<S80>/Switch3' incorporates:
     *  Constant: '<S101>/Calib'
     */
    if (KeMMMR_b_ROL_Cmnd_OvrdEnbl)
    {
        /* Switch: '<S80>/Switch3' incorporates:
         *  Constant: '<S102>/Calib'
         *  Inport: '<Root>/VeRTMR_b_EnaReslvrOfsLrnRtn'
         */
        VeMMMI_b_Lv1_ROL_Cmnd = KeMMMR_b_ROL_Cmnd_OvrdVal;
    }

    /* End of Switch: '<S80>/Switch3' */

    /* Logic: '<S80>/Logical2' incorporates:
     *  Constant: '<S100>/Calib'
     *  Logic: '<S80>/Logical1'
     */
    VeMMMI_b_Lv2_ResetMtrMdDiagCntrl = (((((tmpRead || tmpRead_0) || tmpRead_1) ||
        (VeMMMI_b_Lv1_ROL_Cmnd)) || rtb_TmpSignalConversionAtLTIR_b_Lv2KeySt) ||
        ((VeMMMI_b_Lv2_InServiceMode) && (KeMMMR_b_InService_OvrdEnbl)));

    /* Switch: '<S79>/Switch' incorporates:
     *  Constant: '<S93>/Calib'
     *  Constant: '<S95>/Calib'
     *  Inport: '<Root>/VeLTIR_e_Lv2MtrA_MdCmnd'
     */
    if (KeMMMR_b_MtrA_MdCmnd_OvrdEnbl)
    {
        MMMR_ac_B.VeMMMR_e_Lv1_MtrA_ModeCmnd = KeMMMR_e_MtrA_MdCmnd_OvrdVal;
    }

    /* End of Switch: '<S79>/Switch' */

    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S94>/Calib'
     *  Constant: '<S96>/Calib'
     *  Inport: '<Root>/VeHTDR_e_MtrB_MdCmnd'
     */
    if (KeMMMR_b_MtrB_MdCmnd_OvrdEnbl)
    {
        MMMR_ac_B.VeMMMR_e_Lv1_MtrB_ModeCmnd = KeMMMR_e_MtrB_MdCmnd_OvrdVal;
    }

    /* End of Switch: '<S79>/Switch1' */

    /* Switch: '<S83>/Switch' incorporates:
     *  Constant: '<S119>/Calib'
     *  Constant: '<S120>/Calib'
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    if (KeMMMR_b_InFieldMode_OvrdEnbl)
    {
        VeMMMI_b_Lv1_InFieldMode = KeMMMR_b_InFieldMode_OvrdVal;
    }

    /* End of Switch: '<S83>/Switch' */

    /* Switch: '<S81>/Switch' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S112>/Calib'
     *  Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd'
     */
    if (KeMMMR_b_Lv1_FltShtDwnCmnd_OvrdEnbl)
    {
        VeMMMI_b_Lv1_FltShtDownCmnd = KeMMMR_b_Lv1_FltShtDwnCmnd_OvrdVal;
    }

    /* End of Switch: '<S81>/Switch' */

    /* Switch: '<S81>/Switch1' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S110>/Calib'
     *  Inport: '<Root>/VeSRAR_b_FltShtDwnCmndRet'
     */
    if (KeMMMR_b_Lv1_FltShtDwnCmndRet_OvrdEnbl)
    {
        VeMMMI_b_Lv1_FltShtDownCmndRet = KeMMMR_b_Lv1_FltShtDwnCmndRet_OvrdVal;
    }

    /* End of Switch: '<S81>/Switch1' */

    /* If: '<S82>/If' incorporates:
     *  Constant: '<S114>/Calib'
     */
    if (KeMMMR_b_Lv2_TransOutTrqCmdFlt_OvrdEnbl)
    {
        /* Outputs for IfAction SubSystem: '<S82>/WhlTrqMntr_TransOutTrqFlt' incorporates:
         *  ActionPort: '<S116>/Action_Port'
         */
        /* SignalConversion generated from: '<S116>/Lv2_TransOutTrqCmdFlt_OvrdVal' incorporates:
         *  Constant: '<S117>/Calib'
         */
        VeMMMI_b_Lv2_TransOutTrqCmndFA = KeMMMR_b_Lv2_TransOutTrqCmdFlt_OvrdVal;

        /* End of Outputs for SubSystem: '<S82>/WhlTrqMntr_TransOutTrqFlt' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S82>/OtherMntr_TransOutTrqFlt' incorporates:
         *  ActionPort: '<S115>/Action_Port'
         */
        /* Logic: '<S115>/Logical1' */
        VeMMMI_b_Lv2_TransOutTrqCmndFA = ((tmpRead_3 || tmpRead_4) || tmpRead_5);

        /* End of Outputs for SubSystem: '<S82>/OtherMntr_TransOutTrqFlt' */
    }

    /* End of If: '<S82>/If' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DtrmnRunCrnkNotAcv'
     */
    /* RelationalOperator: '<S10>/Comparison1' incorporates:
     *  Constant: '<S12>/Constant'
     */
    MMMR_ac_B.VeMMMR_b_Lv2_CAN_KeyInRun = (((uint32)VeMMMR_e_Lv2_CAN_KeySts) ==
        CeLTIR_e_IGN_RUN);

    /* RelationalOperator: '<S10>/Comparison2' incorporates:
     *  Constant: '<S13>/Constant'
     */
    VeMMMC_b_Lv2_CAN_KeyInCrank = (((uint32)VeMMMR_e_Lv2_CAN_KeySts) ==
        CeLTIR_e_IGN_START);

    /* Logic: '<S10>/Logical1' */
    VeMMMC_b_Lv2_KeyInRunCrank = ((MMMR_ac_B.VeMMMR_b_Lv2_CAN_KeyInRun) ||
        (VeMMMC_b_Lv2_CAN_KeyInCrank));

    /* Switch: '<S11>/Switch1' */
    if (VeMMMI_b_Lv2_CAN_KeyStsFA)
    {
        /* Switch: '<S11>/Switch1' incorporates:
         *  Logic: '<S11>/Logical5'
         */
        VeMMMC_b_Lv2_RunCrankNotActiveBeforeOvrd =
            !rtb_TmpSignalConversionAtHWIO_b_Lv2IgnSw;
    }
    else
    {
        /* Switch: '<S11>/Switch1' incorporates:
         *  Logic: '<S11>/Logical6'
         */
        VeMMMC_b_Lv2_RunCrankNotActiveBeforeOvrd = !VeMMMC_b_Lv2_KeyInRunCrank;
    }

    /* End of Switch: '<S11>/Switch1' */

    /* Switch: '<S11>/Switch2' incorporates:
     *  Constant: '<S17>/Calib'
     */
    if (KeMMMR_b_Lv2_RunCrankNotActive_OvrdEnbl)
    {
        /* Switch: '<S11>/Switch2' incorporates:
         *  Constant: '<S18>/Calib'
         */
        VeMMMC_b_Lv2_RunCrankNotActiveBeforeDly =
            KeMMMR_b_Lv2_RunCrankNotActive_OvrdVal;
    }
    else
    {
        /* Switch: '<S11>/Switch2' */
        VeMMMC_b_Lv2_RunCrankNotActiveBeforeDly =
            VeMMMC_b_Lv2_RunCrankNotActiveBeforeOvrd;
    }

    /* End of Switch: '<S11>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S11>/LV2_Turn_On_Delay_Time' */
    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S19>/Calib'
     *  Constant: '<S20>/Calib'
     *  Constant: '<S21>/Constant Value1'
     *  Logic: '<S21>/OR'
     *  Logic: '<S21>/OR1'
     *  Logic: '<S24>/AND1'
     *  Logic: '<S24>/OR2'
     *  MinMax: '<S21>/Minimum'
     *  Sum: '<S21>/Summation'
     *  UnitDelay: '<S21>/Unit Delay1'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    if ((!VeMMMC_b_Lv2_RunCrankNotActiveBeforeDly) ||
            ((VeMMMC_b_Lv2_RunCrankNotActiveBeforeDly) &&
             (!MMMR_ac_DW.VeMMMR_b_Lv2RunCrank_NotActive_TurnOnDel)))
    {
        MMMR_ac_DW.VeMMMR_t_Lv2RunCrank_NotActive_TurnOnDel = 0.0F;
    }
    else
    {
        MMMR_ac_DW.VeMMMR_t_Lv2RunCrank_NotActive_TurnOnDel = fminf
            (KeMMMR_t_Lv2_RunCrankNotActive_TurnOnDly, KeMMMR_t_dT +
             MMMR_ac_DW.VeMMMR_t_Lv2RunCrank_NotActive_TurnOnDel);
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Logic: '<S21>/AND' incorporates:
     *  Constant: '<S19>/Calib'
     *  RelationalOperator: '<S21>/Greater Than'
     *  UnitDelay: '<S21>/Unit Delay1'
     */
    MMMR_ac_B.AND_o = ((VeMMMC_b_Lv2_RunCrankNotActiveBeforeDly) &&
                       (MMMR_ac_DW.VeMMMR_t_Lv2RunCrank_NotActive_TurnOnDel >=
                        KeMMMR_t_Lv2_RunCrankNotActive_TurnOnDly));

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    MMMR_ac_DW.VeMMMR_b_Lv2RunCrank_NotActive_TurnOnDel =
        VeMMMC_b_Lv2_RunCrankNotActiveBeforeDly;

    /* End of Outputs for SubSystem: '<S11>/LV2_Turn_On_Delay_Time' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Dtrmn_MtrMdFailure'
     */
    /* Outputs for Atomic SubSystem: '<S4>/Monitor_Motor_Mode' */
    MMMR_ac_Monitor_Motor_Mode();

    /* End of Outputs for SubSystem: '<S4>/Monitor_Motor_Mode' */

    /* SwitchCase: '<S68>/Determine_P1444_Status' incorporates:
     *  Switch: '<S57>/Switch1'
     */
    switch (MMMR_ac_B.Switch1)
    {
      case CeDFIB_e_Init:
        /* Outputs for IfAction SubSystem: '<S68>/Event_PIM_ContMod_ReportTestInit' incorporates:
         *  ActionPort: '<S71>/ActionPort'
         */
        /* DataStoreWrite: '<S71>/VeMMMR_e_FaultSts_PIM_ContMod' incorporates:
         *  Constant: '<S74>/Constant'
         */
        MMMR_ac_DW.VeMMMR_e_FaultSts_PIM_ContMod = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S68>/Event_PIM_ContMod_ReportTestInit' */
        break;

      case CeDFIB_e_Fail:
        /* Outputs for IfAction SubSystem: '<S68>/Event_PIM_ContMod_ReportTestFailed' incorporates:
         *  ActionPort: '<S70>/ActionPort'
         */
        /* DataStoreWrite: '<S70>/VeMMMR_e_FaultSts_PIM_ContMod' incorporates:
         *  Constant: '<S73>/Constant'
         */
        MMMR_ac_DW.VeMMMR_e_FaultSts_PIM_ContMod = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S68>/Event_PIM_ContMod_ReportTestFailed' */
        break;

      case CeDFIB_e_Pass:
        /* Outputs for IfAction SubSystem: '<S68>/Event_PIM_ContMod_ReportTestPassed' incorporates:
         *  ActionPort: '<S72>/ActionPort'
         */
        /* DataStoreWrite: '<S72>/VeMMMR_e_FaultSts_PIM_ContMod' incorporates:
         *  Constant: '<S75>/Constant'
         */
        MMMR_ac_DW.VeMMMR_e_FaultSts_PIM_ContMod = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S68>/Event_PIM_ContMod_ReportTestPassed' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S68>/Determine_P1444_Status' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSRAR_b_HybFeedback_ECM' */
    (void)Rte_Read_VeSRAR_b_HybFeedback_ECM_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/MMMR_MedTEB'
     */
    /* Outport: '<Root>/VeMMMR_e_Lv2MtrA_ModeCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1_MtrA_ModeCmnd'
     *  Switch: '<S79>/Switch'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrA_ModeCmnd_Value
        (MMMR_ac_B.VeMMMR_e_Lv1_MtrA_ModeCmnd);

    /* Outport: '<Root>/VeMMMR_e_Lv2MtrB_ModeCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1_MtrB_ModeCmnd'
     *  Switch: '<S79>/Switch1'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrB_ModeCmnd_Value
        (MMMR_ac_B.VeMMMR_e_Lv1_MtrB_ModeCmnd);

    /* Outport: '<Root>/VeMMMR_b_Lv2CAN_KeyInRun' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_CAN_KeyInRun'
     */
    (void)Rte_Write_VeMMMR_b_Lv2CAN_KeyInRun_Value
        (MMMR_ac_B.VeMMMR_b_Lv2_CAN_KeyInRun);

    /* Outport: '<Root>/VeMMMR_e_Lv2CAN_KeySts' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_CAN_KeySts'
     *  Switch: '<S78>/Switch1'
     */
    (void)Rte_Write_VeMMMR_e_Lv2CAN_KeySts_Value(VeMMMR_e_Lv2_CAN_KeySts);

    /* Outport: '<Root>/VeMMMR_b_Lv2FltShtDwnCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FltShtDwnCmnd'
     */
    (void)Rte_Write_VeMMMR_b_Lv2FltShtDwnCmnd_Value
        (MMMR_ac_B.VeMMMR_b_Lv2_FltShtDwnCmnd);

    /* Outport: '<Root>/VeMMMR_b_Lv2FltShtDwnCmndRet' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FltShtDwnCmndRet'
     */
    (void)Rte_Write_VeMMMR_b_Lv2FltShtDwnCmndRet_Value
        (MMMR_ac_B.VeMMMR_b_Lv2_FltShtDwnCmndRet);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DtrmnRunCrnkNotAcv'
     */
    /* Outport: '<Root>/VeMMMR_b_Lv2HW_IgnSwitch' incorporates:
     *  Logic: '<S16>/AND'
     *  SignalConversion generated from: '<S1>/Lv2_HW_IgnSwitch'
     */
    (void)Rte_Write_VeMMMR_b_Lv2HW_IgnSwitch_Value
        (rtb_TmpSignalConversionAtHWIO_b_Lv2IgnSw);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Prcss_MMMO_20ms'
     */
    /* Outport: '<Root>/VeMMMR_b_Lv2HybFeedbackECM' incorporates:
     *  Logic: '<S76>/AND'
     *  SignalConversion generated from: '<S1>/Lv2_HybFeedbackECM'
     */
    (void)Rte_Write_VeMMMR_b_Lv2HybFeedbackECM_Value(tmpRead_2);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMdMntrSet' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrMdMntrSet'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMdMntrSet_Value
        (MMMR_ac_B.VeMMMR_b_Lv2_MtrMdMntrSet);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMdNotAllwdSet' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrMdNotAllwdSet'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMdNotAllwdSet_Value
        (MMMR_ac_B.VeMMMR_b_Lv2_MtrMdNotAllwdSet);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMdVldtnFailing' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrMdVldtnFailing'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMdVldtnFailing_Value
        (MMMR_ac_B.VeMMMR_b_Lv2_MtrMdVldtnFailing);

    /* Outport: '<Root>/VeMMMR_Cnt_Lv2MtrMd_DBC_Fail_Counter' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrMd_DBC_Fail_Counter'
     *  UnitDelay: '<S51>/UnitDelay'
     */
    (void)Rte_Write_VeMMMR_Cnt_Lv2MtrMd_DBC_Fail_Counter_Value
        (MMMR_ac_DW.UnitDelay_DSTATE);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMd_DBC_Fault' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrMd_DBC_Fault'
     *  UnitDelay: '<S53>/Unit Delay1'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMd_DBC_Fault_Value
        (MMMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMd_DBC_Reset' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrMd_DBC_Reset'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMd_DBC_Reset_Value(MMMR_ac_B.passDBCparam2);

    /* Outport: '<Root>/VeMMMR_e_Lv2MtrMd_DBC_Status' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrMd_DBC_Status'
     *  Switch: '<S57>/Switch1'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrMd_DBC_Status_Value(MMMR_ac_B.Switch1);

    /* Outport: '<Root>/VeMMMR_b_Lv2RunCrankNotActive' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RunCrankNotActive'
     */
    (void)Rte_Write_VeMMMR_b_Lv2RunCrankNotActive_Value(MMMR_ac_B.AND_o);

    /* Outport: '<Root>/VeMMMR_b_Lv2TransOutTrqCmndFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_TransOutTrqCmndFlt'
     */
    (void)Rte_Write_VeMMMR_b_Lv2TransOutTrqCmndFlt_Value
        (MMMR_ac_B.VeMMMR_b_Lv2_TransOutTrqCmndFlt);

    /* Outport: '<Root>/VeMMMR_e_FaultSts_PIM_ContMod' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeMMMR_e_FaultSts_PIM_ContMod'
     */
    (void)Rte_Write_VeMMMR_e_FaultSts_PIM_ContMod_Value
        (MMMR_ac_DW.VeMMMR_e_FaultSts_PIM_ContMod);

    /* FunctionCaller: '<S6>/MMMR_FastTEF_StopCheckpoint' */
    Rte_Call_MMMR_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, MMMR_CODE) MMMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/MMMR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrAMdCmnd_Out_Init' incorporates:
     *  Constant: '<S122>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrAMdCmnd_O =
        MMMR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrBMdCmnd_Out_Init' incorporates:
     *  Constant: '<S123>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrBMdCmnd_O =
        MMMR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S121>/VeMMMR_e_Lv2CAN_KeySts_Out_Init' incorporates:
     *  Constant: '<S124>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2CAN_KeySts_O = MMMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2RunCrankNotActive_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2RunCrankNotA = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2CAN_KeyInRun_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2CAN_KeyInRun = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2HW_IgnSwitch_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2HW_IgnSwitch = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2TransOutTrqCmndFlt_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2TransOutTrqC = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2FltShtDwnCmndRet_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2FltShtDwnCmn = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2FltShtDwnCmnd_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2FltShtDwnC_l = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2MtrMdMntrSet_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdMntrSet = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2MtrMdNotAllwdSet_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdNotAllw = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2MtrMdVldtnFailing_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdVldtnFa = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2MtrMdVldtnFlt_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdVldtnFl = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_Cnt_Lv2MtrMdVldtnFlt_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_Cnt_Lv2MtrMdVldtn = 0U;

    /* SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrMd_DBC_Status_Out_Init' incorporates:
     *  Constant: '<S125>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrMd_DBC_St =
        MMMR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2MtrMd_DBC_Reset_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMd_DBC_Re = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_b_Lv2HybFeedbackECM_Out_Init' */
    MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2HybFeedbackE = false;

    /* SignalConversion generated from: '<S121>/VeMMMR_e_Lv2FaultSts_PIM_ContMod_Out_Init' incorporates:
     *  Constant: '<S126>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2FaultSts_PIM =
        MMMR_ac_ConstB.Constant_e;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeMMMR_Cnt_Lv2MtrMd_DBC_Fail_Counter' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_Cnt_Lv2MtrMdVldtnFlt_Out_Init'
     */
    (void)Rte_Write_VeMMMR_Cnt_Lv2MtrMd_DBC_Fail_Counter_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_Cnt_Lv2MtrMdVldtn);

    /* Outport: '<Root>/VeMMMR_b_Lv2CAN_KeyInRun' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2CAN_KeyInRun_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2CAN_KeyInRun_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2CAN_KeyInRun);

    /* Outport: '<Root>/VeMMMR_b_Lv2FltShtDwnCmndRet' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2FltShtDwnCmndRet_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2FltShtDwnCmndRet_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2FltShtDwnCmn);

    /* Outport: '<Root>/VeMMMR_b_Lv2FltShtDwnCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2FltShtDwnCmnd_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2FltShtDwnCmnd_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2FltShtDwnC_l);

    /* Outport: '<Root>/VeMMMR_b_Lv2HW_IgnSwitch' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2HW_IgnSwitch_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2HW_IgnSwitch_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2HW_IgnSwitch);

    /* Outport: '<Root>/VeMMMR_b_Lv2HybFeedbackECM' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2HybFeedbackECM_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2HybFeedbackECM_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2HybFeedbackE);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMdMntrSet' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2MtrMdMntrSet_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMdMntrSet_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdMntrSet);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMdNotAllwdSet' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2MtrMdNotAllwdSet_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMdNotAllwdSet_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdNotAllw);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMdVldtnFailing' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2MtrMdVldtnFailing_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMdVldtnFailing_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdVldtnFa);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMd_DBC_Fault' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2MtrMdVldtnFlt_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMd_DBC_Fault_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMdVldtnFl);

    /* Outport: '<Root>/VeMMMR_b_Lv2MtrMd_DBC_Reset' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2MtrMd_DBC_Reset_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2MtrMd_DBC_Reset_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2MtrMd_DBC_Re);

    /* Outport: '<Root>/VeMMMR_b_Lv2RunCrankNotActive' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2RunCrankNotActive_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2RunCrankNotActive_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2RunCrankNotA);

    /* Outport: '<Root>/VeMMMR_b_Lv2TransOutTrqCmndFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeMMMR_b_Lv2TransOutTrqCmndFlt_Out_Init'
     */
    (void)Rte_Write_VeMMMR_b_Lv2TransOutTrqCmndFlt_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_b_Lv2TransOutTrqC);

    /* Outport: '<Root>/VeMMMR_e_Lv2CAN_KeySts' incorporates:
     *  SignalConversion generated from: '<S121>/VeMMMR_e_Lv2CAN_KeySts_Out_Init'
     *  SignalConversion generated from: '<S2>/VeMMMR_e_Lv2CAN_KeySts_Out_Init'
     */
    (void)Rte_Write_VeMMMR_e_Lv2CAN_KeySts_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2CAN_KeySts_O);

    /* Outport: '<Root>/VeMMMR_e_FaultSts_PIM_ContMod' incorporates:
     *  SignalConversion generated from: '<S121>/VeMMMR_e_Lv2FaultSts_PIM_ContMod_Out_Init'
     *  SignalConversion generated from: '<S2>/VeMMMR_e_Lv2FaultSts_PIM_ContMod_Out_Init'
     */
    (void)Rte_Write_VeMMMR_e_FaultSts_PIM_ContMod_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2FaultSts_PIM);

    /* Outport: '<Root>/VeMMMR_e_Lv2MtrA_ModeCmnd' incorporates:
     *  SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrAMdCmnd_Out_Init'
     *  SignalConversion generated from: '<S2>/VeMMMR_e_Lv2MtrAMdCmnd_Out_Init'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrA_ModeCmnd_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrAMdCmnd_O);

    /* Outport: '<Root>/VeMMMR_e_Lv2MtrB_ModeCmnd' incorporates:
     *  SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrBMdCmnd_Out_Init'
     *  SignalConversion generated from: '<S2>/VeMMMR_e_Lv2MtrBMdCmnd_Out_Init'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrB_ModeCmnd_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrBMdCmnd_O);

    /* Outport: '<Root>/VeMMMR_e_Lv2MtrMd_DBC_Status' incorporates:
     *  SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrMd_DBC_Status_Out_Init'
     *  SignalConversion generated from: '<S2>/VeMMMR_e_Lv2MtrMd_DBC_Status_Out_Init'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrMd_DBC_Status_Value
        (MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrMd_DBC_St);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, MMMR_CODE) MMMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2CAN_KeySts_O = CeLTIR_e_IGN_LK;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/MMMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrAMdCmnd_Out_Init' incorporates:
     *  Constant: '<S122>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrAMdCmnd_O =
        MMMR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrBMdCmnd_Out_Init' incorporates:
     *  Constant: '<S123>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrBMdCmnd_O =
        MMMR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S121>/VeMMMR_e_Lv2CAN_KeySts_Out_Init' incorporates:
     *  Constant: '<S124>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2CAN_KeySts_O = MMMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S121>/VeMMMR_e_Lv2MtrMd_DBC_Status_Out_Init' incorporates:
     *  Constant: '<S125>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2MtrMd_DBC_St =
        MMMR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S121>/VeMMMR_e_Lv2FaultSts_PIM_ContMod_Out_Init' incorporates:
     *  Constant: '<S126>/Constant'
     */
    MMMR_ac_B.OutportBufferForVeMMMR_e_Lv2FaultSts_PIM =
        MMMR_ac_ConstB.Constant_e;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeMMMR_e_Lv2MtrA_ModeCmnd' incorporates:
     *  Merge: '<Root>/Merge_Outport_11'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrA_ModeCmnd_Value(CeHTDR_e_DsblNoSwitch);

    /* SystemInitialize for Outport: '<Root>/VeMMMR_e_Lv2MtrB_ModeCmnd' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrB_ModeCmnd_Value(CeHTDR_e_DsblNoSwitch);

    /* SystemInitialize for Outport: '<Root>/VeMMMR_e_Lv2CAN_KeySts' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VeMMMR_e_Lv2CAN_KeySts_Value(CeLTIR_e_IGN_LK);

    /* SystemInitialize for Outport: '<Root>/VeMMMR_e_Lv2MtrMd_DBC_Status' incorporates:
     *  Merge: '<Root>/Merge_Outport_9'
     */
    (void)Rte_Write_VeMMMR_e_Lv2MtrMd_DBC_Status_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeMMMR_e_FaultSts_PIM_ContMod' incorporates:
     *  Merge: '<Root>/M_VeMMMR_e_FaultSts_PIM_ContMod'
     */
    (void)Rte_Write_VeMMMR_e_FaultSts_PIM_ContMod_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
