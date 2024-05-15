/*
 * File: APSB_ac.c
 *
 * Code generated for Simulink model 'APSB_ac'.
 *
 * Model version                  : 1.57
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:05:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "APSB_ac.h"
#include "look1_iflf_binlca_19a.h"

/* Named constants for Chart: '<S16>/AntiSpkFil' */
#define APSB_ac_IN_FILTERING           ((uint8)1U)
#define APSB_ac_IN_NORMAL              ((uint8)2U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_APSB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(uint8, APSB_VAR_INIT) KeAPSB_Cnt_AccPed1PwrSnsrSpikeThd =
    2U;                                /* Referenced by: '<S44>/Calib' */
static volatile CONST(uint8, APSB_VAR_INIT) KeAPSB_Cnt_AccPed2PwrSnsrSpikeThd =
    2U;                                /* Referenced by: '<S80>/Calib' */
static volatile CONST(uint8, APSB_VAR_INIT) KeAPSB_Cnt_AccPed2SnsrSpikeThd = 2U;/* Referenced by: '<S62>/Calib' */
static volatile CONST(uint8, APSB_VAR_INIT) KeAPSB_Cnt_AccPedSnsrSpikeThd = 2U;/* Referenced by: '<S26>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed1PwrSnsrByp = 5.0F;
                         /* Referenced by: '<S39>/KeAPSB_U_AccPed1PwrSnsrByp' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed1PwrSnsrRcvry =
    2.5F;              /* Referenced by: '<S41>/KeAPSB_U_AccPed1PwrSnsrRcvry' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed1PwrSnsrSpikeThd =
    1.0F;                              /* Referenced by: '<S45>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed1PwrVoltInit = 5.0F;/* Referenced by: '<S8>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2PwrInit = 5.0F;/* Referenced by: '<S10>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2PwrSnsrByp = 5.0F;
                         /* Referenced by: '<S75>/KeAPSB_U_AccPed2PwrSnsrByp' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2PwrSnsrRcvry =
    2.5F;              /* Referenced by: '<S77>/KeAPSB_U_AccPed2PwrSnsrRcvry' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2PwrSnsrSpikeThd =
    1.0F;                              /* Referenced by: '<S81>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2SnsrByp = 5.0F;
                            /* Referenced by: '<S57>/KeAPSB_U_AccPed2SnsrByp' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2SnsrRcvry = 2.5F;
                          /* Referenced by: '<S59>/KeAPSB_U_AccPed2SnsrRcvry' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2SnsrSpikeThd =
    1.0F;                              /* Referenced by: '<S63>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPed2VoltInit = 5.0F;/* Referenced by: '<S9>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPedSnsrByp = 5.0F;
                             /* Referenced by: '<S21>/KeAPSB_U_AccPedSnsrByp' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPedSnsrRcvry = 2.5F;
                           /* Referenced by: '<S23>/KeAPSB_U_AccPedSnsrRcvry' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPedSnsrSpikeThd = 1.0F;/* Referenced by: '<S27>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_U_AccPedVoltInit = 5.0F;/* Referenced by: '<S7>/Calib' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPed1PwrSnsrBypEnbl = 0;
                     /* Referenced by: '<S40>/KeAPSB_b_AccPed1PwrSnsrBypEnbl' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPed1PwrSnsrRcvryEnbl =
    0;             /* Referenced by: '<S42>/KeAPSB_b_AccPed1PwrSnsrRcvryEnbl' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPed2PwrSnsrBypEnbl = 0;
                     /* Referenced by: '<S76>/KeAPSB_b_AccPed2PwrSnsrBypEnbl' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPed2PwrSnsrRcvryEnbl =
    0;             /* Referenced by: '<S78>/KeAPSB_b_AccPed2PwrSnsrRcvryEnbl' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPed2SnsrBypEnbl = 0;
                        /* Referenced by: '<S58>/KeAPSB_b_AccPed2SnsrBypEnbl' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPed2SnsrRcvryEnbl = 0;
                      /* Referenced by: '<S60>/KeAPSB_b_AccPed2SnsrRcvryEnbl' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPedSnsrBypEnbl = 0;
                         /* Referenced by: '<S22>/KeAPSB_b_AccPedSnsrBypEnbl' */
