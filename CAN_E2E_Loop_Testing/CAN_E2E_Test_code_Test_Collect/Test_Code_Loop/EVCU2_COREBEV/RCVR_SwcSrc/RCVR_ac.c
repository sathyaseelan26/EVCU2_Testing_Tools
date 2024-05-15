/*
 * File: RCVR_ac.c
 *
 * Code generated for Simulink model 'RCVR_ac'.
 *
 * Model version                  : 9.126
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:48:26 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RCVR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S1009>/StateflowChart' */
#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_IN_Command_HTCabin_Valve_StopMoving ((uint8)3U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Check_Initial_Postion ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Close_Command       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_HTCabin_Valve_Close_Command ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_HTCabin_Valve_High_Diff_Check ((uint8)4U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_HTCabin_Valve_Low_Diff_Check ((uint8)5U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_HTCabin_Valve_Open_Command ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_HTCabin_Valve_Stop_Cmd ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_HTCabin_Valve_Stop_Command ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Open_Command        ((uint8)6U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Save_HTCabinVlv_High ((uint8)7U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Save_HTCabinVlv_HighFinal ((uint8)8U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Save_HTCabinVlv_LowFinal ((uint8)9U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Save_HTCabin_Valve_Low ((uint8)10U)
#endif

/* Named constants for Chart: '<S1047>/StateflowChart' */
#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Cmd_Close           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Cmd_Open            ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2
#define RCVR_ac_IN_Cmd_Stop            ((uint8)3U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_RCVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KaRCVR_T_EXV_SHTar[2] =
{
    10.0F, 90.0F
} ;                                    /* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CPV_CalRqst_D = 0;/* Referenced by: '<S1503>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CPV_CalRqst_SD = 0;/* Referenced by: '<S1504>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CPV_CalibStrt_DVC_Lim_D =
    0;                                 /* Referenced by: '<S1236>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CPV_CalibStrt_DVC_Lim_SD =
    0;                                 /* Referenced by: '<S1237>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CPV_CalibStrt_INIT = 0;/* Referenced by: '<S1630>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CPV_DVC_Lim_D = 0;/* Referenced by: '<S1244>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CPV_DVC_Lim_SD = 0;/* Referenced by: '<S1245>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CabVlv_DVC_LimDial = 0;/* Referenced by: '<S1215>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_CabVlv_DVC_LimSlct = 0;/* Referenced by: '<S1216>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_ChlrRfgVlv_DVC_LimDial =
    0;                                 /* Referenced by: '<S1227>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_ChlrRfgVlv_DVC_LimSlct =
    0;                                 /* Referenced by: '<S1228>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EEXV_CalibStrt_DVC_Lim_D =
    0;                                 /* Referenced by: '<S1258>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EEXV_CalibStrt_DVC_Lim_SD
    = 0;                               /* Referenced by: '<S1259>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EEXV_DVC_Lim_D = 0;/* Referenced by: '<S1263>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EEXV_DVC_Lim_SD = 0;/* Referenced by: '<S1264>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EXV_CalibStrt_DVC_Lim_D =
    0;                                 /* Referenced by: '<S1284>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EXV_CalibStrt_DVC_Lim_SD =
    0;                                 /* Referenced by: '<S1285>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EXV_DVC_Lim_D = 0;/* Referenced by: '<S1289>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_EXV_DVC_Lim_SD = 0;/* Referenced by: '<S1290>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_FrtRfgVlv_DVC_LimDial = 0;/* Referenced by: '<S1310>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_FrtRfgVlv_DVC_LimSlct = 0;/* Referenced by: '<S1311>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVF_b_HTCV_CalibStrt_DVC_LimDial = 0;/* Referenced by: '<S1213>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVF_b_HTCV_CalibStrt_DVC_LimSlct = 0;/* Referenced by: '<S1214>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTL_BypVlv_DVC_Lim_Dial =
    0;                                 /* Referenced by: '<S1326>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTL_BypVlv_DVC_Lim_Slct =
    0;                                 /* Referenced by: '<S1327>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTL_CalRqst_D = 0;/* Referenced by: '<S1505>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTL_CalRqst_SD = 0;/* Referenced by: '<S1506>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTL_CalibStrt_DVC_Lim_D =
    0;                                 /* Referenced by: '<S1324>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTL_CalibStrt_DVC_Lim_SD =
    0;                                 /* Referenced by: '<S1325>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTL_CalibStrt_INIT = 0;/* Referenced by: '<S1631>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTSO_Vlv_DVC_Lim_Dial = 0;/* Referenced by: '<S1334>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_HTSO_Vlv_DVC_Lim_Slct = 0;/* Referenced by: '<S1335>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_InFieldMode_Dial = 0;/* Referenced by: '<S1509>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_InFieldMode_Slct = 0;/* Referenced by: '<S1510>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTR_BypVlv_DVC_Lim_Dial =
    0;                                 /* Referenced by: '<S1348>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTR_BypVlv_DVC_Lim_Slct =
    0;                                 /* Referenced by: '<S1349>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTR_CalRqst_D = 0;/* Referenced by: '<S1507>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTR_CalRqst_SD = 0;/* Referenced by: '<S1508>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTR_CalibStrt_DVC_Lim_D =
    0;                                 /* Referenced by: '<S1355>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTR_CalibStrt_DVC_Lim_SD =
    0;                                 /* Referenced by: '<S1356>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTR_CalibStrt_INIT = 0;/* Referenced by: '<S1632>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTSO_Vlv_DVC_Lim_Dial = 0;/* Referenced by: '<S1363>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LTSO_Vlv_DVC_Lim_Slct = 0;/* Referenced by: '<S1364>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LimitCheckSts_Dial = 0;/* Referenced by: '<S1511>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_LimitCheckSts_Slct = 0;/* Referenced by: '<S1512>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_OEXV_CalibStrt_DVC_Lim_D =
    0;                                 /* Referenced by: '<S1379>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_OEXV_CalibStrt_DVC_Lim_SD
    = 0;                               /* Referenced by: '<S1380>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_OEXV_DVC_Lim_D = 0;/* Referenced by: '<S1384>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVF_b_OEXV_DVC_Lim_SD = 0;/* Referenced by: '<S1385>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cf_EXV_Linear_StepToPct =
    0.16F;                             /* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_CEXV_PID_IntIV_SC =
    0.0F;                              /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_CEXV_PID_IntMax_SC =
    -25.0F;                            /* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_CEXV_PID_IntMin_SC =
    -25.0F;                            /* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_CPV_CmndOutFlty = 40U;/* Referenced by: '<S852>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_CPV_MaxTimeFlty = 800U;/* Referenced by: '<S853>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_CalRq_Duratn = 500U;/* Referenced by: '<S810>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_CalibCalRq_Cnt = 40U;/* Referenced by: '<S820>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_CalibRq_Cntr = 100U;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_CalibRq_RstCntr =
    50U;                               /* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint8, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_MaxCycles_SncCal =
    100U;                              /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_PID_IntIV = 50.0F;/* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_PID_IntIV_SC =
    0.0F;                              /* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_PID_IntMax =
    600.0F;                            /* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_PID_IntMax_SC =
    600.0F;                            /* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_PID_IntMin = 0.0F;/* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EEXV_PID_IntMin_SC =
    0.0F;                              /* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_EXVPresSnsr_RA = 120U;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_CalibRq_Cntr = 50U;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_CalibRq_RstCntr =
    50U;                               /* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_CalibRq_ShtDwnCntr =
    300.0F;                            /* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(sint16, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_MaxCycles_SncCal =
    15;                                /* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_PID_IntIV = 0.0F;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_PID_IntIV_evap =
    0.0F;                              /* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_PID_IntMax = 600.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_PID_IntMax_evap =
    576.0F;                            /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_PID_IntMin = 0.0F;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_EXV_PID_IntMin_evap =
    -100.0F;                           /* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_FltyCalRq_Cnt = 40U;/* Referenced by: '<S830>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(sint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTCV_Endstophits_Init =
    0;                                 /* Referenced by: '<S1040>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(sint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTCV_Endstophits_Max =
    5000;                              /* Referenced by: '<S1043>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTL_CalRq_Duratn = 500U;/* Referenced by: '<S628>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTL_CalibCalRq_Cnt = 40U;/* Referenced by: '<S638>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTL_CmndOutFlty = 40U;/* Referenced by: '<S666>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTL_FltyCalRq_Cnt = 40U;/* Referenced by: '<S648>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTL_MaxTimeFlty = 800U;/* Referenced by: '<S667>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTL_SvRq_Cntr = 200U;/* Referenced by: '<S690>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTR_CalibCalRq_Cnt = 40U;/* Referenced by: '<S730>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HTR_ErrCalRq_Cnt = 40U;/* Referenced by: '<S739>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_HighCount_Max = 1.0F;/* Referenced by: '<S1017>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HtrCore_CalRq_Duratn =
    500U;                              /* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HtrCore_CalibCalRq_Cnt =
    40U;                               /* Referenced by: '<S544>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HtrCore_FltyCalRq_Cnt =
    40U;                               /* Referenced by: '<S554>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_HtrCore_SvRq_Cntr = 200U;/* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_LTR_CalRq_Duratn = 500U;/* Referenced by: '<S909>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_LTR_CalibCalRq_Cnt = 40U;/* Referenced by: '<S919>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_LTR_CmndOutFlty = 40U;/* Referenced by: '<S947>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_LTR_FltyCalRq_Cnt = 40U;/* Referenced by: '<S929>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_LTR_MaxTimeFlty = 800U;/* Referenced by: '<S948>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_LTR_SvRq_Cntr = 200U;/* Referenced by: '<S979>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_LowCount_Max = 1.0F;/* Referenced by: '<S1018>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(sint16, RCVR_VAR_INIT) KeRCVR_Cnt_MinCycles_CPV_Calib = 50;/* Referenced by: '<S811>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(sint16, RCVR_VAR_INIT) KeRCVR_Cnt_MinCycles_HTL_Calib = 50;/* Referenced by: '<S629>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(sint16, RCVR_VAR_INIT) KeRCVR_Cnt_MinCycles_HtrCore_Calib =
    50;                                /* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(sint16, RCVR_VAR_INIT) KeRCVR_Cnt_MinCycles_LTR_Calib = 50;/* Referenced by: '<S910>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT)
    KeRCVR_Cnt_MinHCPUp_Time_IncrCPV_KeyCnt = 40U;/* Referenced by: '<S812>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT)
    KeRCVR_Cnt_MinHCPUp_Time_IncrHTL_KeyCnt = 40U;/* Referenced by: '<S630>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(uint16, RCVR_VAR_INIT)
    KeRCVR_Cnt_MinHCPUp_Time_IncrHtrCore_KeyCnt = 40U;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT)
    KeRCVR_Cnt_MinHCPUp_Time_IncrLTR_KeyCnt = 40U;/* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_CalibRq_Cntr = 50U;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_CalibRq_RstCntr =
    50U;                               /* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint8, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_MaxCycles_SncCal =
    100U;                              /* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_PID_IntIV = 0.0F;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_PID_IntIV_SC =
    0.0F;                              /* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_PID_IntMax =
    600.0F;                            /* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_PID_IntMax_SC =
    576.0F;                            /* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_PID_IntMin = 0.0F;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Cnt_OEXV_PID_IntMin_SC =
    -200.0F;                           /* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_SvRq_Cntr = 200U;/* Referenced by: '<S860>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(uint16, RCVR_VAR_INIT) KeRCVR_Cnt_VlvShtDwn_Cntr = 200U;/* Referenced by: '<S1069>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_DC_HT_CabVlvCmd_NFDial =
    0.0F;                              /* Referenced by: '<S1553>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_I_EVCD_ActCrnt_D = 0.0F;/* Referenced by: '<S1521>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_CEXV_PID_Ki_SC = -25.0F;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_CEXV_PID_Kp_SC = -25.0F;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_MaxCmd_AntiWindup =
    626.0F;                            /* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_MinCmd_AntiWindup =
    0.0F;                              /* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_PID_BattCool_Ki =
    -0.2F;                             /* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_PID_BattCool_Kp =
    -0.4F;                             /* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_PID_Ki = -0.5F;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_PID_Ki_SC = -15.0F;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_PID_Kp = -1.0F;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EEXV_PID_Kp_SC = -25.0F;/* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EXV_MaxCmd_AntiWindup =
    576.0F;                            /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EXV_MinCmd_AntiWindup =
    -100.0F;                           /* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EXV_PID_Ki = -0.1F;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EXV_PID_Ki_evap = 10.0F;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EXV_PID_Kp = -0.6F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_EXV_PID_Kp_evap = 40.0F;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_MaxCmd_AntiWindup =
    576.0F;                            /* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_MinCmd_AntiWindup =
    -200.0F;                           /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_PID_Ki = -15.0F;/* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_PID_Ki_SC = -0.75F;/* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_PID_Ki_blending_SC =
    -0.2F;                             /* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_PID_Kp = -25.0F;/* Referenced by: '<S464>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_PID_Kp_SC = -1.5F;/* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_K_OEXV_PID_Kp_blending_SC =
    -0.6F;                             /* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_BattByPassVlv_Off =
    0.0F;                              /* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_BattByPassVlv_On =
    100.0F;                            /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_5

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CAC_ByPassVlvFltCmd =
    0.0F;                              /* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_5

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CAC_ByPassVlvOffCmd =
    0.0F;                              /* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_5

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CAC_ByPassVlvOnCmd =
    100.0F;                            /* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CAC_BypVlv_PstnCmd_D =
    0.0F;                              /* Referenced by: '<S1425>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT)
    KeRCVR_Pct_CAC_BypVlv_PstnCmd_NFDial = 0.0F;/* Referenced by: '<S1554>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CPVBypassOpen = 85.0F;/* Referenced by: '<S786>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CPVMaxPercentOpen =
    100.0F;                            /* Referenced by: '<S787>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CPVMinPercentOpen =
    0.0F;                              /* Referenced by: '<S788>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CPV_Cmnd_At_Sv = 50.0F;/* Referenced by: '<S856>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CabVlvFully_ClsCal_2 =
    15.0F;                         /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CabVlvFully_OpenCal_2 =
    20.0F;                         /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CabVlvOpen_Act_D = 0.0F;/* Referenced by: '<S1514>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CabVlv_ClosePos = 3.0F;/* Referenced by: '<S1044>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CabVlv_OpenPos = 98.0F;/* Referenced by: '<S1045>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_ClsCabVlv_toBatt =
    25.0F;                             /* Referenced by:
                                        * '<S1019>/Calib'
                                        * '<S1047>/StateflowChart'
                                        */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CmdClsError_Th = 0.0F;
                                   /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CmdOpenError_Th = 0.0F;
                                   /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CoolVlv1Cmd_Flt = 0.0F;/* Referenced by: '<S1013>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_CoolVlv1Cmd_On = 0.0F;/* Referenced by: '<S1014>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_ClosedPosn = 0.0F;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_Cmd_D = 0.0F;/* Referenced by: '<S1466>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_Cmd_NFDial = 0.0F;/* Referenced by: '<S1555>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_Default = 20.0F;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_FSPosn = 0.0F;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_MaxCmd = 100.0F;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_MinCmd = 9.0F;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_OpenedPosn =
    100.0F;                            /* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EEXV_PctB4_SlowRamp =
    10.0F;                             /* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_BypassedPosn =
    10.0F;                             /* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_ClosedPosn = 0.0F;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_FSPosn = 0.0F;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_MaxCmd = 100.0F;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_MinCmd = 0.0F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_OpenedPosn = 100.0F;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_PctB4_SlowRamp =
    10.0F;                             /* Referenced by: '<S118>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_PosReq_NFDial =
    0.0F;                              /* Referenced by: '<S1556>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_EXV_PosRq_D = 0.0F;/* Referenced by: '<S1440>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_FrWyVlv_Cmd_D = 0.0F;/* Referenced by: '<S1474>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_FrWyVlv_PstnCmnd_NFDial
    = 0.0F;                            /* Referenced by: '<S1557>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTLBypVlv_CalibStCmd =
    50.0F;                             /* Referenced by: '<S632>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTLBypVlv_Cmd_D = 0.0F;/* Referenced by: '<S1446>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTLBypVlv_DefltStCmd =
    50.0F;                             /* Referenced by: '<S641>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTLBypVlv_FltyStCmd =
    50.0F;                             /* Referenced by: '<S642>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTLMaxPercentOpen =
    100.0F;                            /* Referenced by: '<S680>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTLMinPercentOpen =
    0.0F;                              /* Referenced by: '<S681>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTL_Cmnd_At_Sv = 50.0F;/* Referenced by: '<S686>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTL_Vlv_PstnCmnd_NFDial
    = 0.0F;                            /* Referenced by: '<S1558>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTRBypVlv_CalibStCmd =
    50.0F;                             /* Referenced by: '<S725>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTRBypVlv_Cmd_D = 0.0F;/* Referenced by: '<S1427>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTRBypVlv_ErrStCmd =
    50.0F;                             /* Referenced by: '<S734>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTRBypVlv_SleepStCmd =
    50.0F;                             /* Referenced by: '<S746>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HTR_Vlv_PstnCmnd_NFDial
    = 0.0F;                            /* Referenced by: '<S1559>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HT_CabVlvCmd_D = 0.0F;/* Referenced by: '<S1483>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HT_CabVlvSts_NFDial =
    0.0F;                              /* Referenced by: '<S1560>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HtrCoreBV_PercentOpen =
    75.0F;                             /* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(float32, RCVR_VAR_INIT)
    KeRCVR_Pct_HtrCoreBypVlv_CalibStCmd = 50.0F;/* Referenced by: '<S538>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HtrCoreBypVlv_Cmd_D =
    0.0F;                              /* Referenced by: '<S1453>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(float32, RCVR_VAR_INIT)
    KeRCVR_Pct_HtrCoreBypVlv_DefltStCmd = 50.0F;/* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HtrCoreBypVlv_FltyStCmd
    = 50.0F;                           /* Referenced by: '<S548>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT)
    KeRCVR_Pct_HtrCoreBypVlv_PstnCmnd_NFDial = 0.0F;/* Referenced by: '<S1561>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_HtrCore_Cmnd_At_Sv =
    50.0F;                             /* Referenced by: '<S574>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LINPrpVlv_CalibStCmd =
    50.0F;                             /* Referenced by: '<S814>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LINPrpVlv_DefltStCmd =
    50.0F;                             /* Referenced by: '<S823>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LINPrpVlv_FltyStCmd =
    50.0F;                             /* Referenced by: '<S824>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRBypVlv_CalibStCmd =
    50.0F;                             /* Referenced by: '<S913>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRBypVlv_Cmd_D = 0.0F;/* Referenced by: '<S1490>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRBypVlv_DefltStCmd =
    50.0F;                             /* Referenced by: '<S922>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRBypVlv_FltyStCmd =
    50.0F;                             /* Referenced by: '<S923>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRBypassOpen = 85.0F;/* Referenced by: '<S963>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRCalCommand = 0.0F;/* Referenced by: '<S971>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRCommandCheck = -1.0F;/* Referenced by: '<S972>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRMaxPercentOpen =
    100.0F;                            /* Referenced by: '<S964>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTRMinPercentOpen =
    0.0F;                              /* Referenced by: '<S965>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTR_Cmnd_At_Sv = 50.0F;/* Referenced by: '<S975>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_LTR_Vlv_PstnCmnd_NFDial
    = 0.0F;                            /* Referenced by: '<S1562>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_Cmd_D = 0.0F;/* Referenced by: '<S1467>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_Cmd_NFDial = 0.0F;/* Referenced by: '<S1563>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_Default = 100.0F;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_FSPosn = 0.0F;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_MaxCmd = 100.0F;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_MinCmd = 10.0F;/* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_OpenedPosn =
    100.0F;                            /* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OEXV_PctB4_SlowRamp =
    10.0F;                             /* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_OpenCabVlv_toHtrCores =
    75.0F;                             /* Referenced by:
                                        * '<S1020>/Calib'
                                        * '<S1047>/StateflowChart'
                                        */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_PercentageConv = 100.0F;/* Referenced by: '<S1518>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_Pct_StopMovngCabVlv = 50.0F;/* Referenced by:
                                                                      * '<S1021>/Calib'
                                                                      * '<S1047>/StateflowChart'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_T_CEXV_SC_Deice_Tgt =
    -25.0F;                            /* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_T_CEXV_SC_Tgt = -25.0F;/* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_T_EEXV_SH_MinTgt = 10.0F;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_T_EXV_SH_BatOnly = 10.0F;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_T_OEXV_SC_MinTgt = 10.0F;/* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_T_OHX_Out_SCTar_EEXV_SC =
    10.0F;                             /* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_T_OHX_Out_SCTar_deicing =
    10.0F;                             /* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_U_CabVlvFully_ClosePos =
    1.5F;                              /* Referenced by: '<S1022>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_U_CabVlvFully_OpenPos =
    3.45F;                             /* Referenced by: '<S1023>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_U_CabVlvSts_High_Min = 3.0F;/* Referenced by: '<S1024>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_U_CabVlvSts_Low_Max = 2.0F;/* Referenced by: '<S1025>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_U_HTCabinVlv_HighVlt_Check =
    0.1F;                              /* Referenced by: '<S1026>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_U_HTCabinVlv_LowVlt_Check =
    0.1F;                              /* Referenced by: '<S1027>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ACRefrigExpVlvActA_LOC =
    0;                                 /* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_AC_ShtdwnRqst_D = 0;/* Referenced by: '<S1438>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_AC_ShtdwnRqst_NFDial = 0;/* Referenced by: '<S1564>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_AC_ShtdwnRqst_SD = 0;/* Referenced by: '<S1439>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_BattByPass_Vlv_Cmd_Flt =
    0;                                 /* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_BattByPass_Vlv_Cmd_Off =
    0;                                 /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_BattByPass_Vlv_Cmd_On = 0;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_BattByPass_Vlv_Enbl = 1;/* Referenced by: '<S1072>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_BattHtrVlvSwitch = 0;/* Referenced by: '<S608>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_BoolValv_Fault_Dial = 0;/* Referenced by: '<S1165>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_5

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CAC_ByPassVlvCmd_Off = 0;/* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_5

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CAC_ByPassVlvCmd_On = 0;/* Referenced by: '<S512>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CAC_BypVlv_PstnCmd_SD = 0;/* Referenced by: '<S1426>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CEXV_CLOnly_SC = 0;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CEXV_Evap_HoldI_Enbl = 1;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CEXV_HeatPmp_RA_Enbl = 0;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CEXV_SC_HoldI_Enbl = 0;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CEXV_SH_HoldI_Enbl = 1;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_CPV_CalSts_NeedRef_FltChk_Enbl = 1;/* Referenced by: '<S837>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_CPV_CalSts_RefFail_FltChk_Enbl = 1;/* Referenced by: '<S838>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_ErrStsCal_FltChk_Enbl
    = 1;                               /* Referenced by: '<S839>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_FltStTm_FltChk_Ovrd =
    0;                                 /* Referenced by: '<S840>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_Flty_D = 0;/* Referenced by: '<S841>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_Flty_SD = 0;/* Referenced by: '<S842>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_LINBusOff_FltChk_Ovrd
    = 0;                               /* Referenced by: '<S843>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_LOC_FltChk_Ovrd = 0;/* Referenced by: '<S844>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_CPV_PstnActSNA_FltChk_Enbl = 1;/* Referenced by: '<S845>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_PstnSv_D = 0;/* Referenced by: '<S1496>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CPV_PstnSv_SD = 0;/* Referenced by: '<S1497>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CRVCommand_NFDial = 0;/* Referenced by: '<S1565>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CRV_CktHi_Flt = 0;/* Referenced by: '<S1086>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CRV_CktLo_Flt = 0;/* Referenced by: '<S1087>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CRV_CktOpn_Flt = 0;/* Referenced by: '<S1088>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CabVlvConv_Sel = 0;/* Referenced by: '<S1515>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CabVlvOpen_Act_SD = 0;/* Referenced by: '<S1516>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CabVlv_Flt_Dial = 0;/* Referenced by: '<S1166>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ChlrRfgVlv_Flt_Dial = 0;/* Referenced by: '<S1167>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_ChlrRfgtShtoff_VlvSts_NF_Dial = 0;/* Referenced by: '<S1566>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ChlrRfgt_SO_VlvCmd_D = 0;/* Referenced by: '<S1433>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ChlrRfgt_SO_VlvCmd_SD = 0;/* Referenced by: '<S1434>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ChlrVlvTrnstn_D = 0;/* Referenced by: '<S1444>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ChlrVlvTrnstn_Delay_Dflt =
    0;                                 /* Referenced by: '<S1159>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ChlrVlvTrnstn_Delay_Enbl =
    0;                                 /* Referenced by: '<S1160>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ChlrVlvTrnstn_SD = 0;/* Referenced by: '<S1445>/Calib' */

#endif

#if !Rte_SysCon_Variant_RCVR_FUNC_3 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_Chlr_Evap_RfgtVlv_MaxTrnstnRPM = 0;/* Referenced by: '<S1161>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_Chlr_OpenCompTrnstn_NFDial = 0;/* Referenced by: '<S1567>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_ClntProp3WyVlv_Cmd_Sel =
    1;                                 /* Referenced by: '<S1008>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CoolVlv1Cmd_Flt = 0;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CoolVlv1Cmd_Off = 0;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_CoolVlv1Cmd_On = 0;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_DVC_HTCV_CalibFail_En = 1;/* Referenced by: '<S1207>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_CLOnly = 0;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_CLOnly_SC = 0;/* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_CalRq_SD = 0;/* Referenced by: '<S1468>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_CalibRq_DelayEnbl =
    0;                                 /* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_Cmd_SD = 0;/* Referenced by: '<S1469>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_HeatPmp_RA_Enbl = 0;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_Quick_Open_Enbl = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_SC_HoldI_Enbl = 0;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_SH_HoldI_Enbl = 0;/* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_SH_Table_Ovrd = 0;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_UseGrad = 0;/* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EEXV_UseSH = 1;/* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EVCD_ActCrnt_SD = 0;/* Referenced by: '<S1522>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_BoundLimiter = 0;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_CLOnly = 0;/* Referenced by:
                                                                      * '<S105>/Calib'
                                                                      * '<S175>/Calib'
                                                                      * '<S181>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_CLOnly_evap = 0;/* Referenced by:
                                                                      * '<S152>/Calib'
                                                                      * '<S182>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_CalCmd_SD = 0;/* Referenced by: '<S1441>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_CalibRq_DelayEnbl = 0;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_FstRmpEnbl = 0;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_EXV_Linear_StepToPct_Convert = 1;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_PosRq_SD = 0;/* Referenced by: '<S1442>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_PresSensrRA_NFDial =
    0;                                 /* Referenced by: '<S1568>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_SHTbl_PosOnly_EvapErr
    = 0;                               /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_SH_Table_Ovrd = 0;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_Snsr_Flt_Dial = 0;/* Referenced by: '<S1168>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EXV_UseFrstGrad = 0;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EngOrBattPwrDschg_SelDial
    = 0;                               /* Referenced by: '<S1523>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_EngOrBattPwrDschg_Slct =
    0;                                 /* Referenced by: '<S1524>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_FrWyVlv_Cmd_SD = 0;/* Referenced by: '<S1475>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_FrWyVlv_PstnSv_NFDial = 0;/* Referenced by: '<S1569>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_FrtRfgVlv_Flt_Dial = 0;/* Referenced by: '<S1169>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_FtRfgt_SO_VlvCmd_D = 0;/* Referenced by: '<S1463>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_FtRfgt_SO_VlvCmd_SD = 0;/* Referenced by: '<S1464>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HCCTIS_Tgt_Slct = 0;/* Referenced by: '<S489>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTCV_Learning_Req_D = 0;/* Referenced by: '<S1484>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTCV_Learning_Req_NF_Dial
    = 0;                               /* Referenced by: '<S1570>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTCV_Learning_Req_SD = 0;/* Referenced by: '<S1485>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTLBypVlv_CalRq_SD = 0;/* Referenced by: '<S1447>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTLBypVlv_Cmd_SD = 0;/* Referenced by: '<S1448>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_BypVlv_Fault_Dial = 0;/* Referenced by: '<S1170>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_HTL_CalSts_NeedRef_FltChk_Enbl = 1;/* Referenced by: '<S653>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_HTL_CalSts_RefFail_FltChk_Enbl = 1;/* Referenced by: '<S654>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_ErrStsCal_FltChk_Enbl
    = 1;                               /* Referenced by: '<S655>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_FltStTm_FltChk_Ovrd =
    0;                                 /* Referenced by: '<S656>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_Flty_D = 0;/* Referenced by: '<S657>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_Flty_SD = 0;/* Referenced by: '<S658>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_HTL_PstnActSNA_FltChk_Enbl = 1;/* Referenced by: '<S659>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_PstnSv_D = 0;/* Referenced by: '<S1450>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_PstnSv_SD = 0;/* Referenced by: '<S1451>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTL_Vlv_PstnSv_NFDial = 0;/* Referenced by: '<S1571>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTRBV_Block_Det_Enbl_SD =
    0;                                 /* Referenced by: '<S1428>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTRBypVlv_CalRq = 0;/* Referenced by: '<S722>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTRBypVlv_CalRq_SD = 0;/* Referenced by: '<S1429>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTRBypVlv_Cmd_SD = 0;/* Referenced by: '<S1430>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_HTRBypVlv_NormalSt_Enbl_Stub = 1;/* Referenced by: '<S501>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTR_BypVlv_Fault_Dial = 0;/* Referenced by: '<S1171>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSOVlv_OC_Fail = 0;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSOVlv_OC_Pass = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSOVlv_SB_Fail = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSOVlv_SB_Pass = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSOVlv_SG_Fail = 0;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSOVlv_SG_Pass = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_App_Sel = 1;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkCls_FltDtct_D =
    0;                                 /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkCls_FltDtct_SD =
    0;                                 /* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkCls_XYEnbl_D = 0;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkCls_XYEnbl_SD =
    0;                                 /* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkOpn_FltDtct_D =
    0;                                 /* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkOpn_FltDtct_SD =
    0;                                 /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkOpn_XYEnbl_D = 0;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HTSoV_StkOpn_XYEnbl_SD =
    0;                                 /* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_CabVlvCmd_SD = 0;/* Referenced by: '<S1486>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_CabVlvRely_Sts_Dial =
    0;                                 /* Referenced by: '<S1487>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_CabVlvRely_Sts_NF_Dial
    = 0;                               /* Referenced by: '<S1572>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_SO_VlvCmd_D = 0;/* Referenced by: '<S1478>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_SO_VlvCmd_SD = 0;/* Referenced by: '<S1479>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_SO_VlvSts_SD = 0;/* Referenced by: '<S1480>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_SO_Vlv_Fault_Dial = 0;/* Referenced by: '<S1172>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_Shtoff_VlvCmd_NFDial =
    0;                                 /* Referenced by: '<S1573>/Calib' */
static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HT_Shtoff_VlvSts_NF_Dial =
    0;                                 /* Referenced by: '<S1574>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HWIO_PokesSwitch = 1;/* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HellaVlvSwitch = 0;/* Referenced by:
                                                                      * '<S502>/Calib'
                                                                      * '<S711>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HtrCBV_LOC_DTC_U3041_Stub
    = 0;                               /* Referenced by: '<S568>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_HtrCBV_Perf_DTC_P352C_Stub = 0;/* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HtrCoreBV_PstnSv_D = 0;/* Referenced by: '<S1454>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HtrCoreBV_PstnSv_SD = 0;/* Referenced by: '<S1455>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HtrCoreBypVlv_CalRq_SD =
    0;                                 /* Referenced by: '<S1456>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HtrCoreBypVlv_Cmd_SD = 0;/* Referenced by: '<S1457>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_HtrCoreBypVlv_Fault_Dial =
    0;                                 /* Referenced by: '<S556>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_HtrCoreBypVlv_PstnSv_NFDial = 0;/* Referenced by: '<S1575>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_HtrCoreBypVlv_Stuck_State_SD = 0;/* Referenced by: '<S1458>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LINPrpVlv_CalRq_SD = 0;/* Referenced by: '<S1476>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTRBypVlv_CalRq_SD = 0;/* Referenced by: '<S1491>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTRBypVlv_Cmd_SD = 0;/* Referenced by: '<S1492>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_BypVlv_Fault_Dial = 0;/* Referenced by: '<S1173>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_LTR_CalSts_NeedRef_FltChk_Enbl = 1;/* Referenced by: '<S934>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_LTR_CalSts_RefFail_FltChk_Enbl = 1;/* Referenced by: '<S935>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_ErrStsCal_FltChk_Enbl
    = 1;                               /* Referenced by: '<S936>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_FltStTm_FltChk_Ovrd =
    0;                                 /* Referenced by: '<S937>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_Flty_D = 0;/* Referenced by: '<S938>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_Flty_SD = 0;/* Referenced by: '<S939>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT)
    KeRCVR_b_LTR_PstnActSNA_FltChk_Enbl = 1;/* Referenced by: '<S940>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_PstnSv_D = 0;/* Referenced by: '<S1494>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_PstnSv_SD = 0;/* Referenced by: '<S1495>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LTR_Vlv_PstnSv_NFDial = 0;/* Referenced by: '<S1576>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_LT_SO_Vlv_Fault_Dial = 0;/* Referenced by: '<S1174>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_CLOnly = 0;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_CLOnly_SC = 0;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_CalRq_SD = 0;/* Referenced by: '<S1470>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_CalibRq_DelayEnbl =
    0;                                 /* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_Cmd_SD = 0;/* Referenced by: '<S1471>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_HeatPmp_RA_Enbl = 0;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_HiPresSensSwapRAEn =
    0;                                 /* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_Quick_Open_Enbl = 0;/* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_SC_HoldI_Enbl = 1;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_SC_Table_Ovrd = 0;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_SH_HoldI_Enbl = 0;/* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_UseGrad = 0;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_OEXV_UseSC = 1;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_PMM_PowerMode_SD = 0;/* Referenced by: '<S1525>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_PierburgSwitch = 0;/* Referenced by:
                                                                      * '<S1070>/Calib'
                                                                      * '<S599>/Calib'
                                                                      * '<S712>/Calib'
                                                                      * '<S881>/Calib'
                                                                      * '<S1000>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_PropValv_Fault_Dial = 0;/* Referenced by: '<S1175>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVChillerOff = 0;/* Referenced by: '<S1126>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVChillerOn = 0;/* Referenced by:
                                                                      * '<S1120>/Calib'
                                                                      * '<S1123>/Calib'
                                                                      * '<S1129>/Calib'
                                                                      * '<S1132>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVCompTransition_D = 0;/* Referenced by: '<S1436>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVCompTransition_NFDial =
    0;                                 /* Referenced by: '<S1577>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVCompTransition_SD = 0;/* Referenced by: '<S1437>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVEvapFrontOff = 0;/* Referenced by: '<S1124>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVEvapFrontOn = 0;/* Referenced by:
                                                                      * '<S1121>/Calib'
                                                                      * '<S1127>/Calib'
                                                                      * '<S1130>/Calib'
                                                                      * '<S1133>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVEvapRearOff = 0;/* Referenced by:
                                                                      * '<S1122>/Calib'
                                                                      * '<S1125>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVEvapRearOn = 0;/* Referenced by:
                                                                      * '<S1128>/Calib'
                                                                      * '<S1131>/Calib'
                                                                      * '<S1134>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVFrntVlv_CktHi_Flt = 0;/* Referenced by: '<S1104>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVFrntVlv_CktLo_Flt = 0;/* Referenced by: '<S1105>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVFrntVlv_CktOpn_Flt = 0;/* Referenced by: '<S1106>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVFrtCommand_NFDial = 0;/* Referenced by: '<S1578>/Calib' */
static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSVFrtSts_NFDial = 0;/* Referenced by: '<S1579>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RSV_Sts_SD = 0;/* Referenced by: '<S1526>/Calib' */

#endif

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RdyToShtDwn_NFDial = 0;/* Referenced by: '<S1580>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_RefValv_Fault_Dial = 0;/* Referenced by: '<S1176>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(boolean, RCVR_VAR_INIT) KeRCVR_b_eACSuctionPressure_SD = 0;/* Referenced by: '<S1461>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EEXV_RampDownRate =
    -0.52F;                            /* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EEXV_RampDownRate_Slw =
    -0.1F;                             /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EEXV_RampUpRate =
    0.52F;                             /* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EEXV_RampUpRate_Quik =
    0.0F;                              /* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EXV_FS_RampDownRate =
    -2.5F;                             /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EXV_FS_RampUpRate =
    2.5F;                              /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EXV_RampDownRate =
    -0.52F;                            /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_EXV_RampUpRate = 0.52F;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_OEXV_RampDownRate =
    -0.52F;                            /* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_OEXV_RampDownRate_Slw =
    -0.1F;                             /* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_OEXV_RampUpRate =
    0.52F;                             /* Referenced by: '<S475>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dPct_OEXV_RampUpRate_Quik =
    0.0F;                              /* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dT_CabVlvTimer = 0.1F;/* Referenced by: '<S1028>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dT_RSVtransition = 0.025F;/* Referenced by: '<S1153>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_dt_HTCVMotion = 0.025F;
                                   /* Referenced by: '<S1047>/StateflowChart' */

#endif

static volatile CONST(TeRCVR_e_CPV_Calibration_Routine_Sts, RCVR_VAR_INIT)
    KeRCVR_e_CPV_RtnSts_NFDial = CeRCVR_e_CPV_RoutineSts_Complete_Pass;/* Referenced by: '<S1581>/Calib' */
static volatile CONST(TeRCVR_e_Valve_Stuck_Status, RCVR_VAR_INIT)
    KeRCVR_e_CPV_Valve_Stuck_State_NFDial = CeRCVR_e_Closed;/* Referenced by: '<S1582>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_EXV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_EEXV_CalRq_D = CeRCVR_e_EXV_No_Calibration;/* Referenced by: '<S1472>/Calib' */

#endif

static volatile CONST(TeRCVR_e_EXV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_EEXV_CalRq_NFDial = CeRCVR_e_EXV_No_Calibration;/* Referenced by: '<S1583>/Calib' */
static volatile CONST(TeRCVR_e_EXV_Routine_Sts, RCVR_VAR_INIT)
    KeRCVR_e_EEXV_RtnSts_NFDial = CeRCVR_e_EXV_Routine_Passed;/* Referenced by: '<S1584>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_EXV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_EXV_CalCmd_D = CeRCVR_e_EXV_No_Calibration;/* Referenced by: '<S1443>/Calib' */

#endif

static volatile CONST(TeRCVR_e_EXV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_EXV_CalCmd_NFDial = CeRCVR_e_EXV_No_Calibration;/* Referenced by: '<S1585>/Calib' */
static volatile CONST(TeRCVR_e_EXV_Routine_Sts, RCVR_VAR_INIT)
    KeRCVR_e_EXV_RtnSts_NFDial = CeRCVR_e_EXV_Routine_Passed;/* Referenced by: '<S1586>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TePDTR_e_BattDischg_State, RCVR_VAR_INIT)
    KeRCVR_e_EngOrBattPwrDschg_State_Dial = CePDTR_e_No_Dischrg;/* Referenced by: '<S1527>/Calib' */

#endif

static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_FrWyVlv_CalCmnd_NFDial = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1587>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_HTLBypVlv_CalRq_D = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1449>/Calib' */

#endif

static volatile CONST(TeRCVR_e_CPV_Calibration_Routine_Sts, RCVR_VAR_INIT)
    KeRCVR_e_HTL_RtnSts_NFDial = CeRCVR_e_CPV_RoutineSts_Complete_Pass;/* Referenced by: '<S1588>/Calib' */
static volatile CONST(TeRCVR_e_Valve_Stuck_Status, RCVR_VAR_INIT)
    KeRCVR_e_HTL_Valve_Stuck_State_NFDial = CeRCVR_e_Closed;/* Referenced by: '<S1589>/Calib' */
static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_HTL_Vlv_CalCmnd_NFDial = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1590>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_FCV_Block_Det_Enbl, RCVR_VAR_INIT)
    KeRCVR_e_HTRBV_Block_Det_Enbl_D = CeRCVR_e_FCV_False;/* Referenced by: '<S1431>/Calib' */

#endif

static volatile CONST(TeRCVR_e_FCV_Block_Det_Enbl, RCVR_VAR_INIT)
    KeRCVR_e_HTRBV_Block_Det_Enbl_NFDial = CeRCVR_e_FCV_False;/* Referenced by: '<S1591>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_FCV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_HTRBypVlv_CalRq_D = CeRCVR_e_FCV_Allow_Normal_Operation;/* Referenced by: '<S1432>/Calib' */

#endif

static volatile CONST(TeRCVR_e_FCV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_HTR_Vlv_CalCmnd_NFDial = CeRCVR_e_FCV_Allow_Normal_Operation;/* Referenced by: '<S1592>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_Vlv_Stat, RCVR_VAR_INIT) KeRCVR_e_HT_SO_VlvSts_D =
    CeRCVR_e_Vlv_Deenergize;           /* Referenced by: '<S1481>/Calib' */

#endif

static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_HtrCoreBypVlv_CalCmnd_NFDial = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1593>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_HtrCoreBypVlv_CalRq_D = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1459>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_Valve_Stuck_Status, RCVR_VAR_INIT)
    KeRCVR_e_HtrCoreBypVlv_Stuck_State_D = CeRCVR_e_Closed;/* Referenced by: '<S1460>/Calib' */

#endif

static volatile CONST(TeRCVR_e_Valve_Stuck_Status, RCVR_VAR_INIT)
    KeRCVR_e_HtrCoreBypVlv_Stuck_State_NFDial = CeRCVR_e_Closed;/* Referenced by: '<S1594>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_LINPrpVlv_CalRq_D = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1477>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_LTRBypVlv_CalRq_D = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1493>/Calib' */

#endif

static volatile CONST(TeRCVR_e_CPV_Calibration_Routine_Sts, RCVR_VAR_INIT)
    KeRCVR_e_LTR_RtnSts_NFDial = CeRCVR_e_CPV_RoutineSts_Complete_Pass;/* Referenced by: '<S1595>/Calib' */
static volatile CONST(TeRCVR_e_Valve_Stuck_Status, RCVR_VAR_INIT)
    KeRCVR_e_LTR_Valve_Stuck_State_NFDial = CeRCVR_e_Closed;/* Referenced by: '<S1596>/Calib' */
static volatile CONST(TeRCVR_e_CPV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_LTR_Vlv_CalCmnd_NFDial = CeRCVR_e_CPV_No_Calibration;/* Referenced by: '<S1597>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeRCVR_e_EXV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_OEXV_CalRq_D = CeRCVR_e_EXV_No_Calibration;/* Referenced by: '<S1473>/Calib' */

#endif

static volatile CONST(TeRCVR_e_EXV_Calibration_Req, RCVR_VAR_INIT)
    KeRCVR_e_OEXV_CalRq_NFDial = CeRCVR_e_EXV_No_Calibration;/* Referenced by: '<S1598>/Calib' */
static volatile CONST(TeRCVR_e_EXV_Routine_Sts, RCVR_VAR_INIT)
    KeRCVR_e_OEXV_RtnSts_NFDial = CeRCVR_e_EXV_Routine_Passed;/* Referenced by: '<S1599>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TePMDR_e_PowerMode, RCVR_VAR_INIT)
    KeRCVR_e_PMM_PowerMode_D = CePMDR_e_PowerMode_Off;/* Referenced by: '<S1528>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(TeTHMR_e_RSVState, RCVR_VAR_INIT) KeRCVR_e_RSV_Sts_D =
    CeTHMR_e_AllOpen;                  /* Referenced by: '<S1529>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_p_eACSuctionPressure_D =
    0.0F;                              /* Referenced by: '<S1462>/Calib' */

#endif

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_p_eACSuctionPressure_NFDial
    = 0.0F;                            /* Referenced by: '<S1600>/Calib' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CRV_dT = 0.1F;/* Referenced by: '<S1080>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CRV_trans_delay = 1.0F;/* Referenced by: '<S1081>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_ClsTime1 =
    0.025F;                        /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_ClsTime2 =
    0.025F;                        /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_OpnTime1 =
    0.025F;                        /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_OpnTime2 =
    0.025F;                        /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_Time1 = 0.1F;/* Referenced by: '<S1029>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_Time2 = 0.1F;/* Referenced by: '<S1030>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_Time3 = 0.1F;/* Referenced by: '<S1031>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_Time4 = 0.1F;/* Referenced by: '<S1032>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvMotion_Time5 = 0.1F;/* Referenced by: '<S1033>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_CabVlvStop_Time = 0.025F;
                                   /* Referenced by: '<S1047>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_EXVShtDwn_dT = 0.1F;/* Referenced by:
                                                                      * '<S233>/Calib'
                                                                      * '<S251>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_EXVShtDwn_trans_delay =
    30.0F;                             /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_HTCV_Learn_Comp_Delay =
    0.2F;                              /* Referenced by: '<S1034>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_HTSOVlv_dT = 0.1F;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_HTSOVlv_trans_delay =
    1.0F;                              /* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_RSVFrntVlv_dT = 0.1F;/* Referenced by: '<S1098>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_RSVFrntVlv_trans_delay =
    1.0F;                              /* Referenced by: '<S1099>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KeRCVR_t_RSVtransitiondelaymax =
    5.0F;                              /* Referenced by: '<S1154>/Calib' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_CEXV_VlvFdbPressCoeff
    [19] =
{
    0.0F, 0.0F, 0.0F, 11.0131655F, 20.0596943F, 28.2838097F, 35.1491585F,
    42.2648087F, 49.7022705F, 55.1015816F, 61.1445198F, 65.0778F, 68.6177368F,
    72.1934433F, 74.767952F, 77.4854813F, 79.8812F, 81.4902725F, 82.5629807F
} ;                                    /* Referenced by: '<S1180>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_CEXV_VlvFdbTempCoeff[19]
    =
{
    0.0F, 0.0F, 0.0F, 11.0131655F, 20.0596943F, 28.2838097F, 35.1491585F,
    42.2648087F, 49.7022705F, 55.1015816F, 61.1445198F, 65.0778F, 68.6177368F,
    72.1934433F, 74.767952F, 77.4854813F, 79.8812F, 81.4902725F, 82.5629807F
} ;                                    /* Referenced by: '<S1183>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_CabVlvOpeng_ActLookUp[6]
    =
{
    0.001F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S1517>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_EEXV_NonLin_StepToPct
    [19] =
{
    0.0F, 0.0F, 0.0F, 11.0131655F, 20.0596943F, 28.2838097F, 35.1491585F,
    42.2648087F, 49.7022705F, 55.1015816F, 61.1445198F, 65.0778F, 68.6177368F,
    72.1934433F, 74.767952F, 77.4854813F, 79.8812F, 81.4902725F, 82.5629807F
} ;                                    /* Referenced by: '<S359>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_EEXV_VlvFdbPressCoeff
    [19] =
{
    0.0F, 0.0F, 0.0F, 11.0131655F, 20.0596943F, 28.2838097F, 35.1491585F,
    42.2648087F, 49.7022705F, 55.1015816F, 61.1445198F, 65.0778F, 68.6177368F,
    72.1934433F, 74.767952F, 77.4854813F, 79.8812F, 81.4902725F, 82.5629807F
} ;                                    /* Referenced by: '<S1181>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_EEXV_VlvFdbTempCoeff[19]
    =
{
    0.0F, 0.0F, 0.0F, 11.0131655F, 20.0596943F, 28.2838097F, 35.1491585F,
    42.2648087F, 49.7022705F, 55.1015816F, 61.1445198F, 65.0778F, 68.6177368F,
    72.1934433F, 74.767952F, 77.4854813F, 79.8812F, 81.4902725F, 82.5629807F
} ;                                    /* Referenced by: '<S1184>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_EXV_NonLin_StepToPct[19]
    =
{
    0.0F, 0.0F, 0.0F, 11.0131655F, 20.0596943F, 28.2838097F, 35.1491585F,
    42.2648087F, 49.7022705F, 55.1015816F, 61.1445198F, 65.0778F, 68.6177368F,
    72.1934433F, 74.767952F, 77.4854813F, 79.8812F, 81.4902725F, 82.5629807F
} ;                                    /* Referenced by: '<S141>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_HTRConversion[6] =
{
    7.5F, 9.0F, 10.5F, 12.0F, 13.5F, 15.0F
} ;                                    /* Referenced by: '<S743>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_LTRConversion[7] =
{
    83.0F, 79.2500076F, 73.0F, 67.0F, 60.6659508F, 54.0F, 50.0F
} ;                                    /* Referenced by: '<S973>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_Pct_OEXV_NonLin_StepToPct
    [19] =
{
    0.0F, 0.0F, 0.0F, 11.0131655F, 20.0596943F, 28.2838097F, 35.1491585F,
    42.2648087F, 49.7022705F, 55.1015816F, 61.1445198F, 65.0778F, 68.6177368F,
    72.1934433F, 74.767952F, 77.4854813F, 79.8812F, 81.4902725F, 82.5629807F
} ;                                    /* Referenced by: '<S442>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_T_EEXV_SuperHeat[10] =
{
    5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F
} ;                                    /* Referenced by: '<S342>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_T_EXV_SuperHeat[100] =
{
    20.0F, 19.0F, 18.0F, 17.0F, 16.0F, 15.0F, 14.0F, 13.0F, 12.0F, 11.0F, 19.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 18.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 17.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 16.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 15.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 14.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 13.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 12.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 10.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F
} ;                                    /* Referenced by: '<S274>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_T_OEXV_SubCool[100] =
{
    20.0F, 19.0F, 18.0F, 17.0F, 16.0F, 15.0F, 14.0F, 13.0F, 12.0F, 11.0F, 19.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 18.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 17.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 16.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 15.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 14.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 13.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 12.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 10.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F
} ;                                    /* Referenced by: '<S491>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_T_RefPT_EEXV_Table[20] =
{
    -44.4517975F, -36.1281662F, -29.7847214F, -20.1520195F, -12.7723494F,
    -6.70443392F, -1.50630248F, 7.16943073F, 14.3289175F, 20.4785347F,
    25.9006977F, 30.7703362F, 35.2039223F, 39.2832413F, 43.0681076F, 46.6037102F,
    49.9250908F, 53.0600357F, 56.0309601F, 58.8562469F
} ;                                    /* Referenced by: '<S325>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_T_RefPT_OEXV_Table[30] =
{
    -50.0F, -45.0F, -44.4517975F, -36.1281662F, -29.7847214F, -20.1520195F,
    -12.7723494F, -6.70443392F, -1.50630248F, 7.16943073F, 14.3289175F,
    20.4785347F, 25.9006977F, 30.7703362F, 35.2039223F, 39.2832413F, 43.0681076F,
    46.6037102F, 49.9250908F, 53.0600357F, 56.0309601F, 58.8562469F, 60.0F,
    65.0F, 70.0F, 75.0F, 80.0F, 85.0F, 90.0F, 94.7F
} ;                                    /* Referenced by: '<S436>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_T_RefPT_OHX_Out_Table[30] =
{
    -50.0F, -45.0F, -44.4517975F, -36.1281662F, -29.7847214F, -20.1520195F,
    -12.7723494F, -6.70443392F, -1.50630248F, 7.16943073F, 14.3289175F,
    20.4785347F, 25.9006977F, 30.7703362F, 35.2039223F, 39.2832413F, 43.0681076F,
    46.6037102F, 49.9250908F, 53.0600357F, 56.0309601F, 58.8562469F, 60.0F,
    65.0F, 70.0F, 75.0F, 80.0F, 85.0F, 90.0F, 94.7F
} ;                                    /* Referenced by: '<S387>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_T_RefPT_Table[30] =
{
    -50.0F, -45.0F, -44.4517975F, -36.1281662F, -29.7847214F, -20.1520195F,
    -12.7723494F, -6.70443392F, -1.50630248F, 7.16943073F, 14.3289175F,
    20.4785347F, 25.9006977F, 30.7703362F, 35.2039223F, 39.2832413F, 43.0681076F,
    46.6037102F, 49.9250908F, 53.0600357F, 56.0309601F, 58.8562469F, 60.0F,
    65.0F, 70.0F, 75.0F, 80.0F, 85.0F, 90.0F, 94.7F
} ;                                    /* Referenced by: '<S106>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KtRCVR_p_SuctionPressureTable[120]
    =
{
    5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F,
    5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 27.0F, 25.0F, 22.5F, 20.0F, 17.5F,
    15.0F, 12.5F, 10.0F, 7.5F, 5.0F, 27.0F, 25.0F, 22.5F, 34.0F, 17.5F, 15.0F,
    12.5F, 10.0F, 7.5F, 5.0F, 30.0F, 27.5F, 25.0F, 52.0F, 34.0F, 34.0F, 20.0F,
    20.0F, 34.0F, 89.0F, 17.0F, 20.0F, 20.0F, 83.0F, 52.0F, 52.0F, 34.0F, 20.0F,
    52.0F, 11.0F, 16.0F, 20.0F, 34.0F, 92.0F, 83.0F, 83.0F, 52.0F, 34.0F, 83.0F,
    34.0F, 15.0F, 20.0F, 52.0F, 49.0F, 92.0F, 92.0F, 83.0F, 52.0F, 92.0F, 52.0F,
    14.0F, 20.0F, 83.0F, 34.0F, 49.0F, 49.0F, 92.0F, 83.0F, 49.0F, 83.0F, 13.0F,
    20.0F, 92.0F, 69.0F, 34.0F, 34.0F, 49.0F, 92.0F, 34.0F, 92.0F, 12.0F, 20.0F,
    49.0F, 72.0F, 20.0F, 20.0F, 34.0F, 49.0F, 20.0F, 49.0F, 10.0F, 20.0F, 34.0F,
    83.0F, 20.0F, 20.0F, 84.0F, 34.0F, 85.0F, 34.0F
} ;                                    /* Referenced by: '<S1186>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_CEXV_VlvFdbPressCoeff
    [19] =
{
    0.0F, 29.0F, 38.0F, 63.0F, 98.0F, 132.0F, 167.0F, 202.0F, 236.0F, 265.0F,
    300.0F, 334.0F, 369.0F, 403.0F, 438.0F, 472.0F, 507.0F, 541.0F, 576.0F
} ;                                    /* Referenced by: '<S1180>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_CEXV_VlvFdbTempCoeff[19]
    =
{
    0.0F, 29.0F, 38.0F, 63.0F, 98.0F, 132.0F, 167.0F, 202.0F, 236.0F, 265.0F,
    300.0F, 334.0F, 369.0F, 403.0F, 438.0F, 472.0F, 507.0F, 541.0F, 576.0F
} ;                                    /* Referenced by: '<S1183>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_CabVlvOpeng_ActLookUp[6]
    =
{
    1.501F, 1.9F, 2.3F, 2.7F, 3.1F, 3.5F
} ;                                    /* Referenced by: '<S1517>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_EEXV_NonLin_StepToPct
    [19] =
{
    0.0F, 29.0F, 38.0F, 63.0F, 98.0F, 132.0F, 167.0F, 202.0F, 236.0F, 265.0F,
    300.0F, 334.0F, 369.0F, 403.0F, 438.0F, 472.0F, 507.0F, 541.0F, 576.0F
} ;                                    /* Referenced by: '<S359>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_EEXV_VlvFdbPressCoeff
    [19] =
{
    0.0F, 29.0F, 38.0F, 63.0F, 98.0F, 132.0F, 167.0F, 202.0F, 236.0F, 265.0F,
    300.0F, 334.0F, 369.0F, 403.0F, 438.0F, 472.0F, 507.0F, 541.0F, 576.0F
} ;                                    /* Referenced by: '<S1181>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_EEXV_VlvFdbTempCoeff[19]
    =
{
    0.0F, 29.0F, 38.0F, 63.0F, 98.0F, 132.0F, 167.0F, 202.0F, 236.0F, 265.0F,
    300.0F, 334.0F, 369.0F, 403.0F, 438.0F, 472.0F, 507.0F, 541.0F, 576.0F
} ;                                    /* Referenced by: '<S1184>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_EXV_NonLin_StepToPct[19]
    =
{
    0.0F, 29.0F, 38.0F, 63.0F, 98.0F, 132.0F, 167.0F, 202.0F, 236.0F, 265.0F,
    300.0F, 334.0F, 369.0F, 403.0F, 438.0F, 472.0F, 507.0F, 541.0F, 576.0F
} ;                                    /* Referenced by: '<S141>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_HTRConversion[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S743>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_LTRConversion[7] =
{
    0.0F, 0.2F, 0.4F, 0.5F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S973>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_Pct_OEXV_NonLin_StepToPct
    [19] =
{
    0.0F, 29.0F, 38.0F, 63.0F, 98.0F, 132.0F, 167.0F, 202.0F, 236.0F, 265.0F,
    300.0F, 334.0F, 369.0F, 403.0F, 438.0F, 472.0F, 507.0F, 541.0F, 576.0F
} ;                                    /* Referenced by: '<S442>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_T_EEXV_SuperHeat[10] =
{
    0.001F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S342>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_T_EXV_SuperHeat[10] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S274>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_T_OEXV_SubCool[10] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S491>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_T_RefPT_EEXV_Table[20] =
{
    50.0F, 75.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F, 600.0F,
    700.0F, 800.0F, 900.0F, 1000.0F, 1100.0F, 1200.0F, 1300.0F, 1400.0F, 1500.0F,
    1600.0F
} ;                                    /* Referenced by: '<S325>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_T_RefPT_OEXV_Table[30] =
{
    37.0F, 49.0F, 50.0F, 75.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F, 400.0F,
    500.0F, 600.0F, 700.0F, 800.0F, 900.0F, 1000.0F, 1100.0F, 1200.0F, 1300.0F,
    1400.0F, 1500.0F, 1600.0F, 1642.0F, 1835.0F, 2045.0F, 2272.0F, 2519.0F,
    2788.0F, 3080.0F, 3382.0F
} ;                                    /* Referenced by: '<S436>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_T_RefPT_OHX_Out_Table[30] =
{
    37.0F, 49.0F, 50.0F, 75.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F, 400.0F,
    500.0F, 600.0F, 700.0F, 800.0F, 900.0F, 1000.0F, 1100.0F, 1200.0F, 1300.0F,
    1400.0F, 1500.0F, 1600.0F, 1642.0F, 1835.0F, 2045.0F, 2272.0F, 2519.0F,
    2788.0F, 3080.0F, 3382.0F
} ;                                    /* Referenced by: '<S387>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_T_RefPT_Table[30] =
{
    37.0F, 49.0F, 50.0F, 75.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F, 400.0F,
    500.0F, 600.0F, 700.0F, 800.0F, 900.0F, 1000.0F, 1100.0F, 1200.0F, 1300.0F,
    1400.0F, 1500.0F, 1600.0F, 1642.0F, 1835.0F, 2045.0F, 2272.0F, 2519.0F,
    2788.0F, 3080.0F, 3382.0F
} ;                                    /* Referenced by: '<S106>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KxRCVR_p_SuctionPressureTable[10] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S1186>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KyRCVR_T_EXV_SuperHeat[10] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S274>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KyRCVR_T_OEXV_SubCool[10] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S491>/Vector' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static volatile CONST(float32, RCVR_VAR_INIT) KyRCVR_p_SuctionPressureTable[12] =
{
    -2.0F, -1.0F, 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S1186>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_RCVR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RCVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(sint16, RCVR_VAR_INIT) EeRCVR_Cnt_EEXV_CyclesSncCal;/* '<Root>/DSM_3' */
static VAR(sint16, RCVR_VAR_INIT) EeRCVR_Cnt_EXV_CyclesSncCal;/* '<Root>/DSM_8' */
static VAR(sint16, RCVR_VAR_INIT) EeRCVR_Cnt_HTCV_Endstophits;/* '<Root>/DSM_4' */
static VAR(sint16, RCVR_VAR_INIT) EeRCVR_Cnt_OEXV_CyclesSncCal;/* '<Root>/DSM_11' */
static VAR(float32, RCVR_VAR_INIT) EeRCVR_U_HT_CabVlvSts_Max;/* '<Root>/DSM_2' */
static VAR(float32, RCVR_VAR_INIT) EeRCVR_U_HT_CabVlvSts_Min;/* '<Root>/DSM_1' */
static VAR(sint16, RCVR_VAR_INIT) EeRCVR_e_HTCV_Calibration_Sts;/* '<Root>/DSM_5' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_CPV_CalibStrt_DVC_Lim_AD;/* '<S1229>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_CPV_DVC_Lim_AD;/* '<S1231>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_CPV_DVC_Lim_AM1;/* '<S1230>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_CPV_isLimitCheckOk;/* '<S1239>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_CabVlv_DVC_Lim_AD;/* '<S1200>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_CabVlv_DVC_Lim_AM1;/* '<S1198>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_CabVlv_isLimitCheckOk;/* '<S1209>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_ChlrRfgVlv_DVC_Lim_AD;/* '<S1220>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_ChlrRfgVlv_DVC_Lim_AM1;/* '<S1219>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_ChlrRfgVlv_isLimitCheckOk;/* '<S1223>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_EEXV_CalibStrt_DVC_Lim_AD;/* '<S1250>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_EEXV_DVC_Lim_AD;/* '<S1252>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_EXV_CalibStrt_DVC_Lim_AD;/* '<S1276>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_EXV_DVC_Lim_AD;/* '<S1278>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_FrtRfgVlv_DVC_Lim_AD;/* '<S1304>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_FrtRfgVlv_DVC_Lim_AM1;/* '<S1303>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_FrtRfgVlv_isLimitCheckOk;/* '<S1306>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTCV_CalibStrt_DVC_Lim_AD;/* '<S1199>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTL_BypVlv_DVC_Lim_AD;/* '<S1317>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTL_BypVlv_DVC_Lim_AM;/* '<S1315>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTL_BypVlv_isLimitCheckOk;/* '<S1320>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTL_CalibStrt_DVC_Lim_AD;/* '<S1316>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTSO_Vlv_DVC_Lim_AD;/* '<S1332>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTSO_Vlv_DVC_Lim_AM1;/* '<S1333>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_HTSO_Vlv_isLimitCheckOk;/* '<S1337>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_LTR_BypVlv_DVC_Lim_AD;/* '<S1344>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_LTR_BypVlv_DVC_Lim_AM;/* '<S1345>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_LTR_BypVlv_isLimitCheckOk;/* '<S1351>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_LTR_CalibStrt_DVC_Lim_AD;/* '<S1346>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_LTSO_Vlv_DVC_Lim_AD;/* '<S1361>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_LTSO_Vlv_DVC_Lim_AM;/* '<S1362>/Merge' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_LTSO_Vlv_isLimitCheckOk;/* '<S1366>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_OEXV_CalibStrt_DVC_Lim_AD;/* '<S1374>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVF_b_OEXV_DVC_Lim_AD;/* '<S1376>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(sint16, RCVR_VAR_INIT) VeRCVR_Cnt_EXV_CyclesSncCal;/* '<S107>/DataStoreRead' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Cnt_HTCV_Control_St_SF;/* '<S1051>/Gain' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_I_EVCD_CrntAct_AD;/* '<S1500>/Switch5' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_CabVlvOpeng_Err_New;/* '<S1047>/Subtraction' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_EEXV_CLnOL_OLCmd;/* '<S312>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_EEXV_CntrlSig;/* '<S277>/Switch4' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_EEXV_PIDSig;/* '<S322>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_EXV_CLOnly_CntrlSig;/* '<S129>/Switch5' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_EXV_CLnOL_OLCmd;/* '<S184>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_EXV_CntrlSig;/* '<S129>/Switch4' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_EXV_PosRq_B4D;/* '<S142>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_OEXV_CntrlSig;/* '<S392>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_OEXV_PIDSig;/* '<S423>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_Pct_OEXV_PosRq_B4D;/* '<S431>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_T_EEXV_SHActual;/* '<S306>/Sum1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_T_EEXV_SHTar;/* '<S339>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_T_EXV_SHActual;/* '<S15>/Sum1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_T_EXV_SHTar;/* '<S15>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_T_OEXV_SCActual;/* '<S421>/Sum1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_T_OEXV_SCTar;/* '<S487>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_ACRefrigExpVlvActA_LOC;/* '<S107>/Logical6' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_AC_ShtdwnRqst_B4D;/* '<S107>/Logical4' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_CEXV_HeatPmp_RA_FSRqst;/* '<S201>/Logical15' */

#endif

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_CPV_Calibration_Request;/* '<Root>/DSM_7' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_CPV_SavePosnReqCmpl;/* '<S24>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EEXV_ClsdLpOn;/* '<S307>/Logical2' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EEXV_HeatPmp_RA_FSRqst;/* '<S308>/Logical1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_CalFail;/* '<S107>/Comparison8' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_CalFail_CalRq;/* '<S107>/Logical5' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_CalIPG;/* '<S15>/Comparison3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_ClngRqst;/* '<S109>/Logical1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_ClsdLpDeIcing;/* '<S109>/Logical7' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_ClsdLpDeItaEvap;/* '<S109>/Logical2' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_ClsdLpOn;/* '<S109>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_ErrCsng_ShtDwn;/* '<S107>/Logical9' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_FSRqst;/* '<S107>/Logical19' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_MaxCycles_CalRq;/* '<S107>/Comparison14' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_Rmpng2_ClsdPosn;/* '<S107>/Logical18' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_Snsr_Flt;/* '<S26>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_SystmWk;/* '<S108>/OR2' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_VhclOff;/* '<S107>/Comparison1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_EXV_VlvInoprtve;/* '<S107>/Comparison7' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_HTCV_EndStopHit;/* '<S1041>/Logical2' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_HTCV_Learning_Req_BD;/* '<S1041>/Comparison4' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_HTLBypVlv_Flt_AD;/* '<S606>/Switch' */

#endif

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_HTL_Calibration_Request;/* '<Root>/DSM_13' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_LINPrpVlv_Flt_AD;/* '<S767>/Switch' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_LTRBypVlv_Flt_AD;/* '<S888>/Switch' */

#endif

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_LTR_Calibration_Request;/* '<Root>/DSM_12' */

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_Learning_Comp_In;/* '<S505>/UnitDelay1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_OEXV_ClsdLpOn;/* '<S422>/Logical1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_OEXV_HeatPmp_RA_FSRqst;/* '<S432>/Logical15' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_OpnAllRfgt_Vlv;/* '<S1119>/Logical2' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_OpnChlr_N_FrntRfgtVlv;/* '<S1119>/Logical5' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_OpnOnlyChlr_RfgtVlv;/* '<S1119>/Logical7' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_OpnOnlyEvp_RfgtVlv;/* '<S1119>/Logical3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(boolean, RCVR_VAR_INIT) VeRCVR_b_RSV_transitionTmrActv;/* '<S1157>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_dU_Fdbk_ClosePos;/* '<S1009>/Abs1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(float32, RCVR_VAR_INIT) VeRCVR_dU_Fdbk_OpenPos;/* '<S1009>/Abs' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TeRCVR_e_EXV_Calibration_Req, RCVR_VAR_INIT) VeRCVR_e_EXV_CalCmd_B4D;/* '<S107>/Switch4' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TePDTR_e_BattDischg_State, RCVR_VAR_INIT)
    VeRCVR_e_EngOrBattPwrDschg_State_AD;/* '<S1500>/Switch2' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TeRCVR_e_CPV_States, RCVR_VAR_INIT) VeRCVR_e_HTLBypVlv_State;/* '<S698>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TeRCVR_e_FCV_States, RCVR_VAR_INIT) VeRCVR_e_HTRBypVlv_State;/* '<S753>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TeRCVR_e_HT_CabVlvState, RCVR_VAR_INIT) VeRCVR_e_HT_CabVlvState_New;/* '<S1058>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

static VAR(TeRCVR_e_CPV_States, RCVR_VAR_INIT) VeRCVR_e_HtrCoreBypVlv_State;/* '<S586>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TeRCVR_e_CPV_States, RCVR_VAR_INIT) VeRCVR_e_LINPrpVlv_State;/* '<S868>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TeRCVR_e_CPV_States, RCVR_VAR_INIT) VeRCVR_e_LTRBypVlv_State;/* '<S987>/Switch1' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TePMDR_e_PowerMode, RCVR_VAR_INIT) VeRCVR_e_PMM_PowerMode_AD;/* '<S1500>/Switch3' */

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static VAR(TeTHMR_e_RSVState, RCVR_VAR_INIT) VeRCVR_e_RefShtoffVlv_State_AD;/* '<S1500>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RCVR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_RCVR
#include "MemMap.h"

CONST(ConstB_RCVR_ac_T, RCVR_VAR_INIT) RCVR_ac_ConstB =
{
    CeRCVR_e_Vlv_Deenergize            /* '<S1552>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_RCVR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_RCVR
#include "MemMap.h"

CONST(ConstP_RCVR_ac_T, RCVR_VAR_INIT) RCVR_ac_ConstP =
{

#if Rte_SysCon_Variant_RCVR_FUNC_2

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S274>/Vector'
     *   '<S491>/Vector'
     */
    {
        9U, 9U
    },

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S1186>/Vector'
     */
    {
        9U, 11U
    },

#endif

#ifndef CONSTP_RCVR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_RCVR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RCVR
#include "MemMap.h"

VAR(B_RCVR_ac_T, RCVR_VAR_INIT) RCVR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RCVR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RCVR
#include "MemMap.h"

VAR(DW_RCVR_ac_T, RCVR_VAR_INIT) RCVR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RCVR
#include "MemMap.h"
#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Check_St(VAR(boolean, AUTOMATIC)
    rtu_Cmd, P2VAR(TeRCVR_e_Vlv_Stat, AUTOMATIC, RCVR_VAR_INIT) rty_Status);

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Vlv_Faulty(P2VAR(TeRCVR_e_Vlv_Stat,
    AUTOMATIC, RCVR_VAR_INIT) rty_Status);

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_OpenAll(P2VAR(boolean, AUTOMATIC,
    RCVR_VAR_INIT) rty_RSVEvapFront, P2VAR(boolean, AUTOMATIC, RCVR_VAR_INIT)
    rty_RSVEvapRear, P2VAR(boolean, AUTOMATIC, RCVR_VAR_INIT) rty_RSVChiller);

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Check_DVC_Limits(P2VAR(boolean,
    AUTOMATIC, RCVR_VAR_INIT) rty_True);

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Check_DVC_Limits_m(P2VAR(boolean,
    AUTOMATIC, RCVR_VAR_INIT) rty_False);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static void RCVR_ac_Save_HTCabinVlv_LowFinal(void);

#endif

/*
 * Output and update for action system:
 *    '<S1079>/Check_St'
 *    '<S1097>/Check_St'
 */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Check_St(VAR(boolean, AUTOMATIC)
    rtu_Cmd, P2VAR(TeRCVR_e_Vlv_Stat, AUTOMATIC, RCVR_VAR_INIT) rty_Status)
{
    /* Switch: '<S1089>/Switch' incorporates:
     *  Constant: '<S1092>/Constant'
     *  Constant: '<S1093>/Constant'
     */
    if (rtu_Cmd)
    {
        *rty_Status = CeRCVR_e_Vlv_Energize;
    }
    else
    {
        *rty_Status = CeRCVR_e_Vlv_Deenergize;
    }

    /* End of Switch: '<S1089>/Switch' */
}

#endif

/*
 * Output and update for action system:
 *    '<S1079>/Vlv_Faulty'
 *    '<S1097>/Vlv_Faulty'
 */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Vlv_Faulty(P2VAR(TeRCVR_e_Vlv_Stat,
    AUTOMATIC, RCVR_VAR_INIT) rty_Status)
{
    /* SignalConversion generated from: '<S1091>/Status' incorporates:
     *  Constant: '<S1094>/Constant'
     */
    *rty_Status = CeRCVR_e_Vlv_Faulty;
}

#endif

/*
 * Output and update for action system:
 *    '<S1074>/OpenAll'
 *    '<S1074>/Fault'
 */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_OpenAll(P2VAR(boolean, AUTOMATIC,
    RCVR_VAR_INIT) rty_RSVEvapFront, P2VAR(boolean, AUTOMATIC, RCVR_VAR_INIT)
    rty_RSVEvapRear, P2VAR(boolean, AUTOMATIC, RCVR_VAR_INIT) rty_RSVChiller)
{
    /* SignalConversion generated from: '<S1118>/RSVEvapFront' incorporates:
     *  Constant: '<S1133>/Calib'
     */
    *rty_RSVEvapFront = KeRCVR_b_RSVEvapFrontOn;

    /* SignalConversion generated from: '<S1118>/RSVEvapRear' incorporates:
     *  Constant: '<S1134>/Calib'
     */
    *rty_RSVEvapRear = KeRCVR_b_RSVEvapRearOn;

    /* SignalConversion generated from: '<S1118>/RSVChiller' incorporates:
     *  Constant: '<S1132>/Calib'
     */
    *rty_RSVChiller = KeRCVR_b_RSVChillerOn;
}

#endif

/*
 * Output and update for action system:
 *    '<S1198>/Check_DVC_Limits'
 *    '<S1219>/Check_DVC_Limits'
 *    '<S1230>/Check_DVC_Limits'
 *    '<S1251>/Check_DVC_Limits'
 *    '<S1277>/Check_DVC_Limits'
 *    '<S1303>/Check_DVC_Limits'
 *    '<S1315>/Check_DVC_Limits'
 *    '<S1333>/Check_DVC_Limits'
 *    '<S1345>/Check_DVC_Limits'
 *    '<S1362>/Check_DVC_Limits'
 *    '<S1375>/Check_DVC_Limits'
 */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Check_DVC_Limits(P2VAR(boolean,
    AUTOMATIC, RCVR_VAR_INIT) rty_True)
{
    /* SignalConversion generated from: '<S1208>/True' incorporates:
     *  Constant: '<S1208>/TRUEConstant'
     */
    *rty_True = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S1187>/Check_DVC_Limits'
 *    '<S1188>/Check_DVC_Limits'
 *    '<S1189>/Check_DVC_Limits'
 *    '<S1190>/Check_DVC_Limits'
 *    '<S1191>/Check_DVC_Limits'
 *    '<S1192>/Check_DVC_Limits'
 *    '<S1193>/Check_DVC_Limits'
 *    '<S1194>/Check_DVC_Limits'
 *    '<S1195>/Check_DVC_Limits'
 *    '<S1196>/Check_DVC_Limits'
 *    '<S1197>/Check_DVC_Limits'
 */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static FUNC(void, RCVR_CODE_LOCAL) RCVR_ac_Check_DVC_Limits_m(P2VAR(boolean,
    AUTOMATIC, RCVR_VAR_INIT) rty_False)
{
    /* SignalConversion generated from: '<S1201>/False' incorporates:
     *  Constant: '<S1201>/Constant12'
     */
    *rty_False = false;
}

#endif

/* Function for Chart: '<S1009>/StateflowChart' */
#if Rte_SysCon_Variant_RCVR_FUNC_2

static void RCVR_ac_Save_HTCabinVlv_LowFinal(void)
{
    /* Constant: '<S1034>/Calib' */
    /* During 'Save_HTCabinVlv_LowFinal': '<S1037>:128' */
    if ((RCVR_ac_B.VeRCVR_b_High_Learning_Comp) &&
            (RCVR_ac_B.VeRCVR_t_CabVlvAct_time > KeRCVR_t_HTCV_Learn_Comp_Delay))
    {
        /* Transition: '<S1037>:153' */
        /* Transition: '<S1037>:151' */
        /* Transition: '<S1037>:157' */
        /* Transition: '<S1037>:150' */
        /* Transition: '<S1037>:143' */
        if (!VeRCVR_b_Learning_Comp_In)
        {
            /* Transition: '<S1037>:100' */
            RCVR_ac_DW.VeRCVR_Cnt_HighCount = 0.0F;
            RCVR_ac_DW.VeRCVR_Cnt_LowCount = 0.0F;
            RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
            RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Check_Initial_Postion;

            /* Constant: '<S1028>/Calib' */
            /* Entry 'Check_Initial_Postion': '<S1037>:9' */
            RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;

            /* Constant: '<S1021>/Calib' */
            RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd = KeRCVR_Pct_StopMovngCabVlv;
            RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
        }
        else
        {
            /* Transition: '<S1037>:108' */
            /* Transition: '<S1037>:213' */
            RCVR_ac_DW.is_c35_RCVR_ac = RCVR_IN_Command_HTCabin_Valve_StopMoving;

            /* Constant: '<S1021>/Calib' */
            /* Entry 'Command_HTCabin_Valve_StopMoving': '<S1037>:107' */
            RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd = KeRCVR_Pct_StopMovngCabVlv;
        }
    }
    else if (RCVR_ac_B.VeRCVR_t_CabVlvAct_time > KeRCVR_t_HTCV_Learn_Comp_Delay)
    {
        /* Transition: '<S1037>:192' */
        /* Transition: '<S1037>:193' */
        /* Transition: '<S1037>:179' */
        /* Transition: '<S1037>:185' */
        RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
        RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Open_Command;

        /* Entry Internal 'Open_Command': '<S1037>:226' */
        /* Transition: '<S1037>:292' */
        RCVR_ac_DW.is_Open_Command = RCVR_ac_IN_HTCabin_Valve_Open_Command;

        /* Constant: '<S1020>/Calib' */
        /* Entry 'HTCabin_Valve_Open_Command': '<S1037>:18' */
        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd = KeRCVR_Pct_OpenCabVlv_toHtrCores;

        /* Constant: '<S1028>/Calib' */
        RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
        RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
    }
    else
    {
        /* Constant: '<S1028>/Calib' */
        RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
    }

    /* End of Constant: '<S1034>/Calib' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_RCVR_FUNC_2

FUNC(void, RCVR_CODE) RCVR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean c;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_Comparison4_o0;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_UnitDelay_b0;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_AND_lo;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_Gain_p;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_AND_k45;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Switch2_dd;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Sum2_et;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_AND_hb;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Vector_n;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_VM_Conditional_Signal_HtrCoreBV_Sv_4;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_OR1_oxb;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Merge;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    sint32 rtb_VeRCVR_Cnt_HTCV_Control_St;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_Switch1_bb;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_Switch3_hs;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_OR1_kx;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_OR1_fj;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean rtb_AND_ijg;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Switch2_ie;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Switch3_i;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Sum2_ik;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Sum1_hg;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 rtb_Sum6;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_HT_SO_VlvState rtb_Switch1_gr;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_Vlv_Stat rtb_Switch_md;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_Vlv_Stat rtb_Status_h;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_EXV_Calibration_Req rtb_Switch1_avh;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_FCV_Calibration_Req rtb_VM_Conditional_Signal_HTRBypVlv_Cali;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_FCV_Block_Det_Enbl rtb_VM_Conditional_Signal_HTRBV_Block_De;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_CPV_Calibration_Req rtb_VM_Conditional_Signal_HtrCoreBV_Cali;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_Valve_Stuck_Status rtb_VM_Conditional_Signal_HtrCoreBypVlv_;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_Vlv_Stat rtb_Merge_i;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean Switch2_e;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean Switch3_f;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 Switch1_f;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 Switch2;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    float32 Switch3_b;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_CPV_Calibration_Routine_Sts tmp;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_CPV_Calibration_Req tmp_0;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeTHMR_e_VlvState tmp_1;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 rtb_Logical_a_tmp;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 rtb_Logical_a_tmp_0;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 rtb_Logical_a_tmp_1;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 rtb_Logical_a_tmp_2;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 UnitDelay_DSTATE_eru_tmp;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 UnitDelay_DSTATE_eru_tmp_0;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_2;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_3;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_4;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_5;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_6;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_7;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_8;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_9;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_a;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    boolean tmp_b;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    TeRCVR_e_EXV_Calibration_Req UnitDelay_DSTATE_ju3_tmp;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 rtb_Logical_a_tmp_3;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 rtb_Logical_a_tmp_4;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 tmp_c;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 tmp_d;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 tmp_e;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    uint32 tmp_f;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_U_HT_CabVlvSts'
     */
    (void)Rte_Read_VeTAIR_U_HT_CabVlvSts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeBSWR_b_LimCheckingStatus'
     */
    (void)Rte_Read_VeBSWR_b_LimCheckingStatus_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ov);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_RefShtoffVlv_State'
     */
    (void)Rte_Read_VeTHMR_e_RefShtoffVlv_State_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_dce);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_EngOrBattPwrDschg_State'
     */
    (void)Rte_Read_VeTHMR_e_EngOrBattPwrDschg_State_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VePDTR_e_EngOrBattPwrDschg_State'
     */
    (void)Rte_Read_VePDTR_e_EngOrBattPwrDschg_State_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ld);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_I_HVAC_ECVD_CurrentAct'
     */
    (void)Rte_Read_VeTAIR_I_HVAC_ECVD_CurrentAct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
#if !Rte_SysCon_Variant_RCVR_FUNC_3 && Rte_SysCon_Variant_RCVR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_n_CompSpdFdb'
     */
    (void)Rte_Read_VeTAIR_n_CompSpdFdb_Value
        (&RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

#elif !(!Rte_SysCon_Variant_RCVR_FUNC_3) && Rte_SysCon_Variant_RCVR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
    RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeACCR_n_FtERV_ShutMaxRPM'
     */
    (void)Rte_Read_VeACCR_n_FtERV_ShutMaxRPM_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_Ft_SO_VlvCmd'
     */
    (void)Rte_Read_VeTAIR_b_Ft_SO_VlvCmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_Chlr_SO_VlvCmd'
     */
    (void)Rte_Read_VeTAIR_b_Chlr_SO_VlvCmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ij);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_ClntNProp3WyVlv_State'
     */
    (void)Rte_Read_VeTHMR_e_ClntNProp3WyVlv_State_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_HT_Shtoff_VlvCmd'
     */
    (void)Rte_Read_VeTAIR_b_HT_Shtoff_VlvCmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_HTSoV_StkOpn_XYEnbl'
     */
    (void)Rte_Read_VeVLDR_b_HTSoV_StkOpn_XYEnbl_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_HTSoV_StkCls_XYEnbl'
     */
    (void)Rte_Read_VeVLDR_b_HTSoV_StkCls_XYEnbl_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_HT_CabVlvCmd'
     */
    (void)Rte_Read_VeTAIR_Pct_HT_CabVlvCmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_b_HTCV_LearnEnb'
     */
    (void)Rte_Read_VeTHMR_b_HTCV_LearnEnb_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fqu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_ClntProp3WyVlv_State'
     */
    (void)Rte_Read_VeTHMR_e_ClntProp3WyVlv_State_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_jwt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_ClntProp3WyVlv_Cmd'
     */
    (void)Rte_Read_VeTHMR_Pct_ClntProp3WyVlv_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrWyVlv_PstnAct_FA'
     */
    (void)Rte_Read_VeTAIR_b_FrWyVlv_PstnAct_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_FrWyVlv_ErrSts'
     */
    (void)Rte_Read_VeTAIR_e_FrWyVlv_ErrSts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_FrWyVlv_CalSts'
     */
    (void)Rte_Read_VeTAIR_e_FrWyVlv_CalSts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_b_LINPrpVlv_SvReq'
     */
    (void)Rte_Read_VeTHMR_b_LINPrpVlv_SvReq_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ot);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_LINPrpVlv_Cmd'
     */
    (void)Rte_Read_VeTHMR_Pct_LINPrpVlv_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_CPV_Cmd'
     */
    (void)Rte_Read_VeTAIR_Pct_CPV_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeACCR_I_FtERVShtMaxCrrnt'
     */
    (void)Rte_Read_VeACCR_I_FtERVShtMaxCrrnt_Value
        (&RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n);

#elif !Rte_SysCon_Variant_RCVR_FUNC_3 && Rte_SysCon_Variant_RCVR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
    RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_EXV_CalStat_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_EXV_PosAct'
     */
    (void)Rte_Read_VeTAIR_Pct_EXV_PosAct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_PosAct_FA'
     */
    (void)Rte_Read_VeTAIR_b_EXV_PosAct_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_RspErr'
     */
    (void)Rte_Read_VeTAIR_b_EXV_RspErr_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_Sts'
     */
    (void)Rte_Read_VeTAIR_e_EXV_Sts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_Err'
     */
    (void)Rte_Read_VeTAIR_e_EXV_Err_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fmg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_EXV_RefTemp_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_p_EXV_RefPress'
     */
    (void)Rte_Read_VeTAIR_p_EXV_RefPress_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_RefTemp_FA'
     */
    (void)Rte_Read_VeTAIR_b_EXV_RefTemp_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_EXV_RefPress_FA'
     */
    (void)Rte_Read_VeTAIR_b_EXV_RefPress_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeACCR_n_ChillerV_OpenMaxRPM'
     */
    (void)Rte_Read_VeACCR_n_ChillerV_OpenMaxRPM_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeBTRR_dT_CellOverTemp'
     */
    (void)Rte_Read_VeBTRR_dT_CellOverTemp_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ls);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_FtEvapTmp_Tgt'
     */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Tgt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_FtEvapTmp'
     */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FtEvapTmp_TgtFA'
     */
    (void)Rte_Read_VeTAIR_b_FtEvapTmp_TgtFA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ivt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FtEvapTmp_FA'
     */
    (void)Rte_Read_VeTAIR_b_FtEvapTmp_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_HTSoV_StkCls_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_HTSoV_StkCls_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_HTSoV_StkOpn_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_HTSoV_StkOpn_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ae);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_HTCV_Stck_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_HTCV_Stck_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_HCTV_Leak_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_HCTV_Leak_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ove);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PressElctrFlt_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PressElctrFlt_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_af);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_TempElctrFlt_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_TempElctrFlt_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA'
     */
    (void)Rte_Read_VeTAIR_b_LTR_BypsVlv_ActlPstn_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_LTR_BypsVlv_ErrSts'
     */
    (void)Rte_Read_VeTAIR_e_LTR_BypsVlv_ErrSts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_LTR_BypsVlv_CalSts'
     */
    (void)Rte_Read_VeTAIR_e_LTR_BypsVlv_CalSts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA'
     */
    (void)Rte_Read_VeTAIR_b_HTL_BypsVlv_ActlPstn_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_HTL_BypsVlv_ErrSts'
     */
    (void)Rte_Read_VeTAIR_e_HTL_BypsVlv_ErrSts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bux);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_HTL_BypsVlv_CalSts'
     */
    (void)Rte_Read_VeTAIR_e_HTL_BypsVlv_CalSts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_EXV_Cmd'
     */
    (void)Rte_Read_VeTAIR_Pct_EXV_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_LT_Shtoff_VlvCmd'
     */
    (void)Rte_Read_VeTAIR_b_LT_Shtoff_VlvCmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_he);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PressSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PressSens_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_TempSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_TempSens_FltDtct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_m0p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_HTL_BypsVlv_Cmd'
     */
    (void)Rte_Read_VeTHMR_Pct_HTL_BypsVlv_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_LTL_Vlv_Cmd'
     */
    (void)Rte_Read_VeTHMR_Pct_LTL_Vlv_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_FrWyVlv_PstnAct'
     */
    (void)Rte_Read_VeTAIR_Pct_FrWyVlv_PstnAct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn'
     */
    (void)Rte_Read_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn'
     */
    (void)Rte_Read_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_Cmd'
     */
    (void)Rte_Read_VeTAIR_Pct_LTR_BypsVlv_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_Cmd'
     */
    (void)Rte_Read_VeTAIR_Pct_HTL_BypsVlv_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PressShrtHigh'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PressShrtHigh_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeCITR_e_FOTA_Install_Type'
     */
    (void)Rte_Read_VeCITR_e_FOTA_Install_Type_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gf4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EEXV_Sts'
     */
    (void)Rte_Read_VeTAIR_e_EEXV_Sts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EEXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_EEXV_CalStat_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_EEXV_RefTemp'
     */
    (void)Rte_Read_VeTAIR_T_EEXV_RefTemp_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_p_EEXV_RefPress'
     */
    (void)Rte_Read_VeTAIR_p_EEXV_RefPress_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_OEXV_Sts'
     */
    (void)Rte_Read_VeTAIR_e_OEXV_Sts_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_OEXV_CalStat'
     */
    (void)Rte_Read_VeTAIR_e_OEXV_CalStat_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_CabHeatThermalMode'
     */
    (void)Rte_Read_VeTHMR_e_CabHeatThermalMode_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_CabThermalMode'
     */
    (void)Rte_Read_VeTHMR_e_CabThermalMode_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
     */
    (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_LTCLThrmlMode'
     */
    (void)Rte_Read_VeTHMR_e_LTCLThrmlMode_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_hyh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_b_DeiceActv'
     */
    (void)Rte_Read_VeTHMR_b_DeiceActv_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_OEXV_OutTempSens'
     */
    (void)Rte_Read_VeTAIR_T_OEXV_OutTempSens_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_p_OEXV_OutPressSens'
     */
    (void)Rte_Read_VeTAIR_p_OEXV_OutPressSens_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_OEXV_InTempSens'
     */
    (void)Rte_Read_VeTAIR_T_OEXV_InTempSens_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_es);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_p_HghRfrgtPres'
     */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ol);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeAATR_b_EstAmbAirTempFA'
     */
    (void)Rte_Read_VeAATR_b_EstAmbAirTempFA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_caa);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTRIR_b_HtrCorClnt_TmpIn_FA'
     */
    (void)Rte_Read_VeTRIR_b_HtrCorClnt_TmpIn_FA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_l2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ik);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn'
     */
    (void)Rte_Read_VeTRIR_T_HtrCorClnt_TmpIn_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_HtrCoreTmp_Tgt'
     */
    (void)Rte_Read_VeTAIR_T_HtrCoreTmp_Tgt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_e_CabCoolThermalState'
     */
    (void)Rte_Read_VeTHMR_e_CabCoolThermalState_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_em);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_EEXV_PosAct'
     */
    (void)Rte_Read_VeTAIR_Pct_EEXV_PosAct_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
#if Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_FC_Vlv_Cmd'
     */
    (void)Rte_Read_VeTHMR_Pct_FC_Vlv_Cmd_Value
        (&RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d);

#elif !Rte_SysCon_Variant_RCVR_FUNC_1 && Rte_SysCon_Variant_RCVR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
    RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_mvu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt'
     */
    (void)Rte_Read_VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt'
     */
    (void)Rte_Read_VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ah);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt'
     */
    (void)Rte_Read_VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ip);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_DVC_HTCV_CalibStrt'
     */
    (void)Rte_Read_VeTAIR_e_DVC_HTCV_CalibStrt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_CPV_IO_Cnt'
     */
    (void)Rte_Read_VeTAIR_e_CPV_IO_Cnt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ak);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EXV_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_EXV_IO_CntrlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ft);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_DVC_EXV_Calibration_Start'
     */
    (void)Rte_Read_VeTAIR_b_DVC_EXV_Calibration_Start_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aa);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_df);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktHi_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ba);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_Ckt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_av);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_il);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValACktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValACktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ec);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommHybPSCCtrlValA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommHybPSCCtrlValA_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_de);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlCktFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefriShutoffCtrlCktFlt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fs);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fst);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_CktHi_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_CktLo_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ju);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Ckt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ei);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ca);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_EEXV_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_EEXV_IO_CntrlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_DVC_EEXV_Calibration_Start'
     */
    (void)Rte_Read_VeTAIR_b_DVC_EEXV_Calibration_Start_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_j0a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_EEXV_Cmd'
     */
    (void)Rte_Read_VeTAIR_Pct_EEXV_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_e_OEXV_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_OEXV_IO_CntrlSt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_im);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_DVC_OEXV_Calibration_Start'
     */
    (void)Rte_Read_VeTAIR_b_DVC_OEXV_Calibration_Start_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_OEXV_Cmd'
     */
    (void)Rte_Read_VeTAIR_Pct_OEXV_Cmd_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_T_CEXV_OutTempSens'
     */
    (void)Rte_Read_VeTAIR_T_CEXV_OutTempSens_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ap);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_p_CEXV_OutPressSens'
     */
    (void)Rte_Read_VeTAIR_p_CEXV_OutPressSens_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeSSDR_b_PrepareToShtdwn'
     */
    (void)Rte_Read_VeSSDR_b_PrepareToShtdwn_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ax);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeACCR_b_OilMigOpnVlv'
     */
    (void)Rte_Read_VeACCR_b_OilMigOpnVlv_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_HtrCoreBypssVlv'
     */
    (void)Rte_Read_VeTHMR_Pct_HtrCoreBypssVlv_Value
        (&RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f);

#elif !Rte_SysCon_Variant_RCVR_FUNC_4 && Rte_SysCon_Variant_RCVR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
    RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ev);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCkt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ed);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrAPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrBCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrBCkt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_a4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrACkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrACkt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ji);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrBPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrBPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_en);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_flj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrDCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrDCkt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrDCkt_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_km);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf_Value
        (&RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
#if Rte_SysCon_Variant_RCVR_FUNC_2 && Rte_SysCon_Variant_RCVR_FUNC_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_CPV2_PstnAct'
     */
    (void)Rte_Read_VeTAIR_Pct_CPV2_PstnAct_Value
        (&RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CPV2_PstnAct_FA'
     */
    (void)Rte_Read_VeTAIR_b_CPV2_PstnAct_FA_Value
        (&RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p);

#elif !Rte_SysCon_Variant_RCVR_FUNC_4 && Rte_SysCon_Variant_RCVR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
    RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k = 0.0F;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159' */
    RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p = false;

#endif

    /* Outputs for Function Call SubSystem: '<Root>/RCVR_FUNC_MedTED' */
    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolantVlvB_CktHi' */
    RCVR_ac_DW.StatusByte_CoolantVlvB_CktHi =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ba;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolantVlvB_Ckt' */
    RCVR_ac_DW.StatusByte_CoolantVlvB_Ckt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fq;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommACRefrigExpVlvActA' */
    RCVR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g5;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_HB_PSC_CtrlValCCktPerf' */
    RCVR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_av;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvC' */
    RCVR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_il;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_HB_PSC_CtrlValACktPerf' */
    RCVR_ac_DW.StatusByte_HB_PSC_CtrlValACktPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ec;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LosCommHybPSCCtrlValA' */
    RCVR_ac_DW.StatusByte_LosCommHybPSCCtrlValA =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hy;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LIN1_BusOff' */
    RCVR_ac_DW.StatusByte_LIN1_BusOff =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_de;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_HB_PSC_CtrlValBCktPerf' */
    RCVR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fh;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvB' */
    RCVR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolCtrlVlv1CktHi' */
    RCVR_ac_DW.StatusByte_CoolCtrlVlv1CktHi =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jw;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolCtrlVlv1CktLo' */
    RCVR_ac_DW.StatusByte_CoolCtrlVlv1CktLo =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iw;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolCtrlVlv1Ckt' */
    RCVR_ac_DW.StatusByte_CoolCtrlVlv1Ckt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_EvapRefriShutoffCtrlCktFlt' */
    RCVR_ac_DW.StatusByte_EvapRefriShutoffCtrlCktFlt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fs;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_EvapRefriShutoffCtrlshrtBattFlt' */
    RCVR_ac_DW.StatusByte_EvapRefriShutoffCtrlshrtBattF =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fst;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_EvapRefrishutoffCtrlShrtGndFlt' */
    RCVR_ac_DW.StatusByte_EvapRefrishutoffCtrlShrtGndFl =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d1;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolantVlvA_CktHi' */
    RCVR_ac_DW.StatusByte_CoolantVlvA_CktHi =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolantVlvA_CktLo' */
    RCVR_ac_DW.StatusByte_CoolantVlvA_CktLo =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ju;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CoolantVlvA_Ckt' */
    RCVR_ac_DW.StatusByte_CoolantVlvA_Ckt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ei;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LIN2_BusOff' */
    RCVR_ac_DW.StatusByte_LIN2_BusOff =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ca;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsrCPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ev;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigPresSnsrCCktPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrCCktPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bl;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lz;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigPresSnsrCCkt' */
    RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrCCkt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mv;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsrCCkt' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ed;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommACRefrigExpVlvActC' */
    RCVR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n4;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsrAPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrAPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kb;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsrBCkt' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrBCkt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_a4;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsrACkt' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrACkt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nf;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LIN3_BusOff' */
    RCVR_ac_DW.StatusByte_LIN3_BusOff =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jc;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ji;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsrBPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrBPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gd;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsr5CktPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_en;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigPresSnsrDCktPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrDCktPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_flj;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsr4CktPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr4CktPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gw;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsr5CktShotoGro' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoGro =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m1;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsr5CktShotoBat' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoBat =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mm;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigTempSnsrDCkt' */
    RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrDCkt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fn;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigPresSnsrDCkt' */
    RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrDCkt =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_km;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigPresSnsrALo' */
    RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrALo =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dy;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigPresSnsrAHi' */
    RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nt;

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AC_RefrigPresSnsrAPerf' */
    RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fz;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S1501>/Switch2' incorporates:
     *  Constant: '<S1503>/Calib'
     *  Constant: '<S1504>/Calib'
     *  DataStoreWrite: '<S1501>/DataStoreWrite1'
     */
    if (KeRCVF_b_CPV_CalRqst_SD)
    {
        VeRCVR_b_CPV_Calibration_Request = KeRCVF_b_CPV_CalRqst_D;
    }

    /* End of Switch: '<S1501>/Switch2' */

    /* Switch: '<S1501>/Switch1' incorporates:
     *  Constant: '<S1507>/Calib'
     *  Constant: '<S1508>/Calib'
     *  DataStoreWrite: '<S1501>/DataStoreWrite2'
     */
    if (KeRCVF_b_LTR_CalRqst_SD)
    {
        VeRCVR_b_LTR_Calibration_Request = KeRCVF_b_LTR_CalRqst_D;
    }

    /* End of Switch: '<S1501>/Switch1' */

    /* Switch: '<S1501>/Switch3' incorporates:
     *  Constant: '<S1505>/Calib'
     *  Constant: '<S1506>/Calib'
     *  DataStoreWrite: '<S1501>/DataStoreWrite3'
     */
    if (KeRCVF_b_HTL_CalRqst_SD)
    {
        VeRCVR_b_HTL_Calibration_Request = KeRCVF_b_HTL_CalRqst_D;
    }

    /* End of Switch: '<S1501>/Switch3' */

    /* Switch: '<S1502>/Switch2' incorporates:
     *  Constant: '<S1512>/Calib'
     */
    if (KeRCVF_b_LimitCheckSts_Slct)
    {
        /* Switch: '<S1502>/Switch2' incorporates:
         *  Constant: '<S1511>/Calib'
         */
        Switch2_e = KeRCVF_b_LimitCheckSts_Dial;
    }
    else
    {
        /* Switch: '<S1502>/Switch2' */
        Switch2_e = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ov;
    }

    /* End of Switch: '<S1502>/Switch2' */

    /* Switch: '<S1502>/Switch3' incorporates:
     *  Constant: '<S1510>/Calib'
     */
    if (KeRCVF_b_InFieldMode_Slct)
    {
        /* Switch: '<S1502>/Switch3' incorporates:
         *  Constant: '<S1509>/Calib'
         */
        Switch3_f = KeRCVF_b_InFieldMode_Dial;
    }
    else
    {
        /* Switch: '<S1502>/Switch3' */
        Switch3_f = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pc;
    }

    /* End of Switch: '<S1502>/Switch3' */

    /* Switch: '<S1499>/Switch1' incorporates:
     *  Constant: '<S1515>/Calib'
     *  Constant: '<S1516>/Calib'
     *  Switch: '<S1499>/Switch2'
     */
    if (KeRCVR_b_CabVlvOpen_Act_SD)
    {
        /* Switch: '<S1499>/Switch1' incorporates:
         *  Constant: '<S1514>/Calib'
         */
        rtb_Sum6 = KeRCVR_Pct_CabVlvOpen_Act_D;
    }
    else if (KeRCVR_b_CabVlvConv_Sel)
    {
        /* Switch: '<S1499>/Switch1' incorporates:
         *  Lookup_n-D: '<S1517>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S1499>/Switch2'
         */
        rtb_Sum6 = look1_iflf_binlca_16a
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys, ((const float32
               *)&(KxRCVR_Pct_CabVlvOpeng_ActLookUp[0])), ((const float32 *)
              &(KtRCVR_Pct_CabVlvOpeng_ActLookUp[0])), 5U);
    }
    else
    {
        /* Sum: '<S1513>/Sum6' incorporates:
         *  DataStoreRead: '<S1499>/DataStoreRead'
         *  DataStoreRead: '<S1499>/DataStoreRead1'
         *  Switch: '<S1499>/Switch2'
         */
        rtb_Sum6 = EeRCVR_U_HT_CabVlvSts_Max - EeRCVR_U_HT_CabVlvSts_Min;

        /* Outputs for Atomic SubSystem: '<S1513>/ProtectedDivision1' */
        /* Switch: '<S1520>/Switch1' incorporates:
         *  Constant: '<S1518>/Calib'
         *  Constant: '<S1520>/ConstantValue'
         *  Constant: '<S1520>/ConstantValue1'
         *  Constant: '<S1520>/ConstantValue2'
         *  Constant: '<S1520>/ConstantValue3'
         *  Logic: '<S1520>/AND'
         *  RelationalOperator: '<S1520>/GreaterThanorEqual'
         *  RelationalOperator: '<S1520>/GreaterThanorEqual1'
         *  RelationalOperator: '<S1520>/NotEqual'
         *  RelationalOperator: '<S1520>/NotEqual1'
         *  Switch: '<S1499>/Switch2'
         *  Switch: '<S1520>/Switch2'
         *  Switch: '<S1520>/Switch3'
         */
        if ((KeRCVR_Pct_PercentageConv != 0.0F) && (rtb_Sum6 != 0.0F))
        {
            /* Switch: '<S1520>/Switch1' incorporates:
             *  Product: '<S1520>/Division'
             */
            rtb_Sum6 = KeRCVR_Pct_PercentageConv / rtb_Sum6;
        }
        else if (KeRCVR_Pct_PercentageConv > 0.0F)
        {
            /* Switch: '<S1520>/Switch2' incorporates:
             *  Constant: '<S1520>/MAXFLOAT'
             *  Switch: '<S1520>/Switch1'
             */
            rtb_Sum6 = 3.402823466E+38F;
        }
        else if (KeRCVR_Pct_PercentageConv < 0.0F)
        {
            /* Switch: '<S1520>/Switch3' incorporates:
             *  Constant: '<S1520>/MINFLOAT'
             *  Switch: '<S1520>/Switch1'
             *  Switch: '<S1520>/Switch2'
             */
            rtb_Sum6 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S1520>/Switch1' incorporates:
             *  Constant: '<S1520>/ConstantValue4'
             *  Switch: '<S1520>/Switch2'
             *  Switch: '<S1520>/Switch3'
             */
            rtb_Sum6 = 0.0F;
        }

        /* End of Switch: '<S1520>/Switch1' */
        /* End of Outputs for SubSystem: '<S1513>/ProtectedDivision1' */

        /* Product: '<S1513>/Product' incorporates:
         *  DataStoreRead: '<S1499>/DataStoreRead'
         *  Sum: '<S1513>/Sum1'
         *  Switch: '<S1499>/Switch2'
         */
        rtb_Sum6 *= RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys -
            EeRCVR_U_HT_CabVlvSts_Min;

        /* Outputs for Atomic SubSystem: '<S1513>/Limiter' */
        /* Switch: '<S1519>/Switch1' incorporates:
         *  Constant: '<S1513>/ConstantValue1'
         *  RelationalOperator: '<S1519>/RelationalOperator'
         *  Switch: '<S1499>/Switch2'
         */
        if (100.0F < rtb_Sum6)
        {
            /* Switch: '<S1519>/Switch1' */
            rtb_Sum6 = 100.0F;
        }

        /* End of Switch: '<S1519>/Switch1' */

        /* Switch: '<S1519>/Switch' incorporates:
         *  Constant: '<S1513>/ConstantValue'
         *  RelationalOperator: '<S1519>/RelationalOperator1'
         *  Switch: '<S1499>/Switch2'
         */
        if (rtb_Sum6 <= 0.0F)
        {
            /* Switch: '<S1499>/Switch1' incorporates:
             *  Switch: '<S1499>/Switch2'
             */
            rtb_Sum6 = 0.0F;
        }

        /* End of Switch: '<S1519>/Switch' */
        /* End of Outputs for SubSystem: '<S1513>/Limiter' */
    }

    /* End of Switch: '<S1499>/Switch1' */

    /* Switch: '<S1500>/Switch' incorporates:
     *  Constant: '<S1526>/Calib'
     */
    if (KeRCVR_b_RSV_Sts_SD)
    {
        /* RelationalOperator: '<S110>/Comparison4' incorporates:
         *  Constant: '<S1529>/Calib'
         *  Switch: '<S1500>/Switch'
         */
        VeRCVR_e_RefShtoffVlv_State_AD = KeRCVR_e_RSV_Sts_D;
    }
    else
    {
        /* RelationalOperator: '<S110>/Comparison4' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S1500>/Switch'
         */
        VeRCVR_e_RefShtoffVlv_State_AD =
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_dce;
    }

    /* End of Switch: '<S1500>/Switch' */

    /* Switch: '<S1500>/Switch2' incorporates:
     *  Constant: '<S1523>/Calib'
     *  Constant: '<S1524>/Calib'
     *  Switch: '<S1500>/Switch1'
     */
    if (KeRCVR_b_EngOrBattPwrDschg_SelDial)
    {
        /* Switch: '<S1500>/Switch2' incorporates:
         *  Constant: '<S1527>/Calib'
         */
        VeRCVR_e_EngOrBattPwrDschg_State_AD =
            KeRCVR_e_EngOrBattPwrDschg_State_Dial;
    }
    else if (KeRCVR_b_EngOrBattPwrDschg_Slct)
    {
        /* Switch: '<S1500>/Switch1' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S1500>/Switch2'
         */
        VeRCVR_e_EngOrBattPwrDschg_State_AD =
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pl;
    }
    else
    {
        /* Switch: '<S1500>/Switch2' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S1500>/Switch1'
         */
        VeRCVR_e_EngOrBattPwrDschg_State_AD =
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dq;
    }

    /* End of Switch: '<S1500>/Switch2' */

    /* Switch: '<S1500>/Switch3' incorporates:
     *  Constant: '<S1525>/Calib'
     */
    if (KeRCVR_b_PMM_PowerMode_SD)
    {
        /* Switch: '<S1500>/Switch3' incorporates:
         *  Constant: '<S1528>/Calib'
         */
        VeRCVR_e_PMM_PowerMode_AD = KeRCVR_e_PMM_PowerMode_D;
    }
    else
    {
        /* Switch: '<S1500>/Switch3' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         */
        VeRCVR_e_PMM_PowerMode_AD =
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ld;
    }

    /* End of Switch: '<S1500>/Switch3' */

    /* Switch: '<S1500>/Switch5' incorporates:
     *  Constant: '<S1522>/Calib'
     */
    if (KeRCVR_b_EVCD_ActCrnt_SD)
    {
        /* Switch: '<S1500>/Switch5' incorporates:
         *  Constant: '<S1521>/Calib'
         */
        VeRCVR_I_EVCD_CrntAct_AD = KeRCVR_I_EVCD_ActCrnt_D;
    }
    else
    {
        /* Switch: '<S1500>/Switch5' */
        VeRCVR_I_EVCD_CrntAct_AD =
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b;
    }

    /* End of Switch: '<S1500>/Switch5' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVC'
     */
    /* RelationalOperator: '<S600>/Comparison4' incorporates:
     *  Constant: '<S620>/Constant'
     */
    rtb_Comparison4_o0 = (((uint32)
                           RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy) ==
                          CeTAIR_e_CPV_Calibration_Taking_Place);

    /* Outputs for Atomic SubSystem: '<S600>/EdgeFalling2' */
    /* Logic: '<S617>/AND' incorporates:
     *  Logic: '<S617>/OR1'
     *  UnitDelay: '<S617>/UnitDelay'
     */
    rtb_AND_lo = ((!rtb_Comparison4_o0) && (RCVR_ac_DW.UnitDelay_DSTATE_jq));

    /* Update for UnitDelay: '<S617>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_jq = rtb_Comparison4_o0;

    /* End of Outputs for SubSystem: '<S600>/EdgeFalling2' */

    /* RelationalOperator: '<S600>/Comparison1' incorporates:
     *  Constant: '<S629>/Calib'
     *  DataStoreRead: '<S600>/DataStoreRead1'
     */
    rtb_Comparison4_o0 = (RCVR_ac_DW.NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles >=
                          KeRCVR_Cnt_MinCycles_HTL_Calib);

    /* Outputs for Atomic SubSystem: '<S600>/EdgeRising1' */
    /* Logic: '<S619>/OR1' incorporates:
     *  UnitDelay: '<S619>/UnitDelay'
     */
    rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_ge;

    /* Update for UnitDelay: '<S619>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_ge = rtb_Comparison4_o0;

    /* Outputs for Atomic SubSystem: '<S600>/CountDownResetEnabled' */
    /* Switch: '<S613>/Switch1' incorporates:
     *  Constant: '<S613>/ConstantValue'
     *  Constant: '<S628>/Calib'
     *  Logic: '<S613>/AND'
     *  Logic: '<S619>/AND'
     *  RelationalOperator: '<S613>/GreaterThan'
     *  Switch: '<S613>/Switch2'
     *  UnitDelay: '<S613>/UnitDelay'
     */
    if (rtb_Comparison4_o0 && rtb_OR1_oxb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_c5 = KeRCVR_Cnt_HTL_CalRq_Duratn;
    }
    else
    {
        if (rtb_Comparison4_o0 && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_c5) > 0))
        {
            /* UnitDelay: '<S613>/UnitDelay' incorporates:
             *  Constant: '<S613>/ConstantValue1'
             *  Sum: '<S613>/Subtraction'
             *  Switch: '<S613>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_c5 = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_c5) - 1));
        }
    }

    /* End of Switch: '<S613>/Switch1' */
    /* End of Outputs for SubSystem: '<S600>/EdgeRising1' */

    /* UnitDelay: '<S1095>/UnitDelay' incorporates:
     *  Constant: '<S613>/ConstantValue2'
     *  Logic: '<S600>/Logical3'
     *  RelationalOperator: '<S613>/GreaterThan1'
     *  UnitDelay: '<S613>/UnitDelay'
     */
    rtb_UnitDelay_b0 = ((((sint32)RCVR_ac_DW.UnitDelay_DSTATE_c5) > 0) ||
                        (VeRCVF_b_HTL_CalibStrt_DVC_Lim_AD));

    /* End of Outputs for SubSystem: '<S600>/CountDownResetEnabled' */

    /* Logic: '<S600>/Logical5' */
    rtb_OR1_oxb = (rtb_AND_lo || rtb_UnitDelay_b0);

    /* Outputs for Atomic SubSystem: '<S600>/EdgeFalling1' */
    /* Logic: '<S616>/AND' incorporates:
     *  Logic: '<S616>/OR1'
     *  UnitDelay: '<S616>/UnitDelay'
     */
    rtb_Comparison4_o0 = ((!rtb_OR1_oxb) && (RCVR_ac_DW.UnitDelay_DSTATE_fwr));

    /* Update for UnitDelay: '<S616>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_fwr = rtb_OR1_oxb;

    /* End of Outputs for SubSystem: '<S600>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S600>/EdgeRising' */
    /* Logic: '<S618>/AND' incorporates:
     *  Logic: '<S618>/OR1'
     *  UnitDelay: '<S618>/UnitDelay'
     */
    rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_ch;

    /* Update for UnitDelay: '<S618>/UnitDelay' incorporates:
     *  Constant: '<S600>/TRUEConstant1'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_ch = true;

    /* End of Outputs for SubSystem: '<S600>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S600>/CountDownResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S614>/EdgeRising' */
    /* Logic: '<S631>/OR1' incorporates:
     *  UnitDelay: '<S631>/UnitDelay'
     */
    rtb_OR1_kx = !RCVR_ac_DW.UnitDelay_DSTATE_eh;

    /* Update for UnitDelay: '<S631>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_eh = rtb_OR1_oxb;

    /* Switch: '<S614>/Switch1' incorporates:
     *  Constant: '<S614>/ConstantValue'
     *  Constant: '<S630>/Calib'
     *  Logic: '<S631>/AND'
     *  RelationalOperator: '<S614>/GreaterThan'
     *  Switch: '<S614>/Switch2'
     *  UnitDelay: '<S614>/UnitDelay'
     */
    if (rtb_OR1_oxb && rtb_OR1_kx)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_gp = KeRCVR_Cnt_MinHCPUp_Time_IncrHTL_KeyCnt;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_gp) > 0)
        {
            /* UnitDelay: '<S614>/UnitDelay' incorporates:
             *  Constant: '<S614>/ConstantValue1'
             *  Sum: '<S614>/Subtraction'
             *  Switch: '<S614>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_gp = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_gp) - 1));
        }
    }

    /* End of Switch: '<S614>/Switch1' */
    /* End of Outputs for SubSystem: '<S614>/EdgeRising' */

    /* RelationalOperator: '<S614>/GreaterThan1' incorporates:
     *  Constant: '<S614>/ConstantValue2'
     *  UnitDelay: '<S614>/UnitDelay'
     */
    rtb_OR1_oxb = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_gp) > 0);

    /* End of Outputs for SubSystem: '<S600>/CountDownResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S600>/EdgeFalling' */
    /* Logic: '<S615>/AND' incorporates:
     *  Logic: '<S615>/OR1'
     *  UnitDelay: '<S615>/UnitDelay'
     */
    rtb_OR1_kx = ((!rtb_OR1_oxb) && (RCVR_ac_DW.UnitDelay_DSTATE_em));

    /* Update for UnitDelay: '<S615>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_em = rtb_OR1_oxb;

    /* End of Outputs for SubSystem: '<S600>/EdgeFalling' */

    /* Switch: '<S600>/Switch1' incorporates:
     *  Constant: '<S600>/ConstantValue2'
     *  DataStoreRead: '<S600>/DataStoreRead'
     *  DataStoreWrite: '<S600>/DataStoreWrite'
     *  Sum: '<S600>/Sum'
     *  Switch: '<S600>/Switch'
     */
    if (rtb_Comparison4_o0)
    {
        RCVR_ac_DW.NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles = 0;
    }
    else
    {
        RCVR_ac_DW.NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles = (sint16)((rtb_OR1_kx ? 1
            : 0) + ((sint32)RCVR_ac_DW.NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles));
    }

    /* End of Switch: '<S600>/Switch1' */

    /* Switch: '<S600>/Switch2' incorporates:
     *  DataStoreWrite: '<S600>/DataStoreWrite1'
     */
    VeRCVR_b_HTL_Calibration_Request = ((!rtb_AND_lo) &&
        (VeRCVR_b_HTL_Calibration_Request));

    /* Outputs for Atomic SubSystem: '<S660>/EdgeRising' */
    /* Logic: '<S664>/AND' incorporates:
     *  Logic: '<S664>/OR1'
     *  UnitDelay: '<S660>/UnitDelay1'
     *  UnitDelay: '<S664>/UnitDelay'
     */
    rtb_AND_lo = ((VeRCVR_b_HTLBypVlv_Flt_AD) &&
                  (!RCVR_ac_DW.UnitDelay_DSTATE_kv));

    /* Update for UnitDelay: '<S664>/UnitDelay' incorporates:
     *  UnitDelay: '<S660>/UnitDelay1'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_kv = VeRCVR_b_HTLBypVlv_Flt_AD;

    /* End of Outputs for SubSystem: '<S660>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S660>/CountDownResetEnabled' */
    /* Switch: '<S661>/Switch1' incorporates:
     *  Constant: '<S661>/ConstantValue'
     *  Constant: '<S667>/Calib'
     *  Logic: '<S660>/Logical8'
     *  Logic: '<S661>/AND'
     *  RelationalOperator: '<S661>/GreaterThan'
     *  Switch: '<S661>/Switch2'
     *  UnitDelay: '<S660>/UnitDelay'
     *  UnitDelay: '<S660>/UnitDelay1'
     *  UnitDelay: '<S661>/UnitDelay'
     */
    if (rtb_AND_lo || (RCVR_ac_DW.UnitDelay_DSTATE_pf))
    {
        RCVR_ac_DW.UnitDelay_DSTATE_bv = KeRCVR_Cnt_HTL_MaxTimeFlty;
    }
    else
    {
        if ((VeRCVR_b_HTLBypVlv_Flt_AD) && (((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_bv) > 0))
        {
            /* UnitDelay: '<S661>/UnitDelay' incorporates:
             *  Constant: '<S661>/ConstantValue1'
             *  Sum: '<S661>/Subtraction'
             *  Switch: '<S661>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_bv = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_bv) - 1));
        }
    }

    /* End of Switch: '<S661>/Switch1' */

    /* Logic: '<S660>/Logical6' incorporates:
     *  Constant: '<S661>/ConstantValue2'
     *  Logic: '<S660>/Logical5'
     *  RelationalOperator: '<S661>/GreaterThan1'
     *  UnitDelay: '<S660>/UnitDelay1'
     *  UnitDelay: '<S661>/UnitDelay'
     */
    rtb_AND_lo = ((VeRCVR_b_HTLBypVlv_Flt_AD) && (((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_bv) <= 0));

    /* End of Outputs for SubSystem: '<S660>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S660>/EdgeRising1' */
    /* Logic: '<S665>/OR1' incorporates:
     *  UnitDelay: '<S665>/UnitDelay'
     */
    rtb_Comparison4_o0 = !RCVR_ac_DW.UnitDelay_DSTATE_i5h;

    /* Update for UnitDelay: '<S665>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_i5h = rtb_AND_lo;

    /* Outputs for Atomic SubSystem: '<S660>/CountDownResetEnabled1' */
    /* Switch: '<S662>/Switch1' incorporates:
     *  Constant: '<S662>/ConstantValue'
     *  Constant: '<S666>/Calib'
     *  Logic: '<S662>/AND'
     *  Logic: '<S665>/AND'
     *  RelationalOperator: '<S662>/GreaterThan'
     *  Switch: '<S662>/Switch2'
     *  UnitDelay: '<S662>/UnitDelay'
     */
    if (rtb_AND_lo && rtb_Comparison4_o0)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_fo = KeRCVR_Cnt_HTL_CmndOutFlty;
    }
    else
    {
        if (rtb_AND_lo && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_fo) > 0))
        {
            /* UnitDelay: '<S662>/UnitDelay' incorporates:
             *  Constant: '<S662>/ConstantValue1'
             *  Sum: '<S662>/Subtraction'
             *  Switch: '<S662>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_fo = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_fo) - 1));
        }
    }

    /* End of Switch: '<S662>/Switch1' */
    /* End of Outputs for SubSystem: '<S660>/EdgeRising1' */

    /* Logic: '<S660>/Logical7' incorporates:
     *  Constant: '<S662>/ConstantValue2'
     *  RelationalOperator: '<S662>/GreaterThan1'
     *  UnitDelay: '<S662>/UnitDelay'
     */
    rtb_AND_lo = (rtb_AND_lo && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_fo) > 0));

    /* End of Outputs for SubSystem: '<S660>/CountDownResetEnabled1' */

    /* Switch: '<S606>/Switch' incorporates:
     *  Constant: '<S658>/Calib'
     */
    if (KeRCVR_b_HTL_Flty_SD)
    {
        /* Switch: '<S606>/Switch' incorporates:
         *  Constant: '<S657>/Calib'
         */
        VeRCVR_b_HTLBypVlv_Flt_AD = KeRCVR_b_HTL_Flty_D;
    }
    else
    {
        /* Switch: '<S606>/Switch' incorporates:
         *  Constant: '<S650>/Constant'
         *  Constant: '<S651>/Constant'
         *  Constant: '<S652>/Constant'
         *  Constant: '<S653>/Calib'
         *  Constant: '<S654>/Calib'
         *  Constant: '<S655>/Calib'
         *  Constant: '<S656>/Calib'
         *  Constant: '<S659>/Calib'
         *  Logic: '<S606>/Logical'
         *  Logic: '<S606>/Logical1'
         *  Logic: '<S606>/Logical2'
         *  Logic: '<S606>/Logical3'
         *  Logic: '<S606>/Logical4'
         *  Logic: '<S606>/Logical5'
         *  Logic: '<S606>/Logical6'
         *  Logic: '<S606>/Logical7'
         *  RelationalOperator: '<S606>/Comparison1'
         *  RelationalOperator: '<S606>/Comparison2'
         *  RelationalOperator: '<S606>/Comparison4'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         */
        VeRCVR_b_HTLBypVlv_Flt_AD =
            ((((((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nx) &&
                 (KeRCVR_b_HTL_PstnActSNA_FltChk_Enbl)) || ((((uint32)
                   RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bux) ==
                  CeTAIR_e_CPV_Status_Calibration_Rq) &&
                 (KeRCVR_b_HTL_ErrStsCal_FltChk_Enbl))) || ((((uint32)
                  RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy) ==
                 CeTAIR_e_CPV_Calibration_Not_Complete) &&
                (KeRCVR_b_HTL_CalSts_NeedRef_FltChk_Enbl))) || ((((uint32)
                 RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy) ==
                CeTAIR_e_CPV_Calibration_Fail) &&
               (KeRCVR_b_HTL_CalSts_RefFail_FltChk_Enbl))) && ((!rtb_AND_lo) ||
              (KeRCVR_b_HTL_FltStTm_FltChk_Ovrd)));
    }

    /* End of Switch: '<S606>/Switch' */

    /* Switch: '<S698>/Switch1' incorporates:
     *  Switch: '<S699>/Switch1'
     *  Switch: '<S700>/Switch1'
     */
    if (rtb_UnitDelay_b0)
    {
        /* Switch: '<S698>/Switch1' incorporates:
         *  Constant: '<S694>/Constant'
         */
        VeRCVR_e_HTLBypVlv_State = CeRCVR_e_CPV_States_Calibration;
    }
    else if (VeRCVR_b_HTLBypVlv_Flt_AD)
    {
        /* Switch: '<S699>/Switch1' incorporates:
         *  Constant: '<S693>/Constant'
         *  Switch: '<S698>/Switch1'
         */
        VeRCVR_e_HTLBypVlv_State = CeRCVR_e_CPV_States_Faulty;
    }
    else if (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ot)
    {
        /* Switch: '<S700>/Switch1' incorporates:
         *  Constant: '<S697>/Constant'
         *  Switch: '<S698>/Switch1'
         *  Switch: '<S699>/Switch1'
         */
        VeRCVR_e_HTLBypVlv_State = CeRCVR_e_CPV_States_Save;
    }
    else
    {
        /* RelationalOperator: '<S702>/Comparison4' incorporates:
         *  RelationalOperator: '<S702>/Comparison1'
         *  RelationalOperator: '<S702>/Comparison2'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S700>/Switch1'
         */
        tmp_1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_jwt;

        /* Switch: '<S701>/Switch1' incorporates:
         *  Constant: '<S703>/Constant'
         *  Constant: '<S704>/Constant'
         *  Constant: '<S705>/Constant'
         *  Logic: '<S702>/Logical2'
         *  RelationalOperator: '<S702>/Comparison1'
         *  RelationalOperator: '<S702>/Comparison2'
         *  RelationalOperator: '<S702>/Comparison4'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S700>/Switch1'
         */
        if (((((uint32)tmp_1) == CeTHMR_e_Vlv1Pwrd) || (((uint32)tmp_1) ==
                CeTHMR_e_Vlv1N2Pwrd)) || (((uint32)tmp_1) ==
                CeTHMR_e_Vlv1N2N3Pwrd))
        {
            /* Switch: '<S698>/Switch1' incorporates:
             *  Constant: '<S695>/Constant'
             *  Switch: '<S700>/Switch1'
             */
            VeRCVR_e_HTLBypVlv_State = CeRCVR_e_CPV_States_Powered;
        }
        else
        {
            /* Switch: '<S698>/Switch1' incorporates:
             *  Constant: '<S696>/Constant'
             *  Switch: '<S700>/Switch1'
             */
            VeRCVR_e_HTLBypVlv_State = CeRCVR_e_CPV_States_Default;
        }

        /* End of Switch: '<S701>/Switch1' */
    }

    /* End of Switch: '<S698>/Switch1' */

    /* UnitDelay: '<S1095>/UnitDelay' incorporates:
     *  Constant: '<S711>/Calib'
     *  Constant: '<S712>/Calib'
     *  Logic: '<S692>/Logical5'
     */
    rtb_UnitDelay_b0 = ((KeRCVR_b_PierburgSwitch) || (KeRCVR_b_HellaVlvSwitch));

    /* Gain: '<S1141>/Gain' incorporates:
     *  Logic: '<S692>/Logical4'
     */
    rtb_Gain_p = !rtb_UnitDelay_b0;

    /* RelationalOperator: '<S692>/Comparison5' incorporates:
     *  Constant: '<S706>/Constant'
     */
    rtb_Comparison4_o0 = (((uint32)
                           RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le)
                          != CePMTR_e_DISBL_All_Thrml);

    /* If: '<S692>/If' */
    rtPrevAction = RCVR_ac_DW.If_ActiveSubsystem;

    /* RelationalOperator: '<S692>/Comparison1' incorporates:
     *  RelationalOperator: '<S692>/Comparison2'
     *  RelationalOperator: '<S692>/Comparison4'
     *  RelationalOperator: '<S692>/Comparison6'
     *  Switch: '<S698>/Switch1'
     */
    VeRCVR_e_LTRBypVlv_State = VeRCVR_e_HTLBypVlv_State;

    /* If: '<S692>/If' incorporates:
     *  Constant: '<S707>/Constant'
     *  Constant: '<S708>/Constant'
     *  Constant: '<S709>/Constant'
     *  Constant: '<S710>/Constant'
     *  Logic: '<S692>/Logical'
     *  Logic: '<S692>/Logical1'
     *  Logic: '<S692>/Logical2'
     *  Logic: '<S692>/Logical3'
     *  RelationalOperator: '<S692>/Comparison1'
     *  RelationalOperator: '<S692>/Comparison2'
     *  RelationalOperator: '<S692>/Comparison4'
     *  RelationalOperator: '<S692>/Comparison6'
     */
    if (((((uint32)VeRCVR_e_LTRBypVlv_State) == CeRCVR_e_CPV_States_Calibration)
         && rtb_Gain_p) && rtb_Comparison4_o0)
    {
        RCVR_ac_DW.If_ActiveSubsystem = 0;
    }
    else if ((rtb_Gain_p && (((uint32)VeRCVR_e_LTRBypVlv_State) ==
                             CeRCVR_e_CPV_States_Faulty)) && rtb_Comparison4_o0)
    {
        RCVR_ac_DW.If_ActiveSubsystem = 1;
    }
    else if (rtb_Gain_p && (((uint32)VeRCVR_e_LTRBypVlv_State) ==
                            CeRCVR_e_CPV_States_Save))
    {
        RCVR_ac_DW.If_ActiveSubsystem = 2;
    }
    else if ((rtb_UnitDelay_b0 || (((uint32)VeRCVR_e_LTRBypVlv_State) ==
               CeRCVR_e_CPV_States_Powered)) && rtb_Comparison4_o0)
    {
        RCVR_ac_DW.If_ActiveSubsystem = 3;
    }
    else
    {
        RCVR_ac_DW.If_ActiveSubsystem = 4;
    }

    switch (RCVR_ac_DW.If_ActiveSubsystem)
    {
      case 0:
        if (RCVR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S499>/Calibration' incorporates:
             *  ActionPort: '<S601>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S633>/EdgeRising' */
            /* SystemReset for If: '<S692>/If' incorporates:
             *  UnitDelay: '<S634>/UnitDelay'
             *  UnitDelay: '<S635>/UnitDelay'
             *  UnitDelay: '<S639>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_lq = false;

            /* End of SystemReset for SubSystem: '<S633>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S633>/CountDownResetEnabled1' */
            RCVR_ac_DW.UnitDelay_DSTATE_ea = 0U;

            /* End of SystemReset for SubSystem: '<S633>/CountDownResetEnabled1' */

            /* SystemReset for Atomic SubSystem: '<S633>/SignalLatchOnWithReset' */
            RCVR_ac_DW.UnitDelay_DSTATE_kl = false;

            /* End of SystemReset for SubSystem: '<S633>/SignalLatchOnWithReset' */
            /* End of SystemReset for SubSystem: '<S499>/Calibration' */
        }

        /* Outputs for IfAction SubSystem: '<S499>/Calibration' incorporates:
         *  ActionPort: '<S601>/ActionPort'
         */
        /* Lookup_n-D: '<S1180>/Vector' incorporates:
         *  Constant: '<S632>/Calib'
         *  SignalConversion generated from: '<S601>/Vlv_Cmd'
         */
        rtb_Sum1 = KeRCVR_Pct_HTLBypVlv_CalibStCmd;

        /* Outputs for Atomic SubSystem: '<S633>/EdgeRising' */
        /* Logic: '<S635>/AND' incorporates:
         *  Logic: '<S635>/OR1'
         *  UnitDelay: '<S635>/UnitDelay'
         */
        rtb_Comparison4_o0 = !RCVR_ac_DW.UnitDelay_DSTATE_lq;

        /* Update for UnitDelay: '<S635>/UnitDelay' incorporates:
         *  Constant: '<S633>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_lq = true;

        /* End of Outputs for SubSystem: '<S633>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S633>/CountDownResetEnabled1' */
        /* Switch: '<S634>/Switch1' incorporates:
         *  Constant: '<S634>/ConstantValue'
         *  Constant: '<S638>/Calib'
         *  RelationalOperator: '<S634>/GreaterThan'
         *  Switch: '<S634>/Switch2'
         *  UnitDelay: '<S634>/UnitDelay'
         */
        if (rtb_Comparison4_o0)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_ea = KeRCVR_Cnt_HTL_CalibCalRq_Cnt;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_ea) > 0)
            {
                /* UnitDelay: '<S634>/UnitDelay' incorporates:
                 *  Constant: '<S634>/ConstantValue1'
                 *  Sum: '<S634>/Subtraction'
                 *  Switch: '<S634>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_ea = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_ea) - 1));
            }
        }

        /* End of Switch: '<S634>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S633>/SignalLatchOnWithReset' */
        /* Logic: '<S639>/OR1' incorporates:
         *  Constant: '<S634>/ConstantValue2'
         *  Logic: '<S633>/Logical2'
         *  Logic: '<S639>/NOT'
         *  Logic: '<S639>/OR'
         *  RelationalOperator: '<S634>/GreaterThan1'
         *  UnitDelay: '<S634>/UnitDelay'
         *  UnitDelay: '<S639>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_kl = (rtb_Comparison4_o0 || ((((sint32)
            RCVR_ac_DW.UnitDelay_DSTATE_ea) > 0) &&
            (RCVR_ac_DW.UnitDelay_DSTATE_kl)));

        /* End of Outputs for SubSystem: '<S633>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S633>/CountDownResetEnabled1' */

        /* Switch: '<S633>/Switch' */
        if (RCVR_ac_DW.UnitDelay_DSTATE_kl)
        {
            /* Merge: '<S602>/Merge' incorporates:
             *  Constant: '<S636>/Constant'
             */
            RCVR_ac_B.Merge_p = CeRCVR_e_CPV_Dual_Pstn_Calibration;
        }
        else
        {
            /* Merge: '<S602>/Merge' incorporates:
             *  Constant: '<S637>/Constant'
             */
            RCVR_ac_B.Merge_p = CeRCVR_e_CPV_No_Calibration;
        }

        /* End of Switch: '<S633>/Switch' */

        /* Merge: '<S610>/Merge' incorporates:
         *  Constant: '<S601>/FALSEConstant'
         *  SignalConversion generated from: '<S601>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_d = false;

        /* End of Outputs for SubSystem: '<S499>/Calibration' */
        break;

      case 1:
        if (RCVR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S499>/Faulty' incorporates:
             *  ActionPort: '<S605>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S643>/EdgeRising' */
            /* SystemReset for If: '<S692>/If' incorporates:
             *  UnitDelay: '<S644>/UnitDelay'
             *  UnitDelay: '<S645>/UnitDelay'
             *  UnitDelay: '<S649>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_py = false;

            /* End of SystemReset for SubSystem: '<S643>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S643>/CountDownResetEnabled1' */
            RCVR_ac_DW.UnitDelay_DSTATE_l = 0U;

            /* End of SystemReset for SubSystem: '<S643>/CountDownResetEnabled1' */

            /* SystemReset for Atomic SubSystem: '<S643>/SignalLatchOnWithReset' */
            RCVR_ac_DW.UnitDelay_DSTATE_k2 = false;

            /* End of SystemReset for SubSystem: '<S643>/SignalLatchOnWithReset' */
            /* End of SystemReset for SubSystem: '<S499>/Faulty' */
        }

        /* Outputs for IfAction SubSystem: '<S499>/Faulty' incorporates:
         *  ActionPort: '<S605>/ActionPort'
         */
        /* Lookup_n-D: '<S1180>/Vector' incorporates:
         *  Constant: '<S642>/Calib'
         *  SignalConversion generated from: '<S605>/Vlv_Cmd'
         */
        rtb_Sum1 = KeRCVR_Pct_HTLBypVlv_FltyStCmd;

        /* Outputs for Atomic SubSystem: '<S643>/EdgeRising' */
        /* Logic: '<S645>/AND' incorporates:
         *  Logic: '<S645>/OR1'
         *  UnitDelay: '<S645>/UnitDelay'
         */
        rtb_Comparison4_o0 = !RCVR_ac_DW.UnitDelay_DSTATE_py;

        /* Update for UnitDelay: '<S645>/UnitDelay' incorporates:
         *  Constant: '<S643>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_py = true;

        /* End of Outputs for SubSystem: '<S643>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S643>/CountDownResetEnabled1' */
        /* Switch: '<S644>/Switch1' incorporates:
         *  Constant: '<S644>/ConstantValue'
         *  Constant: '<S648>/Calib'
         *  RelationalOperator: '<S644>/GreaterThan'
         *  Switch: '<S644>/Switch2'
         *  UnitDelay: '<S644>/UnitDelay'
         */
        if (rtb_Comparison4_o0)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_l = KeRCVR_Cnt_HTL_FltyCalRq_Cnt;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_l) > 0)
            {
                /* UnitDelay: '<S644>/UnitDelay' incorporates:
                 *  Constant: '<S644>/ConstantValue1'
                 *  Sum: '<S644>/Subtraction'
                 *  Switch: '<S644>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_l = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_l) - 1));
            }
        }

        /* End of Switch: '<S644>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S643>/SignalLatchOnWithReset' */
        /* Logic: '<S649>/OR1' incorporates:
         *  Constant: '<S644>/ConstantValue2'
         *  Logic: '<S643>/Logical2'
         *  Logic: '<S649>/NOT'
         *  Logic: '<S649>/OR'
         *  RelationalOperator: '<S644>/GreaterThan1'
         *  UnitDelay: '<S644>/UnitDelay'
         *  UnitDelay: '<S649>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_k2 = (rtb_Comparison4_o0 || ((((sint32)
            RCVR_ac_DW.UnitDelay_DSTATE_l) > 0) &&
            (RCVR_ac_DW.UnitDelay_DSTATE_k2)));

        /* End of Outputs for SubSystem: '<S643>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S643>/CountDownResetEnabled1' */

        /* Switch: '<S643>/Switch' */
        if (RCVR_ac_DW.UnitDelay_DSTATE_k2)
        {
            /* Merge: '<S602>/Merge' incorporates:
             *  Constant: '<S647>/Constant'
             */
            RCVR_ac_B.Merge_p = CeRCVR_e_CPV_Dual_Pstn_Calibration;
        }
        else
        {
            /* Merge: '<S602>/Merge' incorporates:
             *  Constant: '<S646>/Constant'
             */
            RCVR_ac_B.Merge_p = CeRCVR_e_CPV_No_Calibration;
        }

        /* End of Switch: '<S643>/Switch' */

        /* Merge: '<S610>/Merge' incorporates:
         *  Constant: '<S605>/FALSEConstant'
         *  SignalConversion generated from: '<S605>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_d = false;

        /* End of Outputs for SubSystem: '<S499>/Faulty' */
        break;

      case 2:
        if (RCVR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S499>/Save_Position' incorporates:
             *  ActionPort: '<S611>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S687>/EdgeRising1' */
            /* SystemReset for If: '<S692>/If' incorporates:
             *  UnitDelay: '<S688>/UnitDelay'
             *  UnitDelay: '<S689>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_lp4 = false;

            /* End of SystemReset for SubSystem: '<S687>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S687>/CountDownResetEnabled' */
            RCVR_ac_DW.UnitDelay_DSTATE_p = 0U;

            /* End of SystemReset for SubSystem: '<S687>/CountDownResetEnabled' */
            /* End of SystemReset for SubSystem: '<S499>/Save_Position' */
        }

        /* Outputs for IfAction SubSystem: '<S499>/Save_Position' incorporates:
         *  ActionPort: '<S611>/ActionPort'
         */
        /* Lookup_n-D: '<S1180>/Vector' incorporates:
         *  Constant: '<S686>/Calib'
         *  SignalConversion generated from: '<S611>/Vlv_Cmd'
         */
        rtb_Sum1 = KeRCVR_Pct_HTL_Cmnd_At_Sv;

        /* Merge: '<S602>/Merge' incorporates:
         *  Constant: '<S685>/Constant'
         *  SignalConversion generated from: '<S611>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_p = CeRCVR_e_CPV_No_Calibration;

        /* Outputs for Atomic SubSystem: '<S687>/EdgeRising1' */
        /* Logic: '<S689>/OR1' incorporates:
         *  UnitDelay: '<S689>/UnitDelay'
         */
        rtb_Comparison4_o0 = !RCVR_ac_DW.UnitDelay_DSTATE_lp4;

        /* Update for UnitDelay: '<S689>/UnitDelay' incorporates:
         *  Constant: '<S687>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_lp4 = true;

        /* Outputs for Atomic SubSystem: '<S687>/CountDownResetEnabled' */
        /* Switch: '<S688>/Switch1' incorporates:
         *  Constant: '<S688>/ConstantValue'
         *  Constant: '<S690>/Calib'
         *  Logic: '<S689>/AND'
         *  RelationalOperator: '<S688>/GreaterThan'
         *  Switch: '<S688>/Switch2'
         *  UnitDelay: '<S688>/UnitDelay'
         */
        if (rtb_Comparison4_o0)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_p = KeRCVR_Cnt_HTL_SvRq_Cntr;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_p) > 0)
            {
                /* UnitDelay: '<S688>/UnitDelay' incorporates:
                 *  Constant: '<S688>/ConstantValue1'
                 *  Sum: '<S688>/Subtraction'
                 *  Switch: '<S688>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_p = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_p) - 1));
            }
        }

        /* End of Switch: '<S688>/Switch1' */
        /* End of Outputs for SubSystem: '<S687>/EdgeRising1' */

        /* Merge: '<S610>/Merge' incorporates:
         *  Constant: '<S688>/ConstantValue2'
         *  Logic: '<S687>/Logical2'
         *  RelationalOperator: '<S688>/GreaterThan1'
         *  UnitDelay: '<S688>/UnitDelay'
         */
        RCVR_ac_B.Merge_d = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_p) <= 0);

        /* End of Outputs for SubSystem: '<S687>/CountDownResetEnabled' */
        /* End of Outputs for SubSystem: '<S499>/Save_Position' */
        break;

      case 3:
        /* Switch: '<S499>/Switch' incorporates:
         *  Constant: '<S608>/Calib'
         */
        if (KeRCVR_b_BattHtrVlvSwitch)
        {
            /* Outputs for IfAction SubSystem: '<S499>/Powered' incorporates:
             *  ActionPort: '<S609>/ActionPort'
             */
            /* Lookup_n-D: '<S1180>/Vector' incorporates:
             *  Inport: '<S609>/HTLBypVlv_Cmd'
             */
            rtb_Sum1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bo;

            /* End of Outputs for SubSystem: '<S499>/Powered' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S499>/Powered' incorporates:
             *  ActionPort: '<S609>/ActionPort'
             */
            /* Lookup_n-D: '<S1180>/Vector' incorporates:
             *  Inport: '<S609>/HTLBypVlv_Cmd'
             */
            rtb_Sum1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h;

            /* End of Outputs for SubSystem: '<S499>/Powered' */
        }

        /* End of Switch: '<S499>/Switch' */

        /* Outputs for IfAction SubSystem: '<S499>/Powered' incorporates:
         *  ActionPort: '<S609>/ActionPort'
         */
        /* Merge: '<S602>/Merge' incorporates:
         *  Constant: '<S684>/Constant'
         *  SignalConversion generated from: '<S609>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_p = CeRCVR_e_CPV_No_Calibration;

        /* Merge: '<S610>/Merge' incorporates:
         *  Constant: '<S609>/FALSEConstant'
         *  SignalConversion generated from: '<S609>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_d = false;

        /* End of Outputs for SubSystem: '<S499>/Powered' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S499>/Default' incorporates:
         *  ActionPort: '<S604>/ActionPort'
         */
        /* Lookup_n-D: '<S1180>/Vector' incorporates:
         *  Constant: '<S641>/Calib'
         *  SignalConversion generated from: '<S604>/Vlv_Cmd'
         */
        rtb_Sum1 = KeRCVR_Pct_HTLBypVlv_DefltStCmd;

        /* Merge: '<S602>/Merge' incorporates:
         *  Constant: '<S640>/Constant'
         *  SignalConversion generated from: '<S604>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_p = CeRCVR_e_CPV_No_Calibration;

        /* Merge: '<S610>/Merge' incorporates:
         *  Constant: '<S604>/FALSEConstant'
         *  SignalConversion generated from: '<S604>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_d = false;

        /* End of Outputs for SubSystem: '<S499>/Default' */
        break;
    }

    /* Outputs for Atomic SubSystem: '<S660>/EdgeFalling' */
    /* Logic: '<S663>/AND' incorporates:
     *  Logic: '<S663>/OR1'
     *  UnitDelay: '<S660>/UnitDelay'
     *  UnitDelay: '<S663>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_pf = ((!rtb_AND_lo) &&
        (RCVR_ac_DW.UnitDelay_DSTATE_dc));

    /* Update for UnitDelay: '<S663>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_dc = rtb_AND_lo;

    /* End of Outputs for SubSystem: '<S660>/EdgeFalling' */

    /* RelationalOperator: '<S673>/RelationalOperator' incorporates:
     *  Constant: '<S673>/Constant'
     *  DataStoreRead: '<S673>/VeDFIB_y_StatusByte_HB_PSC_CtrlValCCktPerf'
     *  S-Function (sfix_bitop): '<S673>/BitwiseOperator7'
     */
    rtb_AND_lo = ((((sint32)RCVR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf) & 2) >
                  0);

    /* Outputs for Atomic SubSystem: '<S607>/SignalLatchOn3' */
    /* Logic: '<S682>/OR2' incorporates:
     *  Constant: '<S681>/Calib'
     *  Logic: '<S607>/Logical12'
     *  RelationalOperator: '<S607>/RelationalOperator'
     *  UnitDelay: '<S682>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_gg1 =
        (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks <
           KeRCVR_Pct_HTLMinPercentOpen) && rtb_AND_lo) ||
         (RCVR_ac_DW.UnitDelay_DSTATE_gg1));

    /* End of Outputs for SubSystem: '<S607>/SignalLatchOn3' */

    /* Outputs for Atomic SubSystem: '<S607>/SignalLatchOn4' */
    /* Logic: '<S683>/OR2' incorporates:
     *  Constant: '<S681>/Calib'
     *  Logic: '<S607>/Logical13'
     *  RelationalOperator: '<S607>/RelationalOperator1'
     *  UnitDelay: '<S683>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_iv = ((rtb_AND_lo &&
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks >
         KeRCVR_Pct_HTLMinPercentOpen)) || (RCVR_ac_DW.UnitDelay_DSTATE_iv));

    /* End of Outputs for SubSystem: '<S607>/SignalLatchOn4' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVF'
     */
    /* S-Function (sfix_bitop): '<S674>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S674>/StatusByte_LostCommHB_PSCCooCtrlVlvC'
     *  S-Function (sfix_bitop): '<S1329>/Bitwise Operator2'
     *  Switch: '<S1316>/Switch'
     */
    tmp_c = ((uint32)RCVR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC) & 1U;

    /* S-Function (sfix_bitop): '<S674>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S674>/StatusByte_LostCommHB_PSCCooCtrlVlvC'
     *  S-Function (sfix_bitop): '<S1329>/Bitwise Operator1'
     *  Switch: '<S1316>/Switch'
     */
    tmp_d = ((uint32)RCVR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC) & 64U;

    /* Switch: '<S675>/Switch1' incorporates:
     *  Constant: '<S674>/Constant1'
     *  Constant: '<S674>/Constant2'
     *  Logic: '<S607>/Logical11'
     *  Logic: '<S674>/Logical Operator'
     *  RelationalOperator: '<S674>/Relational Operator1'
     *  RelationalOperator: '<S674>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S674>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S674>/Bitwise Operator2'
     *  Switch: '<S676>/Switch1'
     *  Switch: '<S677>/Switch1'
     *  UnitDelay: '<S682>/UnitDelay'
     *  UnitDelay: '<S683>/UnitDelay'
     */
    if ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nx) || ((tmp_c != 0U) &&
         (tmp_d == 0U)))
    {
        /* Switch: '<S675>/Switch1' incorporates:
         *  Constant: '<S668>/Constant'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_of = CeRCVR_e_SNA;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_gg1)
    {
        /* Switch: '<S675>/Switch1' incorporates:
         *  Constant: '<S672>/Constant'
         *  Switch: '<S676>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_of = CeRCVR_e_Faulty_Closed;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_iv)
    {
        /* Switch: '<S675>/Switch1' incorporates:
         *  Constant: '<S670>/Constant'
         *  Switch: '<S676>/Switch1'
         *  Switch: '<S677>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_of = CeRCVR_e_Faulty_Open;
    }
    else
    {
        /* Logic: '<S607>/LogicalOperator' incorporates:
         *  Switch: '<S676>/Switch1'
         *  Switch: '<S677>/Switch1'
         */
        rtb_AND_lo = !rtb_AND_lo;

        /* Switch: '<S678>/Switch1' incorporates:
         *  Constant: '<S680>/Calib'
         *  Constant: '<S681>/Calib'
         *  Logic: '<S607>/Logical10'
         *  Logic: '<S607>/Logical9'
         *  RelationalOperator: '<S607>/RelationalOperator2'
         *  RelationalOperator: '<S607>/RelationalOperator3'
         *  RelationalOperator: '<S607>/RelationalOperator4'
         *  Switch: '<S676>/Switch1'
         *  Switch: '<S677>/Switch1'
         *  Switch: '<S679>/Switch1'
         */
        if ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks <
                KeRCVR_Pct_HTLMinPercentOpen) && rtb_AND_lo)
        {
            /* Switch: '<S675>/Switch1' incorporates:
             *  Constant: '<S671>/Constant'
             *  Switch: '<S677>/Switch1'
             *  Switch: '<S678>/Switch1'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_of = CeRCVR_e_Closed;
        }
        else
        {
            if ((rtb_AND_lo &&
                    (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks >=
                     KeRCVR_Pct_HTLMinPercentOpen)) &&
                    (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks <=
                     KeRCVR_Pct_HTLMaxPercentOpen))
            {
                /* Switch: '<S679>/Switch1' incorporates:
                 *  Constant: '<S669>/Constant'
                 *  Switch: '<S675>/Switch1'
                 *  Switch: '<S677>/Switch1'
                 *  Switch: '<S678>/Switch1'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_of = CeRCVR_e_Open;
            }
        }

        /* End of Switch: '<S678>/Switch1' */
    }

    /* End of Switch: '<S675>/Switch1' */

    /* RelationalOperator: '<S761>/Comparison4' incorporates:
     *  Constant: '<S799>/Constant'
     */
    rtb_Comparison4_o0 = (((uint32)
                           RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
                          CeTAIR_e_CPV_Calibration_Taking_Place);

    /* Outputs for Atomic SubSystem: '<S761>/EdgeFalling2' */
    /* Logic: '<S796>/AND' incorporates:
     *  Logic: '<S796>/OR1'
     *  UnitDelay: '<S796>/UnitDelay'
     */
    rtb_AND_lo = ((!rtb_Comparison4_o0) && (RCVR_ac_DW.UnitDelay_DSTATE_pk));

    /* Update for UnitDelay: '<S796>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pk = rtb_Comparison4_o0;

    /* End of Outputs for SubSystem: '<S761>/EdgeFalling2' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVF'
     */
    /* S-Function (sfix_bitop): '<S808>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S808>/StatusByte_LosCommHybPSCCtrlValA'
     *  S-Function (sfix_bitop): '<S1248>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S779>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S836>/Bitwise Operator2'
     *  Switch: '<S1229>/Switch'
     *  Switch: '<S767>/Switch'
     */
    rtb_Logical_a_tmp = ((uint32)RCVR_ac_DW.StatusByte_LosCommHybPSCCtrlValA) &
        1U;

    /* S-Function (sfix_bitop): '<S808>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S808>/StatusByte_LosCommHybPSCCtrlValA'
     *  S-Function (sfix_bitop): '<S1248>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S779>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S836>/Bitwise Operator1'
     *  Switch: '<S1229>/Switch'
     *  Switch: '<S767>/Switch'
     */
    rtb_Logical_a_tmp_0 = ((uint32)RCVR_ac_DW.StatusByte_LosCommHybPSCCtrlValA)
        & 64U;

    /* S-Function (sfix_bitop): '<S807>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S807>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S1247>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S338>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S835>/Bitwise Operator2'
     *  Switch: '<S1229>/Switch'
     *  Switch: '<S767>/Switch'
     */
    rtb_Logical_a_tmp_1 = ((uint32)RCVR_ac_DW.StatusByte_LIN1_BusOff) & 1U;

    /* S-Function (sfix_bitop): '<S807>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S807>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S1247>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S338>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S835>/Bitwise Operator1'
     *  Switch: '<S1229>/Switch'
     *  Switch: '<S767>/Switch'
     */
    rtb_Logical_a_tmp_2 = ((uint32)RCVR_ac_DW.StatusByte_LIN1_BusOff) & 64U;

    /* Outputs for IfAction SubSystem: '<S1189>/CPV_ChkDVC_Limits' incorporates:
     *  ActionPort: '<S1230>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S1230>/ChkPmpLimits' incorporates:
     *  ActionPort: '<S1239>/ActionPort'
     */
    /* If: '<S1230>/If' incorporates:
     *  DataStoreRead: '<S806>/StatusByte_HB_PSC_CtrlValACktPerf'
     *  If: '<S1189>/If'
     *  S-Function (sfix_bitop): '<S1242>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1242>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1246>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1246>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S806>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S806>/Bitwise Operator2'
     *  Switch: '<S1229>/Switch'
     */
    rtb_Logical_a_tmp_3 = ((uint32)RCVR_ac_DW.StatusByte_HB_PSC_CtrlValACktPerf)
        & 1U;
    rtb_Logical_a_tmp_4 = ((uint32)RCVR_ac_DW.StatusByte_HB_PSC_CtrlValACktPerf)
        & 64U;

    /* End of Outputs for SubSystem: '<S1230>/ChkPmpLimits' */
    /* End of Outputs for SubSystem: '<S1189>/CPV_ChkDVC_Limits' */

    /* Logic: '<S761>/Logical' incorporates:
     *  Constant: '<S806>/Constant1'
     *  Constant: '<S806>/Constant2'
     *  Constant: '<S807>/Constant1'
     *  Constant: '<S807>/Constant2'
     *  Constant: '<S808>/Constant1'
     *  Constant: '<S808>/Constant2'
     *  Constant: '<S811>/Calib'
     *  DataStoreRead: '<S761>/DataStoreRead1'
     *  Logic: '<S761>/Logical1'
     *  Logic: '<S761>/Logical2'
     *  Logic: '<S761>/Logical4'
     *  Logic: '<S806>/Logical Operator'
     *  Logic: '<S807>/Logical Operator'
     *  Logic: '<S808>/Logical Operator'
     *  RelationalOperator: '<S761>/Comparison1'
     *  RelationalOperator: '<S806>/Relational Operator1'
     *  RelationalOperator: '<S806>/Relational Operator2'
     *  RelationalOperator: '<S807>/Relational Operator1'
     *  RelationalOperator: '<S807>/Relational Operator2'
     *  RelationalOperator: '<S808>/Relational Operator1'
     *  RelationalOperator: '<S808>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S806>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S806>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S807>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S807>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S808>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S808>/Bitwise Operator2'
     */
    rtb_Comparison4_o0 = ((((RCVR_ac_DW.NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles >=
        KeRCVR_Cnt_MinCycles_CPV_Calib) && ((rtb_Logical_a_tmp_1 == 0U) ||
        (rtb_Logical_a_tmp_2 != 0U))) && ((rtb_Logical_a_tmp == 0U) ||
                            (rtb_Logical_a_tmp_0 != 0U))) &&
                          ((rtb_Logical_a_tmp_3 == 0U) || (rtb_Logical_a_tmp_4
                            != 0U)));

    /* Outputs for Atomic SubSystem: '<S761>/EdgeRising1' */
    /* Logic: '<S798>/OR1' incorporates:
     *  UnitDelay: '<S798>/UnitDelay'
     */
    rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_cb;

    /* Update for UnitDelay: '<S798>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_cb = rtb_Comparison4_o0;

    /* Outputs for Atomic SubSystem: '<S761>/CountDownResetEnabled' */
    /* Switch: '<S792>/Switch1' incorporates:
     *  Constant: '<S792>/ConstantValue'
     *  Constant: '<S810>/Calib'
     *  Logic: '<S792>/AND'
     *  Logic: '<S798>/AND'
     *  RelationalOperator: '<S792>/GreaterThan'
     *  Switch: '<S792>/Switch2'
     *  UnitDelay: '<S792>/UnitDelay'
     */
    if (rtb_Comparison4_o0 && rtb_OR1_oxb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_hy1 = KeRCVR_Cnt_CalRq_Duratn;
    }
    else
    {
        if (rtb_Comparison4_o0 && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_hy1) > 0))
        {
            /* UnitDelay: '<S792>/UnitDelay' incorporates:
             *  Constant: '<S792>/ConstantValue1'
             *  Sum: '<S792>/Subtraction'
             *  Switch: '<S792>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_hy1 = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_hy1) - 1));
        }
    }

    /* End of Switch: '<S792>/Switch1' */
    /* End of Outputs for SubSystem: '<S761>/EdgeRising1' */

    /* Gain: '<S1141>/Gain' incorporates:
     *  Constant: '<S792>/ConstantValue2'
     *  Logic: '<S761>/Logical3'
     *  RelationalOperator: '<S792>/GreaterThan1'
     *  UnitDelay: '<S792>/UnitDelay'
     */
    rtb_Gain_p = ((((sint32)RCVR_ac_DW.UnitDelay_DSTATE_hy1) > 0) ||
                  (VeRCVF_b_CPV_CalibStrt_DVC_Lim_AD));

    /* End of Outputs for SubSystem: '<S761>/CountDownResetEnabled' */

    /* Logic: '<S761>/Logical5' */
    rtb_OR1_oxb = (rtb_AND_lo || rtb_Gain_p);

    /* Outputs for Atomic SubSystem: '<S761>/EdgeFalling1' */
    /* Logic: '<S795>/AND' incorporates:
     *  Logic: '<S795>/OR1'
     *  UnitDelay: '<S795>/UnitDelay'
     */
    rtb_Comparison4_o0 = ((!rtb_OR1_oxb) && (RCVR_ac_DW.UnitDelay_DSTATE_nr));

    /* Update for UnitDelay: '<S795>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_nr = rtb_OR1_oxb;

    /* End of Outputs for SubSystem: '<S761>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S761>/EdgeRising' */
    /* Logic: '<S797>/AND' incorporates:
     *  Logic: '<S797>/OR1'
     *  UnitDelay: '<S797>/UnitDelay'
     */
    rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_jp;

    /* Update for UnitDelay: '<S797>/UnitDelay' incorporates:
     *  Constant: '<S761>/TRUEConstant1'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_jp = true;

    /* End of Outputs for SubSystem: '<S761>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S761>/CountDownResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S793>/EdgeRising' */
    /* Logic: '<S813>/OR1' incorporates:
     *  UnitDelay: '<S813>/UnitDelay'
     */
    rtb_OR1_kx = !RCVR_ac_DW.UnitDelay_DSTATE_pn;

    /* Update for UnitDelay: '<S813>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pn = rtb_OR1_oxb;

    /* Switch: '<S793>/Switch1' incorporates:
     *  Constant: '<S793>/ConstantValue'
     *  Constant: '<S812>/Calib'
     *  Logic: '<S813>/AND'
     *  RelationalOperator: '<S793>/GreaterThan'
     *  Switch: '<S793>/Switch2'
     *  UnitDelay: '<S793>/UnitDelay'
     */
    if (rtb_OR1_oxb && rtb_OR1_kx)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_fe = KeRCVR_Cnt_MinHCPUp_Time_IncrCPV_KeyCnt;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_fe) > 0)
        {
            /* UnitDelay: '<S793>/UnitDelay' incorporates:
             *  Constant: '<S793>/ConstantValue1'
             *  Sum: '<S793>/Subtraction'
             *  Switch: '<S793>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_fe = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_fe) - 1));
        }
    }

    /* End of Switch: '<S793>/Switch1' */
    /* End of Outputs for SubSystem: '<S793>/EdgeRising' */

    /* RelationalOperator: '<S793>/GreaterThan1' incorporates:
     *  Constant: '<S793>/ConstantValue2'
     *  UnitDelay: '<S793>/UnitDelay'
     */
    rtb_OR1_oxb = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_fe) > 0);

    /* End of Outputs for SubSystem: '<S761>/CountDownResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S761>/EdgeFalling' */
    /* Logic: '<S794>/AND' incorporates:
     *  Logic: '<S794>/OR1'
     *  UnitDelay: '<S794>/UnitDelay'
     */
    rtb_OR1_kx = ((!rtb_OR1_oxb) && (RCVR_ac_DW.UnitDelay_DSTATE_pr));

    /* Update for UnitDelay: '<S794>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pr = rtb_OR1_oxb;

    /* End of Outputs for SubSystem: '<S761>/EdgeFalling' */

    /* Switch: '<S761>/Switch1' incorporates:
     *  Constant: '<S761>/ConstantValue2'
     *  DataStoreRead: '<S761>/DataStoreRead'
     *  DataStoreWrite: '<S761>/DataStoreWrite'
     *  Sum: '<S761>/Sum'
     *  Switch: '<S761>/Switch'
     */
    if (rtb_Comparison4_o0)
    {
        RCVR_ac_DW.NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles = 0;
    }
    else
    {
        RCVR_ac_DW.NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles = (sint16)((rtb_OR1_kx ? 1
            : 0) + ((sint32)RCVR_ac_DW.NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles));
    }

    /* End of Switch: '<S761>/Switch1' */

    /* Switch: '<S761>/Switch2' incorporates:
     *  DataStoreWrite: '<S761>/DataStoreWrite1'
     */
    VeRCVR_b_CPV_Calibration_Request = ((!rtb_AND_lo) &&
        (VeRCVR_b_CPV_Calibration_Request));

    /* RelationalOperator: '<S778>/RelationalOperator' incorporates:
     *  Constant: '<S778>/Constant'
     *  DataStoreRead: '<S778>/VeDFIB_y_StatusByte_HB_PSC_CtrlValACktPerf'
     *  S-Function (sfix_bitop): '<S778>/BitwiseOperator7'
     */
    rtb_AND_lo = ((((sint32)RCVR_ac_DW.StatusByte_HB_PSC_CtrlValACktPerf) & 2) >
                  0);

    /* Outputs for Atomic SubSystem: '<S760>/SignalLatchOn1' */
    /* Logic: '<S789>/OR2' incorporates:
     *  Constant: '<S788>/Calib'
     *  Logic: '<S760>/Logical7'
     *  RelationalOperator: '<S760>/RelationalOperator'
     *  UnitDelay: '<S789>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_jy2 =
        (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh <
           KeRCVR_Pct_CPVMinPercentOpen) && rtb_AND_lo) ||
         (RCVR_ac_DW.UnitDelay_DSTATE_jy2));

    /* End of Outputs for SubSystem: '<S760>/SignalLatchOn1' */

    /* Outputs for Atomic SubSystem: '<S760>/SignalLatchOn2' */
    /* Logic: '<S790>/OR2' incorporates:
     *  Constant: '<S786>/Calib'
     *  Constant: '<S788>/Calib'
     *  Logic: '<S760>/Logical8'
     *  RelationalOperator: '<S760>/RelationalOperator1'
     *  RelationalOperator: '<S760>/RelationalOperator5'
     *  UnitDelay: '<S790>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_jy = (((rtb_AND_lo &&
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh >
         KeRCVR_Pct_CPVMinPercentOpen)) &&
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh <=
         KeRCVR_Pct_CPVBypassOpen)) || (RCVR_ac_DW.UnitDelay_DSTATE_jy));

    /* End of Outputs for SubSystem: '<S760>/SignalLatchOn2' */

    /* Outputs for Atomic SubSystem: '<S760>/SignalLatchOn3' */
    /* Logic: '<S791>/OR2' incorporates:
     *  Constant: '<S786>/Calib'
     *  Logic: '<S760>/Logical3'
     *  RelationalOperator: '<S760>/RelationalOperator6'
     *  UnitDelay: '<S791>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_m0 =
        (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh >
           KeRCVR_Pct_CPVBypassOpen) && rtb_AND_lo) ||
         (RCVR_ac_DW.UnitDelay_DSTATE_m0));

    /* End of Outputs for SubSystem: '<S760>/SignalLatchOn3' */

    /* Switch: '<S784>/Switch1' incorporates:
     *  Constant: '<S779>/Constant1'
     *  Constant: '<S779>/Constant2'
     *  Logic: '<S760>/Logical6'
     *  Logic: '<S779>/Logical Operator'
     *  RelationalOperator: '<S779>/Relational Operator1'
     *  RelationalOperator: '<S779>/Relational Operator2'
     *  Switch: '<S780>/Switch1'
     *  Switch: '<S781>/Switch1'
     *  Switch: '<S785>/Switch1'
     *  UnitDelay: '<S789>/UnitDelay'
     *  UnitDelay: '<S790>/UnitDelay'
     *  UnitDelay: '<S791>/UnitDelay'
     */
    if ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m0) ||
            ((rtb_Logical_a_tmp != 0U) && (rtb_Logical_a_tmp_0 == 0U)))
    {
        /* Switch: '<S784>/Switch1' incorporates:
         *  Constant: '<S776>/Constant'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_cn = CeRCVR_e_SNA;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_jy2)
    {
        /* Switch: '<S784>/Switch1' incorporates:
         *  Constant: '<S775>/Constant'
         *  Switch: '<S780>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_cn = CeRCVR_e_Faulty_Closed;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_jy)
    {
        /* Switch: '<S784>/Switch1' incorporates:
         *  Constant: '<S773>/Constant'
         *  Switch: '<S780>/Switch1'
         *  Switch: '<S781>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_cn = CeRCVR_e_Faulty_Open;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_m0)
    {
        /* Switch: '<S784>/Switch1' incorporates:
         *  Constant: '<S777>/Constant'
         *  Switch: '<S780>/Switch1'
         *  Switch: '<S781>/Switch1'
         *  Switch: '<S785>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_cn = CeRCVR_e_Faulty_Open_Bypass;
    }
    else
    {
        /* Logic: '<S760>/LogicalOperator' incorporates:
         *  Switch: '<S780>/Switch1'
         *  Switch: '<S781>/Switch1'
         *  Switch: '<S785>/Switch1'
         */
        rtb_AND_lo = !rtb_AND_lo;

        /* Switch: '<S782>/Switch1' incorporates:
         *  Constant: '<S787>/Calib'
         *  Constant: '<S788>/Calib'
         *  Logic: '<S760>/Logical1'
         *  Logic: '<S760>/Logical2'
         *  RelationalOperator: '<S760>/RelationalOperator2'
         *  RelationalOperator: '<S760>/RelationalOperator3'
         *  RelationalOperator: '<S760>/RelationalOperator4'
         *  Switch: '<S780>/Switch1'
         *  Switch: '<S781>/Switch1'
         *  Switch: '<S783>/Switch1'
         *  Switch: '<S785>/Switch1'
         */
        if ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh <
                KeRCVR_Pct_CPVMinPercentOpen) && rtb_AND_lo)
        {
            /* Switch: '<S784>/Switch1' incorporates:
             *  Constant: '<S774>/Constant'
             *  Switch: '<S782>/Switch1'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_cn = CeRCVR_e_Closed;
        }
        else
        {
            if ((rtb_AND_lo &&
                    (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh >=
                     KeRCVR_Pct_CPVMinPercentOpen)) &&
                    (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jh <=
                     KeRCVR_Pct_CPVMaxPercentOpen))
            {
                /* Switch: '<S783>/Switch1' incorporates:
                 *  Constant: '<S772>/Constant'
                 *  Switch: '<S782>/Switch1'
                 *  Switch: '<S784>/Switch1'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_cn = CeRCVR_e_Open;
            }
        }

        /* End of Switch: '<S782>/Switch1' */
    }

    /* End of Switch: '<S784>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S846>/EdgeRising' */
    /* Logic: '<S850>/AND' incorporates:
     *  Logic: '<S850>/OR1'
     *  UnitDelay: '<S846>/UnitDelay1'
     *  UnitDelay: '<S850>/UnitDelay'
     */
    rtb_AND_lo = ((VeRCVR_b_LINPrpVlv_Flt_AD) &&
                  (!RCVR_ac_DW.UnitDelay_DSTATE_hj));

    /* Update for UnitDelay: '<S850>/UnitDelay' incorporates:
     *  UnitDelay: '<S846>/UnitDelay1'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_hj = VeRCVR_b_LINPrpVlv_Flt_AD;

    /* End of Outputs for SubSystem: '<S846>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S846>/CountDownResetEnabled' */
    /* Switch: '<S847>/Switch1' incorporates:
     *  Constant: '<S847>/ConstantValue'
     *  Constant: '<S853>/Calib'
     *  Logic: '<S846>/Logical8'
     *  Logic: '<S847>/AND'
     *  RelationalOperator: '<S847>/GreaterThan'
     *  Switch: '<S847>/Switch2'
     *  UnitDelay: '<S846>/UnitDelay'
     *  UnitDelay: '<S846>/UnitDelay1'
     *  UnitDelay: '<S847>/UnitDelay'
     */
    if (rtb_AND_lo || (RCVR_ac_DW.UnitDelay_DSTATE_jn))
    {
        RCVR_ac_DW.UnitDelay_DSTATE_jc = KeRCVR_Cnt_CPV_MaxTimeFlty;
    }
    else
    {
        if ((VeRCVR_b_LINPrpVlv_Flt_AD) && (((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_jc) > 0))
        {
            /* UnitDelay: '<S847>/UnitDelay' incorporates:
             *  Constant: '<S847>/ConstantValue1'
             *  Sum: '<S847>/Subtraction'
             *  Switch: '<S847>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_jc = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_jc) - 1));
        }
    }

    /* End of Switch: '<S847>/Switch1' */

    /* Logic: '<S846>/Logical6' incorporates:
     *  Constant: '<S847>/ConstantValue2'
     *  Logic: '<S846>/Logical5'
     *  RelationalOperator: '<S847>/GreaterThan1'
     *  UnitDelay: '<S846>/UnitDelay1'
     *  UnitDelay: '<S847>/UnitDelay'
     */
    rtb_AND_lo = ((VeRCVR_b_LINPrpVlv_Flt_AD) && (((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_jc) <= 0));

    /* End of Outputs for SubSystem: '<S846>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S846>/EdgeRising1' */
    /* Logic: '<S851>/OR1' incorporates:
     *  UnitDelay: '<S851>/UnitDelay'
     */
    rtb_Comparison4_o0 = !RCVR_ac_DW.UnitDelay_DSTATE_gg;

    /* Update for UnitDelay: '<S851>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_gg = rtb_AND_lo;

    /* Outputs for Atomic SubSystem: '<S846>/CountDownResetEnabled1' */
    /* Switch: '<S848>/Switch1' incorporates:
     *  Constant: '<S848>/ConstantValue'
     *  Constant: '<S852>/Calib'
     *  Logic: '<S848>/AND'
     *  Logic: '<S851>/AND'
     *  RelationalOperator: '<S848>/GreaterThan'
     *  Switch: '<S848>/Switch2'
     *  UnitDelay: '<S848>/UnitDelay'
     */
    if (rtb_AND_lo && rtb_Comparison4_o0)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_fs = KeRCVR_Cnt_CPV_CmndOutFlty;
    }
    else
    {
        if (rtb_AND_lo && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_fs) > 0))
        {
            /* UnitDelay: '<S848>/UnitDelay' incorporates:
             *  Constant: '<S848>/ConstantValue1'
             *  Sum: '<S848>/Subtraction'
             *  Switch: '<S848>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_fs = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_fs) - 1));
        }
    }

    /* End of Switch: '<S848>/Switch1' */
    /* End of Outputs for SubSystem: '<S846>/EdgeRising1' */

    /* Logic: '<S846>/Logical7' incorporates:
     *  Constant: '<S848>/ConstantValue2'
     *  RelationalOperator: '<S848>/GreaterThan1'
     *  UnitDelay: '<S848>/UnitDelay'
     */
    rtb_Comparison4_o0 = (rtb_AND_lo && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_fs)
                           > 0));

    /* End of Outputs for SubSystem: '<S846>/CountDownResetEnabled1' */

    /* Switch: '<S767>/Switch' incorporates:
     *  Constant: '<S842>/Calib'
     */
    if (KeRCVR_b_CPV_Flty_SD)
    {
        /* Switch: '<S767>/Switch' incorporates:
         *  Constant: '<S841>/Calib'
         */
        VeRCVR_b_LINPrpVlv_Flt_AD = KeRCVR_b_CPV_Flty_D;
    }
    else
    {
        /* Switch: '<S767>/Switch' incorporates:
         *  Constant: '<S832>/Constant'
         *  Constant: '<S833>/Constant'
         *  Constant: '<S834>/Constant'
         *  Constant: '<S835>/Constant1'
         *  Constant: '<S835>/Constant2'
         *  Constant: '<S836>/Constant1'
         *  Constant: '<S836>/Constant2'
         *  Constant: '<S837>/Calib'
         *  Constant: '<S838>/Calib'
         *  Constant: '<S839>/Calib'
         *  Constant: '<S840>/Calib'
         *  Constant: '<S843>/Calib'
         *  Constant: '<S844>/Calib'
         *  Constant: '<S845>/Calib'
         *  Logic: '<S767>/Logical'
         *  Logic: '<S767>/Logical1'
         *  Logic: '<S767>/Logical10'
         *  Logic: '<S767>/Logical11'
         *  Logic: '<S767>/Logical2'
         *  Logic: '<S767>/Logical3'
         *  Logic: '<S767>/Logical4'
         *  Logic: '<S767>/Logical5'
         *  Logic: '<S767>/Logical6'
         *  Logic: '<S767>/Logical7'
         *  Logic: '<S767>/Logical8'
         *  Logic: '<S767>/Logical9'
         *  Logic: '<S835>/Logical Operator'
         *  Logic: '<S836>/Logical Operator'
         *  RelationalOperator: '<S767>/Comparison1'
         *  RelationalOperator: '<S767>/Comparison2'
         *  RelationalOperator: '<S767>/Comparison4'
         *  RelationalOperator: '<S835>/Relational Operator1'
         *  RelationalOperator: '<S835>/Relational Operator2'
         *  RelationalOperator: '<S836>/Relational Operator1'
         *  RelationalOperator: '<S836>/Relational Operator2'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         */
        VeRCVR_b_LINPrpVlv_Flt_AD =
            ((((((((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m0) &&
                   (KeRCVR_b_CPV_PstnActSNA_FltChk_Enbl)) || ((((uint32)
                     RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gj) ==
                    CeTAIR_e_CPV_Status_Calibration_Rq) &&
                   (KeRCVR_b_CPV_ErrStsCal_FltChk_Enbl))) || ((((uint32)
                    RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
                   CeTAIR_e_CPV_Calibration_Not_Complete) &&
                  (KeRCVR_b_CPV_CalSts_NeedRef_FltChk_Enbl))) || ((((uint32)
                   RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
                  CeTAIR_e_CPV_Calibration_Fail) &&
                 (KeRCVR_b_CPV_CalSts_RefFail_FltChk_Enbl))) &&
               ((!rtb_Comparison4_o0) || (KeRCVR_b_CPV_FltStTm_FltChk_Ovrd))) &&
              (((rtb_Logical_a_tmp_1 == 0U) || (rtb_Logical_a_tmp_2 != 0U)) ||
               (KeRCVR_b_CPV_LINBusOff_FltChk_Ovrd))) && (((rtb_Logical_a_tmp ==
                0U) || (rtb_Logical_a_tmp_0 != 0U)) ||
              (KeRCVR_b_CPV_LOC_FltChk_Ovrd)));
    }

    /* Switch: '<S868>/Switch1' incorporates:
     *  Switch: '<S869>/Switch1'
     *  Switch: '<S870>/Switch1'
     */
    if (rtb_Gain_p)
    {
        /* Switch: '<S868>/Switch1' incorporates:
         *  Constant: '<S864>/Constant'
         */
        VeRCVR_e_LINPrpVlv_State = CeRCVR_e_CPV_States_Calibration;
    }
    else if (VeRCVR_b_LINPrpVlv_Flt_AD)
    {
        /* Switch: '<S869>/Switch1' incorporates:
         *  Constant: '<S863>/Constant'
         *  Switch: '<S868>/Switch1'
         */
        VeRCVR_e_LINPrpVlv_State = CeRCVR_e_CPV_States_Faulty;
    }
    else if (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ot)
    {
        /* Switch: '<S870>/Switch1' incorporates:
         *  Constant: '<S867>/Constant'
         *  Switch: '<S868>/Switch1'
         *  Switch: '<S869>/Switch1'
         */
        VeRCVR_e_LINPrpVlv_State = CeRCVR_e_CPV_States_Save;
    }
    else
    {
        /* RelationalOperator: '<S872>/Comparison4' incorporates:
         *  RelationalOperator: '<S872>/Comparison1'
         *  RelationalOperator: '<S872>/Comparison2'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S869>/Switch1'
         *  Switch: '<S870>/Switch1'
         */
        tmp_1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_jwt;

        /* Switch: '<S871>/Switch1' incorporates:
         *  Constant: '<S873>/Constant'
         *  Constant: '<S874>/Constant'
         *  Constant: '<S875>/Constant'
         *  Logic: '<S872>/Logical2'
         *  RelationalOperator: '<S872>/Comparison1'
         *  RelationalOperator: '<S872>/Comparison2'
         *  RelationalOperator: '<S872>/Comparison4'
         *  Switch: '<S869>/Switch1'
         *  Switch: '<S870>/Switch1'
         */
        if (((((uint32)tmp_1) == CeTHMR_e_Vlv1Pwrd) || (((uint32)tmp_1) ==
                CeTHMR_e_Vlv1N2Pwrd)) || (((uint32)tmp_1) ==
                CeTHMR_e_Vlv1N2N3Pwrd))
        {
            /* Switch: '<S868>/Switch1' incorporates:
             *  Constant: '<S865>/Constant'
             *  Switch: '<S870>/Switch1'
             */
            VeRCVR_e_LINPrpVlv_State = CeRCVR_e_CPV_States_Powered;
        }
        else
        {
            /* Switch: '<S868>/Switch1' incorporates:
             *  Constant: '<S866>/Constant'
             *  Switch: '<S870>/Switch1'
             */
            VeRCVR_e_LINPrpVlv_State = CeRCVR_e_CPV_States_Default;
        }

        /* End of Switch: '<S871>/Switch1' */
    }

    /* End of Switch: '<S868>/Switch1' */

    /* Logic: '<S862>/Logical1' incorporates:
     *  Constant: '<S881>/Calib'
     *  Logic: '<S506>/Logical8'
     *  Logic: '<S981>/Logical4'
     */
    rtb_AND_lo = !KeRCVR_b_PierburgSwitch;

    /* RelationalOperator: '<S862>/Comparison5' incorporates:
     *  Constant: '<S876>/Constant'
     */
    rtb_OR1_oxb = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le)
                   != CePMTR_e_DISBL_All_Thrml);

    /* If: '<S862>/If' */
    rtPrevAction = RCVR_ac_DW.If_ActiveSubsystem_p;

    /* RelationalOperator: '<S692>/Comparison1' incorporates:
     *  RelationalOperator: '<S862>/Comparison1'
     *  RelationalOperator: '<S862>/Comparison2'
     *  RelationalOperator: '<S862>/Comparison4'
     *  RelationalOperator: '<S862>/Comparison6'
     *  Switch: '<S868>/Switch1'
     */
    VeRCVR_e_LTRBypVlv_State = VeRCVR_e_LINPrpVlv_State;

    /* If: '<S862>/If' incorporates:
     *  Constant: '<S877>/Constant'
     *  Constant: '<S878>/Constant'
     *  Constant: '<S879>/Constant'
     *  Constant: '<S880>/Constant'
     *  Constant: '<S881>/Calib'
     *  Logic: '<S862>/Logical'
     *  Logic: '<S862>/Logical1'
     *  Logic: '<S862>/Logical2'
     *  Logic: '<S862>/Logical3'
     *  Logic: '<S862>/Logical4'
     *  RelationalOperator: '<S862>/Comparison1'
     *  RelationalOperator: '<S862>/Comparison2'
     *  RelationalOperator: '<S862>/Comparison4'
     *  RelationalOperator: '<S862>/Comparison6'
     */
    if (((((uint32)VeRCVR_e_LTRBypVlv_State) == CeRCVR_e_CPV_States_Calibration)
         && rtb_AND_lo) && rtb_OR1_oxb)
    {
        RCVR_ac_DW.If_ActiveSubsystem_p = 0;
    }
    else if (((((uint32)VeRCVR_e_LTRBypVlv_State) == CeRCVR_e_CPV_States_Faulty)
              && rtb_AND_lo) && rtb_OR1_oxb)
    {
        RCVR_ac_DW.If_ActiveSubsystem_p = 1;
    }
    else if ((((uint32)VeRCVR_e_LTRBypVlv_State) == CeRCVR_e_CPV_States_Save) &&
             rtb_AND_lo)
    {
        RCVR_ac_DW.If_ActiveSubsystem_p = 2;
    }
    else if (((KeRCVR_b_PierburgSwitch) || (((uint32)VeRCVR_e_LTRBypVlv_State) ==
               CeRCVR_e_CPV_States_Powered)) && rtb_OR1_oxb)
    {
        RCVR_ac_DW.If_ActiveSubsystem_p = 3;
    }
    else
    {
        RCVR_ac_DW.If_ActiveSubsystem_p = 4;
    }

    switch (RCVR_ac_DW.If_ActiveSubsystem_p)
    {
      case 0:
        if (RCVR_ac_DW.If_ActiveSubsystem_p != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S503>/Calibration' incorporates:
             *  ActionPort: '<S762>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S815>/EdgeRising' */
            /* SystemReset for If: '<S862>/If' incorporates:
             *  UnitDelay: '<S816>/UnitDelay'
             *  UnitDelay: '<S817>/UnitDelay'
             *  UnitDelay: '<S821>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_evd = false;

            /* End of SystemReset for SubSystem: '<S815>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S815>/CountDownResetEnabled1' */
            RCVR_ac_DW.UnitDelay_DSTATE_e = 0U;

            /* End of SystemReset for SubSystem: '<S815>/CountDownResetEnabled1' */

            /* SystemReset for Atomic SubSystem: '<S815>/SignalLatchOnWithReset' */
            RCVR_ac_DW.UnitDelay_DSTATE_io = false;

            /* End of SystemReset for SubSystem: '<S815>/SignalLatchOnWithReset' */
            /* End of SystemReset for SubSystem: '<S503>/Calibration' */
        }

        /* Outputs for IfAction SubSystem: '<S503>/Calibration' incorporates:
         *  ActionPort: '<S762>/ActionPort'
         */
        /* Lookup_n-D: '<S1184>/Vector' incorporates:
         *  Constant: '<S814>/Calib'
         *  SignalConversion generated from: '<S762>/Vlv_Cmd'
         */
        rtb_Vector_n = KeRCVR_Pct_LINPrpVlv_CalibStCmd;

        /* Outputs for Atomic SubSystem: '<S815>/EdgeRising' */
        /* Logic: '<S817>/AND' incorporates:
         *  Logic: '<S817>/OR1'
         *  UnitDelay: '<S817>/UnitDelay'
         */
        rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_evd;

        /* Update for UnitDelay: '<S817>/UnitDelay' incorporates:
         *  Constant: '<S815>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_evd = true;

        /* End of Outputs for SubSystem: '<S815>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S815>/CountDownResetEnabled1' */
        /* Switch: '<S816>/Switch1' incorporates:
         *  Constant: '<S816>/ConstantValue'
         *  Constant: '<S820>/Calib'
         *  RelationalOperator: '<S816>/GreaterThan'
         *  Switch: '<S816>/Switch2'
         *  UnitDelay: '<S816>/UnitDelay'
         */
        if (rtb_OR1_oxb)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_e = KeRCVR_Cnt_CalibCalRq_Cnt;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_e) > 0)
            {
                /* UnitDelay: '<S816>/UnitDelay' incorporates:
                 *  Constant: '<S816>/ConstantValue1'
                 *  Sum: '<S816>/Subtraction'
                 *  Switch: '<S816>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_e = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_e) - 1));
            }
        }

        /* End of Switch: '<S816>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S815>/SignalLatchOnWithReset' */
        /* Logic: '<S821>/OR1' incorporates:
         *  Constant: '<S816>/ConstantValue2'
         *  Logic: '<S815>/Logical2'
         *  Logic: '<S821>/NOT'
         *  Logic: '<S821>/OR'
         *  RelationalOperator: '<S816>/GreaterThan1'
         *  UnitDelay: '<S816>/UnitDelay'
         *  UnitDelay: '<S821>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_io = (rtb_OR1_oxb || ((((sint32)
            RCVR_ac_DW.UnitDelay_DSTATE_e) > 0) &&
            (RCVR_ac_DW.UnitDelay_DSTATE_io)));

        /* End of Outputs for SubSystem: '<S815>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S815>/CountDownResetEnabled1' */

        /* Switch: '<S815>/Switch' */
        if (RCVR_ac_DW.UnitDelay_DSTATE_io)
        {
            /* Merge: '<S763>/Merge' incorporates:
             *  Constant: '<S818>/Constant'
             */
            RCVR_ac_B.Merge_lyy = CeRCVR_e_CPV_Dual_Pstn_Calibration;
        }
        else
        {
            /* Merge: '<S763>/Merge' incorporates:
             *  Constant: '<S819>/Constant'
             */
            RCVR_ac_B.Merge_lyy = CeRCVR_e_CPV_No_Calibration;
        }

        /* End of Switch: '<S815>/Switch' */

        /* Merge: '<S769>/Merge' incorporates:
         *  Constant: '<S762>/FALSEConstant'
         *  SignalConversion generated from: '<S762>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_i = false;

        /* End of Outputs for SubSystem: '<S503>/Calibration' */
        break;

      case 1:
        if (RCVR_ac_DW.If_ActiveSubsystem_p != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S503>/Faulty' incorporates:
             *  ActionPort: '<S766>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S825>/EdgeRising' */
            /* SystemReset for If: '<S862>/If' incorporates:
             *  UnitDelay: '<S826>/UnitDelay'
             *  UnitDelay: '<S827>/UnitDelay'
             *  UnitDelay: '<S831>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_ca = false;

            /* End of SystemReset for SubSystem: '<S825>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S825>/CountDownResetEnabled1' */
            RCVR_ac_DW.UnitDelay_DSTATE_i0 = 0U;

            /* End of SystemReset for SubSystem: '<S825>/CountDownResetEnabled1' */

            /* SystemReset for Atomic SubSystem: '<S825>/SignalLatchOnWithReset' */
            RCVR_ac_DW.UnitDelay_DSTATE_mp = false;

            /* End of SystemReset for SubSystem: '<S825>/SignalLatchOnWithReset' */
            /* End of SystemReset for SubSystem: '<S503>/Faulty' */
        }

        /* Outputs for IfAction SubSystem: '<S503>/Faulty' incorporates:
         *  ActionPort: '<S766>/ActionPort'
         */
        /* Lookup_n-D: '<S1184>/Vector' incorporates:
         *  Constant: '<S824>/Calib'
         *  SignalConversion generated from: '<S766>/Vlv_Cmd'
         */
        rtb_Vector_n = KeRCVR_Pct_LINPrpVlv_FltyStCmd;

        /* Outputs for Atomic SubSystem: '<S825>/EdgeRising' */
        /* Logic: '<S827>/AND' incorporates:
         *  Logic: '<S827>/OR1'
         *  UnitDelay: '<S827>/UnitDelay'
         */
        rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_ca;

        /* Update for UnitDelay: '<S827>/UnitDelay' incorporates:
         *  Constant: '<S825>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_ca = true;

        /* End of Outputs for SubSystem: '<S825>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S825>/CountDownResetEnabled1' */
        /* Switch: '<S826>/Switch1' incorporates:
         *  Constant: '<S826>/ConstantValue'
         *  Constant: '<S830>/Calib'
         *  RelationalOperator: '<S826>/GreaterThan'
         *  Switch: '<S826>/Switch2'
         *  UnitDelay: '<S826>/UnitDelay'
         */
        if (rtb_OR1_oxb)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_i0 = KeRCVR_Cnt_FltyCalRq_Cnt;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_i0) > 0)
            {
                /* UnitDelay: '<S826>/UnitDelay' incorporates:
                 *  Constant: '<S826>/ConstantValue1'
                 *  Sum: '<S826>/Subtraction'
                 *  Switch: '<S826>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_i0 = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_i0) - 1));
            }
        }

        /* End of Switch: '<S826>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S825>/SignalLatchOnWithReset' */
        /* Logic: '<S831>/OR1' incorporates:
         *  Constant: '<S826>/ConstantValue2'
         *  Logic: '<S825>/Logical2'
         *  Logic: '<S831>/NOT'
         *  Logic: '<S831>/OR'
         *  RelationalOperator: '<S826>/GreaterThan1'
         *  UnitDelay: '<S826>/UnitDelay'
         *  UnitDelay: '<S831>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_mp = (rtb_OR1_oxb || ((((sint32)
            RCVR_ac_DW.UnitDelay_DSTATE_i0) > 0) &&
            (RCVR_ac_DW.UnitDelay_DSTATE_mp)));

        /* End of Outputs for SubSystem: '<S825>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S825>/CountDownResetEnabled1' */

        /* Switch: '<S825>/Switch' */
        if (RCVR_ac_DW.UnitDelay_DSTATE_mp)
        {
            /* Merge: '<S763>/Merge' incorporates:
             *  Constant: '<S829>/Constant'
             */
            RCVR_ac_B.Merge_lyy = CeRCVR_e_CPV_Dual_Pstn_Calibration;
        }
        else
        {
            /* Merge: '<S763>/Merge' incorporates:
             *  Constant: '<S828>/Constant'
             */
            RCVR_ac_B.Merge_lyy = CeRCVR_e_CPV_No_Calibration;
        }

        /* End of Switch: '<S825>/Switch' */

        /* Merge: '<S769>/Merge' incorporates:
         *  Constant: '<S766>/FALSEConstant'
         *  SignalConversion generated from: '<S766>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_i = false;

        /* End of Outputs for SubSystem: '<S503>/Faulty' */
        break;

      case 2:
        if (RCVR_ac_DW.If_ActiveSubsystem_p != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S503>/Save_Position' incorporates:
             *  ActionPort: '<S770>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S857>/EdgeRising1' */
            /* SystemReset for If: '<S862>/If' incorporates:
             *  UnitDelay: '<S858>/UnitDelay'
             *  UnitDelay: '<S859>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_mwci = false;

            /* End of SystemReset for SubSystem: '<S857>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S857>/CountDownResetEnabled' */
            RCVR_ac_DW.UnitDelay_DSTATE_k5 = 0U;

            /* End of SystemReset for SubSystem: '<S857>/CountDownResetEnabled' */
            /* End of SystemReset for SubSystem: '<S503>/Save_Position' */
        }

        /* Outputs for IfAction SubSystem: '<S503>/Save_Position' incorporates:
         *  ActionPort: '<S770>/ActionPort'
         */
        /* Lookup_n-D: '<S1184>/Vector' incorporates:
         *  Constant: '<S856>/Calib'
         *  SignalConversion generated from: '<S770>/Vlv_Cmd'
         */
        rtb_Vector_n = KeRCVR_Pct_CPV_Cmnd_At_Sv;

        /* Merge: '<S763>/Merge' incorporates:
         *  Constant: '<S855>/Constant'
         *  SignalConversion generated from: '<S770>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_lyy = CeRCVR_e_CPV_No_Calibration;

        /* Outputs for Atomic SubSystem: '<S857>/EdgeRising1' */
        /* Logic: '<S859>/OR1' incorporates:
         *  UnitDelay: '<S859>/UnitDelay'
         */
        rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_mwci;

        /* Update for UnitDelay: '<S859>/UnitDelay' incorporates:
         *  Constant: '<S857>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_mwci = true;

        /* Outputs for Atomic SubSystem: '<S857>/CountDownResetEnabled' */
        /* Switch: '<S858>/Switch1' incorporates:
         *  Constant: '<S858>/ConstantValue'
         *  Constant: '<S860>/Calib'
         *  Logic: '<S859>/AND'
         *  RelationalOperator: '<S858>/GreaterThan'
         *  Switch: '<S858>/Switch2'
         *  UnitDelay: '<S858>/UnitDelay'
         */
        if (rtb_OR1_oxb)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_k5 = KeRCVR_Cnt_SvRq_Cntr;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_k5) > 0)
            {
                /* UnitDelay: '<S858>/UnitDelay' incorporates:
                 *  Constant: '<S858>/ConstantValue1'
                 *  Sum: '<S858>/Subtraction'
                 *  Switch: '<S858>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_k5 = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_k5) - 1));
            }
        }

        /* End of Switch: '<S858>/Switch1' */
        /* End of Outputs for SubSystem: '<S857>/EdgeRising1' */

        /* Merge: '<S769>/Merge' incorporates:
         *  Constant: '<S858>/ConstantValue2'
         *  Logic: '<S857>/Logical2'
         *  RelationalOperator: '<S858>/GreaterThan1'
         *  UnitDelay: '<S858>/UnitDelay'
         */
        RCVR_ac_B.Merge_i = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_k5) <= 0);

        /* End of Outputs for SubSystem: '<S857>/CountDownResetEnabled' */
        /* End of Outputs for SubSystem: '<S503>/Save_Position' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S503>/Powered' incorporates:
         *  ActionPort: '<S768>/ActionPort'
         */
        /* Lookup_n-D: '<S1184>/Vector' incorporates:
         *  Inport: '<S768>/LINPrpVlv_Cmd'
         */
        rtb_Vector_n = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;

        /* Merge: '<S763>/Merge' incorporates:
         *  Constant: '<S854>/Constant'
         *  SignalConversion generated from: '<S768>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_lyy = CeRCVR_e_CPV_No_Calibration;

        /* Merge: '<S769>/Merge' incorporates:
         *  Constant: '<S768>/FALSEConstant'
         *  SignalConversion generated from: '<S768>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_i = false;

        /* End of Outputs for SubSystem: '<S503>/Powered' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S503>/Default' incorporates:
         *  ActionPort: '<S765>/ActionPort'
         */
        /* Lookup_n-D: '<S1184>/Vector' incorporates:
         *  Constant: '<S823>/Calib'
         *  SignalConversion generated from: '<S765>/Vlv_Cmd'
         */
        rtb_Vector_n = KeRCVR_Pct_LINPrpVlv_DefltStCmd;

        /* Merge: '<S763>/Merge' incorporates:
         *  Constant: '<S822>/Constant'
         *  SignalConversion generated from: '<S765>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_lyy = CeRCVR_e_CPV_No_Calibration;

        /* Merge: '<S769>/Merge' incorporates:
         *  Constant: '<S765>/FALSEConstant'
         *  SignalConversion generated from: '<S765>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_i = false;

        /* End of Outputs for SubSystem: '<S503>/Default' */
        break;
    }

    /* Outputs for Atomic SubSystem: '<S846>/EdgeFalling' */
    /* Logic: '<S849>/AND' incorporates:
     *  Logic: '<S849>/OR1'
     *  UnitDelay: '<S846>/UnitDelay'
     *  UnitDelay: '<S849>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_jn = ((!rtb_Comparison4_o0) &&
        (RCVR_ac_DW.UnitDelay_DSTATE_m2));

    /* Update for UnitDelay: '<S849>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_m2 = rtb_Comparison4_o0;

    /* End of Outputs for SubSystem: '<S846>/EdgeFalling' */

    /* RelationalOperator: '<S882>/Comparison4' incorporates:
     *  Constant: '<S901>/Constant'
     */
    rtb_OR1_oxb = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl) ==
                   CeTAIR_e_CPV_Calibration_Taking_Place);

    /* Outputs for Atomic SubSystem: '<S882>/EdgeFalling2' */
    /* Logic: '<S898>/AND' incorporates:
     *  Logic: '<S898>/OR1'
     *  UnitDelay: '<S898>/UnitDelay'
     */
    rtb_Comparison4_o0 = ((!rtb_OR1_oxb) && (RCVR_ac_DW.UnitDelay_DSTATE_m4));

    /* Update for UnitDelay: '<S898>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_m4 = rtb_OR1_oxb;

    /* End of Outputs for SubSystem: '<S882>/EdgeFalling2' */

    /* RelationalOperator: '<S882>/Comparison1' incorporates:
     *  Constant: '<S910>/Calib'
     *  DataStoreRead: '<S882>/DataStoreRead1'
     */
    rtb_OR1_oxb = (RCVR_ac_DW.NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles >=
                   KeRCVR_Cnt_MinCycles_LTR_Calib);

    /* Outputs for Atomic SubSystem: '<S882>/EdgeRising1' */
    /* Logic: '<S900>/OR1' incorporates:
     *  UnitDelay: '<S900>/UnitDelay'
     */
    rtb_OR1_kx = !RCVR_ac_DW.UnitDelay_DSTATE_l5;

    /* Update for UnitDelay: '<S900>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_l5 = rtb_OR1_oxb;

    /* Outputs for Atomic SubSystem: '<S882>/CountDownResetEnabled' */
    /* Switch: '<S894>/Switch1' incorporates:
     *  Constant: '<S894>/ConstantValue'
     *  Constant: '<S909>/Calib'
     *  Logic: '<S894>/AND'
     *  Logic: '<S900>/AND'
     *  RelationalOperator: '<S894>/GreaterThan'
     *  Switch: '<S894>/Switch2'
     *  UnitDelay: '<S894>/UnitDelay'
     */
    if (rtb_OR1_oxb && rtb_OR1_kx)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_ft = KeRCVR_Cnt_LTR_CalRq_Duratn;
    }
    else
    {
        if (rtb_OR1_oxb && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_ft) > 0))
        {
            /* UnitDelay: '<S894>/UnitDelay' incorporates:
             *  Constant: '<S894>/ConstantValue1'
             *  Sum: '<S894>/Subtraction'
             *  Switch: '<S894>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_ft = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_ft) - 1));
        }
    }

    /* End of Switch: '<S894>/Switch1' */
    /* End of Outputs for SubSystem: '<S882>/EdgeRising1' */

    /* Gain: '<S1141>/Gain' incorporates:
     *  Constant: '<S894>/ConstantValue2'
     *  Logic: '<S882>/Logical3'
     *  RelationalOperator: '<S894>/GreaterThan1'
     *  UnitDelay: '<S894>/UnitDelay'
     */
    rtb_Gain_p = ((((sint32)RCVR_ac_DW.UnitDelay_DSTATE_ft) > 0) ||
                  (VeRCVF_b_LTR_CalibStrt_DVC_Lim_AD));

    /* End of Outputs for SubSystem: '<S882>/CountDownResetEnabled' */

    /* Logic: '<S882>/Logical5' */
    rtb_OR1_kx = (rtb_Comparison4_o0 || rtb_Gain_p);

    /* Outputs for Atomic SubSystem: '<S882>/EdgeFalling1' */
    /* Logic: '<S897>/AND' incorporates:
     *  Logic: '<S897>/OR1'
     *  UnitDelay: '<S897>/UnitDelay'
     */
    rtb_OR1_oxb = ((!rtb_OR1_kx) && (RCVR_ac_DW.UnitDelay_DSTATE_mwc));

    /* Update for UnitDelay: '<S897>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_mwc = rtb_OR1_kx;

    /* End of Outputs for SubSystem: '<S882>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S882>/EdgeRising' */
    /* Logic: '<S899>/AND' incorporates:
     *  Logic: '<S899>/OR1'
     *  UnitDelay: '<S899>/UnitDelay'
     */
    rtb_OR1_kx = !RCVR_ac_DW.UnitDelay_DSTATE_mx;

    /* Update for UnitDelay: '<S899>/UnitDelay' incorporates:
     *  Constant: '<S882>/TRUEConstant1'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_mx = true;

    /* End of Outputs for SubSystem: '<S882>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S882>/CountDownResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S895>/EdgeRising' */
    /* Logic: '<S912>/OR1' incorporates:
     *  UnitDelay: '<S912>/UnitDelay'
     */
    rtb_OR1_fj = !RCVR_ac_DW.UnitDelay_DSTATE_pb;

    /* Update for UnitDelay: '<S912>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pb = rtb_OR1_kx;

    /* Switch: '<S895>/Switch1' incorporates:
     *  Constant: '<S895>/ConstantValue'
     *  Constant: '<S911>/Calib'
     *  Logic: '<S912>/AND'
     *  RelationalOperator: '<S895>/GreaterThan'
     *  Switch: '<S895>/Switch2'
     *  UnitDelay: '<S895>/UnitDelay'
     */
    if (rtb_OR1_kx && rtb_OR1_fj)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_bj = KeRCVR_Cnt_MinHCPUp_Time_IncrLTR_KeyCnt;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_bj) > 0)
        {
            /* UnitDelay: '<S895>/UnitDelay' incorporates:
             *  Constant: '<S895>/ConstantValue1'
             *  Sum: '<S895>/Subtraction'
             *  Switch: '<S895>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_bj = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_bj) - 1));
        }
    }

    /* End of Switch: '<S895>/Switch1' */
    /* End of Outputs for SubSystem: '<S895>/EdgeRising' */

    /* RelationalOperator: '<S895>/GreaterThan1' incorporates:
     *  Constant: '<S895>/ConstantValue2'
     *  UnitDelay: '<S895>/UnitDelay'
     */
    rtb_OR1_kx = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_bj) > 0);

    /* End of Outputs for SubSystem: '<S882>/CountDownResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S882>/EdgeFalling' */
    /* Logic: '<S896>/AND' incorporates:
     *  Logic: '<S896>/OR1'
     *  UnitDelay: '<S896>/UnitDelay'
     */
    rtb_OR1_fj = ((!rtb_OR1_kx) && (RCVR_ac_DW.UnitDelay_DSTATE_d1));

    /* Update for UnitDelay: '<S896>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_d1 = rtb_OR1_kx;

    /* End of Outputs for SubSystem: '<S882>/EdgeFalling' */

    /* Switch: '<S882>/Switch1' incorporates:
     *  Constant: '<S882>/ConstantValue2'
     *  DataStoreRead: '<S882>/DataStoreRead'
     *  DataStoreWrite: '<S882>/DataStoreWrite'
     *  Sum: '<S882>/Sum'
     *  Switch: '<S882>/Switch'
     */
    if (rtb_OR1_oxb)
    {
        RCVR_ac_DW.NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles = 0;
    }
    else
    {
        RCVR_ac_DW.NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles = (sint16)((rtb_OR1_fj ? 1
            : 0) + ((sint32)RCVR_ac_DW.NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles));
    }

    /* End of Switch: '<S882>/Switch1' */

    /* Switch: '<S882>/Switch2' incorporates:
     *  DataStoreWrite: '<S882>/DataStoreWrite1'
     */
    VeRCVR_b_LTR_Calibration_Request = ((!rtb_Comparison4_o0) &&
        (VeRCVR_b_LTR_Calibration_Request));

    /* Outputs for Atomic SubSystem: '<S941>/EdgeRising' */
    /* Logic: '<S945>/AND' incorporates:
     *  Logic: '<S945>/OR1'
     *  UnitDelay: '<S941>/UnitDelay1'
     *  UnitDelay: '<S945>/UnitDelay'
     */
    rtb_Comparison4_o0 = ((VeRCVR_b_LTRBypVlv_Flt_AD) &&
                          (!RCVR_ac_DW.UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S945>/UnitDelay' incorporates:
     *  UnitDelay: '<S941>/UnitDelay1'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_d = VeRCVR_b_LTRBypVlv_Flt_AD;

    /* End of Outputs for SubSystem: '<S941>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S941>/CountDownResetEnabled' */
    /* Switch: '<S942>/Switch1' incorporates:
     *  Constant: '<S942>/ConstantValue'
     *  Constant: '<S948>/Calib'
     *  Logic: '<S941>/Logical8'
     *  Logic: '<S942>/AND'
     *  RelationalOperator: '<S942>/GreaterThan'
     *  Switch: '<S942>/Switch2'
     *  UnitDelay: '<S941>/UnitDelay'
     *  UnitDelay: '<S941>/UnitDelay1'
     *  UnitDelay: '<S942>/UnitDelay'
     */
    if (rtb_Comparison4_o0 || (RCVR_ac_DW.UnitDelay_DSTATE_ag))
    {
        RCVR_ac_DW.UnitDelay_DSTATE_np = KeRCVR_Cnt_LTR_MaxTimeFlty;
    }
    else
    {
        if ((VeRCVR_b_LTRBypVlv_Flt_AD) && (((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_np) > 0))
        {
            /* UnitDelay: '<S942>/UnitDelay' incorporates:
             *  Constant: '<S942>/ConstantValue1'
             *  Sum: '<S942>/Subtraction'
             *  Switch: '<S942>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_np = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_np) - 1));
        }
    }

    /* End of Switch: '<S942>/Switch1' */

    /* Logic: '<S941>/Logical6' incorporates:
     *  Constant: '<S942>/ConstantValue2'
     *  Logic: '<S941>/Logical5'
     *  RelationalOperator: '<S942>/GreaterThan1'
     *  UnitDelay: '<S941>/UnitDelay1'
     *  UnitDelay: '<S942>/UnitDelay'
     */
    rtb_Comparison4_o0 = ((VeRCVR_b_LTRBypVlv_Flt_AD) && (((sint32)
                            RCVR_ac_DW.UnitDelay_DSTATE_np) <= 0));

    /* End of Outputs for SubSystem: '<S941>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S941>/EdgeRising1' */
    /* Logic: '<S946>/OR1' incorporates:
     *  UnitDelay: '<S946>/UnitDelay'
     */
    rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_gu;

    /* Update for UnitDelay: '<S946>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_gu = rtb_Comparison4_o0;

    /* Outputs for Atomic SubSystem: '<S941>/CountDownResetEnabled1' */
    /* Switch: '<S943>/Switch1' incorporates:
     *  Constant: '<S943>/ConstantValue'
     *  Constant: '<S947>/Calib'
     *  Logic: '<S943>/AND'
     *  Logic: '<S946>/AND'
     *  RelationalOperator: '<S943>/GreaterThan'
     *  Switch: '<S943>/Switch2'
     *  UnitDelay: '<S943>/UnitDelay'
     */
    if (rtb_Comparison4_o0 && rtb_OR1_oxb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_hd = KeRCVR_Cnt_LTR_CmndOutFlty;
    }
    else
    {
        if (rtb_Comparison4_o0 && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_hd) > 0))
        {
            /* UnitDelay: '<S943>/UnitDelay' incorporates:
             *  Constant: '<S943>/ConstantValue1'
             *  Sum: '<S943>/Subtraction'
             *  Switch: '<S943>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_hd = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_hd) - 1));
        }
    }

    /* End of Switch: '<S943>/Switch1' */
    /* End of Outputs for SubSystem: '<S941>/EdgeRising1' */

    /* Logic: '<S941>/Logical7' incorporates:
     *  Constant: '<S943>/ConstantValue2'
     *  RelationalOperator: '<S943>/GreaterThan1'
     *  UnitDelay: '<S943>/UnitDelay'
     */
    rtb_Comparison4_o0 = (rtb_Comparison4_o0 && (((sint32)
                            RCVR_ac_DW.UnitDelay_DSTATE_hd) > 0));

    /* End of Outputs for SubSystem: '<S941>/CountDownResetEnabled1' */

    /* Switch: '<S888>/Switch' incorporates:
     *  Constant: '<S939>/Calib'
     */
    if (KeRCVR_b_LTR_Flty_SD)
    {
        /* Switch: '<S888>/Switch' incorporates:
         *  Constant: '<S938>/Calib'
         */
        VeRCVR_b_LTRBypVlv_Flt_AD = KeRCVR_b_LTR_Flty_D;
    }
    else
    {
        /* Switch: '<S888>/Switch' incorporates:
         *  Constant: '<S931>/Constant'
         *  Constant: '<S932>/Constant'
         *  Constant: '<S933>/Constant'
         *  Constant: '<S934>/Calib'
         *  Constant: '<S935>/Calib'
         *  Constant: '<S936>/Calib'
         *  Constant: '<S937>/Calib'
         *  Constant: '<S940>/Calib'
         *  Logic: '<S888>/Logical'
         *  Logic: '<S888>/Logical1'
         *  Logic: '<S888>/Logical2'
         *  Logic: '<S888>/Logical3'
         *  Logic: '<S888>/Logical4'
         *  Logic: '<S888>/Logical5'
         *  Logic: '<S888>/Logical6'
         *  Logic: '<S888>/Logical7'
         *  RelationalOperator: '<S888>/Comparison1'
         *  RelationalOperator: '<S888>/Comparison2'
         *  RelationalOperator: '<S888>/Comparison4'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         */
        VeRCVR_b_LTRBypVlv_Flt_AD =
            ((((((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d2) &&
                 (KeRCVR_b_LTR_PstnActSNA_FltChk_Enbl)) || ((((uint32)
                   RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cf) ==
                  CeTAIR_e_CPV_Status_Calibration_Rq) &&
                 (KeRCVR_b_LTR_ErrStsCal_FltChk_Enbl))) || ((((uint32)
                  RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl) ==
                 CeTAIR_e_CPV_Calibration_Not_Complete) &&
                (KeRCVR_b_LTR_CalSts_NeedRef_FltChk_Enbl))) || ((((uint32)
                 RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl) ==
                CeTAIR_e_CPV_Calibration_Fail) &&
               (KeRCVR_b_LTR_CalSts_RefFail_FltChk_Enbl))) &&
             ((!rtb_Comparison4_o0) || (KeRCVR_b_LTR_FltStTm_FltChk_Ovrd)));
    }

    /* End of Switch: '<S888>/Switch' */

    /* Switch: '<S987>/Switch1' incorporates:
     *  Switch: '<S988>/Switch1'
     *  Switch: '<S989>/Switch1'
     */
    if (rtb_Gain_p)
    {
        /* RelationalOperator: '<S692>/Comparison1' incorporates:
         *  Constant: '<S983>/Constant'
         *  Switch: '<S987>/Switch1'
         */
        VeRCVR_e_LTRBypVlv_State = CeRCVR_e_CPV_States_Calibration;
    }
    else if (VeRCVR_b_LTRBypVlv_Flt_AD)
    {
        /* RelationalOperator: '<S692>/Comparison1' incorporates:
         *  Constant: '<S982>/Constant'
         *  Switch: '<S987>/Switch1'
         *  Switch: '<S988>/Switch1'
         */
        VeRCVR_e_LTRBypVlv_State = CeRCVR_e_CPV_States_Faulty;
    }
    else if (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ot)
    {
        /* RelationalOperator: '<S692>/Comparison1' incorporates:
         *  Constant: '<S986>/Constant'
         *  Switch: '<S987>/Switch1'
         *  Switch: '<S988>/Switch1'
         *  Switch: '<S989>/Switch1'
         */
        VeRCVR_e_LTRBypVlv_State = CeRCVR_e_CPV_States_Save;
    }
    else
    {
        /* RelationalOperator: '<S991>/Comparison4' incorporates:
         *  RelationalOperator: '<S991>/Comparison1'
         *  RelationalOperator: '<S991>/Comparison2'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S988>/Switch1'
         *  Switch: '<S989>/Switch1'
         */
        tmp_1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_jwt;

        /* Switch: '<S990>/Switch1' incorporates:
         *  Constant: '<S992>/Constant'
         *  Constant: '<S993>/Constant'
         *  Constant: '<S994>/Constant'
         *  Logic: '<S991>/Logical2'
         *  RelationalOperator: '<S991>/Comparison1'
         *  RelationalOperator: '<S991>/Comparison2'
         *  RelationalOperator: '<S991>/Comparison4'
         *  Switch: '<S988>/Switch1'
         *  Switch: '<S989>/Switch1'
         */
        if (((((uint32)tmp_1) == CeTHMR_e_Vlv1Pwrd) || (((uint32)tmp_1) ==
                CeTHMR_e_Vlv1N2Pwrd)) || (((uint32)tmp_1) ==
                CeTHMR_e_Vlv1N2N3Pwrd))
        {
            /* RelationalOperator: '<S692>/Comparison1' incorporates:
             *  Constant: '<S984>/Constant'
             *  Switch: '<S987>/Switch1'
             *  Switch: '<S989>/Switch1'
             */
            VeRCVR_e_LTRBypVlv_State = CeRCVR_e_CPV_States_Powered;
        }
        else
        {
            /* RelationalOperator: '<S692>/Comparison1' incorporates:
             *  Constant: '<S985>/Constant'
             *  Switch: '<S987>/Switch1'
             *  Switch: '<S989>/Switch1'
             */
            VeRCVR_e_LTRBypVlv_State = CeRCVR_e_CPV_States_Default;
        }

        /* End of Switch: '<S990>/Switch1' */
    }

    /* End of Switch: '<S987>/Switch1' */

    /* RelationalOperator: '<S981>/Comparison5' incorporates:
     *  Constant: '<S995>/Constant'
     */
    rtb_OR1_oxb = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le)
                   != CePMTR_e_DISBL_All_Thrml);

    /* If: '<S981>/If' incorporates:
     *  Constant: '<S1000>/Calib'
     *  Constant: '<S996>/Constant'
     *  Constant: '<S997>/Constant'
     *  Constant: '<S998>/Constant'
     *  Constant: '<S999>/Constant'
     *  Logic: '<S981>/Logical'
     *  Logic: '<S981>/Logical1'
     *  Logic: '<S981>/Logical2'
     *  Logic: '<S981>/Logical3'
     *  RelationalOperator: '<S981>/Comparison1'
     *  RelationalOperator: '<S981>/Comparison2'
     *  RelationalOperator: '<S981>/Comparison4'
     *  RelationalOperator: '<S981>/Comparison6'
     */
    rtPrevAction = RCVR_ac_DW.If_ActiveSubsystem_d;
    if (((((uint32)VeRCVR_e_LTRBypVlv_State) == CeRCVR_e_CPV_States_Calibration)
         && rtb_AND_lo) && rtb_OR1_oxb)
    {
        RCVR_ac_DW.If_ActiveSubsystem_d = 0;
    }
    else if ((rtb_AND_lo && (((uint32)VeRCVR_e_LTRBypVlv_State) ==
                             CeRCVR_e_CPV_States_Faulty)) && rtb_OR1_oxb)
    {
        RCVR_ac_DW.If_ActiveSubsystem_d = 1;
    }
    else if (rtb_AND_lo && (((uint32)VeRCVR_e_LTRBypVlv_State) ==
                            CeRCVR_e_CPV_States_Save))
    {
        RCVR_ac_DW.If_ActiveSubsystem_d = 2;
    }
    else if (((KeRCVR_b_PierburgSwitch) || (((uint32)VeRCVR_e_LTRBypVlv_State) ==
               CeRCVR_e_CPV_States_Powered)) && rtb_OR1_oxb)
    {
        RCVR_ac_DW.If_ActiveSubsystem_d = 3;
    }
    else
    {
        RCVR_ac_DW.If_ActiveSubsystem_d = 4;
    }

    switch (RCVR_ac_DW.If_ActiveSubsystem_d)
    {
      case 0:
        if (RCVR_ac_DW.If_ActiveSubsystem_d != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S504>/Calibration' incorporates:
             *  ActionPort: '<S883>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S914>/EdgeRising' */
            /* SystemReset for If: '<S981>/If' incorporates:
             *  UnitDelay: '<S915>/UnitDelay'
             *  UnitDelay: '<S916>/UnitDelay'
             *  UnitDelay: '<S920>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_hv = false;

            /* End of SystemReset for SubSystem: '<S914>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S914>/CountDownResetEnabled1' */
            RCVR_ac_DW.UnitDelay_DSTATE_o1 = 0U;

            /* End of SystemReset for SubSystem: '<S914>/CountDownResetEnabled1' */

            /* SystemReset for Atomic SubSystem: '<S914>/SignalLatchOnWithReset' */
            RCVR_ac_DW.UnitDelay_DSTATE_mw = false;

            /* End of SystemReset for SubSystem: '<S914>/SignalLatchOnWithReset' */
            /* End of SystemReset for SubSystem: '<S504>/Calibration' */
        }

        /* Outputs for IfAction SubSystem: '<S504>/Calibration' incorporates:
         *  ActionPort: '<S883>/ActionPort'
         */
        /* Switch: '<S10>/Switch2' incorporates:
         *  Constant: '<S913>/Calib'
         *  SignalConversion generated from: '<S883>/Vlv_Cmd'
         */
        rtb_Switch2_dd = KeRCVR_Pct_LTRBypVlv_CalibStCmd;

        /* Outputs for Atomic SubSystem: '<S914>/EdgeRising' */
        /* Logic: '<S916>/AND' incorporates:
         *  Logic: '<S916>/OR1'
         *  UnitDelay: '<S916>/UnitDelay'
         */
        rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_hv;

        /* Update for UnitDelay: '<S916>/UnitDelay' incorporates:
         *  Constant: '<S914>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_hv = true;

        /* End of Outputs for SubSystem: '<S914>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S914>/CountDownResetEnabled1' */
        /* Switch: '<S915>/Switch1' incorporates:
         *  Constant: '<S915>/ConstantValue'
         *  Constant: '<S919>/Calib'
         *  RelationalOperator: '<S915>/GreaterThan'
         *  Switch: '<S915>/Switch2'
         *  UnitDelay: '<S915>/UnitDelay'
         */
        if (rtb_OR1_oxb)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_o1 = KeRCVR_Cnt_LTR_CalibCalRq_Cnt;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_o1) > 0)
            {
                /* UnitDelay: '<S915>/UnitDelay' incorporates:
                 *  Constant: '<S915>/ConstantValue1'
                 *  Sum: '<S915>/Subtraction'
                 *  Switch: '<S915>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_o1 = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_o1) - 1));
            }
        }

        /* End of Switch: '<S915>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S914>/SignalLatchOnWithReset' */
        /* Logic: '<S920>/OR1' incorporates:
         *  Constant: '<S915>/ConstantValue2'
         *  Logic: '<S914>/Logical2'
         *  Logic: '<S920>/NOT'
         *  Logic: '<S920>/OR'
         *  RelationalOperator: '<S915>/GreaterThan1'
         *  UnitDelay: '<S915>/UnitDelay'
         *  UnitDelay: '<S920>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_mw = (rtb_OR1_oxb || ((((sint32)
            RCVR_ac_DW.UnitDelay_DSTATE_o1) > 0) &&
            (RCVR_ac_DW.UnitDelay_DSTATE_mw)));

        /* End of Outputs for SubSystem: '<S914>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S914>/CountDownResetEnabled1' */

        /* Switch: '<S914>/Switch' */
        if (RCVR_ac_DW.UnitDelay_DSTATE_mw)
        {
            /* Merge: '<S884>/Merge' incorporates:
             *  Constant: '<S917>/Constant'
             */
            RCVR_ac_B.Merge_fs = CeRCVR_e_CPV_Dual_Pstn_Calibration;
        }
        else
        {
            /* Merge: '<S884>/Merge' incorporates:
             *  Constant: '<S918>/Constant'
             */
            RCVR_ac_B.Merge_fs = CeRCVR_e_CPV_No_Calibration;
        }

        /* End of Switch: '<S914>/Switch' */

        /* Merge: '<S891>/Merge' incorporates:
         *  Constant: '<S883>/FALSEConstant'
         *  SignalConversion generated from: '<S883>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_f = false;

        /* End of Outputs for SubSystem: '<S504>/Calibration' */
        break;

      case 1:
        if (RCVR_ac_DW.If_ActiveSubsystem_d != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S504>/Faulty' incorporates:
             *  ActionPort: '<S887>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S924>/EdgeRising' */
            /* SystemReset for If: '<S981>/If' incorporates:
             *  UnitDelay: '<S925>/UnitDelay'
             *  UnitDelay: '<S926>/UnitDelay'
             *  UnitDelay: '<S930>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_nk = false;

            /* End of SystemReset for SubSystem: '<S924>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S924>/CountDownResetEnabled1' */
            RCVR_ac_DW.UnitDelay_DSTATE_i5 = 0U;

            /* End of SystemReset for SubSystem: '<S924>/CountDownResetEnabled1' */

            /* SystemReset for Atomic SubSystem: '<S924>/SignalLatchOnWithReset' */
            RCVR_ac_DW.UnitDelay_DSTATE_km = false;

            /* End of SystemReset for SubSystem: '<S924>/SignalLatchOnWithReset' */
            /* End of SystemReset for SubSystem: '<S504>/Faulty' */
        }

        /* Outputs for IfAction SubSystem: '<S504>/Faulty' incorporates:
         *  ActionPort: '<S887>/ActionPort'
         */
        /* Switch: '<S10>/Switch2' incorporates:
         *  Constant: '<S923>/Calib'
         *  SignalConversion generated from: '<S887>/Vlv_Cmd'
         */
        rtb_Switch2_dd = KeRCVR_Pct_LTRBypVlv_FltyStCmd;

        /* Outputs for Atomic SubSystem: '<S924>/EdgeRising' */
        /* Logic: '<S926>/AND' incorporates:
         *  Logic: '<S926>/OR1'
         *  UnitDelay: '<S926>/UnitDelay'
         */
        rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_nk;

        /* Update for UnitDelay: '<S926>/UnitDelay' incorporates:
         *  Constant: '<S924>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_nk = true;

        /* End of Outputs for SubSystem: '<S924>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S924>/CountDownResetEnabled1' */
        /* Switch: '<S925>/Switch1' incorporates:
         *  Constant: '<S925>/ConstantValue'
         *  Constant: '<S929>/Calib'
         *  RelationalOperator: '<S925>/GreaterThan'
         *  Switch: '<S925>/Switch2'
         *  UnitDelay: '<S925>/UnitDelay'
         */
        if (rtb_OR1_oxb)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_i5 = KeRCVR_Cnt_LTR_FltyCalRq_Cnt;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_i5) > 0)
            {
                /* UnitDelay: '<S925>/UnitDelay' incorporates:
                 *  Constant: '<S925>/ConstantValue1'
                 *  Sum: '<S925>/Subtraction'
                 *  Switch: '<S925>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_i5 = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_i5) - 1));
            }
        }

        /* End of Switch: '<S925>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S924>/SignalLatchOnWithReset' */
        /* Logic: '<S930>/OR1' incorporates:
         *  Constant: '<S925>/ConstantValue2'
         *  Logic: '<S924>/Logical2'
         *  Logic: '<S930>/NOT'
         *  Logic: '<S930>/OR'
         *  RelationalOperator: '<S925>/GreaterThan1'
         *  UnitDelay: '<S925>/UnitDelay'
         *  UnitDelay: '<S930>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_km = (rtb_OR1_oxb || ((((sint32)
            RCVR_ac_DW.UnitDelay_DSTATE_i5) > 0) &&
            (RCVR_ac_DW.UnitDelay_DSTATE_km)));

        /* End of Outputs for SubSystem: '<S924>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S924>/CountDownResetEnabled1' */

        /* Switch: '<S924>/Switch' */
        if (RCVR_ac_DW.UnitDelay_DSTATE_km)
        {
            /* Merge: '<S884>/Merge' incorporates:
             *  Constant: '<S928>/Constant'
             */
            RCVR_ac_B.Merge_fs = CeRCVR_e_CPV_Dual_Pstn_Calibration;
        }
        else
        {
            /* Merge: '<S884>/Merge' incorporates:
             *  Constant: '<S927>/Constant'
             */
            RCVR_ac_B.Merge_fs = CeRCVR_e_CPV_No_Calibration;
        }

        /* End of Switch: '<S924>/Switch' */

        /* Merge: '<S891>/Merge' incorporates:
         *  Constant: '<S887>/FALSEConstant'
         *  SignalConversion generated from: '<S887>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_f = false;

        /* End of Outputs for SubSystem: '<S504>/Faulty' */
        break;

      case 2:
        if (RCVR_ac_DW.If_ActiveSubsystem_d != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S504>/Save_Position' incorporates:
             *  ActionPort: '<S892>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S976>/EdgeRising1' */
            /* SystemReset for If: '<S981>/If' incorporates:
             *  UnitDelay: '<S977>/UnitDelay'
             *  UnitDelay: '<S978>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_ev = false;

            /* End of SystemReset for SubSystem: '<S976>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S976>/CountDownResetEnabled' */
            RCVR_ac_DW.UnitDelay_DSTATE_m = 0U;

            /* End of SystemReset for SubSystem: '<S976>/CountDownResetEnabled' */
            /* End of SystemReset for SubSystem: '<S504>/Save_Position' */
        }

        /* Outputs for IfAction SubSystem: '<S504>/Save_Position' incorporates:
         *  ActionPort: '<S892>/ActionPort'
         */
        /* Switch: '<S10>/Switch2' incorporates:
         *  Constant: '<S975>/Calib'
         *  SignalConversion generated from: '<S892>/Vlv_Cmd'
         */
        rtb_Switch2_dd = KeRCVR_Pct_LTR_Cmnd_At_Sv;

        /* Merge: '<S884>/Merge' incorporates:
         *  Constant: '<S974>/Constant'
         *  SignalConversion generated from: '<S892>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_fs = CeRCVR_e_CPV_No_Calibration;

        /* Outputs for Atomic SubSystem: '<S976>/EdgeRising1' */
        /* Logic: '<S978>/OR1' incorporates:
         *  UnitDelay: '<S978>/UnitDelay'
         */
        rtb_OR1_oxb = !RCVR_ac_DW.UnitDelay_DSTATE_ev;

        /* Update for UnitDelay: '<S978>/UnitDelay' incorporates:
         *  Constant: '<S976>/TRUEConstant1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_ev = true;

        /* Outputs for Atomic SubSystem: '<S976>/CountDownResetEnabled' */
        /* Switch: '<S977>/Switch1' incorporates:
         *  Constant: '<S977>/ConstantValue'
         *  Constant: '<S979>/Calib'
         *  Logic: '<S978>/AND'
         *  RelationalOperator: '<S977>/GreaterThan'
         *  Switch: '<S977>/Switch2'
         *  UnitDelay: '<S977>/UnitDelay'
         */
        if (rtb_OR1_oxb)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_m = KeRCVR_Cnt_LTR_SvRq_Cntr;
        }
        else
        {
            if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_m) > 0)
            {
                /* UnitDelay: '<S977>/UnitDelay' incorporates:
                 *  Constant: '<S977>/ConstantValue1'
                 *  Sum: '<S977>/Subtraction'
                 *  Switch: '<S977>/Switch2'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_m = (uint16)((sint32)(((sint32)
                    RCVR_ac_DW.UnitDelay_DSTATE_m) - 1));
            }
        }

        /* End of Switch: '<S977>/Switch1' */
        /* End of Outputs for SubSystem: '<S976>/EdgeRising1' */

        /* Merge: '<S891>/Merge' incorporates:
         *  Constant: '<S977>/ConstantValue2'
         *  Logic: '<S976>/Logical2'
         *  RelationalOperator: '<S977>/GreaterThan1'
         *  UnitDelay: '<S977>/UnitDelay'
         */
        RCVR_ac_B.Merge_f = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_m) <= 0);

        /* End of Outputs for SubSystem: '<S976>/CountDownResetEnabled' */
        /* End of Outputs for SubSystem: '<S504>/Save_Position' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S504>/Powered' incorporates:
         *  ActionPort: '<S890>/ActionPort'
         */
        /* Switch: '<S970>/Switch1' incorporates:
         *  Constant: '<S972>/Calib'
         *  RelationalOperator: '<S890>/Comparison4'
         */
        if (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lb !=
                KeRCVR_Pct_LTRCommandCheck)
        {
            /* Switch: '<S10>/Switch2' incorporates:
             *  Lookup_n-D: '<S973>/Vector'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
             */
            rtb_Switch2_dd = look1_iflf_binlca_16a
                (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lb, ((const
                   float32 *)&(KxRCVR_Pct_LTRConversion[0])), ((const float32 *)
                  &(KtRCVR_Pct_LTRConversion[0])), 6U);
        }
        else
        {
            /* Switch: '<S10>/Switch2' incorporates:
             *  Constant: '<S971>/Calib'
             */
            rtb_Switch2_dd = KeRCVR_Pct_LTRCalCommand;
        }

        /* End of Switch: '<S970>/Switch1' */

        /* Merge: '<S884>/Merge' incorporates:
         *  Constant: '<S969>/Constant'
         *  SignalConversion generated from: '<S890>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_fs = CeRCVR_e_CPV_No_Calibration;

        /* Merge: '<S891>/Merge' incorporates:
         *  Constant: '<S890>/FALSEConstant'
         *  SignalConversion generated from: '<S890>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_f = false;

        /* End of Outputs for SubSystem: '<S504>/Powered' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S504>/Default' incorporates:
         *  ActionPort: '<S886>/ActionPort'
         */
        /* Switch: '<S10>/Switch2' incorporates:
         *  Constant: '<S922>/Calib'
         *  SignalConversion generated from: '<S886>/Vlv_Cmd'
         */
        rtb_Switch2_dd = KeRCVR_Pct_LTRBypVlv_DefltStCmd;

        /* Merge: '<S884>/Merge' incorporates:
         *  Constant: '<S921>/Constant'
         *  SignalConversion generated from: '<S886>/Vlv_Calib'
         */
        RCVR_ac_B.Merge_fs = CeRCVR_e_CPV_No_Calibration;

        /* Merge: '<S891>/Merge' incorporates:
         *  Constant: '<S886>/FALSEConstant'
         *  SignalConversion generated from: '<S886>/Vlv_Sv'
         */
        RCVR_ac_B.Merge_f = false;

        /* End of Outputs for SubSystem: '<S504>/Default' */
        break;
    }

    /* End of If: '<S981>/If' */

    /* Outputs for Atomic SubSystem: '<S941>/EdgeFalling' */
    /* Logic: '<S944>/AND' incorporates:
     *  Logic: '<S944>/OR1'
     *  UnitDelay: '<S941>/UnitDelay'
     *  UnitDelay: '<S944>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_ag = ((!rtb_Comparison4_o0) &&
        (RCVR_ac_DW.UnitDelay_DSTATE_pl));

    /* Update for UnitDelay: '<S944>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pl = rtb_Comparison4_o0;

    /* End of Outputs for SubSystem: '<S941>/EdgeFalling' */

    /* RelationalOperator: '<S955>/RelationalOperator' incorporates:
     *  Constant: '<S955>/Constant'
     *  DataStoreRead: '<S955>/VeDFIB_y_StatusByte_HB_PSC_CtrlValBCktPerf'
     *  S-Function (sfix_bitop): '<S955>/BitwiseOperator7'
     */
    rtb_Comparison4_o0 = ((((sint32)RCVR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf)
                           & 2) > 0);

    /* Outputs for Atomic SubSystem: '<S889>/SignalLatchOn1' */
    /* Logic: '<S966>/OR2' incorporates:
     *  Constant: '<S965>/Calib'
     *  Logic: '<S889>/Logical7'
     *  RelationalOperator: '<S889>/RelationalOperator'
     *  UnitDelay: '<S966>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_aw =
        (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl <
           KeRCVR_Pct_LTRMinPercentOpen) && rtb_Comparison4_o0) ||
         (RCVR_ac_DW.UnitDelay_DSTATE_aw));

    /* End of Outputs for SubSystem: '<S889>/SignalLatchOn1' */

    /* Outputs for Atomic SubSystem: '<S889>/SignalLatchOn2' */
    /* Logic: '<S967>/OR2' incorporates:
     *  Constant: '<S963>/Calib'
     *  Constant: '<S965>/Calib'
     *  Logic: '<S889>/Logical8'
     *  RelationalOperator: '<S889>/RelationalOperator1'
     *  RelationalOperator: '<S889>/RelationalOperator5'
     *  UnitDelay: '<S967>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_oy = (((rtb_Comparison4_o0 &&
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl >
         KeRCVR_Pct_LTRMinPercentOpen)) &&
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl <=
         KeRCVR_Pct_LTRBypassOpen)) || (RCVR_ac_DW.UnitDelay_DSTATE_oy));

    /* End of Outputs for SubSystem: '<S889>/SignalLatchOn2' */

    /* Outputs for Atomic SubSystem: '<S889>/SignalLatchOn3' */
    /* Logic: '<S968>/OR2' incorporates:
     *  Constant: '<S963>/Calib'
     *  Logic: '<S889>/Logical3'
     *  RelationalOperator: '<S889>/RelationalOperator6'
     *  UnitDelay: '<S968>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_kp =
        (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl >
           KeRCVR_Pct_LTRBypassOpen) && rtb_Comparison4_o0) ||
         (RCVR_ac_DW.UnitDelay_DSTATE_kp));

    /* End of Outputs for SubSystem: '<S889>/SignalLatchOn3' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVF'
     */
    /* S-Function (sfix_bitop): '<S956>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S956>/StatusByte_LostCommHB_PSCCooCtrlVlvB'
     *  S-Function (sfix_bitop): '<S1358>/Bitwise Operator2'
     *  Switch: '<S1346>/Switch'
     */
    tmp_e = ((uint32)RCVR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB) & 1U;

    /* S-Function (sfix_bitop): '<S956>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S956>/StatusByte_LostCommHB_PSCCooCtrlVlvB'
     *  S-Function (sfix_bitop): '<S1358>/Bitwise Operator1'
     *  Switch: '<S1346>/Switch'
     */
    tmp_f = ((uint32)RCVR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB) & 64U;

    /* Switch: '<S961>/Switch1' incorporates:
     *  Constant: '<S956>/Constant1'
     *  Constant: '<S956>/Constant2'
     *  Logic: '<S889>/Logical11'
     *  Logic: '<S956>/Logical Operator'
     *  RelationalOperator: '<S956>/Relational Operator1'
     *  RelationalOperator: '<S956>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S956>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S956>/Bitwise Operator2'
     *  Switch: '<S957>/Switch1'
     *  Switch: '<S958>/Switch1'
     *  Switch: '<S962>/Switch1'
     *  UnitDelay: '<S966>/UnitDelay'
     *  UnitDelay: '<S967>/UnitDelay'
     *  UnitDelay: '<S968>/UnitDelay'
     */
    if ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d2) || ((tmp_e != 0U) &&
         (tmp_f == 0U)))
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S951>/Constant'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_i0o = CeRCVR_e_SNA;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_aw)
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S953>/Constant'
         *  Switch: '<S957>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_i0o = CeRCVR_e_Faulty_Closed;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_oy)
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S950>/Constant'
         *  Switch: '<S957>/Switch1'
         *  Switch: '<S958>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_i0o = CeRCVR_e_Faulty_Open;
    }
    else if (RCVR_ac_DW.UnitDelay_DSTATE_kp)
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S954>/Constant'
         *  Switch: '<S957>/Switch1'
         *  Switch: '<S958>/Switch1'
         *  Switch: '<S962>/Switch1'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_i0o = CeRCVR_e_Faulty_Open_Bypass;
    }
    else
    {
        /* Logic: '<S889>/LogicalOperator' incorporates:
         *  Switch: '<S957>/Switch1'
         *  Switch: '<S958>/Switch1'
         *  Switch: '<S962>/Switch1'
         */
        rtb_Comparison4_o0 = !rtb_Comparison4_o0;

        /* Switch: '<S959>/Switch1' incorporates:
         *  Constant: '<S964>/Calib'
         *  Constant: '<S965>/Calib'
         *  Logic: '<S889>/Logical1'
         *  Logic: '<S889>/Logical2'
         *  RelationalOperator: '<S889>/RelationalOperator2'
         *  RelationalOperator: '<S889>/RelationalOperator3'
         *  RelationalOperator: '<S889>/RelationalOperator4'
         *  Switch: '<S957>/Switch1'
         *  Switch: '<S958>/Switch1'
         *  Switch: '<S960>/Switch1'
         *  Switch: '<S962>/Switch1'
         */
        if ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl <
                KeRCVR_Pct_LTRMinPercentOpen) && rtb_Comparison4_o0)
        {
            /* Switch: '<S961>/Switch1' incorporates:
             *  Constant: '<S952>/Constant'
             *  Switch: '<S959>/Switch1'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_i0o = CeRCVR_e_Closed;
        }
        else
        {
            if ((rtb_Comparison4_o0 &&
                    (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl >=
                     KeRCVR_Pct_LTRMinPercentOpen)) &&
                    (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fl <=
                     KeRCVR_Pct_LTRMaxPercentOpen))
            {
                /* Switch: '<S960>/Switch1' incorporates:
                 *  Constant: '<S949>/Constant'
                 *  Switch: '<S959>/Switch1'
                 *  Switch: '<S961>/Switch1'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_i0o = CeRCVR_e_Open;
            }
        }

        /* End of Switch: '<S959>/Switch1' */
    }

    /* End of Switch: '<S961>/Switch1' */
#if Rte_SysCon_Variant_RCVR_FUNC_4

    /* Outputs for Enabled SubSystem: '<S24>/DT-BEV_HtrCore_BypVlv' */
    /* Outputs for Enabled SubSystem: '<S24>/DT-BEV_HtrCore_BypVlv' incorporates:
     *  EnablePort: '<S498>/Enable'
     */
    if (RCVR_ac_DW.DTBEV_HtrCore_BypVlv_MODE)
    {
        /* Disable for If: '<S580>/If' */
        RCVR_ac_DW.If_ActiveSubsystem_n = -1;
        RCVR_ac_DW.DTBEV_HtrCore_BypVlv_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S24>/DT-BEV_HtrCore_BypVlv' */
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1

    /* Outputs for Enabled SubSystem: '<S24>/HTR_BypVlv' */
    /* Outputs for Enabled SubSystem: '<S24>/HTR_BypVlv' incorporates:
     *  EnablePort: '<S500>/Enable'
     */
    if (RCVR_ac_DW.HTR_BypVlv_MODE)
    {
        /* Disable for If: '<S748>/If' */
        RCVR_ac_DW.If_ActiveSubsystem_pf = -1;
        RCVR_ac_DW.HTR_BypVlv_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S24>/HTR_BypVlv' */
#endif

    /* Logic: '<S24>/Logical3' incorporates:
     *  Constant: '<S502>/Calib'
     *  Logic: '<S24>/Logical5'
     */
    VeRCVR_b_CPV_SavePosnReqCmpl = (((RCVR_ac_B.Merge_i) && (RCVR_ac_B.Merge_f))
        && ((RCVR_ac_B.Merge_d) || (KeRCVR_b_HellaVlvSwitch)));

    /* Switch: '<S1058>/Switch1' incorporates:
     *  Constant: '<S1175>/Calib'
     *  Logic: '<S1012>/Logical'
     *  Logic: '<S1012>/Logical1'
     *  Logic: '<S1012>/Logical2'
     *  Switch: '<S1059>/Switch1'
     */
    if (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fqu) ||
            (VeRCVF_b_HTCV_CalibStrt_DVC_Lim_AD)) &&
            (!VeRCVF_b_CabVlv_DVC_Lim_AD))
    {
        /* RelationalOperator: '<S505>/Comparison5' incorporates:
         *  Constant: '<S1056>/Constant'
         *  Switch: '<S1058>/Switch1'
         */
        VeRCVR_e_HT_CabVlvState_New = CeRCVR_e_HTCab_Vlv_Learning;
    }
    else if (KeRCVR_b_PropValv_Fault_Dial)
    {
        /* RelationalOperator: '<S505>/Comparison5' incorporates:
         *  Constant: '<S1053>/Constant'
         *  Switch: '<S1058>/Switch1'
         *  Switch: '<S1059>/Switch1'
         */
        VeRCVR_e_HT_CabVlvState_New = CeRCVR_e_HTCab_Vlv_Faulty;
    }
    else
    {
        /* RelationalOperator: '<S1060>/Comparison4' incorporates:
         *  RelationalOperator: '<S1060>/Comparison1'
         *  RelationalOperator: '<S1060>/Comparison2'
         *  RelationalOperator: '<S1060>/Comparison3'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S1059>/Switch1'
         */
        tmp_1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_jwt;

        /* Switch: '<S1057>/Switch1' incorporates:
         *  Constant: '<S1061>/Constant'
         *  Constant: '<S1062>/Constant'
         *  Constant: '<S1063>/Constant'
         *  Constant: '<S1064>/Constant'
         *  Logic: '<S1060>/Logical2'
         *  RelationalOperator: '<S1060>/Comparison1'
         *  RelationalOperator: '<S1060>/Comparison2'
         *  RelationalOperator: '<S1060>/Comparison3'
         *  RelationalOperator: '<S1060>/Comparison4'
         *  Switch: '<S1059>/Switch1'
         */
        if ((((CeTHMR_e_Vlv1Pwrd == ((uint32)tmp_1)) || (CeTHMR_e_Vlv1N2Pwrd ==
                ((uint32)tmp_1))) || (CeTHMR_e_Vlv1N3Pwrd == ((uint32)tmp_1))) ||
            (CeTHMR_e_Vlv1N2N3Pwrd == ((uint32)tmp_1)))
        {
            /* RelationalOperator: '<S505>/Comparison5' incorporates:
             *  Constant: '<S1054>/Constant'
             *  Switch: '<S1058>/Switch1'
             *  Switch: '<S1059>/Switch1'
             */
            VeRCVR_e_HT_CabVlvState_New = CeRCVR_e_HTCab_Vlv_ON;
        }
        else
        {
            /* RelationalOperator: '<S505>/Comparison5' incorporates:
             *  Constant: '<S1055>/Constant'
             *  Switch: '<S1058>/Switch1'
             *  Switch: '<S1059>/Switch1'
             */
            VeRCVR_e_HT_CabVlvState_New = CeRCVR_e_HTCab_Vlv_OFF;
        }

        /* End of Switch: '<S1057>/Switch1' */
    }

    /* End of Switch: '<S1058>/Switch1' */

    /* RelationalOperator: '<S505>/Comparison2' incorporates:
     *  Constant: '<S1005>/Constant'
     */
    rtb_Comparison4_o0 = (((uint32)
                           RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le)
                          != CePMTR_e_DISBL_All_Thrml);

    /* UnitDelay: '<S505>/UnitDelay1' */
    VeRCVR_b_Learning_Comp_In = RCVR_ac_DW.UnitDelay1_DSTATE_ot;

    /* If: '<S505>/If' incorporates:
     *  Constant: '<S1001>/Constant'
     *  Constant: '<S1002>/Constant'
     *  Constant: '<S1003>/Constant'
     *  RelationalOperator: '<S505>/Comparison1'
     *  RelationalOperator: '<S505>/Comparison3'
     *  RelationalOperator: '<S505>/Comparison4'
     */
    if ((((uint32)VeRCVR_e_HT_CabVlvState_New) == CeRCVR_e_HTCab_Vlv_Learning) &&
        rtb_Comparison4_o0)
    {
        /* Outputs for IfAction SubSystem: '<S505>/Learning' incorporates:
         *  ActionPort: '<S1009>/ActionPort'
         */
        /* Abs: '<S1009>/Abs' incorporates:
         *  Constant: '<S1023>/Calib'
         *  Sum: '<S1009>/Subtraction'
         */
        VeRCVR_dU_Fdbk_OpenPos = fabsf
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys -
             KeRCVR_U_CabVlvFully_OpenPos);

        /* Abs: '<S1009>/Abs1' incorporates:
         *  Constant: '<S1022>/Calib'
         *  Sum: '<S1009>/Subtraction1'
         */
        VeRCVR_dU_Fdbk_ClosePos = fabsf
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys -
             KeRCVR_U_CabVlvFully_ClosePos);

        /* Chart: '<S1009>/StateflowChart' incorporates:
         *  Constant: '<S1017>/Calib'
         *  Constant: '<S1018>/Calib'
         *  Constant: '<S1019>/Calib'
         *  Constant: '<S1020>/Calib'
         *  Constant: '<S1021>/Calib'
         *  Constant: '<S1022>/Calib'
         *  Constant: '<S1023>/Calib'
         *  Constant: '<S1026>/Calib'
         *  Constant: '<S1027>/Calib'
         *  Constant: '<S1028>/Calib'
         *  Constant: '<S1029>/Calib'
         *  Constant: '<S1030>/Calib'
         *  Constant: '<S1031>/Calib'
         *  Constant: '<S1032>/Calib'
         *  Constant: '<S1033>/Calib'
         *  Constant: '<S1034>/Calib'
         */
        /* Gateway: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Learning/StateflowChart */
        /* During: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Learning/StateflowChart */
        if (((uint32)RCVR_ac_DW.is_active_c35_RCVR_ac) == 0U)
        {
            /* Entry: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Learning/StateflowChart */
            RCVR_ac_DW.is_active_c35_RCVR_ac = 1U;

            /* Entry Internal: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Learning/StateflowChart */
            /* Transition: '<S1037>:3' */
            RCVR_ac_B.VeRCVR_b_Low_Learning_Comp = false;
            RCVR_ac_B.VeRCVR_b_High_Learning_Comp = false;
            if (!VeRCVR_b_Learning_Comp_In)
            {
                /* Transition: '<S1037>:100' */
                RCVR_ac_DW.VeRCVR_Cnt_HighCount = 0.0F;
                RCVR_ac_DW.VeRCVR_Cnt_LowCount = 0.0F;
                RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Check_Initial_Postion;

                /* Entry 'Check_Initial_Postion': '<S1037>:9' */
                RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd = KeRCVR_Pct_StopMovngCabVlv;
                RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                    RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
            }
            else
            {
                /* Transition: '<S1037>:108' */
                /* Transition: '<S1037>:213' */
                RCVR_ac_DW.is_c35_RCVR_ac =
                    RCVR_IN_Command_HTCabin_Valve_StopMoving;

                /* Entry 'Command_HTCabin_Valve_StopMoving': '<S1037>:107' */
                RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd = KeRCVR_Pct_StopMovngCabVlv;
            }
        }
        else
        {
            switch (RCVR_ac_DW.is_c35_RCVR_ac)
            {
              case RCVR_ac_IN_Check_Initial_Postion:
                /* During 'Check_Initial_Postion': '<S1037>:9' */
                if ((VeRCVR_dU_Fdbk_OpenPos >= VeRCVR_dU_Fdbk_ClosePos) &&
                        (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >=
                         KeRCVR_t_CabVlvMotion_Time1))
                {
                    /* Transition: '<S1037>:11' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                    RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Open_Command;

                    /* Entry Internal 'Open_Command': '<S1037>:226' */
                    /* Transition: '<S1037>:292' */
                    RCVR_ac_DW.is_Open_Command =
                        RCVR_ac_IN_HTCabin_Valve_Open_Command;

                    /* Entry 'HTCabin_Valve_Open_Command': '<S1037>:18' */
                    RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                        KeRCVR_Pct_OpenCabVlv_toHtrCores;
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                }
                else if ((VeRCVR_dU_Fdbk_OpenPos < VeRCVR_dU_Fdbk_ClosePos) &&
                         (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >=
                          KeRCVR_t_CabVlvMotion_Time1))
                {
                    /* Transition: '<S1037>:13' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                    RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Close_Command;

                    /* Entry Internal 'Close_Command': '<S1037>:235' */
                    /* Transition: '<S1037>:293' */
                    RCVR_ac_DW.is_Close_Command =
                        RCVR_ac_IN_HTCabin_Valve_Close_Command;

                    /* Entry 'HTCabin_Valve_Close_Command': '<S1037>:61' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                    RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                        KeRCVR_Pct_ClsCabVlv_toBatt;
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                }
                else
                {
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                }
                break;

              case RCVR_ac_IN_Close_Command:
                /* During 'Close_Command': '<S1037>:235' */
                if (((uint32)RCVR_ac_DW.is_Close_Command) ==
                        RCVR_ac_IN_HTCabin_Valve_Close_Command)
                {
                    /* During 'HTCabin_Valve_Close_Command': '<S1037>:61' */
                    if (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >=
                            KeRCVR_t_CabVlvMotion_Time4)
                    {
                        /* Transition: '<S1037>:74' */
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                        RCVR_ac_DW.is_Close_Command =
                            RCVR_ac_IN_HTCabin_Valve_Stop_Command;

                        /* Entry 'HTCabin_Valve_Stop_Command': '<S1037>:89' */
                        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                            KeRCVR_Pct_StopMovngCabVlv;
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                    }
                    else
                    {
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                    }
                }
                else
                {
                    /* During 'HTCabin_Valve_Stop_Command': '<S1037>:89' */
                    if (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >=
                            KeRCVR_t_CabVlvMotion_Time5)
                    {
                        /* Transition: '<S1037>:209' */
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                        RCVR_ac_DW.is_Close_Command = RCVR_ac_IN_NO_ACTIVE_CHILD;
                        RCVR_ac_DW.is_c35_RCVR_ac =
                            RCVR_ac_IN_HTCabin_Valve_Low_Diff_Check;

                        /* Entry 'HTCabin_Valve_Low_Diff_Check': '<S1037>:208' */
                        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                            KeRCVR_Pct_StopMovngCabVlv;
                        RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffLow =
                            RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev -
                            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                    }
                    else
                    {
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                    }
                }
                break;

              case RCVR_IN_Command_HTCabin_Valve_StopMoving:
                /* During 'Command_HTCabin_Valve_StopMoving': '<S1037>:107' */
                if (!VeRCVR_b_Learning_Comp_In)
                {
                    /* Transition: '<S1037>:219' */
                    /* Exit 'Command_HTCabin_Valve_StopMoving': '<S1037>:107' */
                    RCVR_ac_B.VeRCVR_b_Low_Learning_Comp = false;
                    RCVR_ac_B.VeRCVR_b_High_Learning_Comp = false;
                    RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Check_Initial_Postion;

                    /* Entry 'Check_Initial_Postion': '<S1037>:9' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                    RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                        KeRCVR_Pct_StopMovngCabVlv;
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                }
                break;

              case RCVR_ac_IN_HTCabin_Valve_High_Diff_Check:
                /* During 'HTCabin_Valve_High_Diff_Check': '<S1037>:206' */
                if ((RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffHigh <=
                        KeRCVR_U_HTCabinVlv_HighVlt_Check) &&
                        (RCVR_ac_DW.VeRCVR_Cnt_HighCount <
                         KeRCVR_Cnt_LowCount_Max))
                {
                    /* Transition: '<S1037>:64' */
                    RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Save_HTCabinVlv_High;

                    /* Entry 'Save_HTCabinVlv_High': '<S1037>:49' */
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_High1 =
                        RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev;
                    RCVR_ac_DW.VeRCVR_Cnt_HighCount++;
                }
                else if ((RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffHigh <=
                          KeRCVR_U_HTCabinVlv_HighVlt_Check) &&
                         (RCVR_ac_DW.VeRCVR_Cnt_HighCount >=
                          KeRCVR_Cnt_LowCount_Max))
                {
                    /* Transition: '<S1037>:115' */
                    RCVR_ac_DW.is_c35_RCVR_ac =
                        RCVR_ac_IN_Save_HTCabinVlv_HighFinal;

                    /* Entry 'Save_HTCabinVlv_HighFinal': '<S1037>:114' */
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_High2 =
                        RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev;
                    RCVR_ac_B.VeRCVR_b_High_Learning_Comp = true;
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                }
                else
                {
                    if ((RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffHigh >
                            KeRCVR_U_HTCabinVlv_HighVlt_Check) &&
                            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys <
                             KeRCVR_U_CabVlvFully_OpenPos))
                    {
                        /* Transition: '<S1037>:31' */
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;

                        /* Transition: '<S1037>:45' */
                        /* Transition: '<S1037>:46' */
                        /* Transition: '<S1037>:57' */
                        RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Open_Command;

                        /* Entry Internal 'Open_Command': '<S1037>:226' */
                        /* Transition: '<S1037>:292' */
                        RCVR_ac_DW.is_Open_Command =
                            RCVR_ac_IN_HTCabin_Valve_Open_Command;

                        /* Entry 'HTCabin_Valve_Open_Command': '<S1037>:18' */
                        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                            KeRCVR_Pct_OpenCabVlv_toHtrCores;
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                        RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                    }
                }
                break;

              case RCVR_ac_IN_HTCabin_Valve_Low_Diff_Check:
                /* During 'HTCabin_Valve_Low_Diff_Check': '<S1037>:208' */
                if ((RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffLow >
                        KeRCVR_U_HTCabinVlv_LowVlt_Check) &&
                        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys >
                         KeRCVR_U_CabVlvFully_ClosePos))
                {
                    /* Transition: '<S1037>:93' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;

                    /* Transition: '<S1037>:95' */
                    /* Transition: '<S1037>:97' */
                    /* Transition: '<S1037>:98' */
                    RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Close_Command;

                    /* Entry Internal 'Close_Command': '<S1037>:235' */
                    /* Transition: '<S1037>:293' */
                    RCVR_ac_DW.is_Close_Command =
                        RCVR_ac_IN_HTCabin_Valve_Close_Command;

                    /* Entry 'HTCabin_Valve_Close_Command': '<S1037>:61' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                    RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                        KeRCVR_Pct_ClsCabVlv_toBatt;
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                }
                else if ((RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffLow <=
                          KeRCVR_U_HTCabinVlv_LowVlt_Check) &&
                         (RCVR_ac_DW.VeRCVR_Cnt_LowCount >=
                          KeRCVR_Cnt_HighCount_Max))
                {
                    /* Transition: '<S1037>:129' */
                    RCVR_ac_DW.is_c35_RCVR_ac =
                        RCVR_ac_IN_Save_HTCabinVlv_LowFinal;

                    /* Entry 'Save_HTCabinVlv_LowFinal': '<S1037>:128' */
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Low2 =
                        RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev;
                    RCVR_ac_B.VeRCVR_b_Low_Learning_Comp = true;
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                }
                else
                {
                    if ((RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffLow <=
                            KeRCVR_U_HTCabinVlv_LowVlt_Check) &&
                            (RCVR_ac_DW.VeRCVR_Cnt_LowCount <
                             KeRCVR_Cnt_HighCount_Max))
                    {
                        /* Transition: '<S1037>:126' */
                        RCVR_ac_DW.is_c35_RCVR_ac =
                            RCVR_ac_IN_Save_HTCabin_Valve_Low;

                        /* Entry 'Save_HTCabin_Valve_Low': '<S1037>:124' */
                        RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Low1 =
                            RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev;
                        RCVR_ac_DW.VeRCVR_Cnt_LowCount++;
                    }
                }
                break;

              case RCVR_ac_IN_Open_Command:
                /* During 'Open_Command': '<S1037>:226' */
                if (((uint32)RCVR_ac_DW.is_Open_Command) ==
                        RCVR_ac_IN_HTCabin_Valve_Open_Command)
                {
                    /* During 'HTCabin_Valve_Open_Command': '<S1037>:18' */
                    if (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >=
                            KeRCVR_t_CabVlvMotion_Time2)
                    {
                        /* Transition: '<S1037>:80' */
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                        RCVR_ac_DW.is_Open_Command =
                            RCVR_ac_IN_HTCabin_Valve_Stop_Cmd;

                        /* Entry 'HTCabin_Valve_Stop_Cmd': '<S1037>:78' */
                        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                            KeRCVR_Pct_StopMovngCabVlv;
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                    }
                    else
                    {
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                    }
                }
                else
                {
                    /* During 'HTCabin_Valve_Stop_Cmd': '<S1037>:78' */
                    if (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >=
                            KeRCVR_t_CabVlvMotion_Time3)
                    {
                        /* Transition: '<S1037>:207' */
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                        RCVR_ac_DW.is_Open_Command = RCVR_ac_IN_NO_ACTIVE_CHILD;
                        RCVR_ac_DW.is_c35_RCVR_ac =
                            RCVR_ac_IN_HTCabin_Valve_High_Diff_Check;

                        /* Entry 'HTCabin_Valve_High_Diff_Check': '<S1037>:206' */
                        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                            KeRCVR_Pct_StopMovngCabVlv;
                        RCVR_ac_B.VeRCVR_U_HTCabinVlv_Vlt_DiffHigh =
                            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys -
                            RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev;
                    }
                    else
                    {
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                    }
                }
                break;

              case RCVR_ac_IN_Save_HTCabinVlv_High:
                /* During 'Save_HTCabinVlv_High': '<S1037>:49' */
                /* Transition: '<S1037>:121' */
                /* Transition: '<S1037>:122' */
                /* Transition: '<S1037>:123' */
                RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Close_Command;

                /* Entry Internal 'Close_Command': '<S1037>:235' */
                /* Transition: '<S1037>:293' */
                RCVR_ac_DW.is_Close_Command =
                    RCVR_ac_IN_HTCabin_Valve_Close_Command;

                /* Entry 'HTCabin_Valve_Close_Command': '<S1037>:61' */
                RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                    KeRCVR_Pct_ClsCabVlv_toBatt;
                RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                    RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                break;

              case RCVR_ac_IN_Save_HTCabinVlv_HighFinal:
                /* During 'Save_HTCabinVlv_HighFinal': '<S1037>:114' */
                if ((RCVR_ac_B.VeRCVR_b_Low_Learning_Comp) &&
                        (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >
                         KeRCVR_t_HTCV_Learn_Comp_Delay))
                {
                    /* Transition: '<S1037>:155' */
                    /* Transition: '<S1037>:157' */
                    /* Transition: '<S1037>:150' */
                    /* Transition: '<S1037>:143' */
                    if (!VeRCVR_b_Learning_Comp_In)
                    {
                        /* Transition: '<S1037>:100' */
                        RCVR_ac_DW.VeRCVR_Cnt_HighCount = 0.0F;
                        RCVR_ac_DW.VeRCVR_Cnt_LowCount = 0.0F;
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                        RCVR_ac_DW.is_c35_RCVR_ac =
                            RCVR_ac_IN_Check_Initial_Postion;

                        /* Entry 'Check_Initial_Postion': '<S1037>:9' */
                        RCVR_ac_B.VeRCVR_t_CabVlvAct_time +=
                            KeRCVR_dT_CabVlvTimer;
                        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                            KeRCVR_Pct_StopMovngCabVlv;
                        RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                    }
                    else
                    {
                        /* Transition: '<S1037>:108' */
                        /* Transition: '<S1037>:213' */
                        RCVR_ac_DW.is_c35_RCVR_ac =
                            RCVR_IN_Command_HTCabin_Valve_StopMoving;

                        /* Entry 'Command_HTCabin_Valve_StopMoving': '<S1037>:107' */
                        RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                            KeRCVR_Pct_StopMovngCabVlv;
                    }
                }
                else if (RCVR_ac_B.VeRCVR_t_CabVlvAct_time >
                         KeRCVR_t_HTCV_Learn_Comp_Delay)
                {
                    /* Transition: '<S1037>:197' */
                    /* Transition: '<S1037>:195' */
                    /* Transition: '<S1037>:122' */
                    /* Transition: '<S1037>:123' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                    RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Close_Command;

                    /* Entry Internal 'Close_Command': '<S1037>:235' */
                    /* Transition: '<S1037>:293' */
                    RCVR_ac_DW.is_Close_Command =
                        RCVR_ac_IN_HTCabin_Valve_Close_Command;

                    /* Entry 'HTCabin_Valve_Close_Command': '<S1037>:61' */
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                    RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                        KeRCVR_Pct_ClsCabVlv_toBatt;
                    RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                }
                else
                {
                    RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                }
                break;

              case RCVR_ac_IN_Save_HTCabinVlv_LowFinal:
                RCVR_ac_Save_HTCabinVlv_LowFinal();
                break;

              default:
                /* During 'Save_HTCabin_Valve_Low': '<S1037>:124' */
                /* Transition: '<S1037>:177' */
                /* Transition: '<S1037>:179' */
                /* Transition: '<S1037>:185' */
                RCVR_ac_B.VeRCVR_t_CabVlvAct_time = 0.0F;
                RCVR_ac_DW.is_c35_RCVR_ac = RCVR_ac_IN_Open_Command;

                /* Entry Internal 'Open_Command': '<S1037>:226' */
                /* Transition: '<S1037>:292' */
                RCVR_ac_DW.is_Open_Command =
                    RCVR_ac_IN_HTCabin_Valve_Open_Command;

                /* Entry 'HTCabin_Valve_Open_Command': '<S1037>:18' */
                RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd =
                    KeRCVR_Pct_OpenCabVlv_toHtrCores;
                RCVR_ac_B.VeRCVR_t_CabVlvAct_time += KeRCVR_dT_CabVlvTimer;
                RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Prev =
                    RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;
                break;
            }
        }

        /* End of Chart: '<S1009>/StateflowChart' */

        /* MinMax: '<S1009>/MinMax4' incorporates:
         *  Constant: '<S1025>/Calib'
         *  DataStoreWrite: '<S1009>/DataStoreWrite'
         *  MinMax: '<S1009>/MinMax3'
         */
        EeRCVR_U_HT_CabVlvSts_Min = fminf(fmaxf
            (RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Low1,
             RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_Low2), KeRCVR_U_CabVlvSts_Low_Max);

        /* MinMax: '<S1009>/MinMax1' incorporates:
         *  Constant: '<S1024>/Calib'
         *  DataStoreWrite: '<S1009>/DataStoreWrite1'
         *  MinMax: '<S1009>/MinMax2'
         */
        EeRCVR_U_HT_CabVlvSts_Max = fmaxf(fminf
            (RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_High1,
             RCVR_ac_B.VeRCVR_U_CabVlv_Vlt_High2), KeRCVR_U_CabVlvSts_High_Min);

        /* Logic: '<S1009>/Logical' */
        RCVR_ac_B.Logical = ((RCVR_ac_B.VeRCVR_b_Low_Learning_Comp) &&
                             (RCVR_ac_B.VeRCVR_b_High_Learning_Comp));

        /* If: '<S1009>/If' */
        if (RCVR_ac_B.Logical)
        {
            /* Outputs for IfAction SubSystem: '<S1009>/EndstopCalSts' incorporates:
             *  ActionPort: '<S1016>/ActionPort'
             */
            /* DataStoreWrite: '<S1016>/DataStoreWrite3' */
            EeRCVR_e_HTCV_Calibration_Sts = 0;

            /* DataStoreWrite: '<S1016>/DataStoreWrite2' incorporates:
             *  Constant: '<S1040>/Calib'
             */
            EeRCVR_Cnt_HTCV_Endstophits = KeRCVR_Cnt_HTCV_Endstophits_Init;

            /* End of Outputs for SubSystem: '<S1009>/EndstopCalSts' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1009>/CalInProgress' incorporates:
             *  ActionPort: '<S1015>/ActionPort'
             */
            /* DataStoreWrite: '<S1015>/DataStoreWrite3' */
            EeRCVR_e_HTCV_Calibration_Sts = 2;

            /* End of Outputs for SubSystem: '<S1009>/CalInProgress' */
        }

        /* End of If: '<S1009>/If' */

        /* Merge: '<S505>/Merge1' incorporates:
         *  Gain: '<S1035>/Gain'
         *  Logic: '<S1009>/Logical2'
         */
        rtb_Comparison4_o0 = !RCVR_ac_B.Logical;

        /* Merge: '<S505>/Merge' incorporates:
         *  Gain: '<S1036>/Gain'
         */
        rtb_Merge = RCVR_ac_B.VeRCVR_Pct_HTCabinVlv_Cmd;

        /* End of Outputs for SubSystem: '<S505>/Learning' */
    }
    else if ((((uint32)VeRCVR_e_HT_CabVlvState_New) == CeRCVR_e_HTCab_Vlv_OFF) ||
             (!rtb_Comparison4_o0))
    {
        /* Outputs for IfAction SubSystem: '<S505>/Isolated' incorporates:
         *  ActionPort: '<S1007>/ActionPort'
         */
        /* Merge: '<S505>/Merge' incorporates:
         *  Constant: '<S1014>/Calib'
         *  SignalConversion generated from: '<S1007>/BatteryValveCommand'
         */
        rtb_Merge = KeRCVR_Pct_CoolVlv1Cmd_On;

        /* Merge: '<S505>/Merge1' incorporates:
         *  Constant: '<S1007>/FALSEConstant'
         *  SignalConversion generated from: '<S1007>/Isolated_Learning_Req_Reset'
         */
        rtb_Comparison4_o0 = false;

        /* End of Outputs for SubSystem: '<S505>/Isolated' */
    }
    else if (((uint32)VeRCVR_e_HT_CabVlvState_New) == CeRCVR_e_HTCab_Vlv_ON)
    {
        /* Outputs for IfAction SubSystem: '<S505>/Open' incorporates:
         *  ActionPort: '<S1010>/ActionPort'
         */
        /* Logic: '<S1041>/Logical1' incorporates:
         *  Constant: '<S1044>/Calib'
         *  Constant: '<S1045>/Calib'
         *  RelationalOperator: '<S1041>/Comparison1'
         *  RelationalOperator: '<S1041>/Comparison2'
         */
        rtb_OR1_oxb = ((rtb_Sum6 >= KeRCVR_Pct_CabVlv_OpenPos) || (rtb_Sum6 <=
                        KeRCVR_Pct_CabVlv_ClosePos));

        /* Logic: '<S1041>/Logical2' incorporates:
         *  Constant: '<S1043>/Calib'
         *  DataStoreRead: '<S1041>/DataStoreRead3'
         *  Logic: '<S1041>/Logical5'
         *  RelationalOperator: '<S1041>/Comparison3'
         *  RelationalOperator: '<S1041>/Comparison5'
         *  RelationalOperator: '<S1041>/Comparison6'
         *  Switch: '<S1500>/Switch3'
         *  UnitDelay: '<S1041>/UnitDelay'
         *  UnitDelay: '<S1041>/UnitDelay1'
         */
        VeRCVR_b_HTCV_EndStopHit = (((rtb_OR1_oxb !=
            RCVR_ac_DW.UnitDelay_DSTATE_hr) && (EeRCVR_Cnt_HTCV_Endstophits <=
            KeRCVR_Cnt_HTCV_Endstophits_Max)) && (VeRCVR_e_PMM_PowerMode_AD ==
            RCVR_ac_DW.UnitDelay1_DSTATE_hz));

        /* Switch: '<S1041>/Switch' incorporates:
         *  Constant: '<S1041>/ConstantValue'
         *  DataStoreRead: '<S1041>/DataStoreRead'
         *  DataStoreWrite: '<S1041>/DataStoreWrite1'
         *  Sum: '<S1041>/Sum'
         */
        if (VeRCVR_b_HTCV_EndStopHit)
        {
            EeRCVR_Cnt_HTCV_Endstophits = (sint16)(EeRCVR_Cnt_HTCV_Endstophits +
                1);
        }

        /* End of Switch: '<S1041>/Switch' */

        /* RelationalOperator: '<S1041>/Comparison4' incorporates:
         *  Constant: '<S1043>/Calib'
         *  DataStoreRead: '<S1041>/DataStoreRead2'
         */
        VeRCVR_b_HTCV_Learning_Req_BD = (EeRCVR_Cnt_HTCV_Endstophits >
            KeRCVR_Cnt_HTCV_Endstophits_Max);

        /* Merge: '<S505>/Merge1' incorporates:
         *  Gain: '<S1046>/Gain'
         */
        rtb_Comparison4_o0 = VeRCVR_b_HTCV_Learning_Req_BD;

        /* Sum: '<S1047>/Subtraction' */
        VeRCVR_Pct_CabVlvOpeng_Err_New =
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bo - rtb_Sum6;

        /* Chart: '<S1047>/StateflowChart' */
        /* Gateway: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Open/HTCV_Controls/New_Approach/StateflowChart */
        /* During: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Open/HTCV_Controls/New_Approach/StateflowChart */
        if (((uint32)RCVR_ac_DW.is_active_c8_RCVR_ac) == 0U)
        {
            /* Entry: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Open/HTCV_Controls/New_Approach/StateflowChart */
            RCVR_ac_DW.is_active_c8_RCVR_ac = 1U;

            /* Entry Internal: RCVR_FUNC_MedTED/RCVC/PropValve_AND_DVC/PropValv/Open/HTCV_Controls/New_Approach/StateflowChart */
            /* Transition: '<S1052>:1' */
            if (VeRCVR_Pct_CabVlvOpeng_Err_New <= KeRCVR_Pct_CmdClsError_Th)
            {
                /* Transition: '<S1052>:14' */
                if (VeRCVR_Pct_CabVlvOpeng_Err_New <
                        KeRCVR_Pct_CabVlvFully_ClsCal_2)
                {
                    /* Transition: '<S1052>:42' */
                    RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                        KeRCVR_t_CabVlvMotion_ClsTime2;
                }
                else
                {
                    /* Transition: '<S1052>:44' */
                    RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                        KeRCVR_t_CabVlvMotion_ClsTime1;
                }

                /* Transition: '<S1052>:43' */
                RCVR_ac_B.VeRCVR_t_StateTime = 0.0F;
                RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Close;

                /* Entry 'Cmd_Close': '<S1052>:4' */
                rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)2.0F;

                /* Merge: '<S505>/Merge' */
                rtb_Merge = KeRCVR_Pct_ClsCabVlv_toBatt;
                RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
            }
            else if (VeRCVR_Pct_CabVlvOpeng_Err_New > KeRCVR_Pct_CmdOpenError_Th)
            {
                /* Transition: '<S1052>:12' */
                if (VeRCVR_Pct_CabVlvOpeng_Err_New >
                        KeRCVR_Pct_CabVlvFully_OpenCal_2)
                {
                    /* Transition: '<S1052>:32' */
                    RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                        KeRCVR_t_CabVlvMotion_OpnTime2;
                }
                else
                {
                    /* Transition: '<S1052>:40' */
                    RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                        KeRCVR_t_CabVlvMotion_OpnTime1;
                }

                /* Transition: '<S1052>:33' */
                RCVR_ac_B.VeRCVR_t_StateTime = 0.0F;
                RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Open;

                /* Entry 'Cmd_Open': '<S1052>:3' */
                rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)1.0F;

                /* Merge: '<S505>/Merge' */
                rtb_Merge = KeRCVR_Pct_OpenCabVlv_toHtrCores;
                RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
            }
            else
            {
                /* Transition: '<S1052>:15' */
                RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Stop;

                /* Entry 'Cmd_Stop': '<S1052>:5' */
                rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)0.0F;

                /* Merge: '<S505>/Merge' */
                rtb_Merge = KeRCVR_Pct_StopMovngCabVlv;
                RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
            }
        }
        else
        {
            switch (RCVR_ac_DW.is_c8_RCVR_ac)
            {
              case RCVR_ac_IN_Cmd_Close:
                rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)2.0F;

                /* Merge: '<S505>/Merge' */
                rtb_Merge = KeRCVR_Pct_ClsCabVlv_toBatt;

                /* During 'Cmd_Close': '<S1052>:4' */
                if (RCVR_ac_B.VeRCVR_t_StateTime >=
                        RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time)
                {
                    /* Transition: '<S1052>:24' */
                    /* Exit 'Cmd_Close': '<S1052>:4' */
                    RCVR_ac_B.VeRCVR_t_StateTime = 0.0F;
                    RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Stop;

                    /* Entry 'Cmd_Stop': '<S1052>:5' */
                    rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)0.0F;

                    /* Merge: '<S505>/Merge' */
                    rtb_Merge = KeRCVR_Pct_StopMovngCabVlv;
                    RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                }
                else
                {
                    RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                }
                break;

              case RCVR_ac_IN_Cmd_Open:
                rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)1.0F;

                /* Merge: '<S505>/Merge' */
                rtb_Merge = KeRCVR_Pct_OpenCabVlv_toHtrCores;

                /* During 'Cmd_Open': '<S1052>:3' */
                if (RCVR_ac_B.VeRCVR_t_StateTime >=
                        RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time)
                {
                    /* Transition: '<S1052>:22' */
                    /* Exit 'Cmd_Open': '<S1052>:3' */
                    RCVR_ac_B.VeRCVR_t_StateTime = 0.0F;
                    RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Stop;

                    /* Entry 'Cmd_Stop': '<S1052>:5' */
                    rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)0.0F;

                    /* Merge: '<S505>/Merge' */
                    rtb_Merge = KeRCVR_Pct_StopMovngCabVlv;
                    RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                }
                else
                {
                    RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                }
                break;

              default:
                rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)0.0F;

                /* Merge: '<S505>/Merge' */
                rtb_Merge = KeRCVR_Pct_StopMovngCabVlv;

                /* During 'Cmd_Stop': '<S1052>:5' */
                if (RCVR_ac_B.VeRCVR_t_StateTime >= KeRCVR_t_CabVlvStop_Time)
                {
                    /* Transition: '<S1052>:29' */
                    if (VeRCVR_Pct_CabVlvOpeng_Err_New <=
                            KeRCVR_Pct_CmdClsError_Th)
                    {
                        /* Transition: '<S1052>:14' */
                        if (VeRCVR_Pct_CabVlvOpeng_Err_New <
                                KeRCVR_Pct_CabVlvFully_ClsCal_2)
                        {
                            /* Transition: '<S1052>:42' */
                            RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                                KeRCVR_t_CabVlvMotion_ClsTime2;
                        }
                        else
                        {
                            /* Transition: '<S1052>:44' */
                            RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                                KeRCVR_t_CabVlvMotion_ClsTime1;
                        }

                        /* Transition: '<S1052>:43' */
                        /* Exit 'Cmd_Stop': '<S1052>:5' */
                        RCVR_ac_B.VeRCVR_t_StateTime = 0.0F;
                        RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Close;

                        /* Entry 'Cmd_Close': '<S1052>:4' */
                        rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)2.0F;

                        /* Merge: '<S505>/Merge' */
                        rtb_Merge = KeRCVR_Pct_ClsCabVlv_toBatt;
                        RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                    }
                    else if (VeRCVR_Pct_CabVlvOpeng_Err_New >
                             KeRCVR_Pct_CmdOpenError_Th)
                    {
                        /* Transition: '<S1052>:12' */
                        if (VeRCVR_Pct_CabVlvOpeng_Err_New >
                                KeRCVR_Pct_CabVlvFully_OpenCal_2)
                        {
                            /* Transition: '<S1052>:32' */
                            RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                                KeRCVR_t_CabVlvMotion_OpnTime2;
                        }
                        else
                        {
                            /* Transition: '<S1052>:40' */
                            RCVR_ac_B.VeRCVR_t_CabVlvMotion_Time =
                                KeRCVR_t_CabVlvMotion_OpnTime1;
                        }

                        /* Transition: '<S1052>:33' */
                        /* Exit 'Cmd_Stop': '<S1052>:5' */
                        RCVR_ac_B.VeRCVR_t_StateTime = 0.0F;
                        RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Open;

                        /* Entry 'Cmd_Open': '<S1052>:3' */
                        rtb_VeRCVR_Cnt_HTCV_Control_St = (sint32)1.0F;

                        /* Merge: '<S505>/Merge' */
                        rtb_Merge = KeRCVR_Pct_OpenCabVlv_toHtrCores;
                        RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                    }
                    else
                    {
                        /* Transition: '<S1052>:15' */
                        /* Exit 'Cmd_Stop': '<S1052>:5' */
                        RCVR_ac_B.VeRCVR_t_StateTime = 0.0F;
                        RCVR_ac_DW.is_c8_RCVR_ac = RCVR_ac_IN_Cmd_Stop;

                        /* Entry 'Cmd_Stop': '<S1052>:5' */
                        RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                    }
                }
                else
                {
                    RCVR_ac_B.VeRCVR_t_StateTime += KeRCVR_dt_HTCVMotion;
                }
                break;
            }
        }

        /* End of Chart: '<S1047>/StateflowChart' */

        /* Gain: '<S1051>/Gain' */
        VeRCVR_Cnt_HTCV_Control_St_SF = (float32)rtb_VeRCVR_Cnt_HTCV_Control_St;

        /* Update for UnitDelay: '<S1041>/UnitDelay' */
        RCVR_ac_DW.UnitDelay_DSTATE_hr = rtb_OR1_oxb;

        /* Update for UnitDelay: '<S1041>/UnitDelay1' incorporates:
         *  Switch: '<S1500>/Switch3'
         */
        RCVR_ac_DW.UnitDelay1_DSTATE_hz = VeRCVR_e_PMM_PowerMode_AD;

        /* End of Outputs for SubSystem: '<S505>/Open' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S505>/Fault' incorporates:
         *  ActionPort: '<S1006>/ActionPort'
         */
        /* Merge: '<S505>/Merge' incorporates:
         *  Constant: '<S1013>/Calib'
         *  SignalConversion generated from: '<S1006>/BatteryValveCommand'
         */
        rtb_Merge = KeRCVR_Pct_CoolVlv1Cmd_Flt;

        /* Merge: '<S505>/Merge1' incorporates:
         *  Constant: '<S1006>/FALSEConstant'
         *  SignalConversion generated from: '<S1006>/Fault_Learning_Req_Reset'
         */
        rtb_Comparison4_o0 = false;

        /* End of Outputs for SubSystem: '<S505>/Fault' */
    }

    /* End of If: '<S505>/If' */

    /* Outputs for Atomic SubSystem: '<S505>/SignalLatchOnWithReset1' */
    /* Logic: '<S505>/Logical2' incorporates:
     *  Constant: '<S1004>/Constant'
     *  Logic: '<S1011>/NOT'
     *  RelationalOperator: '<S505>/Comparison5'
     */
    rtb_OR1_oxb = (((uint32)VeRCVR_e_HT_CabVlvState_New) ==
                   CeRCVR_e_HTCab_Vlv_Learning);

    /* Logic: '<S1011>/OR1' incorporates:
     *  Logic: '<S1011>/OR'
     *  Logic: '<S505>/Logical'
     *  Logic: '<S505>/Logical2'
     *  UnitDelay: '<S1011>/UnitDelay'
     *  UnitDelay: '<S505>/UnitDelay'
     *  UnitDelay: '<S505>/UnitDelay1'
     */
    RCVR_ac_DW.UnitDelay1_DSTATE_ot = (((RCVR_ac_DW.UnitDelay_DSTATE_pc) &&
        rtb_OR1_oxb) || (rtb_OR1_oxb && (RCVR_ac_DW.UnitDelay_DSTATE_ne)));

    /* Update for UnitDelay: '<S1011>/UnitDelay' incorporates:
     *  UnitDelay: '<S505>/UnitDelay1'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_ne = RCVR_ac_DW.UnitDelay1_DSTATE_ot;

    /* End of Outputs for SubSystem: '<S505>/SignalLatchOnWithReset1' */

    /* RelationalOperator: '<S506>/Comparison4' incorporates:
     *  Constant: '<S1068>/Constant'
     */
    rtb_OR1_oxb = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) ==
                   CePMTR_e_DISBL_All_Thrml);

    /* Logic: '<S506>/Logical2' incorporates:
     *  Logic: '<S506>/Logical4'
     */
    rtb_OR1_kx = (rtb_OR1_oxb && (!VeRCVR_b_CPV_SavePosnReqCmpl));

    /* Outputs for Atomic SubSystem: '<S506>/EdgeRising2' */
    /* Logic: '<S1067>/AND' incorporates:
     *  Logic: '<S1067>/OR1'
     *  UnitDelay: '<S1067>/UnitDelay'
     */
    rtb_OR1_fj = (rtb_OR1_kx && (!RCVR_ac_DW.UnitDelay_DSTATE_ni));

    /* Update for UnitDelay: '<S1067>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_ni = rtb_OR1_kx;

    /* End of Outputs for SubSystem: '<S506>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S506>/EdgeRising1' */
    /* Logic: '<S1066>/AND' incorporates:
     *  Logic: '<S1066>/OR1'
     *  UnitDelay: '<S1066>/UnitDelay'
     */
    rtb_AND_k45 = !RCVR_ac_DW.UnitDelay_DSTATE_nd;

    /* Update for UnitDelay: '<S1066>/UnitDelay' incorporates:
     *  Constant: '<S506>/TRUEConstant2'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_nd = true;

    /* End of Outputs for SubSystem: '<S506>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S506>/CountDownResetEnabled' */
    /* Switch: '<S1065>/Switch1' incorporates:
     *  Constant: '<S1065>/ConstantValue'
     *  Constant: '<S1069>/Calib'
     *  Logic: '<S1065>/AND'
     *  Logic: '<S506>/Logical5'
     *  RelationalOperator: '<S1065>/GreaterThan'
     *  Switch: '<S1065>/Switch2'
     *  UnitDelay: '<S1065>/UnitDelay'
     */
    if (rtb_OR1_fj || rtb_AND_k45)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_oj = KeRCVR_Cnt_VlvShtDwn_Cntr;
    }
    else
    {
        if (rtb_OR1_kx && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_oj) > 0))
        {
            /* UnitDelay: '<S1065>/UnitDelay' incorporates:
             *  Constant: '<S1065>/ConstantValue1'
             *  Sum: '<S1065>/Subtraction'
             *  Switch: '<S1065>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_oj = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_oj) - 1));
        }
    }

    /* End of Switch: '<S1065>/Switch1' */
    /* End of Outputs for SubSystem: '<S506>/CountDownResetEnabled' */

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S1008>/Calib'
     *  Switch: '<S505>/Switch'
     */
    if (VeRCVF_b_CabVlv_DVC_Lim_AD)
    {
        /* Switch: '<S24>/Switch' */
        rtb_Merge = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j;
    }
    else
    {
        if (!KeRCVR_b_ClntProp3WyVlv_Cmd_Sel)
        {
            /* Switch: '<S24>/Switch' incorporates:
             *  Switch: '<S505>/Switch'
             */
            rtb_Merge = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bo;
        }
    }

    /* End of Switch: '<S24>/Switch' */

    /* Switch: '<S24>/Switch1' */
    if (VeRCVF_b_CPV_DVC_Lim_AD)
    {
        /* Switch: '<S24>/Switch1' */
        Switch1_f = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k;
    }
    else
    {
        /* Switch: '<S24>/Switch1' */
        Switch1_f = rtb_Vector_n;
    }

    /* End of Switch: '<S24>/Switch1' */

    /* Switch: '<S24>/Switch2' */
    if (VeRCVF_b_LTR_BypVlv_DVC_Lim_AD)
    {
        /* Switch: '<S24>/Switch2' */
        Switch2 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o;
    }
    else
    {
        /* Switch: '<S24>/Switch2' */
        Switch2 = rtb_Switch2_dd;
    }

    /* End of Switch: '<S24>/Switch2' */

    /* Switch: '<S24>/Switch3' */
    if (VeRCVF_b_HTL_BypVlv_DVC_Lim_AD)
    {
        /* Switch: '<S24>/Switch3' */
        Switch3_b = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bn;
    }
    else
    {
        /* Switch: '<S24>/Switch3' */
        Switch3_b = rtb_Sum1;
    }

    /* End of Switch: '<S24>/Switch3' */

    /* S-Function (sfix_bitop): '<S42>/BitwiseOperator7' incorporates:
     *  DataStoreRead: '<S42>/StatusByte_CoolantVlvB_Ckt'
     *  S-Function (sfix_bitop): '<S43>/BitwiseOperator7'
     */
    rtb_VeRCVR_Cnt_HTCV_Control_St = ((sint32)
        RCVR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 32;

    /* S-Function (sfix_bitop): '<S44>/BitwiseOperator7' incorporates:
     *  DataStoreRead: '<S44>/StatusByte_CoolantVlvB_Ckt'
     *  S-Function (sfix_bitop): '<S45>/BitwiseOperator7'
     */
    UnitDelay_DSTATE_eru_tmp = ((uint32)RCVR_ac_DW.StatusByte_CoolantVlvB_Ckt) &
        64U;

    /* S-Function (sfix_bitop): '<S44>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S44>/StatusByte_CoolantVlvB_Ckt'
     *  S-Function (sfix_bitop): '<S45>/BitwiseOperator1'
     */
    UnitDelay_DSTATE_eru_tmp_0 = ((uint32)RCVR_ac_DW.StatusByte_CoolantVlvB_Ckt)
        & 2U;

    /* Outputs for Atomic SubSystem: '<S31>/SignalLatchOnWithReset' */
    /* Logic: '<S52>/OR1' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S44>/Constant1'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S47>/Calib'
     *  Logic: '<S31>/Logical2'
     *  Logic: '<S31>/Logical4'
     *  Logic: '<S44>/LogicalOperator'
     *  Logic: '<S52>/NOT'
     *  Logic: '<S52>/OR'
     *  RelationalOperator: '<S42>/RelationalOperator'
     *  RelationalOperator: '<S44>/RelationalOperator'
     *  RelationalOperator: '<S44>/RelationalOperator1'
     *  S-Function (sfix_bitop): '<S42>/BitwiseOperator7'
     *  S-Function (sfix_bitop): '<S44>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S44>/BitwiseOperator7'
     *  UnitDelay: '<S52>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_eru = (((rtb_VeRCVR_Cnt_HTCV_Control_St > 0) ||
        (KeRCVR_b_HTSOVlv_OC_Fail)) || ((((UnitDelay_DSTATE_eru_tmp != 0U) ||
        (UnitDelay_DSTATE_eru_tmp_0 != 0U)) && (!KeRCVR_b_HTSOVlv_OC_Pass)) &&
        (RCVR_ac_DW.UnitDelay_DSTATE_eru)));

    /* End of Outputs for SubSystem: '<S31>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S31>/SignalLatchOnWithReset1' */
    /* Logic: '<S53>/OR1' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S45>/Constant1'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Logic: '<S31>/Logical5'
     *  Logic: '<S31>/Logical6'
     *  Logic: '<S45>/LogicalOperator'
     *  Logic: '<S53>/NOT'
     *  Logic: '<S53>/OR'
     *  RelationalOperator: '<S43>/RelationalOperator'
     *  RelationalOperator: '<S45>/RelationalOperator'
     *  RelationalOperator: '<S45>/RelationalOperator1'
     *  UnitDelay: '<S53>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_lap = (((rtb_VeRCVR_Cnt_HTCV_Control_St > 0) ||
        (KeRCVR_b_HTSOVlv_SG_Fail)) || ((((UnitDelay_DSTATE_eru_tmp != 0U) ||
        (UnitDelay_DSTATE_eru_tmp_0 != 0U)) && (!KeRCVR_b_HTSOVlv_SG_Pass)) &&
        (RCVR_ac_DW.UnitDelay_DSTATE_lap)));

    /* End of Outputs for SubSystem: '<S31>/SignalLatchOnWithReset1' */

    /* Logic: '<S31>/Logical1' incorporates:
     *  UnitDelay: '<S52>/UnitDelay'
     *  UnitDelay: '<S53>/UnitDelay'
     */
    rtb_AND_k45 = ((RCVR_ac_DW.UnitDelay_DSTATE_eru) ||
                   (RCVR_ac_DW.UnitDelay_DSTATE_lap));

    /* Outputs for Atomic SubSystem: '<S31>/SignalLatchOnWithReset2' */
    /* Logic: '<S54>/OR1' incorporates:
     *  Constant: '<S40>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S41>/Constant1'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S49>/Calib'
     *  DataStoreRead: '<S40>/StatusByte_CoolantVlvB_CktHi'
     *  DataStoreRead: '<S41>/StatusByte_CoolantVlvB_CktHi'
     *  Logic: '<S31>/Logical7'
     *  Logic: '<S31>/Logical8'
     *  Logic: '<S41>/LogicalOperator'
     *  Logic: '<S54>/NOT'
     *  Logic: '<S54>/OR'
     *  RelationalOperator: '<S40>/RelationalOperator'
     *  RelationalOperator: '<S41>/RelationalOperator'
     *  RelationalOperator: '<S41>/RelationalOperator1'
     *  S-Function (sfix_bitop): '<S40>/BitwiseOperator7'
     *  S-Function (sfix_bitop): '<S41>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S41>/BitwiseOperator7'
     *  UnitDelay: '<S54>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_jyo = ((((((sint32)
        RCVR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 32) > 0) ||
        (KeRCVR_b_HTSOVlv_SB_Fail)) || (((((((uint32)
        RCVR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 64U) != 0U) || ((((uint32)
        RCVR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 2U) != 0U)) &&
        (!KeRCVR_b_HTSOVlv_SB_Pass)) && (RCVR_ac_DW.UnitDelay_DSTATE_jyo)));

    /* End of Outputs for SubSystem: '<S31>/SignalLatchOnWithReset2' */

    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S1165>/Calib'
     */
    if (KeRCVR_b_BoolValv_Fault_Dial)
    {
        /* Switch: '<S85>/Switch1' incorporates:
         *  Constant: '<S81>/Constant'
         */
        rtb_Switch1_gr = CeRCVR_e_HTSO_Vlv_Faulty;
    }
    else
    {
        /* RelationalOperator: '<S86>/Comparison4' incorporates:
         *  RelationalOperator: '<S86>/Comparison1'
         *  RelationalOperator: '<S86>/Comparison2'
         *  RelationalOperator: '<S86>/Comparison3'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         */
        tmp_1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i5;

        /* Switch: '<S84>/Switch1' incorporates:
         *  Constant: '<S87>/Constant'
         *  Constant: '<S88>/Constant'
         *  Constant: '<S89>/Constant'
         *  Constant: '<S90>/Constant'
         *  Logic: '<S86>/Logical2'
         *  RelationalOperator: '<S86>/Comparison1'
         *  RelationalOperator: '<S86>/Comparison2'
         *  RelationalOperator: '<S86>/Comparison3'
         *  RelationalOperator: '<S86>/Comparison4'
         */
        if ((((CeTHMR_e_Vlv1Pwrd == ((uint32)tmp_1)) || (((uint32)tmp_1) ==
                CeTHMR_e_Vlv1N2Pwrd)) || (CeTHMR_e_Vlv1N3Pwrd == ((uint32)tmp_1)))
            || (((uint32)tmp_1) == CeTHMR_e_Vlv1N2N3Pwrd))
        {
            /* Switch: '<S85>/Switch1' incorporates:
             *  Constant: '<S82>/Constant'
             */
            rtb_Switch1_gr = CeRCVR_e_HTSO_Vlv_ON;
        }
        else
        {
            /* Switch: '<S85>/Switch1' incorporates:
             *  Constant: '<S83>/Constant'
             */
            rtb_Switch1_gr = CeRCVR_e_HTSO_Vlv_OFF;
        }

        /* End of Switch: '<S84>/Switch1' */
    }

    /* End of Switch: '<S85>/Switch1' */

    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S71>/Constant'
     *  Constant: '<S72>/Constant'
     *  Constant: '<S73>/Constant'
     *  If: '<S70>/If'
     *  RelationalOperator: '<S70>/Comparison1'
     *  RelationalOperator: '<S70>/Comparison2'
     *  RelationalOperator: '<S70>/Comparison3'
     */
    if (VeRCVF_b_HTSO_Vlv_DVC_Lim_AD)
    {
        /* Switch: '<S29>/Switch' */
        rtb_OR1_fj = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bm;
    }
    else if ((CeRCVR_e_HTSO_Vlv_OFF == ((uint32)rtb_Switch1_gr)) || (((uint32)
               RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) ==
              CePMTR_e_DISBL_All_Thrml))
    {
        /* Outputs for IfAction SubSystem: '<S70>/Isolated' incorporates:
         *  ActionPort: '<S75>/ActionPort'
         */
        /* If: '<S70>/If' incorporates:
         *  Constant: '<S79>/Calib'
         *  SignalConversion generated from: '<S75>/Valve1CommandIsolated'
         *  Switch: '<S29>/Switch'
         */
        rtb_OR1_fj = KeRCVR_b_CoolVlv1Cmd_On;

        /* End of Outputs for SubSystem: '<S70>/Isolated' */
    }
    else if (((uint32)rtb_Switch1_gr) == CeRCVR_e_HTSO_Vlv_ON)
    {
        /* Outputs for IfAction SubSystem: '<S70>/Open' incorporates:
         *  ActionPort: '<S76>/ActionPort'
         */
        /* If: '<S70>/If' incorporates:
         *  Constant: '<S80>/Calib'
         *  SignalConversion generated from: '<S76>/Valve1CommandOpen'
         *  Switch: '<S29>/Switch'
         */
        rtb_OR1_fj = KeRCVR_b_CoolVlv1Cmd_Off;

        /* End of Outputs for SubSystem: '<S70>/Open' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S70>/Fault' incorporates:
         *  ActionPort: '<S74>/ActionPort'
         */
        /* If: '<S70>/If' incorporates:
         *  Constant: '<S78>/Calib'
         *  SignalConversion generated from: '<S74>/Valve1CommandFlt'
         *  Switch: '<S29>/Switch'
         */
        rtb_OR1_fj = KeRCVR_b_CoolVlv1Cmd_Flt;

        /* End of Outputs for SubSystem: '<S70>/Fault' */
    }

    /* End of Switch: '<S29>/Switch' */

    /* RelationalOperator: '<S28>/Comparison5' incorporates:
     *  UnitDelay: '<S28>/UnitDelay'
     */
    rtb_Gain_p = (rtb_OR1_fj != RCVR_ac_DW.UnitDelay_DSTATE_hp4);

    /* Outputs for Atomic SubSystem: '<S28>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S38>/EdgeFalling1' */
    /* Logic: '<S61>/OR1' incorporates:
     *  Logic: '<S38>/AND'
     */
    rtb_Switch1_bb = !rtb_Gain_p;

    /* Logic: '<S61>/AND' incorporates:
     *  Logic: '<S61>/OR1'
     *  UnitDelay: '<S61>/UnitDelay'
     */
    rtb_AND_ijg = (rtb_Switch1_bb && (RCVR_ac_DW.UnitDelay_DSTATE_c1));

    /* Update for UnitDelay: '<S61>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_c1 = rtb_Gain_p;

    /* End of Outputs for SubSystem: '<S38>/EdgeFalling1' */

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S35>/Calib'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S38>/ConstantValue1'
     *  MinMax: '<S38>/Minimum'
     *  Sum: '<S38>/Summation'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    if (rtb_AND_ijg)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_k = KeRCVR_t_HTSOVlv_trans_delay;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_k = fmaxf(RCVR_ac_DW.UnitDelay_DSTATE_k -
            KeRCVR_t_HTSOVlv_dT, 0.0F);
    }

    /* End of Switch: '<S38>/Switch' */

    /* Outputs for Enabled SubSystem: '<S28>/Check_Vlv_Sts' incorporates:
     *  EnablePort: '<S32>/Enable'
     */
    /* Logic: '<S28>/Logical1' incorporates:
     *  Constant: '<S38>/ConstantValue2'
     *  Logic: '<S38>/AND'
     *  RelationalOperator: '<S38>/GreaterThan'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    if (rtb_Switch1_bb && (RCVR_ac_DW.UnitDelay_DSTATE_k <= 0.0F))
    {
        /* Gain: '<S55>/Gain' */
        RCVR_ac_B.Gain_i = rtb_OR1_fj;
    }

    /* End of Logic: '<S28>/Logical1' */
    /* End of Outputs for SubSystem: '<S28>/Check_Vlv_Sts' */
    /* End of Outputs for SubSystem: '<S28>/TurnOffDelayTime' */

    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     */
    if (KeRCVR_b_HTSoV_StkCls_FltDtct_SD)
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  Constant: '<S62>/Calib'
         */
        rtb_Switch1_bb = KeRCVR_b_HTSoV_StkCls_FltDtct_D;
    }
    else
    {
        /* Switch: '<S39>/Switch1' */
        rtb_Switch1_bb = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mc;
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S39>/Switch' incorporates:
     *  Constant: '<S67>/Calib'
     */
    if (KeRCVR_b_HTSoV_StkOpn_FltDtct_SD)
    {
        /* Switch: '<S39>/Switch' incorporates:
         *  Constant: '<S66>/Calib'
         */
        rtb_AND_ijg = KeRCVR_b_HTSoV_StkOpn_FltDtct_D;
    }
    else
    {
        /* Switch: '<S39>/Switch' */
        rtb_AND_ijg = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ae;
    }

    /* End of Switch: '<S39>/Switch' */

    /* Switch: '<S39>/Switch2' incorporates:
     *  Constant: '<S69>/Calib'
     */
    if (KeRCVR_b_HTSoV_StkOpn_XYEnbl_SD)
    {
        /* Switch: '<S39>/Switch2' incorporates:
         *  Constant: '<S68>/Calib'
         */
        rtb_UnitDelay_b0 = KeRCVR_b_HTSoV_StkOpn_XYEnbl_D;
    }
    else
    {
        /* Switch: '<S39>/Switch2' incorporates:
         *  Logic: '<S39>/Logical2'
         */
        rtb_UnitDelay_b0 = !RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hz;
    }

    /* End of Switch: '<S39>/Switch2' */

    /* Switch: '<S39>/Switch3' incorporates:
     *  Constant: '<S65>/Calib'
     */
    if (KeRCVR_b_HTSoV_StkCls_XYEnbl_SD)
    {
        /* Switch: '<S39>/Switch3' incorporates:
         *  Constant: '<S64>/Calib'
         */
        rtb_Switch3_hs = KeRCVR_b_HTSoV_StkCls_XYEnbl_D;
    }
    else
    {
        /* Switch: '<S39>/Switch3' incorporates:
         *  Logic: '<S39>/Logical3'
         */
        rtb_Switch3_hs = !RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i4;
    }

    /* End of Switch: '<S39>/Switch3' */

    /* Switch: '<S28>/Switch' */
    if (rtb_OR1_fj)
    {
        /* Switch: '<S28>/Switch' incorporates:
         *  Constant: '<S33>/Constant'
         */
        rtb_Switch_md = CeRCVR_e_Vlv_Energize;
    }
    else
    {
        /* Switch: '<S28>/Switch' incorporates:
         *  Constant: '<S34>/Constant'
         */
        rtb_Switch_md = CeRCVR_e_Vlv_Deenergize;
    }

    /* End of Switch: '<S28>/Switch' */

    /* Truth Table: '<S37>/ConsiderBSWDiag' incorporates:
     *  Constant: '<S33>/Constant'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S58>/Constant'
     *  Switch: '<S28>/Switch'
     *  Truth Table: '<S37>/DiscardBSWDiag'
     *  UnitDelay: '<S54>/UnitDelay'
     */
    /* Truth Table Function 'RCVR_FUNC_MedTED/RCVC/BooleanValveDVC/Vlv_status/Subsystem/ConsiderBSWDiag': '<S56>:1' */
    /*  OpenCircuit */
    /*  or Short_to_Ground */
    /*  Set */
    /*  Short_to_Battery */
    /*  Set */
    /*  Stuck_Close */
    /*  Set */
    if (rtb_Switch1_bb && rtb_Switch3_hs)
    {
        /* Condition '#3': '<S56>:1:25' */
        rtb_AND_hb = true;
    }
    else
    {
        rtb_AND_hb = false;
    }

    /*  Stuck_Open */
    /*  Set */
    if (rtb_AND_ijg && rtb_UnitDelay_b0)
    {
        /* Condition '#4': '<S56>:1:30' */
        c = true;
    }
    else
    {
        c = false;
    }

    /*  Enable_Condition1 */
    /*  Enable_Condition2 */
    rtb_Gain_p = !RCVR_ac_DW.UnitDelay_DSTATE_jyo;
    tmp_9 = !rtb_AND_k45;
    tmp_2 = (tmp_9 && rtb_Gain_p);
    tmp_3 = !c;
    tmp_4 = !rtb_UnitDelay_b0;
    tmp_8 = !rtb_AND_hb;
    tmp_6 = (tmp_2 && tmp_8);
    tmp_5 = (tmp_6 && tmp_3);
    tmp_b = (tmp_5 && rtb_Switch3_hs);
    if (tmp_b && tmp_4)
    {
        /* Decision 'D1': '<S56>:1:40' */
        /* Condition '#5': '<S56>:1:34' */
        /*  Status is equal to Cmd */
        /* Action '1': '<S56>:1:80' */
        rtb_Status_h = rtb_Switch_md;
    }
    else if ((((tmp_2 && rtb_AND_hb) && tmp_3) && rtb_Switch3_hs) && tmp_4)
    {
        /* Decision 'D2': '<S56>:1:42' */
        /* Condition '#5': '<S56>:1:34' */
        /*  Status is Valve Close */
        /* Action '3': '<S56>:1:92' */
        rtb_Status_h = CeRCVR_e_Vlv_Deenergize;
    }
    else
    {
        tmp_7 = !rtb_Switch3_hs;
        tmp_5 = (tmp_5 && tmp_7);
        if (tmp_5 && rtb_UnitDelay_b0)
        {
            /* Decision 'D3': '<S56>:1:44' */
            /* Condition '#6': '<S56>:1:38' */
            /*  Status is equal to Cmd */
            /* Action '1': '<S56>:1:80' */
            rtb_Status_h = rtb_Switch_md;
        }
        else if (((tmp_6 && c) && tmp_7) && rtb_UnitDelay_b0)
        {
            /* Decision 'D4': '<S56>:1:46' */
            /* Condition '#6': '<S56>:1:38' */
            /*  Status is Valve Open */
            /* Action '2': '<S56>:1:86' */
            rtb_Status_h = CeRCVR_e_Vlv_Energize;
        }
        else if (tmp_5 && tmp_4)
        {
            /* Decision 'D5': '<S56>:1:48' */
            /*  Status Cannot be determined */
            /* Action '4': '<S56>:1:98' */
            rtb_Status_h = CeRCVR_e_Vlv_Faulty;
        }
        else
        {
            rtb_Gain_p = (rtb_AND_k45 && rtb_Gain_p);
            tmp_6 = (rtb_Gain_p && tmp_8);
            tmp_5 = (tmp_6 && tmp_3);
            if ((tmp_5 && rtb_Switch3_hs) && tmp_4)
            {
                /* Condition '#1': '<S56>:1:15' */
                /* Decision 'D6': '<S56>:1:50' */
                /* Condition '#5': '<S56>:1:34' */
                /*  Status is Valve Open */
                /* Action '2': '<S56>:1:86' */
                rtb_Status_h = CeRCVR_e_Vlv_Energize;
            }
            else
            {
                tmp_5 = (tmp_5 && tmp_7);
                if (tmp_5 && rtb_UnitDelay_b0)
                {
                    /* Condition '#1': '<S56>:1:15' */
                    /* Decision 'D7': '<S56>:1:52' */
                    /* Condition '#6': '<S56>:1:38' */
                    /*  Status Cannot be determined */
                    /* Action '4': '<S56>:1:98' */
                    rtb_Status_h = CeRCVR_e_Vlv_Faulty;
                }
                else
                {
                    tmp_9 = (tmp_9 && (RCVR_ac_DW.UnitDelay_DSTATE_jyo));
                    tmp_8 = (tmp_9 && tmp_8);
                    tmp_a = (tmp_8 && tmp_3);
                    if ((tmp_a && rtb_Switch3_hs) && tmp_4)
                    {
                        /* Decision 'D8': '<S56>:1:54' */
                        /* Condition '#2': '<S56>:1:20' */
                        /* Condition '#5': '<S56>:1:34' */
                        /*  Status Cannot be determined */
                        /* Action '4': '<S56>:1:98' */
                        rtb_Status_h = CeRCVR_e_Vlv_Faulty;
                    }
                    else
                    {
                        tmp_a = (tmp_a && tmp_7);
                        if (tmp_a && rtb_UnitDelay_b0)
                        {
                            /* Decision 'D9': '<S56>:1:56' */
                            /* Condition '#2': '<S56>:1:20' */
                            /* Condition '#6': '<S56>:1:38' */
                            /*  Status is Valve Close */
                            /* Action '3': '<S56>:1:92' */
                            rtb_Status_h = CeRCVR_e_Vlv_Deenergize;
                        }
                        else if ((((rtb_Gain_p && rtb_AND_hb) && tmp_3) &&
                                  rtb_Switch3_hs) && tmp_4)
                        {
                            /* Condition '#1': '<S56>:1:15' */
                            /* Decision 'D10': '<S56>:1:58' */
                            /* Condition '#5': '<S56>:1:34' */
                            /*  Status Cannot be determined */
                            /* Action '4': '<S56>:1:98' */
                            rtb_Status_h = CeRCVR_e_Vlv_Faulty;
                        }
                        else if (((tmp_6 && c) && tmp_7) && rtb_UnitDelay_b0)
                        {
                            /* Condition '#1': '<S56>:1:15' */
                            /* Decision 'D11': '<S56>:1:60' */
                            /* Condition '#6': '<S56>:1:38' */
                            /*  Status is Valve Open */
                            /* Action '2': '<S56>:1:86' */
                            rtb_Status_h = CeRCVR_e_Vlv_Energize;
                        }
                        else if ((((tmp_9 && rtb_AND_hb) && tmp_3) &&
                                  rtb_Switch3_hs) && tmp_4)
                        {
                            /* Decision 'D12': '<S56>:1:62' */
                            /* Condition '#2': '<S56>:1:20' */
                            /* Condition '#5': '<S56>:1:34' */
                            /*  Status is Valve Close */
                            /* Action '3': '<S56>:1:92' */
                            rtb_Status_h = CeRCVR_e_Vlv_Deenergize;
                        }
                        else if (((tmp_8 && c) && tmp_7) && rtb_UnitDelay_b0)
                        {
                            /* Decision 'D13': '<S56>:1:64' */
                            /* Condition '#2': '<S56>:1:20' */
                            /* Condition '#6': '<S56>:1:38' */
                            /*  Status Cannot be determined */
                            /* Action '4': '<S56>:1:98' */
                            rtb_Status_h = CeRCVR_e_Vlv_Faulty;
                        }
                        else if (tmp_5 && tmp_4)
                        {
                            /* Condition '#1': '<S56>:1:15' */
                            /* Decision 'D14': '<S56>:1:66' */
                            /*  Status is Valve Open */
                            /* Action '2': '<S56>:1:86' */
                            rtb_Status_h = CeRCVR_e_Vlv_Energize;
                        }
                        else if (tmp_a && tmp_4)
                        {
                            /* Decision 'D15': '<S56>:1:68' */
                            /* Condition '#2': '<S56>:1:20' */
                            /*  Status is Valve Close */
                            /* Action '3': '<S56>:1:92' */
                            rtb_Status_h = CeRCVR_e_Vlv_Deenergize;
                        }
                        else if (tmp_b && rtb_UnitDelay_b0)
                        {
                            /* Decision 'D16': '<S56>:1:70' */
                            /* Condition '#5': '<S56>:1:34' */
                            /* Condition '#6': '<S56>:1:38' */
                            /*  Status is equal to Cmd */
                            /* Action '1': '<S56>:1:80' */
                            rtb_Status_h = rtb_Switch_md;
                        }
                        else
                        {
                            /*  Default */
                            /*  Status Cannot be determined */
                            /* Action '4': '<S56>:1:98' */
                            rtb_Status_h = CeRCVR_e_Vlv_Faulty;
                        }
                    }
                }
            }
        }
    }

    /* End of Truth Table: '<S37>/ConsiderBSWDiag' */

    /* Truth Table: '<S37>/DiscardBSWDiag' incorporates:
     *  Constant: '<S33>/Constant'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S59>/Constant'
     *  UnitDelay: '<S54>/UnitDelay'
     */
    /* Truth Table Function 'RCVR_FUNC_MedTED/RCVC/BooleanValveDVC/Vlv_status/Subsystem/DiscardBSWDiag': '<S57>:1' */
    /*  OpenCircuit */
    /*  or Short_to_Ground */
    /*  Set */
    /*  Short_to_Battery */
    /*  Set */
    /*  Stuck_Close */
    /*  Set */
    if (rtb_Switch1_bb && rtb_Switch3_hs)
    {
        /* Condition '#3': '<S57>:1:25' */
        rtb_AND_hb = true;
    }
    else
    {
        rtb_AND_hb = false;
    }

    /*  Stuck_Open */
    /*  Set */
    if (rtb_AND_ijg && rtb_UnitDelay_b0)
    {
        /* Condition '#4': '<S57>:1:30' */
        c = true;
    }
    else
    {
        c = false;
    }

    /*  Enable_Condition1 */
    /*  Enable_Condition2 */
    rtb_Gain_p = !c;
    tmp_9 = !rtb_AND_hb;
    tmp_3 = (tmp_2 && tmp_9);
    tmp_8 = (tmp_3 && rtb_Gain_p);
    tmp_6 = (tmp_8 && rtb_Switch3_hs);
    if ((!tmp_6) || (!tmp_4))
    {
        if ((((tmp_2 && rtb_AND_hb) && rtb_Gain_p) && rtb_Switch3_hs) && tmp_4)
        {
            /* Decision 'D2': '<S57>:1:42' */
            /* Condition '#5': '<S57>:1:34' */
            /*  Status is Valve Close */
            /* Action '3': '<S57>:1:92' */
            rtb_Switch_md = CeRCVR_e_Vlv_Deenergize;
        }
        else
        {
            tmp_2 = !rtb_Switch3_hs;
            tmp_8 = (tmp_8 && tmp_2);
            if ((!tmp_8) || (!rtb_UnitDelay_b0))
            {
                if (((tmp_3 && c) && tmp_2) && rtb_UnitDelay_b0)
                {
                    /* Decision 'D4': '<S57>:1:46' */
                    /* Condition '#6': '<S57>:1:38' */
                    /*  Status is Valve Open */
                    /* Action '2': '<S57>:1:86' */
                    rtb_Switch_md = CeRCVR_e_Vlv_Energize;
                }
                else if (tmp_8 && tmp_4)
                {
                    /* Decision 'D5': '<S57>:1:48' */
                    /*  Status Cannot be determined */
                    /* Action '4': '<S57>:1:98' */
                    rtb_Switch_md = CeRCVR_e_Vlv_Faulty;
                }
                else
                {
                    tmp_3 = (rtb_AND_k45 && (!RCVR_ac_DW.UnitDelay_DSTATE_jyo));
                    tmp_8 = (tmp_3 && tmp_9);
                    tmp_5 = (tmp_8 && rtb_Gain_p);
                    if ((tmp_5 && rtb_Switch3_hs) && tmp_4)
                    {
                        /* Condition '#1': '<S57>:1:15' */
                        /* Decision 'D6': '<S57>:1:50' */
                        /* Condition '#5': '<S57>:1:34' */
                        /*  Status is Valve Open */
                        /* Action '2': '<S57>:1:86' */
                        rtb_Switch_md = CeRCVR_e_Vlv_Energize;
                    }
                    else
                    {
                        tmp_5 = (tmp_5 && tmp_2);
                        if (tmp_5 && rtb_UnitDelay_b0)
                        {
                            /* Condition '#1': '<S57>:1:15' */
                            /* Decision 'D7': '<S57>:1:52' */
                            /* Condition '#6': '<S57>:1:38' */
                            /*  Status is Valve Close */
                            /* Action '3': '<S57>:1:92' */
                            rtb_Switch_md = CeRCVR_e_Vlv_Deenergize;
                        }
                        else
                        {
                            tmp_b = ((!rtb_AND_k45) &&
                                     (RCVR_ac_DW.UnitDelay_DSTATE_jyo));
                            tmp_9 = (tmp_b && tmp_9);
                            tmp_7 = (tmp_9 && rtb_Gain_p);
                            if ((tmp_7 && rtb_Switch3_hs) && tmp_4)
                            {
                                /* Decision 'D8': '<S57>:1:54' */
                                /* Condition '#2': '<S57>:1:20' */
                                /* Condition '#5': '<S57>:1:34' */
                                /*  Status is Valve Open */
                                /* Action '2': '<S57>:1:86' */
                                rtb_Switch_md = CeRCVR_e_Vlv_Energize;
                            }
                            else
                            {
                                tmp_7 = (tmp_7 && tmp_2);
                                if (tmp_7 && rtb_UnitDelay_b0)
                                {
                                    /* Decision 'D9': '<S57>:1:56' */
                                    /* Condition '#2': '<S57>:1:20' */
                                    /* Condition '#6': '<S57>:1:38' */
                                    /*  Status is Valve Close */
                                    /* Action '3': '<S57>:1:92' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Deenergize;
                                }
                                else if ((((tmp_3 && rtb_AND_hb) && rtb_Gain_p) &&
                                          rtb_Switch3_hs) && tmp_4)
                                {
                                    /* Condition '#1': '<S57>:1:15' */
                                    /* Decision 'D10': '<S57>:1:58' */
                                    /* Condition '#5': '<S57>:1:34' */
                                    /*  Status is Valve Close */
                                    /* Action '3': '<S57>:1:92' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Deenergize;
                                }
                                else if (((tmp_8 && c) && tmp_2) &&
                                         rtb_UnitDelay_b0)
                                {
                                    /* Condition '#1': '<S57>:1:15' */
                                    /* Decision 'D11': '<S57>:1:60' */
                                    /* Condition '#6': '<S57>:1:38' */
                                    /*  Status is Valve Open */
                                    /* Action '2': '<S57>:1:86' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Energize;
                                }
                                else if ((((tmp_b && rtb_AND_hb) && rtb_Gain_p) &&
                                          rtb_Switch3_hs) && tmp_4)
                                {
                                    /* Decision 'D12': '<S57>:1:62' */
                                    /* Condition '#2': '<S57>:1:20' */
                                    /* Condition '#5': '<S57>:1:34' */
                                    /*  Status is Valve Close */
                                    /* Action '3': '<S57>:1:92' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Deenergize;
                                }
                                else if (((tmp_9 && c) && tmp_2) &&
                                         rtb_UnitDelay_b0)
                                {
                                    /* Decision 'D13': '<S57>:1:64' */
                                    /* Condition '#2': '<S57>:1:20' */
                                    /* Condition '#6': '<S57>:1:38' */
                                    /*  Status is Valve Open */
                                    /* Action '2': '<S57>:1:86' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Energize;
                                }
                                else if (tmp_5 && tmp_4)
                                {
                                    /* Condition '#1': '<S57>:1:15' */
                                    /* Decision 'D14': '<S57>:1:66' */
                                    /*  Status Cannot be determined */
                                    /* Action '4': '<S57>:1:98' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Faulty;
                                }
                                else if (tmp_7 && tmp_4)
                                {
                                    /* Decision 'D15': '<S57>:1:68' */
                                    /* Condition '#2': '<S57>:1:20' */
                                    /*  Status Cannot be determined */
                                    /* Action '4': '<S57>:1:98' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Faulty;
                                }
                                else if ((!tmp_6) || (!rtb_UnitDelay_b0))
                                {
                                    /*  Default */
                                    /*  Status Cannot be determined */
                                    /* Action '4': '<S57>:1:98' */
                                    rtb_Switch_md = CeRCVR_e_Vlv_Faulty;
                                }
                                else
                                {
                                    /* Decision 'D16': '<S57>:1:70' */
                                    /* Condition '#5': '<S57>:1:34' */
                                    /* Condition '#6': '<S57>:1:38' */
                                    /*  Status is equal to Cmd */
                                    /* Action '1': '<S57>:1:80' */
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                /* Decision 'D3': '<S57>:1:44' */
                /* Condition '#6': '<S57>:1:38' */
                /*  Status is equal to Cmd */
                /* Action '1': '<S57>:1:80' */
            }
        }
    }
    else
    {
        /* Decision 'D1': '<S57>:1:40' */
        /* Condition '#5': '<S57>:1:34' */
        /*  Status is equal to Cmd */
        /* Action '1': '<S57>:1:80' */
    }

    /* RelationalOperator: '<S15>/Comparison3' incorporates:
     *  Constant: '<S104>/Constant'
     */
    VeRCVR_b_EXV_CalIPG = (((uint32)
                            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
                           CeTAIR_e_EXV_Calibration_Taking_Place);

    /* Sum: '<S110>/Sum2' incorporates:
     *  Sum: '<S309>/Sum2'
     *  Switch: '<S339>/Switch1'
     */
    rtb_Sum1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g -
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m;

    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S269>/Constant'
     *  Constant: '<S272>/Calib'
     *  Constant: '<S273>/Calib'
     *  Logic: '<S110>/Logical1'
     *  Logic: '<S110>/Logical3'
     *  RelationalOperator: '<S110>/Comparison4'
     *  Switch: '<S110>/Switch'
     *  Switch: '<S270>/Switch2'
     */
    if (((uint32)VeRCVR_e_RefShtoffVlv_State_AD) == CeTHMR_e_ChillerOnly)
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S271>/Calib'
         */
        rtb_Switch1 = KeRCVR_T_EXV_SH_BatOnly;
    }
    else if (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ivt) ||
              (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cc)) ||
             (KeRCVR_b_EXV_SH_Table_Ovrd))
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S21>/Calib'
         *  Switch: '<S270>/Switch2'
         */
        rtb_Switch1 = KaRCVR_T_EXV_SHTar[0];
    }
    else
    {
        if (KeRCVR_b_EXV_SHTbl_PosOnly_EvapErr)
        {
            /* Switch: '<S275>/Switch1' incorporates:
             *  Constant: '<S275>/ConstantValue1'
             *  Constant: '<S275>/ConstantValue2'
             *  RelationalOperator: '<S275>/Comparison1'
             *  Sum: '<S110>/Sum2'
             *  Switch: '<S110>/Switch'
             *  Switch: '<S270>/Switch2'
             */
            if (rtb_Sum1 >= 0.0F)
            {
                rtb_Sum2_ik = rtb_Sum1;
            }
            else
            {
                rtb_Sum2_ik = 0.0F;
            }

            /* End of Switch: '<S275>/Switch1' */
        }
        else
        {
            /* Switch: '<S110>/Switch' incorporates:
             *  Sum: '<S110>/Sum2'
             *  Switch: '<S270>/Switch2'
             */
            rtb_Sum2_ik = rtb_Sum1;
        }

        /* Switch: '<S270>/Switch1' incorporates:
         *  Lookup_n-D: '<S274>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Switch: '<S270>/Switch2'
         */
        rtb_Switch1 = look2_iflf_binlca_16a
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ls, rtb_Sum2_ik, ((
               const float32 *)&(KxRCVR_T_EXV_SuperHeat[0])), ((const float32 *)
              &(KyRCVR_T_EXV_SuperHeat[0])), ((const float32 *)
              &(KtRCVR_T_EXV_SuperHeat[0])), RCVR_ac_ConstP.pooled6, 10U);
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Logic: '<S109>/Logical1' incorporates:
     *  Constant: '<S260>/Constant'
     *  Constant: '<S261>/Constant'
     *  Constant: '<S262>/Constant'
     *  RelationalOperator: '<S109>/Comparison2'
     *  RelationalOperator: '<S109>/Comparison4'
     *  RelationalOperator: '<S109>/Comparison5'
     */
    VeRCVR_b_EXV_ClngRqst = (((((uint32)VeRCVR_e_RefShtoffVlv_State_AD) ==
        CeTHMR_e_ChillerNFront) || (((uint32)VeRCVR_e_RefShtoffVlv_State_AD) ==
        CeTHMR_e_ChillerOnly)) || (((uint32)VeRCVR_e_RefShtoffVlv_State_AD) ==
        CeTHMR_e_AllOpen));

    /* Logic: '<S109>/Logical2' incorporates:
     *  Constant: '<S264>/Constant'
     *  Constant: '<S265>/Constant'
     *  Constant: '<S268>/Constant'
     *  Logic: '<S109>/Logical5'
     *  RelationalOperator: '<S109>/Comparison1'
     *  RelationalOperator: '<S109>/Comparison3'
     *  RelationalOperator: '<S109>/Comparison6'
     */
    VeRCVR_b_EXV_ClsdLpDeItaEvap = ((((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) == CeTHMR_e_HeatPump)
        && (((((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) ==
              CeTHMR_e_Cab_Cooling) || (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) ==
        CeTHMR_e_Cab_Cooling_n_Heating)) ||
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lq)));

    /* Logic: '<S109>/Logical7' incorporates:
     *  Constant: '<S263>/Constant'
     *  Constant: '<S266>/Constant'
     *  Constant: '<S267>/Constant'
     *  Logic: '<S109>/Logical8'
     *  RelationalOperator: '<S109>/Comparison10'
     *  RelationalOperator: '<S109>/Comparison7'
     *  RelationalOperator: '<S109>/Comparison8'
     *  RelationalOperator: '<S109>/Comparison9'
     */
    VeRCVR_b_EXV_ClsdLpDeIcing = (((((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) != CeTHMR_e_HeatPump)
        && (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i1)) && ((((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_hyh) ==
        CeTHMR_e_LTCLActvWasteHeatRcvry) || (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mh) ==
        CeTHMR_e_BTLActvWasteHeatRcvry)));

    /* RelationalOperator: '<S107>/Comparison1' incorporates:
     *  Constant: '<S209>/Constant'
     */
    VeRCVR_b_EXV_VhclOff = (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) ==
                            CePMTR_e_DISBL_All_Thrml);

    /* Logic: '<S26>/Logical3' incorporates:
     *  Constant: '<S1168>/Calib'
     *  Logic: '<S26>/Logical5'
     */
    VeRCVR_b_EXV_Snsr_Flt =
        (((((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_af) ||
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n0)) ||
           (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dc)) ||
          (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_m0p)) &&
         (KeRCVR_b_EXV_Snsr_Flt_Dial));

    /* Logic: '<S107>/Logical6' incorporates:
     *  Constant: '<S225>/Constant1'
     *  Constant: '<S225>/Constant2'
     *  Constant: '<S231>/Calib'
     *  DataStoreRead: '<S225>/StatusByte_LostCommACRefrigExpVlvActA'
     *  Logic: '<S225>/LogicalOperator'
     *  RelationalOperator: '<S225>/RelationalOperator1'
     *  RelationalOperator: '<S225>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S225>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S225>/BitwiseOperator2'
     */
    VeRCVR_b_ACRefrigExpVlvActA_LOC = ((((((sint32)
        RCVR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA) & 1) > 0) &&
        ((((uint32)RCVR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA) & 64U) ==
         0U)) && (KeRCVR_b_ACRefrigExpVlvActA_LOC));

    /* Outputs for Atomic SubSystem: '<S238>/EdgeBi' */
    /* RelationalOperator: '<S256>/NotEqual' incorporates:
     *  UnitDelay: '<S256>/UnitDelay'
     */
    rtb_AND_k45 = (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j0 !=
                   RCVR_ac_DW.UnitDelay_DSTATE_p4);

    /* Update for UnitDelay: '<S256>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_p4 =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j0;

    /* End of Outputs for SubSystem: '<S238>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S238>/CountDownResetEnabled' */
    /* Switch: '<S255>/Switch1' incorporates:
     *  Constant: '<S255>/ConstantValue'
     *  Constant: '<S258>/Calib'
     *  Logic: '<S238>/Logical2'
     *  Logic: '<S255>/AND'
     *  RelationalOperator: '<S255>/GreaterThan'
     *  Switch: '<S255>/Switch2'
     *  UnitDelay: '<S255>/UnitDelay'
     */
    if (rtb_AND_k45)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_fw = KeRCVR_Cnt_EXVPresSnsr_RA;
    }
    else
    {
        if ((!RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j0) && (((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_fw) > 0))
        {
            /* UnitDelay: '<S255>/UnitDelay' incorporates:
             *  Constant: '<S255>/ConstantValue1'
             *  Sum: '<S255>/Subtraction'
             *  Switch: '<S255>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_fw = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_fw) - 1));
        }
    }

    /* End of Switch: '<S255>/Switch1' */

    /* Logic: '<S238>/Logical7' incorporates:
     *  Constant: '<S255>/ConstantValue2'
     *  Constant: '<S257>/Constant'
     *  RelationalOperator: '<S238>/Comparison1'
     *  RelationalOperator: '<S255>/GreaterThan1'
     *  UnitDelay: '<S255>/UnitDelay'
     */
    rtb_AND_k45 = ((((sint32)RCVR_ac_DW.UnitDelay_DSTATE_fw) > 0) && (((uint32)
                     VeRCVR_e_RefShtoffVlv_State_AD) == CeTHMR_e_ChillerOnly));

    /* End of Outputs for SubSystem: '<S238>/CountDownResetEnabled' */

    /* Logic: '<S201>/Logical15' incorporates:
     *  Constant: '<S240>/Calib'
     *  Constant: '<S241>/Constant1'
     *  Constant: '<S241>/Constant2'
     *  Constant: '<S242>/Constant1'
     *  Constant: '<S242>/Constant2'
     *  Constant: '<S243>/Constant1'
     *  Constant: '<S243>/Constant2'
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S244>/Constant2'
     *  Constant: '<S245>/Constant1'
     *  Constant: '<S245>/Constant2'
     *  DataStoreRead: '<S241>/StatusByte_AC_RefrigTempSnsrBPerf'
     *  DataStoreRead: '<S242>/StatusByte_AC_RefrigTempSnsrAPerf'
     *  DataStoreRead: '<S243>/StatusByte_AC_RefrigTempSnsrBCkt'
     *  DataStoreRead: '<S244>/StatusByte_AC_RefrigTempSnsrACkt'
     *  DataStoreRead: '<S245>/StatusByte_LIN3_BusOff'
     *  Logic: '<S201>/Logical14'
     *  Logic: '<S241>/Logical Operator'
     *  Logic: '<S242>/Logical Operator'
     *  Logic: '<S243>/Logical Operator'
     *  Logic: '<S244>/Logical Operator'
     *  Logic: '<S245>/Logical Operator'
     *  RelationalOperator: '<S241>/Relational Operator1'
     *  RelationalOperator: '<S241>/Relational Operator2'
     *  RelationalOperator: '<S242>/Relational Operator1'
     *  RelationalOperator: '<S242>/Relational Operator2'
     *  RelationalOperator: '<S243>/Relational Operator1'
     *  RelationalOperator: '<S243>/Relational Operator2'
     *  RelationalOperator: '<S244>/Relational Operator1'
     *  RelationalOperator: '<S244>/Relational Operator2'
     *  RelationalOperator: '<S245>/Relational Operator1'
     *  RelationalOperator: '<S245>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S241>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S241>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S242>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S242>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S245>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S245>/Bitwise Operator2'
     */
    VeRCVR_b_CEXV_HeatPmp_RA_FSRqst = ((KeRCVR_b_CEXV_HeatPmp_RA_Enbl) &&
        (((((((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrBPerf) & 1U) !=
              0U) && ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrBPerf) &
                       64U) == 0U)) || (((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrAPerf) & 1U) != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrAPerf) & 64U) == 0U))) ||
           (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrBCkt) & 1U) != 0U)
            && ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrBCkt) & 64U) ==
                0U))) || (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrACkt)
                            & 1U) != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrACkt) & 64U) == 0U))) ||
         (((((uint32)RCVR_ac_DW.StatusByte_LIN3_BusOff) & 1U) != 0U) &&
          ((((uint32)RCVR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U))));

    /* Logic: '<S107>/Logical19' */
    VeRCVR_b_EXV_FSRqst = (((((((VeRCVR_b_EXV_VhclOff) ||
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gt)) ||
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mz)) ||
        (VeRCVR_b_EXV_Snsr_Flt)) || (VeRCVR_b_ACRefrigExpVlvActA_LOC)) ||
                            rtb_AND_k45) || (VeRCVR_b_CEXV_HeatPmp_RA_FSRqst));

    /* Logic: '<S109>/Logical3' incorporates:
     *  Logic: '<S109>/Logical4'
     *  Logic: '<S109>/Logical6'
     */
    VeRCVR_b_EXV_ClsdLpOn = ((((VeRCVR_b_EXV_ClngRqst) ||
        (VeRCVR_b_EXV_ClsdLpDeItaEvap)) || (VeRCVR_b_EXV_ClsdLpDeIcing)) &&
        (!VeRCVR_b_EXV_FSRqst));

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S105>/Calib'
     */
    if (KeRCVR_b_EXV_CLOnly)
    {
        /* Switch: '<S15>/Switch1' */
        if (VeRCVR_b_EXV_ClsdLpOn)
        {
            /* Switch: '<S15>/Switch' */
            VeRCVR_T_EXV_SHTar = rtb_Switch1;
        }
        else
        {
            /* Switch: '<S15>/Switch' incorporates:
             *  Constant: '<S21>/Calib'
             */
            VeRCVR_T_EXV_SHTar = KaRCVR_T_EXV_SHTar[1];
        }

        /* End of Switch: '<S15>/Switch1' */
    }
    else
    {
        /* Switch: '<S15>/Switch' */
        VeRCVR_T_EXV_SHTar = rtb_Switch1;
    }

    /* End of Switch: '<S15>/Switch' */

    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S22>/Calib'
     *  Switch: '<S10>/Switch1'
     */
    if (KeRCVR_b_HWIO_PokesSwitch)
    {
        /* Switch: '<S10>/Switch2' */
        rtb_Switch2_dd = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ap;

        /* Lookup_n-D: '<S1184>/Vector' */
        rtb_Vector_n = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p;
    }
    else
    {
        /* Switch: '<S10>/Switch2' */
        rtb_Switch2_dd = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bu;

        /* Lookup_n-D: '<S1184>/Vector' */
        rtb_Vector_n = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d;
    }

    /* End of Switch: '<S10>/Switch2' */

    /* Sum: '<S15>/Sum1' incorporates:
     *  Lookup_n-D: '<S106>/Vector'
     *  Lookup_n-D: '<S1184>/Vector'
     */
    VeRCVR_T_EXV_SHActual = rtb_Switch2_dd - look1_iflf_binlca_16a(rtb_Vector_n,
        ((const float32 *)&(KxRCVR_T_RefPT_Table[0])), ((const float32 *)
        &(KtRCVR_T_RefPT_Table[0])), 29U);

    /* Sum: '<S323>/Sum2' incorporates:
     *  Lookup_n-D: '<S387>/Vector'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    rtb_Sum2_et = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hw -
        look1_iflf_binlca_16a(RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a,
        ((const float32 *)&(KxRCVR_T_RefPT_OHX_Out_Table[0])), ((const float32 *)
        &(KtRCVR_T_RefPT_OHX_Out_Table[0])), 29U);

    /* Outputs for Enabled SubSystem: '<S15>/Controller' incorporates:
     *  EnablePort: '<S101>/Enable'
     */
    /* Logic: '<S15>/Logical15' */
    if (!VeRCVR_b_EXV_CalIPG)
    {
        /* RelationalOperator: '<S101>/Comparison3' incorporates:
         *  Constant: '<S118>/Calib'
         *  UnitDelay: '<S101>/UnitDelay'
         */
        rtb_Switch1_bb = (RCVR_ac_DW.UnitDelay_DSTATE_cq <=
                          KeRCVR_Pct_EXV_PctB4_SlowRamp);

        /* Outputs for Atomic SubSystem: '<S101>/EdgeRising' */
        /* UnitDelay: '<S168>/UnitDelay' incorporates:
         *  UnitDelay: '<S111>/UnitDelay'
         */
        rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_ht;

        /* Update for UnitDelay: '<S111>/UnitDelay' */
        RCVR_ac_DW.UnitDelay_DSTATE_ht = VeRCVR_b_EXV_ClsdLpOn;

        /* End of Outputs for SubSystem: '<S101>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S101>/EdgeRising2' */
        /* Logic: '<S112>/AND' incorporates:
         *  Logic: '<S112>/OR1'
         *  UnitDelay: '<S112>/UnitDelay'
         */
        rtb_AND_ijg = (rtb_Switch1_bb && (!RCVR_ac_DW.UnitDelay_DSTATE_na));

        /* Update for UnitDelay: '<S112>/UnitDelay' */
        RCVR_ac_DW.UnitDelay_DSTATE_na = rtb_Switch1_bb;

        /* End of Outputs for SubSystem: '<S101>/EdgeRising2' */

        /* Outputs for Atomic SubSystem: '<S101>/SignalLatchOnWithReset' */
        /* Outputs for Atomic SubSystem: '<S101>/EdgeRising' */
        /* Logic: '<S127>/OR1' incorporates:
         *  Constant: '<S118>/Calib'
         *  Logic: '<S101>/Logical3'
         *  Logic: '<S111>/AND'
         *  Logic: '<S111>/OR1'
         *  Logic: '<S127>/NOT'
         *  Logic: '<S127>/OR'
         *  RelationalOperator: '<S101>/Comparison1'
         *  UnitDelay: '<S101>/UnitDelay'
         *  UnitDelay: '<S127>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_pkl = ((((VeRCVR_b_EXV_ClsdLpOn) &&
            (!rtb_Gain_p)) || rtb_AND_ijg) || ((RCVR_ac_DW.UnitDelay_DSTATE_cq <=
            KeRCVR_Pct_EXV_PctB4_SlowRamp) && (RCVR_ac_DW.UnitDelay_DSTATE_pkl)));

        /* End of Outputs for SubSystem: '<S101>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S101>/SignalLatchOnWithReset' */

        /* Switch: '<S101>/Switch2' incorporates:
         *  Constant: '<S119>/Calib'
         *  Logic: '<S101>/Logical1'
         *  UnitDelay: '<S127>/UnitDelay'
         */
        if (((VeRCVR_b_EXV_FSRqst) || (RCVR_ac_DW.UnitDelay_DSTATE_pkl)) ||
                (KeRCVR_b_EXV_FstRmpEnbl))
        {
            /* Switch: '<S101>/Switch2' incorporates:
             *  Constant: '<S121>/Calib'
             */
            rtb_Switch2_ie = KeRCVR_dPct_EXV_FS_RampUpRate;
        }
        else
        {
            /* Switch: '<S101>/Switch2' incorporates:
             *  Constant: '<S123>/Calib'
             */
            rtb_Switch2_ie = KeRCVR_dPct_EXV_RampUpRate;
        }

        /* End of Switch: '<S101>/Switch2' */

        /* Switch: '<S101>/Switch3' */
        if (VeRCVR_b_EXV_FSRqst)
        {
            /* Switch: '<S101>/Switch3' incorporates:
             *  Constant: '<S120>/Calib'
             */
            rtb_Switch3_i = KeRCVR_dPct_EXV_FS_RampDownRate;
        }
        else
        {
            /* Switch: '<S101>/Switch3' incorporates:
             *  Constant: '<S122>/Calib'
             */
            rtb_Switch3_i = KeRCVR_dPct_EXV_RampDownRate;
        }

        /* End of Switch: '<S101>/Switch3' */

        /* Switch: '<S166>/Switch' incorporates:
         *  Constant: '<S161>/Calib'
         *  Constant: '<S162>/Calib'
         */
        if (VeRCVR_b_EXV_ClsdLpDeIcing)
        {
            rtb_Sum2_ik = KeRCVR_T_CEXV_SC_Deice_Tgt;
        }
        else
        {
            rtb_Sum2_ik = KeRCVR_T_CEXV_SC_Tgt;
        }

        /* End of Switch: '<S166>/Switch' */

        /* Sum: '<S125>/Sum1' */
        rtb_Sum1_hg = rtb_Sum2_ik - rtb_Sum2_et;

        /* Outputs for Atomic SubSystem: '<S125>/EdgeRising' */
        /* UnitDelay: '<S168>/UnitDelay' incorporates:
         *  UnitDelay: '<S155>/Unit Delay'
         */
        rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_o4;

        /* Update for UnitDelay: '<S155>/Unit Delay' */
        RCVR_ac_DW.UnitDelay_DSTATE_o4 = VeRCVR_b_EXV_ClsdLpOn;

        /* Outputs for Atomic SubSystem: '<S125>/PIControl1' */
        /* Switch: '<S165>/Switch' incorporates:
         *  Constant: '<S163>/Calib'
         *  Constant: '<S164>/Calib'
         *  Logic: '<S125>/Logical1'
         *  Logic: '<S155>/AND'
         *  Logic: '<S155>/OR1'
         *  Switch: '<S125>/Switch1'
         *  Switch: '<S165>/Switch2'
         *  UnitDelay: '<S125>/Unit Delay'
         */
        if ((!KeRCVR_b_CEXV_CLOnly_SC) && ((VeRCVR_b_EXV_ClsdLpOn) &&
                (!rtb_Gain_p)))
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Constant: '<S156>/Calib'
             *  Switch: '<S165>/Switch'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Cnt_CEXV_PID_IntIV_SC;
        }
        else
        {
            if ((KeRCVR_b_CEXV_SC_HoldI_Enbl) && (RCVR_ac_DW.UnitDelay_DSTATE_fm))
            {
                /* Switch: '<S165>/Switch2' incorporates:
                 *  Constant: '<S165>/Constant Value'
                 */
                rtb_Sum2_ik = 0.0F;
            }
            else
            {
                /* Switch: '<S165>/Switch2' incorporates:
                 *  Constant: '<S125>/Constant Value'
                 *  Constant: '<S159>/Calib'
                 *  Product: '<S165>/Multiplication1'
                 */
                rtb_Sum2_ik = (rtb_Sum1_hg * KeRCVR_K_CEXV_PID_Ki_SC) * 0.025F;
            }

            /* Switch: '<S143>/Switch' incorporates:
             *  Sum: '<S165>/Sum//Sub'
             *  Switch: '<S165>/Switch'
             *  UnitDelay: '<S165>/Unit Delay'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = rtb_Sum2_ik +
                RCVR_ac_DW.UnitDelay_DSTATE_a;
        }

        /* End of Switch: '<S165>/Switch' */
        /* End of Outputs for SubSystem: '<S125>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S165>/integral_term' */
        /* Switch: '<S167>/Switch1' incorporates:
         *  Constant: '<S157>/Calib'
         *  RelationalOperator: '<S167>/Relational Operator'
         */
        if (KeRCVR_Cnt_CEXV_PID_IntMax_SC < VeRCVR_Pct_EXV_PosRq_B4D)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S128>/Switch1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Cnt_CEXV_PID_IntMax_SC;
        }

        /* End of Switch: '<S167>/Switch1' */

        /* Switch: '<S167>/Switch' incorporates:
         *  Constant: '<S158>/Calib'
         *  RelationalOperator: '<S167>/Relational Operator1'
         *  UnitDelay: '<S165>/Unit Delay'
         */
        if (VeRCVR_Pct_EXV_PosRq_B4D > KeRCVR_Cnt_CEXV_PID_IntMin_SC)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_a = VeRCVR_Pct_EXV_PosRq_B4D;
        }
        else
        {
            RCVR_ac_DW.UnitDelay_DSTATE_a = KeRCVR_Cnt_CEXV_PID_IntMin_SC;
        }

        /* End of Switch: '<S167>/Switch' */
        /* End of Outputs for SubSystem: '<S165>/integral_term' */

        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S160>/Calib'
         *  Constant: '<S163>/Calib'
         *  Product: '<S165>/proportional_term'
         *  Sum: '<S165>/Sum//Sub1'
         *  Switch: '<S125>/Switch5'
         *  UnitDelay: '<S165>/Unit Delay'
         *  UnitDelay: '<S165>/Unit Delay1'
         */
        if ((KeRCVR_b_CEXV_CLOnly_SC) || (VeRCVR_b_EXV_ClsdLpOn))
        {
            RCVR_ac_DW.UnitDelay1_DSTATE_d = (rtb_Sum1_hg *
                KeRCVR_K_CEXV_PID_Kp_SC) + RCVR_ac_DW.UnitDelay_DSTATE_a;
        }

        /* End of Switch: '<S165>/Switch1' */
        /* End of Outputs for SubSystem: '<S125>/PIControl1' */

        /* Logic: '<S101>/Logical Operator' incorporates:
         *  Constant: '<S113>/Constant'
         *  Constant: '<S114>/Constant'
         *  Constant: '<S115>/Constant'
         *  Logic: '<S101>/Logical Operator1'
         *  Logic: '<S101>/Logical Operator2'
         *  Logic: '<S101>/Logical Operator3'
         *  RelationalOperator: '<S101>/Relational Operator'
         *  RelationalOperator: '<S101>/Relational Operator1'
         *  RelationalOperator: '<S101>/Relational Operator2'
         */
        rtb_Switch1_bb = ((CeTHMR_e_Cab_Cooling != ((uint32)
                            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1))
                          && (((uint32)
                               RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1)
                              != CeTHMR_e_Cab_Cooling_n_Heating));
        rtb_Switch1_bb = (((VeRCVR_b_EXV_ClsdLpDeIcing) && rtb_Switch1_bb) ||
                          ((((uint32)
                             RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mh)
                            == CeTHMR_e_ActiveCooling) && rtb_Switch1_bb));

        /* Sum: '<S124>/Sum1' */
        rtb_Sum1_hg = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m -
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g;

        /* Outputs for Atomic SubSystem: '<S124>/EdgeRising' */
        /* UnitDelay: '<S168>/UnitDelay' incorporates:
         *  UnitDelay: '<S145>/UnitDelay'
         */
        rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_a0;

        /* Update for UnitDelay: '<S145>/UnitDelay' */
        RCVR_ac_DW.UnitDelay_DSTATE_a0 = VeRCVR_b_EXV_ClsdLpOn;

        /* Outputs for Atomic SubSystem: '<S124>/PIControl1' */
        /* Switch: '<S153>/Switch' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S152>/Calib'
         *  Logic: '<S124>/Logical1'
         *  Logic: '<S145>/AND'
         *  Logic: '<S145>/OR1'
         *  Switch: '<S124>/Switch1'
         *  Switch: '<S153>/Switch2'
         *  UnitDelay: '<S124>/UnitDelay'
         */
        if ((!KeRCVR_b_EXV_CLOnly_evap) && ((VeRCVR_b_EXV_ClsdLpOn) &&
                (!rtb_Gain_p)))
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Constant: '<S146>/Calib'
             *  Switch: '<S153>/Switch'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Cnt_EXV_PID_IntIV_evap;
        }
        else
        {
            if ((KeRCVR_b_CEXV_Evap_HoldI_Enbl) &&
                    (RCVR_ac_DW.UnitDelay_DSTATE_nnb))
            {
                /* Switch: '<S153>/Switch2' incorporates:
                 *  Constant: '<S153>/ConstantValue'
                 */
                rtb_Sum2_ik = 0.0F;
            }
            else
            {
                /* Switch: '<S153>/Switch2' incorporates:
                 *  Constant: '<S124>/ConstantValue'
                 *  Constant: '<S149>/Calib'
                 *  Product: '<S153>/Multiplication1'
                 */
                rtb_Sum2_ik = (rtb_Sum1_hg * KeRCVR_K_EXV_PID_Ki_evap) * 0.025F;
            }

            /* Switch: '<S143>/Switch' incorporates:
             *  Sum: '<S153>/Sum_Sub'
             *  Switch: '<S153>/Switch'
             *  UnitDelay: '<S153>/UnitDelay'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = rtb_Sum2_ik +
                RCVR_ac_DW.UnitDelay_DSTATE_ae;
        }

        /* End of Switch: '<S153>/Switch' */
        /* End of Outputs for SubSystem: '<S124>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S153>/integral_term' */
        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S147>/Calib'
         *  RelationalOperator: '<S154>/RelationalOperator'
         */
        if (KeRCVR_Cnt_EXV_PID_IntMax_evap < VeRCVR_Pct_EXV_PosRq_B4D)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S128>/Switch1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Cnt_EXV_PID_IntMax_evap;
        }

        /* End of Switch: '<S154>/Switch1' */

        /* Switch: '<S154>/Switch' incorporates:
         *  Constant: '<S148>/Calib'
         *  RelationalOperator: '<S154>/RelationalOperator1'
         *  UnitDelay: '<S153>/UnitDelay'
         */
        if (VeRCVR_Pct_EXV_PosRq_B4D > KeRCVR_Cnt_EXV_PID_IntMin_evap)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_ae = VeRCVR_Pct_EXV_PosRq_B4D;
        }
        else
        {
            RCVR_ac_DW.UnitDelay_DSTATE_ae = KeRCVR_Cnt_EXV_PID_IntMin_evap;
        }

        /* End of Switch: '<S154>/Switch' */
        /* End of Outputs for SubSystem: '<S153>/integral_term' */

        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S150>/Calib'
         *  Constant: '<S152>/Calib'
         *  Product: '<S153>/proportional_term'
         *  Sum: '<S153>/Sum_Sub1'
         *  Switch: '<S124>/Switch5'
         *  UnitDelay: '<S153>/UnitDelay'
         *  UnitDelay: '<S153>/UnitDelay1'
         */
        if ((KeRCVR_b_EXV_CLOnly_evap) || (VeRCVR_b_EXV_ClsdLpOn))
        {
            RCVR_ac_DW.UnitDelay1_DSTATE_o = (rtb_Sum1_hg *
                KeRCVR_K_EXV_PID_Kp_evap) + RCVR_ac_DW.UnitDelay_DSTATE_ae;
        }

        /* End of Switch: '<S153>/Switch1' */
        /* End of Outputs for SubSystem: '<S124>/PIControl1' */

        /* Sum: '<S126>/Sum1' */
        rtb_Sum1_hg = VeRCVR_T_EXV_SHTar - VeRCVR_T_EXV_SHActual;

        /* Outputs for Atomic SubSystem: '<S126>/EdgeRising' */
        /* UnitDelay: '<S168>/UnitDelay' */
        rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_bk;

        /* Update for UnitDelay: '<S168>/UnitDelay' */
        RCVR_ac_DW.UnitDelay_DSTATE_bk = VeRCVR_b_EXV_ClsdLpOn;

        /* Outputs for Atomic SubSystem: '<S126>/PIControl1' */
        /* Switch: '<S176>/Switch' incorporates:
         *  Constant: '<S174>/Calib'
         *  Constant: '<S175>/Calib'
         *  Logic: '<S126>/Logical1'
         *  Logic: '<S168>/AND'
         *  Logic: '<S168>/OR1'
         *  Switch: '<S126>/Switch1'
         *  Switch: '<S176>/Switch2'
         *  UnitDelay: '<S126>/UnitDelay'
         */
        if ((!KeRCVR_b_EXV_CLOnly) && ((VeRCVR_b_EXV_ClsdLpOn) && (!rtb_Gain_p)))
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Constant: '<S169>/Calib'
             *  Switch: '<S176>/Switch'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Cnt_EXV_PID_IntIV;
        }
        else
        {
            if ((KeRCVR_b_CEXV_SH_HoldI_Enbl) && (RCVR_ac_DW.UnitDelay_DSTATE_mg))
            {
                /* Switch: '<S176>/Switch2' incorporates:
                 *  Constant: '<S176>/ConstantValue'
                 */
                rtb_Sum2_ik = 0.0F;
            }
            else
            {
                /* Switch: '<S176>/Switch2' incorporates:
                 *  Constant: '<S126>/ConstantValue'
                 *  Constant: '<S172>/Calib'
                 *  Product: '<S176>/Multiplication1'
                 */
                rtb_Sum2_ik = (rtb_Sum1_hg * KeRCVR_K_EXV_PID_Ki) * 0.025F;
            }

            /* Switch: '<S143>/Switch' incorporates:
             *  Sum: '<S176>/Sum_Sub'
             *  Switch: '<S176>/Switch'
             *  UnitDelay: '<S176>/UnitDelay'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = rtb_Sum2_ik +
                RCVR_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S176>/Switch' */
        /* End of Outputs for SubSystem: '<S126>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S176>/integral_term' */
        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S170>/Calib'
         *  RelationalOperator: '<S177>/RelationalOperator'
         */
        if (KeRCVR_Cnt_EXV_PID_IntMax < VeRCVR_Pct_EXV_PosRq_B4D)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S128>/Switch1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Cnt_EXV_PID_IntMax;
        }

        /* End of Switch: '<S177>/Switch1' */

        /* Switch: '<S177>/Switch' incorporates:
         *  Constant: '<S171>/Calib'
         *  RelationalOperator: '<S177>/RelationalOperator1'
         *  UnitDelay: '<S176>/UnitDelay'
         */
        if (VeRCVR_Pct_EXV_PosRq_B4D > KeRCVR_Cnt_EXV_PID_IntMin)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_g = VeRCVR_Pct_EXV_PosRq_B4D;
        }
        else
        {
            RCVR_ac_DW.UnitDelay_DSTATE_g = KeRCVR_Cnt_EXV_PID_IntMin;
        }

        /* End of Switch: '<S177>/Switch' */
        /* End of Outputs for SubSystem: '<S176>/integral_term' */

        /* Switch: '<S176>/Switch1' incorporates:
         *  Constant: '<S173>/Calib'
         *  Constant: '<S175>/Calib'
         *  Product: '<S176>/proportional_term'
         *  Sum: '<S176>/Sum_Sub1'
         *  Switch: '<S126>/Switch5'
         *  UnitDelay: '<S176>/UnitDelay'
         *  UnitDelay: '<S176>/UnitDelay1'
         */
        if ((KeRCVR_b_EXV_CLOnly) || (VeRCVR_b_EXV_ClsdLpOn))
        {
            RCVR_ac_DW.UnitDelay1_DSTATE_pc = (rtb_Sum1_hg * KeRCVR_K_EXV_PID_Kp)
                + RCVR_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S176>/Switch1' */
        /* End of Outputs for SubSystem: '<S126>/PIControl1' */

        /* Switch: '<S117>/Switch1' incorporates:
         *  Switch: '<S117>/Switch2'
         */
        if (rtb_Switch1_bb)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S128>/Switch1'
             *  UnitDelay: '<S165>/Unit Delay1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = RCVR_ac_DW.UnitDelay1_DSTATE_d;
        }
        else if (VeRCVR_b_EXV_ClsdLpDeItaEvap)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S117>/Switch2'
             *  Switch: '<S128>/Switch1'
             *  UnitDelay: '<S153>/UnitDelay1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = RCVR_ac_DW.UnitDelay1_DSTATE_o;
        }
        else
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S117>/Switch2'
             *  Switch: '<S128>/Switch1'
             *  UnitDelay: '<S176>/UnitDelay1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = RCVR_ac_DW.UnitDelay1_DSTATE_pc;
        }

        /* End of Switch: '<S117>/Switch1' */

        /* Switch: '<S129>/Switch5' */
        if (VeRCVR_b_EXV_FSRqst)
        {
            /* Switch: '<S129>/Switch5' incorporates:
             *  Constant: '<S180>/Calib'
             */
            VeRCVR_Pct_EXV_CLOnly_CntrlSig = KeRCVR_Pct_EXV_FSPosn;
        }
        else
        {
            /* Switch: '<S129>/Switch5' */
            VeRCVR_Pct_EXV_CLOnly_CntrlSig = VeRCVR_Pct_EXV_PosRq_B4D;
        }

        /* End of Switch: '<S129>/Switch5' */

        /* Switch: '<S129>/Switch4' incorporates:
         *  Constant: '<S181>/Calib'
         *  Constant: '<S182>/Calib'
         *  Logic: '<S129>/Logical9'
         */
        if ((KeRCVR_b_EXV_CLOnly) || (KeRCVR_b_EXV_CLOnly_evap))
        {
            /* Switch: '<S129>/Switch4' */
            VeRCVR_Pct_EXV_CntrlSig = VeRCVR_Pct_EXV_CLOnly_CntrlSig;
        }
        else
        {
            /* Switch: '<S129>/Switch4' */
            VeRCVR_Pct_EXV_CntrlSig = VeRCVR_Pct_EXV_PosRq_B4D;
        }

        /* End of Switch: '<S129>/Switch4' */

        /* Switch: '<S184>/Switch1' incorporates:
         *  Constant: '<S189>/Constant'
         *  Constant: '<S190>/Constant'
         *  Constant: '<S191>/Constant'
         *  Constant: '<S192>/Constant'
         *  Constant: '<S193>/Constant'
         *  Constant: '<S194>/Constant'
         *  Constant: '<S195>/Constant'
         *  Constant: '<S196>/Constant'
         *  Constant: '<S197>/Constant'
         *  Constant: '<S198>/Constant'
         *  Logic: '<S183>/Logical1'
         *  Logic: '<S183>/Logical2'
         *  Logic: '<S183>/Logical3'
         *  Logic: '<S183>/Logical4'
         *  Logic: '<S183>/Logical5'
         *  Logic: '<S183>/Logical6'
         *  Logic: '<S183>/Logical7'
         *  Logic: '<S188>/Logical1'
         *  Logic: '<S188>/Logical2'
         *  Logic: '<S188>/Logical3'
         *  Logic: '<S188>/Logical4'
         *  Logic: '<S188>/Logical5'
         *  RelationalOperator: '<S183>/Comparison1'
         *  RelationalOperator: '<S183>/Comparison2'
         *  RelationalOperator: '<S183>/Comparison3'
         *  RelationalOperator: '<S183>/Comparison4'
         *  RelationalOperator: '<S183>/Comparison5'
         *  RelationalOperator: '<S188>/Comparison1'
         *  RelationalOperator: '<S188>/Comparison2'
         *  RelationalOperator: '<S188>/Comparison3'
         *  RelationalOperator: '<S188>/Comparison4'
         *  RelationalOperator: '<S188>/Comparison5'
         *  Switch: '<S184>/Switch2'
         */
        if (((((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                CeTHMR_e_HeatPump) && ((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) !=
                CeTHMR_e_Cab_Cooling) && (((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) !=
                CeTHMR_e_Cab_Cooling_n_Heating))) && ((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_hyh) ==
                CeTHMR_e_LTCLActvWasteHeatRcvry) || (((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mh) ==
                CeTHMR_e_BTLActvWasteHeatRcvry)))
        {
            /* Switch: '<S184>/Switch1' incorporates:
             *  Constant: '<S187>/Calib'
             */
            VeRCVR_Pct_EXV_CLnOL_OLCmd = KeRCVR_Pct_EXV_OpenedPosn;
        }
        else if (((((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                   CeTHMR_e_HeatPump) && ((((uint32)
                     RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) !=
                    CeTHMR_e_Cab_Cooling) && (((uint32)
                     RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) !=
                    CeTHMR_e_Cab_Cooling_n_Heating))) && ((((uint32)
                    RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_hyh) !=
                   CeTHMR_e_LTCLActvWasteHeatRcvry) && (((uint32)
                    RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mh) !=
                   CeTHMR_e_BTLActvWasteHeatRcvry)))
        {
            /* Switch: '<S184>/Switch2' incorporates:
             *  Constant: '<S185>/Calib'
             *  Switch: '<S184>/Switch1'
             */
            VeRCVR_Pct_EXV_CLnOL_OLCmd = KeRCVR_Pct_EXV_BypassedPosn;
        }
        else
        {
            /* Switch: '<S184>/Switch1' incorporates:
             *  Constant: '<S186>/Calib'
             *  Switch: '<S184>/Switch2'
             */
            VeRCVR_Pct_EXV_CLnOL_OLCmd = KeRCVR_Pct_EXV_ClosedPosn;
        }

        /* End of Switch: '<S184>/Switch1' */

        /* Switch: '<S101>/Switch10' incorporates:
         *  Switch: '<S101>/Switch1'
         */
        if (VeRCVR_b_EXV_ClsdLpOn)
        {
            /* Switch: '<S101>/Switch10' */
            rtb_Sum1_hg = VeRCVR_Pct_EXV_PosRq_B4D;
        }
        else if (VeRCVR_b_EXV_FSRqst)
        {
            /* Switch: '<S101>/Switch1' incorporates:
             *  Switch: '<S101>/Switch10'
             */
            rtb_Sum1_hg = VeRCVR_Pct_EXV_CntrlSig;
        }
        else
        {
            /* Switch: '<S101>/Switch10' incorporates:
             *  Switch: '<S101>/Switch1'
             */
            rtb_Sum1_hg = VeRCVR_Pct_EXV_CLnOL_OLCmd;
        }

        /* End of Switch: '<S101>/Switch10' */

        /* Outputs for Atomic SubSystem: '<S116>/GradientLimiter' */
        /* Switch: '<S143>/Switch' incorporates:
         *  Sum: '<S131>/Sum2'
         *  UnitDelay: '<S131>/UnitDelay'
         */
        VeRCVR_Pct_EXV_PosRq_B4D = rtb_Sum1_hg - RCVR_ac_DW.UnitDelay_DSTATE_gf;

        /* Outputs for Atomic SubSystem: '<S131>/Limiter' */
        /* Switch: '<S143>/Switch1' incorporates:
         *  RelationalOperator: '<S143>/RelationalOperator'
         */
        if (rtb_Switch2_ie < VeRCVR_Pct_EXV_PosRq_B4D)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S128>/Switch1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = rtb_Switch2_ie;
        }

        /* End of Switch: '<S143>/Switch1' */

        /* Switch: '<S143>/Switch' incorporates:
         *  RelationalOperator: '<S143>/RelationalOperator1'
         */
        if (VeRCVR_Pct_EXV_PosRq_B4D <= rtb_Switch3_i)
        {
            VeRCVR_Pct_EXV_PosRq_B4D = rtb_Switch3_i;
        }

        /* End of Outputs for SubSystem: '<S131>/Limiter' */

        /* Sum: '<S131>/Sum3' incorporates:
         *  UnitDelay: '<S131>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_gf += VeRCVR_Pct_EXV_PosRq_B4D;

        /* End of Outputs for SubSystem: '<S116>/GradientLimiter' */

        /* Switch: '<S116>/Switch7' incorporates:
         *  Constant: '<S139>/Calib'
         *  Constant: '<S140>/Calib'
         *  Switch: '<S116>/Switch6'
         */
        if (KeRCVR_b_EXV_Linear_StepToPct_Convert)
        {
            /* Switch: '<S116>/Switch6' incorporates:
             *  Constant: '<S140>/Calib'
             *  UnitDelay: '<S131>/UnitDelay'
             */
            if (KeRCVR_b_EXV_UseFrstGrad)
            {
                rtb_Sum2_ik = RCVR_ac_DW.UnitDelay_DSTATE_gf;
            }
            else
            {
                rtb_Sum2_ik = rtb_Sum1_hg;
            }

            /* Switch: '<S116>/Switch7' incorporates:
             *  Constant: '<S135>/Calib'
             *  Product: '<S116>/Product'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_cq = rtb_Sum2_ik *
                KeRCVR_Cf_EXV_Linear_StepToPct;
        }
        else
        {
            if (KeRCVR_b_EXV_UseFrstGrad)
            {
                /* Switch: '<S116>/Switch6' incorporates:
                 *  UnitDelay: '<S131>/UnitDelay'
                 */
                rtb_Sum2_ik = RCVR_ac_DW.UnitDelay_DSTATE_gf;
            }
            else
            {
                /* Switch: '<S116>/Switch6' */
                rtb_Sum2_ik = rtb_Sum1_hg;
            }

            /* Switch: '<S116>/Switch7' incorporates:
             *  Lookup_n-D: '<S141>/Vector'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_cq = look1_iflf_binlca_16a(rtb_Sum2_ik,
                ((const float32 *)&(KxRCVR_Pct_EXV_NonLin_StepToPct[0])), ((
                const float32 *)&(KtRCVR_Pct_EXV_NonLin_StepToPct[0])), 18U);
        }

        /* End of Switch: '<S116>/Switch7' */

        /* Switch: '<S116>/Switch1' */
        if (VeRCVR_b_EXV_ClsdLpOn)
        {
            rtb_Sum1_hg = RCVR_ac_DW.UnitDelay_DSTATE_cq;
        }

        /* End of Switch: '<S116>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S116>/GradientLimiter1' */
        /* Sum: '<S132>/Sum2' incorporates:
         *  UnitDelay: '<S132>/UnitDelay'
         */
        rtb_Sum2_ik = rtb_Sum1_hg - RCVR_ac_DW.UnitDelay_DSTATE_am;

        /* Outputs for Atomic SubSystem: '<S132>/Limiter' */
        /* Switch: '<S144>/Switch1' incorporates:
         *  RelationalOperator: '<S144>/RelationalOperator'
         */
        if (rtb_Switch2_ie < rtb_Sum2_ik)
        {
            /* Switch: '<S144>/Switch1' */
            rtb_Sum2_ik = rtb_Switch2_ie;
        }

        /* End of Switch: '<S144>/Switch1' */

        /* Switch: '<S144>/Switch' incorporates:
         *  RelationalOperator: '<S144>/RelationalOperator1'
         */
        if (rtb_Sum2_ik > rtb_Switch3_i)
        {
            rtb_Switch3_i = rtb_Sum2_ik;
        }

        /* End of Switch: '<S144>/Switch' */
        /* End of Outputs for SubSystem: '<S132>/Limiter' */

        /* Sum: '<S132>/Sum3' incorporates:
         *  UnitDelay: '<S132>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_am += rtb_Switch3_i;

        /* End of Outputs for SubSystem: '<S116>/GradientLimiter1' */

        /* Logic: '<S116>/Logical1' incorporates:
         *  Logic: '<S116>/Logical4'
         *  Switch: '<S133>/Switch1'
         */
        rtb_Gain_p = !VeRCVR_b_EXV_ClsdLpOn;

        /* Switch: '<S133>/Switch1' incorporates:
         *  Constant: '<S140>/Calib'
         *  Logic: '<S116>/Logical'
         *  Logic: '<S116>/Logical1'
         *  Logic: '<S116>/Logical2'
         *  Logic: '<S116>/Logical3'
         *  Logic: '<S116>/Logical5'
         *  Switch: '<S116>/Switch8'
         *  Switch: '<S134>/Switch1'
         */
        if (rtb_Gain_p && (KeRCVR_b_EXV_UseFrstGrad))
        {
            /* Switch: '<S133>/Switch1' incorporates:
             *  UnitDelay: '<S131>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_cq = RCVR_ac_DW.UnitDelay_DSTATE_gf;
        }
        else if (rtb_Gain_p && (!KeRCVR_b_EXV_UseFrstGrad))
        {
            /* Switch: '<S134>/Switch1' incorporates:
             *  Switch: '<S133>/Switch1'
             *  UnitDelay: '<S132>/UnitDelay'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_cq = RCVR_ac_DW.UnitDelay_DSTATE_am;
        }
        else
        {
            if (!KeRCVR_b_EXV_UseFrstGrad)
            {
                /* Switch: '<S116>/Switch8' incorporates:
                 *  Switch: '<S133>/Switch1'
                 *  Switch: '<S134>/Switch1'
                 *  UnitDelay: '<S132>/UnitDelay'
                 */
                RCVR_ac_DW.UnitDelay_DSTATE_cq = RCVR_ac_DW.UnitDelay_DSTATE_am;
            }
        }

        /* Outputs for Atomic SubSystem: '<S116>/Limiter' */
        /* Switch: '<S142>/Switch1' incorporates:
         *  Constant: '<S136>/Calib'
         *  RelationalOperator: '<S142>/RelationalOperator'
         */
        if (KeRCVR_Pct_EXV_MaxCmd < RCVR_ac_DW.UnitDelay_DSTATE_cq)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S128>/Switch1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Pct_EXV_MaxCmd;
        }
        else
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S128>/Switch1'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = RCVR_ac_DW.UnitDelay_DSTATE_cq;
        }

        /* End of Switch: '<S142>/Switch1' */

        /* Switch: '<S142>/Switch' incorporates:
         *  Constant: '<S137>/Calib'
         *  RelationalOperator: '<S142>/RelationalOperator1'
         */
        if (VeRCVR_Pct_EXV_PosRq_B4D <= KeRCVR_Pct_EXV_MinCmd)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Switch: '<S142>/Switch'
             */
            VeRCVR_Pct_EXV_PosRq_B4D = KeRCVR_Pct_EXV_MinCmd;
        }

        /* End of Switch: '<S142>/Switch' */
        /* End of Outputs for SubSystem: '<S116>/Limiter' */

        /* Switch: '<S116>/Switch9' incorporates:
         *  Constant: '<S138>/Calib'
         *  UnitDelay: '<S101>/UnitDelay'
         */
        if (KeRCVR_b_EXV_BoundLimiter)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_cq = VeRCVR_Pct_EXV_PosRq_B4D;
        }

        /* End of Switch: '<S116>/Switch9' */

        /* Switch: '<S128>/Switch1' incorporates:
         *  Switch: '<S128>/Switch11'
         *  Switch: '<S128>/Switch13'
         *  Switch: '<S128>/Switch2'
         *  UnitDelay: '<S101>/Unit Delay3'
         *  UnitDelay: '<S101>/UnitDelay2'
         */
        if (rtb_Switch1_bb)
        {
            RCVR_ac_DW.UnitDelay2_DSTATE = RCVR_ac_DW.UnitDelay3_DSTATE;
        }
        else if (VeRCVR_b_EXV_ClsdLpDeItaEvap)
        {
            /* Switch: '<S128>/Switch11' incorporates:
             *  UnitDelay: '<S101>/UnitDelay1'
             */
            RCVR_ac_DW.UnitDelay3_DSTATE = RCVR_ac_DW.UnitDelay1_DSTATE_e;

            /* Switch: '<S128>/Switch13' incorporates:
             *  UnitDelay: '<S101>/UnitDelay1'
             */
            RCVR_ac_DW.UnitDelay2_DSTATE = RCVR_ac_DW.UnitDelay1_DSTATE_e;
        }
        else
        {
            RCVR_ac_DW.UnitDelay3_DSTATE = RCVR_ac_DW.UnitDelay2_DSTATE;
        }

        /* End of Switch: '<S128>/Switch1' */

        /* Switch: '<S128>/Switch12' incorporates:
         *  Constant: '<S178>/Calib'
         *  Constant: '<S179>/Calib'
         *  Logic: '<S128>/Logical11'
         *  RelationalOperator: '<S128>/Comparison2'
         *  RelationalOperator: '<S128>/Comparison4'
         *  UnitDelay: '<S126>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_mg = ((RCVR_ac_DW.UnitDelay3_DSTATE >=
            KeRCVR_K_EXV_MaxCmd_AntiWindup) || (RCVR_ac_DW.UnitDelay2_DSTATE <=
            KeRCVR_K_EXV_MinCmd_AntiWindup));

        /* Update for UnitDelay: '<S125>/Unit Delay' incorporates:
         *  UnitDelay: '<S126>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_fm = RCVR_ac_DW.UnitDelay_DSTATE_mg;

        /* Update for UnitDelay: '<S124>/UnitDelay' incorporates:
         *  UnitDelay: '<S126>/UnitDelay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_nnb = RCVR_ac_DW.UnitDelay_DSTATE_mg;

        /* Update for Switch: '<S128>/Switch1' incorporates:
         *  UnitDelay: '<S101>/Unit Delay3'
         *  UnitDelay: '<S165>/Unit Delay1'
         */
        RCVR_ac_DW.UnitDelay3_DSTATE = RCVR_ac_DW.UnitDelay1_DSTATE_d;

        /* Update for UnitDelay: '<S101>/UnitDelay1' incorporates:
         *  UnitDelay: '<S153>/UnitDelay1'
         */
        RCVR_ac_DW.UnitDelay1_DSTATE_e = RCVR_ac_DW.UnitDelay1_DSTATE_o;

        /* Update for Switch: '<S128>/Switch2' incorporates:
         *  UnitDelay: '<S101>/UnitDelay2'
         *  UnitDelay: '<S176>/UnitDelay1'
         */
        RCVR_ac_DW.UnitDelay2_DSTATE = RCVR_ac_DW.UnitDelay1_DSTATE_pc;
    }

    /* End of Logic: '<S15>/Logical15' */
    /* End of Outputs for SubSystem: '<S15>/Controller' */

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising' */
    /* Logic: '<S103>/OR1' incorporates:
     *  UnitDelay: '<S103>/UnitDelay'
     */
    rtb_Gain_p = !RCVR_ac_DW.UnitDelay_DSTATE_kg;

    /* Update for UnitDelay: '<S103>/UnitDelay' incorporates:
     *  Constant: '<S15>/TRUEConstant'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_kg = true;

    /* Outputs for Atomic SubSystem: '<S15>/CountDownResetEnabled' */
    /* Switch: '<S102>/Switch1' incorporates:
     *  Constant: '<S102>/ConstantValue'
     *  Constant: '<S15>/ConstantValue1'
     *  Logic: '<S103>/AND'
     *  RelationalOperator: '<S102>/GreaterThan'
     *  Switch: '<S102>/Switch2'
     *  UnitDelay: '<S102>/UnitDelay'
     */
    if (rtb_Gain_p)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_gy = 1U;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_gy) > 0)
        {
            /* UnitDelay: '<S102>/UnitDelay' incorporates:
             *  Constant: '<S102>/ConstantValue1'
             *  Sum: '<S102>/Subtraction'
             *  Switch: '<S102>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_gy = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_gy) - 1));
        }
    }

    /* End of Switch: '<S102>/Switch1' */
    /* End of Outputs for SubSystem: '<S15>/CountDownResetEnabled' */
    /* End of Outputs for SubSystem: '<S15>/EdgeRising' */

    /* RelationalOperator: '<S107>/Comparison7' incorporates:
     *  Constant: '<S212>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    VeRCVR_b_EXV_VlvInoprtve = (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f3) ==
        CeTAIR_e_EXV_Status_Inoperative);

    /* RelationalOperator: '<S107>/Comparison8' incorporates:
     *  Constant: '<S214>/Constant'
     */
    VeRCVR_b_EXV_CalFail = (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
                            CeTAIR_e_EXV_Calibration_Fail);

    /* Outputs for Atomic SubSystem: '<S107>/EdgeRising2' */
    /* Logic: '<S205>/OR1' incorporates:
     *  UnitDelay: '<S205>/UnitDelay'
     */
    rtb_Gain_p = !RCVR_ac_DW.UnitDelay_DSTATE_aj;

    /* Update for UnitDelay: '<S205>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_aj = VeRCVR_b_EXV_CalFail;

    /* Switch: '<S107>/Switch2' incorporates:
     *  Constant: '<S107>/ConstantValue12'
     *  Logic: '<S205>/AND'
     *  Sum: '<S107>/Subtraction'
     *  UnitDelay: '<S107>/UnitDelay'
     */
    if ((VeRCVR_b_EXV_CalFail) && rtb_Gain_p)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_jx = (uint16)(((uint32)
            RCVR_ac_DW.UnitDelay_DSTATE_jx) + 1U);
    }

    /* End of Switch: '<S107>/Switch2' */
    /* End of Outputs for SubSystem: '<S107>/EdgeRising2' */

    /* Logic: '<S107>/Logical5' incorporates:
     *  RelationalOperator: '<S107>/Comparison12'
     *  UnitDelay: '<S107>/UnitDelay'
     */
    VeRCVR_b_EXV_CalFail_CalRq = ((((sint32)RCVR_ac_DW.UnitDelay_DSTATE_jx) <= 1)
        && (VeRCVR_b_EXV_CalFail));

    /* DataStoreRead: '<S107>/DataStoreRead' */
    VeRCVR_Cnt_EXV_CyclesSncCal = EeRCVR_Cnt_EXV_CyclesSncCal;

    /* RelationalOperator: '<S107>/Comparison14' incorporates:
     *  Constant: '<S230>/Calib'
     */
    VeRCVR_b_EXV_MaxCycles_CalRq = (VeRCVR_Cnt_EXV_CyclesSncCal >=
        KeRCVR_Cnt_EXV_MaxCycles_SncCal);

    /* Logic: '<S107>/Logical3' incorporates:
     *  Logic: '<S107>/Logical11'
     */
    rtb_Switch1_bb = ((((VeRCVR_b_EXV_VlvInoprtve) ||
                        (VeRCVR_b_EXV_CalFail_CalRq)) ||
                       ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ax) &&
                        (VeRCVR_b_EXV_MaxCycles_CalRq))) ||
                      (VeRCVF_b_EXV_CalibStrt_DVC_Lim_AD));

    /* Outputs for Atomic SubSystem: '<S107>/EdgeRising5' */
    /* Logic: '<S208>/AND' incorporates:
     *  Logic: '<S208>/OR1'
     *  UnitDelay: '<S208>/UnitDelay'
     */
    rtb_Gain_p = (rtb_Switch1_bb && (!RCVR_ac_DW.UnitDelay_DSTATE_ks));

    /* Update for UnitDelay: '<S208>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_ks = rtb_Switch1_bb;

    /* End of Outputs for SubSystem: '<S107>/EdgeRising5' */

    /* RelationalOperator: '<S107>/Comparison15' incorporates:
     *  Constant: '<S216>/Constant'
     */
    rtb_AND_ijg = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
                   CeTAIR_e_EXV_Calibration_Taking_Place);

    /* Outputs for Atomic SubSystem: '<S107>/EdgeRising4' */
    /* Logic: '<S207>/AND' incorporates:
     *  Logic: '<S207>/OR1'
     *  UnitDelay: '<S207>/UnitDelay'
     */
    rtb_Switch1_bb = (rtb_AND_ijg && (!RCVR_ac_DW.UnitDelay_DSTATE_pp5));

    /* Update for UnitDelay: '<S207>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pp5 = rtb_AND_ijg;

    /* End of Outputs for SubSystem: '<S107>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S107>/CountDownResetEnabled' */
    /* Switch: '<S199>/Switch1' incorporates:
     *  Constant: '<S199>/ConstantValue'
     *  Constant: '<S228>/Calib'
     *  RelationalOperator: '<S199>/GreaterThan'
     *  Switch: '<S199>/Switch2'
     *  UnitDelay: '<S199>/UnitDelay'
     */
    if (rtb_Switch1_bb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_lk = KeRCVR_Cnt_EXV_CalibRq_Cntr;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_lk) > 0)
        {
            /* UnitDelay: '<S199>/UnitDelay' incorporates:
             *  Constant: '<S199>/ConstantValue1'
             *  Sum: '<S199>/Subtraction'
             *  Switch: '<S199>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_lk = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_lk) - 1));
        }
    }

    /* End of Switch: '<S199>/Switch1' */

    /* RelationalOperator: '<S199>/GreaterThan1' incorporates:
     *  Constant: '<S199>/ConstantValue2'
     *  UnitDelay: '<S199>/UnitDelay'
     */
    rtb_UnitDelay_b0 = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_lk) > 0);

    /* End of Outputs for SubSystem: '<S107>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S107>/EdgeFalling2' */
    /* Logic: '<S203>/AND' incorporates:
     *  Logic: '<S203>/OR1'
     *  UnitDelay: '<S203>/UnitDelay'
     */
    rtb_AND_ijg = ((!rtb_UnitDelay_b0) && (RCVR_ac_DW.UnitDelay_DSTATE_l2));

    /* Update for UnitDelay: '<S203>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_l2 = rtb_UnitDelay_b0;

    /* End of Outputs for SubSystem: '<S107>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S107>/CountDownResetEnabled1' */
    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S200>/ConstantValue'
     *  Constant: '<S229>/Calib'
     *  RelationalOperator: '<S200>/GreaterThan'
     *  Switch: '<S200>/Switch2'
     *  UnitDelay: '<S200>/UnitDelay'
     */
    if (rtb_Gain_p)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_id = KeRCVR_Cnt_EXV_CalibRq_RstCntr;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_id) > 0)
        {
            /* UnitDelay: '<S200>/UnitDelay' incorporates:
             *  Constant: '<S200>/ConstantValue1'
             *  Sum: '<S200>/Subtraction'
             *  Switch: '<S200>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_id = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_id) - 1));
        }
    }

    /* End of Switch: '<S200>/Switch1' */

    /* RelationalOperator: '<S200>/GreaterThan1' incorporates:
     *  Constant: '<S200>/ConstantValue2'
     *  UnitDelay: '<S200>/UnitDelay'
     */
    rtb_UnitDelay_b0 = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_id) > 0);

    /* End of Outputs for SubSystem: '<S107>/CountDownResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S107>/EdgeFalling1' */
    /* Logic: '<S202>/AND' incorporates:
     *  Logic: '<S202>/OR1'
     *  UnitDelay: '<S202>/UnitDelay'
     */
    rtb_Switch3_hs = ((!rtb_UnitDelay_b0) && (RCVR_ac_DW.UnitDelay_DSTATE_el));

    /* Update for UnitDelay: '<S202>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_el = rtb_UnitDelay_b0;

    /* End of Outputs for SubSystem: '<S107>/EdgeFalling1' */

    /* Switch: '<S107>/Switch3' incorporates:
     *  Constant: '<S232>/Calib'
     */
    if (KeRCVR_b_EXV_CalibRq_DelayEnbl)
    {
        rtb_Switch1_bb = rtb_AND_ijg;
    }

    /* Outputs for Atomic SubSystem: '<S107>/SignalLatchOnWithReset1' */
    /* Logic: '<S236>/OR1' incorporates:
     *  Logic: '<S107>/Logical13'
     *  Logic: '<S236>/NOT'
     *  Logic: '<S236>/OR'
     *  Switch: '<S107>/Switch3'
     *  UnitDelay: '<S236>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_mu = (rtb_Gain_p || (((!rtb_Switch1_bb) &&
        (!rtb_Switch3_hs)) && (RCVR_ac_DW.UnitDelay_DSTATE_mu)));

    /* End of Outputs for SubSystem: '<S107>/SignalLatchOnWithReset1' */

    /* Switch: '<S107>/Switch1' incorporates:
     *  UnitDelay: '<S236>/UnitDelay'
     */
    if (RCVR_ac_DW.UnitDelay_DSTATE_mu)
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S222>/Constant'
         */
        rtb_Switch1_avh = CeRCVR_e_EXV_Dual_Pstn_Calibration;
    }
    else
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S223>/Constant'
         */
        rtb_Switch1_avh = CeRCVR_e_EXV_No_Calibration;
    }

    /* End of Switch: '<S107>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S107>/SignalLatchOnWithReset2' */
    /* Logic: '<S237>/OR1' incorporates:
     *  Constant: '<S222>/Constant'
     *  Delay: '<S107>/Integer Delay'
     *  Logic: '<S237>/NOT'
     *  Logic: '<S237>/OR'
     *  RelationalOperator: '<S107>/Comparison9'
     *  Switch: '<S107>/Switch1'
     *  UnitDelay: '<S237>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_ju3 = ((((uint32)rtb_Switch1_avh) ==
        CeRCVR_e_EXV_Dual_Pstn_Calibration) || ((!RCVR_ac_DW.IntegerDelay_DSTATE)
        && (RCVR_ac_DW.UnitDelay_DSTATE_ju3)));

    /* End of Outputs for SubSystem: '<S107>/SignalLatchOnWithReset2' */

    /* RelationalOperator: '<S107>/Comparison3' incorporates:
     *  Constant: '<S215>/Constant'
     */
    rtb_Gain_p = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
                  CeTAIR_e_EXV_Calibration_Complete);

    /* Outputs for Atomic SubSystem: '<S107>/EdgeRising3' */
    /* Logic: '<S206>/OR1' incorporates:
     *  UnitDelay: '<S206>/UnitDelay'
     */
    rtb_Switch1_bb = !RCVR_ac_DW.UnitDelay_DSTATE_my;

    /* Update for UnitDelay: '<S206>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_my = rtb_Gain_p;

    /* Logic: '<S107>/Logical7' incorporates:
     *  Delay: '<S107>/Integer Delay'
     *  Logic: '<S206>/AND'
     *  UnitDelay: '<S237>/UnitDelay'
     */
    RCVR_ac_DW.IntegerDelay_DSTATE = ((RCVR_ac_DW.UnitDelay_DSTATE_ju3) &&
        (rtb_Gain_p && rtb_Switch1_bb));

    /* End of Outputs for SubSystem: '<S107>/EdgeRising3' */

    /* If: '<S107>/If' incorporates:
     *  Delay: '<S107>/Integer Delay'
     */
    if (RCVR_ac_DW.IntegerDelay_DSTATE)
    {
        /* Outputs for IfAction SubSystem: '<S107>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S226>/ActionPort'
         */
        /* DataStoreWrite: '<S226>/DataStoreWrite' incorporates:
         *  Constant: '<S226>/ConstantValue'
         */
        EeRCVR_Cnt_EXV_CyclesSncCal = 0;

        /* End of Outputs for SubSystem: '<S107>/IfActionSubsystem' */
    }

    /* End of If: '<S107>/If' */

    /* Gain: '<S1141>/Gain' incorporates:
     *  Constant: '<S213>/Constant'
     *  Constant: '<S217>/Constant'
     *  Constant: '<S218>/Constant'
     *  Constant: '<S219>/Constant'
     *  Logic: '<S107>/Logical1'
     *  RelationalOperator: '<S107>/Comparison2'
     *  RelationalOperator: '<S107>/Comparison4'
     *  RelationalOperator: '<S107>/Comparison5'
     *  RelationalOperator: '<S107>/Comparison6'
     */
    rtb_Gain_p = ((((((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fmg)
                     == CeTAIR_e_EXV_ErrorMsg_OV) || (((uint32)
                      RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fmg) ==
                     CeTAIR_e_EXV_ErrorMsg_UV)) || (((uint32)
                     RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fmg) ==
                    CeTAIR_e_EXV_ErrorMsg_OT)) || (((uint32)
                    RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fmg) ==
                   CeTAIR_e_EXV_ErrorMsg_OC));

    /* Logic: '<S107>/Logical18' incorporates:
     *  Constant: '<S107>/ConstantValue14'
     *  Logic: '<S107>/Logical17'
     *  RelationalOperator: '<S107>/Comparison13'
     */
    VeRCVR_b_EXV_Rmpng2_ClsdPosn =
        ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fv != 0.0F) &&
         (!VeRCVR_b_EXV_ClngRqst));

    /* Logic: '<S107>/Logical8' incorporates:
     *  Constant: '<S210>/Constant'
     *  Constant: '<S211>/Constant'
     *  RelationalOperator: '<S107>/Comparison16'
     *  RelationalOperator: '<S107>/Comparison17'
     */
    rtb_Switch1_bb = ((((uint32)
                        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gf4) ==
                       CeCITR_e_FOTANow) || (((uint32)
                        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gf4) ==
                       CeCITR_e_FOTASchedule));

    /* Logic: '<S107>/Logical12' */
    rtb_AND_ijg = ((VeRCVR_b_EXV_VhclOff) || rtb_Switch1_bb);

    /* Logic: '<S107>/Logical9' incorporates:
     *  Constant: '<S220>/Constant'
     *  Constant: '<S221>/Constant'
     *  Logic: '<S107>/Logical'
     *  Logic: '<S107>/Logical10'
     *  Logic: '<S107>/Logical2'
     *  RelationalOperator: '<S107>/Comparison10'
     *  RelationalOperator: '<S107>/Comparison11'
     */
    VeRCVR_b_EXV_ErrCsng_ShtDwn = (((((VeRCVR_b_EXV_Rmpng2_ClsdPosn) &&
        rtb_Gain_p) || (rtb_Gain_p && (VeRCVR_b_EXV_ClngRqst))) || (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fmg) ==
        CeTAIR_e_EXV_ErrorMsg_MB)) || (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_fmg) ==
        CeTAIR_e_EXV_ErrorMsg_UBP));

    /* Logic: '<S107>/Logical4' */
    VeRCVR_b_AC_ShtdwnRqst_B4D = (((((VeRCVR_b_EXV_ErrCsng_ShtDwn) ||
        (VeRCVR_b_EXV_CalFail)) ||
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kj)) ||
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bd)) ||
        (VeRCVR_b_EXV_CalIPG));

    /* Outputs for Atomic SubSystem: '<S107>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S239>/EdgeRising' */
    /* Logic: '<S259>/AND' incorporates:
     *  Logic: '<S259>/OR1'
     *  UnitDelay: '<S259>/Unit Delay'
     */
    rtb_Gain_p = (rtb_AND_ijg && (!RCVR_ac_DW.UnitDelay_DSTATE_e5m));

    /* Update for UnitDelay: '<S259>/Unit Delay' */
    RCVR_ac_DW.UnitDelay_DSTATE_e5m = rtb_AND_ijg;

    /* End of Outputs for SubSystem: '<S239>/EdgeRising' */

    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S233>/Calib'
     *  Constant: '<S234>/Calib'
     *  Constant: '<S239>/Constant Value1'
     *  Logic: '<S239>/OR'
     *  Logic: '<S239>/OR1'
     *  MinMax: '<S239>/Minimum'
     *  Sum: '<S239>/Summation'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    if ((!rtb_AND_ijg) || rtb_Gain_p)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_bm = 0.0F;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_bm = fminf(KeRCVR_t_EXVShtDwn_trans_delay,
            KeRCVR_t_EXVShtDwn_dT + RCVR_ac_DW.UnitDelay_DSTATE_bm);
    }

    /* End of Switch: '<S239>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S107>/RdyToShtDwnCalc' incorporates:
     *  EnablePort: '<S235>/Enable'
     */
    /* Logic: '<S239>/AND' incorporates:
     *  Constant: '<S234>/Calib'
     *  RelationalOperator: '<S239>/Greater  Than'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    if (rtb_AND_ijg && (RCVR_ac_DW.UnitDelay_DSTATE_bm >=
                        KeRCVR_t_EXVShtDwn_trans_delay))
    {
        /* RelationalOperator: '<S235>/Comparison21' incorporates:
         *  Constant: '<S246>/Constant'
         */
        rtb_Gain_p = (((uint32)
                       RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
                      CeTAIR_e_EXV_Calibration_Taking_Place);

        /* Outputs for Atomic SubSystem: '<S235>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S253>/EdgeRising' */
        /* Logic: '<S254>/AND' incorporates:
         *  Logic: '<S254>/OR1'
         *  UnitDelay: '<S254>/Unit Delay'
         */
        rtb_AND_ijg = (rtb_Gain_p && (!RCVR_ac_DW.UnitDelay_DSTATE_amc));

        /* Update for UnitDelay: '<S254>/Unit Delay' */
        RCVR_ac_DW.UnitDelay_DSTATE_amc = rtb_Gain_p;

        /* End of Outputs for SubSystem: '<S253>/EdgeRising' */

        /* Switch: '<S253>/Switch1' incorporates:
         *  Constant: '<S250>/Calib'
         *  Constant: '<S251>/Calib'
         *  Constant: '<S253>/Constant Value1'
         *  Logic: '<S253>/OR'
         *  Logic: '<S253>/OR1'
         *  MinMax: '<S253>/Minimum'
         *  Sum: '<S253>/Summation'
         *  UnitDelay: '<S253>/Unit Delay'
         */
        if ((!rtb_Gain_p) || rtb_AND_ijg)
        {
            RCVR_ac_DW.UnitDelay_DSTATE_i3 = 0.0F;
        }
        else
        {
            RCVR_ac_DW.UnitDelay_DSTATE_i3 = fminf
                (KeRCVR_Cnt_EXV_CalibRq_ShtDwnCntr, KeRCVR_t_EXVShtDwn_dT +
                 RCVR_ac_DW.UnitDelay_DSTATE_i3);
        }

        /* End of Switch: '<S253>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S235>/Signal Latch On' */
        /* Logic: '<S252>/OR2' incorporates:
         *  Constant: '<S250>/Calib'
         *  Logic: '<S253>/AND'
         *  RelationalOperator: '<S253>/Greater  Than'
         *  UnitDelay: '<S252>/Unit Delay'
         *  UnitDelay: '<S253>/Unit Delay'
         */
        RCVR_ac_DW.UnitDelay_DSTATE_mk = ((rtb_Gain_p &&
            (RCVR_ac_DW.UnitDelay_DSTATE_i3 >= KeRCVR_Cnt_EXV_CalibRq_ShtDwnCntr))
            || (RCVR_ac_DW.UnitDelay_DSTATE_mk));

        /* End of Outputs for SubSystem: '<S235>/Signal Latch On' */
        /* End of Outputs for SubSystem: '<S235>/Turn On Delay Time' */

        /* Logic: '<S235>/Logical12' incorporates:
         *  Constant: '<S247>/Constant'
         *  Constant: '<S248>/Constant'
         *  Constant: '<S249>/Constant'
         *  RelationalOperator: '<S235>/Comparison1'
         *  RelationalOperator: '<S235>/Comparison18'
         *  RelationalOperator: '<S235>/Comparison20'
         */
        RCVR_ac_B.Logical12 = ((((rtb_Switch1_bb || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
            CeTAIR_e_EXV_Calibration_Complete)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
            CeTAIR_e_EXV_Calibration_Fail)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
            CeTAIR_e_EXV_Calibration_SNA)) || (RCVR_ac_DW.UnitDelay_DSTATE_mk));
    }

    /* End of Logic: '<S239>/AND' */
    /* End of Outputs for SubSystem: '<S107>/RdyToShtDwnCalc' */
    /* End of Outputs for SubSystem: '<S107>/Turn On Delay Time' */

    /* Switch: '<S107>/Switch4' */
    if (rtb_Switch1_bb)
    {
        /* Switch: '<S107>/Switch4' incorporates:
         *  Constant: '<S224>/Constant'
         */
        VeRCVR_e_EXV_CalCmd_B4D = CeRCVR_e_EXV_No_Calibration;
    }
    else
    {
        /* Switch: '<S107>/Switch4' incorporates:
         *  RelationalOperator: '<S107>/Comparison9'
         *  Switch: '<S107>/Switch1'
         */
        VeRCVR_e_EXV_CalCmd_B4D = rtb_Switch1_avh;
    }

    /* End of Switch: '<S107>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S15>/SignalLatchOn' */
    /* Outputs for Atomic SubSystem: '<S15>/CountDownResetEnabled' */
    /* Logic: '<S108>/OR2' incorporates:
     *  Constant: '<S102>/ConstantValue2'
     *  RelationalOperator: '<S102>/GreaterThan1'
     *  UnitDelay: '<S102>/UnitDelay'
     *  UnitDelay: '<S108>/UnitDelay'
     */
    VeRCVR_b_EXV_SystmWk = ((((sint32)RCVR_ac_DW.UnitDelay_DSTATE_gy) > 0) ||
                            (VeRCVR_b_EXV_SystmWk));

    /* End of Outputs for SubSystem: '<S15>/CountDownResetEnabled' */
    /* End of Outputs for SubSystem: '<S15>/SignalLatchOn' */

    /* Outputs for Atomic SubSystem: '<S107>/EdgeRising1' */
    /* Logic: '<S204>/OR1' incorporates:
     *  UnitDelay: '<S204>/UnitDelay'
     */
    rtb_Gain_p = !RCVR_ac_DW.UnitDelay_DSTATE_cm;

    /* Update for UnitDelay: '<S204>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_cm = VeRCVR_b_EXV_SystmWk;

    /* If: '<S107>/If1' incorporates:
     *  Logic: '<S204>/AND'
     */
    if ((VeRCVR_b_EXV_SystmWk) && rtb_Gain_p)
    {
        /* Outputs for IfAction SubSystem: '<S107>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S227>/ActionPort'
         */
        /* Sum: '<S227>/Sum' incorporates:
         *  Constant: '<S227>/ConstantValue'
         *  DataStoreRead: '<S107>/DataStoreRead1'
         *  DataStoreWrite: '<S227>/DataStoreWrite'
         */
        EeRCVR_Cnt_EXV_CyclesSncCal = (sint16)(EeRCVR_Cnt_EXV_CyclesSncCal + 1);

        /* End of Outputs for SubSystem: '<S107>/IfActionSubsystem1' */
    }

    /* End of If: '<S107>/If1' */
    /* End of Outputs for SubSystem: '<S107>/EdgeRising1' */

    /* Switch: '<S15>/Switch2' */
    if (VeRCVF_b_EXV_DVC_Lim_AD)
    {
        /* Switch: '<S15>/Switch2' */
        rtb_Switch2_ie = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k3;
    }
    else
    {
        /* Switch: '<S15>/Switch2' incorporates:
         *  UnitDelay: '<S101>/UnitDelay'
         */
        rtb_Switch2_ie = RCVR_ac_DW.UnitDelay_DSTATE_cq;
    }

    /* End of Switch: '<S15>/Switch2' */

    /* RelationalOperator: '<S279>/Comparison15' incorporates:
     *  Constant: '<S298>/Constant'
     */
    rtb_Gain_p = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf) ==
                  CeTAIR_e_EXV_Calibration_Fail);

    /* Outputs for Atomic SubSystem: '<S279>/EdgeRising2' */
    /* Logic: '<S297>/OR1' incorporates:
     *  UnitDelay: '<S297>/UnitDelay'
     */
    rtb_Switch1_bb = !RCVR_ac_DW.UnitDelay_DSTATE_nn;

    /* Update for UnitDelay: '<S297>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_nn = rtb_Gain_p;

    /* Switch: '<S279>/Switch2' incorporates:
     *  Constant: '<S279>/ConstantValue12'
     *  Logic: '<S297>/AND'
     *  Sum: '<S279>/Subtraction'
     *  UnitDelay: '<S279>/UnitDelay'
     */
    if (rtb_Gain_p && rtb_Switch1_bb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_kw = (uint16)(((uint32)
            RCVR_ac_DW.UnitDelay_DSTATE_kw) + 1U);
    }

    /* End of Switch: '<S279>/Switch2' */
    /* End of Outputs for SubSystem: '<S279>/EdgeRising2' */

    /* Logic: '<S276>/Logical3' incorporates:
     *  Constant: '<S283>/Constant'
     *  Constant: '<S286>/Calib'
     *  DataStoreRead: '<S276>/DataStoreRead'
     *  Logic: '<S276>/Logical'
     *  Logic: '<S279>/Logical5'
     *  RelationalOperator: '<S276>/Comparison14'
     *  RelationalOperator: '<S276>/Comparison7'
     *  RelationalOperator: '<S279>/Comparison12'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     *  UnitDelay: '<S279>/UnitDelay'
     */
    rtb_Switch1_bb = ((((((uint32)
                          RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nb) ==
                         CeTAIR_e_EXV_Status_Inoperative) || ((((sint32)
                           RCVR_ac_DW.UnitDelay_DSTATE_kw) <= 1) && rtb_Gain_p))
                       || ((((sint32)EeRCVR_Cnt_EEXV_CyclesSncCal) >= ((sint32)
                          KeRCVR_Cnt_EEXV_MaxCycles_SncCal)) &&
                           (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ax)))
                      || (VeRCVF_b_EEXV_CalibStrt_DVC_Lim_AD));

    /* Outputs for Atomic SubSystem: '<S276>/EdgeRising5' */
    /* Logic: '<S282>/AND' incorporates:
     *  Logic: '<S282>/OR1'
     *  UnitDelay: '<S282>/UnitDelay'
     */
    rtb_Gain_p = (rtb_Switch1_bb && (!RCVR_ac_DW.UnitDelay_DSTATE_pi));

    /* Update for UnitDelay: '<S282>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pi = rtb_Switch1_bb;

    /* End of Outputs for SubSystem: '<S276>/EdgeRising5' */

    /* RelationalOperator: '<S278>/Comparison15' incorporates:
     *  Constant: '<S293>/Constant'
     */
    rtb_AND_ijg = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf) ==
                   CeTAIR_e_EXV_Calibration_Taking_Place);

    /* Outputs for Atomic SubSystem: '<S278>/EdgeRising4' */
    /* Logic: '<S292>/AND' incorporates:
     *  Logic: '<S292>/OR1'
     *  UnitDelay: '<S292>/UnitDelay'
     */
    rtb_Switch1_bb = (rtb_AND_ijg && (!RCVR_ac_DW.UnitDelay_DSTATE_hx));

    /* Update for UnitDelay: '<S292>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_hx = rtb_AND_ijg;

    /* End of Outputs for SubSystem: '<S278>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S278>/CountDownResetEnabled' */
    /* Switch: '<S288>/Switch1' incorporates:
     *  Constant: '<S288>/ConstantValue'
     *  Constant: '<S294>/Calib'
     *  RelationalOperator: '<S288>/GreaterThan'
     *  Switch: '<S288>/Switch2'
     *  UnitDelay: '<S288>/UnitDelay'
     */
    if (rtb_Switch1_bb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_gpe = KeRCVR_Cnt_EEXV_CalibRq_Cntr;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_gpe) > 0)
        {
            /* UnitDelay: '<S288>/UnitDelay' incorporates:
             *  Constant: '<S288>/ConstantValue1'
             *  Sum: '<S288>/Subtraction'
             *  Switch: '<S288>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_gpe = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_gpe) - 1));
        }
    }

    /* End of Switch: '<S288>/Switch1' */

    /* RelationalOperator: '<S288>/GreaterThan1' incorporates:
     *  Constant: '<S288>/ConstantValue2'
     *  UnitDelay: '<S288>/UnitDelay'
     */
    rtb_UnitDelay_b0 = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_gpe) > 0);

    /* End of Outputs for SubSystem: '<S278>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S278>/EdgeFalling2' */
    /* Logic: '<S291>/AND' incorporates:
     *  Logic: '<S291>/OR1'
     *  UnitDelay: '<S291>/UnitDelay'
     */
    rtb_AND_ijg = ((!rtb_UnitDelay_b0) && (RCVR_ac_DW.UnitDelay_DSTATE_pp));

    /* Update for UnitDelay: '<S291>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pp = rtb_UnitDelay_b0;

    /* End of Outputs for SubSystem: '<S278>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S278>/CountDownResetEnabled1' */
    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S289>/ConstantValue'
     *  Constant: '<S295>/Calib'
     *  RelationalOperator: '<S289>/GreaterThan'
     *  Switch: '<S289>/Switch2'
     *  UnitDelay: '<S289>/UnitDelay'
     */
    if (rtb_Gain_p)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_je = KeRCVR_Cnt_EEXV_CalibRq_RstCntr;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_je) > 0)
        {
            /* UnitDelay: '<S289>/UnitDelay' incorporates:
             *  Constant: '<S289>/ConstantValue1'
             *  Sum: '<S289>/Subtraction'
             *  Switch: '<S289>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_je = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_je) - 1));
        }
    }

    /* End of Switch: '<S289>/Switch1' */

    /* RelationalOperator: '<S289>/GreaterThan1' incorporates:
     *  Constant: '<S289>/ConstantValue2'
     *  UnitDelay: '<S289>/UnitDelay'
     */
    rtb_UnitDelay_b0 = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_je) > 0);

    /* End of Outputs for SubSystem: '<S278>/CountDownResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S278>/EdgeFalling1' */
    /* Logic: '<S290>/AND' incorporates:
     *  Logic: '<S290>/OR1'
     *  UnitDelay: '<S290>/UnitDelay'
     */
    rtb_Switch3_hs = ((!rtb_UnitDelay_b0) && (RCVR_ac_DW.UnitDelay_DSTATE_pfn));

    /* Update for UnitDelay: '<S290>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pfn = rtb_UnitDelay_b0;

    /* End of Outputs for SubSystem: '<S278>/EdgeFalling1' */

    /* Switch: '<S278>/Switch3' incorporates:
     *  Constant: '<S296>/Calib'
     */
    if (KeRCVR_b_EEXV_CalibRq_DelayEnbl)
    {
        rtb_Switch1_bb = rtb_AND_ijg;
    }

    /* Outputs for Atomic SubSystem: '<S276>/SignalLatchOnWithReset1' */
    /* Logic: '<S287>/OR1' incorporates:
     *  Logic: '<S278>/Logical13'
     *  Logic: '<S287>/NOT'
     *  Logic: '<S287>/OR'
     *  Switch: '<S278>/Switch3'
     *  UnitDelay: '<S287>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_l4 = (rtb_Gain_p || (((!rtb_Switch1_bb) &&
        (!rtb_Switch3_hs)) && (RCVR_ac_DW.UnitDelay_DSTATE_l4)));

    /* End of Outputs for SubSystem: '<S276>/SignalLatchOnWithReset1' */

    /* Switch: '<S276>/Switch1' incorporates:
     *  UnitDelay: '<S287>/UnitDelay'
     */
    if (RCVR_ac_DW.UnitDelay_DSTATE_l4)
    {
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S284>/Constant'
         */
        rtb_Switch1_avh = CeRCVR_e_EXV_Dual_Pstn_Calibration;
    }
    else
    {
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S285>/Constant'
         */
        rtb_Switch1_avh = CeRCVR_e_EXV_No_Calibration;
    }

    /* End of Switch: '<S276>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* RelationalOperator: '<S280>/Comparison2' incorporates:
     *  Switch: '<S1418>/Switch'
     *  Switch: '<S276>/Switch1'
     */
    UnitDelay_DSTATE_ju3_tmp = rtb_Switch1_avh;

    /* Outputs for Atomic SubSystem: '<S280>/SignalLatchOnWithReset2' */
    /* Logic: '<S303>/OR1' incorporates:
     *  Constant: '<S300>/Constant'
     *  Delay: '<S280>/Integer Delay'
     *  Logic: '<S303>/NOT'
     *  Logic: '<S303>/OR'
     *  RelationalOperator: '<S280>/Comparison2'
     *  Switch: '<S276>/Switch1'
     *  UnitDelay: '<S303>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_k0 = ((((uint32)rtb_Switch1_avh) ==
        CeRCVR_e_EXV_Dual_Pstn_Calibration) ||
        ((!RCVR_ac_DW.IntegerDelay_DSTATE_n) && (RCVR_ac_DW.UnitDelay_DSTATE_k0)));

    /* End of Outputs for SubSystem: '<S280>/SignalLatchOnWithReset2' */

    /* RelationalOperator: '<S280>/Comparison3' incorporates:
     *  Constant: '<S301>/Constant'
     */
    rtb_Gain_p = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf) ==
                  CeTAIR_e_EXV_Calibration_Complete);

    /* Outputs for Atomic SubSystem: '<S280>/EdgeRising3' */
    /* Logic: '<S299>/OR1' incorporates:
     *  UnitDelay: '<S299>/UnitDelay'
     */
    rtb_Switch1_bb = !RCVR_ac_DW.UnitDelay_DSTATE_ib;

    /* Update for UnitDelay: '<S299>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_ib = rtb_Gain_p;

    /* Logic: '<S280>/Logical7' incorporates:
     *  Delay: '<S280>/Integer Delay'
     *  Logic: '<S299>/AND'
     *  UnitDelay: '<S303>/UnitDelay'
     */
    RCVR_ac_DW.IntegerDelay_DSTATE_n = ((RCVR_ac_DW.UnitDelay_DSTATE_k0) &&
        (rtb_Gain_p && rtb_Switch1_bb));

    /* End of Outputs for SubSystem: '<S280>/EdgeRising3' */

    /* If: '<S280>/If' incorporates:
     *  Delay: '<S280>/Integer Delay'
     */
    if (RCVR_ac_DW.IntegerDelay_DSTATE_n)
    {
        /* Outputs for IfAction SubSystem: '<S280>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S302>/ActionPort'
         */
        /* DataStoreWrite: '<S302>/DataStoreWrite' incorporates:
         *  Constant: '<S302>/ConstantValue'
         */
        EeRCVR_Cnt_EEXV_CyclesSncCal = 0;

        /* End of Outputs for SubSystem: '<S280>/IfActionSubsystem' */
    }

    /* End of If: '<S280>/If' */

    /* Outputs for Atomic SubSystem: '<S281>/EdgeRising' */
    /* Logic: '<S304>/OR1' incorporates:
     *  UnitDelay: '<S304>/UnitDelay'
     */
    rtb_Gain_p = !RCVR_ac_DW.UnitDelay_DSTATE_cs;

    /* Update for UnitDelay: '<S304>/UnitDelay' incorporates:
     *  Constant: '<S281>/TRUEConstant'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_cs = true;

    /* If: '<S281>/If1' incorporates:
     *  Logic: '<S304>/AND'
     */
    if (rtb_Gain_p)
    {
        /* Outputs for IfAction SubSystem: '<S281>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S305>/ActionPort'
         */
        /* Sum: '<S305>/Sum' incorporates:
         *  Constant: '<S305>/ConstantValue'
         *  DataStoreRead: '<S281>/DataStoreRead1'
         *  DataStoreWrite: '<S305>/DataStoreWrite'
         */
        EeRCVR_Cnt_EEXV_CyclesSncCal = (sint16)(EeRCVR_Cnt_EEXV_CyclesSncCal + 1);

        /* End of Outputs for SubSystem: '<S281>/IfActionSubsystem1' */
    }

    /* End of If: '<S281>/If1' */
    /* End of Outputs for SubSystem: '<S281>/EdgeRising' */

    /* Sum: '<S306>/Sum1' incorporates:
     *  Lookup_n-D: '<S325>/Vector'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    VeRCVR_T_EEXV_SHActual = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kz
        - look1_iflf_binlca_16a
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e, ((const float32 *)
          &(KxRCVR_T_RefPT_EEXV_Table[0])), ((const float32 *)
          &(KtRCVR_T_RefPT_EEXV_Table[0])), 19U);

    /* Logic: '<S308>/Logical1' incorporates:
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S332>/Constant2'
     *  Constant: '<S333>/Constant1'
     *  Constant: '<S333>/Constant2'
     *  Constant: '<S334>/Constant1'
     *  Constant: '<S334>/Constant2'
     *  Constant: '<S335>/Constant1'
     *  Constant: '<S335>/Constant2'
     *  Constant: '<S336>/Constant1'
     *  Constant: '<S336>/Constant2'
     *  Constant: '<S337>/Constant1'
     *  Constant: '<S337>/Constant2'
     *  Constant: '<S338>/Constant1'
     *  Constant: '<S338>/Constant2'
     *  DataStoreRead: '<S332>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  DataStoreRead: '<S333>/StatusByte_AC_RefrigPresSnsrCCktPerf'
     *  DataStoreRead: '<S334>/StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     *  DataStoreRead: '<S335>/StatusByte_AC_RefrigPresSnsrCCkt'
     *  DataStoreRead: '<S336>/StatusByte_AC_RefrigTempSnsrCCkt'
     *  DataStoreRead: '<S337>/StatusByte_LostCommACRefrigExpVlvActC'
     *  Logic: '<S308>/Logical5'
     *  Logic: '<S332>/Logical Operator'
     *  Logic: '<S333>/Logical Operator'
     *  Logic: '<S334>/Logical Operator'
     *  Logic: '<S335>/Logical Operator'
     *  Logic: '<S336>/Logical Operator'
     *  Logic: '<S337>/Logical Operator'
     *  Logic: '<S338>/Logical Operator'
     *  RelationalOperator: '<S332>/Relational Operator1'
     *  RelationalOperator: '<S332>/Relational Operator2'
     *  RelationalOperator: '<S333>/Relational Operator1'
     *  RelationalOperator: '<S333>/Relational Operator2'
     *  RelationalOperator: '<S334>/Relational Operator1'
     *  RelationalOperator: '<S334>/Relational Operator2'
     *  RelationalOperator: '<S335>/Relational Operator1'
     *  RelationalOperator: '<S335>/Relational Operator2'
     *  RelationalOperator: '<S336>/Relational Operator1'
     *  RelationalOperator: '<S336>/Relational Operator2'
     *  RelationalOperator: '<S337>/Relational Operator1'
     *  RelationalOperator: '<S337>/Relational Operator2'
     *  RelationalOperator: '<S338>/Relational Operator1'
     *  RelationalOperator: '<S338>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S333>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S333>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S334>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S334>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S335>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S335>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S336>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S336>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S337>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S337>/Bitwise Operator2'
     */
    VeRCVR_b_EEXV_HeatPmp_RA_FSRqst = ((KeRCVR_b_EEXV_HeatPmp_RA_Enbl) &&
        (((((((((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf) & 1U) !=
                0U) && ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf)
                         & 64U) == 0U)) || (((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrCCktPerf) & 1U) != 0U) &&
        ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrCCktPerf) & 64U) == 0U)))
             || (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt)
                   & 1U) != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt) & 64U) == 0U))) ||
            (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrCCkt) & 1U) != 0U)
             && ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrCCkt) & 64U) ==
                 0U))) || (((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt) & 1U) != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt) & 64U) == 0U))) ||
          (((((uint32)RCVR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC) & 1U) !=
            0U) && ((((uint32)RCVR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC)
                     & 64U) == 0U))) || ((rtb_Logical_a_tmp_1 != 0U) &&
        (rtb_Logical_a_tmp_2 == 0U))));

    /* Logic: '<S307>/Logical2' incorporates:
     *  Constant: '<S326>/Constant'
     *  Constant: '<S327>/Constant'
     *  Constant: '<S328>/Constant'
     *  Constant: '<S329>/Constant'
     *  Constant: '<S330>/Constant'
     *  Logic: '<S307>/Logical1'
     *  Logic: '<S307>/Logical3'
     *  Logic: '<S307>/Logical4'
     *  Logic: '<S307>/Logical5'
     *  RelationalOperator: '<S307>/Comparison1'
     *  RelationalOperator: '<S307>/Comparison2'
     *  RelationalOperator: '<S307>/Comparison3'
     *  RelationalOperator: '<S307>/Comparison4'
     *  RelationalOperator: '<S307>/Comparison5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    VeRCVR_b_EEXV_ClsdLpOn = ((((((((uint32)VeRCVR_e_RefShtoffVlv_State_AD) ==
        CeTHMR_e_ChillerNFront) || (((uint32)VeRCVR_e_RefShtoffVlv_State_AD) ==
        CeTHMR_e_EvapOnly)) || (((uint32)VeRCVR_e_RefShtoffVlv_State_AD) ==
        CeTHMR_e_AllOpen)) && (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_em) ==
        CeTHMR_e_CabinActiveCooling)) && (((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) != CeTHMR_e_HeatPump))
        && (!VeRCVR_b_EEXV_HeatPmp_RA_FSRqst));

    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S341>/Calib'
     *  Logic: '<S309>/Logical1'
     *  Logic: '<S309>/Logical3'
     */
    if (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ivt) ||
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cc)) ||
            (KeRCVR_b_EEXV_SH_Table_Ovrd))
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Constant: '<S340>/Calib'
         */
        VeRCVR_T_EEXV_SHTar = KeRCVR_T_EEXV_SH_MinTgt;
    }
    else
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Lookup_n-D: '<S342>/Vector'
         */
        VeRCVR_T_EEXV_SHTar = look1_iflf_binlca_16a(rtb_Sum1, ((const float32 *)
            &(KxRCVR_T_EEXV_SuperHeat[0])), ((const float32 *)
            &(KtRCVR_T_EEXV_SuperHeat[0])), 9U);
    }

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising' */
    /* Gain: '<S1141>/Gain' incorporates:
     *  UnitDelay: '<S352>/UnitDelay'
     */
    rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_hrx;

    /* Update for UnitDelay: '<S352>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_hrx = VeRCVR_b_EEXV_ClsdLpOn;

    /* End of Outputs for SubSystem: '<S321>/EdgeRising' */

    /* RelationalOperator: '<S321>/Comparison3' incorporates:
     *  Constant: '<S354>/Calib'
     *  UnitDelay: '<S321>/UnitDelay'
     */
    rtb_Switch1_bb = (RCVR_ac_DW.UnitDelay_DSTATE <=
                      KeRCVR_Pct_EEXV_PctB4_SlowRamp);

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising1' */
    /* Logic: '<S353>/AND' incorporates:
     *  Logic: '<S353>/OR1'
     *  UnitDelay: '<S353>/UnitDelay'
     */
    rtb_AND_ijg = (rtb_Switch1_bb && (!RCVR_ac_DW.UnitDelay_DSTATE_or));

    /* Update for UnitDelay: '<S353>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_or = rtb_Switch1_bb;

    /* End of Outputs for SubSystem: '<S321>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S321>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising' */
    /* Logic: '<S356>/OR1' incorporates:
     *  Constant: '<S354>/Calib'
     *  Logic: '<S321>/Logical1'
     *  Logic: '<S352>/AND'
     *  Logic: '<S352>/OR1'
     *  Logic: '<S356>/NOT'
     *  Logic: '<S356>/OR'
     *  RelationalOperator: '<S321>/Comparison1'
     *  UnitDelay: '<S321>/UnitDelay'
     *  UnitDelay: '<S356>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_l0 = ((((VeRCVR_b_EEXV_ClsdLpOn) && (!rtb_Gain_p))
        || rtb_AND_ijg) || ((RCVR_ac_DW.UnitDelay_DSTATE <=
        KeRCVR_Pct_EEXV_PctB4_SlowRamp) && (RCVR_ac_DW.UnitDelay_DSTATE_l0)));

    /* End of Outputs for SubSystem: '<S321>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S321>/SignalLatchOnWithReset' */

    /* Logic: '<S321>/Logical' incorporates:
     *  Constant: '<S355>/Calib'
     *  UnitDelay: '<S356>/UnitDelay'
     */
    rtb_Switch1_bb = ((RCVR_ac_DW.UnitDelay_DSTATE_l0) &&
                      (KeRCVR_b_EEXV_Quick_Open_Enbl));

    /* Switch: '<S311>/Switch1' */
    if (rtb_Switch1_bb)
    {
        /* Switch: '<S311>/Switch1' incorporates:
         *  Constant: '<S348>/Calib'
         */
        rtb_Switch3_i = KeRCVR_dPct_EEXV_RampUpRate_Quik;
    }
    else
    {
        /* Switch: '<S311>/Switch1' incorporates:
         *  Constant: '<S347>/Calib'
         */
        rtb_Switch3_i = KeRCVR_dPct_EEXV_RampUpRate;
    }

    /* End of Switch: '<S311>/Switch1' */

    /* Logic: '<S311>/Logical2' */
    rtb_AND_ijg = !VeRCVR_b_EEXV_ClsdLpOn;

    /* Switch: '<S311>/Switch3' */
    if (rtb_AND_ijg)
    {
        /* Switch: '<S311>/Switch3' incorporates:
         *  Constant: '<S346>/Calib'
         */
        rtb_Sum1_hg = KeRCVR_dPct_EEXV_RampDownRate_Slw;
    }
    else
    {
        /* Switch: '<S311>/Switch3' incorporates:
         *  Constant: '<S345>/Calib'
         */
        rtb_Sum1_hg = KeRCVR_dPct_EEXV_RampDownRate;
    }

    /* End of Switch: '<S311>/Switch3' */

    /* Sum: '<S361>/Sum1' */
    rtb_Sum1 = VeRCVR_T_EEXV_SHTar - VeRCVR_T_EEXV_SHActual;

    /* RelationalOperator: '<S361>/RelationalOperator' incorporates:
     *  Constant: '<S375>/Constant'
     */
    rtb_UnitDelay_b0 = (((uint32)
                         RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mh) ==
                        CeTHMR_e_ActiveCooling);

    /* Outputs for Atomic SubSystem: '<S361>/EdgeRising' */
    /* Gain: '<S1141>/Gain' incorporates:
     *  UnitDelay: '<S374>/UnitDelay'
     */
    rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_jpv;

    /* Update for UnitDelay: '<S374>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_jpv = VeRCVR_b_EEXV_ClsdLpOn;

    /* Outputs for Atomic SubSystem: '<S361>/PIControl1' */
    /* Switch: '<S385>/Switch' incorporates:
     *  Constant: '<S383>/Calib'
     *  Constant: '<S384>/Calib'
     *  Logic: '<S361>/Logical1'
     *  Logic: '<S374>/AND'
     *  Logic: '<S374>/OR1'
     *  Switch: '<S361>/Switch1'
     *  Switch: '<S361>/Switch3'
     *  Switch: '<S385>/Switch2'
     *  UnitDelay: '<S361>/UnitDelay'
     */
    if ((!KeRCVR_b_EEXV_CLOnly) && ((VeRCVR_b_EEXV_ClsdLpOn) && (!rtb_Gain_p)))
    {
        /* Switch: '<S385>/Switch' incorporates:
         *  Constant: '<S376>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_Cnt_EEXV_PID_IntIV;
    }
    else
    {
        if ((KeRCVR_b_EEXV_SH_HoldI_Enbl) && (RCVR_ac_DW.UnitDelay_DSTATE_nf5))
        {
            /* Switch: '<S385>/Switch2' incorporates:
             *  Constant: '<S385>/ConstantValue'
             */
            rtb_Sum2_ik = 0.0F;
        }
        else
        {
            if (rtb_UnitDelay_b0)
            {
                /* Switch: '<S361>/Switch3' incorporates:
                 *  Constant: '<S379>/Calib'
                 *  Switch: '<S385>/Switch2'
                 */
                rtb_Sum2_ik = KeRCVR_K_EEXV_PID_BattCool_Ki;
            }
            else
            {
                /* Switch: '<S361>/Switch3' incorporates:
                 *  Constant: '<S381>/Calib'
                 *  Switch: '<S385>/Switch2'
                 */
                rtb_Sum2_ik = KeRCVR_K_EEXV_PID_Ki;
            }

            /* Switch: '<S385>/Switch2' incorporates:
             *  Constant: '<S361>/ConstantValue'
             *  Product: '<S385>/Multiplication1'
             */
            rtb_Sum2_ik = (rtb_Sum1 * rtb_Sum2_ik) * 0.025F;
        }

        /* Switch: '<S385>/Switch' incorporates:
         *  Sum: '<S385>/Sum_Sub'
         *  Switch: '<S361>/Switch3'
         *  Switch: '<S385>/Switch2'
         *  UnitDelay: '<S385>/UnitDelay'
         */
        rtb_Sum2_ik += RCVR_ac_DW.UnitDelay_DSTATE_fr;
    }

    /* End of Switch: '<S385>/Switch' */
    /* End of Outputs for SubSystem: '<S361>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S385>/integral_term' */
    /* Switch: '<S386>/Switch1' incorporates:
     *  Constant: '<S377>/Calib'
     *  RelationalOperator: '<S386>/RelationalOperator'
     */
    if (KeRCVR_Cnt_EEXV_PID_IntMax < rtb_Sum2_ik)
    {
        /* Lookup_n-D: '<S1186>/Vector' */
        rtb_Sum2_ik = KeRCVR_Cnt_EEXV_PID_IntMax;
    }

    /* End of Switch: '<S386>/Switch1' */

    /* Switch: '<S386>/Switch' incorporates:
     *  Constant: '<S378>/Calib'
     *  RelationalOperator: '<S386>/RelationalOperator1'
     *  UnitDelay: '<S385>/UnitDelay'
     */
    if (rtb_Sum2_ik > KeRCVR_Cnt_EEXV_PID_IntMin)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_fr = rtb_Sum2_ik;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_fr = KeRCVR_Cnt_EEXV_PID_IntMin;
    }

    /* End of Switch: '<S386>/Switch' */
    /* End of Outputs for SubSystem: '<S385>/integral_term' */

    /* Switch: '<S385>/Switch1' incorporates:
     *  Constant: '<S383>/Calib'
     *  Product: '<S385>/proportional_term'
     *  Sum: '<S385>/Sum_Sub1'
     *  Switch: '<S361>/Switch5'
     *  UnitDelay: '<S385>/UnitDelay'
     *  UnitDelay: '<S385>/UnitDelay1'
     */
    if ((KeRCVR_b_EEXV_CLOnly) || (VeRCVR_b_EEXV_ClsdLpOn))
    {
        /* Switch: '<S361>/Switch2' incorporates:
         *  Constant: '<S380>/Calib'
         *  Constant: '<S382>/Calib'
         */
        if (rtb_UnitDelay_b0)
        {
            rtb_Sum2_ik = KeRCVR_K_EEXV_PID_BattCool_Kp;
        }
        else
        {
            rtb_Sum2_ik = KeRCVR_K_EEXV_PID_Kp;
        }

        /* End of Switch: '<S361>/Switch2' */
        RCVR_ac_DW.UnitDelay1_DSTATE_i = (rtb_Sum1 * rtb_Sum2_ik) +
            RCVR_ac_DW.UnitDelay_DSTATE_fr;
    }

    /* End of Switch: '<S385>/Switch1' */
    /* End of Outputs for SubSystem: '<S361>/PIControl1' */

    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S350>/Calib'
     *  Constant: '<S351>/Calib'
     */
    if (VeRCVR_b_EXV_ClsdLpDeIcing)
    {
        rtb_Sum2_ik = KeRCVR_T_OHX_Out_SCTar_deicing;
    }
    else
    {
        rtb_Sum2_ik = KeRCVR_T_OHX_Out_SCTar_EEXV_SC;
    }

    /* End of Switch: '<S320>/Switch' */

    /* Sum: '<S360>/Sum1' */
    rtb_Sum2_et = rtb_Sum2_ik - rtb_Sum2_et;

    /* Outputs for Atomic SubSystem: '<S360>/EdgeRising' */
    /* Gain: '<S1141>/Gain' incorporates:
     *  UnitDelay: '<S364>/UnitDelay'
     */
    rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_gfq;

    /* Update for UnitDelay: '<S364>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_gfq = VeRCVR_b_EEXV_ClsdLpOn;

    /* Outputs for Atomic SubSystem: '<S360>/PIControl1' */
    /* Switch: '<S372>/Switch' incorporates:
     *  Constant: '<S370>/Calib'
     *  Constant: '<S371>/Calib'
     *  Logic: '<S360>/Logical1'
     *  Logic: '<S364>/AND'
     *  Logic: '<S364>/OR1'
     *  Switch: '<S360>/Switch1'
     *  Switch: '<S372>/Switch2'
     *  UnitDelay: '<S360>/UnitDelay'
     */
    if ((!KeRCVR_b_EEXV_CLOnly_SC) && ((VeRCVR_b_EEXV_ClsdLpOn) && (!rtb_Gain_p)))
    {
        /* Switch: '<S372>/Switch' incorporates:
         *  Constant: '<S365>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_Cnt_EEXV_PID_IntIV_SC;
    }
    else
    {
        if ((KeRCVR_b_EEXV_SC_HoldI_Enbl) && (RCVR_ac_DW.UnitDelay_DSTATE_i1))
        {
            /* Switch: '<S372>/Switch2' incorporates:
             *  Constant: '<S372>/ConstantValue'
             */
            rtb_Sum2_ik = 0.0F;
        }
        else
        {
            /* Switch: '<S372>/Switch2' incorporates:
             *  Constant: '<S360>/ConstantValue'
             *  Constant: '<S368>/Calib'
             *  Product: '<S372>/Multiplication1'
             */
            rtb_Sum2_ik = (rtb_Sum2_et * KeRCVR_K_EEXV_PID_Ki_SC) * 0.025F;
        }

        /* Switch: '<S372>/Switch' incorporates:
         *  Sum: '<S372>/Sum_Sub'
         *  UnitDelay: '<S372>/UnitDelay'
         */
        rtb_Sum2_ik += RCVR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S372>/Switch' */
    /* End of Outputs for SubSystem: '<S360>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S372>/integral_term' */
    /* Switch: '<S373>/Switch1' incorporates:
     *  Constant: '<S366>/Calib'
     *  RelationalOperator: '<S373>/RelationalOperator'
     */
    if (KeRCVR_Cnt_EEXV_PID_IntMax_SC < rtb_Sum2_ik)
    {
        /* Lookup_n-D: '<S1186>/Vector' */
        rtb_Sum2_ik = KeRCVR_Cnt_EEXV_PID_IntMax_SC;
    }

    /* End of Switch: '<S373>/Switch1' */

    /* Switch: '<S373>/Switch' incorporates:
     *  Constant: '<S367>/Calib'
     *  RelationalOperator: '<S373>/RelationalOperator1'
     *  UnitDelay: '<S372>/UnitDelay'
     */
    if (rtb_Sum2_ik > KeRCVR_Cnt_EEXV_PID_IntMin_SC)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_h = rtb_Sum2_ik;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_h = KeRCVR_Cnt_EEXV_PID_IntMin_SC;
    }

    /* End of Switch: '<S373>/Switch' */
    /* End of Outputs for SubSystem: '<S372>/integral_term' */

    /* Switch: '<S372>/Switch1' incorporates:
     *  Constant: '<S369>/Calib'
     *  Constant: '<S370>/Calib'
     *  Product: '<S372>/proportional_term'
     *  Sum: '<S372>/Sum_Sub1'
     *  Switch: '<S360>/Switch5'
     *  UnitDelay: '<S372>/UnitDelay'
     *  UnitDelay: '<S372>/UnitDelay1'
     */
    if ((KeRCVR_b_EEXV_CLOnly_SC) || (VeRCVR_b_EEXV_ClsdLpOn))
    {
        RCVR_ac_DW.UnitDelay1_DSTATE_p = (rtb_Sum2_et * KeRCVR_K_EEXV_PID_Kp_SC)
            + RCVR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S372>/Switch1' */
    /* End of Outputs for SubSystem: '<S360>/PIControl1' */

    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S358>/Calib'
     */
    if (KeRCVR_b_EEXV_UseSH)
    {
        /* Switch: '<S322>/Switch1' incorporates:
         *  UnitDelay: '<S385>/UnitDelay1'
         */
        VeRCVR_Pct_EEXV_PIDSig = RCVR_ac_DW.UnitDelay1_DSTATE_i;
    }
    else
    {
        /* Switch: '<S322>/Switch1' incorporates:
         *  UnitDelay: '<S372>/UnitDelay1'
         */
        VeRCVR_Pct_EEXV_PIDSig = RCVR_ac_DW.UnitDelay1_DSTATE_p;
    }

    /* End of Switch: '<S322>/Switch1' */

    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S388>/Constant'
     *  Constant: '<S389>/Constant'
     *  Constant: '<S390>/Constant'
     *  Logic: '<S324>/Logical1'
     *  Logic: '<S324>/Logical5'
     *  RelationalOperator: '<S324>/Comparison1'
     *  RelationalOperator: '<S324>/Comparison2'
     *  RelationalOperator: '<S324>/Comparison3'
     */
    if ((((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
            CeTHMR_e_HeatPump) && (((((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) ==
            CeTHMR_e_Cab_Cooling) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) ==
            CeTHMR_e_Cab_Cooling_n_Heating)) ||
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lq)))
    {
        /* Switch: '<S312>/Switch1' incorporates:
         *  Constant: '<S318>/Calib'
         */
        VeRCVR_Pct_EEXV_CLnOL_OLCmd = KeRCVR_Pct_EEXV_OpenedPosn;
    }
    else
    {
        /* Switch: '<S312>/Switch1' incorporates:
         *  Constant: '<S313>/Calib'
         */
        VeRCVR_Pct_EEXV_CLnOL_OLCmd = KeRCVR_Pct_EEXV_ClosedPosn;
    }

    /* End of Switch: '<S312>/Switch1' */

    /* Switch: '<S277>/Switch4' incorporates:
     *  Switch: '<S277>/Switch1'
     */
    if (VeRCVR_b_EEXV_ClsdLpOn)
    {
        /* Switch: '<S277>/Switch4' incorporates:
         *  Lookup_n-D: '<S359>/Vector'
         *  Switch: '<S322>/Switch1'
         */
        VeRCVR_Pct_EEXV_CntrlSig = look1_iflf_binlca_16a(VeRCVR_Pct_EEXV_PIDSig,
            ((const float32 *)&(KxRCVR_Pct_EEXV_NonLin_StepToPct[0])), ((const
            float32 *)&(KtRCVR_Pct_EEXV_NonLin_StepToPct[0])), 18U);
    }
    else if (VeRCVR_b_EEXV_HeatPmp_RA_FSRqst)
    {
        /* Switch: '<S277>/Switch1' incorporates:
         *  Constant: '<S315>/Calib'
         *  Switch: '<S277>/Switch4'
         */
        VeRCVR_Pct_EEXV_CntrlSig = KeRCVR_Pct_EEXV_FSPosn;
    }
    else
    {
        /* Switch: '<S277>/Switch4' incorporates:
         *  Switch: '<S277>/Switch1'
         */
        VeRCVR_Pct_EEXV_CntrlSig = VeRCVR_Pct_EEXV_CLnOL_OLCmd;
    }

    /* End of Switch: '<S277>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S311>/GradientLimiter' */
    /* Sum: '<S343>/Sum2' incorporates:
     *  UnitDelay: '<S343>/UnitDelay'
     */
    rtb_Sum1 = VeRCVR_Pct_EEXV_CntrlSig - RCVR_ac_DW.UnitDelay_DSTATE_jb;

    /* Outputs for Atomic SubSystem: '<S343>/Limiter' */
    /* Switch: '<S349>/Switch1' incorporates:
     *  RelationalOperator: '<S349>/RelationalOperator'
     */
    if (rtb_Switch3_i < rtb_Sum1)
    {
        /* Lookup_n-D: '<S1180>/Vector' */
        rtb_Sum1 = rtb_Switch3_i;
    }

    /* End of Switch: '<S349>/Switch1' */

    /* Switch: '<S349>/Switch' incorporates:
     *  RelationalOperator: '<S349>/RelationalOperator1'
     */
    if (rtb_Sum1 > rtb_Sum1_hg)
    {
        rtb_Sum1_hg = rtb_Sum1;
    }

    /* End of Switch: '<S349>/Switch' */
    /* End of Outputs for SubSystem: '<S343>/Limiter' */

    /* Sum: '<S343>/Sum3' incorporates:
     *  UnitDelay: '<S343>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_jb += rtb_Sum1_hg;

    /* End of Outputs for SubSystem: '<S311>/GradientLimiter' */

    /* Switch: '<S277>/Switch2' incorporates:
     *  Constant: '<S310>/Constant'
     *  Constant: '<S344>/Calib'
     *  Logic: '<S311>/Logical1'
     *  RelationalOperator: '<S277>/Comparison2'
     *  Switch: '<S311>/Switch'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) ==
            CePMTR_e_DISBL_All_Thrml)
    {
        /* Switch: '<S277>/Switch2' incorporates:
         *  Constant: '<S314>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_Pct_EEXV_Default;
    }
    else if (((KeRCVR_b_EEXV_UseGrad) || rtb_AND_ijg) || rtb_Switch1_bb)
    {
        /* Switch: '<S311>/Switch' incorporates:
         *  Switch: '<S277>/Switch2'
         *  UnitDelay: '<S343>/UnitDelay'
         */
        rtb_Sum2_ik = RCVR_ac_DW.UnitDelay_DSTATE_jb;
    }
    else
    {
        /* Switch: '<S277>/Switch2' incorporates:
         *  Switch: '<S311>/Switch'
         */
        rtb_Sum2_ik = VeRCVR_Pct_EEXV_CntrlSig;
    }

    /* End of Switch: '<S277>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S277>/Limiter1' */
    /* Switch: '<S319>/Switch1' incorporates:
     *  Constant: '<S316>/Calib'
     *  RelationalOperator: '<S319>/RelationalOperator'
     */
    if (KeRCVR_Pct_EEXV_MaxCmd < rtb_Sum2_ik)
    {
        /* Lookup_n-D: '<S1186>/Vector' */
        rtb_Sum2_ik = KeRCVR_Pct_EEXV_MaxCmd;
    }

    /* End of Switch: '<S319>/Switch1' */

    /* Switch: '<S319>/Switch' incorporates:
     *  Constant: '<S317>/Calib'
     *  RelationalOperator: '<S319>/RelationalOperator1'
     *  UnitDelay: '<S321>/UnitDelay'
     */
    if (rtb_Sum2_ik > KeRCVR_Pct_EEXV_MinCmd)
    {
        RCVR_ac_DW.UnitDelay_DSTATE = rtb_Sum2_ik;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE = KeRCVR_Pct_EEXV_MinCmd;
    }

    /* End of Switch: '<S319>/Switch' */
    /* End of Outputs for SubSystem: '<S277>/Limiter1' */

    /* Switch: '<S357>/Switch2' incorporates:
     *  Constant: '<S358>/Calib'
     *  Switch: '<S357>/Switch3'
     *  UnitDelay: '<S372>/UnitDelay1'
     *  UnitDelay: '<S385>/UnitDelay1'
     */
    if (KeRCVR_b_EEXV_UseSH)
    {
        rtb_Sum2_ik = RCVR_ac_DW.UnitDelay1_DSTATE_i;
    }
    else
    {
        rtb_Sum2_ik = RCVR_ac_DW.UnitDelay1_DSTATE_p;
    }

    /* End of Switch: '<S357>/Switch2' */

    /* Switch: '<S357>/Switch10' incorporates:
     *  Constant: '<S362>/Calib'
     *  Constant: '<S363>/Calib'
     *  Logic: '<S357>/Logical3'
     *  RelationalOperator: '<S357>/Comparison2'
     *  RelationalOperator: '<S357>/Comparison3'
     *  UnitDelay: '<S360>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_i1 = ((rtb_Sum2_ik >=
        KeRCVR_K_EEXV_MaxCmd_AntiWindup) || (rtb_Sum2_ik <=
        KeRCVR_K_EEXV_MinCmd_AntiWindup));

    /* Switch: '<S16>/Switch2' */
    if (VeRCVF_b_EEXV_DVC_Lim_AD)
    {
        /* Switch: '<S16>/Switch2' */
        rtb_Sum2_et = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv;
    }
    else
    {
        /* Switch: '<S16>/Switch2' incorporates:
         *  UnitDelay: '<S321>/UnitDelay'
         */
        rtb_Sum2_et = RCVR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S16>/Switch2' */

    /* RelationalOperator: '<S394>/Comparison15' incorporates:
     *  Constant: '<S413>/Constant'
     */
    rtb_Gain_p = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok) ==
                  CeTAIR_e_EXV_Calibration_Fail);

    /* Outputs for Atomic SubSystem: '<S394>/EdgeRising2' */
    /* Logic: '<S412>/OR1' incorporates:
     *  UnitDelay: '<S412>/UnitDelay'
     */
    rtb_Switch1_bb = !RCVR_ac_DW.UnitDelay_DSTATE_kmt;

    /* Update for UnitDelay: '<S412>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_kmt = rtb_Gain_p;

    /* Switch: '<S394>/Switch2' incorporates:
     *  Constant: '<S394>/ConstantValue12'
     *  Logic: '<S412>/AND'
     *  Sum: '<S394>/Subtraction'
     *  UnitDelay: '<S394>/UnitDelay'
     */
    if (rtb_Gain_p && rtb_Switch1_bb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_hy = (uint16)(((uint32)
            RCVR_ac_DW.UnitDelay_DSTATE_hy) + 1U);
    }

    /* End of Switch: '<S394>/Switch2' */
    /* End of Outputs for SubSystem: '<S394>/EdgeRising2' */

    /* Logic: '<S391>/Logical3' incorporates:
     *  Constant: '<S398>/Constant'
     *  Constant: '<S401>/Calib'
     *  DataStoreRead: '<S391>/DataStoreRead'
     *  Logic: '<S391>/Logical'
     *  Logic: '<S394>/Logical5'
     *  RelationalOperator: '<S391>/Comparison14'
     *  RelationalOperator: '<S391>/Comparison7'
     *  RelationalOperator: '<S394>/Comparison12'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     *  UnitDelay: '<S394>/UnitDelay'
     */
    rtb_Switch1_bb = ((((((uint32)
                          RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c3) ==
                         CeTAIR_e_EXV_Status_Inoperative) || ((((sint32)
                           RCVR_ac_DW.UnitDelay_DSTATE_hy) <= 1) && rtb_Gain_p))
                       || ((((sint32)EeRCVR_Cnt_OEXV_CyclesSncCal) >= ((sint32)
                          KeRCVR_Cnt_OEXV_MaxCycles_SncCal)) &&
                           (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ax)))
                      || (VeRCVF_b_OEXV_CalibStrt_DVC_Lim_AD));

    /* Outputs for Atomic SubSystem: '<S391>/EdgeRising5' */
    /* Logic: '<S397>/AND' incorporates:
     *  Logic: '<S397>/OR1'
     *  UnitDelay: '<S397>/UnitDelay'
     */
    rtb_Gain_p = (rtb_Switch1_bb && (!RCVR_ac_DW.UnitDelay_DSTATE_kpk));

    /* Update for UnitDelay: '<S397>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_kpk = rtb_Switch1_bb;

    /* End of Outputs for SubSystem: '<S391>/EdgeRising5' */

    /* RelationalOperator: '<S393>/Comparison15' incorporates:
     *  Constant: '<S408>/Constant'
     */
    rtb_AND_ijg = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok) ==
                   CeTAIR_e_EXV_Calibration_Taking_Place);

    /* Outputs for Atomic SubSystem: '<S393>/EdgeRising4' */
    /* Logic: '<S407>/AND' incorporates:
     *  Logic: '<S407>/OR1'
     *  UnitDelay: '<S407>/UnitDelay'
     */
    rtb_Switch1_bb = (rtb_AND_ijg && (!RCVR_ac_DW.UnitDelay_DSTATE_lel));

    /* Update for UnitDelay: '<S407>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_lel = rtb_AND_ijg;

    /* End of Outputs for SubSystem: '<S393>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S393>/CountDownResetEnabled' */
    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S403>/ConstantValue'
     *  Constant: '<S409>/Calib'
     *  RelationalOperator: '<S403>/GreaterThan'
     *  Switch: '<S403>/Switch2'
     *  UnitDelay: '<S403>/UnitDelay'
     */
    if (rtb_Switch1_bb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_nf = KeRCVR_Cnt_OEXV_CalibRq_Cntr;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_nf) > 0)
        {
            /* UnitDelay: '<S403>/UnitDelay' incorporates:
             *  Constant: '<S403>/ConstantValue1'
             *  Sum: '<S403>/Subtraction'
             *  Switch: '<S403>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_nf = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_nf) - 1));
        }
    }

    /* End of Switch: '<S403>/Switch1' */

    /* RelationalOperator: '<S403>/GreaterThan1' incorporates:
     *  Constant: '<S403>/ConstantValue2'
     *  UnitDelay: '<S403>/UnitDelay'
     */
    rtb_UnitDelay_b0 = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_nf) > 0);

    /* End of Outputs for SubSystem: '<S393>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S393>/EdgeFalling2' */
    /* Logic: '<S406>/AND' incorporates:
     *  Logic: '<S406>/OR1'
     *  UnitDelay: '<S406>/UnitDelay'
     */
    rtb_AND_ijg = ((!rtb_UnitDelay_b0) && (RCVR_ac_DW.UnitDelay_DSTATE_b1));

    /* Update for UnitDelay: '<S406>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_b1 = rtb_UnitDelay_b0;

    /* End of Outputs for SubSystem: '<S393>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S393>/CountDownResetEnabled1' */
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S404>/ConstantValue'
     *  Constant: '<S410>/Calib'
     *  RelationalOperator: '<S404>/GreaterThan'
     *  Switch: '<S404>/Switch2'
     *  UnitDelay: '<S404>/UnitDelay'
     */
    if (rtb_Gain_p)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_bx = KeRCVR_Cnt_OEXV_CalibRq_RstCntr;
    }
    else
    {
        if (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_bx) > 0)
        {
            /* UnitDelay: '<S404>/UnitDelay' incorporates:
             *  Constant: '<S404>/ConstantValue1'
             *  Sum: '<S404>/Subtraction'
             *  Switch: '<S404>/Switch2'
             */
            RCVR_ac_DW.UnitDelay_DSTATE_bx = (uint16)((sint32)(((sint32)
                RCVR_ac_DW.UnitDelay_DSTATE_bx) - 1));
        }
    }

    /* End of Switch: '<S404>/Switch1' */

    /* RelationalOperator: '<S404>/GreaterThan1' incorporates:
     *  Constant: '<S404>/ConstantValue2'
     *  UnitDelay: '<S404>/UnitDelay'
     */
    rtb_UnitDelay_b0 = (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_bx) > 0);

    /* End of Outputs for SubSystem: '<S393>/CountDownResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S393>/EdgeFalling1' */
    /* Logic: '<S405>/AND' incorporates:
     *  Logic: '<S405>/OR1'
     *  UnitDelay: '<S405>/UnitDelay'
     */
    rtb_Switch3_hs = ((!rtb_UnitDelay_b0) && (RCVR_ac_DW.UnitDelay_DSTATE_iz));

    /* Update for UnitDelay: '<S405>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_iz = rtb_UnitDelay_b0;

    /* End of Outputs for SubSystem: '<S393>/EdgeFalling1' */

    /* Switch: '<S393>/Switch3' incorporates:
     *  Constant: '<S411>/Calib'
     */
    if (KeRCVR_b_OEXV_CalibRq_DelayEnbl)
    {
        rtb_Switch1_bb = rtb_AND_ijg;
    }

    /* Outputs for Atomic SubSystem: '<S391>/SignalLatchOnWithReset1' */
    /* Logic: '<S402>/OR1' incorporates:
     *  Logic: '<S393>/Logical13'
     *  Logic: '<S402>/NOT'
     *  Logic: '<S402>/OR'
     *  Switch: '<S393>/Switch3'
     *  UnitDelay: '<S402>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_pfg = (rtb_Gain_p || (((!rtb_Switch1_bb) &&
        (!rtb_Switch3_hs)) && (RCVR_ac_DW.UnitDelay_DSTATE_pfg)));

    /* End of Outputs for SubSystem: '<S391>/SignalLatchOnWithReset1' */

    /* Switch: '<S391>/Switch1' incorporates:
     *  UnitDelay: '<S402>/UnitDelay'
     */
    if (RCVR_ac_DW.UnitDelay_DSTATE_pfg)
    {
        /* Switch: '<S391>/Switch1' incorporates:
         *  Constant: '<S399>/Constant'
         */
        rtb_Switch1_avh = CeRCVR_e_EXV_Dual_Pstn_Calibration;
    }
    else
    {
        /* Switch: '<S391>/Switch1' incorporates:
         *  Constant: '<S400>/Constant'
         */
        rtb_Switch1_avh = CeRCVR_e_EXV_No_Calibration;
    }

    /* End of Switch: '<S391>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S395>/SignalLatchOnWithReset2' */
    /* Logic: '<S418>/OR1' incorporates:
     *  Constant: '<S415>/Constant'
     *  Delay: '<S395>/Integer Delay'
     *  Logic: '<S418>/NOT'
     *  Logic: '<S418>/OR'
     *  RelationalOperator: '<S395>/Comparison2'
     *  UnitDelay: '<S418>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_g1i = ((((uint32)rtb_Switch1_avh) ==
        CeRCVR_e_EXV_Dual_Pstn_Calibration) ||
        ((!RCVR_ac_DW.IntegerDelay_DSTATE_e) && (RCVR_ac_DW.UnitDelay_DSTATE_g1i)));

    /* End of Outputs for SubSystem: '<S395>/SignalLatchOnWithReset2' */

    /* RelationalOperator: '<S395>/Comparison3' incorporates:
     *  Constant: '<S416>/Constant'
     */
    rtb_Gain_p = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok) ==
                  CeTAIR_e_EXV_Calibration_Complete);

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising3' */
    /* Logic: '<S414>/OR1' incorporates:
     *  UnitDelay: '<S414>/UnitDelay'
     */
    rtb_Switch1_bb = !RCVR_ac_DW.UnitDelay_DSTATE_px;

    /* Update for UnitDelay: '<S414>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_px = rtb_Gain_p;

    /* Logic: '<S395>/Logical7' incorporates:
     *  Delay: '<S395>/Integer Delay'
     *  Logic: '<S414>/AND'
     *  UnitDelay: '<S418>/UnitDelay'
     */
    RCVR_ac_DW.IntegerDelay_DSTATE_e = ((RCVR_ac_DW.UnitDelay_DSTATE_g1i) &&
        (rtb_Gain_p && rtb_Switch1_bb));

    /* End of Outputs for SubSystem: '<S395>/EdgeRising3' */

    /* If: '<S395>/If' incorporates:
     *  Delay: '<S395>/Integer Delay'
     */
    if (RCVR_ac_DW.IntegerDelay_DSTATE_e)
    {
        /* Outputs for IfAction SubSystem: '<S395>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S417>/ActionPort'
         */
        /* DataStoreWrite: '<S417>/DataStoreWrite' incorporates:
         *  Constant: '<S417>/ConstantValue'
         */
        EeRCVR_Cnt_OEXV_CyclesSncCal = 0;

        /* End of Outputs for SubSystem: '<S395>/IfActionSubsystem' */
    }

    /* End of If: '<S395>/If' */

    /* Outputs for Atomic SubSystem: '<S396>/EdgeRising' */
    /* Logic: '<S419>/OR1' incorporates:
     *  UnitDelay: '<S419>/UnitDelay'
     */
    rtb_Gain_p = !RCVR_ac_DW.UnitDelay_DSTATE_foc;

    /* Update for UnitDelay: '<S419>/UnitDelay' incorporates:
     *  Constant: '<S396>/TRUEConstant'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_foc = true;

    /* If: '<S396>/If1' incorporates:
     *  Logic: '<S419>/AND'
     */
    if (rtb_Gain_p)
    {
        /* Outputs for IfAction SubSystem: '<S396>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S420>/ActionPort'
         */
        /* Sum: '<S420>/Sum' incorporates:
         *  Constant: '<S420>/ConstantValue'
         *  DataStoreRead: '<S396>/DataStoreRead1'
         *  DataStoreWrite: '<S420>/DataStoreWrite'
         */
        EeRCVR_Cnt_OEXV_CyclesSncCal = (sint16)(EeRCVR_Cnt_OEXV_CyclesSncCal + 1);

        /* End of Outputs for SubSystem: '<S396>/IfActionSubsystem1' */
    }

    /* End of If: '<S396>/If1' */
    /* End of Outputs for SubSystem: '<S396>/EdgeRising' */

    /* Switch: '<S421>/Switch' incorporates:
     *  Constant: '<S435>/Calib'
     *  Constant: '<S437>/Constant1'
     *  Constant: '<S437>/Constant2'
     *  Constant: '<S438>/Constant1'
     *  Constant: '<S438>/Constant2'
     *  Constant: '<S439>/Constant1'
     *  Constant: '<S439>/Constant2'
     *  DataStoreRead: '<S437>/StatusByte_AC_RefrigPresSnsrALo'
     *  DataStoreRead: '<S438>/StatusByte_AC_RefrigPresSnsrAHi'
     *  DataStoreRead: '<S439>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  Logic: '<S421>/Logical1'
     *  Logic: '<S421>/Logical5'
     *  Logic: '<S437>/Logical Operator'
     *  Logic: '<S438>/Logical Operator'
     *  Logic: '<S439>/Logical Operator'
     *  RelationalOperator: '<S437>/Relational Operator1'
     *  RelationalOperator: '<S437>/Relational Operator2'
     *  RelationalOperator: '<S438>/Relational Operator1'
     *  RelationalOperator: '<S438>/Relational Operator2'
     *  RelationalOperator: '<S439>/Relational Operator1'
     *  RelationalOperator: '<S439>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S437>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S437>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S438>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S438>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S439>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S439>/Bitwise Operator2'
     */
    if ((((((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 1U) != 0U) &&
           ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 64U) == 0U))
          || (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 1U) != 0U)
              && ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 64U) ==
                  0U))) || (((((uint32)
                               RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf) &
                              1U) != 0U) && ((((uint32)
             RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf) & 64U) == 0U))) &&
            (KeRCVR_b_OEXV_HiPresSensSwapRAEn))
    {
        rtb_Sum2_ik = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;
    }
    else
    {
        rtb_Sum2_ik = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ol;
    }

    /* End of Switch: '<S421>/Switch' */

    /* Sum: '<S421>/Sum1' incorporates:
     *  Lookup_n-D: '<S436>/Vector'
     */
    VeRCVR_T_OEXV_SCActual = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_es
        - look1_iflf_binlca_16a(rtb_Sum2_ik, ((const float32 *)
        &(KxRCVR_T_RefPT_OEXV_Table[0])), ((const float32 *)
        &(KtRCVR_T_RefPT_OEXV_Table[0])), 29U);

    /* Logic: '<S432>/Logical15' incorporates:
     *  Constant: '<S478>/Calib'
     *  Constant: '<S479>/Constant1'
     *  Constant: '<S479>/Constant2'
     *  Constant: '<S480>/Constant1'
     *  Constant: '<S480>/Constant2'
     *  Constant: '<S481>/Constant1'
     *  Constant: '<S481>/Constant2'
     *  Constant: '<S482>/Constant1'
     *  Constant: '<S482>/Constant2'
     *  Constant: '<S483>/Constant1'
     *  Constant: '<S483>/Constant2'
     *  Constant: '<S484>/Constant1'
     *  Constant: '<S484>/Constant2'
     *  Constant: '<S485>/Constant1'
     *  Constant: '<S485>/Constant2'
     *  Constant: '<S486>/Constant1'
     *  Constant: '<S486>/Constant2'
     *  DataStoreRead: '<S479>/StatusByte_AC_RefrigTempSnsr5CktPerf'
     *  DataStoreRead: '<S480>/StatusByte_AC_RefrigPresSnsrDCktPerf'
     *  DataStoreRead: '<S481>/StatusByte_AC_RefrigTempSnsr4CktPerf'
     *  DataStoreRead: '<S482>/StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     *  DataStoreRead: '<S483>/StatusByte_AC_RefrigTempSnsr5CktShotoGro'
     *  DataStoreRead: '<S484>/StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     *  DataStoreRead: '<S485>/StatusByte_AC_RefrigTempSnsrDCkt'
     *  DataStoreRead: '<S486>/StatusByte_AC_RefrigPresSnsrDCkt'
     *  Logic: '<S432>/Logical5'
     *  Logic: '<S479>/Logical Operator'
     *  Logic: '<S480>/Logical Operator'
     *  Logic: '<S481>/Logical Operator'
     *  Logic: '<S482>/Logical Operator'
     *  Logic: '<S483>/Logical Operator'
     *  Logic: '<S484>/Logical Operator'
     *  Logic: '<S485>/Logical Operator'
     *  Logic: '<S486>/Logical Operator'
     *  RelationalOperator: '<S479>/Relational Operator1'
     *  RelationalOperator: '<S479>/Relational Operator2'
     *  RelationalOperator: '<S480>/Relational Operator1'
     *  RelationalOperator: '<S480>/Relational Operator2'
     *  RelationalOperator: '<S481>/Relational Operator1'
     *  RelationalOperator: '<S481>/Relational Operator2'
     *  RelationalOperator: '<S482>/Relational Operator1'
     *  RelationalOperator: '<S482>/Relational Operator2'
     *  RelationalOperator: '<S483>/Relational Operator1'
     *  RelationalOperator: '<S483>/Relational Operator2'
     *  RelationalOperator: '<S484>/Relational Operator1'
     *  RelationalOperator: '<S484>/Relational Operator2'
     *  RelationalOperator: '<S485>/Relational Operator1'
     *  RelationalOperator: '<S485>/Relational Operator2'
     *  RelationalOperator: '<S486>/Relational Operator1'
     *  RelationalOperator: '<S486>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S479>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S479>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S480>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S480>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S481>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S481>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S483>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S483>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S484>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S484>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S485>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S485>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S486>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S486>/Bitwise Operator2'
     */
    VeRCVR_b_OEXV_HeatPmp_RA_FSRqst = ((KeRCVR_b_OEXV_HeatPmp_RA_Enbl) &&
        ((((((((((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktPerf) & 1U)
                 != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktPerf) & 64U) == 0U)) ||
               (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrDCktPerf) & 1U)
                 != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrDCktPerf) & 64U) == 0U))) ||
              (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr4CktPerf) & 1U)
                != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr4CktPerf) & 64U) == 0U))) ||
             (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP) &
                1U) != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP) & 64U) == 0U))) ||
            (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoGro) &
               1U) != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoGro) & 64U) == 0U))) ||
           (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoBat) & 1U)
             != 0U) && ((((uint32)
                          RCVR_ac_DW.StatusByte_AC_RefrigTempSnsr5CktShotoBat) &
                         64U) == 0U))) || (((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrDCkt) & 1U) != 0U) && ((((uint32)
        RCVR_ac_DW.StatusByte_AC_RefrigTempSnsrDCkt) & 64U) == 0U))) ||
         (((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrDCkt) & 1U) != 0U) &&
          ((((uint32)RCVR_ac_DW.StatusByte_AC_RefrigPresSnsrDCkt) & 64U) == 0U))));

    /* Logic: '<S422>/Logical1' incorporates:
     *  Constant: '<S440>/Constant'
     *  Logic: '<S422>/Logical5'
     *  RelationalOperator: '<S422>/Comparison2'
     */
    VeRCVR_b_OEXV_ClsdLpOn = ((((uint32)
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) == CeTHMR_e_HeatPump)
        && (!VeRCVR_b_OEXV_HeatPmp_RA_FSRqst));

    /* Switch: '<S487>/Switch1' incorporates:
     *  Constant: '<S489>/Calib'
     *  Constant: '<S490>/Calib'
     *  Logic: '<S433>/Logical1'
     *  Logic: '<S433>/Logical3'
     *  Switch: '<S433>/Switch2'
     */
    if (((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_caa) ||
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_l2)) ||
            (KeRCVR_b_OEXV_SC_Table_Ovrd))
    {
        /* Switch: '<S487>/Switch1' incorporates:
         *  Constant: '<S488>/Calib'
         */
        VeRCVR_T_OEXV_SCTar = KeRCVR_T_OEXV_SC_MinTgt;
    }
    else
    {
        if (KeRCVR_b_HCCTIS_Tgt_Slct)
        {
            /* Switch: '<S433>/Switch2' incorporates:
             *  Constant: '<S433>/Constant'
             */
            rtb_Sum2_ik = 0.0F;
        }
        else
        {
            /* Switch: '<S433>/Switch2' */
            rtb_Sum2_ik = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kl;
        }

        /* Switch: '<S487>/Switch1' incorporates:
         *  Lookup_n-D: '<S491>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
         *  Sum: '<S433>/Sum2'
         */
        VeRCVR_T_OEXV_SCTar = look2_iflf_binlca_16a
            (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n - rtb_Sum2_ik,
             RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ik, ((const float32
               *)&(KxRCVR_T_OEXV_SubCool[0])), ((const float32 *)
              &(KyRCVR_T_OEXV_SubCool[0])), ((const float32 *)
              &(KtRCVR_T_OEXV_SubCool[0])), RCVR_ac_ConstP.pooled6, 10U);
    }

    /* End of Switch: '<S487>/Switch1' */

    /* Sum: '<S443>/Sum1' */
    rtb_Sum1 = VeRCVR_T_OEXV_SCTar - VeRCVR_T_OEXV_SCActual;

    /* RelationalOperator: '<S443>/RelationalOperator' incorporates:
     *  Constant: '<S447>/Constant'
     */
    rtb_Switch1_bb = (((uint32)
                       RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1) ==
                      CeTHMR_e_Cab_Cooling_n_Heating);

    /* Outputs for Atomic SubSystem: '<S443>/EdgeRising' */
    /* Gain: '<S1141>/Gain' incorporates:
     *  UnitDelay: '<S446>/UnitDelay'
     */
    rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_gn;

    /* Update for UnitDelay: '<S446>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_gn = VeRCVR_b_OEXV_ClsdLpOn;

    /* Outputs for Atomic SubSystem: '<S443>/PIControl1' */
    /* Switch: '<S457>/Switch' incorporates:
     *  Constant: '<S455>/Calib'
     *  Constant: '<S456>/Calib'
     *  Logic: '<S443>/Logical1'
     *  Logic: '<S446>/AND'
     *  Logic: '<S446>/OR1'
     *  Switch: '<S443>/Switch1'
     *  Switch: '<S443>/Switch3'
     *  Switch: '<S457>/Switch2'
     *  UnitDelay: '<S443>/UnitDelay'
     */
    if ((!KeRCVR_b_OEXV_CLOnly_SC) && ((VeRCVR_b_OEXV_ClsdLpOn) && (!rtb_Gain_p)))
    {
        /* Switch: '<S457>/Switch' incorporates:
         *  Constant: '<S448>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_Cnt_OEXV_PID_IntIV_SC;
    }
    else
    {
        if ((KeRCVR_b_OEXV_SC_HoldI_Enbl) && (RCVR_ac_DW.UnitDelay_DSTATE_fc))
        {
            /* Switch: '<S457>/Switch2' incorporates:
             *  Constant: '<S457>/ConstantValue'
             */
            rtb_Sum2_ik = 0.0F;
        }
        else
        {
            if (rtb_Switch1_bb)
            {
                /* Switch: '<S443>/Switch3' incorporates:
                 *  Constant: '<S452>/Calib'
                 *  Switch: '<S457>/Switch2'
                 */
                rtb_Sum2_ik = KeRCVR_K_OEXV_PID_Ki_blending_SC;
            }
            else
            {
                /* Switch: '<S443>/Switch3' incorporates:
                 *  Constant: '<S451>/Calib'
                 *  Switch: '<S457>/Switch2'
                 */
                rtb_Sum2_ik = KeRCVR_K_OEXV_PID_Ki_SC;
            }

            /* Switch: '<S457>/Switch2' incorporates:
             *  Constant: '<S443>/ConstantValue'
             *  Product: '<S457>/Multiplication1'
             */
            rtb_Sum2_ik = (rtb_Sum1 * rtb_Sum2_ik) * 0.025F;
        }

        /* Switch: '<S457>/Switch' incorporates:
         *  Sum: '<S457>/Sum_Sub'
         *  Switch: '<S443>/Switch3'
         *  Switch: '<S457>/Switch2'
         *  UnitDelay: '<S457>/UnitDelay'
         */
        rtb_Sum2_ik += RCVR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* End of Switch: '<S457>/Switch' */
    /* End of Outputs for SubSystem: '<S443>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S457>/integral_term' */
    /* Switch: '<S458>/Switch1' incorporates:
     *  Constant: '<S449>/Calib'
     *  RelationalOperator: '<S458>/RelationalOperator'
     */
    if (KeRCVR_Cnt_OEXV_PID_IntMax_SC < rtb_Sum2_ik)
    {
        /* Lookup_n-D: '<S1186>/Vector' */
        rtb_Sum2_ik = KeRCVR_Cnt_OEXV_PID_IntMax_SC;
    }

    /* End of Switch: '<S458>/Switch1' */

    /* Switch: '<S458>/Switch' incorporates:
     *  Constant: '<S450>/Calib'
     *  RelationalOperator: '<S458>/RelationalOperator1'
     *  UnitDelay: '<S457>/UnitDelay'
     */
    if (rtb_Sum2_ik > KeRCVR_Cnt_OEXV_PID_IntMin_SC)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_n = rtb_Sum2_ik;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_n = KeRCVR_Cnt_OEXV_PID_IntMin_SC;
    }

    /* End of Switch: '<S458>/Switch' */
    /* End of Outputs for SubSystem: '<S457>/integral_term' */

    /* Switch: '<S457>/Switch1' incorporates:
     *  Constant: '<S455>/Calib'
     *  Product: '<S457>/proportional_term'
     *  Sum: '<S457>/Sum_Sub1'
     *  Switch: '<S443>/Switch5'
     *  UnitDelay: '<S457>/UnitDelay'
     *  UnitDelay: '<S457>/UnitDelay1'
     */
    if ((KeRCVR_b_OEXV_CLOnly_SC) || (VeRCVR_b_OEXV_ClsdLpOn))
    {
        /* Switch: '<S443>/Switch2' incorporates:
         *  Constant: '<S453>/Calib'
         *  Constant: '<S454>/Calib'
         */
        if (rtb_Switch1_bb)
        {
            rtb_Sum2_ik = KeRCVR_K_OEXV_PID_Kp_blending_SC;
        }
        else
        {
            rtb_Sum2_ik = KeRCVR_K_OEXV_PID_Kp_SC;
        }

        /* End of Switch: '<S443>/Switch2' */
        RCVR_ac_DW.UnitDelay1_DSTATE_h = (rtb_Sum1 * rtb_Sum2_ik) +
            RCVR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* End of Switch: '<S457>/Switch1' */
    /* End of Outputs for SubSystem: '<S443>/PIControl1' */

    /* Sum: '<S444>/Sum1' */
    rtb_Switch1 -= VeRCVR_T_EXV_SHActual;

    /* Outputs for Atomic SubSystem: '<S444>/EdgeRising' */
    /* Gain: '<S1141>/Gain' incorporates:
     *  UnitDelay: '<S459>/UnitDelay'
     */
    rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_gv;

    /* Update for UnitDelay: '<S459>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_gv = VeRCVR_b_OEXV_ClsdLpOn;

    /* Outputs for Atomic SubSystem: '<S444>/PIControl1' */
    /* Switch: '<S467>/Switch' incorporates:
     *  Constant: '<S465>/Calib'
     *  Constant: '<S466>/Calib'
     *  Logic: '<S444>/Logical1'
     *  Logic: '<S459>/AND'
     *  Logic: '<S459>/OR1'
     *  Switch: '<S444>/Switch1'
     *  Switch: '<S467>/Switch2'
     *  UnitDelay: '<S444>/UnitDelay'
     */
    if ((!KeRCVR_b_OEXV_CLOnly) && ((VeRCVR_b_OEXV_ClsdLpOn) && (!rtb_Gain_p)))
    {
        /* Switch: '<S467>/Switch' incorporates:
         *  Constant: '<S460>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_Cnt_OEXV_PID_IntIV;
    }
    else
    {
        if ((KeRCVR_b_OEXV_SH_HoldI_Enbl) && (RCVR_ac_DW.UnitDelay_DSTATE_nx))
        {
            /* Switch: '<S467>/Switch2' incorporates:
             *  Constant: '<S467>/ConstantValue'
             */
            rtb_Sum2_ik = 0.0F;
        }
        else
        {
            /* Switch: '<S467>/Switch2' incorporates:
             *  Constant: '<S444>/ConstantValue'
             *  Constant: '<S463>/Calib'
             *  Product: '<S467>/Multiplication1'
             */
            rtb_Sum2_ik = (rtb_Switch1 * KeRCVR_K_OEXV_PID_Ki) * 0.025F;
        }

        /* Switch: '<S467>/Switch' incorporates:
         *  Sum: '<S467>/Sum_Sub'
         *  UnitDelay: '<S467>/UnitDelay'
         */
        rtb_Sum2_ik += RCVR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S467>/Switch' */
    /* End of Outputs for SubSystem: '<S444>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S467>/integral_term' */
    /* Switch: '<S468>/Switch1' incorporates:
     *  Constant: '<S461>/Calib'
     *  RelationalOperator: '<S468>/RelationalOperator'
     */
    if (KeRCVR_Cnt_OEXV_PID_IntMax < rtb_Sum2_ik)
    {
        /* Lookup_n-D: '<S1186>/Vector' */
        rtb_Sum2_ik = KeRCVR_Cnt_OEXV_PID_IntMax;
    }

    /* End of Switch: '<S468>/Switch1' */

    /* Switch: '<S468>/Switch' incorporates:
     *  Constant: '<S462>/Calib'
     *  RelationalOperator: '<S468>/RelationalOperator1'
     *  UnitDelay: '<S467>/UnitDelay'
     */
    if (rtb_Sum2_ik > KeRCVR_Cnt_OEXV_PID_IntMin)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_o = rtb_Sum2_ik;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_o = KeRCVR_Cnt_OEXV_PID_IntMin;
    }

    /* End of Switch: '<S468>/Switch' */
    /* End of Outputs for SubSystem: '<S467>/integral_term' */

    /* Switch: '<S467>/Switch1' incorporates:
     *  Constant: '<S464>/Calib'
     *  Constant: '<S465>/Calib'
     *  Product: '<S467>/proportional_term'
     *  Sum: '<S467>/Sum_Sub1'
     *  Switch: '<S444>/Switch5'
     *  UnitDelay: '<S467>/UnitDelay'
     *  UnitDelay: '<S467>/UnitDelay1'
     */
    if ((KeRCVR_b_OEXV_CLOnly) || (VeRCVR_b_OEXV_ClsdLpOn))
    {
        RCVR_ac_DW.UnitDelay1_DSTATE = (rtb_Switch1 * KeRCVR_K_OEXV_PID_Kp) +
            RCVR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S467>/Switch1' */
    /* End of Outputs for SubSystem: '<S444>/PIControl1' */

    /* Switch: '<S423>/Switch1' incorporates:
     *  Constant: '<S441>/Calib'
     *  Switch: '<S445>/Switch2'
     *  Switch: '<S445>/Switch3'
     *  UnitDelay: '<S457>/UnitDelay1'
     *  UnitDelay: '<S467>/UnitDelay1'
     */
    if (KeRCVR_b_OEXV_UseSC)
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  UnitDelay: '<S457>/UnitDelay1'
         */
        VeRCVR_Pct_OEXV_PIDSig = RCVR_ac_DW.UnitDelay1_DSTATE_h;
        rtb_Sum2_ik = RCVR_ac_DW.UnitDelay1_DSTATE_h;
    }
    else
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  UnitDelay: '<S467>/UnitDelay1'
         */
        VeRCVR_Pct_OEXV_PIDSig = RCVR_ac_DW.UnitDelay1_DSTATE;
        rtb_Sum2_ik = RCVR_ac_DW.UnitDelay1_DSTATE;
    }

    /* End of Switch: '<S423>/Switch1' */

    /* Switch: '<S445>/Switch10' incorporates:
     *  Constant: '<S469>/Calib'
     *  Constant: '<S470>/Calib'
     *  Logic: '<S445>/Logical3'
     *  RelationalOperator: '<S445>/Comparison2'
     *  RelationalOperator: '<S445>/Comparison3'
     *  UnitDelay: '<S444>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_nx = ((rtb_Sum2_ik >=
        KeRCVR_K_OEXV_MaxCmd_AntiWindup) || (rtb_Sum2_ik <=
        KeRCVR_K_OEXV_MinCmd_AntiWindup));

    /* Outputs for Atomic SubSystem: '<S434>/EdgeRising' */
    /* Gain: '<S1141>/Gain' incorporates:
     *  UnitDelay: '<S492>/UnitDelay'
     */
    rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_gt;

    /* Update for UnitDelay: '<S492>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_gt = VeRCVR_b_OEXV_ClsdLpOn;

    /* End of Outputs for SubSystem: '<S434>/EdgeRising' */

    /* RelationalOperator: '<S434>/Comparison3' incorporates:
     *  Constant: '<S494>/Calib'
     */
    rtb_Switch1_bb = (VeRCVR_Pct_OEXV_PosRq_B4D <=
                      KeRCVR_Pct_OEXV_PctB4_SlowRamp);

    /* Outputs for Atomic SubSystem: '<S434>/EdgeRising1' */
    /* Logic: '<S493>/AND' incorporates:
     *  Logic: '<S493>/OR1'
     *  UnitDelay: '<S493>/UnitDelay'
     */
    rtb_AND_ijg = (rtb_Switch1_bb && (!RCVR_ac_DW.UnitDelay_DSTATE_i4));

    /* Update for UnitDelay: '<S493>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_i4 = rtb_Switch1_bb;

    /* End of Outputs for SubSystem: '<S434>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S434>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S434>/EdgeRising' */
    /* Logic: '<S496>/OR1' incorporates:
     *  Constant: '<S494>/Calib'
     *  Logic: '<S434>/Logical1'
     *  Logic: '<S492>/AND'
     *  Logic: '<S492>/OR1'
     *  Logic: '<S496>/NOT'
     *  Logic: '<S496>/OR'
     *  RelationalOperator: '<S434>/Comparison1'
     *  UnitDelay: '<S496>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_le = ((((VeRCVR_b_OEXV_ClsdLpOn) && (!rtb_Gain_p))
        || rtb_AND_ijg) || ((VeRCVR_Pct_OEXV_PosRq_B4D <=
        KeRCVR_Pct_OEXV_PctB4_SlowRamp) && (RCVR_ac_DW.UnitDelay_DSTATE_le)));

    /* End of Outputs for SubSystem: '<S434>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S434>/SignalLatchOnWithReset' */

    /* Logic: '<S434>/Logical' incorporates:
     *  Constant: '<S495>/Calib'
     *  UnitDelay: '<S496>/UnitDelay'
     */
    rtb_Gain_p = ((RCVR_ac_DW.UnitDelay_DSTATE_le) &&
                  (KeRCVR_b_OEXV_Quick_Open_Enbl));

    /* Switch: '<S425>/Switch1' */
    if (rtb_Gain_p)
    {
        /* Switch: '<S425>/Switch1' incorporates:
         *  Constant: '<S476>/Calib'
         */
        rtb_Switch1 = KeRCVR_dPct_OEXV_RampUpRate_Quik;
    }
    else
    {
        /* Switch: '<S425>/Switch1' incorporates:
         *  Constant: '<S475>/Calib'
         */
        rtb_Switch1 = KeRCVR_dPct_OEXV_RampUpRate;
    }

    /* End of Switch: '<S425>/Switch1' */

    /* Logic: '<S425>/Logical2' */
    rtb_Switch1_bb = !VeRCVR_b_OEXV_ClsdLpOn;

    /* Switch: '<S425>/Switch3' */
    if (rtb_Switch1_bb)
    {
        /* Switch: '<S425>/Switch3' incorporates:
         *  Constant: '<S474>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_dPct_OEXV_RampDownRate_Slw;
    }
    else
    {
        /* Switch: '<S425>/Switch3' incorporates:
         *  Constant: '<S473>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_dPct_OEXV_RampDownRate;
    }

    /* End of Switch: '<S425>/Switch3' */

    /* Switch: '<S392>/Switch' incorporates:
     *  Switch: '<S392>/Switch1'
     */
    if (VeRCVR_b_OEXV_ClsdLpOn)
    {
        /* Switch: '<S392>/Switch' incorporates:
         *  Lookup_n-D: '<S442>/Vector'
         *  Switch: '<S423>/Switch1'
         */
        VeRCVR_Pct_OEXV_CntrlSig = look1_iflf_binlca_16a(VeRCVR_Pct_OEXV_PIDSig,
            ((const float32 *)&(KxRCVR_Pct_OEXV_NonLin_StepToPct[0])), ((const
            float32 *)&(KtRCVR_Pct_OEXV_NonLin_StepToPct[0])), 18U);
    }
    else if (VeRCVR_b_OEXV_HeatPmp_RA_FSRqst)
    {
        /* Switch: '<S392>/Switch1' incorporates:
         *  Constant: '<S427>/Calib'
         *  Switch: '<S392>/Switch'
         */
        VeRCVR_Pct_OEXV_CntrlSig = KeRCVR_Pct_OEXV_FSPosn;
    }
    else
    {
        /* Switch: '<S392>/Switch' incorporates:
         *  Constant: '<S430>/Calib'
         *  Switch: '<S392>/Switch1'
         */
        VeRCVR_Pct_OEXV_CntrlSig = KeRCVR_Pct_OEXV_OpenedPosn;
    }

    /* End of Switch: '<S392>/Switch' */

    /* Outputs for Atomic SubSystem: '<S425>/GradientLimiter' */
    /* Sum: '<S471>/Sum2' incorporates:
     *  UnitDelay: '<S471>/UnitDelay'
     */
    rtb_Sum1 = VeRCVR_Pct_OEXV_CntrlSig - RCVR_ac_DW.UnitDelay_DSTATE_f;

    /* Outputs for Atomic SubSystem: '<S471>/Limiter' */
    /* Switch: '<S477>/Switch1' incorporates:
     *  RelationalOperator: '<S477>/RelationalOperator'
     */
    if (rtb_Switch1 < rtb_Sum1)
    {
        /* Lookup_n-D: '<S1180>/Vector' */
        rtb_Sum1 = rtb_Switch1;
    }

    /* End of Switch: '<S477>/Switch1' */

    /* Switch: '<S477>/Switch' incorporates:
     *  RelationalOperator: '<S477>/RelationalOperator1'
     */
    if (rtb_Sum1 > rtb_Sum2_ik)
    {
        rtb_Sum2_ik = rtb_Sum1;
    }

    /* End of Switch: '<S477>/Switch' */
    /* End of Outputs for SubSystem: '<S471>/Limiter' */

    /* Sum: '<S471>/Sum3' incorporates:
     *  UnitDelay: '<S471>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_f += rtb_Sum2_ik;

    /* End of Outputs for SubSystem: '<S425>/GradientLimiter' */

    /* Switch: '<S392>/Switch2' incorporates:
     *  Constant: '<S424>/Constant'
     *  Constant: '<S472>/Calib'
     *  Logic: '<S425>/Logical1'
     *  RelationalOperator: '<S392>/Comparison2'
     *  Switch: '<S425>/Switch'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) ==
            CePMTR_e_DISBL_All_Thrml)
    {
        /* Switch: '<S392>/Switch2' incorporates:
         *  Constant: '<S426>/Calib'
         */
        rtb_Sum2_ik = KeRCVR_Pct_OEXV_Default;
    }
    else if (((KeRCVR_b_OEXV_UseGrad) || rtb_Switch1_bb) || rtb_Gain_p)
    {
        /* Switch: '<S425>/Switch' incorporates:
         *  Switch: '<S392>/Switch2'
         *  UnitDelay: '<S471>/UnitDelay'
         */
        rtb_Sum2_ik = RCVR_ac_DW.UnitDelay_DSTATE_f;
    }
    else
    {
        /* Switch: '<S392>/Switch2' incorporates:
         *  Switch: '<S425>/Switch'
         */
        rtb_Sum2_ik = VeRCVR_Pct_OEXV_CntrlSig;
    }

    /* End of Switch: '<S392>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S392>/Limiter' */
    /* Switch: '<S431>/Switch1' incorporates:
     *  Constant: '<S428>/Calib'
     *  RelationalOperator: '<S431>/RelationalOperator'
     */
    if (KeRCVR_Pct_OEXV_MaxCmd < rtb_Sum2_ik)
    {
        /* Lookup_n-D: '<S1186>/Vector' */
        rtb_Sum2_ik = KeRCVR_Pct_OEXV_MaxCmd;
    }

    /* End of Switch: '<S431>/Switch1' */

    /* Switch: '<S431>/Switch' incorporates:
     *  Constant: '<S429>/Calib'
     *  RelationalOperator: '<S431>/RelationalOperator1'
     */
    if (rtb_Sum2_ik > KeRCVR_Pct_OEXV_MinCmd)
    {
        /* Switch: '<S431>/Switch' */
        VeRCVR_Pct_OEXV_PosRq_B4D = rtb_Sum2_ik;
    }
    else
    {
        /* Switch: '<S431>/Switch' */
        VeRCVR_Pct_OEXV_PosRq_B4D = KeRCVR_Pct_OEXV_MinCmd;
    }

    /* End of Switch: '<S431>/Switch' */
    /* End of Outputs for SubSystem: '<S392>/Limiter' */

    /* Switch: '<S23>/Switch2' */
    if (VeRCVF_b_OEXV_DVC_Lim_AD)
    {
        /* Switch: '<S23>/Switch2' */
        rtb_Switch1 = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dg;
    }
    else
    {
        /* Switch: '<S23>/Switch2' */
        rtb_Switch1 = VeRCVR_Pct_OEXV_PosRq_B4D;
    }

    /* End of Switch: '<S23>/Switch2' */

    /* SignalConversion generated from: '<S10>/ChlrRfg_Valve_Fault' incorporates:
     *  Constant: '<S1167>/Calib'
     */
    RCVR_ac_B.OutportBufferForChlrRfg_Valve_Fault = KeRCVR_b_ChlrRfgVlv_Flt_Dial;

    /* SignalConversion generated from: '<S10>/FrtRfg_Valve_Fault' incorporates:
     *  Constant: '<S1169>/Calib'
     */
    RCVR_ac_B.OutportBufferForFrtRfg_Valve_Fault = KeRCVR_b_FrtRfgVlv_Flt_Dial;

    /* SignalConversion generated from: '<S10>/HTL_BypVlv_Fault' incorporates:
     *  Constant: '<S1170>/Calib'
     */
    RCVR_ac_B.OutportBufferForHTL_BypVlv_Fault = KeRCVR_b_HTL_BypVlv_Fault_Dial;

    /* SignalConversion generated from: '<S10>/LTR_BypVlv_Fault' incorporates:
     *  Constant: '<S1173>/Calib'
     */
    RCVR_ac_B.OutportBufferForLTR_BypVlv_Fault = KeRCVR_b_LTR_BypVlv_Fault_Dial;

    /* SignalConversion generated from: '<S10>/LT_SO_Vlv_Fault' incorporates:
     *  Constant: '<S1174>/Calib'
     */
    RCVR_ac_B.OutportBufferForLT_SO_Vlv_Fault = KeRCVR_b_LT_SO_Vlv_Fault_Dial;

    /* Gain: '<S1141>/Gain' incorporates:
     *  Constant: '<S1136>/Constant'
     *  RelationalOperator: '<S1119>/Comparison4'
     */
    rtb_Gain_p = (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le)
                  != CePMTR_e_DISBL_All_Thrml);

    /* Logic: '<S1119>/Logical2' incorporates:
     *  Constant: '<S1137>/Constant'
     *  Logic: '<S1119>/Logical1'
     *  RelationalOperator: '<S1119>/Comparison5'
     */
    VeRCVR_b_OpnAllRfgt_Vlv = ((((uint32)VeRCVR_e_RefShtoffVlv_State_AD) ==
        CeTHMR_e_AllOpen) || (!rtb_Gain_p));

    /* RelationalOperator: '<S1119>/Comparison2' incorporates:
     *  Constant: '<S1176>/Calib'
     */
    rtb_Switch1_bb = !KeRCVR_b_RefValv_Fault_Dial;

    /* Logic: '<S1119>/Logical3' incorporates:
     *  Constant: '<S1138>/Constant'
     *  RelationalOperator: '<S1119>/Comparison1'
     */
    VeRCVR_b_OpnOnlyEvp_RfgtVlv = ((rtb_Switch1_bb && (((uint32)
        VeRCVR_e_RefShtoffVlv_State_AD) == CeTHMR_e_EvapOnly)) && rtb_Gain_p);

    /* Logic: '<S1119>/Logical5' incorporates:
     *  Constant: '<S1139>/Constant'
     *  RelationalOperator: '<S1119>/Comparison7'
     */
    VeRCVR_b_OpnChlr_N_FrntRfgtVlv = ((rtb_Gain_p && rtb_Switch1_bb) &&
        (((uint32)VeRCVR_e_RefShtoffVlv_State_AD) == CeTHMR_e_ChillerNFront));

    /* Logic: '<S1119>/Logical7' incorporates:
     *  Constant: '<S1135>/Constant'
     *  Constant: '<S1140>/Constant'
     *  Logic: '<S1119>/Logical4'
     *  Logic: '<S1119>/Logical6'
     *  RelationalOperator: '<S1119>/Comparison11'
     *  RelationalOperator: '<S1119>/Comparison9'
     *  Switch: '<S1500>/Switch2'
     */
    VeRCVR_b_OpnOnlyChlr_RfgtVlv = (((rtb_Gain_p && (((uint32)
        VeRCVR_e_RefShtoffVlv_State_AD) == CeTHMR_e_ChillerOnly)) &&
        rtb_Switch1_bb) || (rtb_Gain_p && (((uint32)
        VeRCVR_e_EngOrBattPwrDschg_State_AD) == CePDTR_e_Dischrg_ForcBatCool_Hys)));

    /* If: '<S1074>/If' */
    if (VeRCVR_b_OpnAllRfgt_Vlv)
    {
        /* Outputs for IfAction SubSystem: '<S1074>/OpenAll' incorporates:
         *  ActionPort: '<S1118>/ActionPort'
         */
        RCVR_ac_OpenAll(&rtb_Switch1_bb, &rtb_Gain_p, &rtb_AND_ijg);

        /* End of Outputs for SubSystem: '<S1074>/OpenAll' */
    }
    else if (VeRCVR_b_OpnOnlyEvp_RfgtVlv)
    {
        /* Outputs for IfAction SubSystem: '<S1074>/EvapOnly' incorporates:
         *  ActionPort: '<S1116>/ActionPort'
         */
        /* Merge: '<S1074>/Merge' incorporates:
         *  Constant: '<S1127>/Calib'
         *  SignalConversion generated from: '<S1116>/RSVEvapFront'
         */
        rtb_Switch1_bb = KeRCVR_b_RSVEvapFrontOn;

        /* Merge: '<S1074>/Merge2' incorporates:
         *  Constant: '<S1126>/Calib'
         *  SignalConversion generated from: '<S1116>/RSVChiller'
         */
        rtb_AND_ijg = KeRCVR_b_RSVChillerOff;

        /* End of Outputs for SubSystem: '<S1074>/EvapOnly' */
    }
    else if (VeRCVR_b_OpnChlr_N_FrntRfgtVlv)
    {
        /* Outputs for IfAction SubSystem: '<S1074>/ChillerNFront' incorporates:
         *  ActionPort: '<S1114>/ActionPort'
         */
        /* Merge: '<S1074>/Merge' incorporates:
         *  Constant: '<S1121>/Calib'
         *  SignalConversion generated from: '<S1114>/RSVEvapFront'
         */
        rtb_Switch1_bb = KeRCVR_b_RSVEvapFrontOn;

        /* Merge: '<S1074>/Merge2' incorporates:
         *  Constant: '<S1120>/Calib'
         *  SignalConversion generated from: '<S1114>/RSVChiller'
         */
        rtb_AND_ijg = KeRCVR_b_RSVChillerOn;

        /* End of Outputs for SubSystem: '<S1074>/ChillerNFront' */
    }
    else if (VeRCVR_b_OpnOnlyChlr_RfgtVlv)
    {
        /* Outputs for IfAction SubSystem: '<S1074>/ChillerOnly' incorporates:
         *  ActionPort: '<S1115>/ActionPort'
         */
        /* Merge: '<S1074>/Merge' incorporates:
         *  Constant: '<S1124>/Calib'
         *  SignalConversion generated from: '<S1115>/RSVEvapFront'
         */
        rtb_Switch1_bb = KeRCVR_b_RSVEvapFrontOff;

        /* Merge: '<S1074>/Merge2' incorporates:
         *  Constant: '<S1123>/Calib'
         *  SignalConversion generated from: '<S1115>/RSVChiller'
         */
        rtb_AND_ijg = KeRCVR_b_RSVChillerOn;

        /* End of Outputs for SubSystem: '<S1074>/ChillerOnly' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1074>/Fault' incorporates:
         *  ActionPort: '<S1117>/ActionPort'
         */
        RCVR_ac_OpenAll(&rtb_Switch1_bb, &rtb_Gain_p, &rtb_AND_ijg);

        /* End of Outputs for SubSystem: '<S1074>/Fault' */
    }

    /* End of If: '<S1074>/If' */

    /* Outputs for Atomic SubSystem: '<S1145>/EdgeRising' */
    /* Logic: '<S1151>/AND' incorporates:
     *  Logic: '<S1151>/OR1'
     *  UnitDelay: '<S1151>/UnitDelay'
     */
    rtb_Switch3_hs = (rtb_Switch1_bb && (!RCVR_ac_DW.UnitDelay_DSTATE_pt));

    /* Update for UnitDelay: '<S1151>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pt = rtb_Switch1_bb;

    /* End of Outputs for SubSystem: '<S1145>/EdgeRising' */

    /* Switch: '<S1158>/Switch' incorporates:
     *  Constant: '<S1160>/Calib'
     */
    if (KeRCVR_b_ChlrVlvTrnstn_Delay_Enbl)
    {
        /* Switch: '<S1158>/Switch' */
        rtb_UnitDelay_b0 = rtb_AND_ijg;
    }
    else
    {
        /* Switch: '<S1158>/Switch' incorporates:
         *  Constant: '<S1159>/Calib'
         */
        rtb_UnitDelay_b0 = KeRCVR_b_ChlrVlvTrnstn_Delay_Dflt;
    }

    /* End of Switch: '<S1158>/Switch' */

    /* Outputs for Atomic SubSystem: '<S1145>/EdgeFalling' */
    /* Gain: '<S1141>/Gain' incorporates:
     *  UnitDelay: '<S1148>/UnitDelay'
     */
    rtb_Gain_p = RCVR_ac_DW.UnitDelay_DSTATE_gb;

    /* Logic: '<S1148>/AND' incorporates:
     *  Logic: '<S1148>/OR1'
     *  UnitDelay: '<S1148>/UnitDelay'
     */
    rtb_AND_hb = ((!rtb_UnitDelay_b0) && (RCVR_ac_DW.UnitDelay_DSTATE_gb));

    /* Update for UnitDelay: '<S1148>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_gb = rtb_UnitDelay_b0;

    /* End of Outputs for SubSystem: '<S1145>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S1145>/TimerRetriggerResetEnabled' */
    /* Switch: '<S1157>/Switch1' incorporates:
     *  Constant: '<S1153>/Calib'
     *  Constant: '<S1154>/Calib'
     *  Constant: '<S1157>/ConstantValue4'
     *  Logic: '<S1145>/Logical2'
     *  MinMax: '<S1157>/Maximum'
     *  Sum: '<S1157>/Subtraction'
     *  UnitDelay: '<S1157>/UnitDelay'
     */
    if (rtb_Switch3_hs || rtb_AND_hb)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_j = KeRCVR_t_RSVtransitiondelaymax;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_j = fmaxf(RCVR_ac_DW.UnitDelay_DSTATE_j -
            KeRCVR_dT_RSVtransition, 0.0F);
    }

    /* End of Switch: '<S1157>/Switch1' */

    /* RelationalOperator: '<S1157>/GreaterThan1' incorporates:
     *  Constant: '<S1157>/ConstantValue2'
     *  UnitDelay: '<S1157>/UnitDelay'
     */
    VeRCVR_b_RSV_transitionTmrActv = (RCVR_ac_DW.UnitDelay_DSTATE_j > 0.0F);

    /* End of Outputs for SubSystem: '<S1145>/TimerRetriggerResetEnabled' */

    /* RelationalOperator: '<S1147>/Comparison2' */
#if Rte_SysCon_Variant_RCVR_FUNC_3

    /* Gain: '<S1141>/Gain' */
    rtb_Gain_p = (VeRCVR_I_EVCD_CrntAct_AD <=
                  RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n);

#endif

    /* End of RelationalOperator: '<S1147>/Comparison2' */

    /* Outputs for Atomic SubSystem: '<S1145>/EdgeFalling1' */
    /* UnitDelay: '<S1095>/UnitDelay' incorporates:
     *  UnitDelay: '<S1149>/UnitDelay'
     */
    rtb_UnitDelay_b0 = RCVR_ac_DW.UnitDelay_DSTATE_kz;

    /* Update for UnitDelay: '<S1149>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_kz = VeRCVR_b_RSV_transitionTmrActv;

    /* Outputs for Atomic SubSystem: '<S1145>/SignalLatchOnWithReset' */
    /* Logic: '<S1155>/OR1' incorporates:
     *  Logic: '<S1149>/AND'
     *  Logic: '<S1149>/OR1'
     *  Logic: '<S1155>/NOT'
     *  Logic: '<S1155>/OR'
     *  UnitDelay: '<S1155>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_ml = (rtb_AND_hb ||
        (((VeRCVR_b_RSV_transitionTmrActv) || (!rtb_UnitDelay_b0)) &&
         (RCVR_ac_DW.UnitDelay_DSTATE_ml)));

    /* End of Outputs for SubSystem: '<S1145>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S1145>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S1145>/EdgeFalling2' */
    /* UnitDelay: '<S1095>/UnitDelay' incorporates:
     *  UnitDelay: '<S1150>/UnitDelay'
     */
    rtb_UnitDelay_b0 = RCVR_ac_DW.UnitDelay_DSTATE_nh;

    /* Update for UnitDelay: '<S1150>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_nh = VeRCVR_b_RSV_transitionTmrActv;

    /* Outputs for Atomic SubSystem: '<S1145>/SignalLatchOnWithReset1' */
    /* Logic: '<S1156>/OR1' incorporates:
     *  Logic: '<S1150>/AND'
     *  Logic: '<S1150>/OR1'
     *  Logic: '<S1156>/NOT'
     *  Logic: '<S1156>/OR'
     *  UnitDelay: '<S1156>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_fp = (rtb_Switch3_hs ||
        (((VeRCVR_b_RSV_transitionTmrActv) || (!rtb_UnitDelay_b0)) &&
         (RCVR_ac_DW.UnitDelay_DSTATE_fp)));

    /* End of Outputs for SubSystem: '<S1145>/SignalLatchOnWithReset1' */
    /* End of Outputs for SubSystem: '<S1145>/EdgeFalling2' */

    /* Switch: '<S1147>/Switch1' incorporates:
     *  Constant: '<S1161>/Calib'
     *  RelationalOperator: '<S1147>/Comparison1'
     */
#if !Rte_SysCon_Variant_RCVR_FUNC_3

    if (KeRCVR_b_Chlr_Evap_RfgtVlv_MaxTrnstnRPM)
    {
        /* Switch: '<S1152>/Switch1' incorporates:
         *  Logic: '<S1145>/Logical1'
         *  MinMax: '<S1145>/MinMax'
         *  Switch: '<S1152>/Switch2'
         *  UnitDelay: '<S1155>/UnitDelay'
         *  UnitDelay: '<S1156>/UnitDelay'
         */
        if ((RCVR_ac_DW.UnitDelay_DSTATE_ml) && (RCVR_ac_DW.UnitDelay_DSTATE_fp))
        {
            rtb_Sum2_ik = fminf
                (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l,
                 RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);
        }
        else if (RCVR_ac_DW.UnitDelay_DSTATE_ml)
        {
            /* Switch: '<S1152>/Switch2' */
            rtb_Sum2_ik = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i;
        }
        else
        {
            rtb_Sum2_ik = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l;
        }

        /* End of Switch: '<S1152>/Switch1' */
    }
    else
    {
        rtb_Sum2_ik = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l;
    }

    /* Gain: '<S1141>/Gain' incorporates:
     *  Constant: '<S1161>/Calib'
     */
    rtb_Gain_p = (RCVR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy <=
                  rtb_Sum2_ik);

#endif

    /* End of Switch: '<S1147>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1075>/Subsystem' incorporates:
     *  EnablePort: '<S1144>/Enable'
     */
    /* Logic: '<S1075>/Logical3' incorporates:
     *  Inport: '<S1144>/In1'
     *  Inport: '<S1144>/In3'
     *  Logic: '<S1075>/Logical'
     */
    if ((!VeRCVR_b_RSV_transitionTmrActv) || rtb_Gain_p)
    {
        RCVR_ac_B.In1 = rtb_Switch1_bb;
        RCVR_ac_B.In3 = rtb_AND_ijg;
    }

    /* End of Logic: '<S1075>/Logical3' */
    /* End of Outputs for SubSystem: '<S1075>/Subsystem' */

    /* Switch: '<S1071>/Switch' */
    if (VeRCVF_b_FrtRfgVlv_DVC_Lim_AD)
    {
        /* Switch: '<S1071>/Switch' */
        RCVR_ac_B.Switch_hn = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jy;
    }
    else
    {
        /* Switch: '<S1071>/Switch' incorporates:
         *  Gain: '<S1141>/Gain'
         */
        RCVR_ac_B.Switch_hn = RCVR_ac_B.In1;
    }

    /* End of Switch: '<S1071>/Switch' */

    /* RelationalOperator: '<S1077>/Comparison5' incorporates:
     *  UnitDelay: '<S1077>/UnitDelay'
     */
    rtb_Gain_p = (RCVR_ac_B.Switch_hn != RCVR_ac_DW.UnitDelay_DSTATE_ju);

    /* Outputs for Atomic SubSystem: '<S1077>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1100>/EdgeFalling1' */
    /* Logic: '<S1113>/OR1' incorporates:
     *  Logic: '<S1100>/AND'
     */
    rtb_UnitDelay_b0 = !rtb_Gain_p;

    /* Logic: '<S1113>/AND' incorporates:
     *  Logic: '<S1113>/OR1'
     *  UnitDelay: '<S1113>/UnitDelay'
     */
    rtb_Switch3_hs = (rtb_UnitDelay_b0 && (RCVR_ac_DW.UnitDelay_DSTATE_h2));

    /* Update for UnitDelay: '<S1113>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_h2 = rtb_Gain_p;

    /* End of Outputs for SubSystem: '<S1100>/EdgeFalling1' */

    /* Switch: '<S1100>/Switch' incorporates:
     *  Constant: '<S1098>/Calib'
     *  Constant: '<S1099>/Calib'
     *  Constant: '<S1100>/ConstantValue1'
     *  MinMax: '<S1100>/Minimum'
     *  Sum: '<S1100>/Summation'
     *  UnitDelay: '<S1100>/UnitDelay'
     */
    if (rtb_Switch3_hs)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_i = KeRCVR_t_RSVFrntVlv_trans_delay;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_i = fmaxf(RCVR_ac_DW.UnitDelay_DSTATE_i -
            KeRCVR_t_RSVFrntVlv_dT, 0.0F);
    }

    /* End of Switch: '<S1100>/Switch' */

    /* Outputs for Enabled SubSystem: '<S1077>/Check_Vlv_Sts' incorporates:
     *  EnablePort: '<S1097>/Enable'
     */
    /* Logic: '<S1077>/Logical1' incorporates:
     *  Constant: '<S1100>/ConstantValue2'
     *  Logic: '<S1100>/AND'
     *  RelationalOperator: '<S1100>/GreaterThan'
     *  UnitDelay: '<S1100>/UnitDelay'
     */
    if (rtb_UnitDelay_b0 && (RCVR_ac_DW.UnitDelay_DSTATE_i <= 0.0F))
    {
        /* If: '<S1097>/If' incorporates:
         *  Constant: '<S1101>/Constant1'
         *  Constant: '<S1101>/Constant2'
         *  Constant: '<S1102>/Constant1'
         *  Constant: '<S1102>/Constant2'
         *  Constant: '<S1103>/Constant1'
         *  Constant: '<S1103>/Constant2'
         *  Constant: '<S1104>/Calib'
         *  Constant: '<S1105>/Calib'
         *  Constant: '<S1106>/Calib'
         *  DataStoreRead: '<S1101>/StatusByte_EvapRefriShutoffCtrlCktFlt'
         *  DataStoreRead: '<S1102>/StatusByte_EvapRefriShutoffCtrlshrtBattFlt'
         *  DataStoreRead: '<S1103>/StatusByte_EvapRefrishutoffCtrlShrtGndFlt'
         *  Logic: '<S1096>/Logical2'
         *  Logic: '<S1096>/Logical3'
         *  Logic: '<S1096>/Logical5'
         *  Logic: '<S1096>/Logical7'
         *  Logic: '<S1101>/LogicalOperator'
         *  Logic: '<S1102>/LogicalOperator'
         *  Logic: '<S1103>/LogicalOperator'
         *  RelationalOperator: '<S1101>/RelationalOperator1'
         *  RelationalOperator: '<S1101>/RelationalOperator2'
         *  RelationalOperator: '<S1102>/RelationalOperator1'
         *  RelationalOperator: '<S1102>/RelationalOperator2'
         *  RelationalOperator: '<S1103>/RelationalOperator1'
         *  RelationalOperator: '<S1103>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1101>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1101>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1102>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1102>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1103>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1103>/BitwiseOperator2'
         */
        if ((((((((sint32)RCVR_ac_DW.StatusByte_EvapRefriShutoffCtrlCktFlt) & 1)
                <= 0) || ((((uint32)
                            RCVR_ac_DW.StatusByte_EvapRefriShutoffCtrlCktFlt) &
                           64U) != 0U)) || (!KeRCVR_b_RSVFrntVlv_CktOpn_Flt)) &&
             ((((((sint32)RCVR_ac_DW.StatusByte_EvapRefrishutoffCtrlShrtGndFl) &
                 1) <= 0) || ((((uint32)
                                RCVR_ac_DW.StatusByte_EvapRefrishutoffCtrlShrtGndFl)
                               & 64U) != 0U)) || (!KeRCVR_b_RSVFrntVlv_CktLo_Flt)))
            && ((((((sint32)RCVR_ac_DW.StatusByte_EvapRefriShutoffCtrlshrtBattF)
                   & 1) <= 0) || ((((uint32)
                                    RCVR_ac_DW.StatusByte_EvapRefriShutoffCtrlshrtBattF)
                & 64U) != 0U)) || (!KeRCVR_b_RSVFrntVlv_CktHi_Flt)))
        {
            /* Outputs for IfAction SubSystem: '<S1097>/Check_St' incorporates:
             *  ActionPort: '<S1107>/ActionPort'
             */
            RCVR_ac_Check_St(RCVR_ac_B.Switch_hn, &rtb_Merge_i);

            /* End of Outputs for SubSystem: '<S1097>/Check_St' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1097>/Vlv_Faulty' incorporates:
             *  ActionPort: '<S1109>/ActionPort'
             */
            RCVR_ac_Vlv_Faulty(&rtb_Merge_i);

            /* End of Outputs for SubSystem: '<S1097>/Vlv_Faulty' */
        }

        /* End of If: '<S1097>/If' */

        /* Gain: '<S1108>/Gain' */
        RCVR_ac_B.Gain_et = RCVR_ac_B.Switch_hn;
    }

    /* End of Logic: '<S1077>/Logical1' */
    /* End of Outputs for SubSystem: '<S1077>/Check_Vlv_Sts' */
    /* End of Outputs for SubSystem: '<S1077>/TurnOffDelayTime' */

    /* Switch: '<S25>/Switch' incorporates:
     *  Constant: '<S1072>/Calib'
     *  Switch: '<S1071>/Switch2'
     */
    if (KeRCVR_b_BattByPass_Vlv_Enbl)
    {
        /* Switch: '<S30>/Switch' incorporates:
         *  Constant: '<S93>/Constant'
         *  Constant: '<S95>/Calib'
         *  Constant: '<S96>/Calib'
         *  If: '<S91>/If'
         *  RelationalOperator: '<S91>/Comparison2'
         *  RelationalOperator: '<S91>/Comparison3'
         *  RelationalOperator: '<S91>/Comparison5'
         */
        if (VeRCVF_b_LTSO_Vlv_DVC_Lim_AD)
        {
            /* Switch: '<S25>/Switch' */
            RCVR_ac_B.Switch_o =
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_he;
        }
        else if ((KeRCVR_Pct_BattByPassVlv_Off ==
                  RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f) ||
                 (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) ==
                  CePMTR_e_DISBL_All_Thrml))
        {
            /* Outputs for IfAction SubSystem: '<S91>/Through_Battery' incorporates:
             *  ActionPort: '<S97>/ActionPort'
             */
            /* If: '<S91>/If' incorporates:
             *  Constant: '<S100>/Calib'
             *  SignalConversion generated from: '<S97>/ValveCommandOff'
             *  Switch: '<S25>/Switch'
             */
            RCVR_ac_B.Switch_o = KeRCVR_b_BattByPass_Vlv_Cmd_Off;

            /* End of Outputs for SubSystem: '<S91>/Through_Battery' */
        }
        else if (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f ==
                 KeRCVR_Pct_BattByPassVlv_On)
        {
            /* Outputs for IfAction SubSystem: '<S91>/ByPass_Battery' incorporates:
             *  ActionPort: '<S92>/ActionPort'
             */
            /* If: '<S91>/If' incorporates:
             *  Constant: '<S98>/Calib'
             *  SignalConversion generated from: '<S92>/ValveCommandOn'
             *  Switch: '<S25>/Switch'
             */
            RCVR_ac_B.Switch_o = KeRCVR_b_BattByPass_Vlv_Cmd_On;

            /* End of Outputs for SubSystem: '<S91>/ByPass_Battery' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S91>/Fault' incorporates:
             *  ActionPort: '<S94>/ActionPort'
             */
            /* If: '<S91>/If' incorporates:
             *  Constant: '<S99>/Calib'
             *  SignalConversion generated from: '<S94>/ValveCommandFlt'
             *  Switch: '<S25>/Switch'
             */
            RCVR_ac_B.Switch_o = KeRCVR_b_BattByPass_Vlv_Cmd_Flt;

            /* End of Outputs for SubSystem: '<S91>/Fault' */
        }

        /* End of Switch: '<S30>/Switch' */
    }
    else if (VeRCVF_b_ChlrRfgVlv_DVC_Lim_AD)
    {
        /* Switch: '<S1071>/Switch2' incorporates:
         *  Switch: '<S25>/Switch'
         */
        RCVR_ac_B.Switch_o = RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ij;
    }
    else
    {
        /* Switch: '<S25>/Switch' incorporates:
         *  Gain: '<S1143>/Gain'
         */
        RCVR_ac_B.Switch_o = RCVR_ac_B.In3;
    }

    /* End of Switch: '<S25>/Switch' */

    /* RelationalOperator: '<S1076>/Comparison5' incorporates:
     *  UnitDelay: '<S1076>/UnitDelay'
     */
    rtb_Gain_p = (RCVR_ac_B.Switch_o != RCVR_ac_DW.UnitDelay_DSTATE_lj);

    /* Outputs for Atomic SubSystem: '<S1076>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1082>/EdgeFalling1' */
    /* Logic: '<S1095>/OR1' incorporates:
     *  Logic: '<S1082>/AND'
     */
    rtb_UnitDelay_b0 = !rtb_Gain_p;

    /* Logic: '<S1095>/AND' incorporates:
     *  Logic: '<S1095>/OR1'
     *  UnitDelay: '<S1095>/UnitDelay'
     */
    rtb_Switch3_hs = (rtb_UnitDelay_b0 && (RCVR_ac_DW.UnitDelay_DSTATE_lh));

    /* Update for UnitDelay: '<S1095>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_lh = rtb_Gain_p;

    /* End of Outputs for SubSystem: '<S1082>/EdgeFalling1' */

    /* Switch: '<S1082>/Switch' incorporates:
     *  Constant: '<S1080>/Calib'
     *  Constant: '<S1081>/Calib'
     *  Constant: '<S1082>/ConstantValue1'
     *  MinMax: '<S1082>/Minimum'
     *  Sum: '<S1082>/Summation'
     *  UnitDelay: '<S1082>/UnitDelay'
     */
    if (rtb_Switch3_hs)
    {
        RCVR_ac_DW.UnitDelay_DSTATE_c = KeRCVR_t_CRV_trans_delay;
    }
    else
    {
        RCVR_ac_DW.UnitDelay_DSTATE_c = fmaxf(RCVR_ac_DW.UnitDelay_DSTATE_c -
            KeRCVR_t_CRV_dT, 0.0F);
    }

    /* End of Switch: '<S1082>/Switch' */

    /* Outputs for Enabled SubSystem: '<S1076>/Check_Vlv_Sts' incorporates:
     *  EnablePort: '<S1079>/Enable'
     */
    /* Logic: '<S1076>/Logical1' incorporates:
     *  Constant: '<S1082>/ConstantValue2'
     *  Logic: '<S1082>/AND'
     *  RelationalOperator: '<S1082>/GreaterThan'
     *  UnitDelay: '<S1082>/UnitDelay'
     */
    if (rtb_UnitDelay_b0 && (RCVR_ac_DW.UnitDelay_DSTATE_c <= 0.0F))
    {
        /* If: '<S1079>/If' incorporates:
         *  Constant: '<S1083>/Constant1'
         *  Constant: '<S1083>/Constant2'
         *  Constant: '<S1084>/Constant1'
         *  Constant: '<S1084>/Constant2'
         *  Constant: '<S1085>/Constant1'
         *  Constant: '<S1085>/Constant2'
         *  Constant: '<S1086>/Calib'
         *  Constant: '<S1087>/Calib'
         *  Constant: '<S1088>/Calib'
         *  DataStoreRead: '<S1083>/StatusByte_CoolCtrlVlv1CktHi'
         *  DataStoreRead: '<S1084>/StatusByte_CoolCtrlVlv1CktLo'
         *  DataStoreRead: '<S1085>/StatusByte_CoolCtrlVlv1Ckt'
         *  Logic: '<S1078>/Logical2'
         *  Logic: '<S1078>/Logical3'
         *  Logic: '<S1078>/Logical5'
         *  Logic: '<S1078>/Logical7'
         *  Logic: '<S1083>/LogicalOperator'
         *  Logic: '<S1084>/LogicalOperator'
         *  Logic: '<S1085>/LogicalOperator'
         *  RelationalOperator: '<S1083>/RelationalOperator1'
         *  RelationalOperator: '<S1083>/RelationalOperator2'
         *  RelationalOperator: '<S1084>/RelationalOperator1'
         *  RelationalOperator: '<S1084>/RelationalOperator2'
         *  RelationalOperator: '<S1085>/RelationalOperator1'
         *  RelationalOperator: '<S1085>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1083>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1083>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1084>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1084>/BitwiseOperator2'
         *  S-Function (sfix_bitop): '<S1085>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S1085>/BitwiseOperator2'
         */
        if ((((((((sint32)RCVR_ac_DW.StatusByte_CoolCtrlVlv1Ckt) & 1) <= 0) ||
                ((((uint32)RCVR_ac_DW.StatusByte_CoolCtrlVlv1Ckt) & 64U) != 0U))
              || (!KeRCVR_b_CRV_CktOpn_Flt)) && ((((((sint32)
                  RCVR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 1) <= 0) ||
                ((((uint32)RCVR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 64U) != 0U))
              || (!KeRCVR_b_CRV_CktLo_Flt))) && ((((((sint32)
                 RCVR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 1) <= 0) ||
                ((((uint32)RCVR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 64U) != 0U))
             || (!KeRCVR_b_CRV_CktHi_Flt)))
        {
            /* Outputs for IfAction SubSystem: '<S1079>/Check_St' incorporates:
             *  ActionPort: '<S1089>/ActionPort'
             */
            RCVR_ac_Check_St(RCVR_ac_B.Switch_o, &rtb_Merge_i);

            /* End of Outputs for SubSystem: '<S1079>/Check_St' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1079>/Vlv_Faulty' incorporates:
             *  ActionPort: '<S1091>/ActionPort'
             */
            RCVR_ac_Vlv_Faulty(&rtb_Merge_i);

            /* End of Outputs for SubSystem: '<S1079>/Vlv_Faulty' */
        }

        /* End of If: '<S1079>/If' */

        /* Gain: '<S1090>/Gain' */
        RCVR_ac_B.Gain_f = RCVR_ac_B.Switch_o;
    }

    /* End of Logic: '<S1076>/Logical1' */
    /* End of Outputs for SubSystem: '<S1076>/Check_Vlv_Sts' */
    /* End of Outputs for SubSystem: '<S1076>/TurnOffDelayTime' */

    /* Logic: '<S26>/Logical4' incorporates:
     *  Constant: '<S1162>/Constant1'
     *  Constant: '<S1162>/Constant2'
     *  Constant: '<S1163>/Constant1'
     *  Constant: '<S1163>/Constant2'
     *  Constant: '<S1164>/Constant1'
     *  Constant: '<S1164>/Constant2'
     *  Constant: '<S1166>/Calib'
     *  DataStoreRead: '<S1162>/StatusByte_CoolantVlvA_CktHi'
     *  DataStoreRead: '<S1163>/StatusByte_CoolantVlvA_CktLo'
     *  DataStoreRead: '<S1164>/StatusByte_CoolantVlvA_Ckt'
     *  Logic: '<S1162>/Logical Operator'
     *  Logic: '<S1163>/Logical Operator'
     *  Logic: '<S1164>/Logical Operator'
     *  Logic: '<S26>/Logical2'
     *  RelationalOperator: '<S1162>/Relational Operator1'
     *  RelationalOperator: '<S1162>/Relational Operator2'
     *  RelationalOperator: '<S1163>/Relational Operator1'
     *  RelationalOperator: '<S1163>/Relational Operator2'
     *  RelationalOperator: '<S1164>/Relational Operator1'
     *  RelationalOperator: '<S1164>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1162>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1162>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1163>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1163>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1164>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1164>/Bitwise Operator2'
     */
    rtb_Gain_p = ((((((((((uint32)RCVR_ac_DW.StatusByte_CoolantVlvA_Ckt) & 1U)
                        != 0U) && ((((uint32)
                          RCVR_ac_DW.StatusByte_CoolantVlvA_Ckt) & 64U) == 0U)) ||
                      (((((uint32)RCVR_ac_DW.StatusByte_CoolantVlvA_CktLo) & 1U)
                        != 0U) && ((((uint32)
                          RCVR_ac_DW.StatusByte_CoolantVlvA_CktLo) & 64U) == 0U)))
                     || (((((uint32)RCVR_ac_DW.StatusByte_CoolantVlvA_CktHi) &
                           1U) != 0U) && ((((uint32)
                         RCVR_ac_DW.StatusByte_CoolantVlvA_CktHi) & 64U) == 0U)))
                    || (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jk)) ||
                   (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ove)) &&
                  (KeRCVR_b_CabVlv_Flt_Dial));

    /* Lookup_n-D: '<S1180>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    rtb_Sum1 = look1_iflf_binlca_16a
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fv, ((const float32 *)
          &(KxRCVR_Pct_CEXV_VlvFdbPressCoeff[0])), ((const float32 *)
          &(KtRCVR_Pct_CEXV_VlvFdbPressCoeff[0])), 18U);

    /* Lookup_n-D: '<S1186>/Vector' incorporates:
     *  Lookup_n-D: '<S1181>/Vector'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    rtb_Sum2_ik = look1_iflf_binlca_16a
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mj, ((const float32 *)
          &(KxRCVR_Pct_EEXV_VlvFdbPressCoeff[0])), ((const float32 *)
          &(KtRCVR_Pct_EEXV_VlvFdbPressCoeff[0])), 18U);

    /* Sum: '<S1177>/Sum2' incorporates:
     *  Product: '<S1177>/Product1'
     *  Product: '<S1177>/Product2'
     */
    rtb_Vector_n = (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e *
                    rtb_Sum2_ik) + (rtb_Vector_n * rtb_Sum1);

    /* Sum: '<S1177>/Sum1' */
    rtb_Sum2_ik += rtb_Sum1;

    /* Outputs for Atomic SubSystem: '<S1177>/ProtectedDivision' */
    /* Switch: '<S1182>/Switch1' incorporates:
     *  Constant: '<S1182>/ConstantValue'
     *  Constant: '<S1182>/ConstantValue1'
     *  Constant: '<S1182>/ConstantValue2'
     *  Constant: '<S1182>/ConstantValue3'
     *  Logic: '<S1182>/AND'
     *  RelationalOperator: '<S1182>/GreaterThanorEqual'
     *  RelationalOperator: '<S1182>/GreaterThanorEqual1'
     *  RelationalOperator: '<S1182>/NotEqual'
     *  RelationalOperator: '<S1182>/NotEqual1'
     *  Switch: '<S1182>/Switch2'
     *  Switch: '<S1182>/Switch3'
     */
    if ((rtb_Vector_n != 0.0F) && (rtb_Sum2_ik != 0.0F))
    {
        /* Switch: '<S1182>/Switch1' incorporates:
         *  Product: '<S1182>/Division'
         */
        rtb_Sum1 = rtb_Vector_n / rtb_Sum2_ik;
    }
    else if (rtb_Vector_n > 0.0F)
    {
        /* Switch: '<S1182>/Switch2' incorporates:
         *  Constant: '<S1182>/MAXFLOAT'
         *  Switch: '<S1182>/Switch1'
         */
        rtb_Sum1 = 3.402823466E+38F;
    }
    else if (rtb_Vector_n < 0.0F)
    {
        /* Switch: '<S1182>/Switch3' incorporates:
         *  Constant: '<S1182>/MINFLOAT'
         *  Switch: '<S1182>/Switch1'
         *  Switch: '<S1182>/Switch2'
         */
        rtb_Sum1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S1182>/Switch1' incorporates:
         *  Constant: '<S1182>/ConstantValue4'
         *  Switch: '<S1182>/Switch2'
         *  Switch: '<S1182>/Switch3'
         */
        rtb_Sum1 = 0.0F;
    }

    /* End of Switch: '<S1182>/Switch1' */
    /* End of Outputs for SubSystem: '<S1177>/ProtectedDivision' */

    /* Lookup_n-D: '<S1186>/Vector' incorporates:
     *  Lookup_n-D: '<S1183>/Vector'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    rtb_Sum2_ik = look1_iflf_binlca_16a
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fv, ((const float32 *)
          &(KxRCVR_Pct_CEXV_VlvFdbTempCoeff[0])), ((const float32 *)
          &(KtRCVR_Pct_CEXV_VlvFdbTempCoeff[0])), 18U);

    /* Lookup_n-D: '<S1184>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    rtb_Vector_n = look1_iflf_binlca_16a
        (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mj, ((const float32 *)
          &(KxRCVR_Pct_EEXV_VlvFdbTempCoeff[0])), ((const float32 *)
          &(KtRCVR_Pct_EEXV_VlvFdbTempCoeff[0])), 18U);

    /* Sum: '<S1178>/Sum2' incorporates:
     *  Product: '<S1178>/Product1'
     *  Product: '<S1178>/Product2'
     */
    rtb_Switch2_dd = (RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kz *
                      rtb_Vector_n) + (rtb_Switch2_dd * rtb_Sum2_ik);

    /* Sum: '<S1178>/Sum1' */
    rtb_Vector_n += rtb_Sum2_ik;

    /* Outputs for Atomic SubSystem: '<S1178>/ProtectedDivision' */
    /* Switch: '<S1185>/Switch1' incorporates:
     *  Constant: '<S1185>/ConstantValue'
     *  Constant: '<S1185>/ConstantValue1'
     *  Constant: '<S1185>/ConstantValue2'
     *  Constant: '<S1185>/ConstantValue3'
     *  Logic: '<S1185>/AND'
     *  RelationalOperator: '<S1185>/GreaterThanorEqual'
     *  RelationalOperator: '<S1185>/GreaterThanorEqual1'
     *  RelationalOperator: '<S1185>/NotEqual'
     *  RelationalOperator: '<S1185>/NotEqual1'
     *  Switch: '<S1185>/Switch2'
     *  Switch: '<S1185>/Switch3'
     */
    if ((rtb_Switch2_dd != 0.0F) && (rtb_Vector_n != 0.0F))
    {
        /* Switch: '<S1185>/Switch1' incorporates:
         *  Product: '<S1185>/Division'
         */
        rtb_Switch2_dd /= rtb_Vector_n;
    }
    else if (rtb_Switch2_dd > 0.0F)
    {
        /* Switch: '<S1185>/Switch2' incorporates:
         *  Constant: '<S1185>/MAXFLOAT'
         *  Switch: '<S1185>/Switch1'
         */
        rtb_Switch2_dd = 3.402823466E+38F;
    }
    else if (rtb_Switch2_dd < 0.0F)
    {
        /* Switch: '<S1185>/Switch3' incorporates:
         *  Constant: '<S1185>/MINFLOAT'
         *  Switch: '<S1185>/Switch1'
         *  Switch: '<S1185>/Switch2'
         */
        rtb_Switch2_dd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S1185>/Switch1' incorporates:
         *  Constant: '<S1185>/ConstantValue4'
         *  Switch: '<S1185>/Switch2'
         *  Switch: '<S1185>/Switch3'
         */
        rtb_Switch2_dd = 0.0F;
    }

    /* End of Switch: '<S1185>/Switch1' */
    /* End of Outputs for SubSystem: '<S1178>/ProtectedDivision' */

    /* Update for UnitDelay: '<S505>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_pc = RCVR_ac_B.Logical;

    /* Update for UnitDelay: '<S28>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_hp4 = rtb_OR1_fj;

    /* Update for UnitDelay: '<S361>/UnitDelay' incorporates:
     *  UnitDelay: '<S360>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_nf5 = RCVR_ac_DW.UnitDelay_DSTATE_i1;

    /* Update for UnitDelay: '<S443>/UnitDelay' incorporates:
     *  UnitDelay: '<S444>/UnitDelay'
     */
    RCVR_ac_DW.UnitDelay_DSTATE_fc = RCVR_ac_DW.UnitDelay_DSTATE_nx;

    /* Update for UnitDelay: '<S1077>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_ju = RCVR_ac_B.Switch_hn;

    /* Update for UnitDelay: '<S1076>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_lj = RCVR_ac_B.Switch_o;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* SignalConversion generated from: '<S4>/EXV_Rtn_Sts_Out' incorporates:
     *  DataTypeConversion: '<S1398>/DataTypeConversion'
     *  Outport: '<Root>/VeRCVR_e_EXV_RtnSts'
     *  Switch: '<S1295>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_EXV_RtnSts_Value(RCVR_ac_B.Switch1_p);

    /* SignalConversion generated from: '<S12>/HTRBypVlv_Cmd' */
#if Rte_SysCon_Variant_RCVR_FUNC_1

    /* VariantMerge generated from: '<S12>/CAC_BypVlv_Cmd' */
    rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd = RCVR_ac_B.Merge;

#else

    /* VariantMerge generated from: '<S12>/CAC_BypVlv_Cmd' incorporates:
     *  SignalConversion generated from: '<S12>/HTRBypVlv_Cmd'
     */
    rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S12>/HTRBypVlv_Cmd' */

    /* Switch: '<S1406>/Switch' incorporates:
     *  Constant: '<S1430>/Calib'
     */
    if (KeRCVR_b_HTRBypVlv_Cmd_SD)
    {
        /* SignalConversion generated from: '<S4>/HTR_Vlv_PstnCmd_AD' incorporates:
         *  Constant: '<S1427>/Calib'
         *  Outport: '<Root>/VeRCVR_Pct_HTR_Vlv_PstnCmnd'
         */
        (void)Rte_Write_VeRCVR_Pct_HTR_Vlv_PstnCmnd_Value
            (KeRCVR_Pct_HTRBypVlv_Cmd_D);
    }
    else
    {
        /* SignalConversion generated from: '<S4>/HTR_Vlv_PstnCmd_AD' incorporates:
         *  Outport: '<Root>/VeRCVR_Pct_HTR_Vlv_PstnCmnd'
         */
        (void)Rte_Write_VeRCVR_Pct_HTR_Vlv_PstnCmnd_Value
            (rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd);
    }

    /* End of Switch: '<S1406>/Switch' */

    /* SignalConversion generated from: '<S12>/HTRBypVlv_Calib' incorporates:
     *  SignalConversion generated from: '<S12>/HTRBV_Block_Det_Enbl'
     * */
#if Rte_SysCon_Variant_RCVR_FUNC_1

    /* VariantMerge generated from: '<S12>/HTRBypVlv_Calib' incorporates:
     *  Merge: '<S716>/Merge'
     */
    rtb_VM_Conditional_Signal_HTRBypVlv_Cali = RCVR_ac_B.Merge_l;

    /* VariantMerge generated from: '<S12>/HTRBV_Block_Det_Enbl' incorporates:
     *  Merge: '<S713>/Merge'
     */
    rtb_VM_Conditional_Signal_HTRBV_Block_De = RCVR_ac_B.Merge_ly;

#else

    /* VariantMerge generated from: '<S12>/HTRBypVlv_Calib' incorporates:
     *  SignalConversion generated from: '<S12>/HTRBypVlv_Calib'
     */
    rtb_VM_Conditional_Signal_HTRBypVlv_Cali =
        CeRCVR_e_FCV_Allow_Normal_Operation;

    /* VariantMerge generated from: '<S12>/HTRBV_Block_Det_Enbl' incorporates:
     *  SignalConversion generated from: '<S12>/HTRBV_Block_Det_Enbl'
     */
    rtb_VM_Conditional_Signal_HTRBV_Block_De = CeRCVR_e_FCV_False;

#endif

    /* End of SignalConversion generated from: '<S12>/HTRBypVlv_Calib' */

    /* SignalConversion generated from: '<S4>/EEXV_Rtn_Sts_Out' incorporates:
     *  DataTypeConversion: '<S1402>/DataTypeConversion'
     *  Outport: '<Root>/VeRCVR_e_EEXV_RtnSts'
     *  Switch: '<S1269>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_EEXV_RtnSts_Value(RCVR_ac_B.Switch1_m);

    /* SignalConversion generated from: '<S4>/OEXV_Rtn_Sts_Out' incorporates:
     *  DataTypeConversion: '<S1403>/DataTypeConversion'
     *  Outport: '<Root>/VeRCVR_e_OEXV_RtnSts'
     *  Switch: '<S1390>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_OEXV_RtnSts_Value(RCVR_ac_B.Switch1_cb);

    /* SignalConversion generated from: '<S12>/HtrCoreBV_Cmd' */
#if Rte_SysCon_Variant_RCVR_FUNC_4

    /* VariantMerge generated from: '<S12>/CAC_BypVlv_Cmd' */
    rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd = RCVR_ac_B.Merge_j;

#else

    /* VariantMerge generated from: '<S12>/CAC_BypVlv_Cmd' incorporates:
     *  SignalConversion generated from: '<S12>/HtrCoreBV_Cmd'
     */
    rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S12>/HtrCoreBV_Cmd' */

    /* Switch: '<S1415>/Switch1' incorporates:
     *  Constant: '<S1457>/Calib'
     */
    if (KeRCVR_b_HtrCoreBypVlv_Cmd_SD)
    {
        /* SignalConversion generated from: '<S4>/HtrCoreBypVlv_PstnCmd_Out' incorporates:
         *  Constant: '<S1453>/Calib'
         *  Outport: '<Root>/VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd'
         */
        (void)Rte_Write_VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd_Value
            (KeRCVR_Pct_HtrCoreBypVlv_Cmd_D);
    }
    else
    {
        /* SignalConversion generated from: '<S4>/HtrCoreBypVlv_PstnCmd_Out' incorporates:
         *  Outport: '<Root>/VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd'
         */
        (void)Rte_Write_VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd_Value
            (rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd);
    }

    /* End of Switch: '<S1415>/Switch1' */

    /* SignalConversion generated from: '<S12>/HtrCoreBV_Calib' incorporates:
     *  SignalConversion generated from: '<S12>/HtrCoreBV_Sv'
     */
#if Rte_SysCon_Variant_RCVR_FUNC_4

    /* VariantMerge generated from: '<S12>/HtrCoreBV_Calib' incorporates:
     *  Merge: '<S518>/Merge'
     */
    rtb_VM_Conditional_Signal_HtrCoreBV_Cali = RCVR_ac_B.Merge_o;

    /* VariantMerge generated from: '<S12>/HtrCoreBV_Sv' */
    rtb_VM_Conditional_Signal_HtrCoreBV_Sv_4 = RCVR_ac_B.Merge_a;

#else

    /* VariantMerge generated from: '<S12>/HtrCoreBV_Calib' incorporates:
     *  SignalConversion generated from: '<S12>/HtrCoreBV_Calib'
     */
    rtb_VM_Conditional_Signal_HtrCoreBV_Cali = CeRCVR_e_CPV_No_Calibration;

#endif

    /* End of SignalConversion generated from: '<S12>/HtrCoreBV_Calib' */

    /* SignalConversion generated from: '<S12>/HtrCoreBypVlv_Stuck_State' incorporates:
     *  SignalConversion generated from: '<S12>/HtrCoreBV_Sv'
     */
#if Rte_SysCon_Variant_RCVR_FUNC_4

    /* VariantMerge generated from: '<S12>/HtrCoreBypVlv_Stuck_State' incorporates:
     *  Switch: '<S562>/Switch1'
     */
    rtb_VM_Conditional_Signal_HtrCoreBypVlv_ = RCVR_ac_B.Switch1_i;

#else

    /* VariantMerge generated from: '<S12>/HtrCoreBV_Sv' incorporates:
     *  SignalConversion generated from: '<S12>/HtrCoreBV_Sv'
     */
    rtb_VM_Conditional_Signal_HtrCoreBV_Sv_4 = false;

    /* VariantMerge generated from: '<S12>/HtrCoreBypVlv_Stuck_State' incorporates:
     *  SignalConversion generated from: '<S12>/HtrCoreBypVlv_Stuck_State'
     */
    rtb_VM_Conditional_Signal_HtrCoreBypVlv_ = CeRCVR_e_Closed;

#endif

    /* End of SignalConversion generated from: '<S12>/HtrCoreBypVlv_Stuck_State' */

    /* SignalConversion generated from: '<S12>/CAC_BypVlv_Cmd' */
#if Rte_SysCon_Variant_RCVR_FUNC_5

    /* VariantMerge generated from: '<S12>/CAC_BypVlv_Cmd' */
    rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd = RCVR_ac_B.Merge_g;

#else

    /* VariantMerge generated from: '<S12>/CAC_BypVlv_Cmd' incorporates:
     *  SignalConversion generated from: '<S12>/CAC_BypVlv_Cmd'
     */
    rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S12>/CAC_BypVlv_Cmd' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVF'
     */
    /* RelationalOperator: '<S1187>/Comparison1' incorporates:
     *  Constant: '<S1202>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    rtb_UnitDelay_b0 = (((uint32)
                         RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c1) ==
                        CeTAIR_e_DVC_HTCV_Calibration_Start);

    /* If: '<S1187>/If1' incorporates:
     *  Constant: '<S1203>/Constant'
     *  Constant: '<S1207>/Calib'
     *  Logic: '<S1187>/Logical2'
     *  Logic: '<S1187>/Logical4'
     *  RelationalOperator: '<S1187>/Comparison4'
     */
    if ((rtb_UnitDelay_b0 && ((((uint32)
                                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le)
           == CePMTR_e_DISBL_All_Thrml) || rtb_Gain_p)) &&
            (KeRCVR_b_DVC_HTCV_CalibFail_En))
    {
        /* Outputs for IfAction SubSystem: '<S1187>/HTCVCalFailed' incorporates:
         *  ActionPort: '<S1206>/ActionPort'
         */
        /* DataStoreWrite: '<S1206>/DataStoreWrite3' */
        EeRCVR_e_HTCV_Calibration_Sts = 1;

        /* End of Outputs for SubSystem: '<S1187>/HTCVCalFailed' */
    }

    /* End of If: '<S1187>/If1' */

    /* If: '<S1187>/If' incorporates:
     *  Constant: '<S1205>/Constant'
     *  RelationalOperator: '<S1187>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ip) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1187>/CabVlvDVCLimits' incorporates:
         *  ActionPort: '<S1198>/ActionPort'
         */
        /* If: '<S1198>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1198>/ChkCabVlvLimits' incorporates:
             *  ActionPort: '<S1209>/ActionPort'
             */
            /* Logic: '<S1209>/Logical3' incorporates:
             *  Constant: '<S1211>/Constant'
             *  RelationalOperator: '<S1209>/Comparison2'
             *  RelationalOperator: '<S1209>/Comparison3'
             *  RelationalOperator: '<S1209>/Comparison4'
             */
            VeRCVF_b_CabVlv_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) && (!rtb_Gain_p)) && (!Switch3_f));

            /* Merge: '<S1198>/Merge' incorporates:
             *  Gain: '<S1212>/Gain'
             */
            VeRCVF_b_CabVlv_DVC_Lim_AM1 = VeRCVF_b_CabVlv_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1198>/ChkCabVlvLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1198>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1208>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_CabVlv_DVC_Lim_AM1)));

            /* End of Outputs for SubSystem: '<S1198>/Check_DVC_Limits' */
        }

        /* End of If: '<S1198>/If' */

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1210>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_CabVlv_DVC_Lim_AM1;

        /* End of Outputs for SubSystem: '<S1187>/CabVlvDVCLimits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1187>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1201>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1187>/Check_DVC_Limits' */
    }

    /* End of If: '<S1187>/If' */

    /* Switch: '<S1199>/Switch' incorporates:
     *  Constant: '<S1214>/Calib'
     */
    if (KeRCVF_b_HTCV_CalibStrt_DVC_LimSlct)
    {
        /* Switch: '<S1199>/Switch' incorporates:
         *  Constant: '<S1213>/Calib'
         */
        VeRCVF_b_HTCV_CalibStrt_DVC_Lim_AD = KeRCVF_b_HTCV_CalibStrt_DVC_LimDial;
    }
    else
    {
        /* Switch: '<S1199>/Switch' incorporates:
         *  Constant: '<S1204>/Constant'
         *  Logic: '<S1187>/Logical1'
         *  Logic: '<S1187>/Logical3'
         *  RelationalOperator: '<S1187>/Comparison2'
         */
        VeRCVF_b_HTCV_CalibStrt_DVC_Lim_AD = ((rtb_UnitDelay_b0 && (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
            CePMTR_e_DISBL_All_Thrml)) && (!rtb_Gain_p));
    }

    /* End of Switch: '<S1199>/Switch' */

    /* Switch: '<S1200>/Switch' incorporates:
     *  Constant: '<S1216>/Calib'
     */
    if (KeRCVF_b_CabVlv_DVC_LimSlct)
    {
        /* Switch: '<S1200>/Switch' incorporates:
         *  Constant: '<S1215>/Calib'
         */
        VeRCVF_b_CabVlv_DVC_Lim_AD = KeRCVF_b_CabVlv_DVC_LimDial;
    }
    else
    {
        /* Switch: '<S1200>/Switch' */
        VeRCVF_b_CabVlv_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1200>/Switch' */

    /* If: '<S1188>/If' incorporates:
     *  Constant: '<S1221>/Constant'
     *  RelationalOperator: '<S1188>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ah) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1188>/ChlrRfgDVCLimits' incorporates:
         *  ActionPort: '<S1219>/ActionPort'
         */
        /* If: '<S1219>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1219>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S1223>/ActionPort'
             */
            /* Logic: '<S1223>/Logical3' incorporates:
             *  Constant: '<S1225>/Constant'
             *  RelationalOperator: '<S1223>/Comparison2'
             *  RelationalOperator: '<S1223>/Comparison3'
             *  RelationalOperator: '<S1223>/Comparison4'
             */
            VeRCVF_b_ChlrRfgVlv_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) &&
                (!RCVR_ac_B.OutportBufferForChlrRfg_Valve_Fault)) && (!Switch3_f));

            /* Merge: '<S1219>/Merge' incorporates:
             *  Gain: '<S1226>/Gain'
             */
            VeRCVF_b_ChlrRfgVlv_DVC_Lim_AM1 = VeRCVF_b_ChlrRfgVlv_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1219>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1219>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1222>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_ChlrRfgVlv_DVC_Lim_AM1)));

            /* End of Outputs for SubSystem: '<S1219>/Check_DVC_Limits' */
        }

        /* End of If: '<S1219>/If' */

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1224>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_ChlrRfgVlv_DVC_Lim_AM1;

        /* End of Outputs for SubSystem: '<S1188>/ChlrRfgDVCLimits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1188>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1218>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1188>/Check_DVC_Limits' */
    }

    /* End of If: '<S1188>/If' */

    /* Switch: '<S1220>/Switch' incorporates:
     *  Constant: '<S1228>/Calib'
     */
    if (KeRCVF_b_ChlrRfgVlv_DVC_LimSlct)
    {
        /* Switch: '<S1220>/Switch' incorporates:
         *  Constant: '<S1227>/Calib'
         */
        VeRCVF_b_ChlrRfgVlv_DVC_Lim_AD = KeRCVF_b_ChlrRfgVlv_DVC_LimDial;
    }
    else
    {
        /* Switch: '<S1220>/Switch' */
        VeRCVF_b_ChlrRfgVlv_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1220>/Switch' */

    /* Switch: '<S1229>/Switch' incorporates:
     *  Constant: '<S1237>/Calib'
     */
    if (KeRCVF_b_CPV_CalibStrt_DVC_Lim_SD)
    {
        /* Switch: '<S1229>/Switch' incorporates:
         *  Constant: '<S1236>/Calib'
         */
        VeRCVF_b_CPV_CalibStrt_DVC_Lim_AD = KeRCVF_b_CPV_CalibStrt_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1229>/Switch' incorporates:
         *  Constant: '<S1233>/Constant'
         *  Constant: '<S1246>/Constant1'
         *  Constant: '<S1246>/Constant2'
         *  Constant: '<S1247>/Constant1'
         *  Constant: '<S1247>/Constant2'
         *  Constant: '<S1248>/Constant1'
         *  Constant: '<S1248>/Constant2'
         *  DataStoreRead: '<S1189>/DataStoreRead'
         *  Logic: '<S1189>/Logical'
         *  Logic: '<S1189>/Logical2'
         *  Logic: '<S1235>/Logical1'
         *  Logic: '<S1246>/Logical Operator'
         *  Logic: '<S1247>/Logical Operator'
         *  Logic: '<S1248>/Logical Operator'
         *  RelationalOperator: '<S1189>/Comparison5'
         *  RelationalOperator: '<S1246>/Relational Operator1'
         *  RelationalOperator: '<S1246>/Relational Operator2'
         *  RelationalOperator: '<S1247>/Relational Operator1'
         *  RelationalOperator: '<S1247>/Relational Operator2'
         *  RelationalOperator: '<S1248>/Relational Operator1'
         *  RelationalOperator: '<S1248>/Relational Operator2'
         */
        VeRCVF_b_CPV_CalibStrt_DVC_Lim_AD = (((VeRCVR_b_CPV_Calibration_Request)
            && (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml)) && ((((rtb_Logical_a_tmp_3 == 0U) ||
            (rtb_Logical_a_tmp_4 != 0U)) && ((rtb_Logical_a_tmp_1 == 0U) ||
            (rtb_Logical_a_tmp_2 != 0U))) && ((rtb_Logical_a_tmp == 0U) ||
            (rtb_Logical_a_tmp_0 != 0U))));
    }

    /* If: '<S1189>/If' incorporates:
     *  Constant: '<S1234>/Constant'
     *  RelationalOperator: '<S1189>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ak) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1189>/CPV_ChkDVC_Limits' incorporates:
         *  ActionPort: '<S1230>/ActionPort'
         */
        /* If: '<S1230>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1230>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S1239>/ActionPort'
             */
            /* Logic: '<S1239>/Logical3' incorporates:
             *  Constant: '<S1241>/Constant'
             *  Constant: '<S1242>/Constant1'
             *  Constant: '<S1242>/Constant2'
             *  Logic: '<S1239>/Logical2'
             *  Logic: '<S1242>/Logical Operator'
             *  RelationalOperator: '<S1239>/Comparison3'
             *  RelationalOperator: '<S1239>/Comparison4'
             *  RelationalOperator: '<S1242>/Relational Operator1'
             *  RelationalOperator: '<S1242>/Relational Operator2'
             */
            VeRCVF_b_CPV_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) && ((rtb_Logical_a_tmp_3 != 0U) &&
                (rtb_Logical_a_tmp_4 == 0U))) && (!Switch3_f));

            /* Merge: '<S1230>/Merge' incorporates:
             *  Gain: '<S1243>/Gain'
             */
            VeRCVF_b_CPV_DVC_Lim_AM1 = VeRCVF_b_CPV_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1230>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1230>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1238>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_CPV_DVC_Lim_AM1)));

            /* End of Outputs for SubSystem: '<S1230>/Check_DVC_Limits' */
        }

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1240>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_CPV_DVC_Lim_AM1;

        /* End of Outputs for SubSystem: '<S1189>/CPV_ChkDVC_Limits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1189>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1232>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1189>/Check_DVC_Limits' */
    }

    /* Switch: '<S1231>/Switch' incorporates:
     *  Constant: '<S1245>/Calib'
     */
    if (KeRCVF_b_CPV_DVC_Lim_SD)
    {
        /* Switch: '<S1231>/Switch' incorporates:
         *  Constant: '<S1244>/Calib'
         */
        VeRCVF_b_CPV_DVC_Lim_AD = KeRCVF_b_CPV_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1231>/Switch' */
        VeRCVF_b_CPV_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1231>/Switch' */

    /* If: '<S1190>/If' incorporates:
     *  Constant: '<S1255>/Constant'
     *  RelationalOperator: '<S1190>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fm) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1190>/EEXV_ChkDVC_Limits' incorporates:
         *  ActionPort: '<S1251>/ActionPort'
         */
        /* If: '<S1251>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1251>/ChkLimits' incorporates:
             *  ActionPort: '<S1261>/ActionPort'
             */
            /* Merge: '<S1197>/Merge' incorporates:
             *  Constant: '<S1262>/Constant'
             *  Logic: '<S1261>/Logical3'
             *  RelationalOperator: '<S1261>/Comparison3'
             *  RelationalOperator: '<S1261>/Comparison4'
             */
            VeRCVF_b_OEXV_DVC_Lim_AD = ((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) && (!Switch3_f));

            /* End of Outputs for SubSystem: '<S1251>/ChkLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1251>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1260>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

            /* End of Outputs for SubSystem: '<S1251>/Check_DVC_Limits' */
        }

        /* End of If: '<S1251>/If' */
        /* End of Outputs for SubSystem: '<S1190>/EEXV_ChkDVC_Limits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1190>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1249>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1190>/Check_DVC_Limits' */
    }

    /* End of If: '<S1190>/If' */

    /* Outputs for Atomic SubSystem: '<S1190>/EdgeRising' */
    /* Logic: '<S1253>/AND' incorporates:
     *  Logic: '<S1253>/OR1'
     *  UnitDelay: '<S1253>/UnitDelay'
     */
    rtb_Gain_p = ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_j0a) &&
                  (!RCVR_ac_DW.UnitDelay_DSTATE_nu));

    /* Update for UnitDelay: '<S1253>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_nu =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_j0a;

    /* End of Outputs for SubSystem: '<S1190>/EdgeRising' */

    /* Switch: '<S1250>/Switch' incorporates:
     *  Constant: '<S1259>/Calib'
     */
    if (KeRCVF_b_EEXV_CalibStrt_DVC_Lim_SD)
    {
        /* Switch: '<S1250>/Switch' incorporates:
         *  Constant: '<S1258>/Calib'
         */
        VeRCVF_b_EEXV_CalibStrt_DVC_Lim_AD = KeRCVF_b_EEXV_CalibStrt_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1250>/Switch' incorporates:
         *  Constant: '<S1254>/Constant'
         *  Constant: '<S1265>/Constant1'
         *  Constant: '<S1265>/Constant2'
         *  DataStoreRead: '<S1265>/StatusByte_LIN2_BusOff'
         *  Logic: '<S1190>/Logical'
         *  Logic: '<S1190>/Logical2'
         *  Logic: '<S1265>/Logical Operator'
         *  RelationalOperator: '<S1190>/Comparison5'
         *  RelationalOperator: '<S1265>/Relational Operator1'
         *  RelationalOperator: '<S1265>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S1265>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1265>/Bitwise Operator2'
         */
        VeRCVF_b_EEXV_CalibStrt_DVC_Lim_AD = ((rtb_Gain_p && (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
            CePMTR_e_DISBL_All_Thrml)) && (((((uint32)
            RCVR_ac_DW.StatusByte_LIN2_BusOff) & 1U) == 0U) || ((((uint32)
            RCVR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U)));
    }

    /* End of Switch: '<S1250>/Switch' */

    /* Switch: '<S1252>/Switch' incorporates:
     *  Constant: '<S1264>/Calib'
     */
    if (KeRCVF_b_EEXV_DVC_Lim_SD)
    {
        /* Switch: '<S1252>/Switch' incorporates:
         *  Constant: '<S1263>/Calib'
         */
        VeRCVF_b_EEXV_DVC_Lim_AD = KeRCVF_b_EEXV_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1252>/Switch' */
        VeRCVF_b_EEXV_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1252>/Switch' */

    /* Switch: '<S1269>/Switch1' incorporates:
     *  Constant: '<S1272>/Constant'
     *  Constant: '<S1273>/Constant'
     *  Constant: '<S1274>/Constant'
     *  Logic: '<S1270>/Logical5'
     *  RelationalOperator: '<S1270>/Comparison2'
     *  RelationalOperator: '<S1270>/Comparison3'
     *  RelationalOperator: '<S1271>/Comparison2'
     *  Switch: '<S1269>/Switch2'
     */
    if ((CeTAIR_e_EXV_Calibration_Fail == ((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf) ==
            CeTAIR_e_EXV_Calibration_SNA))
    {
        /* Switch: '<S1269>/Switch1' incorporates:
         *  Constant: '<S1266>/Constant'
         */
        RCVR_ac_B.Switch1_m = CeRCVR_e_EXV_Routine_Failed;
    }
    else if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf) ==
             CeTAIR_e_EXV_Calibration_Complete)
    {
        /* Switch: '<S1269>/Switch2' incorporates:
         *  Constant: '<S1267>/Constant'
         *  Switch: '<S1269>/Switch1'
         */
        RCVR_ac_B.Switch1_m = CeRCVR_e_EXV_Routine_Passed;
    }
    else
    {
        /* Switch: '<S1269>/Switch1' incorporates:
         *  Constant: '<S1268>/Constant'
         *  Switch: '<S1269>/Switch2'
         */
        RCVR_ac_B.Switch1_m = CeRCVR_e_EXV_Routine_In_Progress;
    }

    /* End of Switch: '<S1269>/Switch1' */

    /* If: '<S1191>/If' incorporates:
     *  Constant: '<S1281>/Constant'
     *  RelationalOperator: '<S1191>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ft) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1191>/EXV_ChkDVC_Limits' incorporates:
         *  ActionPort: '<S1277>/ActionPort'
         */
        /* If: '<S1277>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1277>/ChkLimits' incorporates:
             *  ActionPort: '<S1287>/ActionPort'
             */
            /* Merge: '<S1197>/Merge' incorporates:
             *  Constant: '<S1288>/Constant'
             *  Logic: '<S1287>/Logical3'
             *  RelationalOperator: '<S1287>/Comparison3'
             *  RelationalOperator: '<S1287>/Comparison4'
             */
            VeRCVF_b_OEXV_DVC_Lim_AD = ((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) && (!Switch3_f));

            /* End of Outputs for SubSystem: '<S1277>/ChkLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1277>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1286>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

            /* End of Outputs for SubSystem: '<S1277>/Check_DVC_Limits' */
        }

        /* End of If: '<S1277>/If' */
        /* End of Outputs for SubSystem: '<S1191>/EXV_ChkDVC_Limits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1191>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1275>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1191>/Check_DVC_Limits' */
    }

    /* End of If: '<S1191>/If' */

    /* Outputs for Atomic SubSystem: '<S1191>/EdgeRising' */
    /* Logic: '<S1279>/AND' incorporates:
     *  Logic: '<S1279>/OR1'
     *  UnitDelay: '<S1279>/UnitDelay'
     */
    rtb_Gain_p = ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bb) &&
                  (!RCVR_ac_DW.UnitDelay_DSTATE_p0));

    /* Update for UnitDelay: '<S1279>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_p0 =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bb;

    /* End of Outputs for SubSystem: '<S1191>/EdgeRising' */

    /* Switch: '<S1276>/Switch' incorporates:
     *  Constant: '<S1285>/Calib'
     */
    if (KeRCVF_b_EXV_CalibStrt_DVC_Lim_SD)
    {
        /* Switch: '<S1276>/Switch' incorporates:
         *  Constant: '<S1284>/Calib'
         */
        VeRCVF_b_EXV_CalibStrt_DVC_Lim_AD = KeRCVF_b_EXV_CalibStrt_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1276>/Switch' incorporates:
         *  Constant: '<S1280>/Constant'
         *  Constant: '<S1291>/Constant1'
         *  Constant: '<S1291>/Constant2'
         *  DataStoreRead: '<S1291>/StatusByte_LIN2_BusOff'
         *  Logic: '<S1191>/Logical'
         *  Logic: '<S1191>/Logical2'
         *  Logic: '<S1291>/Logical Operator'
         *  RelationalOperator: '<S1191>/Comparison5'
         *  RelationalOperator: '<S1291>/Relational Operator1'
         *  RelationalOperator: '<S1291>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S1291>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1291>/Bitwise Operator2'
         */
        VeRCVF_b_EXV_CalibStrt_DVC_Lim_AD = ((rtb_Gain_p && (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
            CePMTR_e_DISBL_All_Thrml)) && (((((uint32)
            RCVR_ac_DW.StatusByte_LIN2_BusOff) & 1U) == 0U) || ((((uint32)
            RCVR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U)));
    }

    /* End of Switch: '<S1276>/Switch' */

    /* Switch: '<S1278>/Switch' incorporates:
     *  Constant: '<S1290>/Calib'
     */
    if (KeRCVF_b_EXV_DVC_Lim_SD)
    {
        /* Switch: '<S1278>/Switch' incorporates:
         *  Constant: '<S1289>/Calib'
         */
        VeRCVF_b_EXV_DVC_Lim_AD = KeRCVF_b_EXV_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1278>/Switch' */
        VeRCVF_b_EXV_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1278>/Switch' */

    /* Switch: '<S1295>/Switch1' incorporates:
     *  Constant: '<S1298>/Constant'
     *  Constant: '<S1299>/Constant'
     *  Constant: '<S1300>/Constant'
     *  Logic: '<S1296>/Logical5'
     *  RelationalOperator: '<S1296>/Comparison2'
     *  RelationalOperator: '<S1296>/Comparison3'
     *  RelationalOperator: '<S1297>/Comparison2'
     *  Switch: '<S1295>/Switch2'
     */
    if ((CeTAIR_e_EXV_Calibration_Fail == ((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
            CeTAIR_e_EXV_Calibration_SNA))
    {
        /* Switch: '<S1295>/Switch1' incorporates:
         *  Constant: '<S1292>/Constant'
         */
        RCVR_ac_B.Switch1_p = CeRCVR_e_EXV_Routine_Failed;
    }
    else if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac) ==
             CeTAIR_e_EXV_Calibration_Complete)
    {
        /* Switch: '<S1295>/Switch2' incorporates:
         *  Constant: '<S1293>/Constant'
         *  Switch: '<S1295>/Switch1'
         */
        RCVR_ac_B.Switch1_p = CeRCVR_e_EXV_Routine_Passed;
    }
    else
    {
        /* Switch: '<S1295>/Switch1' incorporates:
         *  Constant: '<S1294>/Constant'
         *  Switch: '<S1295>/Switch2'
         */
        RCVR_ac_B.Switch1_p = CeRCVR_e_EXV_Routine_In_Progress;
    }

    /* End of Switch: '<S1295>/Switch1' */

    /* If: '<S1192>/If' incorporates:
     *  Constant: '<S1302>/Constant'
     *  RelationalOperator: '<S1192>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nj) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1192>/FrtRfgDVCLimits' incorporates:
         *  ActionPort: '<S1303>/ActionPort'
         */
        /* If: '<S1303>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1303>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S1306>/ActionPort'
             */
            /* Logic: '<S1306>/Logical3' incorporates:
             *  Constant: '<S1308>/Constant'
             *  RelationalOperator: '<S1306>/Comparison2'
             *  RelationalOperator: '<S1306>/Comparison3'
             *  RelationalOperator: '<S1306>/Comparison4'
             */
            VeRCVF_b_FrtRfgVlv_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) &&
                (!RCVR_ac_B.OutportBufferForFrtRfg_Valve_Fault)) && (!Switch3_f));

            /* Merge: '<S1303>/Merge' incorporates:
             *  Gain: '<S1309>/Gain'
             */
            VeRCVF_b_FrtRfgVlv_DVC_Lim_AM1 = VeRCVF_b_FrtRfgVlv_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1303>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1303>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1305>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_FrtRfgVlv_DVC_Lim_AM1)));

            /* End of Outputs for SubSystem: '<S1303>/Check_DVC_Limits' */
        }

        /* End of If: '<S1303>/If' */

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1307>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_FrtRfgVlv_DVC_Lim_AM1;

        /* End of Outputs for SubSystem: '<S1192>/FrtRfgDVCLimits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1192>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1301>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1192>/Check_DVC_Limits' */
    }

    /* End of If: '<S1192>/If' */

    /* Switch: '<S1304>/Switch' incorporates:
     *  Constant: '<S1311>/Calib'
     */
    if (KeRCVF_b_FrtRfgVlv_DVC_LimSlct)
    {
        /* Switch: '<S1304>/Switch' incorporates:
         *  Constant: '<S1310>/Calib'
         */
        VeRCVF_b_FrtRfgVlv_DVC_Lim_AD = KeRCVF_b_FrtRfgVlv_DVC_LimDial;
    }
    else
    {
        /* Switch: '<S1304>/Switch' */
        VeRCVF_b_FrtRfgVlv_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1304>/Switch' */

    /* If: '<S1193>/If' incorporates:
     *  Constant: '<S1314>/Constant'
     *  RelationalOperator: '<S1193>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fd) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1193>/HTL_BypVlvDVCLimits' incorporates:
         *  ActionPort: '<S1315>/ActionPort'
         */
        /* If: '<S1315>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1315>/Chk_HTL_BypVlvLimits' incorporates:
             *  ActionPort: '<S1320>/ActionPort'
             */
            /* Logic: '<S1320>/Logical3' incorporates:
             *  Constant: '<S1322>/Constant'
             *  RelationalOperator: '<S1320>/Comparison2'
             *  RelationalOperator: '<S1320>/Comparison3'
             *  RelationalOperator: '<S1320>/Comparison4'
             */
            VeRCVF_b_HTL_BypVlv_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) &&
                (!RCVR_ac_B.OutportBufferForHTL_BypVlv_Fault)) && (!Switch3_f));

            /* Merge: '<S1315>/Merge' incorporates:
             *  Gain: '<S1323>/Gain'
             */
            VeRCVF_b_HTL_BypVlv_DVC_Lim_AM = VeRCVF_b_HTL_BypVlv_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1315>/Chk_HTL_BypVlvLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1315>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1319>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_HTL_BypVlv_DVC_Lim_AM)));

            /* End of Outputs for SubSystem: '<S1315>/Check_DVC_Limits' */
        }

        /* End of If: '<S1315>/If' */

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1321>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_HTL_BypVlv_DVC_Lim_AM;

        /* End of Outputs for SubSystem: '<S1193>/HTL_BypVlvDVCLimits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1193>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1312>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1193>/Check_DVC_Limits' */
    }

    /* End of If: '<S1193>/If' */

    /* Switch: '<S1316>/Switch' incorporates:
     *  Constant: '<S1325>/Calib'
     */
    if (KeRCVF_b_HTL_CalibStrt_DVC_Lim_SD)
    {
        /* Switch: '<S1316>/Switch' incorporates:
         *  Constant: '<S1324>/Calib'
         */
        VeRCVF_b_HTL_CalibStrt_DVC_Lim_AD = KeRCVF_b_HTL_CalibStrt_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1316>/Switch' incorporates:
         *  Constant: '<S1313>/Constant'
         *  Constant: '<S1328>/Constant1'
         *  Constant: '<S1328>/Constant2'
         *  Constant: '<S1329>/Constant1'
         *  Constant: '<S1329>/Constant2'
         *  DataStoreRead: '<S1193>/DataStoreRead'
         *  DataStoreRead: '<S1328>/StatusByte_HB_PSC_CtrlValCCktPerf'
         *  Logic: '<S1193>/Logical'
         *  Logic: '<S1193>/Logical2'
         *  Logic: '<S1318>/Logical1'
         *  Logic: '<S1328>/Logical Operator'
         *  Logic: '<S1329>/Logical Operator'
         *  RelationalOperator: '<S1193>/Comparison5'
         *  RelationalOperator: '<S1328>/Relational Operator1'
         *  RelationalOperator: '<S1328>/Relational Operator2'
         *  RelationalOperator: '<S1329>/Relational Operator1'
         *  RelationalOperator: '<S1329>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S1328>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1328>/Bitwise Operator2'
         */
        VeRCVF_b_HTL_CalibStrt_DVC_Lim_AD = (((VeRCVR_b_HTL_Calibration_Request)
            && (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml)) && ((((((uint32)
            RCVR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf) & 1U) == 0U) ||
            ((((uint32)RCVR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf) & 64U) !=
             0U)) && ((tmp_c == 0U) || (tmp_d != 0U))));
    }

    /* Switch: '<S1317>/Switch' incorporates:
     *  Constant: '<S1327>/Calib'
     */
    if (KeRCVF_b_HTL_BypVlv_DVC_Lim_Slct)
    {
        /* Switch: '<S1317>/Switch' incorporates:
         *  Constant: '<S1326>/Calib'
         */
        VeRCVF_b_HTL_BypVlv_DVC_Lim_AD = KeRCVF_b_HTL_BypVlv_DVC_Lim_Dial;
    }
    else
    {
        /* Switch: '<S1317>/Switch' */
        VeRCVF_b_HTL_BypVlv_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1317>/Switch' */

    /* If: '<S1194>/If' incorporates:
     *  Constant: '<S1331>/Constant'
     *  RelationalOperator: '<S1194>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_mvu) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1194>/LTPPDVCLimits' incorporates:
         *  ActionPort: '<S1333>/ActionPort'
         */
        /* If: '<S1333>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1333>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S1337>/ActionPort'
             */
            /* Outputs for Function Call SubSystem: '<S4>/RCVC' */
            /* Logic: '<S1337>/Logical3' incorporates:
             *  Constant: '<S1172>/Calib'
             *  Constant: '<S1339>/Constant'
             *  Logic: '<S26>/Logical'
             *  Logic: '<S26>/Logical1'
             *  RelationalOperator: '<S1337>/Comparison3'
             *  RelationalOperator: '<S1337>/Comparison4'
             */
            VeRCVF_b_HTSO_Vlv_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) &&
                (((!RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mc) &&
                  (!RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ae)) ||
                 (!KeRCVR_b_HT_SO_Vlv_Fault_Dial))) && (!Switch3_f));

            /* End of Outputs for SubSystem: '<S4>/RCVC' */

            /* Merge: '<S1333>/Merge' incorporates:
             *  Gain: '<S1340>/Gain'
             */
            VeRCVF_b_HTSO_Vlv_DVC_Lim_AM1 = VeRCVF_b_HTSO_Vlv_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1333>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1333>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1336>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_HTSO_Vlv_DVC_Lim_AM1)));

            /* End of Outputs for SubSystem: '<S1333>/Check_DVC_Limits' */
        }

        /* End of If: '<S1333>/If' */

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1338>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_HTSO_Vlv_DVC_Lim_AM1;

        /* End of Outputs for SubSystem: '<S1194>/LTPPDVCLimits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1194>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1330>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1194>/Check_DVC_Limits' */
    }

    /* End of If: '<S1194>/If' */

    /* Switch: '<S1332>/Switch' incorporates:
     *  Constant: '<S1335>/Calib'
     */
    if (KeRCVF_b_HTSO_Vlv_DVC_Lim_Slct)
    {
        /* Switch: '<S1332>/Switch' incorporates:
         *  Constant: '<S1334>/Calib'
         */
        VeRCVF_b_HTSO_Vlv_DVC_Lim_AD = KeRCVF_b_HTSO_Vlv_DVC_Lim_Dial;
    }
    else
    {
        /* Switch: '<S1332>/Switch' */
        VeRCVF_b_HTSO_Vlv_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1332>/Switch' */

    /* If: '<S1195>/If' incorporates:
     *  Constant: '<S1343>/Constant'
     *  RelationalOperator: '<S1195>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_df) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1195>/LTR_BypVlvDVCLimits' incorporates:
         *  ActionPort: '<S1345>/ActionPort'
         */
        /* If: '<S1345>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1345>/Chk_LTR_BypVlvLimits' incorporates:
             *  ActionPort: '<S1351>/ActionPort'
             */
            /* Logic: '<S1351>/Logical3' incorporates:
             *  Constant: '<S1353>/Constant'
             *  RelationalOperator: '<S1351>/Comparison2'
             *  RelationalOperator: '<S1351>/Comparison3'
             *  RelationalOperator: '<S1351>/Comparison4'
             */
            VeRCVF_b_LTR_BypVlv_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) &&
                (!RCVR_ac_B.OutportBufferForLTR_BypVlv_Fault)) && (!Switch3_f));

            /* Merge: '<S1345>/Merge' incorporates:
             *  Gain: '<S1354>/Gain'
             */
            VeRCVF_b_LTR_BypVlv_DVC_Lim_AM = VeRCVF_b_LTR_BypVlv_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1345>/Chk_LTR_BypVlvLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1345>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1350>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_LTR_BypVlv_DVC_Lim_AM)));

            /* End of Outputs for SubSystem: '<S1345>/Check_DVC_Limits' */
        }

        /* End of If: '<S1345>/If' */

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1352>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_LTR_BypVlv_DVC_Lim_AM;

        /* End of Outputs for SubSystem: '<S1195>/LTR_BypVlvDVCLimits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1195>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1341>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1195>/Check_DVC_Limits' */
    }

    /* End of If: '<S1195>/If' */

    /* Switch: '<S1344>/Switch' incorporates:
     *  Constant: '<S1349>/Calib'
     */
    if (KeRCVF_b_LTR_BypVlv_DVC_Lim_Slct)
    {
        /* Switch: '<S1344>/Switch' incorporates:
         *  Constant: '<S1348>/Calib'
         */
        VeRCVF_b_LTR_BypVlv_DVC_Lim_AD = KeRCVF_b_LTR_BypVlv_DVC_Lim_Dial;
    }
    else
    {
        /* Switch: '<S1344>/Switch' */
        VeRCVF_b_LTR_BypVlv_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1344>/Switch' */

    /* Switch: '<S1346>/Switch' incorporates:
     *  Constant: '<S1356>/Calib'
     */
    if (KeRCVF_b_LTR_CalibStrt_DVC_Lim_SD)
    {
        /* Switch: '<S1346>/Switch' incorporates:
         *  Constant: '<S1355>/Calib'
         */
        VeRCVF_b_LTR_CalibStrt_DVC_Lim_AD = KeRCVF_b_LTR_CalibStrt_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1346>/Switch' incorporates:
         *  Constant: '<S1342>/Constant'
         *  Constant: '<S1357>/Constant1'
         *  Constant: '<S1357>/Constant2'
         *  Constant: '<S1358>/Constant1'
         *  Constant: '<S1358>/Constant2'
         *  DataStoreRead: '<S1195>/DataStoreRead'
         *  DataStoreRead: '<S1357>/StatusByte_HB_PSC_CtrlValBCktPerf'
         *  Logic: '<S1195>/Logical'
         *  Logic: '<S1195>/Logical2'
         *  Logic: '<S1347>/Logical1'
         *  Logic: '<S1357>/Logical Operator'
         *  Logic: '<S1358>/Logical Operator'
         *  RelationalOperator: '<S1195>/Comparison5'
         *  RelationalOperator: '<S1357>/Relational Operator1'
         *  RelationalOperator: '<S1357>/Relational Operator2'
         *  RelationalOperator: '<S1358>/Relational Operator1'
         *  RelationalOperator: '<S1358>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S1357>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1357>/Bitwise Operator2'
         */
        VeRCVF_b_LTR_CalibStrt_DVC_Lim_AD = (((VeRCVR_b_LTR_Calibration_Request)
            && (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml)) && ((((((uint32)
            RCVR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf) & 1U) == 0U) ||
            ((((uint32)RCVR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf) & 64U) !=
             0U)) && ((tmp_e == 0U) || (tmp_f != 0U))));
    }

    /* If: '<S1196>/If' incorporates:
     *  Constant: '<S1360>/Constant'
     *  RelationalOperator: '<S1196>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aa) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1196>/LTPPDVCLimits' incorporates:
         *  ActionPort: '<S1362>/ActionPort'
         */
        /* If: '<S1362>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1362>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S1366>/ActionPort'
             */
            /* Logic: '<S1366>/Logical3' incorporates:
             *  Constant: '<S1368>/Constant'
             *  RelationalOperator: '<S1366>/Comparison2'
             *  RelationalOperator: '<S1366>/Comparison3'
             *  RelationalOperator: '<S1366>/Comparison4'
             */
            VeRCVF_b_LTSO_Vlv_isLimitCheckOk = (((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) &&
                (!RCVR_ac_B.OutportBufferForLT_SO_Vlv_Fault)) && (!Switch3_f));

            /* Merge: '<S1362>/Merge' incorporates:
             *  Gain: '<S1369>/Gain'
             */
            VeRCVF_b_LTSO_Vlv_DVC_Lim_AM = VeRCVF_b_LTSO_Vlv_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S1362>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1362>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1365>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_LTSO_Vlv_DVC_Lim_AM)));

            /* End of Outputs for SubSystem: '<S1362>/Check_DVC_Limits' */
        }

        /* End of If: '<S1362>/If' */

        /* Merge: '<S1197>/Merge' incorporates:
         *  Gain: '<S1367>/Gain'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = VeRCVF_b_LTSO_Vlv_DVC_Lim_AM;

        /* End of Outputs for SubSystem: '<S1196>/LTPPDVCLimits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1196>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1359>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1196>/Check_DVC_Limits' */
    }

    /* End of If: '<S1196>/If' */

    /* Switch: '<S1361>/Switch' incorporates:
     *  Constant: '<S1364>/Calib'
     */
    if (KeRCVF_b_LTSO_Vlv_DVC_Lim_Slct)
    {
        /* Switch: '<S1361>/Switch' incorporates:
         *  Constant: '<S1363>/Calib'
         */
        VeRCVF_b_LTSO_Vlv_DVC_Lim_AD = KeRCVF_b_LTSO_Vlv_DVC_Lim_Dial;
    }
    else
    {
        /* Switch: '<S1361>/Switch' */
        VeRCVF_b_LTSO_Vlv_DVC_Lim_AD = VeRCVF_b_OEXV_DVC_Lim_AD;
    }

    /* End of Switch: '<S1361>/Switch' */

    /* If: '<S1197>/If' incorporates:
     *  Constant: '<S1373>/Constant'
     *  RelationalOperator: '<S1197>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtRCVR_FUNC_MedTEDInport159'
     */
    if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_im) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S1197>/OEXV_ChkDVC_Limits' incorporates:
         *  ActionPort: '<S1375>/ActionPort'
         */
        /* If: '<S1375>/If' */
        if (Switch2_e)
        {
            /* Outputs for IfAction SubSystem: '<S1375>/ChkLimits' incorporates:
             *  ActionPort: '<S1382>/ActionPort'
             */
            /* Merge: '<S1197>/Merge' incorporates:
             *  Constant: '<S1383>/Constant'
             *  Logic: '<S1382>/Logical3'
             *  RelationalOperator: '<S1382>/Comparison3'
             *  RelationalOperator: '<S1382>/Comparison4'
             */
            VeRCVF_b_OEXV_DVC_Lim_AD = ((((uint32)
                RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
                CePMTR_e_DISBL_All_Thrml) && (!Switch3_f));

            /* End of Outputs for SubSystem: '<S1375>/ChkLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1375>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S1381>/ActionPort'
             */
            RCVR_ac_Check_DVC_Limits((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

            /* End of Outputs for SubSystem: '<S1375>/Check_DVC_Limits' */
        }

        /* End of If: '<S1375>/If' */
        /* End of Outputs for SubSystem: '<S1197>/OEXV_ChkDVC_Limits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1197>/Check_DVC_Limits' incorporates:
         *  ActionPort: '<S1370>/ActionPort'
         */
        RCVR_ac_Check_DVC_Limits_m((&(VeRCVF_b_OEXV_DVC_Lim_AD)));

        /* End of Outputs for SubSystem: '<S1197>/Check_DVC_Limits' */
    }

    /* End of If: '<S1197>/If' */

    /* Outputs for Atomic SubSystem: '<S1197>/EdgeRising' */
    /* Logic: '<S1371>/AND' incorporates:
     *  Logic: '<S1371>/OR1'
     *  UnitDelay: '<S1371>/UnitDelay'
     */
    Switch2_e = ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cj) &&
                 (!RCVR_ac_DW.UnitDelay_DSTATE_hz));

    /* Update for UnitDelay: '<S1371>/UnitDelay' */
    RCVR_ac_DW.UnitDelay_DSTATE_hz =
        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cj;

    /* End of Outputs for SubSystem: '<S1197>/EdgeRising' */

    /* Switch: '<S1374>/Switch' incorporates:
     *  Constant: '<S1380>/Calib'
     */
    if (KeRCVF_b_OEXV_CalibStrt_DVC_Lim_SD)
    {
        /* Switch: '<S1374>/Switch' incorporates:
         *  Constant: '<S1379>/Calib'
         */
        VeRCVF_b_OEXV_CalibStrt_DVC_Lim_AD = KeRCVF_b_OEXV_CalibStrt_DVC_Lim_D;
    }
    else
    {
        /* Switch: '<S1374>/Switch' incorporates:
         *  Constant: '<S1372>/Constant'
         *  Constant: '<S1386>/Constant1'
         *  Constant: '<S1386>/Constant2'
         *  DataStoreRead: '<S1386>/StatusByte_LIN2_BusOff'
         *  Logic: '<S1197>/Logical'
         *  Logic: '<S1197>/Logical2'
         *  Logic: '<S1386>/Logical Operator'
         *  RelationalOperator: '<S1197>/Comparison5'
         *  RelationalOperator: '<S1386>/Relational Operator1'
         *  RelationalOperator: '<S1386>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S1386>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1386>/Bitwise Operator2'
         */
        VeRCVF_b_OEXV_CalibStrt_DVC_Lim_AD = ((Switch2_e && (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_le) !=
            CePMTR_e_DISBL_All_Thrml)) && (((((uint32)
            RCVR_ac_DW.StatusByte_LIN2_BusOff) & 1U) == 0U) || ((((uint32)
            RCVR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U)));
    }

    /* End of Switch: '<S1374>/Switch' */

    /* Switch: '<S1376>/Switch' incorporates:
     *  Constant: '<S1385>/Calib'
     */
    if (KeRCVF_b_OEXV_DVC_Lim_SD)
    {
        /* Switch: '<S1376>/Switch' incorporates:
         *  Constant: '<S1384>/Calib'
         */
        VeRCVF_b_OEXV_DVC_Lim_AD = KeRCVF_b_OEXV_DVC_Lim_D;
    }

    /* End of Switch: '<S1376>/Switch' */

    /* Switch: '<S1390>/Switch1' incorporates:
     *  Constant: '<S1393>/Constant'
     *  Constant: '<S1394>/Constant'
     *  Constant: '<S1395>/Constant'
     *  Logic: '<S1391>/Logical5'
     *  RelationalOperator: '<S1391>/Comparison2'
     *  RelationalOperator: '<S1391>/Comparison3'
     *  RelationalOperator: '<S1392>/Comparison2'
     *  Switch: '<S1390>/Switch2'
     */
    if ((CeTAIR_e_EXV_Calibration_Fail == ((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok) ==
            CeTAIR_e_EXV_Calibration_SNA))
    {
        /* Switch: '<S1390>/Switch1' incorporates:
         *  Constant: '<S1387>/Constant'
         */
        RCVR_ac_B.Switch1_cb = CeRCVR_e_EXV_Routine_Failed;
    }
    else if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok) ==
             CeTAIR_e_EXV_Calibration_Complete)
    {
        /* Switch: '<S1390>/Switch2' incorporates:
         *  Constant: '<S1388>/Constant'
         *  Switch: '<S1390>/Switch1'
         */
        RCVR_ac_B.Switch1_cb = CeRCVR_e_EXV_Routine_Passed;
    }
    else
    {
        /* Switch: '<S1390>/Switch1' incorporates:
         *  Constant: '<S1389>/Constant'
         *  Switch: '<S1390>/Switch2'
         */
        RCVR_ac_B.Switch1_cb = CeRCVR_e_EXV_Routine_In_Progress;
    }

    /* End of Switch: '<S1390>/Switch1' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* Switch: '<S1410>/Switch' incorporates:
     *  Constant: '<S1439>/Calib'
     */
    if (KeRCVR_b_AC_ShtdwnRqst_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_AC_ShtdwnRqst' incorporates:
         *  Constant: '<S1438>/Calib'
         *  SignalConversion generated from: '<S4>/AC_ShtdwnRqst'
         */
        (void)Rte_Write_VeRCVR_b_AC_ShtdwnRqst_Value(KeRCVR_b_AC_ShtdwnRqst_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_AC_ShtdwnRqst' incorporates:
         *  SignalConversion generated from: '<S4>/AC_ShtdwnRqst'
         */
        (void)Rte_Write_VeRCVR_b_AC_ShtdwnRqst_Value(VeRCVR_b_AC_ShtdwnRqst_B4D);
    }

    /* End of Switch: '<S1410>/Switch' */

    /* Switch: '<S1396>/Switch' incorporates:
     *  Constant: '<S1426>/Calib'
     */
    if (KeRCVR_b_CAC_BypVlv_PstnCmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_CAC_BypVlv_PstnCmd' incorporates:
         *  Constant: '<S1425>/Calib'
         *  SignalConversion generated from: '<S4>/CAC_BypVlv_PstnCmd_Out'
         */
        (void)Rte_Write_VeRCVR_Pct_CAC_BypVlv_PstnCmd_Value
            (KeRCVR_Pct_CAC_BypVlv_PstnCmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_CAC_BypVlv_PstnCmd' incorporates:
         *  SignalConversion generated from: '<S4>/CAC_BypVlv_PstnCmd_Out'
         */
        (void)Rte_Write_VeRCVR_Pct_CAC_BypVlv_PstnCmd_Value
            (rtb_VM_Conditional_Signal_CAC_BypVlv_Cmd);
    }

    /* End of Switch: '<S1396>/Switch' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVC'
     */
    /* Switch: '<S809>/Switch1' incorporates:
     *  Constant: '<S801>/Constant'
     *  Constant: '<S802>/Constant'
     *  Constant: '<S803>/Constant'
     *  Constant: '<S804>/Constant'
     *  Constant: '<S805>/Constant'
     *  Logic: '<S761>/Logical6'
     *  RelationalOperator: '<S761>/Comparison2'
     *  RelationalOperator: '<S761>/Comparison3'
     *  RelationalOperator: '<S761>/Comparison5'
     *  Switch: '<S809>/Switch2'
     */
    if ((CeTAIR_e_CPV_Calibration_Fail == ((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
            CeTAIR_e_CPV_Calibration_Not_Complete))
    {
        tmp = CeRCVR_e_CPV_RoutineSts_Complete_Fail;
    }
    else if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
             CeTAIR_e_CPV_Calibration_Complete)
    {
        /* Switch: '<S809>/Switch2' incorporates:
         *  Constant: '<S800>/Constant'
         */
        tmp = CeRCVR_e_CPV_RoutineSts_Complete_Pass;
    }
    else
    {
        tmp = CeRCVR_e_CPV_RoutineSts_In_Progress;
    }

    /* End of Switch: '<S809>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeRCVR_e_CPV_RtnSts' incorporates:
     *  SignalConversion generated from: '<S4>/CPV_Cal_RtnSts_out'
     */
    (void)Rte_Write_VeRCVR_e_CPV_RtnSts_Value(tmp);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* Outport: '<Root>/VeRCVR_e_CPV_Valve_Stuck_State' incorporates:
     *  DataTypeConversion: '<S1399>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/CPV_Valve_Stuck_State_Out'
     *  Switch: '<S784>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_CPV_Valve_Stuck_State_Value
        (RCVR_ac_DW.UnitDelay_DSTATE_cn);

    /* Switch: '<S1412>/Switch' incorporates:
     *  Constant: '<S1444>/Calib'
     *  Constant: '<S1445>/Calib'
     *  Gain: '<S1143>/Gain'
     *  Logic: '<S1075>/Logical4'
     *  RelationalOperator: '<S1075>/Comparison5'
     */
    if (KeRCVR_b_ChlrVlvTrnstn_SD)
    {
        rtb_Gain_p = KeRCVR_b_ChlrVlvTrnstn_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S4>/RCVC' */
        rtb_Gain_p = ((VeRCVR_b_RSV_transitionTmrActv) && (RCVR_ac_B.In3 !=
                       rtb_AND_ijg));

        /* End of Outputs for SubSystem: '<S4>/RCVC' */
    }

    /* End of Switch: '<S1412>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeRCVR_b_Chlr_OpenCompTransition' incorporates:
     *  SignalConversion generated from: '<S4>/ChlrCompTransition_Out'
     */
    (void)Rte_Write_VeRCVR_b_Chlr_OpenCompTransition_Value(rtb_Gain_p);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* Switch: '<S1408>/Switch' incorporates:
     *  Constant: '<S1434>/Calib'
     */
    if (KeRCVR_b_ChlrRfgt_SO_VlvCmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd' incorporates:
         *  Constant: '<S1433>/Calib'
         *  SignalConversion generated from: '<S4>/ChlrRfgtShtoff_VlvCmd'
         */
        (void)Rte_Write_VeRCVR_b_ChlrRfgtShtoff_VlvCmd_Value
            (KeRCVR_b_ChlrRfgt_SO_VlvCmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd' incorporates:
         *  SignalConversion generated from: '<S4>/ChlrRfgtShtoff_VlvCmd'
         */
        (void)Rte_Write_VeRCVR_b_ChlrRfgtShtoff_VlvCmd_Value(RCVR_ac_B.Switch_o);
    }

    /* End of Switch: '<S1408>/Switch' */

    /* Outport: '<Root>/VeRCVR_b_ChlrRfrgtShtoff_VlvSts' incorporates:
     *  Gain: '<S1435>/Gain'
     *  SignalConversion generated from: '<S4>/ChlrRfgtShtoff_VlvSts'
     */
    (void)Rte_Write_VeRCVR_b_ChlrRfrgtShtoff_VlvSts_Value(RCVR_ac_B.Gain_f);

    /* Switch: '<S1418>/Switch' incorporates:
     *  Constant: '<S1468>/Calib'
     *  Constant: '<S1472>/Calib'
     */
    if (KeRCVR_b_EEXV_CalRq_SD)
    {
        UnitDelay_DSTATE_ju3_tmp = KeRCVR_e_EEXV_CalRq_D;
    }

    /* Outport: '<Root>/VeRCVR_e_EEXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S4>/EEXV_CalRq_Out'
     *  Switch: '<S1418>/Switch'
     */
    (void)Rte_Write_VeRCVR_e_EEXV_CalRq_Value(UnitDelay_DSTATE_ju3_tmp);

    /* Switch: '<S1418>/Switch1' incorporates:
     *  Constant: '<S1469>/Calib'
     */
    if (KeRCVR_b_EEXV_Cmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_EEXV_Cmd' incorporates:
         *  Constant: '<S1466>/Calib'
         *  SignalConversion generated from: '<S4>/EEXV_Cmd_Out'
         */
        (void)Rte_Write_VeRCVR_Pct_EEXV_Cmd_Value(KeRCVR_Pct_EEXV_Cmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_EEXV_Cmd' incorporates:
         *  SignalConversion generated from: '<S4>/EEXV_Cmd_Out'
         */
        (void)Rte_Write_VeRCVR_Pct_EEXV_Cmd_Value(rtb_Sum2_et);
    }

    /* End of Switch: '<S1418>/Switch1' */

    /* Outport: '<Root>/VeRCVR_b_EXV_PresSensrRA' incorporates:
     *  Gain: '<S1407>/Gain'
     *  SignalConversion generated from: '<S4>/EXVPresSnsr_RA_Out'
     */
    (void)Rte_Write_VeRCVR_b_EXV_PresSensrRA_Value(rtb_AND_k45);

    /* Switch: '<S1411>/Switch' incorporates:
     *  Constant: '<S1442>/Calib'
     */
    if (KeRCVR_b_EXV_PosRq_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_EXV_PosRq' incorporates:
         *  Constant: '<S1440>/Calib'
         *  SignalConversion generated from: '<S4>/EXV_PosRq'
         */
        (void)Rte_Write_VeRCVR_Pct_EXV_PosRq_Value(KeRCVR_Pct_EXV_PosRq_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_EXV_PosRq' incorporates:
         *  SignalConversion generated from: '<S4>/EXV_PosRq'
         */
        (void)Rte_Write_VeRCVR_Pct_EXV_PosRq_Value(rtb_Switch2_ie);
    }

    /* End of Switch: '<S1411>/Switch' */

    /* Switch: '<S1419>/Switch1' incorporates:
     *  Constant: '<S1476>/Calib'
     *  Constant: '<S1477>/Calib'
     *  Merge: '<S763>/Merge'
     */
    if (KeRCVR_b_LINPrpVlv_CalRq_SD)
    {
        tmp_0 = KeRCVR_e_LINPrpVlv_CalRq_D;
    }
    else
    {
        tmp_0 = RCVR_ac_B.Merge_lyy;
    }

    /* Outport: '<Root>/VeRCVR_e_FrWyVlv_CalCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/FrWyVlv_CalCmd'
     *  Switch: '<S1419>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_FrWyVlv_CalCmnd_Value(tmp_0);

    /* Switch: '<S1419>/Switch' incorporates:
     *  Constant: '<S1475>/Calib'
     */
    if (KeRCVR_b_FrWyVlv_Cmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_FrWyVlv_PstnCmnd' incorporates:
         *  Constant: '<S1474>/Calib'
         *  SignalConversion generated from: '<S4>/FrWyVlv_PstnCmd'
         */
        (void)Rte_Write_VeRCVR_Pct_FrWyVlv_PstnCmnd_Value
            (KeRCVR_Pct_FrWyVlv_Cmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_FrWyVlv_PstnCmnd' incorporates:
         *  SignalConversion generated from: '<S4>/FrWyVlv_PstnCmd'
         */
        (void)Rte_Write_VeRCVR_Pct_FrWyVlv_PstnCmnd_Value(Switch1_f);
    }

    /* End of Switch: '<S1419>/Switch' */

    /* Switch: '<S1424>/Switch' incorporates:
     *  Constant: '<S1497>/Calib'
     */
    if (KeRCVR_b_CPV_PstnSv_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_FrWyVlv_PstnSv' incorporates:
         *  Constant: '<S1496>/Calib'
         *  SignalConversion generated from: '<S4>/FrWyVlv_PstnSv'
         */
        (void)Rte_Write_VeRCVR_b_FrWyVlv_PstnSv_Value(KeRCVR_b_CPV_PstnSv_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_FrWyVlv_PstnSv' incorporates:
         *  SignalConversion generated from: '<S4>/FrWyVlv_PstnSv'
         */
        (void)Rte_Write_VeRCVR_b_FrWyVlv_PstnSv_Value(RCVR_ac_B.Merge_i);
    }

    /* End of Switch: '<S1424>/Switch' */

    /* Outport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvSts' incorporates:
     *  Gain: '<S1465>/Gain'
     *  SignalConversion generated from: '<S4>/FtVlvSts'
     */
    (void)Rte_Write_VeRCVR_b_FtRfgtShtoff_VlvSts_Value(RCVR_ac_B.Gain_et);

    /* Switch: '<S1421>/Switch1' incorporates:
     *  Constant: '<S1485>/Calib'
     */
    if (KeRCVR_b_HTCV_Learning_Req_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_HTCV_Learning_Req' incorporates:
         *  Constant: '<S1484>/Calib'
         *  SignalConversion generated from: '<S4>/HTCV_Learning_Req_AD'
         */
        (void)Rte_Write_VeRCVR_b_HTCV_Learning_Req_Value
            (KeRCVR_b_HTCV_Learning_Req_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_HTCV_Learning_Req' incorporates:
         *  SignalConversion generated from: '<S4>/HTCV_Learning_Req_AD'
         */
        (void)Rte_Write_VeRCVR_b_HTCV_Learning_Req_Value(rtb_Comparison4_o0);
    }

    /* End of Switch: '<S1421>/Switch1' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVC'
     */
    /* Switch: '<S627>/Switch1' incorporates:
     *  Constant: '<S622>/Constant'
     *  Constant: '<S623>/Constant'
     *  Constant: '<S624>/Constant'
     *  Constant: '<S625>/Constant'
     *  Constant: '<S626>/Constant'
     *  Logic: '<S600>/Logical6'
     *  RelationalOperator: '<S600>/Comparison2'
     *  RelationalOperator: '<S600>/Comparison3'
     *  RelationalOperator: '<S600>/Comparison5'
     *  Switch: '<S627>/Switch2'
     */
    if ((CeTAIR_e_CPV_Calibration_Fail == ((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy) ==
            CeTAIR_e_CPV_Calibration_Not_Complete))
    {
        tmp = CeRCVR_e_CPV_RoutineSts_Complete_Fail;
    }
    else if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy) ==
             CeTAIR_e_CPV_Calibration_Complete)
    {
        /* Switch: '<S627>/Switch2' incorporates:
         *  Constant: '<S621>/Constant'
         */
        tmp = CeRCVR_e_CPV_RoutineSts_Complete_Pass;
    }
    else
    {
        tmp = CeRCVR_e_CPV_RoutineSts_In_Progress;
    }

    /* End of Switch: '<S627>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeRCVR_e_HTL_RtnSts' incorporates:
     *  SignalConversion generated from: '<S4>/HTL_Cal_RtnSts_out'
     */
    (void)Rte_Write_VeRCVR_e_HTL_RtnSts_Value(tmp);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* Outport: '<Root>/VeRCVR_e_HTL_Valve_Stuck_State' incorporates:
     *  DataTypeConversion: '<S1401>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/HTL_Valve_Stuck_State_Out'
     *  Switch: '<S675>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_HTL_Valve_Stuck_State_Value
        (RCVR_ac_DW.UnitDelay_DSTATE_of);

    /* Switch: '<S1413>/Switch1' incorporates:
     *  Constant: '<S1447>/Calib'
     *  Constant: '<S1449>/Calib'
     *  Merge: '<S602>/Merge'
     */
    if (KeRCVR_b_HTLBypVlv_CalRq_SD)
    {
        tmp_0 = KeRCVR_e_HTLBypVlv_CalRq_D;
    }
    else
    {
        tmp_0 = RCVR_ac_B.Merge_p;
    }

    /* Outport: '<Root>/VeRCVR_e_HTL_Vlv_CalCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/HTL_Vlv_CalCmd'
     *  Switch: '<S1413>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_HTL_Vlv_CalCmnd_Value(tmp_0);

    /* Switch: '<S1413>/Switch' incorporates:
     *  Constant: '<S1448>/Calib'
     */
    if (KeRCVR_b_HTLBypVlv_Cmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd' incorporates:
         *  Constant: '<S1446>/Calib'
         *  SignalConversion generated from: '<S4>/HTL_Vlv_PstnCmd'
         */
        (void)Rte_Write_VeRCVR_Pct_HTL_Vlv_PstnCmnd_Value
            (KeRCVR_Pct_HTLBypVlv_Cmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd' incorporates:
         *  SignalConversion generated from: '<S4>/HTL_Vlv_PstnCmd'
         */
        (void)Rte_Write_VeRCVR_Pct_HTL_Vlv_PstnCmnd_Value(Switch3_b);
    }

    /* End of Switch: '<S1413>/Switch' */

    /* Switch: '<S1414>/Switch' incorporates:
     *  Constant: '<S1451>/Calib'
     */
    if (KeRCVR_b_HTL_PstnSv_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_HTL_Vlv_PstnSv' incorporates:
         *  Constant: '<S1450>/Calib'
         *  SignalConversion generated from: '<S4>/HTL_Vlv_PstnSv'
         */
        (void)Rte_Write_VeRCVR_b_HTL_Vlv_PstnSv_Value(KeRCVR_b_HTL_PstnSv_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_HTL_Vlv_PstnSv' incorporates:
         *  SignalConversion generated from: '<S4>/HTL_Vlv_PstnSv'
         */
        (void)Rte_Write_VeRCVR_b_HTL_Vlv_PstnSv_Value(RCVR_ac_B.Merge_d);
    }

    /* End of Switch: '<S1414>/Switch' */

    /* Switch: '<S1406>/Switch2' incorporates:
     *  Constant: '<S1428>/Calib'
     *  Constant: '<S1431>/Calib'
     */
    if (KeRCVR_b_HTRBV_Block_Det_Enbl_SD)
    {
        rtb_VM_Conditional_Signal_HTRBV_Block_De =
            KeRCVR_e_HTRBV_Block_Det_Enbl_D;
    }

    /* Outport: '<Root>/VeRCVR_e_HTRBV_Block_Det_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/HTRBV_Block_Det_Enb_AD'
     *  Switch: '<S1406>/Switch2'
     */
    (void)Rte_Write_VeRCVR_e_HTRBV_Block_Det_Enbl_Value
        (rtb_VM_Conditional_Signal_HTRBV_Block_De);

    /* Switch: '<S1406>/Switch1' incorporates:
     *  Constant: '<S1429>/Calib'
     *  Constant: '<S1432>/Calib'
     */
    if (KeRCVR_b_HTRBypVlv_CalRq_SD)
    {
        rtb_VM_Conditional_Signal_HTRBypVlv_Cali = KeRCVR_e_HTRBypVlv_CalRq_D;
    }

    /* Outport: '<Root>/VeRCVR_e_HTR_Vlv_CalCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/HTR_Vlv_CalCmd_AD'
     *  Switch: '<S1406>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_HTR_Vlv_CalCmnd_Value
        (rtb_VM_Conditional_Signal_HTRBypVlv_Cali);

    /* Outport: '<Root>/VeRCVR_b_HT_CabVlvRely_Sts' incorporates:
     *  Constant: '<S1487>/Calib'
     *  Gain: '<S1489>/Gain'
     *  SignalConversion generated from: '<S4>/HT_CabVlvRely_Sts'
     */
    (void)Rte_Write_VeRCVR_b_HT_CabVlvRely_Sts_Value
        (KeRCVR_b_HT_CabVlvRely_Sts_Dial);

    /* Outport: '<Root>/VeRCVR_b_HT_Shtoff_VlvSts' incorporates:
     *  Gain: '<S1482>/Gain'
     *  SignalConversion generated from: '<S4>/HT_Shtoff_VlvSts'
     */
    (void)Rte_Write_VeRCVR_b_HT_Shtoff_VlvSts_Value(RCVR_ac_B.Gain_i);

    /* Switch: '<S1420>/Switch1' incorporates:
     *  Constant: '<S1480>/Calib'
     *  Constant: '<S1481>/Calib'
     *  Constant: '<S60>/Calib'
     *  Switch: '<S37>/Switch1'
     */
    if (KeRCVR_b_HT_SO_VlvSts_SD)
    {
        rtb_Switch_md = KeRCVR_e_HT_SO_VlvSts_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S4>/RCVC' */
        if (KeRCVR_b_HTSoV_App_Sel)
        {
            /* Switch: '<S37>/Switch1' */
            rtb_Switch_md = rtb_Status_h;
        }

        /* End of Outputs for SubSystem: '<S4>/RCVC' */
    }

    /* Outport: '<Root>/VeRCVR_e_HT_Shtoff_VlvSts' incorporates:
     *  SignalConversion generated from: '<S4>/HT_Shtoff_Vlv_Status'
     *  Switch: '<S1420>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_HT_Shtoff_VlvSts_Value(rtb_Switch_md);

    /* Switch: '<S1415>/Switch' incorporates:
     *  Constant: '<S1456>/Calib'
     *  Constant: '<S1459>/Calib'
     *  VariantMerge generated from: '<S12>/HtrCoreBV_Calib'
     */
    if (KeRCVR_b_HtrCoreBypVlv_CalRq_SD)
    {
        tmp_0 = KeRCVR_e_HtrCoreBypVlv_CalRq_D;
    }
    else
    {
        tmp_0 = rtb_VM_Conditional_Signal_HtrCoreBV_Cali;
    }

    /* Outport: '<Root>/VeRCVR_e_HtrCoreBypVlv_CalCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/HtrCoreBypVlv_CalCmd_Out'
     *  Switch: '<S1415>/Switch'
     */
    (void)Rte_Write_VeRCVR_e_HtrCoreBypVlv_CalCmnd_Value(tmp_0);

    /* Switch: '<S1415>/Switch2' incorporates:
     *  Constant: '<S1455>/Calib'
     */
    if (KeRCVR_b_HtrCoreBV_PstnSv_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_HtrCoreBypVlv_PstnSv' incorporates:
         *  Constant: '<S1454>/Calib'
         *  SignalConversion generated from: '<S4>/HtrCoreBypVlv_Pstn_Sv_Out'
         */
        (void)Rte_Write_VeRCVR_b_HtrCoreBypVlv_PstnSv_Value
            (KeRCVR_b_HtrCoreBV_PstnSv_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_HtrCoreBypVlv_PstnSv' incorporates:
         *  SignalConversion generated from: '<S4>/HtrCoreBypVlv_Pstn_Sv_Out'
         */
        (void)Rte_Write_VeRCVR_b_HtrCoreBypVlv_PstnSv_Value
            (rtb_VM_Conditional_Signal_HtrCoreBV_Sv_4);
    }

    /* End of Switch: '<S1415>/Switch2' */

    /* Switch: '<S1415>/Switch3' incorporates:
     *  Constant: '<S1458>/Calib'
     *  Constant: '<S1460>/Calib'
     */
    if (KeRCVR_b_HtrCoreBypVlv_Stuck_State_SD)
    {
        rtb_VM_Conditional_Signal_HtrCoreBypVlv_ =
            KeRCVR_e_HtrCoreBypVlv_Stuck_State_D;
    }

    /* Outport: '<Root>/VeRCVR_e_HtrCoreBypVlv_Stuck_State' incorporates:
     *  SignalConversion generated from: '<S4>/HtrCoreBypVlv_Stuck_State_Out'
     *  Switch: '<S1415>/Switch3'
     */
    (void)Rte_Write_VeRCVR_e_HtrCoreBypVlv_Stuck_State_Value
        (rtb_VM_Conditional_Signal_HtrCoreBypVlv_);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVC'
     */
    /* Switch: '<S908>/Switch1' incorporates:
     *  Constant: '<S903>/Constant'
     *  Constant: '<S904>/Constant'
     *  Constant: '<S905>/Constant'
     *  Constant: '<S906>/Constant'
     *  Constant: '<S907>/Constant'
     *  Logic: '<S882>/Logical6'
     *  RelationalOperator: '<S882>/Comparison2'
     *  RelationalOperator: '<S882>/Comparison3'
     *  RelationalOperator: '<S882>/Comparison5'
     *  Switch: '<S908>/Switch2'
     */
    if ((CeTAIR_e_CPV_Calibration_Fail == ((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl)) || (((uint32)
            RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl) ==
            CeTAIR_e_CPV_Calibration_Not_Complete))
    {
        tmp = CeRCVR_e_CPV_RoutineSts_Complete_Fail;
    }
    else if (((uint32)RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl) ==
             CeTAIR_e_CPV_Calibration_Complete)
    {
        /* Switch: '<S908>/Switch2' incorporates:
         *  Constant: '<S902>/Constant'
         */
        tmp = CeRCVR_e_CPV_RoutineSts_Complete_Pass;
    }
    else
    {
        tmp = CeRCVR_e_CPV_RoutineSts_In_Progress;
    }

    /* End of Switch: '<S908>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeRCVR_e_LTR_RtnSts' incorporates:
     *  SignalConversion generated from: '<S4>/LTR_Cal_RtnSts_out'
     */
    (void)Rte_Write_VeRCVR_e_LTR_RtnSts_Value(tmp);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* Outport: '<Root>/VeRCVR_e_LTR_Valve_Stuck_State' incorporates:
     *  DataTypeConversion: '<S1400>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/LTR_Valve_Stuck_State_Out'
     *  Switch: '<S961>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_LTR_Valve_Stuck_State_Value
        (RCVR_ac_DW.UnitDelay_DSTATE_i0o);

    /* Switch: '<S1422>/Switch' incorporates:
     *  Constant: '<S1491>/Calib'
     *  Constant: '<S1493>/Calib'
     *  Merge: '<S884>/Merge'
     */
    if (KeRCVR_b_LTRBypVlv_CalRq_SD)
    {
        tmp_0 = KeRCVR_e_LTRBypVlv_CalRq_D;
    }
    else
    {
        tmp_0 = RCVR_ac_B.Merge_fs;
    }

    /* Outport: '<Root>/VeRCVR_e_LTR_Vlv_CalCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/LTR_Vlv_CalCmd'
     *  Switch: '<S1422>/Switch'
     */
    (void)Rte_Write_VeRCVR_e_LTR_Vlv_CalCmnd_Value(tmp_0);

    /* Switch: '<S1422>/Switch1' incorporates:
     *  Constant: '<S1492>/Calib'
     */
    if (KeRCVR_b_LTRBypVlv_Cmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_LTR_Vlv_PstnCmnd' incorporates:
         *  Constant: '<S1490>/Calib'
         *  SignalConversion generated from: '<S4>/LTR_Vlv_PstnCmd'
         */
        (void)Rte_Write_VeRCVR_Pct_LTR_Vlv_PstnCmnd_Value
            (KeRCVR_Pct_LTRBypVlv_Cmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_LTR_Vlv_PstnCmnd' incorporates:
         *  SignalConversion generated from: '<S4>/LTR_Vlv_PstnCmd'
         */
        (void)Rte_Write_VeRCVR_Pct_LTR_Vlv_PstnCmnd_Value(Switch2);
    }

    /* End of Switch: '<S1422>/Switch1' */

    /* Switch: '<S1423>/Switch' incorporates:
     *  Constant: '<S1495>/Calib'
     */
    if (KeRCVR_b_LTR_PstnSv_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_LTR_Vlv_PstnSv' incorporates:
         *  Constant: '<S1494>/Calib'
         *  SignalConversion generated from: '<S4>/LTR_Vlv_PstnSv'
         */
        (void)Rte_Write_VeRCVR_b_LTR_Vlv_PstnSv_Value(KeRCVR_b_LTR_PstnSv_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_LTR_Vlv_PstnSv' incorporates:
         *  SignalConversion generated from: '<S4>/LTR_Vlv_PstnSv'
         */
        (void)Rte_Write_VeRCVR_b_LTR_Vlv_PstnSv_Value(RCVR_ac_B.Merge_f);
    }

    /* End of Switch: '<S1423>/Switch' */

    /* Switch: '<S1418>/Switch2' incorporates:
     *  Constant: '<S1470>/Calib'
     *  Constant: '<S1473>/Calib'
     */
    if (KeRCVR_b_OEXV_CalRq_SD)
    {
        rtb_Switch1_avh = KeRCVR_e_OEXV_CalRq_D;
    }

    /* Outport: '<Root>/VeRCVR_e_OEXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S4>/OEXV_CalRq_Out'
     *  Switch: '<S1418>/Switch2'
     */
    (void)Rte_Write_VeRCVR_e_OEXV_CalRq_Value(rtb_Switch1_avh);

    /* Switch: '<S1418>/Switch3' incorporates:
     *  Constant: '<S1471>/Calib'
     */
    if (KeRCVR_b_OEXV_Cmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_OEXV_Cmd' incorporates:
         *  Constant: '<S1467>/Calib'
         *  SignalConversion generated from: '<S4>/OEXV_Cmd_Out'
         */
        (void)Rte_Write_VeRCVR_Pct_OEXV_Cmd_Value(KeRCVR_Pct_OEXV_Cmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_OEXV_Cmd' incorporates:
         *  SignalConversion generated from: '<S4>/OEXV_Cmd_Out'
         */
        (void)Rte_Write_VeRCVR_Pct_OEXV_Cmd_Value(rtb_Switch1);
    }

    /* End of Switch: '<S1418>/Switch3' */

    /* Outport: '<Root>/VeRCVR_Pct_HT_CabVlvSts' incorporates:
     *  Gain: '<S1488>/Gain'
     *  SignalConversion generated from: '<S4>/RCVR_FUNC__Cab_Vlv_Pos_Pct'
     */
    (void)Rte_Write_VeRCVR_Pct_HT_CabVlvSts_Value(rtb_Sum6);

    /* Switch: '<S1421>/Switch' incorporates:
     *  Constant: '<S1486>/Calib'
     */
    if (KeRCVR_b_HT_CabVlvCmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_Pct_HT_CabVlvCmd' incorporates:
         *  Constant: '<S1483>/Calib'
         *  SignalConversion generated from: '<S4>/RCVR_FUNC__DC_PropValve1Cmd'
         */
        (void)Rte_Write_VeRCVR_Pct_HT_CabVlvCmd_Value(KeRCVR_Pct_HT_CabVlvCmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_Pct_HT_CabVlvCmd' incorporates:
         *  SignalConversion generated from: '<S4>/RCVR_FUNC__DC_PropValve1Cmd'
         */
        (void)Rte_Write_VeRCVR_Pct_HT_CabVlvCmd_Value(rtb_Merge);
    }

    /* End of Switch: '<S1421>/Switch' */

    /* Switch: '<S1411>/Switch1' incorporates:
     *  Constant: '<S1441>/Calib'
     *  Constant: '<S1443>/Calib'
     *  Switch: '<S107>/Switch4'
     */
    if (KeRCVR_b_EXV_CalCmd_SD)
    {
        UnitDelay_DSTATE_ju3_tmp = KeRCVR_e_EXV_CalCmd_D;
    }
    else
    {
        UnitDelay_DSTATE_ju3_tmp = VeRCVR_e_EXV_CalCmd_B4D;
    }

    /* Outport: '<Root>/VeRCVR_e_EXV_CalCmd' incorporates:
     *  SignalConversion generated from: '<S4>/RCVR_FUNC__EXV_CalCmd'
     *  Switch: '<S1411>/Switch1'
     */
    (void)Rte_Write_VeRCVR_e_EXV_CalCmd_Value(UnitDelay_DSTATE_ju3_tmp);

    /* Switch: '<S1420>/Switch' incorporates:
     *  Constant: '<S1479>/Calib'
     */
    if (KeRCVR_b_HT_SO_VlvCmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd' incorporates:
         *  Constant: '<S1478>/Calib'
         *  SignalConversion generated from: '<S4>/RCVR_FUNC__NProp3WVlv1_Cmd'
         */
        (void)Rte_Write_VeRCVR_b_HT_Shtoff_VlvCmd_Value(KeRCVR_b_HT_SO_VlvCmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd' incorporates:
         *  SignalConversion generated from: '<S4>/RCVR_FUNC__NProp3WVlv1_Cmd'
         */
        (void)Rte_Write_VeRCVR_b_HT_Shtoff_VlvCmd_Value(rtb_OR1_fj);
    }

    /* End of Switch: '<S1420>/Switch' */

    /* Switch: '<S1409>/Switch' incorporates:
     *  Constant: '<S1436>/Calib'
     *  Constant: '<S1437>/Calib'
     *  Gain: '<S1141>/Gain'
     *  Logic: '<S1075>/Logical1'
     *  RelationalOperator: '<S1146>/Comparison1'
     */
    if (KeRCVR_b_RSVCompTransition_SD)
    {
        rtb_Gain_p = KeRCVR_b_RSVCompTransition_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S4>/RCVC' */
        rtb_Gain_p = ((VeRCVR_b_RSV_transitionTmrActv) && (rtb_Switch1_bb !=
                       RCVR_ac_B.In1));

        /* End of Outputs for SubSystem: '<S4>/RCVC' */
    }

    /* End of Switch: '<S1409>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeRCVR_b_RSVCompTransition' incorporates:
     *  SignalConversion generated from: '<S4>/RCVR_FUNC__RSVCompTransition'
     */
    (void)Rte_Write_VeRCVR_b_RSVCompTransition_Value(rtb_Gain_p);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* Switch: '<S1417>/Switch' incorporates:
     *  Constant: '<S1464>/Calib'
     */
    if (KeRCVR_b_FtRfgt_SO_VlvCmd_SD)
    {
        /* Outport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvCmd' incorporates:
         *  Constant: '<S1463>/Calib'
         *  SignalConversion generated from: '<S4>/RCVR_FUNC__RSVFrtCommand'
         */
        (void)Rte_Write_VeRCVR_b_FtRfgtShtoff_VlvCmd_Value
            (KeRCVR_b_FtRfgt_SO_VlvCmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvCmd' incorporates:
         *  SignalConversion generated from: '<S4>/RCVR_FUNC__RSVFrtCommand'
         */
        (void)Rte_Write_VeRCVR_b_FtRfgtShtoff_VlvCmd_Value(RCVR_ac_B.Switch_hn);
    }

    /* End of Switch: '<S1417>/Switch' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVC'
     */
    /* Switch: '<S506>/Switch4' incorporates:
     *  Constant: '<S1065>/ConstantValue2'
     *  Logic: '<S506>/Logical'
     *  Logic: '<S506>/Logical1'
     *  Logic: '<S506>/Logical6'
     *  Logic: '<S506>/Logical7'
     *  RelationalOperator: '<S1065>/GreaterThan1'
     *  Switch: '<S506>/Switch6'
     *  UnitDelay: '<S1065>/UnitDelay'
     */
    if ((RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ot) && rtb_AND_lo)
    {
        rtb_Gain_p = (((VeRCVR_b_CPV_SavePosnReqCmpl) && rtb_OR1_oxb) &&
                      (VeRCVR_b_CPV_SavePosnReqCmpl));
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S506>/CountDownResetEnabled' */
        rtb_Gain_p = (rtb_OR1_kx && (((sint32)RCVR_ac_DW.UnitDelay_DSTATE_oj) <=
                       0));

        /* End of Outputs for SubSystem: '<S506>/CountDownResetEnabled' */
    }

    /* End of Switch: '<S506>/Switch4' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVR_FUNC'
     */
    /* Outport: '<Root>/VeRCVR_b_RdyToShtDwn' incorporates:
     *  Logic: '<S12>/Logical1'
     *  SignalConversion generated from: '<S4>/RdyToShtDwn_Out'
     */
    (void)Rte_Write_VeRCVR_b_RdyToShtDwn_Value(rtb_Gain_p &&
        (RCVR_ac_B.Logical12));

    /* Switch: '<S1416>/Switch' incorporates:
     *  Constant: '<S1461>/Calib'
     *  Constant: '<S1462>/Calib'
     *  Lookup_n-D: '<S1186>/Vector'
     *  Sum: '<S1179>/Sum5'
     *  Switch: '<S1182>/Switch1'
     *  Switch: '<S1185>/Switch1'
     */
    if (KeRCVR_b_eACSuctionPressure_SD)
    {
        rtb_Sum2_ik = KeRCVR_p_eACSuctionPressure_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S4>/RCVC' */
        rtb_Sum2_ik = rtb_Sum1 - look2_iflf_binlca_16a(rtb_Sum1, rtb_Switch2_dd,
            ((const float32 *)&(KxRCVR_p_SuctionPressureTable[0])), ((const
            float32 *)&(KyRCVR_p_SuctionPressureTable[0])), ((const float32 *)
            &(KtRCVR_p_SuctionPressureTable[0])), RCVR_ac_ConstP.Vector_maxIndex,
            10U);

        /* End of Outputs for SubSystem: '<S4>/RCVC' */
    }

    /* End of Switch: '<S1416>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeRCVR_p_eACSuctionPressure' incorporates:
     *  SignalConversion generated from: '<S4>/eACSuctionPressure_Out'
     */
    (void)Rte_Write_VeRCVR_p_eACSuctionPressure_Value(rtb_Sum2_ik);

    /* End of Outputs for SubSystem: '<Root>/RCVR_FUNC_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
FUNC(void, RCVR_CODE) RCVR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/RCVR_FUNC_PwrOff'
     */
    /* Outport: '<Root>/EeRCVR_U_HT_CabVlvSts_Min_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/EeRCVR_U_HT_CabVlvSts_Min'
     */
    (void)Rte_Write_EeRCVR_U_HT_CabVlvSts_Min_EeRCVR_U_HT_CabVlvSts_Min
        (EeRCVR_U_HT_CabVlvSts_Min);

    /* Outport: '<Root>/NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles'
     */
    (void)
        Rte_Write_NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles_NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles
        (RCVR_ac_DW.NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles);

    /* Outport: '<Root>/EeRCVR_Cnt_OEXV_CyclesSncCal_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/EeRCVR_Cnt_OEXV_CyclesSncCal'
     */
    (void)Rte_Write_EeRCVR_Cnt_OEXV_CyclesSncCal_EeRCVR_Cnt_OEXV_CyclesSncCal
        (EeRCVR_Cnt_OEXV_CyclesSncCal);

    /* Outport: '<Root>/EeRCVR_U_HT_CabVlvSts_Max_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/EeRCVR_U_HT_CabVlvSts_Max'
     */
    (void)Rte_Write_EeRCVR_U_HT_CabVlvSts_Max_EeRCVR_U_HT_CabVlvSts_Max
        (EeRCVR_U_HT_CabVlvSts_Max);

    /* Outport: '<Root>/EeRCVR_Cnt_EEXV_CyclesSncCal_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/EeRCVR_Cnt_EEXV_CyclesSncCal'
     */
    (void)Rte_Write_EeRCVR_Cnt_EEXV_CyclesSncCal_EeRCVR_Cnt_EEXV_CyclesSncCal
        (EeRCVR_Cnt_EEXV_CyclesSncCal);

    /* Outport: '<Root>/EeRCVR_Cnt_HTCV_Endstophits_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/EeRCVR_Cnt_HTCV_Endstophits'
     */
    (void)Rte_Write_EeRCVR_Cnt_HTCV_Endstophits_EeRCVR_Cnt_HTCV_Endstophits
        (EeRCVR_Cnt_HTCV_Endstophits);

    /* Outport: '<Root>/EeRCVR_e_HTCV_Calibration_Sts_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/EeRCVR_e_HTCV_Calibration_Sts'
     */
    (void)Rte_Write_EeRCVR_e_HTCV_Calibration_Sts_EeRCVR_e_HTCV_Calibration_Sts
        (EeRCVR_e_HTCV_Calibration_Sts);

    /* Outport: '<Root>/NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles'
     */
    (void)
        Rte_Write_NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles_NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles
        (RCVR_ac_DW.NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles);

    /* Outport: '<Root>/EeRCVR_Cnt_EXV_CyclesSncCal_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/EeRCVR_Cnt_EXV_CyclesSncCal'
     */
    (void)Rte_Write_EeRCVR_Cnt_EXV_CyclesSncCal_EeRCVR_Cnt_EXV_CyclesSncCal
        (EeRCVR_Cnt_EXV_CyclesSncCal);

    /* Outport: '<Root>/NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles'
     */
    (void)
        Rte_Write_NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles_NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles
        (RCVR_ac_DW.NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles);

    /* Outport: '<Root>/NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles_PM_Out' incorporates:
     *  DataStoreRead: '<S5>/NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles1'
     */
    (void)
        Rte_Write_NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles_NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles
        (RCVR_ac_DW.NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, RCVR_CODE) RCVR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/RCVR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S6>/FcnCallGen' incorporates:
     *  SubSystem: '<S6>/DSM_Init'
     */
    /* DataStoreWrite: '<S1530>/NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles1' incorporates:
     *  Inport: '<Root>/NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles_PM_In'
     */
    (void)
        Rte_Read_NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles_Rx_NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles
        (&RCVR_ac_DW.NeRCVR_Cnt_HtrCore_CntrlrShtDwn_Cycles);

    /* DataStoreWrite: '<S1530>/NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles' incorporates:
     *  Inport: '<Root>/NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles_PM_In'
     */
    (void)
        Rte_Read_NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles_Rx_NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles
        (&RCVR_ac_DW.NeRCVR_Cnt_LTR_CntrlrShtDwn_Cycles);

    /* DataStoreWrite: '<S1530>/EeRCVR_Cnt_EXV_CyclesSncCal' incorporates:
     *  Inport: '<Root>/EeRCVR_Cnt_EXV_CyclesSncCal_PM_In'
     */
    (void)Rte_Read_EeRCVR_Cnt_EXV_CyclesSncCal_Rx_EeRCVR_Cnt_EXV_CyclesSncCal
        ((&(EeRCVR_Cnt_EXV_CyclesSncCal)));

    /* DataStoreWrite: '<S1530>/NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles' incorporates:
     *  Inport: '<Root>/NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles_PM_In'
     */
    (void)
        Rte_Read_NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles_Rx_NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles
        (&RCVR_ac_DW.NeRCVR_Cnt_CPV_CntrlrShtDwn_Cycles);

    /* DataStoreWrite: '<S1530>/EeRCVR_e_HTCV_Calibration_Sts' incorporates:
     *  Inport: '<Root>/EeRCVR_e_HTCV_Calibration_Sts_PM_In'
     */
    (void)
        Rte_Read_EeRCVR_e_HTCV_Calibration_Sts_Rx_EeRCVR_e_HTCV_Calibration_Sts
        ((&(EeRCVR_e_HTCV_Calibration_Sts)));

    /* DataStoreWrite: '<S1530>/EeRCVR_Cnt_HTCV_Endstophits' incorporates:
     *  Inport: '<Root>/EeRCVR_Cnt_HTCV_Endstophits_PM_In'
     */
    (void)Rte_Read_EeRCVR_Cnt_HTCV_Endstophits_Rx_EeRCVR_Cnt_HTCV_Endstophits
        ((&(EeRCVR_Cnt_HTCV_Endstophits)));

    /* DataStoreWrite: '<S1530>/EeRCVR_Cnt_EEXV_CyclesSncCal' incorporates:
     *  Inport: '<Root>/EeRCVR_Cnt_EEXV_CyclesSncCal_PM_In'
     */
    (void)Rte_Read_EeRCVR_Cnt_EEXV_CyclesSncCal_Rx_EeRCVR_Cnt_EEXV_CyclesSncCal
        ((&(EeRCVR_Cnt_EEXV_CyclesSncCal)));

    /* DataStoreWrite: '<S1530>/EeRCVR_U_HT_CabVlvSts_Max' incorporates:
     *  Inport: '<Root>/EeRCVR_U_HT_CabVlvSts_Max_PM_In'
     */
    (void)Rte_Read_EeRCVR_U_HT_CabVlvSts_Max_Rx_EeRCVR_U_HT_CabVlvSts_Max
        ((&(EeRCVR_U_HT_CabVlvSts_Max)));

    /* DataStoreWrite: '<S1530>/EeRCVR_Cnt_OEXV_CyclesSncCal' incorporates:
     *  Inport: '<Root>/EeRCVR_Cnt_OEXV_CyclesSncCal_PM_In'
     */
    (void)Rte_Read_EeRCVR_Cnt_OEXV_CyclesSncCal_Rx_EeRCVR_Cnt_OEXV_CyclesSncCal
        ((&(EeRCVR_Cnt_OEXV_CyclesSncCal)));

    /* DataStoreWrite: '<S1530>/NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles' incorporates:
     *  Inport: '<Root>/NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles_PM_In'
     */
    (void)
        Rte_Read_NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles_Rx_NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles
        (&RCVR_ac_DW.NeRCVR_Cnt_HTL_CntrlrShtDwn_Cycles);

    /* DataStoreWrite: '<S1530>/EeRCVR_U_HT_CabVlvSts_Min' incorporates:
     *  Inport: '<Root>/EeRCVR_U_HT_CabVlvSts_Min_PM_In'
     */
    (void)Rte_Read_EeRCVR_U_HT_CabVlvSts_Min_Rx_EeRCVR_U_HT_CabVlvSts_Min
        ((&(EeRCVR_U_HT_CabVlvSts_Min)));

    /* S-Function (fcgen): '<S6>/FcnCallGen' incorporates:
     *  SubSystem: '<S6>/RCVR_NF'
     */
    /* SignalConversion generated from: '<S1531>/HT_Shtoff_VlvSts_Enum' incorporates:
     *  Constant: '<S1552>/Constant'
     */
    RCVR_ac_B.OutportBufferForHT_Shtoff_VlvSts_Enum = RCVR_ac_ConstB.Constant;

#if Rte_SysCon_Variant_RCVR_FUNC_2

    /* Outputs for Function Call SubSystem: '<S6>/Valve_InitCals' */
    /* DataStoreWrite: '<S1532>/DataStoreWrite' incorporates:
     *  Constant: '<S1630>/Calib'
     */
    VeRCVR_b_CPV_Calibration_Request = KeRCVF_b_CPV_CalibStrt_INIT;

    /* DataStoreWrite: '<S1532>/DataStoreWrite1' incorporates:
     *  Constant: '<S1632>/Calib'
     */
    VeRCVR_b_LTR_Calibration_Request = KeRCVF_b_LTR_CalibStrt_INIT;

    /* DataStoreWrite: '<S1532>/DataStoreWrite2' incorporates:
     *  Constant: '<S1631>/Calib'
     */
    VeRCVR_b_HTL_Calibration_Request = KeRCVF_b_HTL_CalibStrt_INIT;

    /* End of Outputs for SubSystem: '<S6>/Valve_InitCals' */
    /* End of Outputs for S-Function (fcgen): '<S6>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S6>/FcnCallGen' incorporates:
     *  SubSystem: '<S6>/RCVR_NF'
     */
    /* Outport: '<Root>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd' incorporates:
     *  Constant: '<S1565>/Calib'
     *  Gain: '<S1603>/Gain'
     *  SignalConversion generated from: '<S6>/CRVCommand'
     */
    (void)Rte_Write_VeRCVR_b_ChlrRfgtShtoff_VlvCmd_Value
        (KeRCVR_b_CRVCommand_NFDial);

    /* Outport: '<Root>/VeRCVR_b_ChlrRfrgtShtoff_VlvSts' incorporates:
     *  Constant: '<S1566>/Calib'
     *  Gain: '<S1605>/Gain'
     *  SignalConversion generated from: '<S6>/ChlrRfrgtShtoff_VlvSts'
     */
    (void)Rte_Write_VeRCVR_b_ChlrRfrgtShtoff_VlvSts_Value
        (KeRCVR_b_ChlrRfgtShtoff_VlvSts_NF_Dial);

    /* Outport: '<Root>/VeRCVR_Pct_HT_CabVlvCmd' incorporates:
     *  Constant: '<S1553>/Calib'
     *  Gain: '<S1628>/Gain'
     *  SignalConversion generated from: '<S6>/DC_PropValve1Cmd'
     */
    (void)Rte_Write_VeRCVR_Pct_HT_CabVlvCmd_Value(KeRCVR_DC_HT_CabVlvCmd_NFDial);

    /* Outport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvSts' incorporates:
     *  Constant: '<S1579>/Calib'
     *  Gain: '<S1613>/Gain'
     *  SignalConversion generated from: '<S6>/FtVlvSts'
     */
    (void)Rte_Write_VeRCVR_b_FtRfgtShtoff_VlvSts_Value(KeRCVR_b_RSVFrtSts_NFDial);

    /* Outport: '<Root>/VeRCVR_b_HTCV_Learning_Req' incorporates:
     *  Constant: '<S1570>/Calib'
     *  Gain: '<S1608>/Gain'
     *  SignalConversion generated from: '<S6>/HTCV_Learning_Req'
     */
    (void)Rte_Write_VeRCVR_b_HTCV_Learning_Req_Value
        (KeRCVR_b_HTCV_Learning_Req_NF_Dial);

    /* Outport: '<Root>/VeRCVR_b_HT_CabVlvRely_Sts' incorporates:
     *  Constant: '<S1572>/Calib'
     *  Gain: '<S1607>/Gain'
     *  SignalConversion generated from: '<S6>/HT_CabVlvRely_Sts'
     */
    (void)Rte_Write_VeRCVR_b_HT_CabVlvRely_Sts_Value
        (KeRCVR_b_HT_CabVlvRely_Sts_NF_Dial);

    /* Outport: '<Root>/VeRCVR_b_HT_Shtoff_VlvSts' incorporates:
     *  Constant: '<S1574>/Calib'
     *  Gain: '<S1606>/Gain'
     *  SignalConversion generated from: '<S6>/HT_Shtoff_VlvSts'
     */
    (void)Rte_Write_VeRCVR_b_HT_Shtoff_VlvSts_Value
        (KeRCVR_b_HT_Shtoff_VlvSts_NF_Dial);

    /* End of Outputs for S-Function (fcgen): '<S6>/FcnCallGen' */

    /* Outport: '<Root>/VeRCVR_e_HT_Shtoff_VlvSts' incorporates:
     *  SignalConversion generated from: '<S1531>/HT_Shtoff_VlvSts_Enum'
     *  SignalConversion generated from: '<S6>/HT_Shtoff_VlvSts_Enum'
     */
    (void)Rte_Write_VeRCVR_e_HT_Shtoff_VlvSts_Value
        (RCVR_ac_B.OutportBufferForHT_Shtoff_VlvSts_Enum);

    /* S-Function (fcgen): '<S6>/FcnCallGen' incorporates:
     *  SubSystem: '<S6>/RCVR_NF'
     */
    /* Outport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd' incorporates:
     *  Constant: '<S1573>/Calib'
     *  Gain: '<S1629>/Gain'
     *  SignalConversion generated from: '<S6>/NProp3WVlv1_Cmd'
     */
    (void)Rte_Write_VeRCVR_b_HT_Shtoff_VlvCmd_Value
        (KeRCVR_b_HT_Shtoff_VlvCmd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_HT_CabVlvSts' incorporates:
     *  Constant: '<S1560>/Calib'
     *  Gain: '<S1604>/Gain'
     *  SignalConversion generated from: '<S6>/Pct_HT_CabVlvSts'
     */
    (void)Rte_Write_VeRCVR_Pct_HT_CabVlvSts_Value(KeRCVR_Pct_HT_CabVlvSts_NFDial);

    /* Outport: '<Root>/VeRCVR_b_RSVCompTransition' incorporates:
     *  Constant: '<S1577>/Calib'
     *  Gain: '<S1618>/Gain'
     *  SignalConversion generated from: '<S6>/RSVCompTransition'
     */
    (void)Rte_Write_VeRCVR_b_RSVCompTransition_Value
        (KeRCVR_b_RSVCompTransition_NFDial);

    /* Outport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvCmd' incorporates:
     *  Constant: '<S1578>/Calib'
     *  Gain: '<S1602>/Gain'
     *  SignalConversion generated from: '<S6>/RSVFrtCommand'
     */
    (void)Rte_Write_VeRCVR_b_FtRfgtShtoff_VlvCmd_Value
        (KeRCVR_b_RSVFrtCommand_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_CAC_BypVlv_PstnCmd' incorporates:
     *  Constant: '<S1554>/Calib'
     *  Gain: '<S1615>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_CAC_BypVlv_PstnCmd'
     */
    (void)Rte_Write_VeRCVR_Pct_CAC_BypVlv_PstnCmd_Value
        (KeRCVR_Pct_CAC_BypVlv_PstnCmd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_EEXV_Cmd' incorporates:
     *  Constant: '<S1555>/Calib'
     *  Gain: '<S1626>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_EEXV_Cmd'
     */
    (void)Rte_Write_VeRCVR_Pct_EEXV_Cmd_Value(KeRCVR_Pct_EEXV_Cmd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_EXV_PosRq' incorporates:
     *  Constant: '<S1556>/Calib'
     *  Gain: '<S1621>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_EXV_PosRq'
     */
    (void)Rte_Write_VeRCVR_Pct_EXV_PosRq_Value(KeRCVR_Pct_EXV_PosReq_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_FrWyVlv_PstnCmnd' incorporates:
     *  Constant: '<S1557>/Calib'
     *  Gain: '<S1601>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_FrWyVlv_PstnCmnd'
     */
    (void)Rte_Write_VeRCVR_Pct_FrWyVlv_PstnCmnd_Value
        (KeRCVR_Pct_FrWyVlv_PstnCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_HTL_Vlv_PstnCmnd' incorporates:
     *  Constant: '<S1558>/Calib'
     *  Gain: '<S1620>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_HTL_Vlv_PstnCmnd'
     */
    (void)Rte_Write_VeRCVR_Pct_HTL_Vlv_PstnCmnd_Value
        (KeRCVR_Pct_HTL_Vlv_PstnCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_HTR_Vlv_PstnCmnd' incorporates:
     *  Constant: '<S1559>/Calib'
     *  Gain: '<S1610>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_HTR_Vlv_PstnCmnd'
     */
    (void)Rte_Write_VeRCVR_Pct_HTR_Vlv_PstnCmnd_Value
        (KeRCVR_Pct_HTR_Vlv_PstnCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd' incorporates:
     *  Constant: '<S1561>/Calib'
     *  Gain: '<S1611>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd'
     */
    (void)Rte_Write_VeRCVR_Pct_HtrCoreBypVlv_PstnCmnd_Value
        (KeRCVR_Pct_HtrCoreBypVlv_PstnCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_LTR_Vlv_PstnCmnd' incorporates:
     *  Constant: '<S1562>/Calib'
     *  Gain: '<S1616>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_LTR_Vlv_PstnCmnd'
     */
    (void)Rte_Write_VeRCVR_Pct_LTR_Vlv_PstnCmnd_Value
        (KeRCVR_Pct_LTR_Vlv_PstnCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_Pct_OEXV_Cmd' incorporates:
     *  Constant: '<S1563>/Calib'
     *  Gain: '<S1627>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_Pct_OEXV_Cmd'
     */
    (void)Rte_Write_VeRCVR_Pct_OEXV_Cmd_Value(KeRCVR_Pct_OEXV_Cmd_NFDial);

    /* Outport: '<Root>/VeRCVR_b_AC_ShtdwnRqst' incorporates:
     *  Constant: '<S1564>/Calib'
     *  Gain: '<S1623>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_AC_ShtdwnRqst'
     */
    (void)Rte_Write_VeRCVR_b_AC_ShtdwnRqst_Value(KeRCVR_b_AC_ShtdwnRqst_NFDial);

    /* Outport: '<Root>/VeRCVR_b_Chlr_OpenCompTransition' incorporates:
     *  Constant: '<S1567>/Calib'
     *  Gain: '<S1624>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_Chlr_OpenCompTransition'
     */
    (void)Rte_Write_VeRCVR_b_Chlr_OpenCompTransition_Value
        (KeRCVR_b_Chlr_OpenCompTrnstn_NFDial);

    /* Outport: '<Root>/VeRCVR_b_EXV_PresSensrRA' incorporates:
     *  Constant: '<S1568>/Calib'
     *  Gain: '<S1619>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_EXV_PresSensrRA'
     */
    (void)Rte_Write_VeRCVR_b_EXV_PresSensrRA_Value
        (KeRCVR_b_EXV_PresSensrRA_NFDial);

    /* Outport: '<Root>/VeRCVR_b_FrWyVlv_PstnSv' incorporates:
     *  Constant: '<S1569>/Calib'
     *  Gain: '<S1612>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_FrWyVlv_PstnSv'
     */
    (void)Rte_Write_VeRCVR_b_FrWyVlv_PstnSv_Value(KeRCVR_b_FrWyVlv_PstnSv_NFDial);

    /* Outport: '<Root>/VeRCVR_b_HTL_Vlv_PstnSv' incorporates:
     *  Constant: '<S1571>/Calib'
     *  Gain: '<S1622>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_HTL_Vlv_PstnSv'
     */
    (void)Rte_Write_VeRCVR_b_HTL_Vlv_PstnSv_Value(KeRCVR_b_HTL_Vlv_PstnSv_NFDial);

    /* Outport: '<Root>/VeRCVR_b_HtrCoreBypVlv_PstnSv' incorporates:
     *  Constant: '<S1575>/Calib'
     *  Gain: '<S1614>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_HtrCoreBypVlv_PstnSv'
     */
    (void)Rte_Write_VeRCVR_b_HtrCoreBypVlv_PstnSv_Value
        (KeRCVR_b_HtrCoreBypVlv_PstnSv_NFDial);

    /* Outport: '<Root>/VeRCVR_b_LTR_Vlv_PstnSv' incorporates:
     *  Constant: '<S1576>/Calib'
     *  Gain: '<S1617>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_LTR_Vlv_PstnSv'
     */
    (void)Rte_Write_VeRCVR_b_LTR_Vlv_PstnSv_Value(KeRCVR_b_LTR_Vlv_PstnSv_NFDial);

    /* Outport: '<Root>/VeRCVR_b_RdyToShtDwn' incorporates:
     *  Constant: '<S1580>/Calib'
     *  Gain: '<S1625>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_b_RdyToShtDwn'
     */
    (void)Rte_Write_VeRCVR_b_RdyToShtDwn_Value(KeRCVR_b_RdyToShtDwn_NFDial);

    /* Outport: '<Root>/VeRCVR_e_CPV_RtnSts' incorporates:
     *  Constant: '<S1581>/Calib'
     *  DataTypeConversion: '<S1545>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_CPV_RtnSts'
     */
    (void)Rte_Write_VeRCVR_e_CPV_RtnSts_Value(KeRCVR_e_CPV_RtnSts_NFDial);

    /* Outport: '<Root>/VeRCVR_e_CPV_Valve_Stuck_State' incorporates:
     *  Constant: '<S1582>/Calib'
     *  DataTypeConversion: '<S1550>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_CPV_Valve_Stuck_State'
     */
    (void)Rte_Write_VeRCVR_e_CPV_Valve_Stuck_State_Value
        (KeRCVR_e_CPV_Valve_Stuck_State_NFDial);

    /* Outport: '<Root>/VeRCVR_e_EEXV_CalRq' incorporates:
     *  Constant: '<S1583>/Calib'
     *  DataTypeConversion: '<S1551>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_EEXV_CalRq'
     */
    (void)Rte_Write_VeRCVR_e_EEXV_CalRq_Value(KeRCVR_e_EEXV_CalRq_NFDial);

    /* Outport: '<Root>/VeRCVR_e_EEXV_RtnSts' incorporates:
     *  Constant: '<S1584>/Calib'
     *  DataTypeConversion: '<S1538>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_EEXV_RtnSts'
     */
    (void)Rte_Write_VeRCVR_e_EEXV_RtnSts_Value(KeRCVR_e_EEXV_RtnSts_NFDial);

    /* Outport: '<Root>/VeRCVR_e_EXV_CalCmd' incorporates:
     *  Constant: '<S1585>/Calib'
     *  DataTypeConversion: '<S1546>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_EXV_CalCmd'
     */
    (void)Rte_Write_VeRCVR_e_EXV_CalCmd_Value(KeRCVR_e_EXV_CalCmd_NFDial);

    /* Outport: '<Root>/VeRCVR_e_EXV_RtnSts' incorporates:
     *  Constant: '<S1586>/Calib'
     *  DataTypeConversion: '<S1549>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_EXV_RtnSts'
     */
    (void)Rte_Write_VeRCVR_e_EXV_RtnSts_Value(KeRCVR_e_EXV_RtnSts_NFDial);

    /* Outport: '<Root>/VeRCVR_e_FrWyVlv_CalCmnd' incorporates:
     *  Constant: '<S1587>/Calib'
     *  DataTypeConversion: '<S1533>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_FrWyVlv_CalCmnd'
     */
    (void)Rte_Write_VeRCVR_e_FrWyVlv_CalCmnd_Value
        (KeRCVR_e_FrWyVlv_CalCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_e_HTL_RtnSts' incorporates:
     *  Constant: '<S1588>/Calib'
     *  DataTypeConversion: '<S1541>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_HTL_RtnSts'
     */
    (void)Rte_Write_VeRCVR_e_HTL_RtnSts_Value(KeRCVR_e_HTL_RtnSts_NFDial);

    /* Outport: '<Root>/VeRCVR_e_HTL_Valve_Stuck_State' incorporates:
     *  Constant: '<S1589>/Calib'
     *  DataTypeConversion: '<S1544>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_HTL_Valve_Stuck_State'
     */
    (void)Rte_Write_VeRCVR_e_HTL_Valve_Stuck_State_Value
        (KeRCVR_e_HTL_Valve_Stuck_State_NFDial);

    /* Outport: '<Root>/VeRCVR_e_HTL_Vlv_CalCmnd' incorporates:
     *  Constant: '<S1590>/Calib'
     *  DataTypeConversion: '<S1548>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_HTL_Vlv_CalCmnd'
     */
    (void)Rte_Write_VeRCVR_e_HTL_Vlv_CalCmnd_Value
        (KeRCVR_e_HTL_Vlv_CalCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_e_HTRBV_Block_Det_Enbl' incorporates:
     *  Constant: '<S1591>/Calib'
     *  DataTypeConversion: '<S1537>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_HTRBV_Block_Det_Enbl'
     */
    (void)Rte_Write_VeRCVR_e_HTRBV_Block_Det_Enbl_Value
        (KeRCVR_e_HTRBV_Block_Det_Enbl_NFDial);

    /* Outport: '<Root>/VeRCVR_e_HTR_Vlv_CalCmnd' incorporates:
     *  Constant: '<S1592>/Calib'
     *  DataTypeConversion: '<S1536>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_HTR_Vlv_CalCmnd'
     */
    (void)Rte_Write_VeRCVR_e_HTR_Vlv_CalCmnd_Value
        (KeRCVR_e_HTR_Vlv_CalCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_e_HtrCoreBypVlv_CalCmnd' incorporates:
     *  Constant: '<S1593>/Calib'
     *  DataTypeConversion: '<S1542>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_HtrCoreBypVlv_CalCmnd'
     */
    (void)Rte_Write_VeRCVR_e_HtrCoreBypVlv_CalCmnd_Value
        (KeRCVR_e_HtrCoreBypVlv_CalCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_e_HtrCoreBypVlv_Stuck_State' incorporates:
     *  Constant: '<S1594>/Calib'
     *  DataTypeConversion: '<S1543>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_HtrCoreBypVlv_Stuck_State'
     */
    (void)Rte_Write_VeRCVR_e_HtrCoreBypVlv_Stuck_State_Value
        (KeRCVR_e_HtrCoreBypVlv_Stuck_State_NFDial);

    /* Outport: '<Root>/VeRCVR_e_LTR_RtnSts' incorporates:
     *  Constant: '<S1595>/Calib'
     *  DataTypeConversion: '<S1540>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_LTR_RtnSts'
     */
    (void)Rte_Write_VeRCVR_e_LTR_RtnSts_Value(KeRCVR_e_LTR_RtnSts_NFDial);

    /* Outport: '<Root>/VeRCVR_e_LTR_Valve_Stuck_State' incorporates:
     *  Constant: '<S1596>/Calib'
     *  DataTypeConversion: '<S1534>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_LTR_Valve_Stuck_State'
     */
    (void)Rte_Write_VeRCVR_e_LTR_Valve_Stuck_State_Value
        (KeRCVR_e_LTR_Valve_Stuck_State_NFDial);

    /* Outport: '<Root>/VeRCVR_e_LTR_Vlv_CalCmnd' incorporates:
     *  Constant: '<S1597>/Calib'
     *  DataTypeConversion: '<S1547>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_LTR_Vlv_CalCmnd'
     */
    (void)Rte_Write_VeRCVR_e_LTR_Vlv_CalCmnd_Value
        (KeRCVR_e_LTR_Vlv_CalCmnd_NFDial);

    /* Outport: '<Root>/VeRCVR_e_OEXV_CalRq' incorporates:
     *  Constant: '<S1598>/Calib'
     *  DataTypeConversion: '<S1535>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_OEXV_CalRq'
     */
    (void)Rte_Write_VeRCVR_e_OEXV_CalRq_Value(KeRCVR_e_OEXV_CalRq_NFDial);

    /* Outport: '<Root>/VeRCVR_e_OEXV_RtnSts' incorporates:
     *  Constant: '<S1599>/Calib'
     *  DataTypeConversion: '<S1539>/DataTypeConversion'
     *  SignalConversion generated from: '<S6>/VeRCVR_e_OEXV_RtnSts'
     */
    (void)Rte_Write_VeRCVR_e_OEXV_RtnSts_Value(KeRCVR_e_OEXV_RtnSts_NFDial);

    /* Outport: '<Root>/VeRCVR_p_eACSuctionPressure' incorporates:
     *  Constant: '<S1600>/Calib'
     *  Gain: '<S1609>/Gain'
     *  SignalConversion generated from: '<S6>/VeRCVR_p_eACSuctionPressure'
     */
    (void)Rte_Write_VeRCVR_p_eACSuctionPressure_Value
        (KeRCVR_p_eACSuctionPressure_NFDial);

    /* End of Outputs for S-Function (fcgen): '<S6>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, RCVR_CODE) Routine_RC1309_CPV_ClbrtnRtn(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1309_CPV_ClbrtnRtn' incorporates:
     *  SubSystem: '<Root>/RC1309_CPV_ClbrtnRtn'
     */
    /* RelationalOperator: '<S1>/Equal' incorporates:
     *  Constant: '<S7>/Constant'
     *  DataStoreWrite: '<S1>/DataStoreWrite'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1309_CPV_ClbrtnRtn_Op'
     */
    VeRCVR_b_CPV_Calibration_Request = (((uint32)tmpRead) ==
        CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1309_CPV_ClbrtnRtn' */
}

/* Output function */
FUNC(void, RCVR_CODE) Routine_RC130E_LTR_ClbrtnRtn(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130E_LTR_ClbrtnRtn' incorporates:
     *  SubSystem: '<Root>/RC130E_LTR_ClbrtnRtn'
     */
    /* RelationalOperator: '<S2>/Equal' incorporates:
     *  Constant: '<S8>/Constant'
     *  DataStoreWrite: '<S2>/DataStoreWrite'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC130E_LTR_ClbrtnRtn_Op'
     */
    VeRCVR_b_LTR_Calibration_Request = (((uint32)tmpRead) ==
        CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130E_LTR_ClbrtnRtn' */
}

/* Output function */
FUNC(void, RCVR_CODE) Routine_RC130F_HTL_ClbrtnRtn(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130F_HTL_ClbrtnRtn' incorporates:
     *  SubSystem: '<Root>/RC130F_HTL_ClbrtnRtn'
     */
    /* RelationalOperator: '<S3>/Equal' incorporates:
     *  Constant: '<S9>/Constant'
     *  DataStoreWrite: '<S3>/DataStoreWrite'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC130F_HTL_ClbrtnRtn_Op'
     */
    VeRCVR_b_HTL_Calibration_Request = (((uint32)tmpRead) ==
        CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130F_HTL_ClbrtnRtn' */
}

/* Model initialize function */
FUNC(void, RCVR_CODE) RCVR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_hyh =
            CeTHMR_e_LTCLBalancing;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ac =
            CeTAIR_e_EXV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf =
            CeTAIR_e_EXV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ok =
            CeTAIR_e_EXV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c1 =
            CeTAIR_e_DVC_HTCV_Calibration_Start;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg =
            CeTAIR_e_CPV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_bnl =
            CeTAIR_e_CPV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fy =
            CeTAIR_e_CPV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.Switch1_m = CeRCVR_e_EXV_Routine_In_Progress;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.Switch1_p = CeRCVR_e_EXV_Routine_In_Progress;

#endif

#if Rte_SysCon_Variant_RCVR_FUNC_2

        RCVR_ac_B.Switch1_cb = CeRCVR_e_EXV_Routine_In_Progress;

#endif

    }

    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    EeRCVR_U_HT_CabVlvSts_Min = 1.5F;

    /* Start for DataStoreMemory: '<Root>/DSM_2' */
    EeRCVR_U_HT_CabVlvSts_Max = 3.45F;

    /* Start for DataStoreMemory: '<Root>/DSM_4' */
    EeRCVR_Cnt_HTCV_Endstophits = 5000;

    /* Start for DataStoreMemory: '<Root>/DSM_5' */
    EeRCVR_e_HTCV_Calibration_Sts = 255;

#if Rte_SysCon_Variant_RCVR_FUNC_2

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/RCVR_FUNC_MedTED' */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVC'
     */
    /* Start for If: '<S692>/If' */
    RCVR_ac_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<S862>/If' */
    RCVR_ac_DW.If_ActiveSubsystem_p = -1;

    /* Start for If: '<S981>/If' */
    RCVR_ac_DW.If_ActiveSubsystem_d = -1;

#if Rte_SysCon_Variant_RCVR_FUNC_4

    /* SystemInitialize for Enabled SubSystem: '<S24>/DT-BEV_HtrCore_BypVlv' */
    /* Start for If: '<S580>/If' */
    RCVR_ac_DW.If_ActiveSubsystem_n = -1;

    /* End of SystemInitialize for SubSystem: '<S24>/DT-BEV_HtrCore_BypVlv' */
#endif

#if Rte_SysCon_Variant_RCVR_FUNC_1

    /* SystemInitialize for Enabled SubSystem: '<S24>/HTR_BypVlv' */
    /* Start for If: '<S748>/If' */
    RCVR_ac_DW.If_ActiveSubsystem_pf = -1;

    /* End of SystemInitialize for SubSystem: '<S24>/HTR_BypVlv' */
#endif

    /* SystemInitialize for SignalConversion generated from: '<S10>/ChlrRfg_Valve_Fault' incorporates:
     *  Constant: '<S1167>/Calib'
     */
    RCVR_ac_B.OutportBufferForChlrRfg_Valve_Fault = KeRCVR_b_ChlrRfgVlv_Flt_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S10>/FrtRfg_Valve_Fault' incorporates:
     *  Constant: '<S1169>/Calib'
     */
    RCVR_ac_B.OutportBufferForFrtRfg_Valve_Fault = KeRCVR_b_FrtRfgVlv_Flt_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S10>/HTL_BypVlv_Fault' incorporates:
     *  Constant: '<S1170>/Calib'
     */
    RCVR_ac_B.OutportBufferForHTL_BypVlv_Fault = KeRCVR_b_HTL_BypVlv_Fault_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S10>/LTR_BypVlv_Fault' incorporates:
     *  Constant: '<S1173>/Calib'
     */
    RCVR_ac_B.OutportBufferForLTR_BypVlv_Fault = KeRCVR_b_LTR_BypVlv_Fault_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S10>/LT_SO_Vlv_Fault' incorporates:
     *  Constant: '<S1174>/Calib'
     */
    RCVR_ac_B.OutportBufferForLT_SO_Vlv_Fault = KeRCVR_b_LT_SO_Vlv_Fault_Dial;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RCVF'
     */
    /* SystemInitialize for Switch: '<S1295>/Switch1' incorporates:
     *  Outport: '<S11>/EXV_Rtn_Sts'
     */
    RCVR_ac_B.Switch1_p = CeRCVR_e_EXV_Routine_In_Progress;

    /* SystemInitialize for Switch: '<S1269>/Switch1' incorporates:
     *  Outport: '<S11>/EEXV_Rtn_Sts'
     */
    RCVR_ac_B.Switch1_m = CeRCVR_e_EXV_Routine_In_Progress;

    /* SystemInitialize for Switch: '<S1390>/Switch1' incorporates:
     *  Outport: '<S11>/OEXV_Rtn_Sts'
     */
    RCVR_ac_B.Switch1_cb = CeRCVR_e_EXV_Routine_In_Progress;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/RCVR_FUNC_MedTED' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/RCVR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S6>/FcnCallGen' incorporates:
     *  SubSystem: '<S6>/RCVR_NF'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1531>/HT_Shtoff_VlvSts_Enum' incorporates:
     *  Constant: '<S1552>/Constant'
     */
    RCVR_ac_B.OutportBufferForHT_Shtoff_VlvSts_Enum = RCVR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S6>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HT_Shtoff_VlvSts' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    (void)Rte_Write_VeRCVR_e_HT_Shtoff_VlvSts_Value(CeRCVR_e_Vlv_Deenergize);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_FrWyVlv_CalCmnd' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeRCVR_e_FrWyVlv_CalCmnd_Value(CeRCVR_e_CPV_No_Calibration);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_CPV_RtnSts' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeRCVR_e_CPV_RtnSts_Value
        (CeRCVR_e_CPV_RoutineSts_In_Progress);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_EXV_CalCmd' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeRCVR_e_EXV_CalCmd_Value(CeRCVR_e_EXV_No_Calibration);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_LTR_Vlv_CalCmnd' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeRCVR_e_LTR_Vlv_CalCmnd_Value(CeRCVR_e_CPV_No_Calibration);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HTL_Vlv_CalCmnd' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeRCVR_e_HTL_Vlv_CalCmnd_Value(CeRCVR_e_CPV_No_Calibration);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_EXV_RtnSts' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    (void)Rte_Write_VeRCVR_e_EXV_RtnSts_Value(CeRCVR_e_EXV_Routine_In_Progress);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_CPV_Valve_Stuck_State' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    (void)Rte_Write_VeRCVR_e_CPV_Valve_Stuck_State_Value(CeRCVR_e_Closed);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_LTR_Valve_Stuck_State' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    (void)Rte_Write_VeRCVR_e_LTR_Valve_Stuck_State_Value(CeRCVR_e_Closed);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HTL_Valve_Stuck_State' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    (void)Rte_Write_VeRCVR_e_HTL_Valve_Stuck_State_Value(CeRCVR_e_Closed);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_EEXV_CalRq' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VeRCVR_e_EEXV_CalRq_Value(CeRCVR_e_EXV_No_Calibration);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_OEXV_CalRq' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    (void)Rte_Write_VeRCVR_e_OEXV_CalRq_Value(CeRCVR_e_EXV_No_Calibration);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HTR_Vlv_CalCmnd' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    (void)Rte_Write_VeRCVR_e_HTR_Vlv_CalCmnd_Value
        (CeRCVR_e_FCV_Allow_Normal_Operation);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HTRBV_Block_Det_Enbl' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    (void)Rte_Write_VeRCVR_e_HTRBV_Block_Det_Enbl_Value(CeRCVR_e_FCV_False);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_EEXV_RtnSts' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    (void)Rte_Write_VeRCVR_e_EEXV_RtnSts_Value(CeRCVR_e_EXV_Routine_In_Progress);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_OEXV_RtnSts' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    (void)Rte_Write_VeRCVR_e_OEXV_RtnSts_Value(CeRCVR_e_EXV_Routine_In_Progress);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_LTR_RtnSts' incorporates:
     *  Merge: '<Root>/Merge_43'
     */
    (void)Rte_Write_VeRCVR_e_LTR_RtnSts_Value
        (CeRCVR_e_CPV_RoutineSts_In_Progress);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HTL_RtnSts' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    (void)Rte_Write_VeRCVR_e_HTL_RtnSts_Value
        (CeRCVR_e_CPV_RoutineSts_In_Progress);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HtrCoreBypVlv_CalCmnd' incorporates:
     *  Merge: '<Root>/Merge_46'
     */
    (void)Rte_Write_VeRCVR_e_HtrCoreBypVlv_CalCmnd_Value
        (CeRCVR_e_CPV_No_Calibration);

    /* SystemInitialize for Outport: '<Root>/VeRCVR_e_HtrCoreBypVlv_Stuck_State' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    (void)Rte_Write_VeRCVR_e_HtrCoreBypVlv_Stuck_State_Value(CeRCVR_e_Closed);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