static volatile CONST(boolean, APSB_VAR_INIT) KeAPSB_b_AccPedSnsrRcvryEnbl = 0;
                       /* Referenced by: '<S24>/KeAPSB_b_AccPedSnsrRcvryEnbl' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_k_AccPed1PwrSnsrFiltGx =
    1.0F;                              /* Referenced by: '<S46>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_k_AccPed2PwrSnsrFiltGx =
    1.0F;                              /* Referenced by: '<S82>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_k_AccPed2SnsrFiltGx = 1.0F;/* Referenced by: '<S64>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KeAPSB_k_AccPedSnsrFiltGx = 1.0F;/* Referenced by: '<S28>/Calib' */
static volatile CONST(float32, APSB_VAR_INIT) KtAPSB_U_AccPed1PwrSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S35>/Vector' */

static volatile CONST(float32, APSB_VAR_INIT) KtAPSB_U_AccPed2PwrSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S71>/Vector' */

static volatile CONST(float32, APSB_VAR_INIT) KtAPSB_U_AccPed2SnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S53>/Vector' */

static volatile CONST(float32, APSB_VAR_INIT) KtAPSB_U_AccPedSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

static volatile CONST(float32, APSB_VAR_INIT) KxAPSB_U_AccPed1PwrSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S35>/Vector' */

static volatile CONST(float32, APSB_VAR_INIT) KxAPSB_U_AccPed2PwrSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S71>/Vector' */

static volatile CONST(float32, APSB_VAR_INIT) KxAPSB_U_AccPed2SnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S53>/Vector' */

static volatile CONST(float32, APSB_VAR_INIT) KxAPSB_U_AccPedSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_APSB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPed1PwrSnsrVolt;/* '<S50>/Assignment_y' */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPed1PwrSnsrVoltRaw;/* '<S34>/AntiSpkFil' */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPed2PwrSnsrVolt;/* '<S86>/Assignment_y' */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPed2PwrSnsrVoltRaw;/* '<S70>/AntiSpkFil' */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPed2SnsrVolt;/* '<S68>/Assignment_y' */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPed2SnsrVoltRaw;/* '<S52>/AntiSpkFil' */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPedSnsrVolt;/* '<S32>/Assignment_y' */
static VAR(float32, APSB_VAR_INIT) VeAPSB_U_AccPedSnsrVoltRaw;/* '<S16>/AntiSpkFil' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

VAR(B_APSB_ac_T, APSB_VAR_INIT) APSB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

VAR(DW_APSB_ac_T, APSB_VAR_INIT) APSB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, APSB_CODE) APSB_FastTEF(void) /* Explicit Task: FastTEF */
{
    IDTRAdcInpResData tmpRead;
    IDTRAdcInpResData tmpRead_0;
    IDTRAdcInpResData tmpRead_1;
    IDTRAdcInpResData tmpRead_2;
    sint32 iU;
    float32 rtb_Vector[2];
    float32 rtb_Vector_g[2];
    float32 rtb_Vector_h[2];
    float32 rtb_Vector_pl[2];
    float32 rtb_Switch_p;
    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SignalConversion generated from: '<S2>/VeADFB_b_A2DFault' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value
        (&rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeADCR_U_AcceleratorPedalSense1_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_AcceleratorPedalSense1_VsADCR_e_CnvnRes(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* Chart: '<S16>/AntiSpkFil' incorporates:
     *  Constant: '<S26>/Calib'
     *  Constant: '<S27>/Calib'
     */
    if (((uint32)APSB_ac_DW.is_active_c2_APSB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/AntiSpkFil */
        APSB_ac_DW.is_active_c2_APSB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S25>:8' */
        APSB_ac_DW.is_c2_APSB_ac = APSB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S25>:37' */
        APSB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
        VeAPSB_U_AccPedSnsrVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((uint32)APSB_ac_DW.is_c2_APSB_ac) == APSB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S25>:38' */
        if (APSB_ac_B.Cnt_m >= ((float32)KeAPSB_Cnt_AccPedSnsrSpikeThd))
        {
            /* Transition: '<S25>:40' */
            APSB_ac_DW.is_c2_APSB_ac = APSB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S25>:37' */
            APSB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
            VeAPSB_U_AccPedSnsrVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            APSB_ac_B.Cnt_m++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S25>:37' */
        rtb_Switch_p = tmpRead.e_CnvnRes - APSB_ac_B.InputRaw0_p;
        if ((rtb_Switch_p > KeAPSB_U_AccPedSnsrSpikeThd) || (rtb_Switch_p <
                (-KeAPSB_U_AccPedSnsrSpikeThd)))
        {
            /* Transition: '<S25>:39' */
            APSB_ac_DW.is_c2_APSB_ac = APSB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S25>:38' */
            APSB_ac_B.Cnt_m = 0.0F;
        }
        else
        {
            VeAPSB_U_AccPedSnsrVoltRaw = tmpRead.e_CnvnRes;
            APSB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S16>/AntiSpkFil' */

    /* Switch: '<S31>/Switch' incorporates:
     *  Selector: '<S30>/Selector_R'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    if (APSB_ac_DW.UnitDelay_DSTATE)
    {
        /* Assignment: '<S32>/Assignment_y' incorporates:
         *  Switch: '<S72>/Switch'
         */
        VeAPSB_U_AccPedSnsrVolt = VeAPSB_U_AccPedSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S32>/Assignment_y' incorporates:
         *  Constant: '<S28>/Calib'
         *  Product: '<S31>/Product'
         *  Selector: '<S30>/Selector_u'
         *  Sum: '<S31>/Difference'
         *  Sum: '<S31>/Sum'
         *  Switch: '<S31>/Switch_E'
         *  Switch: '<S72>/Switch'
         *  UnitDelay: '<S32>/Unit_Delay_y'
         */
        VeAPSB_U_AccPedSnsrVolt = ((VeAPSB_U_AccPedSnsrVoltRaw -
            VeAPSB_U_AccPedSnsrVolt) * KeAPSB_k_AccPedSnsrFiltGx) +
            VeAPSB_U_AccPedSnsrVolt;
    }

    /* End of Switch: '<S31>/Switch' */

    /* Lookup_n-D: '<S17>/Vector' incorporates:
     *  SignalConversion generated from: '<S17>/Vector'
     */
    rtb_Vector[0] = VeAPSB_U_AccPedSnsrVoltRaw;
    rtb_Vector[1] = VeAPSB_U_AccPedSnsrVolt;

    /* Lookup_n-D: '<S17>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector[iU] = look1_iflf_binlca_19a(rtb_Vector[iU], ((const float32 *)
            &(KxAPSB_U_AccPedSnsrChartc[0])), ((const float32 *)
            &(KtAPSB_U_AccPedSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S17>/Vector' */

    /* Switch: '<S20>/Switch' incorporates:
     *  UnitDelay: '<S15>/VeAPSB_U_AccPedSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        APSB_ac_DW.VeAPSB_U_AccPedSnsrInit_DSTATE = rtb_Vector[1];
    }

    /* End of Switch: '<S20>/Switch' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S22>/KeAPSB_b_AccPedSnsrBypEnbl'
     *  Constant: '<S24>/KeAPSB_b_AccPedSnsrRcvryEnbl'
     *  Logic: '<S19>/Logical Operator'
     *  Switch: '<S19>/Switch'
     */
    if (KeAPSB_b_AccPedSnsrBypEnbl)
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S21>/KeAPSB_U_AccPedSnsrByp'
         */
        rtb_Switch_p = KeAPSB_U_AccPedSnsrByp;
    }
    else if ((KeAPSB_b_AccPedSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S23>/KeAPSB_U_AccPedSnsrRcvry'
         *  Switch: '<S72>/Switch'
         */
        rtb_Switch_p = KeAPSB_U_AccPedSnsrRcvry;
    }
    else
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Switch: '<S19>/Switch'
         *  UnitDelay: '<S15>/VeAPSB_U_AccPedSnsrInit'
         */
        rtb_Switch_p = APSB_ac_DW.VeAPSB_U_AccPedSnsrInit_DSTATE;
    }

    /* End of Switch: '<S18>/Switch' */

    /* FunctionCaller: '<S11>/Function Caller' */
    Rte_Call_PokeAPSR_U_RawPVS1_PokeAPSR_U_RawPVS1(rtb_Switch_p,
        rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Outport: '<Root>/VeAPSB_U_AccPedVolt' incorporates:
     *  SignalConversion: '<S11>/Signal Conversion'
     */
    (void)Rte_Write_VeAPSB_U_AccPedVolt_Value(rtb_Switch_p);

    /* Outport: '<Root>/VeAPSB_b_AccPedVoltFA' incorporates:
     *  SignalConversion: '<S11>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_b_AccPedVoltFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeADCR_U_Adc5vAuxPower_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Adc5vAuxPower_VsADCR_e_CnvnRes(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* Chart: '<S34>/AntiSpkFil' incorporates:
     *  Constant: '<S44>/Calib'
     *  Constant: '<S45>/Calib'
     */
    if (((uint32)APSB_ac_DW.is_active_c9_APSB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/AntiSpkFil */
        APSB_ac_DW.is_active_c9_APSB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S43>:8' */
        APSB_ac_DW.is_c9_APSB_ac = APSB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S43>:37' */
        APSB_ac_B.InputRaw0_he = tmpRead_1.e_CnvnRes;
        VeAPSB_U_AccPed1PwrSnsrVoltRaw = tmpRead_1.e_CnvnRes;
    }
    else if (((uint32)APSB_ac_DW.is_c9_APSB_ac) == APSB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S43>:38' */
        if (APSB_ac_B.Cnt_c >= ((float32)KeAPSB_Cnt_AccPed1PwrSnsrSpikeThd))
        {
            /* Transition: '<S43>:40' */
            APSB_ac_DW.is_c9_APSB_ac = APSB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S43>:37' */
            APSB_ac_B.InputRaw0_he = tmpRead_1.e_CnvnRes;
            VeAPSB_U_AccPed1PwrSnsrVoltRaw = tmpRead_1.e_CnvnRes;
        }
        else
        {
            APSB_ac_B.Cnt_c++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S43>:37' */
        rtb_Switch_p = tmpRead_1.e_CnvnRes - APSB_ac_B.InputRaw0_he;
        if ((rtb_Switch_p > KeAPSB_U_AccPed1PwrSnsrSpikeThd) || (rtb_Switch_p <
                (-KeAPSB_U_AccPed1PwrSnsrSpikeThd)))
        {
            /* Transition: '<S43>:39' */
            APSB_ac_DW.is_c9_APSB_ac = APSB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S43>:38' */
            APSB_ac_B.Cnt_c = 0.0F;
        }
        else
        {
            VeAPSB_U_AccPed1PwrSnsrVoltRaw = tmpRead_1.e_CnvnRes;
            APSB_ac_B.InputRaw0_he = tmpRead_1.e_CnvnRes;
        }
    }

    /* End of Chart: '<S34>/AntiSpkFil' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Selector: '<S48>/Selector_R'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    if (APSB_ac_DW.UnitDelay_DSTATE)
    {
        /* Assignment: '<S50>/Assignment_y' incorporates:
         *  Switch: '<S85>/Switch'
         */
        VeAPSB_U_AccPed1PwrSnsrVolt = VeAPSB_U_AccPed1PwrSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S50>/Assignment_y' incorporates:
         *  Constant: '<S46>/Calib'
         *  Product: '<S49>/Product'
         *  Selector: '<S48>/Selector_u'
         *  Sum: '<S49>/Difference'
         *  Sum: '<S49>/Sum'
         *  Switch: '<S49>/Switch_E'
         *  Switch: '<S85>/Switch'
         *  UnitDelay: '<S50>/Unit_Delay_y'
         */
        VeAPSB_U_AccPed1PwrSnsrVolt = ((VeAPSB_U_AccPed1PwrSnsrVoltRaw -
            VeAPSB_U_AccPed1PwrSnsrVolt) * KeAPSB_k_AccPed1PwrSnsrFiltGx) +
            VeAPSB_U_AccPed1PwrSnsrVolt;
    }

    /* End of Switch: '<S49>/Switch' */

    /* Lookup_n-D: '<S35>/Vector' incorporates:
     *  SignalConversion generated from: '<S35>/Vector'
     */
    rtb_Vector_h[0] = VeAPSB_U_AccPed1PwrSnsrVoltRaw;
    rtb_Vector_h[1] = VeAPSB_U_AccPed1PwrSnsrVolt;

    /* Lookup_n-D: '<S35>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_h[iU] = look1_iflf_binlca_19a(rtb_Vector_h[iU], ((const
            float32 *)&(KxAPSB_U_AccPed1PwrSnsrChartc[0])), ((const float32 *)
            &(KtAPSB_U_AccPed1PwrSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S35>/Vector' */

    /* Switch: '<S38>/Switch' incorporates:
     *  UnitDelay: '<S33>/VeAPSB_U_AccPed1PwrSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        APSB_ac_DW.VeAPSB_U_AccPed1PwrSnsrInit_DSTATE = rtb_Vector_h[1];
    }

    /* End of Switch: '<S38>/Switch' */

    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S40>/KeAPSB_b_AccPed1PwrSnsrBypEnbl'
     *  Constant: '<S42>/KeAPSB_b_AccPed1PwrSnsrRcvryEnbl'
     *  Logic: '<S37>/Logical Operator'
     *  Switch: '<S37>/Switch'
     */
    if (KeAPSB_b_AccPed1PwrSnsrBypEnbl)
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S39>/KeAPSB_U_AccPed1PwrSnsrByp'
         */
        rtb_Switch_p = KeAPSB_U_AccPed1PwrSnsrByp;
    }
    else if ((KeAPSB_b_AccPed1PwrSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Switch: '<S37>/Switch' incorporates:
         *  Constant: '<S41>/KeAPSB_U_AccPed1PwrSnsrRcvry'
         *  Switch: '<S72>/Switch'
         */
        rtb_Switch_p = KeAPSB_U_AccPed1PwrSnsrRcvry;
    }
    else
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Switch: '<S37>/Switch'
         *  UnitDelay: '<S33>/VeAPSB_U_AccPed1PwrSnsrInit'
         */
        rtb_Switch_p = APSB_ac_DW.VeAPSB_U_AccPed1PwrSnsrInit_DSTATE;
    }

    /* End of Switch: '<S36>/Switch' */

    /* FunctionCaller: '<S12>/Function Caller' */
    Rte_Call_PokeAPSR_U_RawOut5V_PokeAPSR_U_RawOut5V(rtb_Switch_p,
        rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Outport: '<Root>/VeAPSB_U_AccPed1PwrVolt' incorporates:
     *  SignalConversion: '<S12>/Signal Conversion'
     */
    (void)Rte_Write_VeAPSB_U_AccPed1PwrVolt_Value(rtb_Switch_p);

    /* Outport: '<Root>/VeAPSB_b_AccPed1PwrVoltFA' incorporates:
     *  SignalConversion: '<S12>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_b_AccPed1PwrVoltFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeADCR_U_AcceleratorPedalSense2_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_AcceleratorPedalSense2_VsADCR_e_CnvnRes(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* Chart: '<S52>/AntiSpkFil' incorporates:
     *  Constant: '<S62>/Calib'
     *  Constant: '<S63>/Calib'
     */
    if (((uint32)APSB_ac_DW.is_active_c4_APSB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/AntiSpkFil */
        APSB_ac_DW.is_active_c4_APSB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S61>:8' */
        APSB_ac_DW.is_c4_APSB_ac = APSB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S61>:37' */
        APSB_ac_B.InputRaw0_h = tmpRead_0.e_CnvnRes;
        VeAPSB_U_AccPed2SnsrVoltRaw = tmpRead_0.e_CnvnRes;
    }
    else if (((uint32)APSB_ac_DW.is_c4_APSB_ac) == APSB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S61>:38' */
        if (APSB_ac_B.Cnt_j >= ((float32)KeAPSB_Cnt_AccPed2SnsrSpikeThd))
        {
            /* Transition: '<S61>:40' */
            APSB_ac_DW.is_c4_APSB_ac = APSB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S61>:37' */
            APSB_ac_B.InputRaw0_h = tmpRead_0.e_CnvnRes;
            VeAPSB_U_AccPed2SnsrVoltRaw = tmpRead_0.e_CnvnRes;
        }
        else
        {
            APSB_ac_B.Cnt_j++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S61>:37' */
        rtb_Switch_p = tmpRead_0.e_CnvnRes - APSB_ac_B.InputRaw0_h;
        if ((rtb_Switch_p > KeAPSB_U_AccPed2SnsrSpikeThd) || (rtb_Switch_p <
                (-KeAPSB_U_AccPed2SnsrSpikeThd)))
        {
            /* Transition: '<S61>:39' */
            APSB_ac_DW.is_c4_APSB_ac = APSB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S61>:38' */
            APSB_ac_B.Cnt_j = 0.0F;
        }
        else
        {
            VeAPSB_U_AccPed2SnsrVoltRaw = tmpRead_0.e_CnvnRes;
            APSB_ac_B.InputRaw0_h = tmpRead_0.e_CnvnRes;
        }
    }

    /* End of Chart: '<S52>/AntiSpkFil' */

    /* Switch: '<S67>/Switch' incorporates:
     *  Selector: '<S66>/Selector_R'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    if (APSB_ac_DW.UnitDelay_DSTATE)
    {
        /* Assignment: '<S68>/Assignment_y' incorporates:
         *  Switch: '<S85>/Switch'
         */
        VeAPSB_U_AccPed2SnsrVolt = VeAPSB_U_AccPed2SnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S68>/Assignment_y' incorporates:
         *  Constant: '<S64>/Calib'
         *  Product: '<S67>/Product'
         *  Selector: '<S66>/Selector_u'
         *  Sum: '<S67>/Difference'
         *  Sum: '<S67>/Sum'
         *  Switch: '<S67>/Switch_E'
         *  Switch: '<S85>/Switch'
         *  UnitDelay: '<S68>/Unit_Delay_y'
         */
        VeAPSB_U_AccPed2SnsrVolt = ((VeAPSB_U_AccPed2SnsrVoltRaw -
            VeAPSB_U_AccPed2SnsrVolt) * KeAPSB_k_AccPed2SnsrFiltGx) +
            VeAPSB_U_AccPed2SnsrVolt;
    }

    /* End of Switch: '<S67>/Switch' */

    /* Lookup_n-D: '<S53>/Vector' incorporates:
     *  SignalConversion generated from: '<S53>/Vector'
     */
    rtb_Vector_pl[0] = VeAPSB_U_AccPed2SnsrVoltRaw;
    rtb_Vector_pl[1] = VeAPSB_U_AccPed2SnsrVolt;

    /* Lookup_n-D: '<S53>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_pl[iU] = look1_iflf_binlca_19a(rtb_Vector_pl[iU], ((const
            float32 *)&(KxAPSB_U_AccPed2SnsrChartc[0])), ((const float32 *)
            &(KtAPSB_U_AccPed2SnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S53>/Vector' */

    /* Switch: '<S56>/Switch' incorporates:
     *  UnitDelay: '<S51>/VeAPSB_U_AccPed2SnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        APSB_ac_DW.VeAPSB_U_AccPed2SnsrInit_DSTATE = rtb_Vector_pl[1];
    }

    /* End of Switch: '<S56>/Switch' */

    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S58>/KeAPSB_b_AccPed2SnsrBypEnbl'
     *  Constant: '<S60>/KeAPSB_b_AccPed2SnsrRcvryEnbl'
     *  Logic: '<S55>/Logical Operator'
     *  Switch: '<S55>/Switch'
     */
    if (KeAPSB_b_AccPed2SnsrBypEnbl)
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S57>/KeAPSB_U_AccPed2SnsrByp'
         */
        rtb_Switch_p = KeAPSB_U_AccPed2SnsrByp;
    }
    else if ((KeAPSB_b_AccPed2SnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Switch: '<S55>/Switch' incorporates:
         *  Constant: '<S59>/KeAPSB_U_AccPed2SnsrRcvry'
         *  Switch: '<S72>/Switch'
         */
        rtb_Switch_p = KeAPSB_U_AccPed2SnsrRcvry;
    }
    else
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Switch: '<S55>/Switch'
         *  UnitDelay: '<S51>/VeAPSB_U_AccPed2SnsrInit'
         */
        rtb_Switch_p = APSB_ac_DW.VeAPSB_U_AccPed2SnsrInit_DSTATE;
    }

    /* End of Switch: '<S54>/Switch' */

    /* FunctionCaller: '<S13>/Function Caller' */
    Rte_Call_PokeAPSR_U_RawPVS2_PokeAPSR_U_RawPVS2(rtb_Switch_p,
        rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Outport: '<Root>/VeAPSB_U_AccPed2Volt' incorporates:
     *  SignalConversion: '<S13>/Signal Conversion'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2Volt_Value(rtb_Switch_p);

    /* Outport: '<Root>/VeAPSB_b_AccPed2VoltFA' incorporates:
     *  SignalConversion: '<S13>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_b_AccPed2VoltFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeADCR_U_Adc5vOutPower_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Adc5vOutPower_VsADCR_e_CnvnRes(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* Chart: '<S70>/AntiSpkFil' incorporates:
     *  Constant: '<S80>/Calib'
     *  Constant: '<S81>/Calib'
     */
    if (((uint32)APSB_ac_DW.is_active_c13_APSB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/AntiSpkFil */
        APSB_ac_DW.is_active_c13_APSB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S79>:8' */
        APSB_ac_DW.is_c13_APSB_ac = APSB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S79>:37' */
        APSB_ac_B.InputRaw0 = tmpRead_2.e_CnvnRes;
        VeAPSB_U_AccPed2PwrSnsrVoltRaw = tmpRead_2.e_CnvnRes;
    }
    else if (((uint32)APSB_ac_DW.is_c13_APSB_ac) == APSB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S79>:38' */
        if (APSB_ac_B.Cnt >= ((float32)KeAPSB_Cnt_AccPed2PwrSnsrSpikeThd))
        {
            /* Transition: '<S79>:40' */
            APSB_ac_DW.is_c13_APSB_ac = APSB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S79>:37' */
            APSB_ac_B.InputRaw0 = tmpRead_2.e_CnvnRes;
            VeAPSB_U_AccPed2PwrSnsrVoltRaw = tmpRead_2.e_CnvnRes;
        }
        else
        {
            APSB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S79>:37' */
        rtb_Switch_p = tmpRead_2.e_CnvnRes - APSB_ac_B.InputRaw0;
        if ((rtb_Switch_p > KeAPSB_U_AccPed2PwrSnsrSpikeThd) || (rtb_Switch_p <
                (-KeAPSB_U_AccPed2PwrSnsrSpikeThd)))
        {
            /* Transition: '<S79>:39' */
            APSB_ac_DW.is_c13_APSB_ac = APSB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S79>:38' */
            APSB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeAPSB_U_AccPed2PwrSnsrVoltRaw = tmpRead_2.e_CnvnRes;
            APSB_ac_B.InputRaw0 = tmpRead_2.e_CnvnRes;
        }
    }

    /* End of Chart: '<S70>/AntiSpkFil' */

    /* Switch: '<S85>/Switch' incorporates:
     *  Selector: '<S84>/Selector_R'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    if (APSB_ac_DW.UnitDelay_DSTATE)
    {
        /* Assignment: '<S86>/Assignment_y' incorporates:
         *  Switch: '<S85>/Switch'
         */
        VeAPSB_U_AccPed2PwrSnsrVolt = VeAPSB_U_AccPed2PwrSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S86>/Assignment_y' incorporates:
         *  Constant: '<S82>/Calib'
         *  Product: '<S85>/Product'
         *  Selector: '<S84>/Selector_u'
         *  Sum: '<S85>/Difference'
         *  Sum: '<S85>/Sum'
         *  Switch: '<S85>/Switch'
         *  Switch: '<S85>/Switch_E'
         *  UnitDelay: '<S86>/Unit_Delay_y'
         */
        VeAPSB_U_AccPed2PwrSnsrVolt = ((VeAPSB_U_AccPed2PwrSnsrVoltRaw -
            VeAPSB_U_AccPed2PwrSnsrVolt) * KeAPSB_k_AccPed2PwrSnsrFiltGx) +
            VeAPSB_U_AccPed2PwrSnsrVolt;
    }

    /* End of Switch: '<S85>/Switch' */

    /* Lookup_n-D: '<S71>/Vector' incorporates:
     *  SignalConversion generated from: '<S71>/Vector'
     */
    rtb_Vector_g[0] = VeAPSB_U_AccPed2PwrSnsrVoltRaw;
    rtb_Vector_g[1] = VeAPSB_U_AccPed2PwrSnsrVolt;

    /* Lookup_n-D: '<S71>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_g[iU] = look1_iflf_binlca_19a(rtb_Vector_g[iU], ((const
            float32 *)&(KxAPSB_U_AccPed2PwrSnsrChartc[0])), ((const float32 *)
            &(KtAPSB_U_AccPed2PwrSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S71>/Vector' */

    /* Switch: '<S74>/Switch' incorporates:
     *  UnitDelay: '<S69>/VeAPSB_U_AccPed2PwrSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        APSB_ac_DW.VeAPSB_U_AccPed2PwrSnsrInit_DSTATE = rtb_Vector_g[1];
    }

    /* End of Switch: '<S74>/Switch' */

    /* Switch: '<S72>/Switch' incorporates:
     *  Constant: '<S76>/KeAPSB_b_AccPed2PwrSnsrBypEnbl'
     *  Constant: '<S78>/KeAPSB_b_AccPed2PwrSnsrRcvryEnbl'
     *  Logic: '<S73>/Logical Operator'
     *  Switch: '<S73>/Switch'
     */
    if (KeAPSB_b_AccPed2PwrSnsrBypEnbl)
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S75>/KeAPSB_U_AccPed2PwrSnsrByp'
         */
        rtb_Switch_p = KeAPSB_U_AccPed2PwrSnsrByp;
    }
    else if ((KeAPSB_b_AccPed2PwrSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Switch: '<S73>/Switch' incorporates:
         *  Constant: '<S77>/KeAPSB_U_AccPed2PwrSnsrRcvry'
         *  Switch: '<S72>/Switch'
         */
        rtb_Switch_p = KeAPSB_U_AccPed2PwrSnsrRcvry;
    }
    else
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Switch: '<S73>/Switch'
         *  UnitDelay: '<S69>/VeAPSB_U_AccPed2PwrSnsrInit'
         */
        rtb_Switch_p = APSB_ac_DW.VeAPSB_U_AccPed2PwrSnsrInit_DSTATE;
    }

    /* End of Switch: '<S72>/Switch' */

    /* FunctionCaller: '<S14>/Function Caller' */
    Rte_Call_PokeAPSR_U_RawAux5V_PokeAPSR_U_RawAux5V(rtb_Switch_p,
        rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Outport: '<Root>/VeAPSB_U_AccPed2Pwr' incorporates:
     *  SignalConversion: '<S14>/Signal Conversion'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2Pwr_Value(rtb_Switch_p);

    /* Outport: '<Root>/VeAPSB_b_AccPed2PwrFA' incorporates:
     *  SignalConversion: '<S14>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_b_AccPed2PwrFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Outport: '<Root>/VeAPSB_U_AccPed1PwrVoltRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeAPSB_U_AccPed1PwrSnsrRaw'
     */
    (void)Rte_Write_VeAPSB_U_AccPed1PwrVoltRaw_Value(rtb_Vector_h[0]);

    /* Outport: '<Root>/VeAPSB_U_AccPed2PwrRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeAPSB_U_AccPed2PwrSnsrRaw'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2PwrRaw_Value(rtb_Vector_g[0]);

    /* Outport: '<Root>/VeAPSB_U_AccPed2VoltRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeAPSB_U_AccPed2SnsrRaw'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2VoltRaw_Value(rtb_Vector_pl[0]);

    /* Outport: '<Root>/VeAPSB_U_AccPedVoltRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeAPSB_U_AccPedSnsrRaw'
     */
    (void)Rte_Write_VeAPSB_U_AccPedVoltRaw_Value(rtb_Vector[0]);

    /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
     *  Constant: '<S2>/Constant3'
     */
    APSB_ac_DW.UnitDelay_DSTATE = false;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, APSB_CODE) APSB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
    APSB_ac_DW.UnitDelay_DSTATE = true;

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Outputs for Atomic SubSystem: '<Root>/Init' */
    /* Outport: '<Root>/VeAPSB_U_AccPedVolt' incorporates:
     *  Constant: '<S7>/Calib'
     *  SignalConversion: '<S3>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_U_AccPedVolt_Value(KeAPSB_U_AccPedVoltInit);

    /* Outport: '<Root>/VeAPSB_U_AccPedVoltRaw' incorporates:
     *  Constant: '<S7>/Calib'
     *  SignalConversion: '<S3>/Signal Conversion2'
     */
    (void)Rte_Write_VeAPSB_U_AccPedVoltRaw_Value(KeAPSB_U_AccPedVoltInit);

    /* Outport: '<Root>/VeAPSB_U_AccPed2Volt' incorporates:
     *  Constant: '<S9>/Calib'
     *  SignalConversion: '<S5>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2Volt_Value(KeAPSB_U_AccPed2VoltInit);

    /* Outport: '<Root>/VeAPSB_U_AccPed2VoltRaw' incorporates:
     *  Constant: '<S9>/Calib'
     *  SignalConversion: '<S5>/Signal Conversion2'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2VoltRaw_Value(KeAPSB_U_AccPed2VoltInit);

    /* Outport: '<Root>/VeAPSB_U_AccPed1PwrVolt' incorporates:
     *  Constant: '<S8>/Calib'
     *  SignalConversion: '<S4>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_U_AccPed1PwrVolt_Value(KeAPSB_U_AccPed1PwrVoltInit);

    /* Outport: '<Root>/VeAPSB_U_AccPed1PwrVoltRaw' incorporates:
     *  Constant: '<S8>/Calib'
     *  SignalConversion: '<S4>/Signal Conversion2'
     */
    (void)Rte_Write_VeAPSB_U_AccPed1PwrVoltRaw_Value(KeAPSB_U_AccPed1PwrVoltInit);

    /* Outport: '<Root>/VeAPSB_U_AccPed2Pwr' incorporates:
     *  Constant: '<S10>/Calib'
     *  SignalConversion: '<S6>/Signal Conversion1'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2Pwr_Value(KeAPSB_U_AccPed2PwrInit);

    /* Outport: '<Root>/VeAPSB_U_AccPed2PwrRaw' incorporates:
     *  Constant: '<S10>/Calib'
     *  SignalConversion: '<S6>/Signal Conversion2'
     */
    (void)Rte_Write_VeAPSB_U_AccPed2PwrRaw_Value(KeAPSB_U_AccPed2PwrInit);

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
