/*
 * File: HTIR_ac.c
 *
 * Code generated for Simulink model 'HTIR_ac'.
 *
 * Model version                  : 9.65
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:54:03 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HTIR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(uint8, HTIR_VAR_INIT) KeHTIR_Cnt_HVC_Htr_UnlckCntr_D = 0U;/* Referenced by: '<S422>/Calib' */

#endif

static volatile CONST(uint8, HTIR_VAR_INIT) KeHTIR_Cnt_HVC_Htr_UnlckCntr_INIT =
    0U;                                /* Referenced by: '<S585>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_I_HVC_Htr2_HV_CrntAct_D =
    0.0F;                              /* Referenced by: '<S252>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_I_HVC_Htr2_HV_CrntAct_INIT =
    0.0F;                              /* Referenced by: '<S502>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_I_HVC_Htr4_HV_CrntAct_D =
    0.0F;                              /* Referenced by: '<S374>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_I_HVC_Htr4_HV_CrntAct_INIT =
    0.0F;                              /* Referenced by: '<S545>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_I_HVC_Htr_HV_CrntAct_D =
    0.0F;                              /* Referenced by: '<S423>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_I_HVC_Htr_HV_CrntAct_INIT =
    0.0F;                              /* Referenced by: '<S586>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_Pct_DVC_Htr2PwrLimit_D =
    0.0F;                              /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_Pct_HVC_Htr2PctFctr =
    100.0F;                            /* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_Pct_HVC_Htr2PwrAct_D = 0.0F;/* Referenced by: '<S255>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_Pct_HVC_Htr2PwrAct_INIT =
    0.0F;                              /* Referenced by: '<S503>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_Htr4ClntIn_Temp_D =
    0.0F;                              /* Referenced by: '<S388>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_Htr4ClntIn_Temp_INIT =
    0.0F;                              /* Referenced by: '<S546>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_Htr4ClntOut_Temp_D =
    0.0F;                              /* Referenced by: '<S382>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_Htr4ClntOut_Temp_INIT
    = 0.0F;                            /* Referenced by: '<S547>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_HtrClntIn_Temp_D =
    0.0F;                              /* Referenced by: '<S424>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_HtrClntIn_Temp_INIT =
    0.0F;                              /* Referenced by: '<S587>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_HtrClntOut_Temp_D =
    0.0F;                              /* Referenced by: '<S425>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_HVC_HtrClntOut_Temp_INIT =
    0.0F;                              /* Referenced by: '<S588>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_Htr2CoreTemp_D = 0.0F;/* Referenced by: '<S256>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_Htr2CoreTemp_INIT = 0.0F;/* Referenced by: '<S504>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_Htr2_PCBTemp_D = 0.0F;/* Referenced by: '<S257>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_T_Htr2_PCBTemp_INIT = 0.0F;/* Referenced by: '<S505>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_U_HVC_Htr2_HV_VltgAct_D =
    0.0F;                              /* Referenced by: '<S258>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_U_HVC_Htr2_HV_VltgAct_INIT =
    0.0F;                              /* Referenced by: '<S506>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_U_HVC_Htr4_HV_VltgAct_D =
    0.0F;                              /* Referenced by: '<S377>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_U_HVC_Htr4_HV_VltgAct_INIT =
    0.0F;                              /* Referenced by: '<S548>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_U_HVC_Htr_HV_VltgAct_D =
    0.0F;                              /* Referenced by: '<S426>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_U_HVC_Htr_HV_VltgAct_INIT =
    0.0F;                              /* Referenced by: '<S589>/Calib' */

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_DVC_Htr3PwrLimit_D = 0.0F;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_DVC_Htr4PwrLimit_D = 0.0F;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_DVC_HtrPwrLimit_D = 0.0F;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_Htr2PwrMax = 3000.0F;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_Htr3PwrAct_D = 0.0F;/* Referenced by: '<S330>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_Htr3PwrAct_INIT =
    0.0F;                              /* Referenced by: '<S540>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_Htr4PwrAct_D = 0.0F;/* Referenced by: '<S400>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_Htr4PwrAct_INIT =
    0.0F;                              /* Referenced by: '<S549>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_Htr4PwrExpectd_D =
    0.0F;                              /* Referenced by: '<S391>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_Htr4PwrExpectd_INIT =
    0.0F;                              /* Referenced by: '<S550>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_HtrPwrAct_D = 0.0F;/* Referenced by: '<S428>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_HtrPwrAct_INIT = 0.0F;/* Referenced by: '<S590>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_HtrPwrExpectd_D =
    0.0F;                              /* Referenced by: '<S429>/Calib' */

#endif

static volatile CONST(float32, HTIR_VAR_INIT) KeHTIR_W_HVC_HtrPwrExpectd_INIT =
    0.0F;                              /* Referenced by: '<S591>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_DVC_Htr2PwrLimit_SD = 0;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_DVC_Htr3PwrLimit_SD = 0;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_DVC_Htr4PwrLimit_SD = 0;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_DVC_HtrPwrLimit_SD = 0;/* Referenced by: '<S430>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2CoreTemp_SensFltFA_INIT = 0;/* Referenced by: '<S507>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2CoreTemp_SensFlt_SD = 0;/* Referenced by: '<S261>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2Core_OvrTmpFA_INIT = 0;/* Referenced by: '<S508>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2Core_OvrTmp_SD =
    0;                                 /* Referenced by: '<S262>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2DrvFltFA_INIT = 0;/* Referenced by: '<S509>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2DrvFlt_SD = 0;/* Referenced by: '<S263>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2HVCrnt_SnsrFltFA_INIT = 0;/* Referenced by: '<S510>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_SD
    = 0;                               /* Referenced by: '<S264>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2IntCom_ErrFA_INIT
    = 0;                               /* Referenced by: '<S511>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2IntCom_Err_SD = 0;/* Referenced by: '<S265>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2PCBTmp_SnsrFltFA_INIT = 0;/* Referenced by: '<S512>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_SD
    = 0;                               /* Referenced by: '<S266>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2ProcesMemory_FltFA_INIT = 0;/* Referenced by: '<S513>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2ProcesMemory_Flt_SD = 0;/* Referenced by: '<S267>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2PwrActFA_INIT = 0;/* Referenced by: '<S514>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2PwrAct_SD = 0;/* Referenced by: '<S268>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2Resis_PCB_OvrTempFA_INIT = 0;/* Referenced by: '<S515>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_SD = 0;/* Referenced by: '<S269>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2SelfProtect_ActvFA_INIT = 0;/* Referenced by: '<S516>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2SelfProtect_Actv_SD = 0;/* Referenced by: '<S270>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2TmpOvrheatgFA_INIT = 0;/* Referenced by: '<S517>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2TmpOvrheatg_SD =
    0;                                 /* Referenced by: '<S271>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2_HV_CrntActFA_INIT = 0;/* Referenced by: '<S518>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2_HV_CrntAct_SD =
    0;                                 /* Referenced by: '<S272>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2_HV_CrntOutofRngFA_INIT = 0;/* Referenced by: '<S519>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2_HV_CrntOutofRng_SD = 0;/* Referenced by: '<S273>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2_HV_OutofRng_FA_INIT = 0;/* Referenced by: '<S520>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2_HV_OutofRng_SD =
    0;                                 /* Referenced by: '<S274>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2_HV_VltgAct_FA_INIT = 0;/* Referenced by: '<S521>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2_HV_VltgAct_SD =
    0;                                 /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2_LIN_ResErr_D = 0;/* Referenced by: '<S276>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2_LIN_ResErr_INIT =
    0;                                 /* Referenced by: '<S522>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2_LIN_ResErr_SD =
    0;                                 /* Referenced by: '<S277>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr2_LV_OutofRng_FA_INIT = 0;/* Referenced by: '<S523>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr2_LV_OutofRng_SD =
    0;                                 /* Referenced by: '<S278>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr3Cntctr_StckClsd_FA_INIT = 0;/* Referenced by: '<S541>/Calib' */
static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr3PwrActFA_INIT = 0;/* Referenced by: '<S542>/Calib' */

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr3PwrAct_SD = 0;/* Referenced by: '<S331>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntIn_TempFA_INIT = 0;/* Referenced by: '<S551>/Calib' */
static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntIn_TempSensFltFA_INIT = 0;/* Referenced by: '<S552>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_SD = 0;/* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4ClntIn_Temp_SD =
    0;                                 /* Referenced by: '<S389>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntOut_TempFA_INIT = 0;/* Referenced by: '<S553>/Calib' */
static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntOut_TempSensFltFA_INIT = 0;/* Referenced by: '<S554>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_SD = 0;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4ClntOut_Temp_SD =
    0;                                 /* Referenced by: '<S383>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_INIT = 0;/* Referenced by: '<S555>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ClntTemp_OutofRng_SD = 0;/* Referenced by: '<S397>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4CoreTemp_SensFltFA_INIT = 0;/* Referenced by: '<S556>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4CoreTemp_SensFlt_SD = 0;/* Referenced by: '<S415>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4DrvFltFA_INIT = 0;/* Referenced by: '<S557>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4DrvFlt_SD = 0;/* Referenced by: '<S418>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4IntCom_ErrFA_INIT
    = 0;                               /* Referenced by: '<S558>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4IntCom_Err_SD = 0;/* Referenced by: '<S385>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ProcesMemory_FltFA_INIT = 0;/* Referenced by: '<S559>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4ProcesMemory_Flt_SD = 0;/* Referenced by: '<S368>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4PwrActFA_INIT = 0;/* Referenced by: '<S560>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4PwrAct_SD = 0;/* Referenced by: '<S401>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4PwrExpectdFA_INIT
    = 0;                               /* Referenced by: '<S561>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4PwrExpectd_SD = 0;/* Referenced by: '<S392>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4Resis_PCB_OvrTempFA_INIT = 0;/* Referenced by: '<S562>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_SD = 0;/* Referenced by: '<S403>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4SelfProtect_ActvFA_INIT = 0;/* Referenced by: '<S563>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4SelfProtect_Actv_SD = 0;/* Referenced by: '<S406>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_DCDC_VltgOutofRngFA_INIT = 0;/* Referenced by: '<S564>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_SD = 0;/* Referenced by: '<S394>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_HV_CrntActFA_INIT = 0;/* Referenced by: '<S565>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4_HV_CrntAct_SD =
    0;                                 /* Referenced by: '<S375>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_HV_CrntOutofRngFA_INIT = 0;/* Referenced by: '<S566>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_HV_CrntOutofRng_SD = 0;/* Referenced by: '<S371>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_HV_OutofRng_FA_INIT = 0;/* Referenced by: '<S567>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4_HV_OutofRng_SD =
    0;                                 /* Referenced by: '<S365>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_HV_VltgAct_FA_INIT = 0;/* Referenced by: '<S568>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4_HV_VltgAct_SD =
    0;                                 /* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4_LIN_ResErr_D = 0;/* Referenced by: '<S380>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4_LIN_ResErr_INIT =
    0;                                 /* Referenced by: '<S569>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4_LIN_ResErr_SD =
    0;                                 /* Referenced by: '<S381>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr4_LV_OutofRng_FA_INIT = 0;/* Referenced by: '<S570>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr4_LV_OutofRng_SD =
    0;                                 /* Referenced by: '<S362>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrClntIn_TempFA_INIT
    = 0;                               /* Referenced by: '<S592>/Calib' */
static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrClntIn_TempSensFltFA_INIT = 0;/* Referenced by: '<S593>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrClntIn_TempSensFlt_SD = 0;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrClntIn_Temp_SD = 0;/* Referenced by: '<S432>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrClntOut_TempFA_INIT = 0;/* Referenced by: '<S594>/Calib' */
static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrClntOut_TempSensFltFA_INIT = 0;/* Referenced by: '<S595>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrClntOut_TempSensFlt_SD = 0;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrClntOut_Temp_SD =
    0;                                 /* Referenced by: '<S434>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_INIT = 0;/* Referenced by: '<S596>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrClntTemp_OutofRng_SD = 0;/* Referenced by: '<S435>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrCoreTemp_SensFltFA_INIT = 0;/* Referenced by: '<S597>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrCoreTemp_SensFlt_SD = 0;/* Referenced by: '<S436>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrDrvFltFA_INIT = 0;/* Referenced by: '<S598>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrDrvFlt_SD = 0;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrHighVol_Dwn_SD = 0;/* Referenced by: '<S438>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrIntCom_ErrFA_INIT =
    0;                                 /* Referenced by: '<S599>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrIntCom_Err_SD = 0;/* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrOvrht_UnlckReq_D =
    0;                                 /* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrOvrht_UnlckReq_SD =
    0;                                 /* Referenced by: '<S441>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrProcesMemory_FltFA_INIT = 0;/* Referenced by: '<S600>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrProcesMemory_Flt_SD = 0;/* Referenced by: '<S442>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrPwrActFA_INIT = 0;/* Referenced by: '<S601>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrPwrAct_SD = 0;/* Referenced by: '<S443>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrPwrExpectdFA_INIT =
    0;                                 /* Referenced by: '<S602>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrPwrExpectd_SD = 0;/* Referenced by: '<S444>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_INIT = 0;/* Referenced by: '<S603>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrResis_PCB_OvrTemp_SD = 0;/* Referenced by: '<S445>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrSelfProtect_ActvFA_INIT = 0;/* Referenced by: '<S604>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_HtrSelfProtect_Actv_SD = 0;/* Referenced by: '<S446>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_HtrUnlck_Req_INIT = 0;/* Referenced by: '<S605>/Calib' */
static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_INIT = 0;/* Referenced by: '<S606>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_SD = 0;/* Referenced by: '<S447>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_HV_CrntActFA_INIT
    = 0;                               /* Referenced by: '<S607>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_HV_CrntAct_SD = 0;/* Referenced by: '<S448>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_INIT = 0;/* Referenced by: '<S608>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_HV_CrntOutofRng_SD = 0;/* Referenced by: '<S449>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_HV_OutofRng_FA_INIT = 0;/* Referenced by: '<S609>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_HV_OutofRng_SD =
    0;                                 /* Referenced by: '<S450>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_HV_VltgAct_FA_INIT = 0;/* Referenced by: '<S610>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_HV_VltgAct_SD = 0;/* Referenced by: '<S451>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_InterlockStatFA_INIT = 0;/* Referenced by: '<S611>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_InterlockStat_SD =
    0;                                 /* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_LIN_ResErr_D = 0;/* Referenced by: '<S453>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_LIN_ResErr_INIT =
    0;                                 /* Referenced by: '<S612>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_LIN_ResErr_SD = 0;/* Referenced by: '<S454>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT)
    KeHTIR_b_HVC_Htr_LV_OutofRng_FA_INIT = 0;/* Referenced by: '<S613>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_LV_OutofRng_SD =
    0;                                 /* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HVC_Htr_UnlckCntr_SD = 0;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HV_ElecClntHtr2_Sts_SD =
    0;                                 /* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HV_ElecClntHtr3_Sts_SD =
    0;                                 /* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HV_ElecClntHtr4_Sts_SD =
    0;                                 /* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HV_ElecClntHtr_Sts_SD = 0;/* Referenced by: '<S457>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr2CoreTemp_FA_INIT = 0;/* Referenced by: '<S524>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr2CoreTemp_SD = 0;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr2PwrLimit_IO_Cnt_SD =
    0;                                 /* Referenced by: '<S281>/Calib' */

#endif

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr2_PCBTempFA_INIT = 0;/* Referenced by: '<S525>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr2_PCBTemp_SD = 0;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr3Cntctr_StckClsdt_SD =
    0;                                 /* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr3PwrLimit_IO_Cnt_SD =
    0;                                 /* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_Htr4PwrLimit_IO_Cnt_SD =
    0;                                 /* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(boolean, HTIR_VAR_INIT) KeHTIR_b_HtrPwrLimit_IO_Cnt_SD = 0;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2CoreTemp_SensFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S283>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2CoreTemp_SensFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S526>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2Core_OvrTmp_D = CeHTIR_e_Warning_False;/* Referenced by: '<S284>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2Core_OvrTmp_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S527>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2DrvFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S285>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2DrvFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S528>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S286>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S529>/Calib' */
static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2IntCom_ErrINIT = CeHTIR_e_Warning_False;/* Referenced by: '<S530>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2IntCom_Err_D = CeHTIR_e_Warning_False;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S288>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S531>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2ProcesMemory_Flt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S289>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2ProcesMemory_Flt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S532>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_D = CeHTIR_e_Warning_False;/* Referenced by: '<S290>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S533>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2SelfProtect_Actv_D = CeHTIR_e_Warning_False;/* Referenced by: '<S291>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2SelfProtect_Actv_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S534>/Calib' */
static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2Sts_INIT = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S535>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2TmpOvrheatg_D = CeHTIR_e_Warning_False;/* Referenced by: '<S292>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2TmpOvrheatg_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S536>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2_HV_CrntOutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S293>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2_HV_CrntOutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S537>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2_HV_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S294>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2_HV_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S538>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2_LV_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S295>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr2_LV_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S539>/Calib' */

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr3Cntctr_StckClsd_D = CeHTIR_e_Warning_False;/* Referenced by: '<S328>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr3Cntctr_StckClsd_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S543>/Calib' */
static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr3Sts_INIT = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S544>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S413>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S571>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S410>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S572>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ClntTemp_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S398>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ClntTemp_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S573>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4CoreTemp_SensFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S416>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4CoreTemp_SensFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S574>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4DrvFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S419>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4DrvFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S575>/Calib' */
static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4IntCom_ErrINIT = CeHTIR_e_Warning_False;/* Referenced by: '<S576>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4IntCom_Err_D = CeHTIR_e_Warning_False;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ProcesMemory_Flt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S369>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4ProcesMemory_Flt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S577>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_D = CeHTIR_e_Warning_False;/* Referenced by: '<S404>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S578>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4SelfProtect_Actv_D = CeHTIR_e_Warning_False;/* Referenced by: '<S407>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4SelfProtect_Actv_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S579>/Calib' */
static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4Sts_INIT = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S580>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S395>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S581>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_HV_CrntOutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S372>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_HV_CrntOutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S582>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_HV_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S366>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_HV_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S583>/Calib' */

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_LV_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S363>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr4_LV_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S584>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrClntIn_TempSensFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S459>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrClntIn_TempSensFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S614>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrClntOut_TempSensFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S460>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrClntOut_TempSensFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S615>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrClntTemp_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S461>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrClntTemp_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S616>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrCoreTemp_SensFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S462>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrCoreTemp_SensFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S617>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrDrvFlt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S463>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrDrvFlt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S618>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrHighVol_Dwn_D = CeHTIR_e_Warning_False;/* Referenced by: '<S464>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrHighVol_Dwn_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S619>/Calib' */
static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrIntCom_ErrINIT = CeHTIR_e_Warning_False;/* Referenced by: '<S620>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrIntCom_Err_D = CeHTIR_e_Warning_False;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrProcesMemory_Flt_D = CeHTIR_e_Warning_False;/* Referenced by: '<S466>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrProcesMemory_Flt_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S621>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrResis_PCB_OvrTemp_D = CeHTIR_e_Warning_False;/* Referenced by: '<S467>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrResis_PCB_OvrTemp_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S622>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrSelfProtect_Actv_D = CeHTIR_e_Warning_False;/* Referenced by: '<S468>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrSelfProtect_Actv_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S623>/Calib' */
static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HVC_HtrSts_INIT = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S624>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S469>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S625>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_HV_CrntOutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S470>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_HV_CrntOutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S626>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_HV_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S471>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_HV_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S627>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHVTR_e_HV_IntrlkStat, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_InterlockStat_D = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S472>/Calib' */

#endif

static volatile CONST(TeHVTR_e_HV_IntrlkStat, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_InterlockStat_INIT = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S628>/Calib' */

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_LV_OutofRng_D = CeHTIR_e_Warning_False;/* Referenced by: '<S473>/Calib' */

#endif

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HTIR_VAR_INIT)
    KeHTIR_e_HVC_Htr_LV_OutofRng_INIT = CeHTIR_e_Warning_False;/* Referenced by: '<S629>/Calib' */

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HV_ElecClntHtr2_Sts_D = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HV_ElecClntHtr3_Sts_D = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HV_ElecClntHtr4_Sts_D = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_HVC_HtrSts, HTIR_VAR_INIT)
    KeHTIR_e_HV_ElecClntHtr_Sts_D = CeHTIR_e_HtrSts_Off;/* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static volatile CONST(TeHTIR_e_IO_CntrlSt, HTIR_VAR_INIT)
    KeHTIR_e_Htr2PwrLimit_IO_Cnt_D = CeHTIR_e_Return_Control_to_ECU;/* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_3

static volatile CONST(TeHTIR_e_IO_CntrlSt, HTIR_VAR_INIT)
    KeHTIR_e_Htr3PwrLimit_IO_Cnt_D = CeHTIR_e_Return_Control_to_ECU;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_4

static volatile CONST(TeHTIR_e_IO_CntrlSt, HTIR_VAR_INIT)
    KeHTIR_e_Htr4PwrLimit_IO_Cnt_D = CeHTIR_e_Return_Control_to_ECU;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_HTIR_1

static volatile CONST(TeHTIR_e_IO_CntrlSt, HTIR_VAR_INIT)
    KeHTIR_e_HtrPwrLimit_IO_Cnt_D = CeHTIR_e_Return_Control_to_ECU;/* Referenced by: '<S475>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HTIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_HTIR_2

static VAR(float32, HTIR_VAR_INIT) VeHTIR_Pct_DVC_Htr2PwrLimit;/* '<S251>/Switch25' */

#endif

#if Rte_SysCon_Variant_HTIR_2

static VAR(float32, HTIR_VAR_INIT) VeHTIR_Pct_HVC_Htr2PwrAct;/* '<S251>/Switch20' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HTIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HTIR
#include "MemMap.h"

CONST(ConstB_HTIR_ac_T, HTIR_VAR_INIT) HTIR_ac_ConstB =
{
    CeHVTR_e_IntrlkPassed,             /* '<S497>/Const142' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S497>/Const44' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S497>/Const84' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S497>/Const91' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S497>/Const133' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S630>/Constant' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S631>/Constant' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S632>/Constant' */
    CeHTIR_e_Return_Control_to_ECU,    /* '<S633>/Constant' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const2' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const4' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const6' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const8' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const10' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const12' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const14' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const16' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const18' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const20' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const22' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const24' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const26' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const39' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const47' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const49' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const51' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const53' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const55' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const57' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const59' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const61' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const65' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const67' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const69' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const74' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const76' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const89' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const94' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const96' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const98' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const100' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const102' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const104' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const106' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const108' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const110' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const112' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const114' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const116' */
    CeHTIR_e_Warning_False,            /* '<S497>/Const118' */
    CeHTIR_e_HtrSts_Off,               /* '<S497>/Const1' */
    CeHTIR_e_HtrSts_Off,               /* '<S497>/Const46' */
    CeHTIR_e_HtrSts_Off,               /* '<S497>/Const86' */
    CeHTIR_e_HtrSts_Off                /* '<S497>/Const93' */
};

#define STOP_SEC_CONST_UNSPECIFIED_HTIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HTIR
#include "MemMap.h"

VAR(B_HTIR_ac_T, HTIR_VAR_INIT) HTIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HTIR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, HTIR_CODE) HTIR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_jq;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__h;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_ab;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_me;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_hn;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_dkg;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__c;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_g1;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__m;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__f;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__a;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__j;

#endif

#if Rte_SysCon_Variant_HTIR_1

    float32 rtb_TmpSignalConversionAtVeHTIR_I_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_a4;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__i;

#endif

#if Rte_SysCon_Variant_HTIR_1

    float32 rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_at;

#endif

#if Rte_SysCon_Variant_HTIR_1

    float32 rtb_TmpSignalConversionAtVeHTIR_T_HVC__l;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__b;

#endif

#if Rte_SysCon_Variant_HTIR_1

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__l;

#endif

#if Rte_SysCon_Variant_HTIR_1

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HVC__b;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_fle;

#endif

#if Rte_SysCon_Variant_HTIR_1

    float32 rtb_TmpSignalConversionAtVeHTIR_U_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_ne;

#endif

#if Rte_SysCon_Variant_HTIR_1

    uint8 rtb_TmpSignalConversionAtVeHTIR_Cnt_HVC_;

#endif

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_TmpSignalConversionAtVeHTIF_b_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_1

    float32 rtb_TmpSignalConversionAtVeHTIF_P_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__gs;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__eb;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__lo;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__kj;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_n;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__no;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_d;

#endif

#if Rte_SysCon_Variant_HTIR_2

    float32 rtb_TmpSignalConversionAtVeHTIR_T_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_m;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_l;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__hc;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__az;

#endif

#if Rte_SysCon_Variant_HTIR_2

    float32 rtb_TmpSignalConversionAtVeHTIR_I_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_l4j;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__hn;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_a;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_o;

#endif

#if Rte_SysCon_Variant_HTIR_2

    float32 rtb_TmpSignalConversionAtVeHTIR_Pct_HV_H;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__c3;

#endif

#if Rte_SysCon_Variant_HTIR_2

    float32 rtb_TmpSignalConversionAtVeHTIR_T_HV_H_g;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_Htr2Co;

#endif

#if Rte_SysCon_Variant_HTIR_2

    float32 rtb_TmpSignalConversionAtVeHTIR_U_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__hw;

#endif

#if Rte_SysCon_Variant_HTIR_2

    float32 rtb_TmpSignalConversionAtVeHTIF_Pct_HV_H;

#endif

#if Rte_SysCon_Variant_HTIR_3

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_3

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__m3;

#endif

#if Rte_SysCon_Variant_HTIR_3

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__gl;

#endif

#if Rte_SysCon_Variant_HTIR_3

    float32 rtb_TmpSignalConversionAtVeHTIF_P_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__kn;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__pd;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_c;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__k0;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__al;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__np;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__hm;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_g;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__d3;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_i;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__eh;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_j;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_h;

#endif

#if Rte_SysCon_Variant_HTIR_4

    float32 rtb_TmpSignalConversionAtVeHTIR_I_HV_H_e;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__as;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__ld;

#endif

#if Rte_SysCon_Variant_HTIR_4

    float32 rtb_TmpSignalConversionAtVeHTIR_T_HV_H_l;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__kk;

#endif

#if Rte_SysCon_Variant_HTIR_4

    float32 rtb_TmpSignalConversionAtVeHTIR_T_HV_H_m;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__ot;

#endif

#if Rte_SysCon_Variant_HTIR_4

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HV_H_m;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV_H_b;

#endif

#if Rte_SysCon_Variant_HTIR_4

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HV_H_a;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__dy;

#endif

#if Rte_SysCon_Variant_HTIR_4

    float32 rtb_TmpSignalConversionAtVeHTIR_U_HV_H_f;

#endif

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HV__oe;

#endif

#if Rte_SysCon_Variant_HTIR_4

    float32 rtb_TmpSignalConversionAtVeHTIF_P_HV_H_h;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HVC_hw;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC_d3;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC_hg;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__a;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__i;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__h;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC_io;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC_kt;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC_gz;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__k;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__j;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC_bx;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__c;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__p;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HVC__m;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeHTIF_e_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HV__ie;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_k1r;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__km;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__c3;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__lg;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__f2;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__mf;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__md;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_H_d;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__mp;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__ft;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_H_j;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_H_g;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeHTIF_e_HV_Htr;

#endif

#if Rte_SysCon_Variant_HTIR_3

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HV_H_o;

#endif

#if Rte_SysCon_Variant_HTIR_3

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_H_k;

#endif

#if Rte_SysCon_Variant_HTIR_3

    TeHTIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeHTIF_e_HV_H_k;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HV_H_h;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__ik;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__o5;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_H_c;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__ka;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__lw;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_H_b;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__ly;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__ox;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__py;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__cy;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_ndf;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__eu;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV__dy;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeHTIF_e_HV_H_i;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/HTIR_MedTEH'
     */
    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrSts_read' incorporates:
     *  SignalConversion generated from: '<S85>/VeHTIF_P_HVC_HtrPwrLimit_Read'
     *  SignalConversion generated from: '<S85>/VeHTIF_b_HVC_HtrOvrht_UnlckReq_read'
     *  SignalConversion generated from: '<S85>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_Read'
     *  SignalConversion generated from: '<S85>/VeHTIR_Cnt_HVC_HtrUnlckCntr_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_I_HVC_Htr_HV_CrntAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_P_HVC_HtrPwrAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_P_HVC_HtrPwrExpectd_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_T_HVC_HtrClntIn_Temp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_T_HVC_HtrClntOut_Temp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_U_HVC_Htr_HV_VltgAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntIn_TempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntOut_TempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrDrvFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrIntCom_ErrFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrProcesMemory_FltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrPwrActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrPwrExpectdFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrSelfProtect_ActvFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_CrntActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_VltgActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_LIN_ResErr_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_LV_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrDrvFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrHighVol_Dwn_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrIntCom_Err_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrProcesMemory_Flt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrSelfProtect_Actv_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_HV_OutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_LV_OutofRng_read'
     */
#if Rte_SysCon_Variant_HTIR_1

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrSts_read' incorporates:
     *  Merge: '<Root>/Merge_84'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC_hw =
        Rte_IrvRead_HTIR_MedTEH_HVC_HtrSts_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_HV_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_106'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC_d3 =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr_HV_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_116'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_Htr_HV_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_LV_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_122'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC_hg =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr_LV_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_LV_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_123'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_jq =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_Htr_LV_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_124'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__a =
        Rte_IrvRead_HTIR_MedTEH_HVC_HtrClntTemp_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_125'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__h =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrIntCom_Err_read' incorporates:
     *  Merge: '<Root>/Merge_126'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__i =
        Rte_IrvRead_HTIR_MedTEH_HVC_HtrIntCom_Err_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrIntCom_ErrFA_read' incorporates:
     *  Merge: '<Root>/Merge_85'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_ab =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrIntCom_ErrFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_read' incorporates:
     *  Merge: '<Root>/Merge_86'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__h =
        Rte_IrvRead_HTIR_MedTEH_HtrResis_PCB_OvrTemp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_87'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_me =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrSelfProtect_Actv_read' incorporates:
     *  Merge: '<Root>/Merge_88'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC_io =
        Rte_IrvRead_HTIR_MedTEH_HtrSelfProtect_Actv_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrSelfProtect_ActvFA_read' incorporates:
     *  Merge: '<Root>/Merge_89'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_hn =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrSelfProtect_ActvFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_read' incorporates:
     *  Merge: '<Root>/Merge_90'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC_kt =
        Rte_IrvRead_HTIR_MedTEH_HtrClntOut_TempSensFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_91'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_dkg =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_read' incorporates:
     *  Merge: '<Root>/Merge_92'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC_gz =
        Rte_IrvRead_HTIR_MedTEH_HtrClntIn_TempSensFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_93'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__c =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_read' incorporates:
     *  Merge: '<Root>/Merge_94'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__k =
        Rte_IrvRead_HTIR_MedTEH_HtrCoreTemp_SensFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_96'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_g1 =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_97'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__j =
        Rte_IrvRead_HTIR_MedTEH_Htr_DCDC_VltgOutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_98'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__m =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_99'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC_bx =
        Rte_IrvRead_HTIR_MedTEH_Htr_HV_CrntOutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_100'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__f =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrDrvFlt_read' incorporates:
     *  Merge: '<Root>/Merge_101'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__c =
        Rte_IrvRead_HTIR_MedTEH_HtrDrvFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrDrvFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_102'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__a =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrDrvFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrProcesMemory_Flt_read' incorporates:
     *  Merge: '<Root>/Merge_103'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__p =
        Rte_IrvRead_HTIR_MedTEH_HtrProcesMemory_Flt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrProcesMemory_FltFA_read' incorporates:
     *  Merge: '<Root>/Merge_104'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__j =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrProcesMemory_FltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_I_HVC_Htr_HV_CrntAct_read' incorporates:
     *  Merge: '<Root>/Merge_105'
     */
    rtb_TmpSignalConversionAtVeHTIR_I_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_HV_CrntAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_CrntActFA_read' incorporates:
     *  Merge: '<Root>/Merge_107'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_a4 =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_Htr_HV_CrntActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_LIN_ResErr_read' incorporates:
     *  Merge: '<Root>/Merge_109'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__i =
        Rte_IrvRead_HTIR_MedTEH_Htr_LIN_ResErr_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_T_HVC_HtrClntOut_Temp_read' incorporates:
     *  Merge: '<Root>/Merge_110'
     */
    rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_HtrClntOut_Temp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntOut_TempFA_read' incorporates:
     *  Merge: '<Root>/Merge_111'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_at =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrClntOut_TempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_T_HVC_HtrClntIn_Temp_read' incorporates:
     *  Merge: '<Root>/Merge_112'
     */
    rtb_TmpSignalConversionAtVeHTIR_T_HVC__l =
        Rte_IrvRead_HTIR_MedTEH_HtrClntIn_Temp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrClntIn_TempFA_read' incorporates:
     *  Merge: '<Root>/Merge_113'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__b =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrClntIn_TempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_P_HVC_HtrPwrExpectd_read' incorporates:
     *  Merge: '<Root>/Merge_114'
     */
    rtb_TmpSignalConversionAtVeHTIR_P_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_HtrPwrExpectd_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrPwrExpectdFA_read' incorporates:
     *  Merge: '<Root>/Merge_115'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC__l =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrPwrExpectdFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_P_HVC_HtrPwrAct_read' incorporates:
     *  Merge: '<Root>/Merge_117'
     */
    rtb_TmpSignalConversionAtVeHTIR_P_HVC__b =
        Rte_IrvRead_HTIR_MedTEH_HtrPwrAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_HtrPwrActFA_read' incorporates:
     *  Merge: '<Root>/Merge_118'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_fle =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_HtrPwrActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrHighVol_Dwn_read' incorporates:
     *  Merge: '<Root>/Merge_119'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HVC__m =
        Rte_IrvRead_HTIR_MedTEH_HtrHighVol_Dwn_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_U_HVC_Htr_HV_VltgAct_read' incorporates:
     *  Merge: '<Root>/Merge_120'
     */
    rtb_TmpSignalConversionAtVeHTIR_U_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_Htr_HV_VltgAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_HV_VltgActFA_read' incorporates:
     *  Merge: '<Root>/Merge_121'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HVC_ne =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_Htr_HV_VltgActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_Cnt_HVC_HtrUnlckCntr_read' incorporates:
     *  Merge: '<Root>/Merge_95'
     */
    rtb_TmpSignalConversionAtVeHTIR_Cnt_HVC_ =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr_UnlckCntr_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_b_HVC_HtrOvrht_UnlckReq_read' incorporates:
     *  Merge: '<Root>/Merge_108'
     */
    rtb_TmpSignalConversionAtVeHTIF_b_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_HVC_HtrUnlck_Req_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_e_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_P_HVC_HtrPwrLimit_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_P_HVC_HtrPwrLimit_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_P_HVC_Ht =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_P_HVC_HtrPwrLimit_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrSts_read' */

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Sts_read' incorporates:
     *  SignalConversion generated from: '<S85>/VeHTIF_Pct_HV_Htr2PwrLimit_Read'
     *  SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_Read'
     *  SignalConversion generated from: '<S85>/VeHTIR_I_HV_Htr2_HV_CrntAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_Pct_HV_Htr2PwrAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr2CoreTemp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr2_PCBTemp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_U_HV_Htr2_HV_VltgAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2Core_OvrTmpFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2DrvFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2IntCom_ErrFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2ProcesMemory_FltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2PwrActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2SelfProtect_ActvFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2TmpOvrheatgFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_CrntActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_VltgActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_LIN_ResErr_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_LV_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_PCBTempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_Htr2CoreTempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2CoreTemp_SensFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Core_OvrTmp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2DrvFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2IntCom_Err_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2ProcesMemory_Flt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2SelfProtect_Actv_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2TmpOvrheatg_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_HV_CrntOutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_HV_OutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_LV_OutofRng_read'
     */
#if Rte_SysCon_Variant_HTIR_2

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Sts_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__ie =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr2Sts_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_HV_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr2_HV_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2_HV_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_LV_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_k1r =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr2_LV_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_LV_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__gs =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2_LV_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2IntCom_Err_read' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__km =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr2IntCom_Err_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2IntCom_ErrFA_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__eb =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2IntCom_ErrFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__c3 =
        Rte_IrvRead_HTIR_MedTEH_Htr2Resis_PCB_OvrTemp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__lo =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2SelfProtect_Actv_read' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__lg =
        Rte_IrvRead_HTIR_MedTEH_Htr2SelfProtect_Actv_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2SelfProtect_ActvFA_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__kj =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2SelfProtect_ActvFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2TmpOvrheatg_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__f2 =
        Rte_IrvRead_HTIR_MedTEH_Htr2TmpOvrheatg_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2TmpOvrheatgFA_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_n =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2TmpOvrheatgFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_read' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__mf =
        Rte_IrvRead_HTIR_MedTEH_Htr2HVCrnt_SnsrFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__no =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2CoreTemp_SensFlt_read' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__md =
        Rte_IrvRead_HTIR_MedTEH_Htr2CoreTemp_SensFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_d =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr2_PCBTemp_read' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    rtb_TmpSignalConversionAtVeHTIR_T_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_Htr2_PCBTemp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_PCBTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_m =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2_PCBTempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_HV_CrntOutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_d =
        Rte_IrvRead_HTIR_MedTEH_Htr2_HV_CrntOutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_l =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2DrvFlt_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__mp =
        Rte_IrvRead_HTIR_MedTEH_Htr2DrvFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2DrvFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__hc =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2DrvFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2ProcesMemory_Flt_read' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__ft =
        Rte_IrvRead_HTIR_MedTEH_Htr2ProcesMemory_Flt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2ProcesMemory_FltFA_read' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__az =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2ProcesMemory_FltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_I_HV_Htr2_HV_CrntAct_read' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    rtb_TmpSignalConversionAtVeHTIR_I_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_Htr2HV_CrntAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_CrntActFA_read' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_l4j =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2_HV_CrntActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_LIN_ResErr_read' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__hn =
        Rte_IrvRead_HTIR_MedTEH_Htr2_LIN_ResErr_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_read' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_j =
        Rte_IrvRead_HTIR_MedTEH_Htr2PCBTmp_SnsrFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_a =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Core_OvrTmp_read' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_g =
        Rte_IrvRead_HTIR_MedTEH_Htr2Core_OvrTmp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2Core_OvrTmpFA_read' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_o =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2Core_OvrTmpFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_Pct_HV_Htr2PwrAct_read' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    rtb_TmpSignalConversionAtVeHTIR_Pct_HV_H =
        Rte_IrvRead_HTIR_MedTEH_Htr2PwrAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2PwrActFA_read' incorporates:
     *  Merge: '<Root>/Merge_31'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__c3 =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2PwrActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr2CoreTemp_read' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    rtb_TmpSignalConversionAtVeHTIR_T_HV_H_g =
        Rte_IrvRead_HTIR_MedTEH_Htr2CoreTemp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_Htr2CoreTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_Htr2Co =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_Htr2CoreTempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_U_HV_Htr2_HV_VltgAct_read' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    rtb_TmpSignalConversionAtVeHTIR_U_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_Htr2_HV_VltgAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr2_HV_VltgActFA_read' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__hw =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr2_HV_VltgActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_e_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_Pct_HV_Htr2PwrLimit_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_Pct_HV_Htr2PwrLimit_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_Pct_HV_H =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_Pct_HV_Htr2PwrLimit_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Sts_read' */

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr3Sts_read' incorporates:
     *  SignalConversion generated from: '<S85>/VeHTIF_P_HV_Htr3PwrLimit_Read'
     *  SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_Read'
     *  SignalConversion generated from: '<S85>/VeHTIR_P_HV_Htr3PwrAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr3PwrActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_read'
     */
#if Rte_SysCon_Variant_HTIR_3

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr3Sts_read' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_o =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr3Sts_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_P_HV_Htr3PwrAct_read' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    rtb_TmpSignalConversionAtVeHTIR_P_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_Htr3PwrAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr3PwrActFA_read' incorporates:
     *  Merge: '<Root>/Merge_43'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__m3 =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr3PwrActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_read' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_k =
        Rte_IrvRead_HTIR_MedTEH_Htr3Cntctr_StckClsd_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_read' incorporates:
     *  Merge: '<Root>/Merge_40'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__gl =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_e_HV_H_k =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_P_HV_Htr3PwrLimit_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_P_HV_Htr3PwrLimit_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_P_HV_Htr =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_P_HV_Htr3PwrLimit_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr3Sts_read' */

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4Sts_read' incorporates:
     *  SignalConversion generated from: '<S85>/VeHTIF_P_HV_Htr4PwrLimit_Read'
     *  SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_Read'
     *  SignalConversion generated from: '<S85>/VeHTIR_I_HV_Htr4_HV_CrntAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_P_HV_Htr4PwrAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_P_HV_Htr4PwrExpectd_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr4ClntIn_Temp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr4ClntOut_Temp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_U_HV_Htr4_HV_VltgAct_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntIn_TempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntOut_TempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4DrvFltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4IntCom_ErrFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ProcesMemory_FltFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4PwrActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4PwrExpectdFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4SelfProtect_ActvFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_CrntActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_VltgActFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_LIN_ResErr_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_LV_OutofRngFA_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntIn_TempSensFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntOut_TempSensFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntTemp_OutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4CoreTemp_SensFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4DrvFlt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4IntCom_Err_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ProcesMemory_Flt_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4SelfProtect_Actv_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_HV_CrntOutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_HV_OutofRng_read'
     *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_LV_OutofRng_read'
     */
#if Rte_SysCon_Variant_HTIR_4

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4Sts_read' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_h =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr4Sts_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_HV_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_65'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__ik =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr4_HV_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_74'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__kn =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4_HV_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_LV_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_79'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__o5 =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr4_LV_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_LV_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_80'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__pd =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4_LV_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntTemp_OutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_81'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_c =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr4ClntTemp_OutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_82'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_c =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4IntCom_Err_read' incorporates:
     *  Merge: '<Root>/Merge_83'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__ka =
        Rte_IrvRead_HTIR_MedTEH_HVC_Htr4IntCom_Err_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4IntCom_ErrFA_read' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__k0 =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4IntCom_ErrFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_read' incorporates:
     *  Merge: '<Root>/Merge_46'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__lw =
        Rte_IrvRead_HTIR_MedTEH_Htr4Resis_PCB_OvrTemp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_47'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__al =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4SelfProtect_Actv_read' incorporates:
     *  Merge: '<Root>/Merge_48'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_H_b =
        Rte_IrvRead_HTIR_MedTEH_Htr4SelfProtect_Actv_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4SelfProtect_ActvFA_read' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__np =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4SelfProtect_ActvFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntOut_TempSensFlt_read' incorporates:
     *  Merge: '<Root>/Merge_50'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__ly =
        Rte_IrvRead_HTIR_MedTEH_Htr4ClntOut_TempSensFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_51'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__hm =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntIn_TempSensFlt_read' incorporates:
     *  Merge: '<Root>/Merge_52'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__ox =
        Rte_IrvRead_HTIR_MedTEH_Htr4ClntIn_TempSensFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_53'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_g =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4CoreTemp_SensFlt_read' incorporates:
     *  Merge: '<Root>/Merge_54'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__py =
        Rte_IrvRead_HTIR_MedTEH_Htr4CoreTemp_SensFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_55'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__d3 =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_56'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__cy =
        Rte_IrvRead_HTIR_MedTEH_Htr4_DCDC_VltgOutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_57'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_i =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_HV_CrntOutofRng_read' incorporates:
     *  Merge: '<Root>/Merge_58'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV_ndf =
        Rte_IrvRead_HTIR_MedTEH_Htr4_HV_CrntOutofRng_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_read' incorporates:
     *  Merge: '<Root>/Merge_59'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__eh =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4DrvFlt_read' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__eu =
        Rte_IrvRead_HTIR_MedTEH_Htr4DrvFlt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4DrvFltFA_read' incorporates:
     *  Merge: '<Root>/Merge_61'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_j =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4DrvFltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ProcesMemory_Flt_read' incorporates:
     *  Merge: '<Root>/Merge_62'
     */
    rtb_TmpSignalConversionAtVeHTIR_e_HV__dy =
        Rte_IrvRead_HTIR_MedTEH_Htr4ProcesMemory_Flt_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ProcesMemory_FltFA_read' incorporates:
     *  Merge: '<Root>/Merge_63'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_h =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4ProcesMemory_FltFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_I_HV_Htr4_HV_CrntAct_read' incorporates:
     *  Merge: '<Root>/Merge_64'
     */
    rtb_TmpSignalConversionAtVeHTIR_I_HV_H_e =
        Rte_IrvRead_HTIR_MedTEH_Htr4HV_CrntAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_CrntActFA_read' incorporates:
     *  Merge: '<Root>/Merge_66'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__as =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4_HV_CrntActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_LIN_ResErr_read' incorporates:
     *  Merge: '<Root>/Merge_67'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__ld =
        Rte_IrvRead_HTIR_MedTEH_Htr4LIN_ResErr_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr4ClntOut_Temp_read' incorporates:
     *  Merge: '<Root>/Merge_68'
     */
    rtb_TmpSignalConversionAtVeHTIR_T_HV_H_l =
        Rte_IrvRead_HTIR_MedTEH_Htr4ClntOut_Temp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntOut_TempFA_read' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__kk =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4ClntOut_TempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_T_HV_Htr4ClntIn_Temp_read' incorporates:
     *  Merge: '<Root>/Merge_70'
     */
    rtb_TmpSignalConversionAtVeHTIR_T_HV_H_m =
        Rte_IrvRead_HTIR_MedTEH_Htr4ClntIn_Temp_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4ClntIn_TempFA_read' incorporates:
     *  Merge: '<Root>/Merge_71'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__ot =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4ClntIn_TempFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_P_HV_Htr4PwrExpectd_read' incorporates:
     *  Merge: '<Root>/Merge_72'
     */
    rtb_TmpSignalConversionAtVeHTIR_P_HV_H_m =
        Rte_IrvRead_HTIR_MedTEH_Htr4PwrExpectd_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4PwrExpectdFA_read' incorporates:
     *  Merge: '<Root>/Merge_73'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV_H_b =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4PwrExpectdFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_P_HV_Htr4PwrAct_read' incorporates:
     *  Merge: '<Root>/Merge_75'
     */
    rtb_TmpSignalConversionAtVeHTIR_P_HV_H_a =
        Rte_IrvRead_HTIR_MedTEH_Htr4PwrAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4PwrActFA_read' incorporates:
     *  Merge: '<Root>/Merge_76'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__dy =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4PwrActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_U_HV_Htr4_HV_VltgAct_read' incorporates:
     *  Merge: '<Root>/Merge_77'
     */
    rtb_TmpSignalConversionAtVeHTIR_U_HV_H_f =
        Rte_IrvRead_HTIR_MedTEH_Htr4_HV_VltgAct_INIT_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIR_b_HV_Htr4_HV_VltgActFA_read' incorporates:
     *  Merge: '<Root>/Merge_78'
     */
    rtb_TmpSignalConversionAtVeHTIR_b_HV__oe =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HV_Htr4_HV_VltgActFA_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_e_HV_H_i =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write_IRV();

    /* SignalConversion generated from: '<S85>/VeHTIF_P_HV_Htr4PwrLimit_Read' incorporates:
     *  Merge: '<Root>/VeHTIF_P_HV_Htr4PwrLimit_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeHTIF_P_HV_H_h =
        Rte_IrvRead_HTIR_MedTEH_VeHTIF_P_HV_Htr4PwrLimit_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4Sts_read' */

    /* S-Function (fcgen): '<S85>/FcnCallGen' incorporates:
     *  SubSystem: '<S85>/OverrideCals'
     */
    /* SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_InterlockStat_read' incorporates:
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_InterlockStatFA_read'
     */
#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Atomic SubSystem: '<S246>/Htr_Ovrd' */
    /* Outputs for Atomic SubSystem: '<S250>/Htr_ECH_Ovrd' */
    /* Switch: '<S421>/Switch2' incorporates:
     *  Constant: '<S457>/Calib'
     */
    if (KeHTIR_b_HV_ElecClntHtr_Sts_SD)
    {
        /* Switch: '<S421>/Switch2' incorporates:
         *  Constant: '<S474>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr_Sts = KeHTIR_e_HV_ElecClntHtr_Sts_D;
    }
    else
    {
        /* Switch: '<S421>/Switch2' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrSts_read'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr_Sts =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC_hw;
    }

    /* End of Switch: '<S421>/Switch2' */

    /* Switch: '<S421>/Switch1' incorporates:
     *  Constant: '<S450>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_HV_OutofRng_SD)
    {
        /* Switch: '<S421>/Switch1' incorporates:
         *  Constant: '<S471>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_HV_OutofRng = KeHTIR_e_HVC_Htr_HV_OutofRng_D;
    }
    else
    {
        /* Switch: '<S421>/Switch1' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_HV_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_HV_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC_d3;
    }

    /* End of Switch: '<S421>/Switch1' */

    /* Gain: '<S494>/Gain' */
    HTIR_ac_B.Gain = rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

    /* Switch: '<S421>/Switch3' incorporates:
     *  Constant: '<S455>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_LV_OutofRng_SD)
    {
        /* Switch: '<S421>/Switch3' incorporates:
         *  Constant: '<S473>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_LV_OutofRng = KeHTIR_e_HVC_Htr_LV_OutofRng_D;
    }
    else
    {
        /* Switch: '<S421>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_LV_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_LV_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC_hg;
    }

    /* End of Switch: '<S421>/Switch3' */

    /* Gain: '<S495>/Gain' */
    HTIR_ac_B.Gain_g = rtb_TmpSignalConversionAtVeHTIR_b_HVC_jq;

    /* Switch: '<S421>/Switch4' incorporates:
     *  Constant: '<S435>/Calib'
     */
    if (KeHTIR_b_HVC_HtrClntTemp_OutofRng_SD)
    {
        /* Switch: '<S421>/Switch4' incorporates:
         *  Constant: '<S461>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrClntTemp_OutofRng =
            KeHTIR_e_HVC_HtrClntTemp_OutofRng_D;
    }
    else
    {
        /* Switch: '<S421>/Switch4' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrClntTemp_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__a;
    }

    /* End of Switch: '<S421>/Switch4' */

    /* Gain: '<S477>/Gain' */
    HTIR_ac_B.Gain_o = rtb_TmpSignalConversionAtVeHTIR_b_HVC__h;

    /* Switch: '<S421>/Switch5' incorporates:
     *  Constant: '<S439>/Calib'
     */
    if (KeHTIR_b_HVC_HtrIntCom_Err_SD)
    {
        /* Switch: '<S421>/Switch5' incorporates:
         *  Constant: '<S465>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrIntCom_Err = KeHTIR_e_HVC_HtrIntCom_Err_D;
    }
    else
    {
        /* Switch: '<S421>/Switch5' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrIntCom_Err_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrIntCom_Err =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__i;
    }

    /* End of Switch: '<S421>/Switch5' */

    /* Gain: '<S478>/Gain' */
    HTIR_ac_B.Gain_d = rtb_TmpSignalConversionAtVeHTIR_b_HVC_ab;

    /* Switch: '<S421>/Switch6' incorporates:
     *  Constant: '<S445>/Calib'
     */
    if (KeHTIR_b_HVC_HtrResis_PCB_OvrTemp_SD)
    {
        /* Switch: '<S421>/Switch6' incorporates:
         *  Constant: '<S467>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrResis_PCB_OvrTemp =
            KeHTIR_e_HVC_HtrResis_PCB_OvrTemp_D;
    }
    else
    {
        /* Switch: '<S421>/Switch6' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrResis_PCB_OvrTemp =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__h;
    }

    /* End of Switch: '<S421>/Switch6' */

    /* Gain: '<S480>/Gain' */
    HTIR_ac_B.Gain_m = rtb_TmpSignalConversionAtVeHTIR_b_HVC_me;

    /* Switch: '<S421>/Switch7' incorporates:
     *  Constant: '<S446>/Calib'
     */
    if (KeHTIR_b_HVC_HtrSelfProtect_Actv_SD)
    {
        /* Switch: '<S421>/Switch7' incorporates:
         *  Constant: '<S468>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrSelfProtect_Actv =
            KeHTIR_e_HVC_HtrSelfProtect_Actv_D;
    }
    else
    {
        /* Switch: '<S421>/Switch7' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrSelfProtect_Actv_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrSelfProtect_Actv =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC_io;
    }

    /* End of Switch: '<S421>/Switch7' */

    /* Gain: '<S479>/Gain' */
    HTIR_ac_B.Gain_a = rtb_TmpSignalConversionAtVeHTIR_b_HVC_hn;

    /* Switch: '<S421>/Switch8' incorporates:
     *  Constant: '<S433>/Calib'
     */
    if (KeHTIR_b_HVC_HtrClntOut_TempSensFlt_SD)
    {
        /* Switch: '<S421>/Switch8' incorporates:
         *  Constant: '<S460>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrClntOut_TempSensFlt =
            KeHTIR_e_HVC_HtrClntOut_TempSensFlt_D;
    }
    else
    {
        /* Switch: '<S421>/Switch8' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrClntOut_TempSensFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC_kt;
    }

    /* End of Switch: '<S421>/Switch8' */

    /* Gain: '<S481>/Gain' */
    HTIR_ac_B.Gain_m4 = rtb_TmpSignalConversionAtVeHTIR_b_HV_dkg;

    /* Switch: '<S421>/Switch9' incorporates:
     *  Constant: '<S431>/Calib'
     */
    if (KeHTIR_b_HVC_HtrClntIn_TempSensFlt_SD)
    {
        /* Switch: '<S421>/Switch9' incorporates:
         *  Constant: '<S459>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrClntIn_TempSensFlt =
            KeHTIR_e_HVC_HtrClntIn_TempSensFlt_D;
    }
    else
    {
        /* Switch: '<S421>/Switch9' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrClntIn_TempSensFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC_gz;
    }

    /* End of Switch: '<S421>/Switch9' */

    /* Gain: '<S482>/Gain' */
    HTIR_ac_B.Gain_i = rtb_TmpSignalConversionAtVeHTIR_b_HVC__c;

    /* Switch: '<S421>/Switch10' incorporates:
     *  Constant: '<S436>/Calib'
     */
    if (KeHTIR_b_HVC_HtrCoreTemp_SensFlt_SD)
    {
        /* Switch: '<S421>/Switch10' incorporates:
         *  Constant: '<S462>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrCoreTemp_SensFlt =
            KeHTIR_e_HVC_HtrCoreTemp_SensFlt_D;
    }
    else
    {
        /* Switch: '<S421>/Switch10' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrCoreTemp_SensFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__k;
    }

    /* End of Switch: '<S421>/Switch10' */

    /* Gain: '<S483>/Gain' */
    HTIR_ac_B.Gain_f = rtb_TmpSignalConversionAtVeHTIR_b_HVC_g1;

    /* Switch: '<S421>/Switch11' incorporates:
     *  Constant: '<S447>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_SD)
    {
        /* Switch: '<S421>/Switch11' incorporates:
         *  Constant: '<S469>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng =
            KeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_D;
    }
    else
    {
        /* Switch: '<S421>/Switch11' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__j;
    }

    /* End of Switch: '<S421>/Switch11' */

    /* Gain: '<S484>/Gain' */
    HTIR_ac_B.Gain_oj = rtb_TmpSignalConversionAtVeHTIR_b_HVC__m;

    /* Switch: '<S421>/Switch12' incorporates:
     *  Constant: '<S449>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_HV_CrntOutofRng_SD)
    {
        /* Switch: '<S421>/Switch12' incorporates:
         *  Constant: '<S470>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_HV_CrntOutofRng =
            KeHTIR_e_HVC_Htr_HV_CrntOutofRng_D;
    }
    else
    {
        /* Switch: '<S421>/Switch12' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_HV_CrntOutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC_bx;
    }

    /* End of Switch: '<S421>/Switch12' */

    /* Gain: '<S485>/Gain' */
    HTIR_ac_B.Gain_mg = rtb_TmpSignalConversionAtVeHTIR_b_HVC__f;

    /* Switch: '<S421>/Switch13' incorporates:
     *  Constant: '<S437>/Calib'
     */
    if (KeHTIR_b_HVC_HtrDrvFlt_SD)
    {
        /* Switch: '<S421>/Switch13' incorporates:
         *  Constant: '<S463>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrDrvFlt = KeHTIR_e_HVC_HtrDrvFlt_D;
    }
    else
    {
        /* Switch: '<S421>/Switch13' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrDrvFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrDrvFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__c;
    }

    /* End of Switch: '<S421>/Switch13' */

    /* Gain: '<S486>/Gain' */
    HTIR_ac_B.Gain_n = rtb_TmpSignalConversionAtVeHTIR_b_HVC__a;

    /* Switch: '<S421>/Switch14' incorporates:
     *  Constant: '<S442>/Calib'
     */
    if (KeHTIR_b_HVC_HtrProcesMemory_Flt_SD)
    {
        /* Switch: '<S421>/Switch14' incorporates:
         *  Constant: '<S466>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrProcesMemory_Flt =
            KeHTIR_e_HVC_HtrProcesMemory_Flt_D;
    }
    else
    {
        /* Switch: '<S421>/Switch14' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrProcesMemory_Flt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrProcesMemory_Flt =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__p;
    }

    /* End of Switch: '<S421>/Switch14' */

    /* Gain: '<S487>/Gain' */
    HTIR_ac_B.Gain_j = rtb_TmpSignalConversionAtVeHTIR_b_HVC__j;

    /* Switch: '<S421>/Switch15' incorporates:
     *  Constant: '<S448>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_HV_CrntAct_SD)
    {
        /* Switch: '<S421>/Switch15' incorporates:
         *  Constant: '<S423>/Calib'
         */
        HTIR_ac_B.VeHTIR_I_HVC_Htr_HV_CrntAct = KeHTIR_I_HVC_Htr_HV_CrntAct_D;
    }
    else
    {
        /* Switch: '<S421>/Switch15' */
        HTIR_ac_B.VeHTIR_I_HVC_Htr_HV_CrntAct =
            rtb_TmpSignalConversionAtVeHTIR_I_HVC_Ht;
    }

    /* End of Switch: '<S421>/Switch15' */

    /* Gain: '<S488>/Gain' */
    HTIR_ac_B.Gain_l = rtb_TmpSignalConversionAtVeHTIR_b_HVC_a4;

    /* Switch: '<S421>/Switch16' incorporates:
     *  Constant: '<S454>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_LIN_ResErr_SD)
    {
        /* Switch: '<S421>/Switch16' incorporates:
         *  Constant: '<S453>/Calib'
         */
        HTIR_ac_B.VeHTIR_b_HVC_Htr_LIN_ResErr = KeHTIR_b_HVC_Htr_LIN_ResErr_D;
    }
    else
    {
        /* Switch: '<S421>/Switch16' */
        HTIR_ac_B.VeHTIR_b_HVC_Htr_LIN_ResErr =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC__i;
    }

    /* End of Switch: '<S421>/Switch16' */

    /* Switch: '<S421>/Switch17' incorporates:
     *  Constant: '<S434>/Calib'
     */
    if (KeHTIR_b_HVC_HtrClntOut_Temp_SD)
    {
        /* Switch: '<S421>/Switch17' incorporates:
         *  Constant: '<S425>/Calib'
         */
        HTIR_ac_B.VeHTIR_T_HVC_HtrClntOut_Temp = KeHTIR_T_HVC_HtrClntOut_Temp_D;
    }
    else
    {
        /* Switch: '<S421>/Switch17' */
        HTIR_ac_B.VeHTIR_T_HVC_HtrClntOut_Temp =
            rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;
    }

    /* End of Switch: '<S421>/Switch17' */

    /* Gain: '<S489>/Gain' */
    HTIR_ac_B.Gain_b = rtb_TmpSignalConversionAtVeHTIR_b_HVC_at;

    /* Switch: '<S421>/Switch18' incorporates:
     *  Constant: '<S432>/Calib'
     */
    if (KeHTIR_b_HVC_HtrClntIn_Temp_SD)
    {
        /* Switch: '<S421>/Switch18' incorporates:
         *  Constant: '<S424>/Calib'
         */
        HTIR_ac_B.VeHTIR_T_HVC_HtrClntIn_Temp = KeHTIR_T_HVC_HtrClntIn_Temp_D;
    }
    else
    {
        /* Switch: '<S421>/Switch18' */
        HTIR_ac_B.VeHTIR_T_HVC_HtrClntIn_Temp =
            rtb_TmpSignalConversionAtVeHTIR_T_HVC__l;
    }

    /* End of Switch: '<S421>/Switch18' */

    /* Gain: '<S490>/Gain' */
    HTIR_ac_B.Gain_e = rtb_TmpSignalConversionAtVeHTIR_b_HVC__b;

    /* Switch: '<S421>/Switch19' incorporates:
     *  Constant: '<S444>/Calib'
     */
    if (KeHTIR_b_HVC_HtrPwrExpectd_SD)
    {
        /* Switch: '<S421>/Switch19' incorporates:
         *  Constant: '<S429>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_HVC_HtrPwrExpectd = KeHTIR_W_HVC_HtrPwrExpectd_D;
    }
    else
    {
        /* Switch: '<S421>/Switch19' */
        HTIR_ac_B.VeHTIR_P_HVC_HtrPwrExpectd =
            rtb_TmpSignalConversionAtVeHTIR_P_HVC_Ht;
    }

    /* End of Switch: '<S421>/Switch19' */

    /* Gain: '<S491>/Gain' */
    HTIR_ac_B.Gain_jc = rtb_TmpSignalConversionAtVeHTIR_b_HVC__l;

    /* Switch: '<S421>/Switch20' incorporates:
     *  Constant: '<S443>/Calib'
     */
    if (KeHTIR_b_HVC_HtrPwrAct_SD)
    {
        /* Switch: '<S421>/Switch20' incorporates:
         *  Constant: '<S428>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_HVC_HtrPwrAct = KeHTIR_W_HVC_HtrPwrAct_D;
    }
    else
    {
        /* Switch: '<S421>/Switch20' */
        HTIR_ac_B.VeHTIR_P_HVC_HtrPwrAct =
            rtb_TmpSignalConversionAtVeHTIR_P_HVC__b;
    }

    /* End of Switch: '<S421>/Switch20' */

    /* Gain: '<S492>/Gain' */
    HTIR_ac_B.Gain_gu = rtb_TmpSignalConversionAtVeHTIR_b_HV_fle;

    /* Switch: '<S421>/Switch21' incorporates:
     *  Constant: '<S438>/Calib'
     */
    if (KeHTIR_b_HVC_HtrHighVol_Dwn_SD)
    {
        /* Switch: '<S421>/Switch21' incorporates:
         *  Constant: '<S464>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrHighVol_Dwn = KeHTIR_e_HVC_HtrHighVol_Dwn_D;
    }
    else
    {
        /* Switch: '<S421>/Switch21' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_HtrHighVol_Dwn_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_HtrHighVol_Dwn =
            rtb_TmpSignalConversionAtVeHTIR_e_HVC__m;
    }

    /* End of Switch: '<S421>/Switch21' */

    /* Switch: '<S421>/Switch22' incorporates:
     *  Constant: '<S451>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_HV_VltgAct_SD)
    {
        /* Switch: '<S421>/Switch22' incorporates:
         *  Constant: '<S426>/Calib'
         */
        HTIR_ac_B.VeHTIR_U_HVC_Htr_HV_VltgAct = KeHTIR_U_HVC_Htr_HV_VltgAct_D;
    }
    else
    {
        /* Switch: '<S421>/Switch22' */
        HTIR_ac_B.VeHTIR_U_HVC_Htr_HV_VltgAct =
            rtb_TmpSignalConversionAtVeHTIR_U_HVC_Ht;
    }

    /* End of Switch: '<S421>/Switch22' */

    /* Gain: '<S493>/Gain' */
    HTIR_ac_B.Gain_gs = rtb_TmpSignalConversionAtVeHTIR_b_HVC_ne;

    /* Switch: '<S421>/Switch25' incorporates:
     *  Constant: '<S456>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_UnlckCntr_SD)
    {
        /* Switch: '<S421>/Switch25' incorporates:
         *  Constant: '<S422>/Calib'
         */
        HTIR_ac_B.VeHTIR_Cnt_HVC_HtrUnlckCntr = KeHTIR_Cnt_HVC_Htr_UnlckCntr_D;
    }
    else
    {
        /* Switch: '<S421>/Switch25' */
        HTIR_ac_B.VeHTIR_Cnt_HVC_HtrUnlckCntr =
            rtb_TmpSignalConversionAtVeHTIR_Cnt_HVC_;
    }

    /* End of Switch: '<S421>/Switch25' */

    /* Switch: '<S421>/Switch26' incorporates:
     *  Constant: '<S441>/Calib'
     */
    if (KeHTIR_b_HVC_HtrOvrht_UnlckReq_SD)
    {
        /* Switch: '<S421>/Switch26' incorporates:
         *  Constant: '<S440>/Calib'
         */
        HTIR_ac_B.VeHTIR_b_HVC_HtrOvrht_UnlckReq =
            KeHTIR_b_HVC_HtrOvrht_UnlckReq_D;
    }
    else
    {
        /* Switch: '<S421>/Switch26' */
        HTIR_ac_B.VeHTIR_b_HVC_HtrOvrht_UnlckReq =
            rtb_TmpSignalConversionAtVeHTIF_b_HVC_Ht;
    }

    /* End of Switch: '<S421>/Switch26' */

    /* Switch: '<S421>/Switch' incorporates:
     *  Constant: '<S458>/Calib'
     */
    if (KeHTIR_b_HtrPwrLimit_IO_Cnt_SD)
    {
        /* Switch: '<S421>/Switch' incorporates:
         *  Constant: '<S475>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HtrPwrLimit_IO_Cnt = KeHTIR_e_HtrPwrLimit_IO_Cnt_D;
    }
    else
    {
        /* Switch: '<S421>/Switch' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_Read'
         */
        HTIR_ac_B.VeHTIR_e_HtrPwrLimit_IO_Cnt =
            rtb_TmpSignalConversionAtVeHTIF_e_HVC_Ht;
    }

    /* End of Switch: '<S421>/Switch' */

    /* Switch: '<S421>/Switch27' incorporates:
     *  Constant: '<S430>/Calib'
     */
    if (KeHTIR_b_DVC_HtrPwrLimit_SD)
    {
        /* Switch: '<S421>/Switch27' incorporates:
         *  Constant: '<S427>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_DVC_HtrPwrLimit = KeHTIR_W_DVC_HtrPwrLimit_D;
    }
    else
    {
        /* Switch: '<S421>/Switch27' */
        HTIR_ac_B.VeHTIR_P_DVC_HtrPwrLimit =
            rtb_TmpSignalConversionAtVeHTIF_P_HVC_Ht;
    }

    /* End of Switch: '<S421>/Switch27' */

    /* Switch: '<S421>/Switch23' incorporates:
     *  Constant: '<S452>/Calib'
     */
    if (KeHTIR_b_HVC_Htr_InterlockStat_SD)
    {
        /* Switch: '<S421>/Switch23' incorporates:
         *  Constant: '<S472>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_InterlockStat =
            KeHTIR_e_HVC_Htr_InterlockStat_D;
    }
    else
    {
        /* Switch: '<S421>/Switch23' incorporates:
         *  Merge: '<Root>/Merge_127'
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_InterlockStat_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr_InterlockStat =
            Rte_IrvRead_HTIR_MedTEH_Htr_InterlockStat_INIT_write_IRV();
    }

    /* End of Switch: '<S421>/Switch23' */

    /* Gain: '<S476>/Gain' incorporates:
     *  Merge: '<Root>/Merge_128'
     *  SignalConversion generated from: '<S85>/VeHTIR_b_HVC_Htr_InterlockStatFA_read'
     */
    HTIR_ac_B.Gain_ij =
        Rte_IrvRead_HTIR_MedTEH_VeHTIR_b_HVC_Htr_InterlockStatFA_write_IRV();

    /* End of Outputs for SubSystem: '<S250>/Htr_ECH_Ovrd' */
    /* End of Outputs for SubSystem: '<S246>/Htr_Ovrd' */
#endif

    /* End of SignalConversion generated from: '<S85>/VeHTIR_e_HVC_Htr_InterlockStat_read' */
#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Atomic SubSystem: '<S246>/Htr2_EAH_Ovrd' */
    /* Outputs for Atomic SubSystem: '<S247>/Htr2_EAH_Ovrd' */
    /* Switch: '<S251>/Switch2' incorporates:
     *  Constant: '<S279>/Calib'
     */
    if (KeHTIR_b_HV_ElecClntHtr2_Sts_SD)
    {
        /* Switch: '<S251>/Switch2' incorporates:
         *  Constant: '<S296>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr2_Sts = KeHTIR_e_HV_ElecClntHtr2_Sts_D;
    }
    else
    {
        /* Switch: '<S251>/Switch2' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Sts_read'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr2_Sts =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__ie;
    }

    /* End of Switch: '<S251>/Switch2' */

    /* Switch: '<S251>/Switch1' incorporates:
     *  Constant: '<S274>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2_HV_OutofRng_SD)
    {
        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S294>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2_HV_OutofRng =
            KeHTIR_e_HVC_Htr2_HV_OutofRng_D;
    }
    else
    {
        /* Switch: '<S251>/Switch1' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_HV_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2_HV_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr;
    }

    /* End of Switch: '<S251>/Switch1' */

    /* Gain: '<S314>/Gain' */
    HTIR_ac_B.Gain_h = rtb_TmpSignalConversionAtVeHTIR_b_HV_Htr;

    /* Switch: '<S251>/Switch3' incorporates:
     *  Constant: '<S278>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2_LV_OutofRng_SD)
    {
        /* Switch: '<S251>/Switch3' incorporates:
         *  Constant: '<S295>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2_LV_OutofRng =
            KeHTIR_e_HVC_Htr2_LV_OutofRng_D;
    }
    else
    {
        /* Switch: '<S251>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_LV_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2_LV_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_k1r;
    }

    /* End of Switch: '<S251>/Switch3' */

    /* Gain: '<S315>/Gain' */
    HTIR_ac_B.Gain_hg = rtb_TmpSignalConversionAtVeHTIR_b_HV__gs;

    /* Switch: '<S251>/Switch5' incorporates:
     *  Constant: '<S265>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2IntCom_Err_SD)
    {
        /* Switch: '<S251>/Switch5' incorporates:
         *  Constant: '<S287>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2IntCom_Err = KeHTIR_e_HVC_Htr2IntCom_Err_D;
    }
    else
    {
        /* Switch: '<S251>/Switch5' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2IntCom_Err_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2IntCom_Err =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__km;
    }

    /* End of Switch: '<S251>/Switch5' */

    /* Gain: '<S298>/Gain' */
    HTIR_ac_B.Gain_e4 = rtb_TmpSignalConversionAtVeHTIR_b_HV__eb;

    /* Switch: '<S251>/Switch6' incorporates:
     *  Constant: '<S269>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_SD)
    {
        /* Switch: '<S251>/Switch6' incorporates:
         *  Constant: '<S290>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp =
            KeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_D;
    }
    else
    {
        /* Switch: '<S251>/Switch6' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__c3;
    }

    /* End of Switch: '<S251>/Switch6' */

    /* Gain: '<S300>/Gain' */
    HTIR_ac_B.Gain_a0 = rtb_TmpSignalConversionAtVeHTIR_b_HV__lo;

    /* Switch: '<S251>/Switch7' incorporates:
     *  Constant: '<S270>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2SelfProtect_Actv_SD)
    {
        /* Switch: '<S251>/Switch7' incorporates:
         *  Constant: '<S291>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2SelfProtect_Actv =
            KeHTIR_e_HVC_Htr2SelfProtect_Actv_D;
    }
    else
    {
        /* Switch: '<S251>/Switch7' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2SelfProtect_Actv_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2SelfProtect_Actv =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__lg;
    }

    /* End of Switch: '<S251>/Switch7' */

    /* Gain: '<S299>/Gain' */
    HTIR_ac_B.Gain_jcz = rtb_TmpSignalConversionAtVeHTIR_b_HV__kj;

    /* Switch: '<S251>/Switch8' incorporates:
     *  Constant: '<S271>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2TmpOvrheatg_SD)
    {
        /* Switch: '<S251>/Switch8' incorporates:
         *  Constant: '<S292>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2TmpOvrheatg = KeHTIR_e_HVC_Htr2TmpOvrheatg_D;
    }
    else
    {
        /* Switch: '<S251>/Switch8' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2TmpOvrheatg_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2TmpOvrheatg =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__f2;
    }

    /* End of Switch: '<S251>/Switch8' */

    /* Gain: '<S301>/Gain' */
    HTIR_ac_B.Gain_nb = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_n;

    /* Switch: '<S251>/Switch9' incorporates:
     *  Constant: '<S264>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_SD)
    {
        /* Switch: '<S251>/Switch9' incorporates:
         *  Constant: '<S286>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt =
            KeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_D;
    }
    else
    {
        /* Switch: '<S251>/Switch9' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__mf;
    }

    /* End of Switch: '<S251>/Switch9' */

    /* Gain: '<S302>/Gain' */
    HTIR_ac_B.Gain_at = rtb_TmpSignalConversionAtVeHTIR_b_HV__no;

    /* Switch: '<S251>/Switch10' incorporates:
     *  Constant: '<S261>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2CoreTemp_SensFlt_SD)
    {
        /* Switch: '<S251>/Switch10' incorporates:
         *  Constant: '<S283>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2CoreTemp_SensFlt =
            KeHTIR_e_HVC_Htr2CoreTemp_SensFlt_D;
    }
    else
    {
        /* Switch: '<S251>/Switch10' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2CoreTemp_SensFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2CoreTemp_SensFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__md;
    }

    /* End of Switch: '<S251>/Switch10' */

    /* Gain: '<S303>/Gain' */
    HTIR_ac_B.Gain_b1 = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_d;

    /* Switch: '<S251>/Switch11' incorporates:
     *  Constant: '<S282>/Calib'
     */
    if (KeHTIR_b_Htr2_PCBTemp_SD)
    {
        /* Switch: '<S251>/Switch11' incorporates:
         *  Constant: '<S257>/Calib'
         */
        HTIR_ac_B.VeHTIR_T_Htr2_PCBTemp = KeHTIR_T_Htr2_PCBTemp_D;
    }
    else
    {
        /* Switch: '<S251>/Switch11' */
        HTIR_ac_B.VeHTIR_T_Htr2_PCBTemp =
            rtb_TmpSignalConversionAtVeHTIR_T_HV_Htr;
    }

    /* End of Switch: '<S251>/Switch11' */

    /* Gain: '<S304>/Gain' */
    HTIR_ac_B.Gain_ai = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_m;

    /* Switch: '<S251>/Switch12' incorporates:
     *  Constant: '<S273>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2_HV_CrntOutofRng_SD)
    {
        /* Switch: '<S251>/Switch12' incorporates:
         *  Constant: '<S293>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2_HV_CrntOutofRng =
            KeHTIR_e_HVC_Htr2_HV_CrntOutofRng_D;
    }
    else
    {
        /* Switch: '<S251>/Switch12' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2_HV_CrntOutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2_HV_CrntOutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_d;
    }

    /* End of Switch: '<S251>/Switch12' */

    /* Gain: '<S305>/Gain' */
    HTIR_ac_B.Gain_it = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_l;

    /* Switch: '<S251>/Switch13' incorporates:
     *  Constant: '<S263>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2DrvFlt_SD)
    {
        /* Switch: '<S251>/Switch13' incorporates:
         *  Constant: '<S285>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2DrvFlt = KeHTIR_e_HVC_Htr2DrvFlt_D;
    }
    else
    {
        /* Switch: '<S251>/Switch13' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2DrvFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2DrvFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__mp;
    }

    /* End of Switch: '<S251>/Switch13' */

    /* Gain: '<S306>/Gain' */
    HTIR_ac_B.Gain_gr = rtb_TmpSignalConversionAtVeHTIR_b_HV__hc;

    /* Switch: '<S251>/Switch14' incorporates:
     *  Constant: '<S267>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2ProcesMemory_Flt_SD)
    {
        /* Switch: '<S251>/Switch14' incorporates:
         *  Constant: '<S289>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2ProcesMemory_Flt =
            KeHTIR_e_HVC_Htr2ProcesMemory_Flt_D;
    }
    else
    {
        /* Switch: '<S251>/Switch14' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2ProcesMemory_Flt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2ProcesMemory_Flt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__ft;
    }

    /* End of Switch: '<S251>/Switch14' */

    /* Gain: '<S307>/Gain' */
    HTIR_ac_B.Gain_n4 = rtb_TmpSignalConversionAtVeHTIR_b_HV__az;

    /* Switch: '<S251>/Switch15' incorporates:
     *  Constant: '<S272>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2_HV_CrntAct_SD)
    {
        /* Switch: '<S251>/Switch15' incorporates:
         *  Constant: '<S252>/Calib'
         */
        HTIR_ac_B.VeHTIR_I_HVC_Htr2_HV_CrntAct = KeHTIR_I_HVC_Htr2_HV_CrntAct_D;
    }
    else
    {
        /* Switch: '<S251>/Switch15' */
        HTIR_ac_B.VeHTIR_I_HVC_Htr2_HV_CrntAct =
            rtb_TmpSignalConversionAtVeHTIR_I_HV_Htr;
    }

    /* End of Switch: '<S251>/Switch15' */

    /* Gain: '<S308>/Gain' */
    HTIR_ac_B.Gain_br = rtb_TmpSignalConversionAtVeHTIR_b_HV_l4j;

    /* Switch: '<S251>/Switch16' incorporates:
     *  Constant: '<S277>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2_LIN_ResErr_SD)
    {
        /* Switch: '<S251>/Switch16' incorporates:
         *  Constant: '<S276>/Calib'
         */
        HTIR_ac_B.VeHTIR_b_HVC_Htr2_LIN_ResErr = KeHTIR_b_HVC_Htr2_LIN_ResErr_D;
    }
    else
    {
        /* Switch: '<S251>/Switch16' */
        HTIR_ac_B.VeHTIR_b_HVC_Htr2_LIN_ResErr =
            rtb_TmpSignalConversionAtVeHTIR_b_HV__hn;
    }

    /* End of Switch: '<S251>/Switch16' */

    /* Switch: '<S251>/Switch17' incorporates:
     *  Constant: '<S266>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_SD)
    {
        /* Switch: '<S251>/Switch17' incorporates:
         *  Constant: '<S288>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt =
            KeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_D;
    }
    else
    {
        /* Switch: '<S251>/Switch17' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_j;
    }

    /* End of Switch: '<S251>/Switch17' */

    /* Gain: '<S309>/Gain' */
    HTIR_ac_B.Gain_ax = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_a;

    /* Switch: '<S251>/Switch18' incorporates:
     *  Constant: '<S262>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2Core_OvrTmp_SD)
    {
        /* Switch: '<S251>/Switch18' incorporates:
         *  Constant: '<S284>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2Core_OvrTmp = KeHTIR_e_HVC_Htr2Core_OvrTmp_D;
    }
    else
    {
        /* Switch: '<S251>/Switch18' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr2Core_OvrTmp_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr2Core_OvrTmp =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_g;
    }

    /* End of Switch: '<S251>/Switch18' */

    /* Gain: '<S310>/Gain' */
    HTIR_ac_B.Gain_fk = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_o;

    /* Switch: '<S251>/Switch25' incorporates:
     *  Constant: '<S260>/Calib'
     */
    if (KeHTIR_b_DVC_Htr2PwrLimit_SD)
    {
        /* Switch: '<S251>/Switch25' incorporates:
         *  Constant: '<S253>/Calib'
         */
        VeHTIR_Pct_DVC_Htr2PwrLimit = KeHTIR_Pct_DVC_Htr2PwrLimit_D;
    }
    else
    {
        /* Switch: '<S251>/Switch25' */
        VeHTIR_Pct_DVC_Htr2PwrLimit = rtb_TmpSignalConversionAtVeHTIF_Pct_HV_H;
    }

    /* End of Switch: '<S251>/Switch25' */

    /* Switch: '<S251>/Switch20' incorporates:
     *  Constant: '<S268>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2PwrAct_SD)
    {
        /* Switch: '<S251>/Switch20' incorporates:
         *  Constant: '<S255>/Calib'
         */
        VeHTIR_Pct_HVC_Htr2PwrAct = KeHTIR_Pct_HVC_Htr2PwrAct_D;
    }
    else
    {
        /* Switch: '<S251>/Switch20' */
        VeHTIR_Pct_HVC_Htr2PwrAct = rtb_TmpSignalConversionAtVeHTIR_Pct_HV_H;
    }

    /* End of Switch: '<S251>/Switch20' */

    /* Product: '<S251>/Product1' incorporates:
     *  Constant: '<S254>/Calib'
     *  Constant: '<S259>/Calib'
     *  Product: '<S251>/Divide2'
     */
    HTIR_ac_B.VeHTIR_P_HVC_Htr2PwrAct = (VeHTIR_Pct_HVC_Htr2PwrAct /
        KeHTIR_Pct_HVC_Htr2PctFctr) * KeHTIR_W_HVC_Htr2PwrMax;

    /* Product: '<S251>/Product2' incorporates:
     *  Constant: '<S254>/Calib'
     *  Constant: '<S259>/Calib'
     *  Product: '<S251>/Divide'
     */
    HTIR_ac_B.VeHTIR_P_DVC_Htr2PwrLimit = (VeHTIR_Pct_DVC_Htr2PwrLimit /
        KeHTIR_Pct_HVC_Htr2PctFctr) * KeHTIR_W_HVC_Htr2PwrMax;

    /* Gain: '<S311>/Gain' */
    HTIR_ac_B.Gain_hl = rtb_TmpSignalConversionAtVeHTIR_b_HV__c3;

    /* Switch: '<S251>/Switch21' incorporates:
     *  Constant: '<S280>/Calib'
     */
    if (KeHTIR_b_Htr2CoreTemp_SD)
    {
        /* Switch: '<S251>/Switch21' incorporates:
         *  Constant: '<S256>/Calib'
         */
        HTIR_ac_B.VeHTIR_T_Htr2CoreTemp = KeHTIR_T_Htr2CoreTemp_D;
    }
    else
    {
        /* Switch: '<S251>/Switch21' */
        HTIR_ac_B.VeHTIR_T_Htr2CoreTemp =
            rtb_TmpSignalConversionAtVeHTIR_T_HV_H_g;
    }

    /* End of Switch: '<S251>/Switch21' */

    /* Gain: '<S312>/Gain' */
    HTIR_ac_B.Gain_gsn = rtb_TmpSignalConversionAtVeHTIR_b_Htr2Co;

    /* Switch: '<S251>/Switch22' incorporates:
     *  Constant: '<S275>/Calib'
     */
    if (KeHTIR_b_HVC_Htr2_HV_VltgAct_SD)
    {
        /* Switch: '<S251>/Switch22' incorporates:
         *  Constant: '<S258>/Calib'
         */
        HTIR_ac_B.VeHTIR_U_HVC_Htr2_HV_VltgAct = KeHTIR_U_HVC_Htr2_HV_VltgAct_D;
    }
    else
    {
        /* Switch: '<S251>/Switch22' */
        HTIR_ac_B.VeHTIR_U_HVC_Htr2_HV_VltgAct =
            rtb_TmpSignalConversionAtVeHTIR_U_HV_Htr;
    }

    /* End of Switch: '<S251>/Switch22' */

    /* Gain: '<S313>/Gain' */
    HTIR_ac_B.Gain_cx = rtb_TmpSignalConversionAtVeHTIR_b_HV__hw;

    /* Switch: '<S251>/Switch' incorporates:
     *  Constant: '<S281>/Calib'
     */
    if (KeHTIR_b_Htr2PwrLimit_IO_Cnt_SD)
    {
        /* Switch: '<S251>/Switch' incorporates:
         *  Constant: '<S297>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_Htr2PwrLimit_IO_Cnt = KeHTIR_e_Htr2PwrLimit_IO_Cnt_D;
    }
    else
    {
        /* Switch: '<S251>/Switch' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_Read'
         */
        HTIR_ac_B.VeHTIR_e_Htr2PwrLimit_IO_Cnt =
            rtb_TmpSignalConversionAtVeHTIF_e_HV_Htr;
    }

    /* End of Switch: '<S251>/Switch' */
    /* End of Outputs for SubSystem: '<S247>/Htr2_EAH_Ovrd' */
    /* End of Outputs for SubSystem: '<S246>/Htr2_EAH_Ovrd' */
#endif

#if Rte_SysCon_Variant_HTIR_3

    /* Outputs for Atomic SubSystem: '<S246>/Htr3_HtrElmnt_Ovrd' */
    /* Outputs for Atomic SubSystem: '<S248>/Htr3_BHE_Ovrd' */
    /* Switch: '<S318>/Switch2' incorporates:
     *  Constant: '<S325>/Calib'
     */
    if (KeHTIR_b_HV_ElecClntHtr3_Sts_SD)
    {
        /* Switch: '<S318>/Switch2' incorporates:
         *  Constant: '<S326>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr3_Sts = KeHTIR_e_HV_ElecClntHtr3_Sts_D;
    }
    else
    {
        /* Switch: '<S318>/Switch2' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr3Sts_read'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr3_Sts =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_o;
    }

    /* End of Switch: '<S318>/Switch2' */

    /* Switch: '<S320>/Switch3' incorporates:
     *  Constant: '<S331>/Calib'
     */
    if (KeHTIR_b_HVC_Htr3PwrAct_SD)
    {
        /* Switch: '<S320>/Switch3' incorporates:
         *  Constant: '<S330>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_HVC_Htr3PwrAct = KeHTIR_W_HVC_Htr3PwrAct_D;
    }
    else
    {
        /* Switch: '<S320>/Switch3' */
        HTIR_ac_B.VeHTIR_P_HVC_Htr3PwrAct =
            rtb_TmpSignalConversionAtVeHTIR_P_HV_Htr;
    }

    /* End of Switch: '<S320>/Switch3' */

    /* Gain: '<S332>/Gain' */
    HTIR_ac_B.Gain_do = rtb_TmpSignalConversionAtVeHTIR_b_HV__m3;

    /* Switch: '<S319>/Switch3' incorporates:
     *  Constant: '<S327>/Calib'
     */
    if (KeHTIR_b_Htr3Cntctr_StckClsdt_SD)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S328>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HV_Htr3Cntctr_StckClsd =
            KeHTIR_e_HVC_Htr3Cntctr_StckClsd_D;
    }
    else
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_read'
         */
        HTIR_ac_B.VeHTIR_e_HV_Htr3Cntctr_StckClsd =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_k;
    }

    /* End of Switch: '<S319>/Switch3' */

    /* Gain: '<S329>/Gain' */
    HTIR_ac_B.Gain_cc = rtb_TmpSignalConversionAtVeHTIR_b_HV__gl;

    /* Switch: '<S317>/Switch' incorporates:
     *  Constant: '<S323>/Calib'
     */
    if (KeHTIR_b_Htr3PwrLimit_IO_Cnt_SD)
    {
        /* Switch: '<S317>/Switch' incorporates:
         *  Constant: '<S324>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_Htr3PwrLimit_IO_Cnt = KeHTIR_e_Htr3PwrLimit_IO_Cnt_D;
    }
    else
    {
        /* Switch: '<S317>/Switch' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_Read'
         */
        HTIR_ac_B.VeHTIR_e_Htr3PwrLimit_IO_Cnt =
            rtb_TmpSignalConversionAtVeHTIF_e_HV_H_k;
    }

    /* End of Switch: '<S317>/Switch' */

    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S322>/Calib'
     */
    if (KeHTIR_b_DVC_Htr3PwrLimit_SD)
    {
        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S321>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_DVC_Htr3PwrLimit = KeHTIR_W_DVC_Htr3PwrLimit_D;
    }
    else
    {
        /* Switch: '<S317>/Switch1' */
        HTIR_ac_B.VeHTIR_P_DVC_Htr3PwrLimit =
            rtb_TmpSignalConversionAtVeHTIF_P_HV_Htr;
    }

    /* End of Switch: '<S317>/Switch1' */
    /* End of Outputs for SubSystem: '<S248>/Htr3_BHE_Ovrd' */
    /* End of Outputs for SubSystem: '<S246>/Htr3_HtrElmnt_Ovrd' */
#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Atomic SubSystem: '<S246>/Htr4_DBK_Ovrd' */
    /* Outputs for Atomic SubSystem: '<S249>/Htr4_BCH_Ovrd' */
    /* Switch: '<S335>/Switch2' incorporates:
     *  Constant: '<S360>/Calib'
     */
    if (KeHTIR_b_HV_ElecClntHtr4_Sts_SD)
    {
        /* Switch: '<S335>/Switch2' incorporates:
         *  Constant: '<S361>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr4_Sts = KeHTIR_e_HV_ElecClntHtr4_Sts_D;
    }
    else
    {
        /* Switch: '<S335>/Switch2' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4Sts_read'
         */
        HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr4_Sts =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_h;
    }

    /* End of Switch: '<S335>/Switch2' */

    /* Switch: '<S337>/Switch2' incorporates:
     *  Constant: '<S365>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4_HV_OutofRng_SD)
    {
        /* Switch: '<S337>/Switch2' incorporates:
         *  Constant: '<S366>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_HV_OutofRng =
            KeHTIR_e_HVC_Htr4_HV_OutofRng_D;
    }
    else
    {
        /* Switch: '<S337>/Switch2' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_HV_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_HV_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__ik;
    }

    /* End of Switch: '<S337>/Switch2' */

    /* Gain: '<S367>/Gain' */
    HTIR_ac_B.Gain_c = rtb_TmpSignalConversionAtVeHTIR_b_HV__kn;

    /* Switch: '<S336>/Switch2' incorporates:
     *  Constant: '<S362>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4_LV_OutofRng_SD)
    {
        /* Switch: '<S336>/Switch2' incorporates:
         *  Constant: '<S363>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_LV_OutofRng =
            KeHTIR_e_HVC_Htr4_LV_OutofRng_D;
    }
    else
    {
        /* Switch: '<S336>/Switch2' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_LV_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_LV_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__o5;
    }

    /* End of Switch: '<S336>/Switch2' */

    /* Gain: '<S364>/Gain' */
    HTIR_ac_B.Gain_ea = rtb_TmpSignalConversionAtVeHTIR_b_HV__pd;

    /* Switch: '<S348>/Switch2' incorporates:
     *  Constant: '<S397>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4ClntTemp_OutofRng_SD)
    {
        /* Switch: '<S348>/Switch2' incorporates:
         *  Constant: '<S398>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntTemp_OutofRng =
            KeHTIR_e_HVC_Htr4ClntTemp_OutofRng_D;
    }
    else
    {
        /* Switch: '<S348>/Switch2' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntTemp_OutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntTemp_OutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_c;
    }

    /* End of Switch: '<S348>/Switch2' */

    /* Gain: '<S399>/Gain' */
    HTIR_ac_B.Gain_co = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_c;

    /* Switch: '<S344>/Switch3' incorporates:
     *  Constant: '<S385>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4IntCom_Err_SD)
    {
        /* Switch: '<S344>/Switch3' incorporates:
         *  Constant: '<S386>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4IntCom_Err = KeHTIR_e_HVC_Htr4IntCom_Err_D;
    }
    else
    {
        /* Switch: '<S344>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4IntCom_Err_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4IntCom_Err =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__ka;
    }

    /* End of Switch: '<S344>/Switch3' */

    /* Gain: '<S387>/Gain' */
    HTIR_ac_B.Gain_ci = rtb_TmpSignalConversionAtVeHTIR_b_HV__k0;

    /* Switch: '<S350>/Switch3' incorporates:
     *  Constant: '<S403>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_SD)
    {
        /* Switch: '<S350>/Switch3' incorporates:
         *  Constant: '<S404>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp =
            KeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_D;
    }
    else
    {
        /* Switch: '<S350>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__lw;
    }

    /* End of Switch: '<S350>/Switch3' */

    /* Gain: '<S405>/Gain' */
    HTIR_ac_B.Gain_p = rtb_TmpSignalConversionAtVeHTIR_b_HV__al;

    /* Switch: '<S351>/Switch3' incorporates:
     *  Constant: '<S406>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4SelfProtect_Actv_SD)
    {
        /* Switch: '<S351>/Switch3' incorporates:
         *  Constant: '<S407>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4SelfProtect_Actv =
            KeHTIR_e_HVC_Htr4SelfProtect_Actv_D;
    }
    else
    {
        /* Switch: '<S351>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4SelfProtect_Actv_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4SelfProtect_Actv =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_H_b;
    }

    /* End of Switch: '<S351>/Switch3' */

    /* Gain: '<S408>/Gain' */
    HTIR_ac_B.Gain_bu = rtb_TmpSignalConversionAtVeHTIR_b_HV__np;

    /* Switch: '<S352>/Switch3' incorporates:
     *  Constant: '<S409>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_SD)
    {
        /* Switch: '<S352>/Switch3' incorporates:
         *  Constant: '<S410>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt =
            KeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_D;
    }
    else
    {
        /* Switch: '<S352>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntOut_TempSensFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__ly;
    }

    /* End of Switch: '<S352>/Switch3' */

    /* Gain: '<S411>/Gain' */
    HTIR_ac_B.Gain_k = rtb_TmpSignalConversionAtVeHTIR_b_HV__hm;

    /* Switch: '<S353>/Switch3' incorporates:
     *  Constant: '<S412>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_SD)
    {
        /* Switch: '<S353>/Switch3' incorporates:
         *  Constant: '<S413>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt =
            KeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_D;
    }
    else
    {
        /* Switch: '<S353>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ClntIn_TempSensFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__ox;
    }

    /* End of Switch: '<S353>/Switch3' */

    /* Gain: '<S414>/Gain' */
    HTIR_ac_B.Gain_nh = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_g;

    /* Switch: '<S354>/Switch3' incorporates:
     *  Constant: '<S415>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4CoreTemp_SensFlt_SD)
    {
        /* Switch: '<S354>/Switch3' incorporates:
         *  Constant: '<S416>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4CoreTemp_SensFlt =
            KeHTIR_e_HVC_Htr4CoreTemp_SensFlt_D;
    }
    else
    {
        /* Switch: '<S354>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4CoreTemp_SensFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4CoreTemp_SensFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__py;
    }

    /* End of Switch: '<S354>/Switch3' */

    /* Gain: '<S417>/Gain' */
    HTIR_ac_B.Gain_dp = rtb_TmpSignalConversionAtVeHTIR_b_HV__d3;

    /* Switch: '<S347>/Switch3' incorporates:
     *  Constant: '<S394>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_SD)
    {
        /* Switch: '<S347>/Switch3' incorporates:
         *  Constant: '<S395>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng =
            KeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_D;
    }
    else
    {
        /* Switch: '<S347>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__cy;
    }

    /* End of Switch: '<S347>/Switch3' */

    /* Gain: '<S396>/Gain' */
    HTIR_ac_B.Gain_ow = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_i;

    /* Switch: '<S339>/Switch3' incorporates:
     *  Constant: '<S371>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4_HV_CrntOutofRng_SD)
    {
        /* Switch: '<S339>/Switch3' incorporates:
         *  Constant: '<S372>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_HV_CrntOutofRng =
            KeHTIR_e_HVC_Htr4_HV_CrntOutofRng_D;
    }
    else
    {
        /* Switch: '<S339>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4_HV_CrntOutofRng_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4_HV_CrntOutofRng =
            rtb_TmpSignalConversionAtVeHTIR_e_HV_ndf;
    }

    /* End of Switch: '<S339>/Switch3' */

    /* Gain: '<S373>/Gain' */
    HTIR_ac_B.Gain_mz = rtb_TmpSignalConversionAtVeHTIR_b_HV__eh;

    /* Switch: '<S355>/Switch3' incorporates:
     *  Constant: '<S418>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4DrvFlt_SD)
    {
        /* Switch: '<S355>/Switch3' incorporates:
         *  Constant: '<S419>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4DrvFlt = KeHTIR_e_HVC_Htr4DrvFlt_D;
    }
    else
    {
        /* Switch: '<S355>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4DrvFlt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4DrvFlt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__eu;
    }

    /* End of Switch: '<S355>/Switch3' */

    /* Gain: '<S420>/Gain' */
    HTIR_ac_B.Gain_ks = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_j;

    /* Switch: '<S338>/Switch3' incorporates:
     *  Constant: '<S368>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4ProcesMemory_Flt_SD)
    {
        /* Switch: '<S338>/Switch3' incorporates:
         *  Constant: '<S369>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ProcesMemory_Flt =
            KeHTIR_e_HVC_Htr4ProcesMemory_Flt_D;
    }
    else
    {
        /* Switch: '<S338>/Switch3' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIR_e_HV_Htr4ProcesMemory_Flt_read'
         */
        HTIR_ac_B.VeHTIR_e_HVC_Htr4ProcesMemory_Flt =
            rtb_TmpSignalConversionAtVeHTIR_e_HV__dy;
    }

    /* End of Switch: '<S338>/Switch3' */

    /* Gain: '<S370>/Gain' */
    HTIR_ac_B.Gain_ia = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_h;

    /* Switch: '<S340>/Switch3' incorporates:
     *  Constant: '<S375>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4_HV_CrntAct_SD)
    {
        /* Switch: '<S340>/Switch3' incorporates:
         *  Constant: '<S374>/Calib'
         */
        HTIR_ac_B.VeHTIR_I_HVC_Htr4_HV_CrntAct = KeHTIR_I_HVC_Htr4_HV_CrntAct_D;
    }
    else
    {
        /* Switch: '<S340>/Switch3' */
        HTIR_ac_B.VeHTIR_I_HVC_Htr4_HV_CrntAct =
            rtb_TmpSignalConversionAtVeHTIR_I_HV_H_e;
    }

    /* End of Switch: '<S340>/Switch3' */

    /* Gain: '<S376>/Gain' */
    HTIR_ac_B.Gain_m5 = rtb_TmpSignalConversionAtVeHTIR_b_HV__as;

    /* Switch: '<S342>/Switch3' incorporates:
     *  Constant: '<S381>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4_LIN_ResErr_SD)
    {
        /* Switch: '<S342>/Switch3' incorporates:
         *  Constant: '<S380>/Calib'
         */
        HTIR_ac_B.VeHTIR_b_HVC_Htr4_LIN_ResErr = KeHTIR_b_HVC_Htr4_LIN_ResErr_D;
    }
    else
    {
        /* Switch: '<S342>/Switch3' */
        HTIR_ac_B.VeHTIR_b_HVC_Htr4_LIN_ResErr =
            rtb_TmpSignalConversionAtVeHTIR_b_HV__ld;
    }

    /* End of Switch: '<S342>/Switch3' */

    /* Switch: '<S343>/Switch3' incorporates:
     *  Constant: '<S383>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4ClntOut_Temp_SD)
    {
        /* Switch: '<S343>/Switch3' incorporates:
         *  Constant: '<S382>/Calib'
         */
        HTIR_ac_B.VeHTIR_T_HVC_Htr4ClntOut_Temp =
            KeHTIR_T_HVC_Htr4ClntOut_Temp_D;
    }
    else
    {
        /* Switch: '<S343>/Switch3' */
        HTIR_ac_B.VeHTIR_T_HVC_Htr4ClntOut_Temp =
            rtb_TmpSignalConversionAtVeHTIR_T_HV_H_l;
    }

    /* End of Switch: '<S343>/Switch3' */

    /* Gain: '<S384>/Gain' */
    HTIR_ac_B.Gain_ch = rtb_TmpSignalConversionAtVeHTIR_b_HV__kk;

    /* Switch: '<S345>/Switch3' incorporates:
     *  Constant: '<S389>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4ClntIn_Temp_SD)
    {
        /* Switch: '<S345>/Switch3' incorporates:
         *  Constant: '<S388>/Calib'
         */
        HTIR_ac_B.VeHTIR_T_HVC_Htr4ClntIn_Temp = KeHTIR_T_HVC_Htr4ClntIn_Temp_D;
    }
    else
    {
        /* Switch: '<S345>/Switch3' */
        HTIR_ac_B.VeHTIR_T_HVC_Htr4ClntIn_Temp =
            rtb_TmpSignalConversionAtVeHTIR_T_HV_H_m;
    }

    /* End of Switch: '<S345>/Switch3' */

    /* Gain: '<S390>/Gain' */
    HTIR_ac_B.Gain_dw = rtb_TmpSignalConversionAtVeHTIR_b_HV__ot;

    /* Switch: '<S346>/Switch3' incorporates:
     *  Constant: '<S392>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4PwrExpectd_SD)
    {
        /* Switch: '<S346>/Switch3' incorporates:
         *  Constant: '<S391>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_HVC_Htr4PwrExpectd = KeHTIR_W_HVC_Htr4PwrExpectd_D;
    }
    else
    {
        /* Switch: '<S346>/Switch3' */
        HTIR_ac_B.VeHTIR_P_HVC_Htr4PwrExpectd =
            rtb_TmpSignalConversionAtVeHTIR_P_HV_H_m;
    }

    /* End of Switch: '<S346>/Switch3' */

    /* Gain: '<S393>/Gain' */
    HTIR_ac_B.Gain_mzj = rtb_TmpSignalConversionAtVeHTIR_b_HV_H_b;

    /* Switch: '<S349>/Switch3' incorporates:
     *  Constant: '<S401>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4PwrAct_SD)
    {
        /* Switch: '<S349>/Switch3' incorporates:
         *  Constant: '<S400>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_HVC_Htr4PwrAct = KeHTIR_W_HVC_Htr4PwrAct_D;
    }
    else
    {
        /* Switch: '<S349>/Switch3' */
        HTIR_ac_B.VeHTIR_P_HVC_Htr4PwrAct =
            rtb_TmpSignalConversionAtVeHTIR_P_HV_H_a;
    }

    /* End of Switch: '<S349>/Switch3' */

    /* Gain: '<S402>/Gain' */
    HTIR_ac_B.Gain_gsv = rtb_TmpSignalConversionAtVeHTIR_b_HV__dy;

    /* Switch: '<S341>/Switch3' incorporates:
     *  Constant: '<S378>/Calib'
     */
    if (KeHTIR_b_HVC_Htr4_HV_VltgAct_SD)
    {
        /* Switch: '<S341>/Switch3' incorporates:
         *  Constant: '<S377>/Calib'
         */
        HTIR_ac_B.VeHTIR_U_HVC_Htr4_HV_VltgAct = KeHTIR_U_HVC_Htr4_HV_VltgAct_D;
    }
    else
    {
        /* Switch: '<S341>/Switch3' */
        HTIR_ac_B.VeHTIR_U_HVC_Htr4_HV_VltgAct =
            rtb_TmpSignalConversionAtVeHTIR_U_HV_H_f;
    }

    /* End of Switch: '<S341>/Switch3' */

    /* Gain: '<S379>/Gain' */
    HTIR_ac_B.Gain_ek = rtb_TmpSignalConversionAtVeHTIR_b_HV__oe;

    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S358>/Calib'
     */
    if (KeHTIR_b_Htr4PwrLimit_IO_Cnt_SD)
    {
        /* Switch: '<S334>/Switch' incorporates:
         *  Constant: '<S359>/Calib'
         */
        HTIR_ac_B.VeHTIR_e_Htr4PwrLimit_IO_Cnt = KeHTIR_e_Htr4PwrLimit_IO_Cnt_D;
    }
    else
    {
        /* Switch: '<S334>/Switch' incorporates:
         *  SignalConversion generated from: '<S85>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_Read'
         */
        HTIR_ac_B.VeHTIR_e_Htr4PwrLimit_IO_Cnt =
            rtb_TmpSignalConversionAtVeHTIF_e_HV_H_i;
    }

    /* End of Switch: '<S334>/Switch' */

    /* Switch: '<S334>/Switch1' incorporates:
     *  Constant: '<S357>/Calib'
     */
    if (KeHTIR_b_DVC_Htr4PwrLimit_SD)
    {
        /* Switch: '<S334>/Switch1' incorporates:
         *  Constant: '<S356>/Calib'
         */
        HTIR_ac_B.VeHTIR_P_DVC_Htr4PwrLimit = KeHTIR_W_DVC_Htr4PwrLimit_D;
    }
    else
    {
        /* Switch: '<S334>/Switch1' */
        HTIR_ac_B.VeHTIR_P_DVC_Htr4PwrLimit =
            rtb_TmpSignalConversionAtVeHTIF_P_HV_H_h;
    }

    /* End of Switch: '<S334>/Switch1' */
    /* End of Outputs for SubSystem: '<S249>/Htr4_BCH_Ovrd' */
    /* End of Outputs for SubSystem: '<S246>/Htr4_DBK_Ovrd' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S85>/FcnCallGen' */

    /* SignalConversion generated from: '<S85>/DCDC_VltgOutofRng_AD' incorporates:
     *  SignalConversion generated from: '<S85>/DCDC_VltgOutofRng_FA_AD'
     */
#if Rte_SysCon_Variant_HTIR_1

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng' incorporates:
     *  Switch: '<S421>/Switch11'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA_Value
        (HTIR_ac_B.Gain_oj);

#endif

    /* End of SignalConversion generated from: '<S85>/DCDC_VltgOutofRng_AD' */

    /* SignalConversion generated from: '<S85>/DVC_Htr2PwrLimit_AD' */
#if Rte_SysCon_Variant_HTIR_2

    /* Outport: '<Root>/VeHTIR_P_DVC_Htr2PwrLimit' */
    (void)Rte_Write_VeHTIR_P_DVC_Htr2PwrLimit_Value
        (HTIR_ac_B.VeHTIR_P_DVC_Htr2PwrLimit);

#endif

    /* End of SignalConversion generated from: '<S85>/DVC_Htr2PwrLimit_AD' */

    /* SignalConversion generated from: '<S85>/DVC_Htr3PwrLimit_AD' */
#if Rte_SysCon_Variant_HTIR_3

    /* Outport: '<Root>/VeHTIR_P_DVC_Htr3PwrLimit' */
    (void)Rte_Write_VeHTIR_P_DVC_Htr3PwrLimit_Value
        (HTIR_ac_B.VeHTIR_P_DVC_Htr3PwrLimit);

#endif

    /* End of SignalConversion generated from: '<S85>/DVC_Htr3PwrLimit_AD' */

    /* SignalConversion generated from: '<S85>/DVC_Htr4PwrLimit_AD' */
#if Rte_SysCon_Variant_HTIR_4

    /* Outport: '<Root>/VeHTIR_P_DVC_Htr4PwrLimit' */
    (void)Rte_Write_VeHTIR_P_DVC_Htr4PwrLimit_Value
        (HTIR_ac_B.VeHTIR_P_DVC_Htr4PwrLimit);

#endif

    /* End of SignalConversion generated from: '<S85>/DVC_Htr4PwrLimit_AD' */

    /* SignalConversion generated from: '<S85>/DVC_HtrPwrLimit_AD' incorporates:
     *  SignalConversion generated from: '<S85>/HVC_HtrOvrht_UnlckReq_AD'
     *  SignalConversion generated from: '<S85>/HVC_HtrUnlckCntr_AD'
     *  SignalConversion generated from: '<S85>/HV_CrntOutofRng_AD'
     *  SignalConversion generated from: '<S85>/HV_CrntOutofRng_FA_AD'
     */
#if Rte_SysCon_Variant_HTIR_1

    /* Outport: '<Root>/VeHTIR_P_DVC_HtrPwrLimit' */
    (void)Rte_Write_VeHTIR_P_DVC_HtrPwrLimit_Value
        (HTIR_ac_B.VeHTIR_P_DVC_HtrPwrLimit);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrOvrht_UnlckReq' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrOvrht_UnlckReq_Value
        (HTIR_ac_B.VeHTIR_b_HVC_HtrOvrht_UnlckReq);

    /* Outport: '<Root>/VeHTIR_Cnt_HVC_HtrUnlckCntr' */
    (void)Rte_Write_VeHTIR_Cnt_HVC_HtrUnlckCntr_Value
        (HTIR_ac_B.VeHTIR_Cnt_HVC_HtrUnlckCntr);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng' incorporates:
     *  Switch: '<S421>/Switch12'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr_HV_CrntOutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA_Value(HTIR_ac_B.Gain_mg);

#endif

    /* End of SignalConversion generated from: '<S85>/DVC_HtrPwrLimit_AD' */

    /* SignalConversion generated from: '<S85>/HV_ElecClntHtr2_Sts_AD' */
#if Rte_SysCon_Variant_HTIR_2

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts' incorporates:
     *  Switch: '<S251>/Switch2'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr2_Sts_Value
        (HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr2_Sts);

#endif

    /* End of SignalConversion generated from: '<S85>/HV_ElecClntHtr2_Sts_AD' */

    /* SignalConversion generated from: '<S85>/HV_ElecClntHtr3_Sts_AD' */
#if Rte_SysCon_Variant_HTIR_3

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts' incorporates:
     *  Switch: '<S318>/Switch2'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr3_Sts_Value
        (HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr3_Sts);

#endif

    /* End of SignalConversion generated from: '<S85>/HV_ElecClntHtr3_Sts_AD' */

    /* SignalConversion generated from: '<S85>/HV_ElecClntHtr4_Sts_AD' */
#if Rte_SysCon_Variant_HTIR_4

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts' incorporates:
     *  Switch: '<S335>/Switch2'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr4_Sts_Value
        (HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr4_Sts);

#endif

    /* End of SignalConversion generated from: '<S85>/HV_ElecClntHtr4_Sts_AD' */

    /* SignalConversion generated from: '<S85>/HV_ElecClntHtr_Sts_AD' */
#if Rte_SysCon_Variant_HTIR_1

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  Switch: '<S421>/Switch2'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr_Sts_Value
        (HTIR_ac_B.VeHTIR_e_HV_ElecClntHtr_Sts);

#endif

    /* End of SignalConversion generated from: '<S85>/HV_ElecClntHtr_Sts_AD' */

    /* SignalConversion generated from: '<S85>/Htr2CoreTemp_AD' incorporates:
     *  SignalConversion generated from: '<S85>/Htr2CoreTemp_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2CoreTemp_SensFlt_AD'
     *  SignalConversion generated from: '<S85>/Htr2CoreTemp_SensFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2Core_OvrTmp_AD'
     *  SignalConversion generated from: '<S85>/Htr2Core_OvrTmp_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2DrvFlt_AD'
     *  SignalConversion generated from: '<S85>/Htr2DrvFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2HVCrnt_SnsrFlt_AD'
     *  SignalConversion generated from: '<S85>/Htr2HVCrnt_SnsrFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2HV_CrntOutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr2HV_CrntOutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2IntCom_Err_AD'
     *  SignalConversion generated from: '<S85>/Htr2IntCom_Err_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2PCBTmp_SnsrFlt_AD'
     *  SignalConversion generated from: '<S85>/Htr2PCBTmp_SnsrFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2ProcesMemory_Flt_AD'
     *  SignalConversion generated from: '<S85>/Htr2ProcesMemory_Flt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2PwrAct_AD'
     *  SignalConversion generated from: '<S85>/Htr2PwrAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2PwrLimit_IO_Cnt_AD'
     *  SignalConversion generated from: '<S85>/Htr2Resis_PCB_OvrTemp_AD'
     *  SignalConversion generated from: '<S85>/Htr2Resis_PCB_OvrTemp_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2SelfProtect_Actv_AD'
     *  SignalConversion generated from: '<S85>/Htr2SelfProtect_Actv_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2TmpOvrheatg_AD'
     *  SignalConversion generated from: '<S85>/Htr2TmpOvrheatg_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2_HV_CrntAct_AD'
     *  SignalConversion generated from: '<S85>/Htr2_HV_CrntAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2_HV_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr2_HV_OutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2_HV_VltgAct_AD'
     *  SignalConversion generated from: '<S85>/Htr2_HV_VltgAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2_LIN_ResErr_AD'
     *  SignalConversion generated from: '<S85>/Htr2_LV_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr2_LV_OutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr2_PCBTemp_AD'
     *  SignalConversion generated from: '<S85>/Htr2_PCBTemp_FA_AD'
     */
#if Rte_SysCon_Variant_HTIR_2

    /* Outport: '<Root>/VeHTIR_T_Htr2CoreTemp' */
    (void)Rte_Write_VeHTIR_T_Htr2CoreTemp_Value(HTIR_ac_B.VeHTIR_T_Htr2CoreTemp);

    /* Outport: '<Root>/VeHTIR_b_Htr2CoreTemp_FA' */
    (void)Rte_Write_VeHTIR_b_Htr2CoreTemp_FA_Value(HTIR_ac_B.Gain_gsn);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt' incorporates:
     *  Switch: '<S251>/Switch10'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2CoreTemp_SensFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA_Value(HTIR_ac_B.Gain_b1);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2Core_OvrTmp' incorporates:
     *  Switch: '<S251>/Switch18'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2Core_OvrTmp_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2Core_OvrTmp);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2Core_OvrTmp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2Core_OvrTmp_FA_Value(HTIR_ac_B.Gain_fk);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2DrvFlt' incorporates:
     *  Switch: '<S251>/Switch13'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2DrvFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2DrvFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2DrvFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2DrvFlt_FA_Value(HTIR_ac_B.Gain_gr);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt' incorporates:
     *  Switch: '<S251>/Switch9'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA_Value(HTIR_ac_B.Gain_at);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng' incorporates:
     *  Switch: '<S251>/Switch12'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2_HV_CrntOutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA_Value(HTIR_ac_B.Gain_it);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2IntCom_Err' incorporates:
     *  Switch: '<S251>/Switch5'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2IntCom_Err_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2IntCom_Err);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2IntCom_Err_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2IntCom_Err_FA_Value(HTIR_ac_B.Gain_e4);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt' incorporates:
     *  Switch: '<S251>/Switch17'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA_Value(HTIR_ac_B.Gain_ax);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt' incorporates:
     *  Switch: '<S251>/Switch14'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2ProcesMemory_Flt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA_Value(HTIR_ac_B.Gain_n4);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr2PwrAct' */
    (void)Rte_Write_VeHTIR_P_HVC_Htr2PwrAct_Value
        (HTIR_ac_B.VeHTIR_P_HVC_Htr2PwrAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2PwrAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2PwrAct_FA_Value(HTIR_ac_B.Gain_hl);

    /* Outport: '<Root>/VeHTIR_e_Htr2PwrLimit_IO_Cnt' incorporates:
     *  Switch: '<S251>/Switch'
     */
    (void)Rte_Write_VeHTIR_e_Htr2PwrLimit_IO_Cnt_Value
        (HTIR_ac_B.VeHTIR_e_Htr2PwrLimit_IO_Cnt);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp' incorporates:
     *  Switch: '<S251>/Switch6'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA_Value
        (HTIR_ac_B.Gain_a0);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2SelfProtect_Actv' incorporates:
     *  Switch: '<S251>/Switch7'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2SelfProtect_Actv_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2SelfProtect_Actv);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA_Value
        (HTIR_ac_B.Gain_jcz);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2TmpOvrheatg' incorporates:
     *  Switch: '<S251>/Switch8'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2TmpOvrheatg_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2TmpOvrheatg);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2TmpOvrheatg_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2TmpOvrheatg_FA_Value(HTIR_ac_B.Gain_nb);

    /* Outport: '<Root>/VeHTIR_I_HVC_Htr2_HV_CrntAct' */
    (void)Rte_Write_VeHTIR_I_HVC_Htr2_HV_CrntAct_Value
        (HTIR_ac_B.VeHTIR_I_HVC_Htr2_HV_CrntAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_CrntAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_CrntAct_FA_Value(HTIR_ac_B.Gain_br);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2_HV_OutofRng' incorporates:
     *  Switch: '<S251>/Switch1'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_HV_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2_HV_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_OutofRng_FA_Value(HTIR_ac_B.Gain_h);

    /* Outport: '<Root>/VeHTIR_U_HVC_Htr2_HV_VltgAct' */
    (void)Rte_Write_VeHTIR_U_HVC_Htr2_HV_VltgAct_Value
        (HTIR_ac_B.VeHTIR_U_HVC_Htr2_HV_VltgAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_VltgAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_VltgAct_FA_Value(HTIR_ac_B.Gain_cx);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_LIN_ResErr' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_LIN_ResErr_Value
        (HTIR_ac_B.VeHTIR_b_HVC_Htr2_LIN_ResErr);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2_LV_OutofRng' incorporates:
     *  Switch: '<S251>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_LV_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr2_LV_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_LV_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_LV_OutofRng_FA_Value(HTIR_ac_B.Gain_hg);

    /* Outport: '<Root>/VeHTIR_T_Htr2_PCBTemp' */
    (void)Rte_Write_VeHTIR_T_Htr2_PCBTemp_Value(HTIR_ac_B.VeHTIR_T_Htr2_PCBTemp);

    /* Outport: '<Root>/VeHTIR_b_Htr2_PCBTemp_FA' */
    (void)Rte_Write_VeHTIR_b_Htr2_PCBTemp_FA_Value(HTIR_ac_B.Gain_ai);

#endif

    /* End of SignalConversion generated from: '<S85>/Htr2CoreTemp_AD' */

    /* SignalConversion generated from: '<S85>/Htr3Cntctr_StckClsd_AD' incorporates:
     *  SignalConversion generated from: '<S85>/Htr3Cntctr_StckClsd_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr3PwrAct_AD'
     *  SignalConversion generated from: '<S85>/Htr3PwrAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr3PwrLimit_IO_Cnt_AD'
     */
#if Rte_SysCon_Variant_HTIR_3

    /* Outport: '<Root>/VeHTIR_e_HV_Htr3Cntctr_StckClsd' incorporates:
     *  Switch: '<S319>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HV_Htr3Cntctr_StckClsd_Value
        (HTIR_ac_B.VeHTIR_e_HV_Htr3Cntctr_StckClsd);

    /* Outport: '<Root>/VeHTIR_b_Htr3Cntctr_StckClsd_FA' */
    (void)Rte_Write_VeHTIR_b_Htr3Cntctr_StckClsd_FA_Value(HTIR_ac_B.Gain_cc);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr3PwrAct' */
    (void)Rte_Write_VeHTIR_P_HVC_Htr3PwrAct_Value
        (HTIR_ac_B.VeHTIR_P_HVC_Htr3PwrAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr3PwrAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr3PwrAct_FA_Value(HTIR_ac_B.Gain_do);

    /* Outport: '<Root>/VeHTIR_e_Htr3PwrLimit_IO_Cnt' incorporates:
     *  Switch: '<S317>/Switch'
     */
    (void)Rte_Write_VeHTIR_e_Htr3PwrLimit_IO_Cnt_Value
        (HTIR_ac_B.VeHTIR_e_Htr3PwrLimit_IO_Cnt);

#endif

    /* End of SignalConversion generated from: '<S85>/Htr3Cntctr_StckClsd_AD' */

    /* SignalConversion generated from: '<S85>/Htr4ClntIn_TempSensFlt_AD' incorporates:
     *  SignalConversion generated from: '<S85>/Htr4ClntIn_TempSensFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntIn_Temp_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntIn_Temp_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntOut_TempSensFlt_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntOut_TempSensFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntOut_Temp_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntOut_Temp_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntTemp_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr4ClntTemp_OutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4CoreTemp_SensFlt_AD'
     *  SignalConversion generated from: '<S85>/Htr4CoreTemp_SensFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4DCDC_VltgOutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr4DCDC_VltgOutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4DrvFlt_AD'
     *  SignalConversion generated from: '<S85>/Htr4DrvFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4HV_CrntOutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr4HV_CrntOutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4IntCom_Err_AD'
     *  SignalConversion generated from: '<S85>/Htr4IntCom_Err_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4ProcesMemory_Flt_AD'
     *  SignalConversion generated from: '<S85>/Htr4ProcesMemory_Flt_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4PwrAct_AD'
     *  SignalConversion generated from: '<S85>/Htr4PwrAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4PwrExpectd_AD'
     *  SignalConversion generated from: '<S85>/Htr4PwrExpectd_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4PwrLimit_IO_Cnt_AD'
     *  SignalConversion generated from: '<S85>/Htr4Resis_PCB_OvrTemp_AD'
     *  SignalConversion generated from: '<S85>/Htr4Resis_PCB_OvrTemp_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4SelfProtect_Actv_AD'
     *  SignalConversion generated from: '<S85>/Htr4SelfProtect_Actv_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4_HV_CrntAct_AD'
     *  SignalConversion generated from: '<S85>/Htr4_HV_CrntAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4_HV_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr4_HV_OutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4_HV_VltgAct_AD'
     *  SignalConversion generated from: '<S85>/Htr4_HV_VltgAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr4_LIN_ResErr_AD'
     *  SignalConversion generated from: '<S85>/Htr4_LV_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr4_LV_OutofRng_FA_AD'
     */
#if Rte_SysCon_Variant_HTIR_4

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt' incorporates:
     *  Switch: '<S353>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA_Value
        (HTIR_ac_B.Gain_nh);

    /* Outport: '<Root>/VeHTIR_T_HVC_Htr4ClntIn_Temp' */
    (void)Rte_Write_VeHTIR_T_HVC_Htr4ClntIn_Temp_Value
        (HTIR_ac_B.VeHTIR_T_HVC_Htr4ClntIn_Temp);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntIn_Temp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntIn_Temp_FA_Value(HTIR_ac_B.Gain_dw);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt' incorporates:
     *  Switch: '<S352>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA_Value
        (HTIR_ac_B.Gain_k);

    /* Outport: '<Root>/VeHTIR_T_HVC_Htr4ClntOut_Temp' */
    (void)Rte_Write_VeHTIR_T_HVC_Htr4ClntOut_Temp_Value
        (HTIR_ac_B.VeHTIR_T_HVC_Htr4ClntOut_Temp);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_Temp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntOut_Temp_FA_Value(HTIR_ac_B.Gain_ch);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng' incorporates:
     *  Switch: '<S348>/Switch2'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4ClntTemp_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_Value
        (HTIR_ac_B.Gain_co);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt' incorporates:
     *  Switch: '<S354>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4CoreTemp_SensFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA_Value(HTIR_ac_B.Gain_dp);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng' incorporates:
     *  Switch: '<S347>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA_Value
        (HTIR_ac_B.Gain_ow);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4DrvFlt' incorporates:
     *  Switch: '<S355>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4DrvFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4DrvFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4DrvFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4DrvFlt_FA_Value(HTIR_ac_B.Gain_ks);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng' incorporates:
     *  Switch: '<S339>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4_HV_CrntOutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA_Value(HTIR_ac_B.Gain_mz);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4IntCom_Err' incorporates:
     *  Switch: '<S344>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4IntCom_Err_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4IntCom_Err);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4IntCom_Err_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4IntCom_Err_FA_Value(HTIR_ac_B.Gain_ci);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt' incorporates:
     *  Switch: '<S338>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4ProcesMemory_Flt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA_Value(HTIR_ac_B.Gain_ia);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr4PwrAct' */
    (void)Rte_Write_VeHTIR_P_HVC_Htr4PwrAct_Value
        (HTIR_ac_B.VeHTIR_P_HVC_Htr4PwrAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4PwrAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4PwrAct_FA_Value(HTIR_ac_B.Gain_gsv);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr4PwrExpectd' */
    (void)Rte_Write_VeHTIR_P_HVC_Htr4PwrExpectd_Value
        (HTIR_ac_B.VeHTIR_P_HVC_Htr4PwrExpectd);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4PwrExpectd_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4PwrExpectd_FA_Value(HTIR_ac_B.Gain_mzj);

    /* Outport: '<Root>/VeHTIR_e_Htr4PwrLimit_IO_Cnt' incorporates:
     *  Switch: '<S334>/Switch'
     */
    (void)Rte_Write_VeHTIR_e_Htr4PwrLimit_IO_Cnt_Value
        (HTIR_ac_B.VeHTIR_e_Htr4PwrLimit_IO_Cnt);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp' incorporates:
     *  Switch: '<S350>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA_Value(HTIR_ac_B.Gain_p);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4SelfProtect_Actv' incorporates:
     *  Switch: '<S351>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4SelfProtect_Actv_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4SelfProtect_Actv);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA_Value(HTIR_ac_B.Gain_bu);

    /* Outport: '<Root>/VeHTIR_I_HVC_Htr4_HV_CrntAct' */
    (void)Rte_Write_VeHTIR_I_HVC_Htr4_HV_CrntAct_Value
        (HTIR_ac_B.VeHTIR_I_HVC_Htr4_HV_CrntAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_CrntAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_CrntAct_FA_Value(HTIR_ac_B.Gain_m5);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_HV_OutofRng' incorporates:
     *  Switch: '<S337>/Switch2'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_HV_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4_HV_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_OutofRng_FA_Value(HTIR_ac_B.Gain_c);

    /* Outport: '<Root>/VeHTIR_U_HVC_Htr4_HV_VltgAct' */
    (void)Rte_Write_VeHTIR_U_HVC_Htr4_HV_VltgAct_Value
        (HTIR_ac_B.VeHTIR_U_HVC_Htr4_HV_VltgAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_VltgAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_VltgAct_FA_Value(HTIR_ac_B.Gain_ek);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_LIN_ResErr' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_LIN_ResErr_Value
        (HTIR_ac_B.VeHTIR_b_HVC_Htr4_LIN_ResErr);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_LV_OutofRng' incorporates:
     *  Switch: '<S336>/Switch2'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_LV_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr4_LV_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_LV_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_LV_OutofRng_FA_Value(HTIR_ac_B.Gain_ea);

#endif

    /* End of SignalConversion generated from: '<S85>/Htr4ClntIn_TempSensFlt_AD' */

    /* SignalConversion generated from: '<S85>/HtrClntIn_TempSensFlt_AD' incorporates:
     *  SignalConversion generated from: '<S85>/HtrClntIn_TempSensFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrClntIn_Temp_AD'
     *  SignalConversion generated from: '<S85>/HtrClntIn_Temp_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrClntOut_TempSensFlt_AD'
     *  SignalConversion generated from: '<S85>/HtrClntOut_TempSensFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrClntOut_Temp_AD'
     *  SignalConversion generated from: '<S85>/HtrClntOut_Temp_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrClntTemp_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/HtrClntTemp_OutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrCoreTemp_SensFlt_AD'
     *  SignalConversion generated from: '<S85>/HtrCoreTemp_SensFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrDrvFlt_AD'
     *  SignalConversion generated from: '<S85>/HtrDrvFlt_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrHighVol_Dwn_AD'
     *  SignalConversion generated from: '<S85>/HtrIntCom_Err_AD'
     *  SignalConversion generated from: '<S85>/HtrIntCom_Err_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrProcesMemory_Flt_AD'
     *  SignalConversion generated from: '<S85>/HtrProcesMemory_Flt_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrPwrAct_AD'
     *  SignalConversion generated from: '<S85>/HtrPwrAct_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrPwrExpectd_AD'
     *  SignalConversion generated from: '<S85>/HtrPwrExpectd_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrPwrLimit_IO_Cnt_AD'
     *  SignalConversion generated from: '<S85>/HtrResis_PCB_OvrTemp_AD'
     *  SignalConversion generated from: '<S85>/HtrResis_PCB_OvrTemp_FA_AD'
     *  SignalConversion generated from: '<S85>/HtrSelfProtect_Actv_AD'
     *  SignalConversion generated from: '<S85>/HtrSelfProtect_Actv_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr_HV_CrntAct_AD'
     *  SignalConversion generated from: '<S85>/Htr_HV_CrntAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr_HV_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr_HV_OutofRng_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr_HV_VltgAct_AD'
     *  SignalConversion generated from: '<S85>/Htr_HV_VltgAct_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr_InterlockStat_AD'
     *  SignalConversion generated from: '<S85>/Htr_InterlockStat_FA_AD'
     *  SignalConversion generated from: '<S85>/Htr_LIN_ResErr_AD'
     *  SignalConversion generated from: '<S85>/Htr_LV_OutofRng_AD'
     *  SignalConversion generated from: '<S85>/Htr_LV_OutofRng_FA_AD'
     */
#if Rte_SysCon_Variant_HTIR_1

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt' incorporates:
     *  Switch: '<S421>/Switch9'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrClntIn_TempSensFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA_Value(HTIR_ac_B.Gain_i);

    /* Outport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp' */
    (void)Rte_Write_VeHTIR_T_HVC_HtrClntIn_Temp_Value
        (HTIR_ac_B.VeHTIR_T_HVC_HtrClntIn_Temp);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntIn_Temp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntIn_Temp_FA_Value(HTIR_ac_B.Gain_e);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt' incorporates:
     *  Switch: '<S421>/Switch8'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrClntOut_TempSensFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA_Value
        (HTIR_ac_B.Gain_m4);

    /* Outport: '<Root>/VeHTIR_T_HVC_HtrClntOut_Temp' */
    (void)Rte_Write_VeHTIR_T_HVC_HtrClntOut_Temp_Value
        (HTIR_ac_B.VeHTIR_T_HVC_HtrClntOut_Temp);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntOut_Temp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntOut_Temp_FA_Value(HTIR_ac_B.Gain_b);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrClntTemp_OutofRng' incorporates:
     *  Switch: '<S421>/Switch4'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntTemp_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrClntTemp_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_Value(HTIR_ac_B.Gain_o);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt' incorporates:
     *  Switch: '<S421>/Switch10'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrCoreTemp_SensFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA_Value(HTIR_ac_B.Gain_f);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrDrvFlt' incorporates:
     *  Switch: '<S421>/Switch13'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrDrvFlt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrDrvFlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrDrvFlt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrDrvFlt_FA_Value(HTIR_ac_B.Gain_n);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrHighVol_Dwn' incorporates:
     *  Switch: '<S421>/Switch21'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrHighVol_Dwn_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrHighVol_Dwn);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrIntCom_Err' incorporates:
     *  Switch: '<S421>/Switch5'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrIntCom_Err_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrIntCom_Err);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrIntCom_Err_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrIntCom_Err_FA_Value(HTIR_ac_B.Gain_d);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrProcesMemory_Flt' incorporates:
     *  Switch: '<S421>/Switch14'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrProcesMemory_Flt_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrProcesMemory_Flt);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrProcesMemory_Flt_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrProcesMemory_Flt_FA_Value(HTIR_ac_B.Gain_j);

    /* Outport: '<Root>/VeHTIR_P_HVC_HtrPwrAct' */
    (void)Rte_Write_VeHTIR_P_HVC_HtrPwrAct_Value
        (HTIR_ac_B.VeHTIR_P_HVC_HtrPwrAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrPwrAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrPwrAct_FA_Value(HTIR_ac_B.Gain_gu);

    /* Outport: '<Root>/VeHTIR_P_HVC_HtrPwrExpectd' */
    (void)Rte_Write_VeHTIR_P_HVC_HtrPwrExpectd_Value
        (HTIR_ac_B.VeHTIR_P_HVC_HtrPwrExpectd);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrPwrExpectd_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrPwrExpectd_FA_Value(HTIR_ac_B.Gain_jc);

    /* Outport: '<Root>/VeHTIR_e_HtrPwrLimit_IO_Cnt' incorporates:
     *  Switch: '<S421>/Switch'
     */
    (void)Rte_Write_VeHTIR_e_HtrPwrLimit_IO_Cnt_Value
        (HTIR_ac_B.VeHTIR_e_HtrPwrLimit_IO_Cnt);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp' incorporates:
     *  Switch: '<S421>/Switch6'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrResis_PCB_OvrTemp);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA_Value(HTIR_ac_B.Gain_m);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrSelfProtect_Actv' incorporates:
     *  Switch: '<S421>/Switch7'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrSelfProtect_Actv_Value
        (HTIR_ac_B.VeHTIR_e_HVC_HtrSelfProtect_Actv);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrSelfProtect_Actv_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_HtrSelfProtect_Actv_FA_Value(HTIR_ac_B.Gain_a);

    /* Outport: '<Root>/VeHTIR_I_HVC_Htr_HV_CrntAct' */
    (void)Rte_Write_VeHTIR_I_HVC_Htr_HV_CrntAct_Value
        (HTIR_ac_B.VeHTIR_I_HVC_Htr_HV_CrntAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_CrntAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_CrntAct_FA_Value(HTIR_ac_B.Gain_l);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_HV_OutofRng' incorporates:
     *  Switch: '<S421>/Switch1'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_HV_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr_HV_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_OutofRng_FA_Value(HTIR_ac_B.Gain);

    /* Outport: '<Root>/VeHTIR_U_HVC_Htr_HV_VltgAct' */
    (void)Rte_Write_VeHTIR_U_HVC_Htr_HV_VltgAct_Value
        (HTIR_ac_B.VeHTIR_U_HVC_Htr_HV_VltgAct);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_VltgAct_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_VltgAct_FA_Value(HTIR_ac_B.Gain_gs);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_InterlockStat' incorporates:
     *  Switch: '<S421>/Switch23'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_InterlockStat_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr_InterlockStat);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_InterlockStat_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_InterlockStat_FA_Value(HTIR_ac_B.Gain_ij);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_LIN_ResErr' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_LIN_ResErr_Value
        (HTIR_ac_B.VeHTIR_b_HVC_Htr_LIN_ResErr);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_LV_OutofRng' incorporates:
     *  Switch: '<S421>/Switch3'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_LV_OutofRng_Value
        (HTIR_ac_B.VeHTIR_e_HVC_Htr_LV_OutofRng);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_LV_OutofRng_FA' */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_LV_OutofRng_FA_Value(HTIR_ac_B.Gain_g);

#endif

    /* End of SignalConversion generated from: '<S85>/HtrClntIn_TempSensFlt_AD' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_Cnt_HVC_HtrUnlckCntr(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_Cnt_HV_Htr4UnlckCntr(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_I_HVC_Htr_HV_CrntAct(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_I_HVC_Htr_HV_CrntAct' */
    /* Merge: '<Root>/Merge_107' incorporates:
     *  Chart: '<S3>/FsftHTIR_I_HVC_Htr_HV_CrntActChrt'
     *  SignalConversion generated from: '<S3>/VeHTIR_b_HVC_Htr_HV_CrntActFA_write'
     */
    /* Gateway: FsftHTIR_I_HVC_Htr_HV_CrntAct/FsftHTIR_I_HVC_Htr_HV_CrntActChrt */
    /* During: FsftHTIR_I_HVC_Htr_HV_CrntAct/FsftHTIR_I_HVC_Htr_HV_CrntActChrt */
    /* Entry Internal: FsftHTIR_I_HVC_Htr_HV_CrntAct/FsftHTIR_I_HVC_Htr_HV_CrntActChrt */
    /* Transition: '<S164>:2' */
    Rte_IrvWrite_FsftHTIR_I_HVC_Htr_HV_CrntAct_VeHTIR_b_HVC_Htr_HV_CrntActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_I_HVC_Htr_HV_CrntAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_I_HV_Htr2_HV_CrntAct(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_I_HV_Htr2_HV_CrntAct' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S4>/FsftHTIR_I_HV_Htr2_HV_CrntActChrt'
     *  SignalConversion generated from: '<S4>/VeHTIR_b_HV_Htr2_HV_CrntActFA_write'
     */
    /* Gateway: FsftHTIR_I_HV_Htr2_HV_CrntAct/FsftHTIR_I_HV_Htr2_HV_CrntActChrt */
    /* During: FsftHTIR_I_HV_Htr2_HV_CrntAct/FsftHTIR_I_HV_Htr2_HV_CrntActChrt */
    /* Entry Internal: FsftHTIR_I_HV_Htr2_HV_CrntAct/FsftHTIR_I_HV_Htr2_HV_CrntActChrt */
    /* Transition: '<S165>:2' */
    Rte_IrvWrite_FsftHTIR_I_HV_Htr2_HV_CrntAct_VeHTIR_b_HV_Htr2_HV_CrntActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_I_HV_Htr2_HV_CrntAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_I_HV_Htr3_HV_CrntAct(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_I_HV_Htr4_HV_CrntAct(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_I_HV_Htr4_HV_CrntAct' */
    /* Merge: '<Root>/Merge_66' incorporates:
     *  Chart: '<S6>/FsftHTIR_I_HV_Htr4_HV_CrntActChrt'
     *  SignalConversion generated from: '<S6>/VeHTIR_b_HV_Htr4_HV_CrntActFA_write'
     */
    /* Gateway: FsftHTIR_I_HV_Htr4_HV_CrntAct/FsftHTIR_I_HV_Htr4_HV_CrntActChrt */
    /* During: FsftHTIR_I_HV_Htr4_HV_CrntAct/FsftHTIR_I_HV_Htr4_HV_CrntActChrt */
    /* Entry Internal: FsftHTIR_I_HV_Htr4_HV_CrntAct/FsftHTIR_I_HV_Htr4_HV_CrntActChrt */
    /* Transition: '<S167>:2' */
    Rte_IrvWrite_FsftHTIR_I_HV_Htr4_HV_CrntAct_VeHTIR_b_HV_Htr4_HV_CrntActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_I_HV_Htr4_HV_CrntAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_P_HVC_HtrPwrAct(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_P_HVC_HtrPwrAct' */
    /* Merge: '<Root>/Merge_118' incorporates:
     *  Chart: '<S7>/FsftHTIR_P_HVC_HtrPwrActChrt'
     *  SignalConversion generated from: '<S7>/VeHTIR_b_HVC_HtrPwrActFA_write'
     */
    /* Gateway: FsftHTIR_P_HVC_HtrPwrAct/FsftHTIR_P_HVC_HtrPwrActChrt */
    /* During: FsftHTIR_P_HVC_HtrPwrAct/FsftHTIR_P_HVC_HtrPwrActChrt */
    /* Entry Internal: FsftHTIR_P_HVC_HtrPwrAct/FsftHTIR_P_HVC_HtrPwrActChrt */
    /* Transition: '<S168>:2' */
    Rte_IrvWrite_FsftHTIR_P_HVC_HtrPwrAct_VeHTIR_b_HVC_HtrPwrActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_P_HVC_HtrPwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_P_HVC_HtrPwrExpectd(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_P_HVC_HtrPwrExpectd' */
    /* Merge: '<Root>/Merge_115' incorporates:
     *  Chart: '<S8>/FsftHTIR_P_HVC_HtrPwrExpectdChrt'
     *  SignalConversion generated from: '<S8>/VeHTIR_b_HVC_HtrPwrExpectdFA_write'
     */
    /* Gateway: FsftHTIR_P_HVC_HtrPwrExpectd/FsftHTIR_P_HVC_HtrPwrExpectdChrt */
    /* During: FsftHTIR_P_HVC_HtrPwrExpectd/FsftHTIR_P_HVC_HtrPwrExpectdChrt */
    /* Entry Internal: FsftHTIR_P_HVC_HtrPwrExpectd/FsftHTIR_P_HVC_HtrPwrExpectdChrt */
    /* Transition: '<S169>:2' */
    Rte_IrvWrite_FsftHTIR_P_HVC_HtrPwrExpectd_VeHTIR_b_HVC_HtrPwrExpectdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_P_HVC_HtrPwrExpectd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_P_HV_Htr3PwrAct(void)
{

#if Rte_SysCon_Variant_HTIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_P_HV_Htr3PwrAct' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  Chart: '<S9>/FsftHTIR_P_HV_Htr3PwrActChrt'
     *  SignalConversion generated from: '<S9>/VeHTIR_b_HV_Htr3PwrActFA_write'
     */
    /* Gateway: FsftHTIR_P_HV_Htr3PwrAct/FsftHTIR_P_HV_Htr3PwrActChrt */
    /* During: FsftHTIR_P_HV_Htr3PwrAct/FsftHTIR_P_HV_Htr3PwrActChrt */
    /* Entry Internal: FsftHTIR_P_HV_Htr3PwrAct/FsftHTIR_P_HV_Htr3PwrActChrt */
    /* Transition: '<S170>:2' */
    Rte_IrvWrite_FsftHTIR_P_HV_Htr3PwrAct_VeHTIR_b_HV_Htr3PwrActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_P_HV_Htr3PwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_P_HV_Htr3PwrExpectd(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_P_HV_Htr4PwrAct(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_P_HV_Htr4PwrAct' */
    /* Merge: '<Root>/Merge_76' incorporates:
     *  Chart: '<S11>/FsftHTIR_P_HV_Htr4PwrActChrt'
     *  SignalConversion generated from: '<S11>/VeHTIR_b_HV_Htr4PwrActFA_write'
     */
    /* Gateway: FsftHTIR_P_HV_Htr4PwrAct/FsftHTIR_P_HV_Htr4PwrActChrt */
    /* During: FsftHTIR_P_HV_Htr4PwrAct/FsftHTIR_P_HV_Htr4PwrActChrt */
    /* Entry Internal: FsftHTIR_P_HV_Htr4PwrAct/FsftHTIR_P_HV_Htr4PwrActChrt */
    /* Transition: '<S172>:2' */
    Rte_IrvWrite_FsftHTIR_P_HV_Htr4PwrAct_VeHTIR_b_HV_Htr4PwrActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_P_HV_Htr4PwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_P_HV_Htr4PwrExpectd(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_P_HV_Htr4PwrExpectd' */
    /* Merge: '<Root>/Merge_73' incorporates:
     *  Chart: '<S12>/FsftHTIR_P_HV_Htr4PwrExpectdChrt'
     *  SignalConversion generated from: '<S12>/VeHTIR_b_HV_Htr4PwrExpectdFA_write'
     */
    /* Gateway: FsftHTIR_P_HV_Htr4PwrExpectd/FsftHTIR_P_HV_Htr4PwrExpectdChrt */
    /* During: FsftHTIR_P_HV_Htr4PwrExpectd/FsftHTIR_P_HV_Htr4PwrExpectdChrt */
    /* Entry Internal: FsftHTIR_P_HV_Htr4PwrExpectd/FsftHTIR_P_HV_Htr4PwrExpectdChrt */
    /* Transition: '<S173>:2' */
    Rte_IrvWrite_FsftHTIR_P_HV_Htr4PwrExpectd_VeHTIR_b_HV_Htr4PwrExpectdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_P_HV_Htr4PwrExpectd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_Pct_HV_Htr2PwrAct(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_Pct_HV_Htr2PwrAct' */
    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S13>/FsftHTIR_Pct_HV_Htr2PwrActChrt'
     *  SignalConversion generated from: '<S13>/VeHTIR_b_HV_Htr2PwrActFA_write'
     */
    /* Gateway: FsftHTIR_Pct_HV_Htr2PwrAct/FsftHTIR_Pct_HV_Htr2PwrActChrt */
    /* During: FsftHTIR_Pct_HV_Htr2PwrAct/FsftHTIR_Pct_HV_Htr2PwrActChrt */
    /* Entry Internal: FsftHTIR_Pct_HV_Htr2PwrAct/FsftHTIR_Pct_HV_Htr2PwrActChrt */
    /* Transition: '<S174>:2' */
    Rte_IrvWrite_FsftHTIR_Pct_HV_Htr2PwrAct_VeHTIR_b_HV_Htr2PwrActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_Pct_HV_Htr2PwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_Pct_HV_Htr2PwrExpectd(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_T_HVC_HtrClntIn_Temp(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_T_HVC_HtrClntIn_Temp' */
    /* Merge: '<Root>/Merge_113' incorporates:
     *  Chart: '<S15>/FsftHTIR_T_HVC_HtrClntIn_TempChrt'
     *  SignalConversion generated from: '<S15>/VeHTIR_b_HVC_HtrClntIn_TempFA_write'
     */
    /* Gateway: FsftHTIR_T_HVC_HtrClntIn_Temp/FsftHTIR_T_HVC_HtrClntIn_TempChrt */
    /* During: FsftHTIR_T_HVC_HtrClntIn_Temp/FsftHTIR_T_HVC_HtrClntIn_TempChrt */
    /* Entry Internal: FsftHTIR_T_HVC_HtrClntIn_Temp/FsftHTIR_T_HVC_HtrClntIn_TempChrt */
    /* Transition: '<S176>:2' */
    Rte_IrvWrite_FsftHTIR_T_HVC_HtrClntIn_Temp_VeHTIR_b_HVC_HtrClntIn_TempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_T_HVC_HtrClntIn_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_T_HVC_HtrClntOut_Temp(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_T_HVC_HtrClntOut_Temp' */
    /* Merge: '<Root>/Merge_111' incorporates:
     *  Chart: '<S16>/FsftHTIR_T_HVC_HtrClntOut_TempChrt'
     *  SignalConversion generated from: '<S16>/VeHTIR_b_HVC_HtrClntOut_TempFA_write'
     */
    /* Gateway: FsftHTIR_T_HVC_HtrClntOut_Temp/FsftHTIR_T_HVC_HtrClntOut_TempChrt */
    /* During: FsftHTIR_T_HVC_HtrClntOut_Temp/FsftHTIR_T_HVC_HtrClntOut_TempChrt */
    /* Entry Internal: FsftHTIR_T_HVC_HtrClntOut_Temp/FsftHTIR_T_HVC_HtrClntOut_TempChrt */
    /* Transition: '<S177>:2' */
    Rte_IrvWrite_FsftHTIR_T_HVC_HtrClntOut_Temp_VeHTIR_b_HVC_HtrClntOut_TempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_T_HVC_HtrClntOut_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_T_HV_Htr2_PCBTemp(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_T_HV_Htr2_PCBTemp' */
    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S17>/FsftHTIR_T_HV_Htr2_PCBTempChrt'
     *  SignalConversion generated from: '<S17>/VeHTIR_b_HV_Htr2_PCBTempFA_write'
     */
    /* Gateway: FsftHTIR_T_HV_Htr2_PCBTemp/FsftHTIR_T_HV_Htr2_PCBTempChrt */
    /* During: FsftHTIR_T_HV_Htr2_PCBTemp/FsftHTIR_T_HV_Htr2_PCBTempChrt */
    /* Entry Internal: FsftHTIR_T_HV_Htr2_PCBTemp/FsftHTIR_T_HV_Htr2_PCBTempChrt */
    /* Transition: '<S178>:2' */
    Rte_IrvWrite_FsftHTIR_T_HV_Htr2_PCBTemp_VeHTIR_b_HV_Htr2_PCBTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_T_HV_Htr2_PCBTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_T_HV_Htr3ClntIn_Temp(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_T_HV_Htr3ClntOut_Temp(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_T_HV_Htr4ClntIn_Temp(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_T_HV_Htr4ClntIn_Temp' */
    /* Merge: '<Root>/Merge_71' incorporates:
     *  Chart: '<S20>/FsftHTIR_T_HV_Htr4ClntIn_TempChrt'
     *  SignalConversion generated from: '<S20>/VeHTIR_b_HV_Htr4ClntIn_TempFA_write'
     */
    /* Gateway: FsftHTIR_T_HV_Htr4ClntIn_Temp/FsftHTIR_T_HV_Htr4ClntIn_TempChrt */
    /* During: FsftHTIR_T_HV_Htr4ClntIn_Temp/FsftHTIR_T_HV_Htr4ClntIn_TempChrt */
    /* Entry Internal: FsftHTIR_T_HV_Htr4ClntIn_Temp/FsftHTIR_T_HV_Htr4ClntIn_TempChrt */
    /* Transition: '<S181>:2' */
    Rte_IrvWrite_FsftHTIR_T_HV_Htr4ClntIn_Temp_VeHTIR_b_HV_Htr4ClntIn_TempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_T_HV_Htr4ClntIn_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_T_HV_Htr4ClntOut_Temp(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_T_HV_Htr4ClntOut_Temp' */
    /* Merge: '<Root>/Merge_69' incorporates:
     *  Chart: '<S21>/FsftHTIR_T_HV_Htr4ClntOut_TempChrt'
     *  SignalConversion generated from: '<S21>/VeHTIR_b_HV_Htr4ClntOut_TempFA_write'
     */
    /* Gateway: FsftHTIR_T_HV_Htr4ClntOut_Temp/FsftHTIR_T_HV_Htr4ClntOut_TempChrt */
    /* During: FsftHTIR_T_HV_Htr4ClntOut_Temp/FsftHTIR_T_HV_Htr4ClntOut_TempChrt */
    /* Entry Internal: FsftHTIR_T_HV_Htr4ClntOut_Temp/FsftHTIR_T_HV_Htr4ClntOut_TempChrt */
    /* Transition: '<S182>:2' */
    Rte_IrvWrite_FsftHTIR_T_HV_Htr4ClntOut_Temp_VeHTIR_b_HV_Htr4ClntOut_TempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_T_HV_Htr4ClntOut_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_T_Htr2CoreTemp(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_T_Htr2CoreTemp' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S22>/FsftHTIR_T_Htr2CoreTempChrt'
     *  SignalConversion generated from: '<S22>/VeHTIR_b_Htr2CoreTempFA_write'
     */
    /* Gateway: FsftHTIR_T_Htr2CoreTemp/FsftHTIR_T_Htr2CoreTempChrt */
    /* During: FsftHTIR_T_Htr2CoreTemp/FsftHTIR_T_Htr2CoreTempChrt */
    /* Entry Internal: FsftHTIR_T_Htr2CoreTemp/FsftHTIR_T_Htr2CoreTempChrt */
    /* Transition: '<S183>:2' */
    Rte_IrvWrite_FsftHTIR_T_Htr2CoreTemp_VeHTIR_b_Htr2CoreTempFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_T_Htr2CoreTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_U_HVC_Htr_HV_VltgAct(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_U_HVC_Htr_HV_VltgAct' */
    /* Merge: '<Root>/Merge_121' incorporates:
     *  Chart: '<S23>/FsftHTIR_U_HVC_Htr_HV_VltgActChrt'
     *  SignalConversion generated from: '<S23>/VeHTIR_b_HVC_Htr_HV_VltgActFA_write'
     */
    /* Gateway: FsftHTIR_U_HVC_Htr_HV_VltgAct/FsftHTIR_U_HVC_Htr_HV_VltgActChrt */
    /* During: FsftHTIR_U_HVC_Htr_HV_VltgAct/FsftHTIR_U_HVC_Htr_HV_VltgActChrt */
    /* Entry Internal: FsftHTIR_U_HVC_Htr_HV_VltgAct/FsftHTIR_U_HVC_Htr_HV_VltgActChrt */
    /* Transition: '<S184>:2' */
    Rte_IrvWrite_FsftHTIR_U_HVC_Htr_HV_VltgAct_VeHTIR_b_HVC_Htr_HV_VltgActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_U_HVC_Htr_HV_VltgAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_U_HV_Htr2_HV_VltgAct(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_U_HV_Htr2_HV_VltgAct' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S24>/FsftHTIR_U_HV_Htr2_HV_VltgActChrt'
     *  SignalConversion generated from: '<S24>/VeHTIR_b_HV_Htr2_HV_VltgActFA_write'
     */
    /* Gateway: FsftHTIR_U_HV_Htr2_HV_VltgAct/FsftHTIR_U_HV_Htr2_HV_VltgActChrt */
    /* During: FsftHTIR_U_HV_Htr2_HV_VltgAct/FsftHTIR_U_HV_Htr2_HV_VltgActChrt */
    /* Entry Internal: FsftHTIR_U_HV_Htr2_HV_VltgAct/FsftHTIR_U_HV_Htr2_HV_VltgActChrt */
    /* Transition: '<S185>:2' */
    Rte_IrvWrite_FsftHTIR_U_HV_Htr2_HV_VltgAct_VeHTIR_b_HV_Htr2_HV_VltgActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_U_HV_Htr2_HV_VltgAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_U_HV_Htr3_HV_VltgAct(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_U_HV_Htr4_HV_VltgAct(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_U_HV_Htr4_HV_VltgAct' */
    /* Merge: '<Root>/Merge_78' incorporates:
     *  Chart: '<S26>/FsftHTIR_U_HV_Htr4_HV_VltgActChrt'
     *  SignalConversion generated from: '<S26>/VeHTIR_b_HV_Htr4_HV_VltgActFA_write'
     */
    /* Gateway: FsftHTIR_U_HV_Htr4_HV_VltgAct/FsftHTIR_U_HV_Htr4_HV_VltgActChrt */
    /* During: FsftHTIR_U_HV_Htr4_HV_VltgAct/FsftHTIR_U_HV_Htr4_HV_VltgActChrt */
    /* Entry Internal: FsftHTIR_U_HV_Htr4_HV_VltgAct/FsftHTIR_U_HV_Htr4_HV_VltgActChrt */
    /* Transition: '<S187>:2' */
    Rte_IrvWrite_FsftHTIR_U_HV_Htr4_HV_VltgAct_VeHTIR_b_HV_Htr4_HV_VltgActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_U_HV_Htr4_HV_VltgAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrClntIn_TempSensFlt(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrClntIn_TempSensFlt' */
    /* Merge: '<Root>/Merge_93' incorporates:
     *  Chart: '<S27>/FsftHTIR_e_HVC_HtrClntIn_TempSensFltChrt'
     *  SignalConversion generated from: '<S27>/VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrClntIn_TempSensFlt/FsftHTIR_e_HVC_HtrClntIn_TempSensFltChrt */
    /* During: FsftHTIR_e_HVC_HtrClntIn_TempSensFlt/FsftHTIR_e_HVC_HtrClntIn_TempSensFltChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrClntIn_TempSensFlt/FsftHTIR_e_HVC_HtrClntIn_TempSensFltChrt */
    /* Transition: '<S188>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrClntIn_TempSensFlt_VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrClntIn_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrClntOut_TempSensFlt(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrClntOut_TempSensFlt' */
    /* Merge: '<Root>/Merge_91' incorporates:
     *  Chart: '<S28>/FsftHTIR_e_HVC_HtrClntOut_TempSensFltChrt'
     *  SignalConversion generated from: '<S28>/VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrClntOut_TempSensFlt/FsftHTIR_e_HVC_HtrClntOut_TempSensFltChrt */
    /* During: FsftHTIR_e_HVC_HtrClntOut_TempSensFlt/FsftHTIR_e_HVC_HtrClntOut_TempSensFltChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrClntOut_TempSensFlt/FsftHTIR_e_HVC_HtrClntOut_TempSensFltChrt */
    /* Transition: '<S189>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrClntOut_TempSensFlt_VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrClntOut_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrClntTemp_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrClntTemp_OutofRng' */
    /* Merge: '<Root>/Merge_125' incorporates:
     *  Chart: '<S29>/FsftHTIR_e_HVC_HtrClntTemp_OutofRngChrt'
     *  SignalConversion generated from: '<S29>/VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrClntTemp_OutofRng/FsftHTIR_e_HVC_HtrClntTemp_OutofRngChrt */
    /* During: FsftHTIR_e_HVC_HtrClntTemp_OutofRng/FsftHTIR_e_HVC_HtrClntTemp_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrClntTemp_OutofRng/FsftHTIR_e_HVC_HtrClntTemp_OutofRngChrt */
    /* Transition: '<S190>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrClntTemp_OutofRng_VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrClntTemp_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrCoreTemp_SensFlt(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrCoreTemp_SensFlt' */
    /* Merge: '<Root>/Merge_96' incorporates:
     *  Chart: '<S30>/FsftHTIR_e_HVC_HtrCoreTemp_SensFltChrt'
     *  SignalConversion generated from: '<S30>/VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrCoreTemp_SensFlt/FsftHTIR_e_HVC_HtrCoreTemp_SensFltChrt */
    /* During: FsftHTIR_e_HVC_HtrCoreTemp_SensFlt/FsftHTIR_e_HVC_HtrCoreTemp_SensFltChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrCoreTemp_SensFlt/FsftHTIR_e_HVC_HtrCoreTemp_SensFltChrt */
    /* Transition: '<S191>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrCoreTemp_SensFlt_VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrCoreTemp_SensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrDrvFlt(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrDrvFlt' */
    /* Merge: '<Root>/Merge_102' incorporates:
     *  Chart: '<S31>/FsftHTIR_e_HVC_HtrDrvFltChrt'
     *  SignalConversion generated from: '<S31>/VeHTIR_b_HVC_HtrDrvFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrDrvFlt/FsftHTIR_e_HVC_HtrDrvFltChrt */
    /* During: FsftHTIR_e_HVC_HtrDrvFlt/FsftHTIR_e_HVC_HtrDrvFltChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrDrvFlt/FsftHTIR_e_HVC_HtrDrvFltChrt */
    /* Transition: '<S192>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrDrvFlt_VeHTIR_b_HVC_HtrDrvFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrDrvFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrHighVol_Dwn(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrIntCom_Err(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrIntCom_Err' */
    /* Merge: '<Root>/Merge_85' incorporates:
     *  Chart: '<S33>/FsftHTIR_e_HVC_HtrIntCom_ErrChrt'
     *  SignalConversion generated from: '<S33>/VeHTIR_b_HVC_HtrIntCom_ErrFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrIntCom_Err/FsftHTIR_e_HVC_HtrIntCom_ErrChrt */
    /* During: FsftHTIR_e_HVC_HtrIntCom_Err/FsftHTIR_e_HVC_HtrIntCom_ErrChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrIntCom_Err/FsftHTIR_e_HVC_HtrIntCom_ErrChrt */
    /* Transition: '<S194>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrIntCom_Err_VeHTIR_b_HVC_HtrIntCom_ErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrIntCom_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrProcesMemory_Flt(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrProcesMemory_Flt' */
    /* Merge: '<Root>/Merge_104' incorporates:
     *  Chart: '<S34>/FsftHTIR_e_HVC_HtrProcesMemory_FltChrt'
     *  SignalConversion generated from: '<S34>/VeHTIR_b_HVC_HtrProcesMemory_FltFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrProcesMemory_Flt/FsftHTIR_e_HVC_HtrProcesMemory_FltChrt */
    /* During: FsftHTIR_e_HVC_HtrProcesMemory_Flt/FsftHTIR_e_HVC_HtrProcesMemory_FltChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrProcesMemory_Flt/FsftHTIR_e_HVC_HtrProcesMemory_FltChrt */
    /* Transition: '<S195>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrProcesMemory_Flt_VeHTIR_b_HVC_HtrProcesMemory_FltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrProcesMemory_Flt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp' */
    /* Merge: '<Root>/Merge_87' incorporates:
     *  Chart: '<S35>/FsftHTIR_e_HVC_HtrResis_PCB_OvrTempChrt'
     *  SignalConversion generated from: '<S35>/VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp/FsftHTIR_e_HVC_HtrResis_PCB_OvrTempChrt */
    /* During: FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp/FsftHTIR_e_HVC_HtrResis_PCB_OvrTempChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp/FsftHTIR_e_HVC_HtrResis_PCB_OvrTempChrt */
    /* Transition: '<S196>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp_VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_HtrSelfProtect_Actv(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_HtrSelfProtect_Actv' */
    /* Merge: '<Root>/Merge_89' incorporates:
     *  Chart: '<S36>/FsftHTIR_e_HVC_HtrSelfProtect_ActvChrt'
     *  SignalConversion generated from: '<S36>/VeHTIR_b_HVC_HtrSelfProtect_ActvFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_HtrSelfProtect_Actv/FsftHTIR_e_HVC_HtrSelfProtect_ActvChrt */
    /* During: FsftHTIR_e_HVC_HtrSelfProtect_Actv/FsftHTIR_e_HVC_HtrSelfProtect_ActvChrt */
    /* Entry Internal: FsftHTIR_e_HVC_HtrSelfProtect_Actv/FsftHTIR_e_HVC_HtrSelfProtect_ActvChrt */
    /* Transition: '<S197>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_HtrSelfProtect_Actv_VeHTIR_b_HVC_HtrSelfProtect_ActvFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_HtrSelfProtect_Actv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng' */
    /* Merge: '<Root>/Merge_98' incorporates:
     *  Chart: '<S37>/FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt'
     *  SignalConversion generated from: '<S37>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng/FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt */
    /* During: FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng/FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng/FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt */
    /* Transition: '<S198>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng_VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_Htr_HV_CrntOutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_HV_CrntOutofRng' */
    /* Merge: '<Root>/Merge_100' incorporates:
     *  Chart: '<S38>/FsftHTIR_e_HVC_Htr_HV_CrntOutofRngChrt'
     *  SignalConversion generated from: '<S38>/VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_Htr_HV_CrntOutofRng/FsftHTIR_e_HVC_Htr_HV_CrntOutofRngChrt */
    /* During: FsftHTIR_e_HVC_Htr_HV_CrntOutofRng/FsftHTIR_e_HVC_Htr_HV_CrntOutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HVC_Htr_HV_CrntOutofRng/FsftHTIR_e_HVC_Htr_HV_CrntOutofRngChrt */
    /* Transition: '<S199>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_Htr_HV_CrntOutofRng_VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_HV_CrntOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_Htr_HV_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_HV_OutofRng' */
    /* Merge: '<Root>/Merge_116' incorporates:
     *  Chart: '<S39>/FsftHTIR_e_HVC_Htr_HV_OutofRngChrt'
     *  SignalConversion generated from: '<S39>/VeHTIR_b_HVC_Htr_HV_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_Htr_HV_OutofRng/FsftHTIR_e_HVC_Htr_HV_OutofRngChrt */
    /* During: FsftHTIR_e_HVC_Htr_HV_OutofRng/FsftHTIR_e_HVC_Htr_HV_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HVC_Htr_HV_OutofRng/FsftHTIR_e_HVC_Htr_HV_OutofRngChrt */
    /* Transition: '<S200>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_Htr_HV_OutofRng_VeHTIR_b_HVC_Htr_HV_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_HV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_Htr_InterlockStat(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_InterlockStat' */
    /* Merge: '<Root>/Merge_128' incorporates:
     *  Chart: '<S40>/FsftHTIR_e_HVC_Htr_InterlockStatChrt'
     *  SignalConversion generated from: '<S40>/VeHTIR_b_HVC_Htr_InterlockStatFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_Htr_InterlockStat/FsftHTIR_e_HVC_Htr_InterlockStatChrt */
    /* During: FsftHTIR_e_HVC_Htr_InterlockStat/FsftHTIR_e_HVC_Htr_InterlockStatChrt */
    /* Entry Internal: FsftHTIR_e_HVC_Htr_InterlockStat/FsftHTIR_e_HVC_Htr_InterlockStatChrt */
    /* Transition: '<S201>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_Htr_InterlockStat_VeHTIR_b_HVC_Htr_InterlockStatFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_InterlockStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) FsftHTIR_e_HVC_Htr_LV_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_LV_OutofRng' */
    /* Merge: '<Root>/Merge_123' incorporates:
     *  Chart: '<S41>/FsftHTIR_e_HVC_Htr_LV_OutofRngChrt'
     *  SignalConversion generated from: '<S41>/VeHTIR_b_HVC_Htr_LV_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HVC_Htr_LV_OutofRng/FsftHTIR_e_HVC_Htr_LV_OutofRngChrt */
    /* During: FsftHTIR_e_HVC_Htr_LV_OutofRng/FsftHTIR_e_HVC_Htr_LV_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HVC_Htr_LV_OutofRng/FsftHTIR_e_HVC_Htr_LV_OutofRngChrt */
    /* Transition: '<S202>:2' */
    Rte_IrvWrite_FsftHTIR_e_HVC_Htr_LV_OutofRng_VeHTIR_b_HVC_Htr_LV_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HVC_Htr_LV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2ClntTemp_OutofRng(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2CoreTemp_SensFlt(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2CoreTemp_SensFlt' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S43>/FsftHTIR_e_HV_Htr2CoreTemp_SensFltChrt'
     *  SignalConversion generated from: '<S43>/VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2CoreTemp_SensFlt/FsftHTIR_e_HV_Htr2CoreTemp_SensFltChrt */
    /* During: FsftHTIR_e_HV_Htr2CoreTemp_SensFlt/FsftHTIR_e_HV_Htr2CoreTemp_SensFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2CoreTemp_SensFlt/FsftHTIR_e_HV_Htr2CoreTemp_SensFltChrt */
    /* Transition: '<S204>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2CoreTemp_SensFlt_VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2CoreTemp_SensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2Core_OvrTmp(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2Core_OvrTmp' */
    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S44>/FsftHTIR_e_HV_Htr2Core_OvrTmpChrt'
     *  SignalConversion generated from: '<S44>/VeHTIR_b_HV_Htr2Core_OvrTmpFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2Core_OvrTmp/FsftHTIR_e_HV_Htr2Core_OvrTmpChrt */
    /* During: FsftHTIR_e_HV_Htr2Core_OvrTmp/FsftHTIR_e_HV_Htr2Core_OvrTmpChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2Core_OvrTmp/FsftHTIR_e_HV_Htr2Core_OvrTmpChrt */
    /* Transition: '<S205>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2Core_OvrTmp_VeHTIR_b_HV_Htr2Core_OvrTmpFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2Core_OvrTmp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2DrvFlt(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2DrvFlt' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S45>/FsftHTIR_e_HV_Htr2DrvFltChrt'
     *  SignalConversion generated from: '<S45>/VeHTIR_b_HV_Htr2DrvFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2DrvFlt/FsftHTIR_e_HV_Htr2DrvFltChrt */
    /* During: FsftHTIR_e_HV_Htr2DrvFlt/FsftHTIR_e_HV_Htr2DrvFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2DrvFlt/FsftHTIR_e_HV_Htr2DrvFltChrt */
    /* Transition: '<S206>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2DrvFlt_VeHTIR_b_HV_Htr2DrvFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2DrvFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S46>/FsftHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt'
     *  SignalConversion generated from: '<S46>/VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt/FsftHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt */
    /* During: FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt/FsftHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt/FsftHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt */
    /* Transition: '<S207>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt_VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2IntCom_Err(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2IntCom_Err' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S47>/FsftHTIR_e_HV_Htr2IntCom_ErrChrt'
     *  SignalConversion generated from: '<S47>/VeHTIR_b_HV_Htr2IntCom_ErrFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2IntCom_Err/FsftHTIR_e_HV_Htr2IntCom_ErrChrt */
    /* During: FsftHTIR_e_HV_Htr2IntCom_Err/FsftHTIR_e_HV_Htr2IntCom_ErrChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2IntCom_Err/FsftHTIR_e_HV_Htr2IntCom_ErrChrt */
    /* Transition: '<S208>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2IntCom_Err_VeHTIR_b_HV_Htr2IntCom_ErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2IntCom_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S48>/FsftHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt'
     *  SignalConversion generated from: '<S48>/VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt/FsftHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt */
    /* During: FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt/FsftHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt/FsftHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt */
    /* Transition: '<S209>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt_VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2ProcesMemory_Flt(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2ProcesMemory_Flt' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S49>/FsftHTIR_e_HV_Htr2ProcesMemory_FltChrt'
     *  SignalConversion generated from: '<S49>/VeHTIR_b_HV_Htr2ProcesMemory_FltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2ProcesMemory_Flt/FsftHTIR_e_HV_Htr2ProcesMemory_FltChrt */
    /* During: FsftHTIR_e_HV_Htr2ProcesMemory_Flt/FsftHTIR_e_HV_Htr2ProcesMemory_FltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2ProcesMemory_Flt/FsftHTIR_e_HV_Htr2ProcesMemory_FltChrt */
    /* Transition: '<S210>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2ProcesMemory_Flt_VeHTIR_b_HV_Htr2ProcesMemory_FltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2ProcesMemory_Flt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S50>/FsftHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt'
     *  SignalConversion generated from: '<S50>/VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp/FsftHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt */
    /* During: FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp/FsftHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp/FsftHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt */
    /* Transition: '<S211>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp_VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2SelfProtect_Actv(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2SelfProtect_Actv' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S51>/FsftHTIR_e_HV_Htr2SelfProtect_ActvChrt'
     *  SignalConversion generated from: '<S51>/VeHTIR_b_HV_Htr2SelfProtect_ActvFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2SelfProtect_Actv/FsftHTIR_e_HV_Htr2SelfProtect_ActvChrt */
    /* During: FsftHTIR_e_HV_Htr2SelfProtect_Actv/FsftHTIR_e_HV_Htr2SelfProtect_ActvChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2SelfProtect_Actv/FsftHTIR_e_HV_Htr2SelfProtect_ActvChrt */
    /* Transition: '<S212>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2SelfProtect_Actv_VeHTIR_b_HV_Htr2SelfProtect_ActvFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2SelfProtect_Actv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2TmpOvrheatg(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2TmpOvrheatg' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S52>/FsftHTIR_e_HV_Htr2TmpOvrheatgChrt'
     *  SignalConversion generated from: '<S52>/VeHTIR_b_HV_Htr2TmpOvrheatgFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2TmpOvrheatg/FsftHTIR_e_HV_Htr2TmpOvrheatgChrt */
    /* During: FsftHTIR_e_HV_Htr2TmpOvrheatg/FsftHTIR_e_HV_Htr2TmpOvrheatgChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2TmpOvrheatg/FsftHTIR_e_HV_Htr2TmpOvrheatgChrt */
    /* Transition: '<S213>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2TmpOvrheatg_VeHTIR_b_HV_Htr2TmpOvrheatgFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2TmpOvrheatg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2_HV_CrntOutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2_HV_CrntOutofRng' */
    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S53>/FsftHTIR_e_HV_Htr2_HV_CrntOutofRngChrt'
     *  SignalConversion generated from: '<S53>/VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2_HV_CrntOutofRng/FsftHTIR_e_HV_Htr2_HV_CrntOutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr2_HV_CrntOutofRng/FsftHTIR_e_HV_Htr2_HV_CrntOutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2_HV_CrntOutofRng/FsftHTIR_e_HV_Htr2_HV_CrntOutofRngChrt */
    /* Transition: '<S214>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2_HV_CrntOutofRng_VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2_HV_CrntOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2_HV_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2_HV_OutofRng' */
    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S54>/FsftHTIR_e_HV_Htr2_HV_OutofRngChrt'
     *  SignalConversion generated from: '<S54>/VeHTIR_b_HV_Htr2_HV_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2_HV_OutofRng/FsftHTIR_e_HV_Htr2_HV_OutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr2_HV_OutofRng/FsftHTIR_e_HV_Htr2_HV_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2_HV_OutofRng/FsftHTIR_e_HV_Htr2_HV_OutofRngChrt */
    /* Transition: '<S215>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2_HV_OutofRng_VeHTIR_b_HV_Htr2_HV_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2_HV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr2_LV_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr2_LV_OutofRng' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S55>/FsftHTIR_e_HV_Htr2_LV_OutofRngChrt'
     *  SignalConversion generated from: '<S55>/VeHTIR_b_HV_Htr2_LV_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr2_LV_OutofRng/FsftHTIR_e_HV_Htr2_LV_OutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr2_LV_OutofRng/FsftHTIR_e_HV_Htr2_LV_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr2_LV_OutofRng/FsftHTIR_e_HV_Htr2_LV_OutofRngChrt */
    /* Transition: '<S216>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr2_LV_OutofRng_VeHTIR_b_HV_Htr2_LV_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr2_LV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3ClntIn_TempSensFlt(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3ClntOut_TempSensFlt(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3ClntTemp_OutofRng(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3Cntctr_StckClsd(void)
{

#if Rte_SysCon_Variant_HTIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr3Cntctr_StckClsd' */
    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S59>/FsftHTIR_e_HV_Htr3Cntctr_StckClsdChrt'
     *  SignalConversion generated from: '<S59>/VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr3Cntctr_StckClsd/FsftHTIR_e_HV_Htr3Cntctr_StckClsdChrt */
    /* During: FsftHTIR_e_HV_Htr3Cntctr_StckClsd/FsftHTIR_e_HV_Htr3Cntctr_StckClsdChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr3Cntctr_StckClsd/FsftHTIR_e_HV_Htr3Cntctr_StckClsdChrt */
    /* Transition: '<S220>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr3Cntctr_StckClsd_VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr3Cntctr_StckClsd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3CoreTemp_SensFlt(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3DrvFlt(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3HighVol_Dwn(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3IntCom_Err(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3ProcesMemory_Flt(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3Resis_PCB_OvrTemp(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3SelfProtect_Actv(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3_DCDC_VltgOutofRng(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3_HV_CrntOutofRng(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3_HV_OutofRng(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr3_LV_OutofRng(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4ClntIn_TempSensFlt(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ClntIn_TempSensFlt' */
    /* Merge: '<Root>/Merge_53' incorporates:
     *  Chart: '<S71>/FsftHTIR_e_HV_Htr4ClntIn_TempSensFltChrt'
     *  SignalConversion generated from: '<S71>/VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4ClntIn_TempSensFlt/FsftHTIR_e_HV_Htr4ClntIn_TempSensFltChrt */
    /* During: FsftHTIR_e_HV_Htr4ClntIn_TempSensFlt/FsftHTIR_e_HV_Htr4ClntIn_TempSensFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4ClntIn_TempSensFlt/FsftHTIR_e_HV_Htr4ClntIn_TempSensFltChrt */
    /* Transition: '<S232>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4ClntIn_TempSensFlt_VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ClntIn_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4ClntOut_TempSensFlt(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ClntOut_TempSensFlt' */
    /* Merge: '<Root>/Merge_51' incorporates:
     *  Chart: '<S72>/FsftHTIR_e_HV_Htr4ClntOut_TempSensFltChrt'
     *  SignalConversion generated from: '<S72>/VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4ClntOut_TempSensFlt/FsftHTIR_e_HV_Htr4ClntOut_TempSensFltChrt */
    /* During: FsftHTIR_e_HV_Htr4ClntOut_TempSensFlt/FsftHTIR_e_HV_Htr4ClntOut_TempSensFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4ClntOut_TempSensFlt/FsftHTIR_e_HV_Htr4ClntOut_TempSensFltChrt */
    /* Transition: '<S233>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4ClntOut_TempSensFlt_VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ClntOut_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4ClntTemp_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ClntTemp_OutofRng' */
    /* Merge: '<Root>/Merge_82' incorporates:
     *  Chart: '<S73>/FsftHTIR_e_HV_Htr4ClntTemp_OutofRngChrt'
     *  SignalConversion generated from: '<S73>/VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4ClntTemp_OutofRng/FsftHTIR_e_HV_Htr4ClntTemp_OutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr4ClntTemp_OutofRng/FsftHTIR_e_HV_Htr4ClntTemp_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4ClntTemp_OutofRng/FsftHTIR_e_HV_Htr4ClntTemp_OutofRngChrt */
    /* Transition: '<S234>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4ClntTemp_OutofRng_VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ClntTemp_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4CoreTemp_SensFlt(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4CoreTemp_SensFlt' */
    /* Merge: '<Root>/Merge_55' incorporates:
     *  Chart: '<S74>/FsftHTIR_e_HV_Htr4CoreTemp_SensFltChrt'
     *  SignalConversion generated from: '<S74>/VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4CoreTemp_SensFlt/FsftHTIR_e_HV_Htr4CoreTemp_SensFltChrt */
    /* During: FsftHTIR_e_HV_Htr4CoreTemp_SensFlt/FsftHTIR_e_HV_Htr4CoreTemp_SensFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4CoreTemp_SensFlt/FsftHTIR_e_HV_Htr4CoreTemp_SensFltChrt */
    /* Transition: '<S235>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4CoreTemp_SensFlt_VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4CoreTemp_SensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4DrvFlt(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4DrvFlt' */
    /* Merge: '<Root>/Merge_61' incorporates:
     *  Chart: '<S75>/FsftHTIR_e_HV_Htr4DrvFltChrt'
     *  SignalConversion generated from: '<S75>/VeHTIR_b_HV_Htr4DrvFltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4DrvFlt/FsftHTIR_e_HV_Htr4DrvFltChrt */
    /* During: FsftHTIR_e_HV_Htr4DrvFlt/FsftHTIR_e_HV_Htr4DrvFltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4DrvFlt/FsftHTIR_e_HV_Htr4DrvFltChrt */
    /* Transition: '<S236>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4DrvFlt_VeHTIR_b_HV_Htr4DrvFltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4DrvFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4HighVol_Dwn(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4IntCom_Err(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4IntCom_Err' */
    /* Merge: '<Root>/Merge_45' incorporates:
     *  Chart: '<S77>/FsftHTIR_e_HV_Htr4IntCom_ErrChrt'
     *  SignalConversion generated from: '<S77>/VeHTIR_b_HV_Htr4IntCom_ErrFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4IntCom_Err/FsftHTIR_e_HV_Htr4IntCom_ErrChrt */
    /* During: FsftHTIR_e_HV_Htr4IntCom_Err/FsftHTIR_e_HV_Htr4IntCom_ErrChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4IntCom_Err/FsftHTIR_e_HV_Htr4IntCom_ErrChrt */
    /* Transition: '<S238>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4IntCom_Err_VeHTIR_b_HV_Htr4IntCom_ErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4IntCom_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4ProcesMemory_Flt(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ProcesMemory_Flt' */
    /* Merge: '<Root>/Merge_63' incorporates:
     *  Chart: '<S78>/FsftHTIR_e_HV_Htr4ProcesMemory_FltChrt'
     *  SignalConversion generated from: '<S78>/VeHTIR_b_HV_Htr4ProcesMemory_FltFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4ProcesMemory_Flt/FsftHTIR_e_HV_Htr4ProcesMemory_FltChrt */
    /* During: FsftHTIR_e_HV_Htr4ProcesMemory_Flt/FsftHTIR_e_HV_Htr4ProcesMemory_FltChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4ProcesMemory_Flt/FsftHTIR_e_HV_Htr4ProcesMemory_FltChrt */
    /* Transition: '<S239>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4ProcesMemory_Flt_VeHTIR_b_HV_Htr4ProcesMemory_FltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4ProcesMemory_Flt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4Resis_PCB_OvrTemp(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4Resis_PCB_OvrTemp' */
    /* Merge: '<Root>/Merge_47' incorporates:
     *  Chart: '<S79>/FsftHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt'
     *  SignalConversion generated from: '<S79>/VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4Resis_PCB_OvrTemp/FsftHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt */
    /* During: FsftHTIR_e_HV_Htr4Resis_PCB_OvrTemp/FsftHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4Resis_PCB_OvrTemp/FsftHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt */
    /* Transition: '<S240>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4Resis_PCB_OvrTemp_VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4Resis_PCB_OvrTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4SelfProtect_Actv(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4SelfProtect_Actv' */
    /* Merge: '<Root>/Merge_49' incorporates:
     *  Chart: '<S80>/FsftHTIR_e_HV_Htr4SelfProtect_ActvChrt'
     *  SignalConversion generated from: '<S80>/VeHTIR_b_HV_Htr4SelfProtect_ActvFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4SelfProtect_Actv/FsftHTIR_e_HV_Htr4SelfProtect_ActvChrt */
    /* During: FsftHTIR_e_HV_Htr4SelfProtect_Actv/FsftHTIR_e_HV_Htr4SelfProtect_ActvChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4SelfProtect_Actv/FsftHTIR_e_HV_Htr4SelfProtect_ActvChrt */
    /* Transition: '<S241>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4SelfProtect_Actv_VeHTIR_b_HV_Htr4SelfProtect_ActvFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4SelfProtect_Actv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRng' */
    /* Merge: '<Root>/Merge_57' incorporates:
     *  Chart: '<S81>/FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt'
     *  SignalConversion generated from: '<S81>/VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRng/FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRng/FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRng/FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt */
    /* Transition: '<S242>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRng_VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_DCDC_VltgOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4_HV_CrntOutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_HV_CrntOutofRng' */
    /* Merge: '<Root>/Merge_59' incorporates:
     *  Chart: '<S82>/FsftHTIR_e_HV_Htr4_HV_CrntOutofRngChrt'
     *  SignalConversion generated from: '<S82>/VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4_HV_CrntOutofRng/FsftHTIR_e_HV_Htr4_HV_CrntOutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr4_HV_CrntOutofRng/FsftHTIR_e_HV_Htr4_HV_CrntOutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4_HV_CrntOutofRng/FsftHTIR_e_HV_Htr4_HV_CrntOutofRngChrt */
    /* Transition: '<S243>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4_HV_CrntOutofRng_VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_HV_CrntOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4_HV_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_HV_OutofRng' */
    /* Merge: '<Root>/Merge_74' incorporates:
     *  Chart: '<S83>/FsftHTIR_e_HV_Htr4_HV_OutofRngChrt'
     *  SignalConversion generated from: '<S83>/VeHTIR_b_HV_Htr4_HV_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4_HV_OutofRng/FsftHTIR_e_HV_Htr4_HV_OutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr4_HV_OutofRng/FsftHTIR_e_HV_Htr4_HV_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4_HV_OutofRng/FsftHTIR_e_HV_Htr4_HV_OutofRngChrt */
    /* Transition: '<S244>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4_HV_OutofRng_VeHTIR_b_HV_Htr4_HV_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_HV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) FsftHTIR_e_HV_Htr4_LV_OutofRng(void)
{

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_LV_OutofRng' */
    /* Merge: '<Root>/Merge_80' incorporates:
     *  Chart: '<S84>/FsftHTIR_e_HV_Htr4_LV_OutofRngChrt'
     *  SignalConversion generated from: '<S84>/VeHTIR_b_HV_Htr4_LV_OutofRngFA_write'
     */
    /* Gateway: FsftHTIR_e_HV_Htr4_LV_OutofRng/FsftHTIR_e_HV_Htr4_LV_OutofRngChrt */
    /* During: FsftHTIR_e_HV_Htr4_LV_OutofRng/FsftHTIR_e_HV_Htr4_LV_OutofRngChrt */
    /* Entry Internal: FsftHTIR_e_HV_Htr4_LV_OutofRng/FsftHTIR_e_HV_Htr4_LV_OutofRngChrt */
    /* Transition: '<S245>:2' */
    Rte_IrvWrite_FsftHTIR_e_HV_Htr4_LV_OutofRng_VeHTIR_b_HV_Htr4_LV_OutofRngFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHTIR_e_HV_Htr4_LV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) IOControl_IOCD006_HigVolCooHeater(void)
{

#if Rte_SysCon_Variant_HTIR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCo_p;

#endif

#if Rte_SysCon_Variant_HTIR_1

    TeHTIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD006_HigVolCooHeater' */
    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_HVC_HtrPwrLimit' */
    /* SignalConversion generated from: '<S158>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD006_HigVolCooHeater_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCo_p);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_HVC_HtrPwrLimit' */

    /* Inport: '<Root>/VeDCAB_W_IOCD006_HigVolCooHeater' */
    (void)Rte_Read_VeDCAB_W_IOCD006_HigVolCooHeater_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_HVC_HtrPwrLimit' */
    /* Switch: '<S158>/Switch' incorporates:
     *  Constant: '<S705>/Constant'
     *  Constant: '<S706>/Constant'
     *  Constant: '<S708>/Constant'
     *  Constant: '<S709>/Constant'
     *  RelationalOperator: '<S158>/Equal'
     *  RelationalOperator: '<S158>/Equal1'
     *  Switch: '<S158>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_p) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_p) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S158>/Switch1' incorporates:
         *  Constant: '<S707>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S158>/Switch' */

    /* Merge: '<Root>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S158>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD006_HigVolCooHeater_VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/VeHTIF_P_HVC_HtrPwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S158>/VeDCAB_W_IOCtrlD006CooltHtrPwr'
     *  SignalConversion generated from: '<S158>/VeHTIF_W_HVC_HtrPwrLimit_write'
     */
    Rte_IrvWrite_IOControl_IOCD006_HigVolCooHeater_VeHTIF_P_HVC_HtrPwrLimit_write_IRV
        (tmpRead);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_HVC_HtrPwrLimit' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD006_HigVolCooHeater' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) IOControl_IOCD01A_BatCooHea(void)
{

#if Rte_SysCon_Variant_HTIR_4

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCo_f;

#endif

#if Rte_SysCon_Variant_HTIR_4

    TeHTIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01A_BatCooHea' */
    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_HV_Htr4PwrLimit' */
    /* SignalConversion generated from: '<S160>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD01A_BatCooHea_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCo_f);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_HV_Htr4PwrLimit' */

    /* Inport: '<Root>/VeDCAB_W_IOCD01A_BatCooHea' */
    (void)Rte_Read_VeDCAB_W_IOCD01A_BatCooHea_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_HV_Htr4PwrLimit' */
    /* Switch: '<S160>/Switch' incorporates:
     *  Constant: '<S715>/Constant'
     *  Constant: '<S716>/Constant'
     *  Constant: '<S718>/Constant'
     *  Constant: '<S719>/Constant'
     *  RelationalOperator: '<S160>/Equal'
     *  RelationalOperator: '<S160>/Equal1'
     *  Switch: '<S160>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_f) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_f) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S717>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S160>/Switch' */

    /* Merge: '<Root>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S160>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD01A_BatCooHea_VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/VeHTIF_P_HV_Htr4PwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S160>/VeDCAB_W_IOCD01A_BatCooHea'
     *  SignalConversion generated from: '<S160>/VeHTIF_W_HV_Htr4PwrLimit_write'
     */
    Rte_IrvWrite_IOControl_IOCD01A_BatCooHea_VeHTIF_P_HV_Htr4PwrLimit_write_IRV
        (tmpRead);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_HV_Htr4PwrLimit' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01A_BatCooHea' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) IOControl_IOCD01E_AirHeaCon(void)
{

#if Rte_SysCon_Variant_HTIR_2

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCont;

#endif

#if Rte_SysCon_Variant_HTIR_2

    TeHTIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01E_AirHeaCon' */
    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_HV_Htr2PwrLimit' */
    /* SignalConversion generated from: '<S159>/VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD01E_AirHeaCon_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCont);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_HV_Htr2PwrLimit' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD01E_AirHeaCon' */
    (void)Rte_Read_VeDCAB_Pct_IOCD01E_AirHeaCon_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/Runnable_DVC_HV_Htr2PwrLimit' */
    /* Switch: '<S159>/Switch' incorporates:
     *  Constant: '<S710>/Constant'
     *  Constant: '<S711>/Constant'
     *  Constant: '<S713>/Constant'
     *  Constant: '<S714>/Constant'
     *  RelationalOperator: '<S159>/Equal'
     *  RelationalOperator: '<S159>/Equal1'
     *  Switch: '<S159>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S159>/Switch1' incorporates:
         *  Constant: '<S712>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeHTIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S159>/Switch' */

    /* Merge: '<Root>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S159>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD01E_AirHeaCon_VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/VeHTIF_Pct_HV_Htr2PwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S159>/VeDCAB_Pct_IOCD01E_AirHeaCon'
     *  SignalConversion generated from: '<S159>/VeHTIF_Pct_HV_Htr2PwrLimit_write'
     */
    Rte_IrvWrite_IOControl_IOCD01E_AirHeaCon_VeHTIF_Pct_HV_Htr2PwrLimit_write_IRV
        (tmpRead);

    /* End of Outputs for SubSystem: '<Root>/Runnable_DVC_HV_Htr2PwrLimit' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01E_AirHeaCon' */
#endif

}

#endif

/* Output function */
FUNC(void, HTIR_CODE) PokeHTIF_DVC_HV_Htr3PwrLimit(VAR(TeHTIR_e_IO_CntrlSt,
    AUTOMATIC) LeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt, VAR(float32, AUTOMATIC)
    LeHTIF_P_HV_Htr3PwrLimit)
{

#if !Rte_SysCon_Variant_HTIR_3

    UNUSED_PARAMETER(LeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt);

#endif

#if !Rte_SysCon_Variant_HTIR_3

    UNUSED_PARAMETER(LeHTIF_P_HV_Htr3PwrLimit);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIF_DVC_HV_Htr3PwrLimit' */
    /* SignalConversion generated from: '<S87>/PokeHTIF_DVC_HV_Htr3PwrLimitChrt' incorporates:
     *  SignalConversion generated from: '<S87>/VeHTIF_P_HV_Htr3PwrLimit_write'
     *  SignalConversion generated from: '<S87>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write'
     */
    /* Gateway: PokeHTIF_DVC_HV_Htr3PwrLimit/PokeHTIF_DVC_HV_Htr3PwrLimitChrt */
    /* During: PokeHTIF_DVC_HV_Htr3PwrLimit/PokeHTIF_DVC_HV_Htr3PwrLimitChrt */
    /* Entry Internal: PokeHTIF_DVC_HV_Htr3PwrLimit/PokeHTIF_DVC_HV_Htr3PwrLimitChrt */
    /* Transition: '<S634>:2' */
#if Rte_SysCon_Variant_HTIR_3

    /* Merge: '<Root>/VeHTIF_P_HV_Htr3PwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S87>/LeHTIF_P_HV_Htr3PwrLimit'
     */
    Rte_IrvWrite_PokeHTIF_DVC_HV_Htr3PwrLimit_VeHTIF_P_HV_Htr3PwrLimit_write_IRV
        (LeHTIF_P_HV_Htr3PwrLimit);

    /* Merge: '<Root>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S87>/LeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt'
     */
    Rte_IrvWrite_PokeHTIF_DVC_HV_Htr3PwrLimit_VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write_IRV
        (LeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt);

#endif

    /* End of SignalConversion generated from: '<S87>/PokeHTIF_DVC_HV_Htr3PwrLimitChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeHTIF_DVC_HV_Htr3PwrLimit' */
}

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_Cnt_HVC_HtrUnlckCntr(VAR(uint8, AUTOMATIC)
    LeHTIR_Cnt_HVC_HtrUnlckCntr, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_HtrUnlckCntrFA)
{

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_Cnt_HVC_HtrUnlckCntr);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrUnlckCntrFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_Cnt_HVC_HtrUnlckCntr' */
    /* Chart: '<S88>/PokeHTIR_Cnt_HVC_HtrUnlckCntrChrt' incorporates:
     *  SignalConversion generated from: '<S88>/LeHTIR_Cnt_HVC_HtrUnlckCntr'
     *  SignalConversion generated from: '<S88>/LeHTIR_b_HVC_HtrUnlckCntrFA'
     */
    /* Gateway: PokeHTIR_Cnt_HVC_HtrUnlckCntr/PokeHTIR_Cnt_HVC_HtrUnlckCntrChrt */
    /* During: PokeHTIR_Cnt_HVC_HtrUnlckCntr/PokeHTIR_Cnt_HVC_HtrUnlckCntrChrt */
    /* Entry Internal: PokeHTIR_Cnt_HVC_HtrUnlckCntr/PokeHTIR_Cnt_HVC_HtrUnlckCntrChrt */
    /* Transition: '<S635>:2' */
    if (!LeHTIR_b_HVC_HtrUnlckCntrFA)
    {
        /* Transition: '<S635>:3' */
        /* Transition: '<S635>:15' */
        HTIR_ac_B.LeHTIR_Cnt_HVC_HtrUnlckCntr_out = LeHTIR_Cnt_HVC_HtrUnlckCntr;

        /* Transition: '<S635>:18' */
    }
    else
    {
        /* Transition: '<S635>:4' */
    }

    /* End of Chart: '<S88>/PokeHTIR_Cnt_HVC_HtrUnlckCntrChrt' */

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S88>/VeHTIR_Cnt_HVC_HtrUnlckCntr_write'
     * */
    Rte_IrvWrite_PokeHTIR_Cnt_HVC_HtrUnlckCntr_HVC_Htr_UnlckCntr_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_Cnt_HVC_HtrUnlckCntr_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_Cnt_HVC_HtrUnlckCntr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_Cnt_HV_Htr4UnlckCntr(VAR(uint8, AUTOMATIC)
    LeHTIR_Cnt_HV_Htr4UnlckCntr, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4UnlckCntrFA)
{
    UNUSED_PARAMETER(LeHTIR_Cnt_HV_Htr4UnlckCntr);
    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4UnlckCntrFA);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_I_HVC_Htr_HV_CrntAct(VAR(float32, AUTOMATIC)
    LeHTIR_I_HVC_Htr_HV_CrntAct, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_Htr_HV_CrntActFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_Htr_HV_CrntActFA_out_l;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_I_HVC_Htr_HV_CrntAct);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_Htr_HV_CrntActFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_I_HVC_Htr_HV_CrntAct' */
    /* Chart: '<S90>/PokeHTIR_I_HVC_Htr_HV_CrntActChrt' incorporates:
     *  SignalConversion generated from: '<S90>/LeHTIR_I_HVC_Htr_HV_CrntAct'
     *  SignalConversion generated from: '<S90>/LeHTIR_b_HVC_Htr_HV_CrntActFA'
     */
    /* Gateway: PokeHTIR_I_HVC_Htr_HV_CrntAct/PokeHTIR_I_HVC_Htr_HV_CrntActChrt */
    /* During: PokeHTIR_I_HVC_Htr_HV_CrntAct/PokeHTIR_I_HVC_Htr_HV_CrntActChrt */
    /* Entry Internal: PokeHTIR_I_HVC_Htr_HV_CrntAct/PokeHTIR_I_HVC_Htr_HV_CrntActChrt */
    /* Transition: '<S637>:2' */
    if (!LeHTIR_b_HVC_Htr_HV_CrntActFA)
    {
        /* Transition: '<S637>:3' */
        /* Transition: '<S637>:15' */
        HTIR_ac_B.LeHTIR_I_HVC_Htr_HV_CrntAct_out = LeHTIR_I_HVC_Htr_HV_CrntAct;
        rtb_LeHTIR_b_HVC_Htr_HV_CrntActFA_out_l = false;

        /* Transition: '<S637>:18' */
    }
    else
    {
        /* Transition: '<S637>:4' */
        rtb_LeHTIR_b_HVC_Htr_HV_CrntActFA_out_l = true;
    }

    /* End of Chart: '<S90>/PokeHTIR_I_HVC_Htr_HV_CrntActChrt' */

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S90>/VeHTIR_I_HVC_Htr_HV_CrntAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_I_HVC_Htr_HV_CrntAct_HV_CrntAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_I_HVC_Htr_HV_CrntAct_out);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S90>/VeHTIR_b_HVC_Htr_HV_CrntActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_I_HVC_Htr_HV_CrntAct_VeHTIR_b_HVC_Htr_HV_CrntActFA_write_IRV
        (rtb_LeHTIR_b_HVC_Htr_HV_CrntActFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_I_HVC_Htr_HV_CrntAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_I_HV_Htr2_HV_CrntAct(VAR(float32, AUTOMATIC)
    LeHTIR_I_HV_Htr2_HV_CrntAct, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr2_HV_CrntActFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2_HV_CrntActFA_out_i;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_I_HV_Htr2_HV_CrntAct);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2_HV_CrntActFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_I_HV_Htr2_HV_CrntAct' */
    /* Chart: '<S91>/PokeHTIR_I_HV_Htr2_HV_CrntActChrt' incorporates:
     *  SignalConversion generated from: '<S91>/LeHTIR_I_HV_Htr2_HV_CrntAct'
     *  SignalConversion generated from: '<S91>/LeHTIR_b_HV_Htr2_HV_CrntActFA'
     */
    /* Gateway: PokeHTIR_I_HV_Htr2_HV_CrntAct/PokeHTIR_I_HV_Htr2_HV_CrntActChrt */
    /* During: PokeHTIR_I_HV_Htr2_HV_CrntAct/PokeHTIR_I_HV_Htr2_HV_CrntActChrt */
    /* Entry Internal: PokeHTIR_I_HV_Htr2_HV_CrntAct/PokeHTIR_I_HV_Htr2_HV_CrntActChrt */
    /* Transition: '<S638>:2' */
    if (!LeHTIR_b_HV_Htr2_HV_CrntActFA)
    {
        /* Transition: '<S638>:3' */
        /* Transition: '<S638>:15' */
        HTIR_ac_B.LeHTIR_I_HV_Htr2_HV_CrntAct_out = LeHTIR_I_HV_Htr2_HV_CrntAct;
        rtb_LeHTIR_b_HV_Htr2_HV_CrntActFA_out_i = false;

        /* Transition: '<S638>:18' */
    }
    else
    {
        /* Transition: '<S638>:4' */
        rtb_LeHTIR_b_HV_Htr2_HV_CrntActFA_out_i = true;
    }

    /* End of Chart: '<S91>/PokeHTIR_I_HV_Htr2_HV_CrntActChrt' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S91>/VeHTIR_I_HV_Htr2_HV_CrntAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_I_HV_Htr2_HV_CrntAct_Htr2HV_CrntAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_I_HV_Htr2_HV_CrntAct_out);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S91>/VeHTIR_b_HV_Htr2_HV_CrntActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_I_HV_Htr2_HV_CrntAct_VeHTIR_b_HV_Htr2_HV_CrntActFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2_HV_CrntActFA_out_i);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_I_HV_Htr2_HV_CrntAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_I_HV_Htr4_HV_CrntAct(VAR(float32, AUTOMATIC)
    LeHTIR_I_HV_Htr4_HV_CrntAct, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4_HV_CrntActFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4_HV_CrntActFA_out_l;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_I_HV_Htr4_HV_CrntAct);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4_HV_CrntActFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_I_HV_Htr4_HV_CrntAct' */
    /* Chart: '<S92>/PokeHTIR_I_HV_Htr4_HV_CrntActChrt' incorporates:
     *  SignalConversion generated from: '<S92>/LeHTIR_I_HV_Htr4_HV_CrntAct'
     *  SignalConversion generated from: '<S92>/LeHTIR_b_HV_Htr4_HV_CrntActFA'
     */
    /* Gateway: PokeHTIR_I_HV_Htr4_HV_CrntAct/PokeHTIR_I_HV_Htr4_HV_CrntActChrt */
    /* During: PokeHTIR_I_HV_Htr4_HV_CrntAct/PokeHTIR_I_HV_Htr4_HV_CrntActChrt */
    /* Entry Internal: PokeHTIR_I_HV_Htr4_HV_CrntAct/PokeHTIR_I_HV_Htr4_HV_CrntActChrt */
    /* Transition: '<S639>:2' */
    if (!LeHTIR_b_HV_Htr4_HV_CrntActFA)
    {
        /* Transition: '<S639>:3' */
        /* Transition: '<S639>:15' */
        HTIR_ac_B.LeHTIR_I_HV_Htr4_HV_CrntAct_out = LeHTIR_I_HV_Htr4_HV_CrntAct;
        rtb_LeHTIR_b_HV_Htr4_HV_CrntActFA_out_l = false;

        /* Transition: '<S639>:18' */
    }
    else
    {
        /* Transition: '<S639>:4' */
        rtb_LeHTIR_b_HV_Htr4_HV_CrntActFA_out_l = true;
    }

    /* End of Chart: '<S92>/PokeHTIR_I_HV_Htr4_HV_CrntActChrt' */

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S92>/VeHTIR_I_HV_Htr4_HV_CrntAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_I_HV_Htr4_HV_CrntAct_Htr4HV_CrntAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_I_HV_Htr4_HV_CrntAct_out);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S92>/VeHTIR_b_HV_Htr4_HV_CrntActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_I_HV_Htr4_HV_CrntAct_VeHTIR_b_HV_Htr4_HV_CrntActFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4_HV_CrntActFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_I_HV_Htr4_HV_CrntAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_P_HVC_HtrPwrAct(VAR(float32, AUTOMATIC)
    LeHTIR_P_HVC_HtrPwrAct, VAR(boolean, AUTOMATIC) LeHTIR_b_HVC_HtrPwrActFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrPwrActFA_out_j;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_P_HVC_HtrPwrAct);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrPwrActFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_P_HVC_HtrPwrAct' */
    /* Chart: '<S93>/PokeHTIR_P_HVC_HtrPwrActChrt' incorporates:
     *  SignalConversion generated from: '<S93>/LeHTIR_P_HVC_HtrPwrAct'
     *  SignalConversion generated from: '<S93>/LeHTIR_b_HVC_HtrPwrActFA'
     */
    /* Gateway: PokeHTIR_P_HVC_HtrPwrAct/PokeHTIR_P_HVC_HtrPwrActChrt */
    /* During: PokeHTIR_P_HVC_HtrPwrAct/PokeHTIR_P_HVC_HtrPwrActChrt */
    /* Entry Internal: PokeHTIR_P_HVC_HtrPwrAct/PokeHTIR_P_HVC_HtrPwrActChrt */
    /* Transition: '<S640>:2' */
    if (!LeHTIR_b_HVC_HtrPwrActFA)
    {
        /* Transition: '<S640>:3' */
        /* Transition: '<S640>:15' */
        HTIR_ac_B.LeHTIR_P_HVC_HtrPwrAct_out = LeHTIR_P_HVC_HtrPwrAct;
        rtb_LeHTIR_b_HVC_HtrPwrActFA_out_j = false;

        /* Transition: '<S640>:18' */
    }
    else
    {
        /* Transition: '<S640>:4' */
        rtb_LeHTIR_b_HVC_HtrPwrActFA_out_j = true;
    }

    /* End of Chart: '<S93>/PokeHTIR_P_HVC_HtrPwrActChrt' */

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S93>/VeHTIR_P_HVC_HtrPwrAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HVC_HtrPwrAct_HtrPwrAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_P_HVC_HtrPwrAct_out);

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S93>/VeHTIR_b_HVC_HtrPwrActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HVC_HtrPwrAct_VeHTIR_b_HVC_HtrPwrActFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrPwrActFA_out_j);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_P_HVC_HtrPwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_P_HVC_HtrPwrExpectd(VAR(float32, AUTOMATIC)
    LeHTIR_P_HVC_HtrPwrExpectd, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_HtrPwrExpectdFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrPwrExpectdFA_out_h;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_P_HVC_HtrPwrExpectd);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrPwrExpectdFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_P_HVC_HtrPwrExpectd' */
    /* Chart: '<S94>/PokeHTIR_P_HVC_HtrPwrExpectdChrt' incorporates:
     *  SignalConversion generated from: '<S94>/LeHTIR_P_HVC_HtrPwrExpectd'
     *  SignalConversion generated from: '<S94>/LeHTIR_b_HVC_HtrPwrExpectdFA'
     */
    /* Gateway: PokeHTIR_P_HVC_HtrPwrExpectd/PokeHTIR_P_HVC_HtrPwrExpectdChrt */
    /* During: PokeHTIR_P_HVC_HtrPwrExpectd/PokeHTIR_P_HVC_HtrPwrExpectdChrt */
    /* Entry Internal: PokeHTIR_P_HVC_HtrPwrExpectd/PokeHTIR_P_HVC_HtrPwrExpectdChrt */
    /* Transition: '<S641>:2' */
    if (!LeHTIR_b_HVC_HtrPwrExpectdFA)
    {
        /* Transition: '<S641>:3' */
        /* Transition: '<S641>:15' */
        HTIR_ac_B.LeHTIR_P_HVC_HtrPwrExpectd_out = LeHTIR_P_HVC_HtrPwrExpectd;
        rtb_LeHTIR_b_HVC_HtrPwrExpectdFA_out_h = false;

        /* Transition: '<S641>:18' */
    }
    else
    {
        /* Transition: '<S641>:4' */
        rtb_LeHTIR_b_HVC_HtrPwrExpectdFA_out_h = true;
    }

    /* End of Chart: '<S94>/PokeHTIR_P_HVC_HtrPwrExpectdChrt' */

    /* Merge: '<Root>/Merge_114' incorporates:
     *  SignalConversion generated from: '<S94>/VeHTIR_P_HVC_HtrPwrExpectd_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HVC_HtrPwrExpectd_HtrPwrExpectd_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_P_HVC_HtrPwrExpectd_out);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S94>/VeHTIR_b_HVC_HtrPwrExpectdFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HVC_HtrPwrExpectd_VeHTIR_b_HVC_HtrPwrExpectdFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrPwrExpectdFA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_P_HVC_HtrPwrExpectd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) PokeHTIR_P_HV_Htr3PwrAct(VAR(float32, AUTOMATIC)
    LeHTIR_P_HV_Htr3PwrAct, VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr3PwrActFA)
{

#if Rte_SysCon_Variant_HTIR_3

    boolean rtb_LeHTIR_b_HV_Htr3PwrActFA_out_d;

#endif

#if !Rte_SysCon_Variant_HTIR_3

    UNUSED_PARAMETER(LeHTIR_P_HV_Htr3PwrAct);

#endif

#if !Rte_SysCon_Variant_HTIR_3

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr3PwrActFA);

#endif

#if Rte_SysCon_Variant_HTIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_P_HV_Htr3PwrAct' */
    /* Chart: '<S95>/PokeHTIR_P_HV_Htr3PwrActChrt' incorporates:
     *  SignalConversion generated from: '<S95>/LeHTIR_P_HV_Htr3PwrAct'
     *  SignalConversion generated from: '<S95>/LeHTIR_b_HV_Htr3PwrActFA'
     */
    /* Gateway: PokeHTIR_P_HV_Htr3PwrAct/PokeHTIR_P_HV_Htr3PwrActChrt */
    /* During: PokeHTIR_P_HV_Htr3PwrAct/PokeHTIR_P_HV_Htr3PwrActChrt */
    /* Entry Internal: PokeHTIR_P_HV_Htr3PwrAct/PokeHTIR_P_HV_Htr3PwrActChrt */
    /* Transition: '<S642>:2' */
    if (!LeHTIR_b_HV_Htr3PwrActFA)
    {
        /* Transition: '<S642>:3' */
        /* Transition: '<S642>:15' */
        HTIR_ac_B.LeHTIR_P_HV_Htr3PwrAct_out = LeHTIR_P_HV_Htr3PwrAct;
        rtb_LeHTIR_b_HV_Htr3PwrActFA_out_d = false;

        /* Transition: '<S642>:18' */
    }
    else
    {
        /* Transition: '<S642>:4' */
        rtb_LeHTIR_b_HV_Htr3PwrActFA_out_d = true;
    }

    /* End of Chart: '<S95>/PokeHTIR_P_HV_Htr3PwrActChrt' */

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S95>/VeHTIR_P_HV_Htr3PwrAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HV_Htr3PwrAct_Htr3PwrAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_P_HV_Htr3PwrAct_out);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S95>/VeHTIR_b_HV_Htr3PwrActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HV_Htr3PwrAct_VeHTIR_b_HV_Htr3PwrActFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr3PwrActFA_out_d);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_P_HV_Htr3PwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_P_HV_Htr4PwrAct(VAR(float32, AUTOMATIC)
    LeHTIR_P_HV_Htr4PwrAct, VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr4PwrActFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4PwrActFA_out_a;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_P_HV_Htr4PwrAct);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4PwrActFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_P_HV_Htr4PwrAct' */
    /* Chart: '<S96>/PokeHTIR_P_HV_Htr4PwrActChrt' incorporates:
     *  SignalConversion generated from: '<S96>/LeHTIR_P_HV_Htr4PwrAct'
     *  SignalConversion generated from: '<S96>/LeHTIR_b_HV_Htr4PwrActFA'
     */
    /* Gateway: PokeHTIR_P_HV_Htr4PwrAct/PokeHTIR_P_HV_Htr4PwrActChrt */
    /* During: PokeHTIR_P_HV_Htr4PwrAct/PokeHTIR_P_HV_Htr4PwrActChrt */
    /* Entry Internal: PokeHTIR_P_HV_Htr4PwrAct/PokeHTIR_P_HV_Htr4PwrActChrt */
    /* Transition: '<S643>:2' */
    if (!LeHTIR_b_HV_Htr4PwrActFA)
    {
        /* Transition: '<S643>:3' */
        /* Transition: '<S643>:15' */
        HTIR_ac_B.LeHTIR_P_HV_Htr4PwrAct_out = LeHTIR_P_HV_Htr4PwrAct;
        rtb_LeHTIR_b_HV_Htr4PwrActFA_out_a = false;

        /* Transition: '<S643>:18' */
    }
    else
    {
        /* Transition: '<S643>:4' */
        rtb_LeHTIR_b_HV_Htr4PwrActFA_out_a = true;
    }

    /* End of Chart: '<S96>/PokeHTIR_P_HV_Htr4PwrActChrt' */

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S96>/VeHTIR_P_HV_Htr4PwrAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HV_Htr4PwrAct_Htr4PwrAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_P_HV_Htr4PwrAct_out);

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S96>/VeHTIR_b_HV_Htr4PwrActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HV_Htr4PwrAct_VeHTIR_b_HV_Htr4PwrActFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4PwrActFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_P_HV_Htr4PwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_P_HV_Htr4PwrExpectd(VAR(float32, AUTOMATIC)
    LeHTIR_P_HV_Htr4PwrExpectd, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4PwrExpectdFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4PwrExpectdFA_out_f;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_P_HV_Htr4PwrExpectd);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4PwrExpectdFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_P_HV_Htr4PwrExpectd' */
    /* Chart: '<S97>/PokeHTIR_P_HV_Htr4PwrExpectdChrt' incorporates:
     *  SignalConversion generated from: '<S97>/LeHTIR_P_HV_Htr4PwrExpectd'
     *  SignalConversion generated from: '<S97>/LeHTIR_b_HV_Htr4PwrExpectdFA'
     */
    /* Gateway: PokeHTIR_P_HV_Htr4PwrExpectd/PokeHTIR_P_HV_Htr4PwrExpectdChrt */
    /* During: PokeHTIR_P_HV_Htr4PwrExpectd/PokeHTIR_P_HV_Htr4PwrExpectdChrt */
    /* Entry Internal: PokeHTIR_P_HV_Htr4PwrExpectd/PokeHTIR_P_HV_Htr4PwrExpectdChrt */
    /* Transition: '<S644>:2' */
    if (!LeHTIR_b_HV_Htr4PwrExpectdFA)
    {
        /* Transition: '<S644>:3' */
        /* Transition: '<S644>:15' */
        HTIR_ac_B.LeHTIR_P_HV_Htr4PwrExpectd_out = LeHTIR_P_HV_Htr4PwrExpectd;
        rtb_LeHTIR_b_HV_Htr4PwrExpectdFA_out_f = false;

        /* Transition: '<S644>:18' */
    }
    else
    {
        /* Transition: '<S644>:4' */
        rtb_LeHTIR_b_HV_Htr4PwrExpectdFA_out_f = true;
    }

    /* End of Chart: '<S97>/PokeHTIR_P_HV_Htr4PwrExpectdChrt' */

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S97>/VeHTIR_P_HV_Htr4PwrExpectd_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HV_Htr4PwrExpectd_Htr4PwrExpectd_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_P_HV_Htr4PwrExpectd_out);

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S97>/VeHTIR_b_HV_Htr4PwrExpectdFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_P_HV_Htr4PwrExpectd_VeHTIR_b_HV_Htr4PwrExpectdFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4PwrExpectdFA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_P_HV_Htr4PwrExpectd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_Pct_HV_Htr2PwrAct(VAR(float32, AUTOMATIC)
    LeHTIR_Pct_HV_Htr2PwrAct, VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr2PwrActFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2PwrActFA_out_l;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_Pct_HV_Htr2PwrAct);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2PwrActFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_Pct_HV_Htr2PwrAct' */
    /* Chart: '<S98>/PokeHTIR_Pct_HV_Htr2PwrActChrt' incorporates:
     *  SignalConversion generated from: '<S98>/LeHTIR_Pct_HV_Htr2PwrAct'
     *  SignalConversion generated from: '<S98>/LeHTIR_b_HV_Htr2PwrActFA'
     */
    /* Gateway: PokeHTIR_Pct_HV_Htr2PwrAct/PokeHTIR_Pct_HV_Htr2PwrActChrt */
    /* During: PokeHTIR_Pct_HV_Htr2PwrAct/PokeHTIR_Pct_HV_Htr2PwrActChrt */
    /* Entry Internal: PokeHTIR_Pct_HV_Htr2PwrAct/PokeHTIR_Pct_HV_Htr2PwrActChrt */
    /* Transition: '<S645>:2' */
    if (!LeHTIR_b_HV_Htr2PwrActFA)
    {
        /* Transition: '<S645>:3' */
        /* Transition: '<S645>:15' */
        HTIR_ac_B.LeHTIR_Pct_HV_Htr2PwrAct_out = LeHTIR_Pct_HV_Htr2PwrAct;
        rtb_LeHTIR_b_HV_Htr2PwrActFA_out_l = false;

        /* Transition: '<S645>:18' */
    }
    else
    {
        /* Transition: '<S645>:4' */
        rtb_LeHTIR_b_HV_Htr2PwrActFA_out_l = true;
    }

    /* End of Chart: '<S98>/PokeHTIR_Pct_HV_Htr2PwrActChrt' */

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S98>/VeHTIR_Pct_HV_Htr2PwrAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_Pct_HV_Htr2PwrAct_Htr2PwrAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_Pct_HV_Htr2PwrAct_out);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S98>/VeHTIR_b_HV_Htr2PwrActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_Pct_HV_Htr2PwrAct_VeHTIR_b_HV_Htr2PwrActFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2PwrActFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_Pct_HV_Htr2PwrAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_T_HVC_HtrClntIn_Temp(VAR(float32, AUTOMATIC)
    LeHTIR_T_HVC_HtrClntIn_Temp, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_HtrClntIn_TempFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrClntIn_TempFA_out_o;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_T_HVC_HtrClntIn_Temp);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrClntIn_TempFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_T_HVC_HtrClntIn_Temp' */
    /* Chart: '<S99>/PokeHTIR_T_HVC_HtrClntIn_TempChrt' incorporates:
     *  SignalConversion generated from: '<S99>/LeHTIR_T_HVC_HtrClntIn_Temp'
     *  SignalConversion generated from: '<S99>/LeHTIR_b_HVC_HtrClntIn_TempFA'
     */
    /* Gateway: PokeHTIR_T_HVC_HtrClntIn_Temp/PokeHTIR_T_HVC_HtrClntIn_TempChrt */
    /* During: PokeHTIR_T_HVC_HtrClntIn_Temp/PokeHTIR_T_HVC_HtrClntIn_TempChrt */
    /* Entry Internal: PokeHTIR_T_HVC_HtrClntIn_Temp/PokeHTIR_T_HVC_HtrClntIn_TempChrt */
    /* Transition: '<S646>:2' */
    if (!LeHTIR_b_HVC_HtrClntIn_TempFA)
    {
        /* Transition: '<S646>:3' */
        /* Transition: '<S646>:15' */
        HTIR_ac_B.LeHTIR_T_HVC_HtrClntIn_Temp_out = LeHTIR_T_HVC_HtrClntIn_Temp;
        rtb_LeHTIR_b_HVC_HtrClntIn_TempFA_out_o = false;

        /* Transition: '<S646>:18' */
    }
    else
    {
        /* Transition: '<S646>:4' */
        rtb_LeHTIR_b_HVC_HtrClntIn_TempFA_out_o = true;
    }

    /* End of Chart: '<S99>/PokeHTIR_T_HVC_HtrClntIn_TempChrt' */

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S99>/VeHTIR_T_HVC_HtrClntIn_Temp_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HVC_HtrClntIn_Temp_HtrClntIn_Temp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_T_HVC_HtrClntIn_Temp_out);

    /* Merge: '<Root>/Merge_113' incorporates:
     *  SignalConversion generated from: '<S99>/VeHTIR_b_HVC_HtrClntIn_TempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HVC_HtrClntIn_Temp_VeHTIR_b_HVC_HtrClntIn_TempFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrClntIn_TempFA_out_o);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_T_HVC_HtrClntIn_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_T_HVC_HtrClntOut_Temp(VAR(float32, AUTOMATIC)
    LeHTIR_T_HVC_HtrClntOut_Temp, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_HtrClntOut_TempFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrClntOut_TempFA_out_a;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_T_HVC_HtrClntOut_Temp);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrClntOut_TempFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_T_HVC_HtrClntOut_Temp' */
    /* Chart: '<S100>/PokeHTIR_T_HVC_HtrClntOut_TempChrt' incorporates:
     *  SignalConversion generated from: '<S100>/LeHTIR_T_HVC_HtrClntOut_Temp'
     *  SignalConversion generated from: '<S100>/LeHTIR_b_HVC_HtrClntOut_TempFA'
     */
    /* Gateway: PokeHTIR_T_HVC_HtrClntOut_Temp/PokeHTIR_T_HVC_HtrClntOut_TempChrt */
    /* During: PokeHTIR_T_HVC_HtrClntOut_Temp/PokeHTIR_T_HVC_HtrClntOut_TempChrt */
    /* Entry Internal: PokeHTIR_T_HVC_HtrClntOut_Temp/PokeHTIR_T_HVC_HtrClntOut_TempChrt */
    /* Transition: '<S647>:2' */
    if (!LeHTIR_b_HVC_HtrClntOut_TempFA)
    {
        /* Transition: '<S647>:3' */
        /* Transition: '<S647>:15' */
        HTIR_ac_B.LeHTIR_T_HVC_HtrClntOut_Temp_out =
            LeHTIR_T_HVC_HtrClntOut_Temp;
        rtb_LeHTIR_b_HVC_HtrClntOut_TempFA_out_a = false;

        /* Transition: '<S647>:18' */
    }
    else
    {
        /* Transition: '<S647>:4' */
        rtb_LeHTIR_b_HVC_HtrClntOut_TempFA_out_a = true;
    }

    /* End of Chart: '<S100>/PokeHTIR_T_HVC_HtrClntOut_TempChrt' */

    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S100>/VeHTIR_T_HVC_HtrClntOut_Temp_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HVC_HtrClntOut_Temp_HtrClntOut_Temp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_T_HVC_HtrClntOut_Temp_out);

    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S100>/VeHTIR_b_HVC_HtrClntOut_TempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HVC_HtrClntOut_Temp_VeHTIR_b_HVC_HtrClntOut_TempFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrClntOut_TempFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_T_HVC_HtrClntOut_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_T_HV_Htr2CoreTemp(VAR(float32, AUTOMATIC)
    LeHTIR_T_HV_Htr2CoreTemp, VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr2CoreTempFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2CoreTempFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_T_HV_Htr2CoreTemp);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2CoreTempFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_T_HV_Htr2CoreTemp' */
    /* Chart: '<S101>/PokeHTIR_T_HV_Htr2CoreTempChrt' incorporates:
     *  SignalConversion generated from: '<S101>/LeHTIR_T_HV_Htr2CoreTemp'
     *  SignalConversion generated from: '<S101>/LeHTIR_b_HV_Htr2CoreTempFA'
     */
    /* Gateway: PokeHTIR_T_HV_Htr2CoreTemp/PokeHTIR_T_HV_Htr2CoreTempChrt */
    /* During: PokeHTIR_T_HV_Htr2CoreTemp/PokeHTIR_T_HV_Htr2CoreTempChrt */
    /* Entry Internal: PokeHTIR_T_HV_Htr2CoreTemp/PokeHTIR_T_HV_Htr2CoreTempChrt */
    /* Transition: '<S648>:2' */
    if (!LeHTIR_b_HV_Htr2CoreTempFA)
    {
        /* Transition: '<S648>:3' */
        /* Transition: '<S648>:15' */
        HTIR_ac_B.LeHTIR_T_HV_Htr2CoreTemp_out = LeHTIR_T_HV_Htr2CoreTemp;
        rtb_LeHTIR_b_HV_Htr2CoreTempFA_out = false;

        /* Transition: '<S648>:18' */
    }
    else
    {
        /* Transition: '<S648>:4' */
        rtb_LeHTIR_b_HV_Htr2CoreTempFA_out = true;
    }

    /* End of Chart: '<S101>/PokeHTIR_T_HV_Htr2CoreTempChrt' */

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S101>/VeHTIR_T_HV_Htr2CoreTemp_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr2CoreTemp_Htr2CoreTemp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_T_HV_Htr2CoreTemp_out);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S101>/VeHTIR_b_HV_Htr2CoreTempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr2CoreTemp_VeHTIR_b_Htr2CoreTempFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2CoreTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_T_HV_Htr2CoreTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_T_HV_Htr2_PCBTemp(VAR(float32, AUTOMATIC)
    LeHTIR_T_HV_Htr2_PCBTemp, VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr2_PCBTempFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2_PCBTempFA_out_c;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_T_HV_Htr2_PCBTemp);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2_PCBTempFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_T_HV_Htr2_PCBTemp' */
    /* Chart: '<S102>/PokeHTIR_T_HV_Htr2_PCBTempChrt' incorporates:
     *  SignalConversion generated from: '<S102>/LeHTIR_T_HV_Htr2_PCBTemp'
     *  SignalConversion generated from: '<S102>/LeHTIR_b_HV_Htr2_PCBTempFA'
     */
    /* Gateway: PokeHTIR_T_HV_Htr2_PCBTemp/PokeHTIR_T_HV_Htr2_PCBTempChrt */
    /* During: PokeHTIR_T_HV_Htr2_PCBTemp/PokeHTIR_T_HV_Htr2_PCBTempChrt */
    /* Entry Internal: PokeHTIR_T_HV_Htr2_PCBTemp/PokeHTIR_T_HV_Htr2_PCBTempChrt */
    /* Transition: '<S649>:2' */
    if (!LeHTIR_b_HV_Htr2_PCBTempFA)
    {
        /* Transition: '<S649>:3' */
        /* Transition: '<S649>:15' */
        HTIR_ac_B.LeHTIR_T_HV_Htr2_PCBTemp_out = LeHTIR_T_HV_Htr2_PCBTemp;
        rtb_LeHTIR_b_HV_Htr2_PCBTempFA_out_c = false;

        /* Transition: '<S649>:18' */
    }
    else
    {
        /* Transition: '<S649>:4' */
        rtb_LeHTIR_b_HV_Htr2_PCBTempFA_out_c = true;
    }

    /* End of Chart: '<S102>/PokeHTIR_T_HV_Htr2_PCBTempChrt' */

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S102>/VeHTIR_T_HV_Htr2_PCBTemp_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr2_PCBTemp_Htr2_PCBTemp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_T_HV_Htr2_PCBTemp_out);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S102>/VeHTIR_b_HV_Htr2_PCBTempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr2_PCBTemp_VeHTIR_b_HV_Htr2_PCBTempFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2_PCBTempFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_T_HV_Htr2_PCBTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_T_HV_Htr4ClntIn_Temp(VAR(float32, AUTOMATIC)
    LeHTIR_T_HV_Htr4ClntIn_Temp, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4ClntIn_TempFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4ClntIn_TempFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_T_HV_Htr4ClntIn_Temp);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4ClntIn_TempFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_T_HV_Htr4ClntIn_Temp' */
    /* Chart: '<S103>/PokeHTIR_T_HV_Htr4ClntIn_TempChrt' incorporates:
     *  SignalConversion generated from: '<S103>/LeHTIR_T_HV_Htr4ClntIn_Temp'
     *  SignalConversion generated from: '<S103>/LeHTIR_b_HV_Htr4ClntIn_TempFA'
     */
    /* Gateway: PokeHTIR_T_HV_Htr4ClntIn_Temp/PokeHTIR_T_HV_Htr4ClntIn_TempChrt */
    /* During: PokeHTIR_T_HV_Htr4ClntIn_Temp/PokeHTIR_T_HV_Htr4ClntIn_TempChrt */
    /* Entry Internal: PokeHTIR_T_HV_Htr4ClntIn_Temp/PokeHTIR_T_HV_Htr4ClntIn_TempChrt */
    /* Transition: '<S650>:2' */
    if (!LeHTIR_b_HV_Htr4ClntIn_TempFA)
    {
        /* Transition: '<S650>:3' */
        /* Transition: '<S650>:15' */
        HTIR_ac_B.LeHTIR_T_HV_Htr4ClntIn_Temp_out = LeHTIR_T_HV_Htr4ClntIn_Temp;
        rtb_LeHTIR_b_HV_Htr4ClntIn_TempFA_out = false;

        /* Transition: '<S650>:18' */
    }
    else
    {
        /* Transition: '<S650>:4' */
        rtb_LeHTIR_b_HV_Htr4ClntIn_TempFA_out = true;
    }

    /* End of Chart: '<S103>/PokeHTIR_T_HV_Htr4ClntIn_TempChrt' */

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S103>/VeHTIR_T_HV_Htr4ClntIn_Temp_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr4ClntIn_Temp_Htr4ClntIn_Temp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_T_HV_Htr4ClntIn_Temp_out);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S103>/VeHTIR_b_HV_Htr4ClntIn_TempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr4ClntIn_Temp_VeHTIR_b_HV_Htr4ClntIn_TempFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4ClntIn_TempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_T_HV_Htr4ClntIn_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_T_HV_Htr4ClntOut_Temp(VAR(float32, AUTOMATIC)
    LeHTIR_T_HV_Htr4ClntOut_Temp, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4ClntOut_TempFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4ClntOut_TempFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_T_HV_Htr4ClntOut_Temp);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4ClntOut_TempFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_T_HV_Htr4ClntOut_Temp' */
    /* Chart: '<S104>/PokeHTIR_T_HV_Htr4ClntOut_TempChrt' incorporates:
     *  SignalConversion generated from: '<S104>/LeHTIR_T_HV_Htr4ClntOut_Temp'
     *  SignalConversion generated from: '<S104>/LeHTIR_b_HV_Htr4ClntOut_TempFA'
     */
    /* Gateway: PokeHTIR_T_HV_Htr4ClntOut_Temp/PokeHTIR_T_HV_Htr4ClntOut_TempChrt */
    /* During: PokeHTIR_T_HV_Htr4ClntOut_Temp/PokeHTIR_T_HV_Htr4ClntOut_TempChrt */
    /* Entry Internal: PokeHTIR_T_HV_Htr4ClntOut_Temp/PokeHTIR_T_HV_Htr4ClntOut_TempChrt */
    /* Transition: '<S651>:2' */
    if (!LeHTIR_b_HV_Htr4ClntOut_TempFA)
    {
        /* Transition: '<S651>:3' */
        /* Transition: '<S651>:15' */
        HTIR_ac_B.LeHTIR_T_HV_Htr4ClntOut_Temp_out =
            LeHTIR_T_HV_Htr4ClntOut_Temp;
        rtb_LeHTIR_b_HV_Htr4ClntOut_TempFA_out = false;

        /* Transition: '<S651>:18' */
    }
    else
    {
        /* Transition: '<S651>:4' */
        rtb_LeHTIR_b_HV_Htr4ClntOut_TempFA_out = true;
    }

    /* End of Chart: '<S104>/PokeHTIR_T_HV_Htr4ClntOut_TempChrt' */

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S104>/VeHTIR_T_HV_Htr4ClntOut_Temp_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr4ClntOut_Temp_Htr4ClntOut_Temp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_T_HV_Htr4ClntOut_Temp_out);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S104>/VeHTIR_b_HV_Htr4ClntOut_TempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_T_HV_Htr4ClntOut_Temp_VeHTIR_b_HV_Htr4ClntOut_TempFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4ClntOut_TempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_T_HV_Htr4ClntOut_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_U_HVC_Htr_HV_VltgAct(VAR(float32, AUTOMATIC)
    LeHTIR_U_HVC_Htr_HV_VltgAct, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_Htr_HV_VltgActFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_Htr_HV_VltgActFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_U_HVC_Htr_HV_VltgAct);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_Htr_HV_VltgActFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_U_HVC_Htr_HV_VltgAct' */
    /* Chart: '<S105>/PokeHTIR_U_HVC_Htr_HV_VltgActChrt' incorporates:
     *  SignalConversion generated from: '<S105>/LeHTIR_U_HVC_Htr_HV_VltgAct'
     *  SignalConversion generated from: '<S105>/LeHTIR_b_HVC_Htr_HV_VltgActFA'
     */
    /* Gateway: PokeHTIR_U_HVC_Htr_HV_VltgAct/PokeHTIR_U_HVC_Htr_HV_VltgActChrt */
    /* During: PokeHTIR_U_HVC_Htr_HV_VltgAct/PokeHTIR_U_HVC_Htr_HV_VltgActChrt */
    /* Entry Internal: PokeHTIR_U_HVC_Htr_HV_VltgAct/PokeHTIR_U_HVC_Htr_HV_VltgActChrt */
    /* Transition: '<S652>:2' */
    if (!LeHTIR_b_HVC_Htr_HV_VltgActFA)
    {
        /* Transition: '<S652>:3' */
        /* Transition: '<S652>:15' */
        HTIR_ac_B.LeHTIR_U_HVC_Htr_HV_VltgAct_out = LeHTIR_U_HVC_Htr_HV_VltgAct;
        rtb_LeHTIR_b_HVC_Htr_HV_VltgActFA_out = false;

        /* Transition: '<S652>:18' */
    }
    else
    {
        /* Transition: '<S652>:4' */
        rtb_LeHTIR_b_HVC_Htr_HV_VltgActFA_out = true;
    }

    /* End of Chart: '<S105>/PokeHTIR_U_HVC_Htr_HV_VltgActChrt' */

    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S105>/VeHTIR_U_HVC_Htr_HV_VltgAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_U_HVC_Htr_HV_VltgAct_Htr_HV_VltgAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_U_HVC_Htr_HV_VltgAct_out);

    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S105>/VeHTIR_b_HVC_Htr_HV_VltgActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_U_HVC_Htr_HV_VltgAct_VeHTIR_b_HVC_Htr_HV_VltgActFA_write_IRV
        (rtb_LeHTIR_b_HVC_Htr_HV_VltgActFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_U_HVC_Htr_HV_VltgAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_U_HV_Htr2_HV_VltgAct(VAR(float32, AUTOMATIC)
    LeHTIR_U_HV_Htr2_HV_VltgAct, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr2_HV_VltgActFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2_HV_VltgActFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_U_HV_Htr2_HV_VltgAct);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2_HV_VltgActFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_U_HV_Htr2_HV_VltgAct' */
    /* Chart: '<S106>/PokeHTIR_U_HV_Htr2_HV_VltgActChrt' incorporates:
     *  SignalConversion generated from: '<S106>/LeHTIR_U_HV_Htr2_HV_VltgAct'
     *  SignalConversion generated from: '<S106>/LeHTIR_b_HV_Htr2_HV_VltgActFA'
     */
    /* Gateway: PokeHTIR_U_HV_Htr2_HV_VltgAct/PokeHTIR_U_HV_Htr2_HV_VltgActChrt */
    /* During: PokeHTIR_U_HV_Htr2_HV_VltgAct/PokeHTIR_U_HV_Htr2_HV_VltgActChrt */
    /* Entry Internal: PokeHTIR_U_HV_Htr2_HV_VltgAct/PokeHTIR_U_HV_Htr2_HV_VltgActChrt */
    /* Transition: '<S653>:2' */
    if (!LeHTIR_b_HV_Htr2_HV_VltgActFA)
    {
        /* Transition: '<S653>:3' */
        /* Transition: '<S653>:15' */
        HTIR_ac_B.LeHTIR_U_HV_Htr2_HV_VltgAct_out = LeHTIR_U_HV_Htr2_HV_VltgAct;
        rtb_LeHTIR_b_HV_Htr2_HV_VltgActFA_out = false;

        /* Transition: '<S653>:18' */
    }
    else
    {
        /* Transition: '<S653>:4' */
        rtb_LeHTIR_b_HV_Htr2_HV_VltgActFA_out = true;
    }

    /* End of Chart: '<S106>/PokeHTIR_U_HV_Htr2_HV_VltgActChrt' */

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S106>/VeHTIR_U_HV_Htr2_HV_VltgAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_U_HV_Htr2_HV_VltgAct_Htr2_HV_VltgAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_U_HV_Htr2_HV_VltgAct_out);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S106>/VeHTIR_b_HV_Htr2_HV_VltgActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_U_HV_Htr2_HV_VltgAct_VeHTIR_b_HV_Htr2_HV_VltgActFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2_HV_VltgActFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_U_HV_Htr2_HV_VltgAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_U_HV_Htr4_HV_VltgAct(VAR(float32, AUTOMATIC)
    LeHTIR_U_HV_Htr4_HV_VltgAct, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4_HV_VltgActFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4_HV_VltgActFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_U_HV_Htr4_HV_VltgAct);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4_HV_VltgActFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_U_HV_Htr4_HV_VltgAct' */
    /* Chart: '<S107>/PokeHTIR_U_HV_Htr4_HV_VltgActChrt' incorporates:
     *  SignalConversion generated from: '<S107>/LeHTIR_U_HV_Htr4_HV_VltgAct'
     *  SignalConversion generated from: '<S107>/LeHTIR_b_HV_Htr4_HV_VltgActFA'
     */
    /* Gateway: PokeHTIR_U_HV_Htr4_HV_VltgAct/PokeHTIR_U_HV_Htr4_HV_VltgActChrt */
    /* During: PokeHTIR_U_HV_Htr4_HV_VltgAct/PokeHTIR_U_HV_Htr4_HV_VltgActChrt */
    /* Entry Internal: PokeHTIR_U_HV_Htr4_HV_VltgAct/PokeHTIR_U_HV_Htr4_HV_VltgActChrt */
    /* Transition: '<S654>:2' */
    if (!LeHTIR_b_HV_Htr4_HV_VltgActFA)
    {
        /* Transition: '<S654>:3' */
        /* Transition: '<S654>:15' */
        HTIR_ac_B.LeHTIR_U_HV_Htr4_HV_VltgAct_out = LeHTIR_U_HV_Htr4_HV_VltgAct;
        rtb_LeHTIR_b_HV_Htr4_HV_VltgActFA_out = false;

        /* Transition: '<S654>:18' */
    }
    else
    {
        /* Transition: '<S654>:4' */
        rtb_LeHTIR_b_HV_Htr4_HV_VltgActFA_out = true;
    }

    /* End of Chart: '<S107>/PokeHTIR_U_HV_Htr4_HV_VltgActChrt' */

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S107>/VeHTIR_U_HV_Htr4_HV_VltgAct_write'
     * */
    Rte_IrvWrite_PokeHTIR_U_HV_Htr4_HV_VltgAct_Htr4_HV_VltgAct_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_U_HV_Htr4_HV_VltgAct_out);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S107>/VeHTIR_b_HV_Htr4_HV_VltgActFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_U_HV_Htr4_HV_VltgAct_VeHTIR_b_HV_Htr4_HV_VltgActFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4_HV_VltgActFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_U_HV_Htr4_HV_VltgAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_b_HVC_Htr_LIN_ResErr(VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_Htr_LIN_ResErr)
{

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_Htr_LIN_ResErr);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_b_HVC_Htr_LIN_ResErr' */
    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S108>/LeHTIR_b_HVC_Htr_LIN_ResErr'
     *  SignalConversion generated from: '<S108>/VeHTIR_b_HVC_Htr_LIN_ResErr_write'
     */
    /* Gateway: PokeHTIR_b_HVC_Htr_LIN_ResErr/PokeHTIR_b_HVC_Htr_LIN_ResErrChrt */
    /* During: PokeHTIR_b_HVC_Htr_LIN_ResErr/PokeHTIR_b_HVC_Htr_LIN_ResErrChrt */
    /* Entry Internal: PokeHTIR_b_HVC_Htr_LIN_ResErr/PokeHTIR_b_HVC_Htr_LIN_ResErrChrt */
    /* Transition: '<S655>:2' */
    Rte_IrvWrite_PokeHTIR_b_HVC_Htr_LIN_ResErr_Htr_LIN_ResErr_INIT_write_IRV
        (LeHTIR_b_HVC_Htr_LIN_ResErr);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_b_HVC_Htr_LIN_ResErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_b_HV_Htr2_LIN_ResErr(VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr2_LIN_ResErr)
{

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2_LIN_ResErr);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_b_HV_Htr2_LIN_ResErr' */
    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S109>/LeHTIR_b_HV_Htr2_LIN_ResErr'
     *  SignalConversion generated from: '<S109>/VeHTIR_b_HV_Htr2_LIN_ResErr_write'
     */
    /* Gateway: PokeHTIR_b_HV_Htr2_LIN_ResErr/PokeHTIR_b_HV_Htr2_LIN_ResErrChrt */
    /* During: PokeHTIR_b_HV_Htr2_LIN_ResErr/PokeHTIR_b_HV_Htr2_LIN_ResErrChrt */
    /* Entry Internal: PokeHTIR_b_HV_Htr2_LIN_ResErr/PokeHTIR_b_HV_Htr2_LIN_ResErrChrt */
    /* Transition: '<S656>:2' */
    Rte_IrvWrite_PokeHTIR_b_HV_Htr2_LIN_ResErr_Htr2_LIN_ResErr_INIT_write_IRV
        (LeHTIR_b_HV_Htr2_LIN_ResErr);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_b_HV_Htr2_LIN_ResErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_b_HV_Htr4_LIN_ResErr(VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4_LIN_ResErr)
{

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4_LIN_ResErr);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_b_HV_Htr4_LIN_ResErr' */
    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S110>/LeHTIR_b_HV_Htr4_LIN_ResErr'
     *  SignalConversion generated from: '<S110>/VeHTIR_b_HV_Htr4_LIN_ResErr_write'
     */
    /* Gateway: PokeHTIR_b_HV_Htr4_LIN_ResErr/PokeHTIR_b_HV_Htr4_LIN_ResErrChrt */
    /* During: PokeHTIR_b_HV_Htr4_LIN_ResErr/PokeHTIR_b_HV_Htr4_LIN_ResErrChrt */
    /* Entry Internal: PokeHTIR_b_HV_Htr4_LIN_ResErr/PokeHTIR_b_HV_Htr4_LIN_ResErrChrt */
    /* Transition: '<S657>:2' */
    Rte_IrvWrite_PokeHTIR_b_HV_Htr4_LIN_ResErr_Htr4LIN_ResErr_INIT_write_IRV
        (LeHTIR_b_HV_Htr4_LIN_ResErr);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_b_HV_Htr4_LIN_ResErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrClntIn_TempSensFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_HtrClntIn_TempSensFlt,
    VAR(boolean, AUTOMATIC) LeHTIR_b_HVC_HtrClntIn_TempSensFltFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrClntIn_TempSensFlt_m;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrClntIn_TempSensFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrClntIn_TempSensFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrClntIn_TempSensFlt' */
    /* Chart: '<S111>/PokeHTIR_e_HVC_HtrClntIn_TempSensFltChrt' incorporates:
     *  SignalConversion generated from: '<S111>/LeHTIR_b_HVC_HtrClntIn_TempSensFltFA'
     *  SignalConversion generated from: '<S111>/LeHTIR_e_HVC_HtrClntIn_TempSensFlt'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrClntIn_TempSensFlt/PokeHTIR_e_HVC_HtrClntIn_TempSensFltChrt */
    /* During: PokeHTIR_e_HVC_HtrClntIn_TempSensFlt/PokeHTIR_e_HVC_HtrClntIn_TempSensFltChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrClntIn_TempSensFlt/PokeHTIR_e_HVC_HtrClntIn_TempSensFltChrt */
    /* Transition: '<S658>:2' */
    if (!LeHTIR_b_HVC_HtrClntIn_TempSensFltFA)
    {
        /* Transition: '<S658>:3' */
        /* Transition: '<S658>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrClntIn_TempSensFlt_out =
            LeHTIR_e_HVC_HtrClntIn_TempSensFlt;
        rtb_LeHTIR_b_HVC_HtrClntIn_TempSensFlt_m = false;

        /* Transition: '<S658>:18' */
    }
    else
    {
        /* Transition: '<S658>:4' */
        rtb_LeHTIR_b_HVC_HtrClntIn_TempSensFlt_m = true;
    }

    /* End of Chart: '<S111>/PokeHTIR_e_HVC_HtrClntIn_TempSensFltChrt' */

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S111>/VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrClntIn_TempSensFlt_VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrClntIn_TempSensFlt_m);

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S111>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrClntIn_TempSensFlt_HtrClntIn_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrClntIn_TempSensFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrClntIn_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrClntOut_TempSensFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_HtrClntOut_TempSensFlt,
    VAR(boolean, AUTOMATIC) LeHTIR_b_HVC_HtrClntOut_TempSensFltFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrClntOut_TempSensFl_m;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrClntOut_TempSensFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrClntOut_TempSensFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrClntOut_TempSensFlt' */
    /* Chart: '<S112>/PokeHTIR_e_HVC_HtrClntOut_TempSensFltChrt' incorporates:
     *  SignalConversion generated from: '<S112>/LeHTIR_b_HVC_HtrClntOut_TempSensFltFA'
     *  SignalConversion generated from: '<S112>/LeHTIR_e_HVC_HtrClntOut_TempSensFlt'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrClntOut_TempSensFlt/PokeHTIR_e_HVC_HtrClntOut_TempSensFltChrt */
    /* During: PokeHTIR_e_HVC_HtrClntOut_TempSensFlt/PokeHTIR_e_HVC_HtrClntOut_TempSensFltChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrClntOut_TempSensFlt/PokeHTIR_e_HVC_HtrClntOut_TempSensFltChrt */
    /* Transition: '<S659>:2' */
    if (!LeHTIR_b_HVC_HtrClntOut_TempSensFltFA)
    {
        /* Transition: '<S659>:3' */
        /* Transition: '<S659>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrClntOut_TempSensFlt_out =
            LeHTIR_e_HVC_HtrClntOut_TempSensFlt;
        rtb_LeHTIR_b_HVC_HtrClntOut_TempSensFl_m = false;

        /* Transition: '<S659>:18' */
    }
    else
    {
        /* Transition: '<S659>:4' */
        rtb_LeHTIR_b_HVC_HtrClntOut_TempSensFl_m = true;
    }

    /* End of Chart: '<S112>/PokeHTIR_e_HVC_HtrClntOut_TempSensFltChrt' */

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S112>/VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrClntOut_TempSensFlt_VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrClntOut_TempSensFl_m);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  SignalConversion generated from: '<S112>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrClntOut_TempSensFlt_HtrClntOut_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrClntOut_TempSensFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrClntOut_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrClntTemp_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_HtrClntTemp_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_HtrClntTemp_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrClntTemp_OutofRngFA_;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrClntTemp_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrClntTemp_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrClntTemp_OutofRng' */
    /* Chart: '<S113>/PokeHTIR_e_HVC_HtrClntTemp_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S113>/LeHTIR_b_HVC_HtrClntTemp_OutofRngFA'
     *  SignalConversion generated from: '<S113>/LeHTIR_e_HVC_HtrClntTemp_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrClntTemp_OutofRng/PokeHTIR_e_HVC_HtrClntTemp_OutofRngChrt */
    /* During: PokeHTIR_e_HVC_HtrClntTemp_OutofRng/PokeHTIR_e_HVC_HtrClntTemp_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrClntTemp_OutofRng/PokeHTIR_e_HVC_HtrClntTemp_OutofRngChrt */
    /* Transition: '<S660>:2' */
    if (!LeHTIR_b_HVC_HtrClntTemp_OutofRngFA)
    {
        /* Transition: '<S660>:3' */
        /* Transition: '<S660>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrClntTemp_OutofRng_out =
            LeHTIR_e_HVC_HtrClntTemp_OutofRng;
        rtb_LeHTIR_b_HVC_HtrClntTemp_OutofRngFA_ = false;

        /* Transition: '<S660>:18' */
    }
    else
    {
        /* Transition: '<S660>:4' */
        rtb_LeHTIR_b_HVC_HtrClntTemp_OutofRngFA_ = true;
    }

    /* End of Chart: '<S113>/PokeHTIR_e_HVC_HtrClntTemp_OutofRngChrt' */

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S113>/VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrClntTemp_OutofRng_VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrClntTemp_OutofRngFA_);

    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S113>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrClntTemp_OutofRng_HVC_HtrClntTemp_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrClntTemp_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrClntTemp_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrCoreTemp_SensFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_HtrCoreTemp_SensFlt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_HtrCoreTemp_SensFltFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrCoreTemp_SensFltFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrCoreTemp_SensFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrCoreTemp_SensFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrCoreTemp_SensFlt' */
    /* Chart: '<S114>/PokeHTIR_e_HVC_HtrCoreTemp_SensFltChrt' incorporates:
     *  SignalConversion generated from: '<S114>/LeHTIR_b_HVC_HtrCoreTemp_SensFltFA'
     *  SignalConversion generated from: '<S114>/LeHTIR_e_HVC_HtrCoreTemp_SensFlt'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrCoreTemp_SensFlt/PokeHTIR_e_HVC_HtrCoreTemp_SensFltChrt */
    /* During: PokeHTIR_e_HVC_HtrCoreTemp_SensFlt/PokeHTIR_e_HVC_HtrCoreTemp_SensFltChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrCoreTemp_SensFlt/PokeHTIR_e_HVC_HtrCoreTemp_SensFltChrt */
    /* Transition: '<S661>:2' */
    if (!LeHTIR_b_HVC_HtrCoreTemp_SensFltFA)
    {
        /* Transition: '<S661>:3' */
        /* Transition: '<S661>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrCoreTemp_SensFlt_out =
            LeHTIR_e_HVC_HtrCoreTemp_SensFlt;
        rtb_LeHTIR_b_HVC_HtrCoreTemp_SensFltFA_o = false;

        /* Transition: '<S661>:18' */
    }
    else
    {
        /* Transition: '<S661>:4' */
        rtb_LeHTIR_b_HVC_HtrCoreTemp_SensFltFA_o = true;
    }

    /* End of Chart: '<S114>/PokeHTIR_e_HVC_HtrCoreTemp_SensFltChrt' */

    /* Merge: '<Root>/Merge_96' incorporates:
     *  SignalConversion generated from: '<S114>/VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrCoreTemp_SensFlt_VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrCoreTemp_SensFltFA_o);

    /* Merge: '<Root>/Merge_94' incorporates:
     *  SignalConversion generated from: '<S114>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrCoreTemp_SensFlt_HtrCoreTemp_SensFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrCoreTemp_SensFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrCoreTemp_SensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrDrvFlt(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HVC_HtrDrvFlt, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_HtrDrvFltFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrDrvFltFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrDrvFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrDrvFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrDrvFlt' */
    /* Chart: '<S115>/PokeHTIR_e_HVC_HtrDrvFltChrt' incorporates:
     *  SignalConversion generated from: '<S115>/LeHTIR_b_HVC_HtrDrvFltFA'
     *  SignalConversion generated from: '<S115>/LeHTIR_e_HVC_HtrDrvFlt'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrDrvFlt/PokeHTIR_e_HVC_HtrDrvFltChrt */
    /* During: PokeHTIR_e_HVC_HtrDrvFlt/PokeHTIR_e_HVC_HtrDrvFltChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrDrvFlt/PokeHTIR_e_HVC_HtrDrvFltChrt */
    /* Transition: '<S662>:2' */
    if (!LeHTIR_b_HVC_HtrDrvFltFA)
    {
        /* Transition: '<S662>:3' */
        /* Transition: '<S662>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrDrvFlt_out = LeHTIR_e_HVC_HtrDrvFlt;
        rtb_LeHTIR_b_HVC_HtrDrvFltFA_out = false;

        /* Transition: '<S662>:18' */
    }
    else
    {
        /* Transition: '<S662>:4' */
        rtb_LeHTIR_b_HVC_HtrDrvFltFA_out = true;
    }

    /* End of Chart: '<S115>/PokeHTIR_e_HVC_HtrDrvFltChrt' */

    /* Merge: '<Root>/Merge_102' incorporates:
     *  SignalConversion generated from: '<S115>/VeHTIR_b_HVC_HtrDrvFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrDrvFlt_VeHTIR_b_HVC_HtrDrvFltFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrDrvFltFA_out);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S115>/VeHTIR_e_HVC_HtrDrvFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrDrvFlt_HtrDrvFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrDrvFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrDrvFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrHighVol_Dwn(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HVC_HtrHighVol_Dwn, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_HtrHighVol_DwnFA)
{

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrHighVol_Dwn);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrHighVol_DwnFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrHighVol_Dwn' */
    /* Chart: '<S116>/PokeHTIR_e_HVC_HtrHighVol_DwnChrt' incorporates:
     *  SignalConversion generated from: '<S116>/LeHTIR_b_HVC_HtrHighVol_DwnFA'
     *  SignalConversion generated from: '<S116>/LeHTIR_e_HVC_HtrHighVol_Dwn'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrHighVol_Dwn/PokeHTIR_e_HVC_HtrHighVol_DwnChrt */
    /* During: PokeHTIR_e_HVC_HtrHighVol_Dwn/PokeHTIR_e_HVC_HtrHighVol_DwnChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrHighVol_Dwn/PokeHTIR_e_HVC_HtrHighVol_DwnChrt */
    /* Transition: '<S663>:2' */
    if (!LeHTIR_b_HVC_HtrHighVol_DwnFA)
    {
        /* Transition: '<S663>:3' */
        /* Transition: '<S663>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrHighVol_Dwn_out = LeHTIR_e_HVC_HtrHighVol_Dwn;

        /* Transition: '<S663>:18' */
    }
    else
    {
        /* Transition: '<S663>:4' */
    }

    /* End of Chart: '<S116>/PokeHTIR_e_HVC_HtrHighVol_DwnChrt' */

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S116>/VeHTIR_e_HVC_HtrHighVol_Dwn_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrHighVol_Dwn_HtrHighVol_Dwn_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrHighVol_Dwn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrHighVol_Dwn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrIntCom_Err(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HVC_HtrIntCom_Err, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HVC_HtrIntCom_ErrFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrIntCom_ErrFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrIntCom_Err);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrIntCom_ErrFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrIntCom_Err' */
    /* Chart: '<S117>/PokeHTIR_e_HVC_HtrIntCom_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S117>/LeHTIR_b_HVC_HtrIntCom_ErrFA'
     *  SignalConversion generated from: '<S117>/LeHTIR_e_HVC_HtrIntCom_Err'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrIntCom_Err/PokeHTIR_e_HVC_HtrIntCom_ErrChrt */
    /* During: PokeHTIR_e_HVC_HtrIntCom_Err/PokeHTIR_e_HVC_HtrIntCom_ErrChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrIntCom_Err/PokeHTIR_e_HVC_HtrIntCom_ErrChrt */
    /* Transition: '<S664>:2' */
    if (!LeHTIR_b_HVC_HtrIntCom_ErrFA)
    {
        /* Transition: '<S664>:3' */
        /* Transition: '<S664>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrIntCom_Err_out = LeHTIR_e_HVC_HtrIntCom_Err;
        rtb_LeHTIR_b_HVC_HtrIntCom_ErrFA_out = false;

        /* Transition: '<S664>:18' */
    }
    else
    {
        /* Transition: '<S664>:4' */
        rtb_LeHTIR_b_HVC_HtrIntCom_ErrFA_out = true;
    }

    /* End of Chart: '<S117>/PokeHTIR_e_HVC_HtrIntCom_ErrChrt' */

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S117>/VeHTIR_b_HVC_HtrIntCom_ErrFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrIntCom_Err_VeHTIR_b_HVC_HtrIntCom_ErrFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrIntCom_ErrFA_out);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S117>/VeHTIR_e_HVC_HtrIntCom_Err_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrIntCom_Err_HVC_HtrIntCom_Err_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrIntCom_Err_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrIntCom_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrProcesMemory_Flt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_HtrProcesMemory_Flt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_HtrProcesMemory_FltFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrProcesMemory_FltFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrProcesMemory_Flt);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrProcesMemory_FltFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrProcesMemory_Flt' */
    /* Chart: '<S118>/PokeHTIR_e_HVC_HtrProcesMemory_FltChrt' incorporates:
     *  SignalConversion generated from: '<S118>/LeHTIR_b_HVC_HtrProcesMemory_FltFA'
     *  SignalConversion generated from: '<S118>/LeHTIR_e_HVC_HtrProcesMemory_Flt'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrProcesMemory_Flt/PokeHTIR_e_HVC_HtrProcesMemory_FltChrt */
    /* During: PokeHTIR_e_HVC_HtrProcesMemory_Flt/PokeHTIR_e_HVC_HtrProcesMemory_FltChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrProcesMemory_Flt/PokeHTIR_e_HVC_HtrProcesMemory_FltChrt */
    /* Transition: '<S665>:2' */
    if (!LeHTIR_b_HVC_HtrProcesMemory_FltFA)
    {
        /* Transition: '<S665>:3' */
        /* Transition: '<S665>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrProcesMemory_Flt_out =
            LeHTIR_e_HVC_HtrProcesMemory_Flt;
        rtb_LeHTIR_b_HVC_HtrProcesMemory_FltFA_o = false;

        /* Transition: '<S665>:18' */
    }
    else
    {
        /* Transition: '<S665>:4' */
        rtb_LeHTIR_b_HVC_HtrProcesMemory_FltFA_o = true;
    }

    /* End of Chart: '<S118>/PokeHTIR_e_HVC_HtrProcesMemory_FltChrt' */

    /* Merge: '<Root>/Merge_104' incorporates:
     *  SignalConversion generated from: '<S118>/VeHTIR_b_HVC_HtrProcesMemory_FltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrProcesMemory_Flt_VeHTIR_b_HVC_HtrProcesMemory_FltFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrProcesMemory_FltFA_o);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S118>/VeHTIR_e_HVC_HtrProcesMemory_Flt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrProcesMemory_Flt_HtrProcesMemory_Flt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrProcesMemory_Flt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrProcesMemory_Flt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_HtrResis_PCB_OvrTemp, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrResis_PCB_OvrTemp);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp' */
    /* Chart: '<S119>/PokeHTIR_e_HVC_HtrResis_PCB_OvrTempChrt' incorporates:
     *  SignalConversion generated from: '<S119>/LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA'
     *  SignalConversion generated from: '<S119>/LeHTIR_e_HVC_HtrResis_PCB_OvrTemp'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp/PokeHTIR_e_HVC_HtrResis_PCB_OvrTempChrt */
    /* During: PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp/PokeHTIR_e_HVC_HtrResis_PCB_OvrTempChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp/PokeHTIR_e_HVC_HtrResis_PCB_OvrTempChrt */
    /* Transition: '<S666>:2' */
    if (!LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA)
    {
        /* Transition: '<S666>:3' */
        /* Transition: '<S666>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrResis_PCB_OvrTemp_out =
            LeHTIR_e_HVC_HtrResis_PCB_OvrTemp;
        rtb_LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_ = false;

        /* Transition: '<S666>:18' */
    }
    else
    {
        /* Transition: '<S666>:4' */
        rtb_LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_ = true;
    }

    /* End of Chart: '<S119>/PokeHTIR_e_HVC_HtrResis_PCB_OvrTempChrt' */

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S119>/VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp_VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S119>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp_HtrResis_PCB_OvrTemp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrResis_PCB_OvrTemp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrSelfProtect_Actv(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_HtrSelfProtect_Actv, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_HtrSelfProtect_ActvFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_HtrSelfProtect_ActvFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrSelfProtect_Actv);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_HtrSelfProtect_ActvFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrSelfProtect_Actv' */
    /* Chart: '<S120>/PokeHTIR_e_HVC_HtrSelfProtect_ActvChrt' incorporates:
     *  SignalConversion generated from: '<S120>/LeHTIR_b_HVC_HtrSelfProtect_ActvFA'
     *  SignalConversion generated from: '<S120>/LeHTIR_e_HVC_HtrSelfProtect_Actv'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrSelfProtect_Actv/PokeHTIR_e_HVC_HtrSelfProtect_ActvChrt */
    /* During: PokeHTIR_e_HVC_HtrSelfProtect_Actv/PokeHTIR_e_HVC_HtrSelfProtect_ActvChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrSelfProtect_Actv/PokeHTIR_e_HVC_HtrSelfProtect_ActvChrt */
    /* Transition: '<S667>:2' */
    if (!LeHTIR_b_HVC_HtrSelfProtect_ActvFA)
    {
        /* Transition: '<S667>:3' */
        /* Transition: '<S667>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_HtrSelfProtect_Actv_out =
            LeHTIR_e_HVC_HtrSelfProtect_Actv;
        rtb_LeHTIR_b_HVC_HtrSelfProtect_ActvFA_o = false;

        /* Transition: '<S667>:18' */
    }
    else
    {
        /* Transition: '<S667>:4' */
        rtb_LeHTIR_b_HVC_HtrSelfProtect_ActvFA_o = true;
    }

    /* End of Chart: '<S120>/PokeHTIR_e_HVC_HtrSelfProtect_ActvChrt' */

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S120>/VeHTIR_b_HVC_HtrSelfProtect_ActvFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrSelfProtect_Actv_VeHTIR_b_HVC_HtrSelfProtect_ActvFA_write_IRV
        (rtb_LeHTIR_b_HVC_HtrSelfProtect_ActvFA_o);

    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S120>/VeHTIR_e_HVC_HtrSelfProtect_Actv_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrSelfProtect_Actv_HtrSelfProtect_Actv_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_HtrSelfProtect_Actv_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrSelfProtect_Actv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_HtrSts(VAR(TeHTIR_e_HVC_HtrSts, AUTOMATIC)
    LeHTIR_e_HVC_HtrSts)
{

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_HtrSts);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_HtrSts' */
    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S121>/LeHTIR_e_HVC_HtrSts'
     *  SignalConversion generated from: '<S121>/VeHTIR_e_HVC_HtrSts_write'
     */
    /* Gateway: PokeHTIR_e_HVC_HtrSts/PokeHTIR_e_HVC_HtrStsChrt */
    /* During: PokeHTIR_e_HVC_HtrSts/PokeHTIR_e_HVC_HtrStsChrt */
    /* Entry Internal: PokeHTIR_e_HVC_HtrSts/PokeHTIR_e_HVC_HtrStsChrt */
    /* Transition: '<S668>:2' */
    Rte_IrvWrite_PokeHTIR_e_HVC_HtrSts_HVC_HtrSts_INIT_write_IRV
        (LeHTIR_e_HVC_HtrSts);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_HtrSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_Htr_DCDC_VltgOutofRng,
    VAR(boolean, AUTOMATIC) LeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_h;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_Htr_DCDC_VltgOutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng' */
    /* Chart: '<S122>/PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S122>/LeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA'
     *  SignalConversion generated from: '<S122>/LeHTIR_e_HVC_Htr_DCDC_VltgOutofRng'
     */
    /* Gateway: PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng/PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt */
    /* During: PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng/PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng/PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt */
    /* Transition: '<S669>:2' */
    if (!LeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA)
    {
        /* Transition: '<S669>:3' */
        /* Transition: '<S669>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_out =
            LeHTIR_e_HVC_Htr_DCDC_VltgOutofRng;
        rtb_LeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_h = false;

        /* Transition: '<S669>:18' */
    }
    else
    {
        /* Transition: '<S669>:4' */
        rtb_LeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_h = true;
    }

    /* End of Chart: '<S122>/PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRngChrt' */

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S122>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_write_IRV
        (rtb_LeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_h);

    /* Merge: '<Root>/Merge_97' incorporates:
     *  SignalConversion generated from: '<S122>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Htr_DCDC_VltgOutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_Htr_HV_CrntOutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_Htr_HV_CrntOutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_Htr_HV_CrntOutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_HV_CrntOutofRng' */
    /* Chart: '<S123>/PokeHTIR_e_HVC_Htr_HV_CrntOutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S123>/LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA'
     *  SignalConversion generated from: '<S123>/LeHTIR_e_HVC_Htr_HV_CrntOutofRng'
     */
    /* Gateway: PokeHTIR_e_HVC_Htr_HV_CrntOutofRng/PokeHTIR_e_HVC_Htr_HV_CrntOutofRngChrt */
    /* During: PokeHTIR_e_HVC_Htr_HV_CrntOutofRng/PokeHTIR_e_HVC_Htr_HV_CrntOutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HVC_Htr_HV_CrntOutofRng/PokeHTIR_e_HVC_Htr_HV_CrntOutofRngChrt */
    /* Transition: '<S670>:2' */
    if (!LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA)
    {
        /* Transition: '<S670>:3' */
        /* Transition: '<S670>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_Htr_HV_CrntOutofRng_out =
            LeHTIR_e_HVC_Htr_HV_CrntOutofRng;
        rtb_LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_o = false;

        /* Transition: '<S670>:18' */
    }
    else
    {
        /* Transition: '<S670>:4' */
        rtb_LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_o = true;
    }

    /* End of Chart: '<S123>/PokeHTIR_e_HVC_Htr_HV_CrntOutofRngChrt' */

    /* Merge: '<Root>/Merge_100' incorporates:
     *  SignalConversion generated from: '<S123>/VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_HV_CrntOutofRng_VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_write_IRV
        (rtb_LeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_o);

    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S123>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_HV_CrntOutofRng_Htr_HV_CrntOutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_Htr_HV_CrntOutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_HV_CrntOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_Htr_HV_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_Htr_HV_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_Htr_HV_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_Htr_HV_OutofRngFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_Htr_HV_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_Htr_HV_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_HV_OutofRng' */
    /* Chart: '<S124>/PokeHTIR_e_HVC_Htr_HV_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S124>/LeHTIR_b_HVC_Htr_HV_OutofRngFA'
     *  SignalConversion generated from: '<S124>/LeHTIR_e_HVC_Htr_HV_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HVC_Htr_HV_OutofRng/PokeHTIR_e_HVC_Htr_HV_OutofRngChrt */
    /* During: PokeHTIR_e_HVC_Htr_HV_OutofRng/PokeHTIR_e_HVC_Htr_HV_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HVC_Htr_HV_OutofRng/PokeHTIR_e_HVC_Htr_HV_OutofRngChrt */
    /* Transition: '<S671>:2' */
    if (!LeHTIR_b_HVC_Htr_HV_OutofRngFA)
    {
        /* Transition: '<S671>:3' */
        /* Transition: '<S671>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_Htr_HV_OutofRng_out =
            LeHTIR_e_HVC_Htr_HV_OutofRng;
        rtb_LeHTIR_b_HVC_Htr_HV_OutofRngFA_out = false;

        /* Transition: '<S671>:18' */
    }
    else
    {
        /* Transition: '<S671>:4' */
        rtb_LeHTIR_b_HVC_Htr_HV_OutofRngFA_out = true;
    }

    /* End of Chart: '<S124>/PokeHTIR_e_HVC_Htr_HV_OutofRngChrt' */

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S124>/VeHTIR_b_HVC_Htr_HV_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_HV_OutofRng_VeHTIR_b_HVC_Htr_HV_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HVC_Htr_HV_OutofRngFA_out);

    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S124>/VeHTIR_e_HVC_Htr_HV_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_HV_OutofRng_HVC_Htr_HV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_Htr_HV_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_HV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_Htr_InterlockStat(VAR
    (TeHVTR_e_HV_IntrlkStat, AUTOMATIC) LeHTIR_e_HVC_Htr_InterlockStat)
{

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_Htr_InterlockStat);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_InterlockStat' */
    /* Merge: '<Root>/Merge_128' incorporates:
     *  Chart: '<S125>/PokeHTIR_e_HVC_Htr_InterlockStatChrt'
     *  SignalConversion generated from: '<S125>/VeHTIR_b_HVC_Htr_InterlockStatFA_write'
     */
    /* Gateway: PokeHTIR_e_HVC_Htr_InterlockStat/PokeHTIR_e_HVC_Htr_InterlockStatChrt */
    /* During: PokeHTIR_e_HVC_Htr_InterlockStat/PokeHTIR_e_HVC_Htr_InterlockStatChrt */
    /* Entry Internal: PokeHTIR_e_HVC_Htr_InterlockStat/PokeHTIR_e_HVC_Htr_InterlockStatChrt */
    /* Transition: '<S672>:2' */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_InterlockStat_VeHTIR_b_HVC_Htr_InterlockStatFA_write_IRV
        (false);

    /* Merge: '<Root>/Merge_127' incorporates:
     *  SignalConversion generated from: '<S125>/LeHTIR_e_HVC_Htr_InterlockStat'
     *  SignalConversion generated from: '<S125>/VeHTIR_e_HVC_Htr_InterlockStat_write'
     */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_InterlockStat_Htr_InterlockStat_INIT_write_IRV
        (LeHTIR_e_HVC_Htr_InterlockStat);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_InterlockStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) PokeHTIR_e_HVC_Htr_LV_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HVC_Htr_LV_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HVC_Htr_LV_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_1

    boolean rtb_LeHTIR_b_HVC_Htr_LV_OutofRngFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_e_HVC_Htr_LV_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_1

    UNUSED_PARAMETER(LeHTIR_b_HVC_Htr_LV_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_LV_OutofRng' */
    /* Chart: '<S126>/PokeHTIR_e_HVC_Htr_LV_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S126>/LeHTIR_b_HVC_Htr_LV_OutofRngFA'
     *  SignalConversion generated from: '<S126>/LeHTIR_e_HVC_Htr_LV_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HVC_Htr_LV_OutofRng/PokeHTIR_e_HVC_Htr_LV_OutofRngChrt */
    /* During: PokeHTIR_e_HVC_Htr_LV_OutofRng/PokeHTIR_e_HVC_Htr_LV_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HVC_Htr_LV_OutofRng/PokeHTIR_e_HVC_Htr_LV_OutofRngChrt */
    /* Transition: '<S673>:2' */
    if (!LeHTIR_b_HVC_Htr_LV_OutofRngFA)
    {
        /* Transition: '<S673>:3' */
        /* Transition: '<S673>:15' */
        HTIR_ac_B.LeHTIR_e_HVC_Htr_LV_OutofRng_out =
            LeHTIR_e_HVC_Htr_LV_OutofRng;
        rtb_LeHTIR_b_HVC_Htr_LV_OutofRngFA_out = false;

        /* Transition: '<S673>:18' */
    }
    else
    {
        /* Transition: '<S673>:4' */
        rtb_LeHTIR_b_HVC_Htr_LV_OutofRngFA_out = true;
    }

    /* End of Chart: '<S126>/PokeHTIR_e_HVC_Htr_LV_OutofRngChrt' */

    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S126>/VeHTIR_b_HVC_Htr_LV_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_LV_OutofRng_VeHTIR_b_HVC_Htr_LV_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HVC_Htr_LV_OutofRngFA_out);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S126>/VeHTIR_e_HVC_Htr_LV_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HVC_Htr_LV_OutofRng_HVC_Htr_LV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HVC_Htr_LV_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HVC_Htr_LV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2CoreTemp_SensFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2CoreTemp_SensFlt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2CoreTemp_SensFltFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2CoreTemp_SensFltFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2CoreTemp_SensFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2CoreTemp_SensFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2CoreTemp_SensFlt' */
    /* Chart: '<S127>/PokeHTIR_e_HV_Htr2CoreTemp_SensFltChrt' incorporates:
     *  SignalConversion generated from: '<S127>/LeHTIR_b_HV_Htr2CoreTemp_SensFltFA'
     *  SignalConversion generated from: '<S127>/LeHTIR_e_HV_Htr2CoreTemp_SensFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2CoreTemp_SensFlt/PokeHTIR_e_HV_Htr2CoreTemp_SensFltChrt */
    /* During: PokeHTIR_e_HV_Htr2CoreTemp_SensFlt/PokeHTIR_e_HV_Htr2CoreTemp_SensFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2CoreTemp_SensFlt/PokeHTIR_e_HV_Htr2CoreTemp_SensFltChrt */
    /* Transition: '<S674>:2' */
    if (!LeHTIR_b_HV_Htr2CoreTemp_SensFltFA)
    {
        /* Transition: '<S674>:3' */
        /* Transition: '<S674>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2CoreTemp_SensFlt_out =
            LeHTIR_e_HV_Htr2CoreTemp_SensFlt;
        rtb_LeHTIR_b_HV_Htr2CoreTemp_SensFltFA_o = false;

        /* Transition: '<S674>:18' */
    }
    else
    {
        /* Transition: '<S674>:4' */
        rtb_LeHTIR_b_HV_Htr2CoreTemp_SensFltFA_o = true;
    }

    /* End of Chart: '<S127>/PokeHTIR_e_HV_Htr2CoreTemp_SensFltChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S127>/VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2CoreTemp_SensFlt_VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2CoreTemp_SensFltFA_o);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S127>/VeHTIR_e_HV_Htr2CoreTemp_SensFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2CoreTemp_SensFlt_Htr2CoreTemp_SensFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2CoreTemp_SensFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2CoreTemp_SensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2Core_OvrTmp(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HV_Htr2Core_OvrTmp, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr2Core_OvrTmpFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2Core_OvrTmpFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2Core_OvrTmp);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2Core_OvrTmpFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2Core_OvrTmp' */
    /* Chart: '<S128>/PokeHTIR_e_HV_Htr2Core_OvrTmpChrt' incorporates:
     *  SignalConversion generated from: '<S128>/LeHTIR_b_HV_Htr2Core_OvrTmpFA'
     *  SignalConversion generated from: '<S128>/LeHTIR_e_HV_Htr2Core_OvrTmp'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2Core_OvrTmp/PokeHTIR_e_HV_Htr2Core_OvrTmpChrt */
    /* During: PokeHTIR_e_HV_Htr2Core_OvrTmp/PokeHTIR_e_HV_Htr2Core_OvrTmpChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2Core_OvrTmp/PokeHTIR_e_HV_Htr2Core_OvrTmpChrt */
    /* Transition: '<S675>:2' */
    if (!LeHTIR_b_HV_Htr2Core_OvrTmpFA)
    {
        /* Transition: '<S675>:3' */
        /* Transition: '<S675>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2Core_OvrTmp_out = LeHTIR_e_HV_Htr2Core_OvrTmp;
        rtb_LeHTIR_b_HV_Htr2Core_OvrTmpFA_out = false;

        /* Transition: '<S675>:18' */
    }
    else
    {
        /* Transition: '<S675>:4' */
        rtb_LeHTIR_b_HV_Htr2Core_OvrTmpFA_out = true;
    }

    /* End of Chart: '<S128>/PokeHTIR_e_HV_Htr2Core_OvrTmpChrt' */

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S128>/VeHTIR_b_HV_Htr2Core_OvrTmpFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2Core_OvrTmp_VeHTIR_b_HV_Htr2Core_OvrTmpFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2Core_OvrTmpFA_out);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S128>/VeHTIR_e_HV_Htr2Core_OvrTmp_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2Core_OvrTmp_Htr2Core_OvrTmp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2Core_OvrTmp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2Core_OvrTmp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2DrvFlt(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HV_Htr2DrvFlt, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr2DrvFltFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2DrvFltFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2DrvFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2DrvFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2DrvFlt' */
    /* Chart: '<S129>/PokeHTIR_e_HV_Htr2DrvFltChrt' incorporates:
     *  SignalConversion generated from: '<S129>/LeHTIR_b_HV_Htr2DrvFltFA'
     *  SignalConversion generated from: '<S129>/LeHTIR_e_HV_Htr2DrvFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2DrvFlt/PokeHTIR_e_HV_Htr2DrvFltChrt */
    /* During: PokeHTIR_e_HV_Htr2DrvFlt/PokeHTIR_e_HV_Htr2DrvFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2DrvFlt/PokeHTIR_e_HV_Htr2DrvFltChrt */
    /* Transition: '<S676>:2' */
    if (!LeHTIR_b_HV_Htr2DrvFltFA)
    {
        /* Transition: '<S676>:3' */
        /* Transition: '<S676>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2DrvFlt_out = LeHTIR_e_HV_Htr2DrvFlt;
        rtb_LeHTIR_b_HV_Htr2DrvFltFA_out = false;

        /* Transition: '<S676>:18' */
    }
    else
    {
        /* Transition: '<S676>:4' */
        rtb_LeHTIR_b_HV_Htr2DrvFltFA_out = true;
    }

    /* End of Chart: '<S129>/PokeHTIR_e_HV_Htr2DrvFltChrt' */

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S129>/VeHTIR_b_HV_Htr2DrvFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2DrvFlt_VeHTIR_b_HV_Htr2DrvFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2DrvFltFA_out);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S129>/VeHTIR_e_HV_Htr2DrvFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2DrvFlt_Htr2DrvFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2DrvFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2DrvFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2HVCrnt_SnsrFlt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2HVCrnt_SnsrFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt' */
    /* Chart: '<S130>/PokeHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt' incorporates:
     *  SignalConversion generated from: '<S130>/LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA'
     *  SignalConversion generated from: '<S130>/LeHTIR_e_HV_Htr2HVCrnt_SnsrFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt/PokeHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt */
    /* During: PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt/PokeHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt/PokeHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt */
    /* Transition: '<S677>:2' */
    if (!LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA)
    {
        /* Transition: '<S677>:3' */
        /* Transition: '<S677>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_out =
            LeHTIR_e_HV_Htr2HVCrnt_SnsrFlt;
        rtb_LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_out = false;

        /* Transition: '<S677>:18' */
    }
    else
    {
        /* Transition: '<S677>:4' */
        rtb_LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_out = true;
    }

    /* End of Chart: '<S130>/PokeHTIR_e_HV_Htr2HVCrnt_SnsrFltChrt' */

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S130>/VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_out);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S130>/VeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_Htr2HVCrnt_SnsrFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2IntCom_Err(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HV_Htr2IntCom_Err, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr2IntCom_ErrFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2IntCom_ErrFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2IntCom_Err);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2IntCom_ErrFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2IntCom_Err' */
    /* Chart: '<S131>/PokeHTIR_e_HV_Htr2IntCom_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S131>/LeHTIR_b_HV_Htr2IntCom_ErrFA'
     *  SignalConversion generated from: '<S131>/LeHTIR_e_HV_Htr2IntCom_Err'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2IntCom_Err/PokeHTIR_e_HV_Htr2IntCom_ErrChrt */
    /* During: PokeHTIR_e_HV_Htr2IntCom_Err/PokeHTIR_e_HV_Htr2IntCom_ErrChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2IntCom_Err/PokeHTIR_e_HV_Htr2IntCom_ErrChrt */
    /* Transition: '<S678>:2' */
    if (!LeHTIR_b_HV_Htr2IntCom_ErrFA)
    {
        /* Transition: '<S678>:3' */
        /* Transition: '<S678>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2IntCom_Err_out = LeHTIR_e_HV_Htr2IntCom_Err;
        rtb_LeHTIR_b_HV_Htr2IntCom_ErrFA_out = false;

        /* Transition: '<S678>:18' */
    }
    else
    {
        /* Transition: '<S678>:4' */
        rtb_LeHTIR_b_HV_Htr2IntCom_ErrFA_out = true;
    }

    /* End of Chart: '<S131>/PokeHTIR_e_HV_Htr2IntCom_ErrChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S131>/VeHTIR_b_HV_Htr2IntCom_ErrFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2IntCom_Err_VeHTIR_b_HV_Htr2IntCom_ErrFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2IntCom_ErrFA_out);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S131>/VeHTIR_e_HV_Htr2IntCom_Err_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2IntCom_Err_HVC_Htr2IntCom_Err_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2IntCom_Err_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2IntCom_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2PCBTmp_SnsrFlt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2PCBTmp_SnsrFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt' */
    /* Chart: '<S132>/PokeHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt' incorporates:
     *  SignalConversion generated from: '<S132>/LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA'
     *  SignalConversion generated from: '<S132>/LeHTIR_e_HV_Htr2PCBTmp_SnsrFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt/PokeHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt */
    /* During: PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt/PokeHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt/PokeHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt */
    /* Transition: '<S679>:2' */
    if (!LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA)
    {
        /* Transition: '<S679>:3' */
        /* Transition: '<S679>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_out =
            LeHTIR_e_HV_Htr2PCBTmp_SnsrFlt;
        rtb_LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_out = false;

        /* Transition: '<S679>:18' */
    }
    else
    {
        /* Transition: '<S679>:4' */
        rtb_LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_out = true;
    }

    /* End of Chart: '<S132>/PokeHTIR_e_HV_Htr2PCBTmp_SnsrFltChrt' */

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S132>/VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_out);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S132>/VeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_Htr2PCBTmp_SnsrFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2ProcesMemory_Flt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2ProcesMemory_Flt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2ProcesMemory_FltFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2ProcesMemory_FltFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2ProcesMemory_Flt);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2ProcesMemory_FltFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2ProcesMemory_Flt' */
    /* Chart: '<S133>/PokeHTIR_e_HV_Htr2ProcesMemory_FltChrt' incorporates:
     *  SignalConversion generated from: '<S133>/LeHTIR_b_HV_Htr2ProcesMemory_FltFA'
     *  SignalConversion generated from: '<S133>/LeHTIR_e_HV_Htr2ProcesMemory_Flt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2ProcesMemory_Flt/PokeHTIR_e_HV_Htr2ProcesMemory_FltChrt */
    /* During: PokeHTIR_e_HV_Htr2ProcesMemory_Flt/PokeHTIR_e_HV_Htr2ProcesMemory_FltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2ProcesMemory_Flt/PokeHTIR_e_HV_Htr2ProcesMemory_FltChrt */
    /* Transition: '<S680>:2' */
    if (!LeHTIR_b_HV_Htr2ProcesMemory_FltFA)
    {
        /* Transition: '<S680>:3' */
        /* Transition: '<S680>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2ProcesMemory_Flt_out =
            LeHTIR_e_HV_Htr2ProcesMemory_Flt;
        rtb_LeHTIR_b_HV_Htr2ProcesMemory_FltFA_o = false;

        /* Transition: '<S680>:18' */
    }
    else
    {
        /* Transition: '<S680>:4' */
        rtb_LeHTIR_b_HV_Htr2ProcesMemory_FltFA_o = true;
    }

    /* End of Chart: '<S133>/PokeHTIR_e_HV_Htr2ProcesMemory_FltChrt' */

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S133>/VeHTIR_b_HV_Htr2ProcesMemory_FltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2ProcesMemory_Flt_VeHTIR_b_HV_Htr2ProcesMemory_FltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2ProcesMemory_FltFA_o);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S133>/VeHTIR_e_HV_Htr2ProcesMemory_Flt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2ProcesMemory_Flt_Htr2ProcesMemory_Flt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2ProcesMemory_Flt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2ProcesMemory_Flt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2Resis_PCB_OvrTemp, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2Resis_PCB_OvrTemp);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp' */
    /* Chart: '<S134>/PokeHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt' incorporates:
     *  SignalConversion generated from: '<S134>/LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA'
     *  SignalConversion generated from: '<S134>/LeHTIR_e_HV_Htr2Resis_PCB_OvrTemp'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp/PokeHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt */
    /* During: PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp/PokeHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp/PokeHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt */
    /* Transition: '<S681>:2' */
    if (!LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA)
    {
        /* Transition: '<S681>:3' */
        /* Transition: '<S681>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_out =
            LeHTIR_e_HV_Htr2Resis_PCB_OvrTemp;
        rtb_LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_ = false;

        /* Transition: '<S681>:18' */
    }
    else
    {
        /* Transition: '<S681>:4' */
        rtb_LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_ = true;
    }

    /* End of Chart: '<S134>/PokeHTIR_e_HV_Htr2Resis_PCB_OvrTempChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S134>/VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S134>/VeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_Htr2Resis_PCB_OvrTemp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2SelfProtect_Actv(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2SelfProtect_Actv, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2SelfProtect_ActvFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2SelfProtect_ActvFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2SelfProtect_Actv);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2SelfProtect_ActvFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2SelfProtect_Actv' */
    /* Chart: '<S135>/PokeHTIR_e_HV_Htr2SelfProtect_ActvChrt' incorporates:
     *  SignalConversion generated from: '<S135>/LeHTIR_b_HV_Htr2SelfProtect_ActvFA'
     *  SignalConversion generated from: '<S135>/LeHTIR_e_HV_Htr2SelfProtect_Actv'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2SelfProtect_Actv/PokeHTIR_e_HV_Htr2SelfProtect_ActvChrt */
    /* During: PokeHTIR_e_HV_Htr2SelfProtect_Actv/PokeHTIR_e_HV_Htr2SelfProtect_ActvChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2SelfProtect_Actv/PokeHTIR_e_HV_Htr2SelfProtect_ActvChrt */
    /* Transition: '<S682>:2' */
    if (!LeHTIR_b_HV_Htr2SelfProtect_ActvFA)
    {
        /* Transition: '<S682>:3' */
        /* Transition: '<S682>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2SelfProtect_Actv_out =
            LeHTIR_e_HV_Htr2SelfProtect_Actv;
        rtb_LeHTIR_b_HV_Htr2SelfProtect_ActvFA_o = false;

        /* Transition: '<S682>:18' */
    }
    else
    {
        /* Transition: '<S682>:4' */
        rtb_LeHTIR_b_HV_Htr2SelfProtect_ActvFA_o = true;
    }

    /* End of Chart: '<S135>/PokeHTIR_e_HV_Htr2SelfProtect_ActvChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S135>/VeHTIR_b_HV_Htr2SelfProtect_ActvFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2SelfProtect_Actv_VeHTIR_b_HV_Htr2SelfProtect_ActvFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2SelfProtect_ActvFA_o);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S135>/VeHTIR_e_HV_Htr2SelfProtect_Actv_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2SelfProtect_Actv_Htr2SelfProtect_Actv_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2SelfProtect_Actv_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2SelfProtect_Actv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2Sts(VAR(TeHTIR_e_HVC_HtrSts, AUTOMATIC)
    LeHTIR_e_HV_Htr2Sts)
{

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2Sts);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2Sts' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S136>/LeHTIR_e_HV_Htr2Sts'
     *  SignalConversion generated from: '<S136>/VeHTIR_e_HV_Htr2Sts_write'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2Sts/PokeHTIR_e_HV_Htr2StsChrt */
    /* During: PokeHTIR_e_HV_Htr2Sts/PokeHTIR_e_HV_Htr2StsChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2Sts/PokeHTIR_e_HV_Htr2StsChrt */
    /* Transition: '<S683>:2' */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2Sts_HVC_Htr2Sts_INIT_write_IRV
        (LeHTIR_e_HV_Htr2Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2TmpOvrheatg(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HV_Htr2TmpOvrheatg, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr2TmpOvrheatgFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2TmpOvrheatgFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2TmpOvrheatg);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2TmpOvrheatgFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2TmpOvrheatg' */
    /* Chart: '<S137>/PokeHTIR_e_HV_Htr2TmpOvrheatgChrt' incorporates:
     *  SignalConversion generated from: '<S137>/LeHTIR_b_HV_Htr2TmpOvrheatgFA'
     *  SignalConversion generated from: '<S137>/LeHTIR_e_HV_Htr2TmpOvrheatg'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2TmpOvrheatg/PokeHTIR_e_HV_Htr2TmpOvrheatgChrt */
    /* During: PokeHTIR_e_HV_Htr2TmpOvrheatg/PokeHTIR_e_HV_Htr2TmpOvrheatgChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2TmpOvrheatg/PokeHTIR_e_HV_Htr2TmpOvrheatgChrt */
    /* Transition: '<S684>:2' */
    if (!LeHTIR_b_HV_Htr2TmpOvrheatgFA)
    {
        /* Transition: '<S684>:3' */
        /* Transition: '<S684>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2TmpOvrheatg_out = LeHTIR_e_HV_Htr2TmpOvrheatg;
        rtb_LeHTIR_b_HV_Htr2TmpOvrheatgFA_out = false;

        /* Transition: '<S684>:18' */
    }
    else
    {
        /* Transition: '<S684>:4' */
        rtb_LeHTIR_b_HV_Htr2TmpOvrheatgFA_out = true;
    }

    /* End of Chart: '<S137>/PokeHTIR_e_HV_Htr2TmpOvrheatgChrt' */

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S137>/VeHTIR_b_HV_Htr2TmpOvrheatgFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2TmpOvrheatg_VeHTIR_b_HV_Htr2TmpOvrheatgFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2TmpOvrheatgFA_out);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S137>/VeHTIR_e_HV_Htr2TmpOvrheatg_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2TmpOvrheatg_Htr2TmpOvrheatg_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2TmpOvrheatg_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2TmpOvrheatg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2_HV_CrntOutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2_HV_CrntOutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2_HV_CrntOutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2_HV_CrntOutofRng' */
    /* Chart: '<S138>/PokeHTIR_e_HV_Htr2_HV_CrntOutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S138>/LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA'
     *  SignalConversion generated from: '<S138>/LeHTIR_e_HV_Htr2_HV_CrntOutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2_HV_CrntOutofRng/PokeHTIR_e_HV_Htr2_HV_CrntOutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr2_HV_CrntOutofRng/PokeHTIR_e_HV_Htr2_HV_CrntOutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2_HV_CrntOutofRng/PokeHTIR_e_HV_Htr2_HV_CrntOutofRngChrt */
    /* Transition: '<S685>:2' */
    if (!LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA)
    {
        /* Transition: '<S685>:3' */
        /* Transition: '<S685>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2_HV_CrntOutofRng_out =
            LeHTIR_e_HV_Htr2_HV_CrntOutofRng;
        rtb_LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_o = false;

        /* Transition: '<S685>:18' */
    }
    else
    {
        /* Transition: '<S685>:4' */
        rtb_LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_o = true;
    }

    /* End of Chart: '<S138>/PokeHTIR_e_HV_Htr2_HV_CrntOutofRngChrt' */

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S138>/VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2_HV_CrntOutofRng_VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_o);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S138>/VeHTIR_e_HV_Htr2_HV_CrntOutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2_HV_CrntOutofRng_Htr2_HV_CrntOutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2_HV_CrntOutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2_HV_CrntOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2_HV_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2_HV_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2_HV_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2_HV_OutofRngFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2_HV_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2_HV_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2_HV_OutofRng' */
    /* Chart: '<S139>/PokeHTIR_e_HV_Htr2_HV_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S139>/LeHTIR_b_HV_Htr2_HV_OutofRngFA'
     *  SignalConversion generated from: '<S139>/LeHTIR_e_HV_Htr2_HV_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2_HV_OutofRng/PokeHTIR_e_HV_Htr2_HV_OutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr2_HV_OutofRng/PokeHTIR_e_HV_Htr2_HV_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2_HV_OutofRng/PokeHTIR_e_HV_Htr2_HV_OutofRngChrt */
    /* Transition: '<S686>:2' */
    if (!LeHTIR_b_HV_Htr2_HV_OutofRngFA)
    {
        /* Transition: '<S686>:3' */
        /* Transition: '<S686>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2_HV_OutofRng_out =
            LeHTIR_e_HV_Htr2_HV_OutofRng;
        rtb_LeHTIR_b_HV_Htr2_HV_OutofRngFA_out = false;

        /* Transition: '<S686>:18' */
    }
    else
    {
        /* Transition: '<S686>:4' */
        rtb_LeHTIR_b_HV_Htr2_HV_OutofRngFA_out = true;
    }

    /* End of Chart: '<S139>/PokeHTIR_e_HV_Htr2_HV_OutofRngChrt' */

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S139>/VeHTIR_b_HV_Htr2_HV_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2_HV_OutofRng_VeHTIR_b_HV_Htr2_HV_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2_HV_OutofRngFA_out);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S139>/VeHTIR_e_HV_Htr2_HV_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2_HV_OutofRng_HVC_Htr2_HV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2_HV_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2_HV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_2

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr2_LV_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr2_LV_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr2_LV_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_2

    boolean rtb_LeHTIR_b_HV_Htr2_LV_OutofRngFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr2_LV_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_2

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr2_LV_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr2_LV_OutofRng' */
    /* Chart: '<S140>/PokeHTIR_e_HV_Htr2_LV_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S140>/LeHTIR_b_HV_Htr2_LV_OutofRngFA'
     *  SignalConversion generated from: '<S140>/LeHTIR_e_HV_Htr2_LV_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr2_LV_OutofRng/PokeHTIR_e_HV_Htr2_LV_OutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr2_LV_OutofRng/PokeHTIR_e_HV_Htr2_LV_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr2_LV_OutofRng/PokeHTIR_e_HV_Htr2_LV_OutofRngChrt */
    /* Transition: '<S687>:2' */
    if (!LeHTIR_b_HV_Htr2_LV_OutofRngFA)
    {
        /* Transition: '<S687>:3' */
        /* Transition: '<S687>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr2_LV_OutofRng_out =
            LeHTIR_e_HV_Htr2_LV_OutofRng;
        rtb_LeHTIR_b_HV_Htr2_LV_OutofRngFA_out = false;

        /* Transition: '<S687>:18' */
    }
    else
    {
        /* Transition: '<S687>:4' */
        rtb_LeHTIR_b_HV_Htr2_LV_OutofRngFA_out = true;
    }

    /* End of Chart: '<S140>/PokeHTIR_e_HV_Htr2_LV_OutofRngChrt' */

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S140>/VeHTIR_b_HV_Htr2_LV_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2_LV_OutofRng_VeHTIR_b_HV_Htr2_LV_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr2_LV_OutofRngFA_out);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S140>/VeHTIR_e_HV_Htr2_LV_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr2_LV_OutofRng_HVC_Htr2_LV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr2_LV_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr2_LV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr3Cntctr_StckClsd(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr3Cntctr_StckClsd, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr3Cntctr_StckClsdFA)
{

#if Rte_SysCon_Variant_HTIR_3

    boolean rtb_LeHTIR_b_HV_Htr3Cntctr_StckClsdFA_ou;

#endif

#if !Rte_SysCon_Variant_HTIR_3

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr3Cntctr_StckClsd);

#endif

#if !Rte_SysCon_Variant_HTIR_3

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr3Cntctr_StckClsdFA);

#endif

#if Rte_SysCon_Variant_HTIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr3Cntctr_StckClsd' */
    /* Chart: '<S141>/PokeHTIR_e_HV_Htr3Cntctr_StckClsdChrt' incorporates:
     *  SignalConversion generated from: '<S141>/LeHTIR_b_HV_Htr3Cntctr_StckClsdFA'
     *  SignalConversion generated from: '<S141>/LeHTIR_e_HV_Htr3Cntctr_StckClsd'
     */
    /* Gateway: PokeHTIR_e_HV_Htr3Cntctr_StckClsd/PokeHTIR_e_HV_Htr3Cntctr_StckClsdChrt */
    /* During: PokeHTIR_e_HV_Htr3Cntctr_StckClsd/PokeHTIR_e_HV_Htr3Cntctr_StckClsdChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr3Cntctr_StckClsd/PokeHTIR_e_HV_Htr3Cntctr_StckClsdChrt */
    /* Transition: '<S688>:2' */
    if (!LeHTIR_b_HV_Htr3Cntctr_StckClsdFA)
    {
        /* Transition: '<S688>:3' */
        /* Transition: '<S688>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr3Cntctr_StckClsd_out =
            LeHTIR_e_HV_Htr3Cntctr_StckClsd;
        rtb_LeHTIR_b_HV_Htr3Cntctr_StckClsdFA_ou = false;

        /* Transition: '<S688>:18' */
    }
    else
    {
        /* Transition: '<S688>:4' */
        rtb_LeHTIR_b_HV_Htr3Cntctr_StckClsdFA_ou = true;
    }

    /* End of Chart: '<S141>/PokeHTIR_e_HV_Htr3Cntctr_StckClsdChrt' */

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S141>/VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr3Cntctr_StckClsd_VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr3Cntctr_StckClsdFA_ou);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S141>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr3Cntctr_StckClsd_Htr3Cntctr_StckClsd_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr3Cntctr_StckClsd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr3Cntctr_StckClsd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_3

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr3Sts(VAR(TeHTIR_e_HVC_HtrSts, AUTOMATIC)
    LeHTIR_e_HV_Htr3Sts)
{

#if !Rte_SysCon_Variant_HTIR_3

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr3Sts);

#endif

#if Rte_SysCon_Variant_HTIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr3Sts' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S142>/LeHTIR_e_HV_Htr3Sts'
     *  SignalConversion generated from: '<S142>/VeHTIR_e_HV_Htr3Sts_write'
     */
    /* Gateway: PokeHTIR_e_HV_Htr3Sts/PokeHTIR_e_HV_Htr3StsChrt */
    /* During: PokeHTIR_e_HV_Htr3Sts/PokeHTIR_e_HV_Htr3StsChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr3Sts/PokeHTIR_e_HV_Htr3StsChrt */
    /* Transition: '<S689>:2' */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr3Sts_HVC_Htr3Sts_INIT_write_IRV
        (LeHTIR_e_HV_Htr3Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr3Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4ClntIn_TempSensFlt,
    VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr4ClntIn_TempSensFltFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4ClntIn_TempSensFlt_m;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4ClntIn_TempSensFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4ClntIn_TempSensFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt' */
    /* Chart: '<S143>/PokeHTIR_e_HV_Htr4ClntIn_TempSensFltChrt' incorporates:
     *  SignalConversion generated from: '<S143>/LeHTIR_b_HV_Htr4ClntIn_TempSensFltFA'
     *  SignalConversion generated from: '<S143>/LeHTIR_e_HV_Htr4ClntIn_TempSensFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt/PokeHTIR_e_HV_Htr4ClntIn_TempSensFltChrt */
    /* During: PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt/PokeHTIR_e_HV_Htr4ClntIn_TempSensFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt/PokeHTIR_e_HV_Htr4ClntIn_TempSensFltChrt */
    /* Transition: '<S690>:2' */
    if (!LeHTIR_b_HV_Htr4ClntIn_TempSensFltFA)
    {
        /* Transition: '<S690>:3' */
        /* Transition: '<S690>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4ClntIn_TempSensFlt_out =
            LeHTIR_e_HV_Htr4ClntIn_TempSensFlt;
        rtb_LeHTIR_b_HV_Htr4ClntIn_TempSensFlt_m = false;

        /* Transition: '<S690>:18' */
    }
    else
    {
        /* Transition: '<S690>:4' */
        rtb_LeHTIR_b_HV_Htr4ClntIn_TempSensFlt_m = true;
    }

    /* End of Chart: '<S143>/PokeHTIR_e_HV_Htr4ClntIn_TempSensFltChrt' */

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S143>/VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt_VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4ClntIn_TempSensFlt_m);

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S143>/VeHTIR_e_HV_Htr4ClntIn_TempSensFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt_Htr4ClntIn_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4ClntIn_TempSensFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ClntIn_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4ClntOut_TempSensFlt,
    VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr4ClntOut_TempSensFltFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4ClntOut_TempSensFl_j;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4ClntOut_TempSensFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4ClntOut_TempSensFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt' */
    /* Chart: '<S144>/PokeHTIR_e_HV_Htr4ClntOut_TempSensFltChrt' incorporates:
     *  SignalConversion generated from: '<S144>/LeHTIR_b_HV_Htr4ClntOut_TempSensFltFA'
     *  SignalConversion generated from: '<S144>/LeHTIR_e_HV_Htr4ClntOut_TempSensFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt/PokeHTIR_e_HV_Htr4ClntOut_TempSensFltChrt */
    /* During: PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt/PokeHTIR_e_HV_Htr4ClntOut_TempSensFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt/PokeHTIR_e_HV_Htr4ClntOut_TempSensFltChrt */
    /* Transition: '<S691>:2' */
    if (!LeHTIR_b_HV_Htr4ClntOut_TempSensFltFA)
    {
        /* Transition: '<S691>:3' */
        /* Transition: '<S691>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4ClntOut_TempSensFlt_out =
            LeHTIR_e_HV_Htr4ClntOut_TempSensFlt;
        rtb_LeHTIR_b_HV_Htr4ClntOut_TempSensFl_j = false;

        /* Transition: '<S691>:18' */
    }
    else
    {
        /* Transition: '<S691>:4' */
        rtb_LeHTIR_b_HV_Htr4ClntOut_TempSensFl_j = true;
    }

    /* End of Chart: '<S144>/PokeHTIR_e_HV_Htr4ClntOut_TempSensFltChrt' */

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S144>/VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt_VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4ClntOut_TempSensFl_j);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S144>/VeHTIR_e_HV_Htr4ClntOut_TempSensFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt_Htr4ClntOut_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4ClntOut_TempSensFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ClntOut_TempSensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4ClntTemp_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4ClntTemp_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4ClntTemp_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ClntTemp_OutofRng' */
    /* Chart: '<S145>/PokeHTIR_e_HV_Htr4ClntTemp_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S145>/LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA'
     *  SignalConversion generated from: '<S145>/LeHTIR_e_HV_Htr4ClntTemp_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4ClntTemp_OutofRng/PokeHTIR_e_HV_Htr4ClntTemp_OutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr4ClntTemp_OutofRng/PokeHTIR_e_HV_Htr4ClntTemp_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4ClntTemp_OutofRng/PokeHTIR_e_HV_Htr4ClntTemp_OutofRngChrt */
    /* Transition: '<S692>:2' */
    if (!LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA)
    {
        /* Transition: '<S692>:3' */
        /* Transition: '<S692>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4ClntTemp_OutofRng_out =
            LeHTIR_e_HV_Htr4ClntTemp_OutofRng;
        rtb_LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_ = false;

        /* Transition: '<S692>:18' */
    }
    else
    {
        /* Transition: '<S692>:4' */
        rtb_LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_ = true;
    }

    /* End of Chart: '<S145>/PokeHTIR_e_HV_Htr4ClntTemp_OutofRngChrt' */

    /* Merge: '<Root>/Merge_82' incorporates:
     *  SignalConversion generated from: '<S145>/VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ClntTemp_OutofRng_VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  SignalConversion generated from: '<S145>/VeHTIR_e_HV_Htr4ClntTemp_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ClntTemp_OutofRng_HVC_Htr4ClntTemp_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4ClntTemp_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ClntTemp_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4CoreTemp_SensFlt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4CoreTemp_SensFlt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4CoreTemp_SensFltFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4CoreTemp_SensFltFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4CoreTemp_SensFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4CoreTemp_SensFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4CoreTemp_SensFlt' */
    /* Chart: '<S146>/PokeHTIR_e_HV_Htr4CoreTemp_SensFltChrt' incorporates:
     *  SignalConversion generated from: '<S146>/LeHTIR_b_HV_Htr4CoreTemp_SensFltFA'
     *  SignalConversion generated from: '<S146>/LeHTIR_e_HV_Htr4CoreTemp_SensFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4CoreTemp_SensFlt/PokeHTIR_e_HV_Htr4CoreTemp_SensFltChrt */
    /* During: PokeHTIR_e_HV_Htr4CoreTemp_SensFlt/PokeHTIR_e_HV_Htr4CoreTemp_SensFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4CoreTemp_SensFlt/PokeHTIR_e_HV_Htr4CoreTemp_SensFltChrt */
    /* Transition: '<S693>:2' */
    if (!LeHTIR_b_HV_Htr4CoreTemp_SensFltFA)
    {
        /* Transition: '<S693>:3' */
        /* Transition: '<S693>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4CoreTemp_SensFlt_out =
            LeHTIR_e_HV_Htr4CoreTemp_SensFlt;
        rtb_LeHTIR_b_HV_Htr4CoreTemp_SensFltFA_o = false;

        /* Transition: '<S693>:18' */
    }
    else
    {
        /* Transition: '<S693>:4' */
        rtb_LeHTIR_b_HV_Htr4CoreTemp_SensFltFA_o = true;
    }

    /* End of Chart: '<S146>/PokeHTIR_e_HV_Htr4CoreTemp_SensFltChrt' */

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S146>/VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4CoreTemp_SensFlt_VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4CoreTemp_SensFltFA_o);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S146>/VeHTIR_e_HV_Htr4CoreTemp_SensFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4CoreTemp_SensFlt_Htr4CoreTemp_SensFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4CoreTemp_SensFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4CoreTemp_SensFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4DrvFlt(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HV_Htr4DrvFlt, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4DrvFltFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4DrvFltFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4DrvFlt);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4DrvFltFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4DrvFlt' */
    /* Chart: '<S147>/PokeHTIR_e_HV_Htr4DrvFltChrt' incorporates:
     *  SignalConversion generated from: '<S147>/LeHTIR_b_HV_Htr4DrvFltFA'
     *  SignalConversion generated from: '<S147>/LeHTIR_e_HV_Htr4DrvFlt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4DrvFlt/PokeHTIR_e_HV_Htr4DrvFltChrt */
    /* During: PokeHTIR_e_HV_Htr4DrvFlt/PokeHTIR_e_HV_Htr4DrvFltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4DrvFlt/PokeHTIR_e_HV_Htr4DrvFltChrt */
    /* Transition: '<S694>:2' */
    if (!LeHTIR_b_HV_Htr4DrvFltFA)
    {
        /* Transition: '<S694>:3' */
        /* Transition: '<S694>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4DrvFlt_out = LeHTIR_e_HV_Htr4DrvFlt;
        rtb_LeHTIR_b_HV_Htr4DrvFltFA_out = false;

        /* Transition: '<S694>:18' */
    }
    else
    {
        /* Transition: '<S694>:4' */
        rtb_LeHTIR_b_HV_Htr4DrvFltFA_out = true;
    }

    /* End of Chart: '<S147>/PokeHTIR_e_HV_Htr4DrvFltChrt' */

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S147>/VeHTIR_b_HV_Htr4DrvFltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4DrvFlt_VeHTIR_b_HV_Htr4DrvFltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4DrvFltFA_out);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S147>/VeHTIR_e_HV_Htr4DrvFlt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4DrvFlt_Htr4DrvFlt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4DrvFlt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4DrvFlt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4HighVol_Dwn(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HV_Htr4HighVol_Dwn, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4HighVol_DwnFA)
{
    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4HighVol_Dwn);
    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4HighVol_DwnFA);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4IntCom_Err(VAR(TeHTIR_e_HVC_Htr_Warning,
    AUTOMATIC) LeHTIR_e_HV_Htr4IntCom_Err, VAR(boolean, AUTOMATIC)
    LeHTIR_b_HV_Htr4IntCom_ErrFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4IntCom_ErrFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4IntCom_Err);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4IntCom_ErrFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4IntCom_Err' */
    /* Chart: '<S149>/PokeHTIR_e_HV_Htr4IntCom_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S149>/LeHTIR_b_HV_Htr4IntCom_ErrFA'
     *  SignalConversion generated from: '<S149>/LeHTIR_e_HV_Htr4IntCom_Err'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4IntCom_Err/PokeHTIR_e_HV_Htr4IntCom_ErrChrt */
    /* During: PokeHTIR_e_HV_Htr4IntCom_Err/PokeHTIR_e_HV_Htr4IntCom_ErrChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4IntCom_Err/PokeHTIR_e_HV_Htr4IntCom_ErrChrt */
    /* Transition: '<S696>:2' */
    if (!LeHTIR_b_HV_Htr4IntCom_ErrFA)
    {
        /* Transition: '<S696>:3' */
        /* Transition: '<S696>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4IntCom_Err_out = LeHTIR_e_HV_Htr4IntCom_Err;
        rtb_LeHTIR_b_HV_Htr4IntCom_ErrFA_out = false;

        /* Transition: '<S696>:18' */
    }
    else
    {
        /* Transition: '<S696>:4' */
        rtb_LeHTIR_b_HV_Htr4IntCom_ErrFA_out = true;
    }

    /* End of Chart: '<S149>/PokeHTIR_e_HV_Htr4IntCom_ErrChrt' */

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S149>/VeHTIR_b_HV_Htr4IntCom_ErrFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4IntCom_Err_VeHTIR_b_HV_Htr4IntCom_ErrFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4IntCom_ErrFA_out);

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S149>/VeHTIR_e_HV_Htr4IntCom_Err_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4IntCom_Err_HVC_Htr4IntCom_Err_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4IntCom_Err_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4IntCom_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4ProcesMemory_Flt(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4ProcesMemory_Flt, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4ProcesMemory_FltFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4ProcesMemory_FltFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4ProcesMemory_Flt);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4ProcesMemory_FltFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ProcesMemory_Flt' */
    /* Chart: '<S150>/PokeHTIR_e_HV_Htr4ProcesMemory_FltChrt' incorporates:
     *  SignalConversion generated from: '<S150>/LeHTIR_b_HV_Htr4ProcesMemory_FltFA'
     *  SignalConversion generated from: '<S150>/LeHTIR_e_HV_Htr4ProcesMemory_Flt'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4ProcesMemory_Flt/PokeHTIR_e_HV_Htr4ProcesMemory_FltChrt */
    /* During: PokeHTIR_e_HV_Htr4ProcesMemory_Flt/PokeHTIR_e_HV_Htr4ProcesMemory_FltChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4ProcesMemory_Flt/PokeHTIR_e_HV_Htr4ProcesMemory_FltChrt */
    /* Transition: '<S697>:2' */
    if (!LeHTIR_b_HV_Htr4ProcesMemory_FltFA)
    {
        /* Transition: '<S697>:3' */
        /* Transition: '<S697>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4ProcesMemory_Flt_out =
            LeHTIR_e_HV_Htr4ProcesMemory_Flt;
        rtb_LeHTIR_b_HV_Htr4ProcesMemory_FltFA_o = false;

        /* Transition: '<S697>:18' */
    }
    else
    {
        /* Transition: '<S697>:4' */
        rtb_LeHTIR_b_HV_Htr4ProcesMemory_FltFA_o = true;
    }

    /* End of Chart: '<S150>/PokeHTIR_e_HV_Htr4ProcesMemory_FltChrt' */

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S150>/VeHTIR_b_HV_Htr4ProcesMemory_FltFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ProcesMemory_Flt_VeHTIR_b_HV_Htr4ProcesMemory_FltFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4ProcesMemory_FltFA_o);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S150>/VeHTIR_e_HV_Htr4ProcesMemory_Flt_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4ProcesMemory_Flt_Htr4ProcesMemory_Flt_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4ProcesMemory_Flt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4ProcesMemory_Flt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4Resis_PCB_OvrTemp, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4Resis_PCB_OvrTemp);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp' */
    /* Chart: '<S151>/PokeHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt' incorporates:
     *  SignalConversion generated from: '<S151>/LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA'
     *  SignalConversion generated from: '<S151>/LeHTIR_e_HV_Htr4Resis_PCB_OvrTemp'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp/PokeHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt */
    /* During: PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp/PokeHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp/PokeHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt */
    /* Transition: '<S698>:2' */
    if (!LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA)
    {
        /* Transition: '<S698>:3' */
        /* Transition: '<S698>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_out =
            LeHTIR_e_HV_Htr4Resis_PCB_OvrTemp;
        rtb_LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_ = false;

        /* Transition: '<S698>:18' */
    }
    else
    {
        /* Transition: '<S698>:4' */
        rtb_LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_ = true;
    }

    /* End of Chart: '<S151>/PokeHTIR_e_HV_Htr4Resis_PCB_OvrTempChrt' */

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S151>/VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S151>/VeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_Htr4Resis_PCB_OvrTemp_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4Resis_PCB_OvrTemp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4Resis_PCB_OvrTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4SelfProtect_Actv(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4SelfProtect_Actv, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4SelfProtect_ActvFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4SelfProtect_ActvFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4SelfProtect_Actv);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4SelfProtect_ActvFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4SelfProtect_Actv' */
    /* Chart: '<S152>/PokeHTIR_e_HV_Htr4SelfProtect_ActvChrt' incorporates:
     *  SignalConversion generated from: '<S152>/LeHTIR_b_HV_Htr4SelfProtect_ActvFA'
     *  SignalConversion generated from: '<S152>/LeHTIR_e_HV_Htr4SelfProtect_Actv'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4SelfProtect_Actv/PokeHTIR_e_HV_Htr4SelfProtect_ActvChrt */
    /* During: PokeHTIR_e_HV_Htr4SelfProtect_Actv/PokeHTIR_e_HV_Htr4SelfProtect_ActvChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4SelfProtect_Actv/PokeHTIR_e_HV_Htr4SelfProtect_ActvChrt */
    /* Transition: '<S699>:2' */
    if (!LeHTIR_b_HV_Htr4SelfProtect_ActvFA)
    {
        /* Transition: '<S699>:3' */
        /* Transition: '<S699>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4SelfProtect_Actv_out =
            LeHTIR_e_HV_Htr4SelfProtect_Actv;
        rtb_LeHTIR_b_HV_Htr4SelfProtect_ActvFA_o = false;

        /* Transition: '<S699>:18' */
    }
    else
    {
        /* Transition: '<S699>:4' */
        rtb_LeHTIR_b_HV_Htr4SelfProtect_ActvFA_o = true;
    }

    /* End of Chart: '<S152>/PokeHTIR_e_HV_Htr4SelfProtect_ActvChrt' */

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S152>/VeHTIR_b_HV_Htr4SelfProtect_ActvFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4SelfProtect_Actv_VeHTIR_b_HV_Htr4SelfProtect_ActvFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4SelfProtect_ActvFA_o);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S152>/VeHTIR_e_HV_Htr4SelfProtect_Actv_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4SelfProtect_Actv_Htr4SelfProtect_Actv_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4SelfProtect_Actv_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4SelfProtect_Actv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4Sts(VAR(TeHTIR_e_HVC_HtrSts, AUTOMATIC)
    LeHTIR_e_HV_Htr4Sts)
{

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4Sts);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4Sts' */
    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S153>/LeHTIR_e_HV_Htr4Sts'
     *  SignalConversion generated from: '<S153>/VeHTIR_e_HV_Htr4Sts_write'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4Sts/PokeHTIR_e_HV_Htr4StsChrt */
    /* During: PokeHTIR_e_HV_Htr4Sts/PokeHTIR_e_HV_Htr4StsChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4Sts/PokeHTIR_e_HV_Htr4StsChrt */
    /* Transition: '<S700>:2' */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4Sts_HVC_Htr4Sts_INIT_write_IRV
        (LeHTIR_e_HV_Htr4Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4_DCDC_VltgOutofRng,
    VAR(boolean, AUTOMATIC) LeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4_DCDC_VltgOutofRng_k;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4_DCDC_VltgOutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng' */
    /* Chart: '<S154>/PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S154>/LeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA'
     *  SignalConversion generated from: '<S154>/LeHTIR_e_HV_Htr4_DCDC_VltgOutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng/PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng/PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng/PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt */
    /* Transition: '<S701>:2' */
    if (!LeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA)
    {
        /* Transition: '<S701>:3' */
        /* Transition: '<S701>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_out =
            LeHTIR_e_HV_Htr4_DCDC_VltgOutofRng;
        rtb_LeHTIR_b_HV_Htr4_DCDC_VltgOutofRng_k = false;

        /* Transition: '<S701>:18' */
    }
    else
    {
        /* Transition: '<S701>:4' */
        rtb_LeHTIR_b_HV_Htr4_DCDC_VltgOutofRng_k = true;
    }

    /* End of Chart: '<S154>/PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRngChrt' */

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S154>/VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4_DCDC_VltgOutofRng_k);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S154>/VeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_Htr4_DCDC_VltgOutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4_DCDC_VltgOutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_DCDC_VltgOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4_HV_CrntOutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4_HV_CrntOutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_o;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4_HV_CrntOutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_HV_CrntOutofRng' */
    /* Chart: '<S155>/PokeHTIR_e_HV_Htr4_HV_CrntOutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S155>/LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA'
     *  SignalConversion generated from: '<S155>/LeHTIR_e_HV_Htr4_HV_CrntOutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4_HV_CrntOutofRng/PokeHTIR_e_HV_Htr4_HV_CrntOutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr4_HV_CrntOutofRng/PokeHTIR_e_HV_Htr4_HV_CrntOutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4_HV_CrntOutofRng/PokeHTIR_e_HV_Htr4_HV_CrntOutofRngChrt */
    /* Transition: '<S702>:2' */
    if (!LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA)
    {
        /* Transition: '<S702>:3' */
        /* Transition: '<S702>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4_HV_CrntOutofRng_out =
            LeHTIR_e_HV_Htr4_HV_CrntOutofRng;
        rtb_LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_o = false;

        /* Transition: '<S702>:18' */
    }
    else
    {
        /* Transition: '<S702>:4' */
        rtb_LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_o = true;
    }

    /* End of Chart: '<S155>/PokeHTIR_e_HV_Htr4_HV_CrntOutofRngChrt' */

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S155>/VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_HV_CrntOutofRng_VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_o);

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S155>/VeHTIR_e_HV_Htr4_HV_CrntOutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_HV_CrntOutofRng_Htr4_HV_CrntOutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4_HV_CrntOutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_HV_CrntOutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4_HV_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4_HV_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4_HV_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4_HV_OutofRngFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4_HV_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4_HV_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_HV_OutofRng' */
    /* Chart: '<S156>/PokeHTIR_e_HV_Htr4_HV_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S156>/LeHTIR_b_HV_Htr4_HV_OutofRngFA'
     *  SignalConversion generated from: '<S156>/LeHTIR_e_HV_Htr4_HV_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4_HV_OutofRng/PokeHTIR_e_HV_Htr4_HV_OutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr4_HV_OutofRng/PokeHTIR_e_HV_Htr4_HV_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4_HV_OutofRng/PokeHTIR_e_HV_Htr4_HV_OutofRngChrt */
    /* Transition: '<S703>:2' */
    if (!LeHTIR_b_HV_Htr4_HV_OutofRngFA)
    {
        /* Transition: '<S703>:3' */
        /* Transition: '<S703>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4_HV_OutofRng_out =
            LeHTIR_e_HV_Htr4_HV_OutofRng;
        rtb_LeHTIR_b_HV_Htr4_HV_OutofRngFA_out = false;

        /* Transition: '<S703>:18' */
    }
    else
    {
        /* Transition: '<S703>:4' */
        rtb_LeHTIR_b_HV_Htr4_HV_OutofRngFA_out = true;
    }

    /* End of Chart: '<S156>/PokeHTIR_e_HV_Htr4_HV_OutofRngChrt' */

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S156>/VeHTIR_b_HV_Htr4_HV_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_HV_OutofRng_VeHTIR_b_HV_Htr4_HV_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4_HV_OutofRngFA_out);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S156>/VeHTIR_e_HV_Htr4_HV_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_HV_OutofRng_HVC_Htr4_HV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4_HV_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_HV_OutofRng' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HTIR_4

FUNC(void, HTIR_CODE) PokeHTIR_e_HV_Htr4_LV_OutofRng(VAR
    (TeHTIR_e_HVC_Htr_Warning, AUTOMATIC) LeHTIR_e_HV_Htr4_LV_OutofRng, VAR
    (boolean, AUTOMATIC) LeHTIR_b_HV_Htr4_LV_OutofRngFA)
{

#if Rte_SysCon_Variant_HTIR_4

    boolean rtb_LeHTIR_b_HV_Htr4_LV_OutofRngFA_out;

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_e_HV_Htr4_LV_OutofRng);

#endif

#if !Rte_SysCon_Variant_HTIR_4

    UNUSED_PARAMETER(LeHTIR_b_HV_Htr4_LV_OutofRngFA);

#endif

#if Rte_SysCon_Variant_HTIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_LV_OutofRng' */
    /* Chart: '<S157>/PokeHTIR_e_HV_Htr4_LV_OutofRngChrt' incorporates:
     *  SignalConversion generated from: '<S157>/LeHTIR_b_HV_Htr4_LV_OutofRngFA'
     *  SignalConversion generated from: '<S157>/LeHTIR_e_HV_Htr4_LV_OutofRng'
     */
    /* Gateway: PokeHTIR_e_HV_Htr4_LV_OutofRng/PokeHTIR_e_HV_Htr4_LV_OutofRngChrt */
    /* During: PokeHTIR_e_HV_Htr4_LV_OutofRng/PokeHTIR_e_HV_Htr4_LV_OutofRngChrt */
    /* Entry Internal: PokeHTIR_e_HV_Htr4_LV_OutofRng/PokeHTIR_e_HV_Htr4_LV_OutofRngChrt */
    /* Transition: '<S704>:2' */
    if (!LeHTIR_b_HV_Htr4_LV_OutofRngFA)
    {
        /* Transition: '<S704>:3' */
        /* Transition: '<S704>:15' */
        HTIR_ac_B.LeHTIR_e_HV_Htr4_LV_OutofRng_out =
            LeHTIR_e_HV_Htr4_LV_OutofRng;
        rtb_LeHTIR_b_HV_Htr4_LV_OutofRngFA_out = false;

        /* Transition: '<S704>:18' */
    }
    else
    {
        /* Transition: '<S704>:4' */
        rtb_LeHTIR_b_HV_Htr4_LV_OutofRngFA_out = true;
    }

    /* End of Chart: '<S157>/PokeHTIR_e_HV_Htr4_LV_OutofRngChrt' */

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S157>/VeHTIR_b_HV_Htr4_LV_OutofRngFA_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_LV_OutofRng_VeHTIR_b_HV_Htr4_LV_OutofRngFA_write_IRV
        (rtb_LeHTIR_b_HV_Htr4_LV_OutofRngFA_out);

    /* Merge: '<Root>/Merge_79' incorporates:
     *  SignalConversion generated from: '<S157>/VeHTIR_e_HV_Htr4_LV_OutofRng_write'
     * */
    Rte_IrvWrite_PokeHTIR_e_HV_Htr4_LV_OutofRng_HVC_Htr4_LV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.LeHTIR_e_HV_Htr4_LV_OutofRng_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHTIR_e_HV_Htr4_LV_OutofRng' */
#endif

}

#endif

/* Output function */
FUNC(void, HTIR_CODE) HTIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HTIR_PwrOn'
     */
    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Heater_INIT_Cal'
     */
    /* SignalConversion generated from: '<S496>/HVC_HtrClntTemp_OutofRngFA_INIT' incorporates:
     *  Constant: '<S596>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrClntTemp_OutofRng =
        KeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_HtrClntTemp_OutofRng_INIT' incorporates:
     *  Constant: '<S616>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrClntTemp_OutofR_e =
        KeHTIR_e_HVC_HtrClntTemp_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/HVC_HtrIntCom_ErrFA_INIT' incorporates:
     *  Constant: '<S599>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrIntCom_ErrFA_INIT =
        KeHTIR_b_HVC_HtrIntCom_ErrFA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_HtrIntCom_Err_INIT' incorporates:
     *  Constant: '<S620>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrIntCom_Err_INIT =
        KeHTIR_e_HVC_HtrIntCom_ErrINIT;

    /* SignalConversion generated from: '<S496>/HVC_HtrSts_INIT' incorporates:
     *  Constant: '<S624>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrSts_INIT = KeHTIR_e_HVC_HtrSts_INIT;

    /* SignalConversion generated from: '<S496>/HVC_HtrUnlck_Req_INIT' incorporates:
     *  Constant: '<S605>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrUnlck_Req_INIT =
        KeHTIR_b_HVC_HtrUnlck_Req_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr_HV_OutofRng_FA_INIT' incorporates:
     *  Constant: '<S609>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_HV_OutofRng_FA_I =
        KeHTIR_b_HVC_Htr_HV_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr_HV_OutofRng_INIT' incorporates:
     *  Constant: '<S627>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_HV_OutofRng_INIT =
        KeHTIR_e_HVC_Htr_HV_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr_LV_OutofRngFA_INIT' incorporates:
     *  Constant: '<S613>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_LV_OutofRngFA_IN =
        KeHTIR_b_HVC_Htr_LV_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr_LV_OutofRng_INIT' incorporates:
     *  Constant: '<S629>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_LV_OutofRng_INIT =
        KeHTIR_e_HVC_Htr_LV_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr_UnlckCntr_INIT' incorporates:
     *  Constant: '<S585>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_UnlckCntr_INIT =
        KeHTIR_Cnt_HVC_Htr_UnlckCntr_INIT;

    /* SignalConversion generated from: '<S496>/HV_CrntActFA_INIT' incorporates:
     *  Constant: '<S607>/Calib'
     */
    HTIR_ac_B.OutportBufferForHV_CrntActFA_INIT =
        KeHTIR_b_HVC_Htr_HV_CrntActFA_INIT;

    /* SignalConversion generated from: '<S496>/HV_CrntAct_INIT' incorporates:
     *  Constant: '<S586>/Calib'
     */
    HTIR_ac_B.OutportBufferForHV_CrntAct_INIT = KeHTIR_I_HVC_Htr_HV_CrntAct_INIT;

    /* SignalConversion generated from: '<S496>/HV_VltgAct_FA_INIT' incorporates:
     *  Constant: '<S610>/Calib'
     */
    HTIR_ac_B.OutportBufferForHV_VltgAct_FA_INIT =
        KeHTIR_b_HVC_Htr_HV_VltgAct_FA_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntIn_TempFA_INIT' incorporates:
     *  Constant: '<S592>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_TempFA_INIT =
        KeHTIR_b_HVC_HtrClntIn_TempFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntIn_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S593>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_TempSensFltFA_ =
        KeHTIR_b_HVC_HtrClntIn_TempSensFltFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntIn_TempSensFlt_INIT' incorporates:
     *  Constant: '<S614>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_TempSensFlt_IN =
        KeHTIR_e_HVC_HtrClntIn_TempSensFlt_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntIn_Temp_INIT' incorporates:
     *  Constant: '<S587>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_Temp_INIT =
        KeHTIR_T_HVC_HtrClntIn_Temp_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntOut_TempFA_INIT' incorporates:
     *  Constant: '<S594>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_TempFA_INIT =
        KeHTIR_b_HVC_HtrClntOut_TempFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntOut_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S595>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_TempSensFltFA =
        KeHTIR_b_HVC_HtrClntOut_TempSensFltFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntOut_TempSensFlt_INIT' incorporates:
     *  Constant: '<S615>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_TempSensFlt_I =
        KeHTIR_e_HVC_HtrClntOut_TempSensFlt_INIT;

    /* SignalConversion generated from: '<S496>/HtrClntOut_Temp_INIT' incorporates:
     *  Constant: '<S588>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_Temp_INIT =
        KeHTIR_T_HVC_HtrClntOut_Temp_INIT;

    /* SignalConversion generated from: '<S496>/HtrCoreTemp_SensFltFA_INIT' incorporates:
     *  Constant: '<S597>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrCoreTemp_SensFltFA_IN =
        KeHTIR_b_HVC_HtrCoreTemp_SensFltFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrCoreTemp_SensFlt_INIT' incorporates:
     *  Constant: '<S617>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrCoreTemp_SensFlt_INIT =
        KeHTIR_e_HVC_HtrCoreTemp_SensFlt_INIT;

    /* SignalConversion generated from: '<S496>/HtrDrvFltFA_INIT' incorporates:
     *  Constant: '<S598>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrDrvFltFA_INIT = KeHTIR_b_HVC_HtrDrvFltFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrDrvFlt_INIT' incorporates:
     *  Constant: '<S618>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrDrvFlt_INIT = KeHTIR_e_HVC_HtrDrvFlt_INIT;

    /* SignalConversion generated from: '<S496>/HtrHighVol_Dwn_INIT' incorporates:
     *  Constant: '<S619>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrHighVol_Dwn_INIT =
        KeHTIR_e_HVC_HtrHighVol_Dwn_INIT;

    /* SignalConversion generated from: '<S496>/HtrProcesMemory_FltFA_INIT' incorporates:
     *  Constant: '<S600>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrProcesMemory_FltFA_IN =
        KeHTIR_b_HVC_HtrProcesMemory_FltFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrProcesMemory_Flt_INIT' incorporates:
     *  Constant: '<S621>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrProcesMemory_Flt_INIT =
        KeHTIR_e_HVC_HtrProcesMemory_Flt_INIT;

    /* SignalConversion generated from: '<S496>/HtrPwrActFA_INIT' incorporates:
     *  Constant: '<S601>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrActFA_INIT = KeHTIR_b_HVC_HtrPwrActFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrPwrAct_INIT' incorporates:
     *  Constant: '<S590>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrAct_INIT = KeHTIR_W_HVC_HtrPwrAct_INIT;

    /* SignalConversion generated from: '<S496>/HtrPwrExpectdFA_INIT' incorporates:
     *  Constant: '<S602>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrExpectdFA_INIT =
        KeHTIR_b_HVC_HtrPwrExpectdFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrPwrExpectd_INIT' incorporates:
     *  Constant: '<S591>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrExpectd_INIT =
        KeHTIR_W_HVC_HtrPwrExpectd_INIT;

    /* SignalConversion generated from: '<S496>/HtrResis_PCB_OvrTempFA_INIT' incorporates:
     *  Constant: '<S603>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrResis_PCB_OvrTempFA_I =
        KeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrResis_PCB_OvrTemp_INIT' incorporates:
     *  Constant: '<S622>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrResis_PCB_OvrTemp_INI =
        KeHTIR_e_HVC_HtrResis_PCB_OvrTemp_INIT;

    /* SignalConversion generated from: '<S496>/HtrSelfProtect_ActvFA_INIT' incorporates:
     *  Constant: '<S604>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrSelfProtect_ActvFA_IN =
        KeHTIR_b_HVC_HtrSelfProtect_ActvFA_INIT;

    /* SignalConversion generated from: '<S496>/HtrSelfProtect_Actv_INIT' incorporates:
     *  Constant: '<S623>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrSelfProtect_Actv_INIT =
        KeHTIR_e_HVC_HtrSelfProtect_Actv_INIT;

    /* SignalConversion generated from: '<S496>/Htr_DCDC_VltgOutofRngFA_INIT' incorporates:
     *  Constant: '<S606>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_DCDC_VltgOutofRngFA_ =
        KeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr_DCDC_VltgOutofRng_INIT' incorporates:
     *  Constant: '<S625>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_DCDC_VltgOutofRng_IN =
        KeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_INIT;

    /* SignalConversion generated from: '<S496>/Htr_HV_CrntOutofRngFA_INIT' incorporates:
     *  Constant: '<S608>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_HV_CrntOutofRngFA_IN =
        KeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr_HV_CrntOutofRng_INIT' incorporates:
     *  Constant: '<S626>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_HV_CrntOutofRng_INIT =
        KeHTIR_e_HVC_Htr_HV_CrntOutofRng_INIT;

    /* SignalConversion generated from: '<S496>/Htr_HV_VltgAct_INIT' incorporates:
     *  Constant: '<S589>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_HV_VltgAct_INIT =
        KeHTIR_U_HVC_Htr_HV_VltgAct_INIT;

    /* SignalConversion generated from: '<S496>/Htr_InterlockStatFA_INIT' incorporates:
     *  Constant: '<S611>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_InterlockStatFA_INIT =
        KeHTIR_b_HVC_Htr_InterlockStatFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr_InterlockStat_INIT' incorporates:
     *  Constant: '<S628>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_InterlockStat_INIT =
        KeHTIR_e_HVC_Htr_InterlockStat_INIT;

    /* SignalConversion generated from: '<S496>/Htr_LIN_ResErr_INIT' incorporates:
     *  Constant: '<S612>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_LIN_ResErr_INIT =
        KeHTIR_b_HVC_Htr_LIN_ResErr_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr2IntCom_ErrFA_INIT' incorporates:
     *  Constant: '<S511>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2IntCom_ErrFA_INI =
        KeHTIR_b_HVC_Htr2IntCom_ErrFA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr2IntCom_Err_INIT' incorporates:
     *  Constant: '<S530>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2IntCom_Err_INIT =
        KeHTIR_e_HVC_Htr2IntCom_ErrINIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr2Sts_INIT' incorporates:
     *  Constant: '<S535>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2Sts_INIT = KeHTIR_e_HVC_Htr2Sts_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr2_HV_OutofRng_FA_INIT' incorporates:
     *  Constant: '<S520>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_HV_OutofRng_FA_ =
        KeHTIR_b_HVC_Htr2_HV_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr2_HV_OutofRng_INIT' incorporates:
     *  Constant: '<S538>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_HV_OutofRng_INI =
        KeHTIR_e_HVC_Htr2_HV_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr2_LV_OutofRngFA_INIT' incorporates:
     *  Constant: '<S523>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_LV_OutofRngFA_I =
        KeHTIR_b_HVC_Htr2_LV_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr2_LV_OutofRng_INIT' incorporates:
     *  Constant: '<S539>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_LV_OutofRng_INI =
        KeHTIR_e_HVC_Htr2_LV_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/Htr2CoreTemp_FA_INIT' incorporates:
     *  Constant: '<S524>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_FA_INIT =
        KeHTIR_b_Htr2CoreTemp_FA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2CoreTemp_INIT' incorporates:
     *  Constant: '<S504>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_INIT = KeHTIR_T_Htr2CoreTemp_INIT;

    /* SignalConversion generated from: '<S496>/Htr2CoreTemp_SensFltFA_INIT' incorporates:
     *  Constant: '<S507>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_SensFltFA_I =
        KeHTIR_b_HVC_Htr2CoreTemp_SensFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2CoreTemp_SensFlt_INIT' incorporates:
     *  Constant: '<S526>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_SensFlt_INI =
        KeHTIR_e_HVC_Htr2CoreTemp_SensFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr2Core_OvrTmpFA_INIT' incorporates:
     *  Constant: '<S508>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Core_OvrTmpFA_INIT =
        KeHTIR_b_HVC_Htr2Core_OvrTmpFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2Core_OvrTmp_INIT' incorporates:
     *  Constant: '<S527>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Core_OvrTmp_INIT =
        KeHTIR_e_HVC_Htr2Core_OvrTmp_INIT;

    /* SignalConversion generated from: '<S496>/Htr2DrvFltFA_INIT' incorporates:
     *  Constant: '<S509>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2DrvFltFA_INIT = KeHTIR_b_HVC_Htr2DrvFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2DrvFlt_INIT' incorporates:
     *  Constant: '<S528>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2DrvFlt_INIT = KeHTIR_e_HVC_Htr2DrvFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr2HVCrnt_SnsrFltFA_INIT' incorporates:
     *  Constant: '<S510>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HVCrnt_SnsrFltFA_INI =
        KeHTIR_b_HVC_Htr2HVCrnt_SnsrFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2HVCrnt_SnsrFlt_INIT' incorporates:
     *  Constant: '<S529>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HVCrnt_SnsrFlt_INIT =
        KeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr2HV_CrntActFA_INIT' incorporates:
     *  Constant: '<S518>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HV_CrntActFA_INIT =
        KeHTIR_b_HVC_Htr2_HV_CrntActFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2HV_CrntAct_INIT' incorporates:
     *  Constant: '<S502>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HV_CrntAct_INIT =
        KeHTIR_I_HVC_Htr2_HV_CrntAct_INIT;

    /* SignalConversion generated from: '<S496>/Htr2HV_VltgAct_FA_INIT' incorporates:
     *  Constant: '<S521>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HV_VltgAct_FA_INIT =
        KeHTIR_b_HVC_Htr2_HV_VltgAct_FA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2PCBTmp_SnsrFltFA_INIT' incorporates:
     *  Constant: '<S512>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PCBTmp_SnsrFltFA_INI =
        KeHTIR_b_HVC_Htr2PCBTmp_SnsrFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2PCBTmp_SnsrFlt_INIT' incorporates:
     *  Constant: '<S531>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PCBTmp_SnsrFlt_INIT =
        KeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr2ProcesMemory_FltFA_INIT' incorporates:
     *  Constant: '<S513>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2ProcesMemory_FltFA_I =
        KeHTIR_b_HVC_Htr2ProcesMemory_FltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2ProcesMemory_Flt_INIT' incorporates:
     *  Constant: '<S532>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2ProcesMemory_Flt_INI =
        KeHTIR_e_HVC_Htr2ProcesMemory_Flt_INIT;

    /* SignalConversion generated from: '<S496>/Htr2PwrActFA_INIT' incorporates:
     *  Constant: '<S514>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PwrActFA_INIT = KeHTIR_b_HVC_Htr2PwrActFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2PwrAct_INIT' incorporates:
     *  Constant: '<S503>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PwrAct_INIT = KeHTIR_Pct_HVC_Htr2PwrAct_INIT;

    /* SignalConversion generated from: '<S496>/Htr2Resis_PCB_OvrTempFA_INIT' incorporates:
     *  Constant: '<S515>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Resis_PCB_OvrTempFA_ =
        KeHTIR_b_HVC_Htr2Resis_PCB_OvrTempFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2Resis_PCB_OvrTemp_INIT' incorporates:
     *  Constant: '<S533>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Resis_PCB_OvrTemp_IN =
        KeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_INIT;

    /* SignalConversion generated from: '<S496>/Htr2SelfProtect_ActvFA_INIT' incorporates:
     *  Constant: '<S516>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2SelfProtect_ActvFA_I =
        KeHTIR_b_HVC_Htr2SelfProtect_ActvFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2SelfProtect_Actv_INIT' incorporates:
     *  Constant: '<S534>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2SelfProtect_Actv_INI =
        KeHTIR_e_HVC_Htr2SelfProtect_Actv_INIT;

    /* SignalConversion generated from: '<S496>/Htr2TmpOvrheatgFA_INIT' incorporates:
     *  Constant: '<S517>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2TmpOvrheatgFA_INIT =
        KeHTIR_b_HVC_Htr2TmpOvrheatgFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2TmpOvrheatg_INIT' incorporates:
     *  Constant: '<S536>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2TmpOvrheatg_INIT =
        KeHTIR_e_HVC_Htr2TmpOvrheatg_INIT;

    /* SignalConversion generated from: '<S496>/Htr2_HV_CrntOutofRngFA_INIT' incorporates:
     *  Constant: '<S519>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_HV_CrntOutofRngFA_I =
        KeHTIR_b_HVC_Htr2_HV_CrntOutofRngFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2_HV_CrntOutofRng_INIT' incorporates:
     *  Constant: '<S537>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_HV_CrntOutofRng_INI =
        KeHTIR_e_HVC_Htr2_HV_CrntOutofRng_INIT;

    /* SignalConversion generated from: '<S496>/Htr2_HV_VltgAct_INIT' incorporates:
     *  Constant: '<S506>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_HV_VltgAct_INIT =
        KeHTIR_U_HVC_Htr2_HV_VltgAct_INIT;

    /* SignalConversion generated from: '<S496>/Htr2_LIN_ResErr_INIT' incorporates:
     *  Constant: '<S522>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_LIN_ResErr_INIT =
        KeHTIR_b_HVC_Htr2_LIN_ResErr_INIT;

    /* SignalConversion generated from: '<S496>/Htr2_PCBTempFA_INIT' incorporates:
     *  Constant: '<S525>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_PCBTempFA_INIT = KeHTIR_b_Htr2_PCBTempFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr2_PCBTemp_INIT' incorporates:
     *  Constant: '<S505>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_PCBTemp_INIT = KeHTIR_T_Htr2_PCBTemp_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr3Sts_INIT' incorporates:
     *  Constant: '<S544>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr3Sts_INIT = KeHTIR_e_HVC_Htr3Sts_INIT;

    /* SignalConversion generated from: '<S496>/Htr3Cntctr_StckClsd_FA_INIT' incorporates:
     *  Constant: '<S541>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3Cntctr_StckClsd_FA_I =
        KeHTIR_b_HVC_Htr3Cntctr_StckClsd_FA_INIT;

    /* SignalConversion generated from: '<S496>/Htr3Cntctr_StckClsd_INIT' incorporates:
     *  Constant: '<S543>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3Cntctr_StckClsd_INIT =
        KeHTIR_e_HVC_Htr3Cntctr_StckClsd_INIT;

    /* SignalConversion generated from: '<S496>/Htr3PwrActFA_INIT' incorporates:
     *  Constant: '<S542>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3PwrActFA_INIT = KeHTIR_b_HVC_Htr3PwrActFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr3PwrAct_INIT' incorporates:
     *  Constant: '<S540>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3PwrAct_INIT = KeHTIR_W_HVC_Htr3PwrAct_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4ClntTemp_OutofRngFA_INIT' incorporates:
     *  Constant: '<S555>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4ClntTemp_OutofRn =
        KeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4ClntTemp_OutofRng_INIT' incorporates:
     *  Constant: '<S573>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4ClntTemp_Outof_h =
        KeHTIR_e_HVC_Htr4ClntTemp_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4IntCom_ErrFA_INIT' incorporates:
     *  Constant: '<S558>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4IntCom_ErrFA_INI =
        KeHTIR_b_HVC_Htr4IntCom_ErrFA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4IntCom_Err_INIT' incorporates:
     *  Constant: '<S576>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4IntCom_Err_INIT =
        KeHTIR_e_HVC_Htr4IntCom_ErrINIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4Sts_INIT' incorporates:
     *  Constant: '<S580>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4Sts_INIT = KeHTIR_e_HVC_Htr4Sts_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4_HV_OutofRng_FA_INIT' incorporates:
     *  Constant: '<S567>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_HV_OutofRng_FA_ =
        KeHTIR_b_HVC_Htr4_HV_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4_HV_OutofRng_INIT' incorporates:
     *  Constant: '<S583>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_HV_OutofRng_INI =
        KeHTIR_e_HVC_Htr4_HV_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4_LV_OutofRngFA_INIT' incorporates:
     *  Constant: '<S570>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_LV_OutofRngFA_I =
        KeHTIR_b_HVC_Htr4_LV_OutofRng_FA_INIT;

    /* SignalConversion generated from: '<S496>/HVC_Htr4_LV_OutofRng_INIT' incorporates:
     *  Constant: '<S584>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_LV_OutofRng_INI =
        KeHTIR_e_HVC_Htr4_LV_OutofRng_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntIn_TempFA_INIT' incorporates:
     *  Constant: '<S551>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_TempFA_INIT =
        KeHTIR_b_HVC_Htr4ClntIn_TempFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntIn_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S552>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_TempSensFltFA =
        KeHTIR_b_HVC_Htr4ClntIn_TempSensFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntIn_TempSensFlt_INIT' incorporates:
     *  Constant: '<S571>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_TempSensFlt_I =
        KeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntIn_Temp_INIT' incorporates:
     *  Constant: '<S546>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_Temp_INIT =
        KeHTIR_T_HVC_Htr4ClntIn_Temp_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntOut_TempFA_INIT' incorporates:
     *  Constant: '<S553>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_TempFA_INIT =
        KeHTIR_b_HVC_Htr4ClntOut_TempFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntOut_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S554>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_TempSensFltF =
        KeHTIR_b_HVC_Htr4ClntOut_TempSensFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntOut_TempSensFlt_INIT' incorporates:
     *  Constant: '<S572>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_TempSensFlt_ =
        KeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ClntOut_Temp_INIT' incorporates:
     *  Constant: '<S547>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_Temp_INIT =
        KeHTIR_T_HVC_Htr4ClntOut_Temp_INIT;

    /* SignalConversion generated from: '<S496>/Htr4CoreTemp_SensFltFA_INIT' incorporates:
     *  Constant: '<S556>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4CoreTemp_SensFltFA_I =
        KeHTIR_b_HVC_Htr4CoreTemp_SensFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4CoreTemp_SensFlt_INIT' incorporates:
     *  Constant: '<S574>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4CoreTemp_SensFlt_INI =
        KeHTIR_e_HVC_Htr4CoreTemp_SensFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr4DrvFltFA_INIT' incorporates:
     *  Constant: '<S557>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4DrvFltFA_INIT = KeHTIR_b_HVC_Htr4DrvFltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4DrvFlt_INIT' incorporates:
     *  Constant: '<S575>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4DrvFlt_INIT = KeHTIR_e_HVC_Htr4DrvFlt_INIT;

    /* SignalConversion generated from: '<S496>/Htr4HV_CrntActFA_INIT' incorporates:
     *  Constant: '<S565>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4HV_CrntActFA_INIT =
        KeHTIR_b_HVC_Htr4_HV_CrntActFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4HV_CrntAct_INIT' incorporates:
     *  Constant: '<S545>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4HV_CrntAct_INIT =
        KeHTIR_I_HVC_Htr4_HV_CrntAct_INIT;

    /* SignalConversion generated from: '<S496>/Htr4HV_VltgAct_FA_INIT' incorporates:
     *  Constant: '<S568>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4HV_VltgAct_FA_INIT =
        KeHTIR_b_HVC_Htr4_HV_VltgAct_FA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4LIN_ResErr_INIT' incorporates:
     *  Constant: '<S569>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4LIN_ResErr_INIT =
        KeHTIR_b_HVC_Htr4_LIN_ResErr_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ProcesMemory_FltFA_INIT' incorporates:
     *  Constant: '<S559>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ProcesMemory_FltFA_I =
        KeHTIR_b_HVC_Htr4ProcesMemory_FltFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4ProcesMemory_Flt_INIT' incorporates:
     *  Constant: '<S577>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ProcesMemory_Flt_INI =
        KeHTIR_e_HVC_Htr4ProcesMemory_Flt_INIT;

    /* SignalConversion generated from: '<S496>/Htr4PwrActFA_INIT' incorporates:
     *  Constant: '<S560>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrActFA_INIT = KeHTIR_b_HVC_Htr4PwrActFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4PwrAct_INIT' incorporates:
     *  Constant: '<S549>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrAct_INIT = KeHTIR_W_HVC_Htr4PwrAct_INIT;

    /* SignalConversion generated from: '<S496>/Htr4PwrExpectdFA_INIT' incorporates:
     *  Constant: '<S561>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrExpectdFA_INIT =
        KeHTIR_b_HVC_Htr4PwrExpectdFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4PwrExpectd_INIT' incorporates:
     *  Constant: '<S550>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrExpectd_INIT =
        KeHTIR_W_HVC_Htr4PwrExpectd_INIT;

    /* SignalConversion generated from: '<S496>/Htr4Resis_PCB_OvrTempFA_INIT' incorporates:
     *  Constant: '<S562>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4Resis_PCB_OvrTempFA_ =
        KeHTIR_b_HVC_Htr4Resis_PCB_OvrTempFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4Resis_PCB_OvrTemp_INIT' incorporates:
     *  Constant: '<S578>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4Resis_PCB_OvrTemp_IN =
        KeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_INIT;

    /* SignalConversion generated from: '<S496>/Htr4SelfProtect_ActvFA_INIT' incorporates:
     *  Constant: '<S563>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4SelfProtect_ActvFA_I =
        KeHTIR_b_HVC_Htr4SelfProtect_ActvFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4SelfProtect_Actv_INIT' incorporates:
     *  Constant: '<S579>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4SelfProtect_Actv_INI =
        KeHTIR_e_HVC_Htr4SelfProtect_Actv_INIT;

    /* SignalConversion generated from: '<S496>/Htr4_DCDC_VltgOutofRngFA_INIT' incorporates:
     *  Constant: '<S564>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_DCDC_VltgOutofRngFA =
        KeHTIR_b_HVC_Htr4_DCDC_VltgOutofRngFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4_DCDC_VltgOutofRng_INIT' incorporates:
     *  Constant: '<S581>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_DCDC_VltgOutofRng_I =
        KeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_INIT;

    /* SignalConversion generated from: '<S496>/Htr4_HV_CrntOutofRngFA_INIT' incorporates:
     *  Constant: '<S566>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_HV_CrntOutofRngFA_I =
        KeHTIR_b_HVC_Htr4_HV_CrntOutofRngFA_INIT;

    /* SignalConversion generated from: '<S496>/Htr4_HV_CrntOutofRng_INIT' incorporates:
     *  Constant: '<S582>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_HV_CrntOutofRng_INI =
        KeHTIR_e_HVC_Htr4_HV_CrntOutofRng_INIT;

    /* SignalConversion generated from: '<S496>/Htr4_HV_VltgAct_INIT' incorporates:
     *  Constant: '<S548>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_HV_VltgAct_INIT =
        KeHTIR_U_HVC_Htr4_HV_VltgAct_INIT;

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const1'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr_ = HTIR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_HV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const2'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_HV_Outo = HTIR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_HV_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Outo = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_LV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const4'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_LV_Outo = HTIR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_LV_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_LV_Outo = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const6'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntTemp = HTIR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntTemp = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrIntCom_Err_Out_Init' incorporates:
     *  Constant: '<S497>/Const8'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrIntCom_E = HTIR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrIntCom_Err_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrIntCom_E = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Out_Init' incorporates:
     *  Constant: '<S497>/Const10'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrResis_PC = HTIR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrResis_PC = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrSelfProtect_Actv_Out_Init' incorporates:
     *  Constant: '<S497>/Const12'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrSelfProt = HTIR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrSelfProtect_Actv_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrSelfProt = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const14'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntOut_ = HTIR_ac_ConstB.Const14;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntOut_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const16'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntIn_T = HTIR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntIn_T = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const18'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrCoreTemp = HTIR_ac_ConstB.Const18;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrCoreTemp = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const20'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_DCDC_Vl = HTIR_ac_ConstB.Const20;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_DCDC_Vl = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const22'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_HV_Crnt = HTIR_ac_ConstB.Const22;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Crnt = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrDrvFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const24'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrDrvFlt_O = HTIR_ac_ConstB.Const24;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrDrvFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrDrvFlt_F = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrProcesMemory_Flt_Out_Init' incorporates:
     *  Constant: '<S497>/Const26'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrProcesMe = HTIR_ac_ConstB.Const26;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrProcesMemory_Flt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrProcesMe = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_I_HVC_Htr_HV_CrntAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_I_HVC_Htr_HV_Crnt = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_HV_CrntAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Cr_i = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_LIN_ResErr_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_LIN_Res = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_T_HVC_HtrClntOut_Temp_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_HtrClntOut_ = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrClntOut_Temp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntOu_g = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_T_HVC_HtrClntIn_Temp_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_HtrClntIn_T = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrClntIn_Temp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntIn_k = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_HVC_HtrPwrExpectd_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_HtrPwrExpec = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrPwrExpectd_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrPwrExpec = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_HVC_HtrPwrAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_HtrPwrAct_O = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrPwrAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrPwrAct_F = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrHighVol_Dwn_Out_Init' incorporates:
     *  Constant: '<S497>/Const39'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrHighVol_ = HTIR_ac_ConstB.Const39;

    /* SignalConversion generated from: '<S497>/VeHTIR_U_HVC_Htr_HV_VltgAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_U_HVC_Htr_HV_Vltg = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_HV_VltgAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Vltg = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_Cnt_HVC_HtrUnlckCntr_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_Cnt_HVC_HtrUnlckC = 0U;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_HtrOvrht_UnlckReq_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrOvrht_Un = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HtrPwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const44'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HtrPwrLimit_IO_ = HTIR_ac_ConstB.Const44;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_DVC_HtrPwrLimit_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_HtrPwrLimit = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr2_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const46'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr2 = HTIR_ac_ConstB.Const46;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_HV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const47'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_HV_Out = HTIR_ac_ConstB.Const47;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2_HV_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_Out = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_LV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const49'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_LV_Out = HTIR_ac_ConstB.Const49;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2_LV_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_LV_Out = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2IntCom_Err_Out_Init' incorporates:
     *  Constant: '<S497>/Const51'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2IntCom_ = HTIR_ac_ConstB.Const51;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2IntCom_Err_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2IntCom_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Out_Init' incorporates:
     *  Constant: '<S497>/Const53'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2Resis_P = HTIR_ac_ConstB.Const53;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2Resis_P = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2SelfProtect_Actv_Out_Init' incorporates:
     *  Constant: '<S497>/Const55'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2SelfPro = HTIR_ac_ConstB.Const55;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2SelfPro = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2TmpOvrheatg_Out_Init' incorporates:
     *  Constant: '<S497>/Const57'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2TmpOvrh = HTIR_ac_ConstB.Const57;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2TmpOvrheatg_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2TmpOvrh = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const59'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2HVCrnt_ = HTIR_ac_ConstB.Const59;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2HVCrnt_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const61'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2CoreTem = HTIR_ac_ConstB.Const61;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2CoreTem = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_T_Htr2_PCBTemp_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_T_Htr2_PCBTemp_Ou = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_Htr2_PCBTemp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_Htr2_PCBTemp_FA = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const65'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_HV_Crn = HTIR_ac_ConstB.Const65;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_Crn = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2DrvFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const67'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2DrvFlt_ = HTIR_ac_ConstB.Const67;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2DrvFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2DrvFlt_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Out_Init' incorporates:
     *  Constant: '<S497>/Const69'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2ProcesM = HTIR_ac_ConstB.Const69;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2ProcesM = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_I_HVC_Htr2_HV_CrntAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_I_HVC_Htr2_HV_Crn = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2_HV_CrntAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_C_l = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2_LIN_ResErr_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_LIN_Re = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const74'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2PCBTmp_ = HTIR_ac_ConstB.Const74;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2PCBTmp_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2Core_OvrTmp_Out_Init' incorporates:
     *  Constant: '<S497>/Const76'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2Core_Ov = HTIR_ac_ConstB.Const76;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2Core_OvrTmp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2Core_Ov = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_HVC_Htr2PwrAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr2PwrAct_ = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2PwrAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2PwrAct_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_T_Htr2CoreTemp_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_T_Htr2CoreTemp_Ou = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_Htr2CoreTemp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_Htr2CoreTemp_FA = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_U_HVC_Htr2_HV_VltgAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_U_HVC_Htr2_HV_Vlt = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr2_HV_VltgAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_Vlt = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_Htr2PwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const84'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_Htr2PwrLimit_IO = HTIR_ac_ConstB.Const84;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_DVC_Htr2PwrLimit_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_Htr2PwrLimi = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr3_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const86'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr3 = HTIR_ac_ConstB.Const86;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_HVC_Htr3PwrAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr3PwrAct_ = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr3PwrAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr3PwrAct_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_Out_Init' incorporates:
     *  Constant: '<S497>/Const89'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_Htr3Cntctr_S = HTIR_ac_ConstB.Const89;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_Htr3Cntctr_StckClsd_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_Htr3Cntctr_Stck = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_Htr3PwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const91'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_Htr3PwrLimit_IO = HTIR_ac_ConstB.Const91;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_DVC_Htr3PwrLimit_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_Htr3PwrLimi = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr4_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const93'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr4 = HTIR_ac_ConstB.Const93;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_HV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const94'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_HV_Out = HTIR_ac_ConstB.Const94;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4_HV_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_Out = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_LV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const96'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_LV_Out = HTIR_ac_ConstB.Const96;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4_LV_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_LV_Out = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const98'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntTem = HTIR_ac_ConstB.Const98;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntTem = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4IntCom_Err_Out_Init' incorporates:
     *  Constant: '<S497>/Const100'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4IntCom_ = HTIR_ac_ConstB.Const100;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4IntCom_Err_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4IntCom_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Out_Init' incorporates:
     *  Constant: '<S497>/Const102'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4Resis_P = HTIR_ac_ConstB.Const102;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4Resis_P = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4SelfProtect_Actv_Out_Init' incorporates:
     *  Constant: '<S497>/Const104'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4SelfPro = HTIR_ac_ConstB.Const104;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4SelfPro = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const106'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntOut = HTIR_ac_ConstB.Const106;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntOut = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const108'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntIn_ = HTIR_ac_ConstB.Const108;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntIn_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const110'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4CoreTem = HTIR_ac_ConstB.Const110;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4CoreTem = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const112'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_DCDC_V = HTIR_ac_ConstB.Const112;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_DCDC_V = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const114'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_HV_Crn = HTIR_ac_ConstB.Const114;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_Crn = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4DrvFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const116'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4DrvFlt_ = HTIR_ac_ConstB.Const116;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4DrvFlt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4DrvFlt_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Out_Init' incorporates:
     *  Constant: '<S497>/Const118'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ProcesM = HTIR_ac_ConstB.Const118;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ProcesM = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_I_HVC_Htr4_HV_CrntAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_I_HVC_Htr4_HV_Crn = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4_HV_CrntAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_C_i = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4_LIN_ResErr_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_LIN_Re = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_T_HVC_Htr4ClntOut_Temp_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_Htr4ClntOut = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4ClntOut_Temp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntO_e = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_T_HVC_Htr4ClntIn_Temp_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_Htr4ClntIn_ = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4ClntIn_Temp_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntI_l = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_HVC_Htr4PwrExpectd_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr4PwrExpe = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4PwrExpectd_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4PwrExpe = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_HVC_Htr4PwrAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr4PwrAct_ = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4PwrAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4PwrAct_ = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_U_HVC_Htr4_HV_VltgAct_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_U_HVC_Htr4_HV_Vlt = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr4_HV_VltgAct_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_Vlt = false;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_Htr4PwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const133'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_Htr4PwrLimit_IO = HTIR_ac_ConstB.Const133;

    /* SignalConversion generated from: '<S497>/VeHTIR_P_DVC_Htr4PwrLimit_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_Htr4PwrLimi = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S630>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HVC_HtrPwrLimit = HTIR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S497>/VeHTIF_P_HVC_HtrPwrLimit_write' */
    HTIR_ac_B.OutportBufferForVeHTIF_P_HVC_HtrPwrLimit = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S631>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr2PwrLimit =
        HTIR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S497>/VeHTIF_Pct_HV_Htr2PwrLimit_write' */
    HTIR_ac_B.OutportBufferForVeHTIF_Pct_HV_Htr2PwrLim = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S632>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr3PwrLimit =
        HTIR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S497>/VeHTIF_P_HV_Htr3PwrLimit_write' */
    HTIR_ac_B.OutportBufferForVeHTIF_P_HV_Htr3PwrLimit = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S633>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr4PwrLimit =
        HTIR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S497>/VeHTIF_P_HV_Htr4PwrLimit_write' */
    HTIR_ac_B.OutportBufferForVeHTIF_P_HV_Htr4PwrLimit = 0.0F;

    /* SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_InterlockStat_Out_Init' incorporates:
     *  Constant: '<S497>/Const142'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_Interlo = HTIR_ac_ConstB.Const142;

    /* SignalConversion generated from: '<S497>/VeHTIR_b_HVC_Htr_InterlockStat_FA_Out_Init' */
    HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_Interlo = false;

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VeHTIR_Cnt_HVC_HtrUnlckCntr' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_Cnt_HVC_HtrUnlckCntr_Out_Init'
     */
    (void)Rte_Write_VeHTIR_Cnt_HVC_HtrUnlckCntr_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_Cnt_HVC_HtrUnlckC);

    /* Outport: '<Root>/VeHTIR_I_HVC_Htr2_HV_CrntAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_I_HVC_Htr2_HV_CrntAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_I_HVC_Htr2_HV_CrntAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_I_HVC_Htr2_HV_Crn);

    /* Outport: '<Root>/VeHTIR_I_HVC_Htr4_HV_CrntAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_I_HVC_Htr4_HV_CrntAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_I_HVC_Htr4_HV_CrntAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_I_HVC_Htr4_HV_Crn);

    /* Outport: '<Root>/VeHTIR_I_HVC_Htr_HV_CrntAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_I_HVC_Htr_HV_CrntAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_I_HVC_Htr_HV_CrntAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_I_HVC_Htr_HV_Crnt);

    /* Outport: '<Root>/VeHTIR_P_DVC_Htr2PwrLimit' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_DVC_Htr2PwrLimit_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_DVC_Htr2PwrLimit_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_Htr2PwrLimi);

    /* Outport: '<Root>/VeHTIR_P_DVC_Htr3PwrLimit' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_DVC_Htr3PwrLimit_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_DVC_Htr3PwrLimit_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_Htr3PwrLimi);

    /* Outport: '<Root>/VeHTIR_P_DVC_Htr4PwrLimit' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_DVC_Htr4PwrLimit_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_DVC_Htr4PwrLimit_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_Htr4PwrLimi);

    /* Outport: '<Root>/VeHTIR_P_DVC_HtrPwrLimit' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_DVC_HtrPwrLimit_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_DVC_HtrPwrLimit_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_DVC_HtrPwrLimit);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr2PwrAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_HVC_Htr2PwrAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_HVC_Htr2PwrAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr2PwrAct_);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr3PwrAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_HVC_Htr3PwrAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_HVC_Htr3PwrAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr3PwrAct_);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr4PwrAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_HVC_Htr4PwrAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_HVC_Htr4PwrAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr4PwrAct_);

    /* Outport: '<Root>/VeHTIR_P_HVC_Htr4PwrExpectd' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_HVC_Htr4PwrExpectd_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_HVC_Htr4PwrExpectd_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_Htr4PwrExpe);

    /* Outport: '<Root>/VeHTIR_P_HVC_HtrPwrAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_HVC_HtrPwrAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_HVC_HtrPwrAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_HtrPwrAct_O);

    /* Outport: '<Root>/VeHTIR_P_HVC_HtrPwrExpectd' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_P_HVC_HtrPwrExpectd_Out_Init'
     */
    (void)Rte_Write_VeHTIR_P_HVC_HtrPwrExpectd_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_P_HVC_HtrPwrExpec);

    /* Outport: '<Root>/VeHTIR_T_HVC_Htr4ClntIn_Temp' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_T_HVC_Htr4ClntIn_Temp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_T_HVC_Htr4ClntIn_Temp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_Htr4ClntIn_);

    /* Outport: '<Root>/VeHTIR_T_HVC_Htr4ClntOut_Temp' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_T_HVC_Htr4ClntOut_Temp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_T_HVC_Htr4ClntOut_Temp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_Htr4ClntOut);

    /* Outport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_T_HVC_HtrClntIn_Temp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_T_HVC_HtrClntIn_Temp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_HtrClntIn_T);

    /* Outport: '<Root>/VeHTIR_T_HVC_HtrClntOut_Temp' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_T_HVC_HtrClntOut_Temp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_T_HVC_HtrClntOut_Temp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_T_HVC_HtrClntOut_);

    /* Outport: '<Root>/VeHTIR_T_Htr2CoreTemp' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_T_Htr2CoreTemp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_T_Htr2CoreTemp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_T_Htr2CoreTemp_Ou);

    /* Outport: '<Root>/VeHTIR_T_Htr2_PCBTemp' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_T_Htr2_PCBTemp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_T_Htr2_PCBTemp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_T_Htr2_PCBTemp_Ou);

    /* Outport: '<Root>/VeHTIR_U_HVC_Htr2_HV_VltgAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_U_HVC_Htr2_HV_VltgAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_U_HVC_Htr2_HV_VltgAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_U_HVC_Htr2_HV_Vlt);

    /* Outport: '<Root>/VeHTIR_U_HVC_Htr4_HV_VltgAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_U_HVC_Htr4_HV_VltgAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_U_HVC_Htr4_HV_VltgAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_U_HVC_Htr4_HV_Vlt);

    /* Outport: '<Root>/VeHTIR_U_HVC_Htr_HV_VltgAct' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_U_HVC_Htr_HV_VltgAct_Out_Init'
     */
    (void)Rte_Write_VeHTIR_U_HVC_Htr_HV_VltgAct_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_U_HVC_Htr_HV_Vltg);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2CoreTem);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2Core_OvrTmp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2Core_OvrTmp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2Core_OvrTmp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2Core_Ov);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2DrvFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2DrvFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2DrvFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2DrvFlt_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2HVCrnt_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2IntCom_Err_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2IntCom_Err_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2IntCom_Err_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2IntCom_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2PCBTmp_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2ProcesM);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2PwrAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2PwrAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2PwrAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2PwrAct_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2Resis_P);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2SelfPro);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2TmpOvrheatg_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2TmpOvrheatg_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2TmpOvrheatg_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2TmpOvrh);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_CrntAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2_HV_CrntAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_CrntAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_C_l);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_Crn);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2_HV_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_Out);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_HV_VltgAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2_HV_VltgAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_HV_VltgAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_HV_Vlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_LIN_ResErr' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2_LIN_ResErr_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_LIN_ResErr_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_LIN_Re);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr2_LV_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr2_LV_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr2_LV_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr2_LV_Out);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr3PwrAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr3PwrAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr3PwrAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr3PwrAct_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntIn_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntIn_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4ClntIn_Temp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntIn_Temp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntI_l);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntOut);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4ClntOut_Temp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntOut_Temp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntO_e);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ClntTem);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4CoreTem);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4DrvFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4DrvFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4DrvFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4DrvFlt_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4IntCom_Err_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4IntCom_Err_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4IntCom_Err_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4IntCom_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4ProcesM);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4PwrAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4PwrAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4PwrAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4PwrAct_);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4PwrExpectd_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4PwrExpectd_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4PwrExpectd_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4PwrExpe);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4Resis_P);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4SelfPro);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_DCDC_V);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_CrntAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4_HV_CrntAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_CrntAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_C_i);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_Crn);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4_HV_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_Out);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_HV_VltgAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4_HV_VltgAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_HV_VltgAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_HV_Vlt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_LIN_ResErr' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4_LIN_ResErr_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_LIN_ResErr_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_LIN_Re);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr4_LV_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr4_LV_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr4_LV_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr4_LV_Out);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntIn_T);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntIn_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrClntIn_Temp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntIn_Temp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntIn_k);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntOut_);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntOut_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrClntOut_Temp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntOut_Temp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntOu_g);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrClntTemp);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrCoreTemp);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrDrvFlt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrDrvFlt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrDrvFlt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrDrvFlt_F);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrIntCom_Err_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrIntCom_Err_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrIntCom_Err_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrIntCom_E);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrOvrht_UnlckReq' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrOvrht_UnlckReq_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrOvrht_UnlckReq_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrOvrht_Un);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrProcesMemory_Flt_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrProcesMemory_Flt_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrProcesMemory_Flt_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrProcesMe);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrPwrAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrPwrAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrPwrAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrPwrAct_F);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrPwrExpectd_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrPwrExpectd_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrPwrExpectd_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrPwrExpec);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrResis_PC);

    /* Outport: '<Root>/VeHTIR_b_HVC_HtrSelfProtect_Actv_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_HtrSelfProtect_Actv_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_HtrSelfProtect_Actv_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_HtrSelfProt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_DCDC_Vl);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_CrntAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_HV_CrntAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_CrntAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Cr_i);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Crnt);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_HV_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Outo);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_HV_VltgAct_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_HV_VltgAct_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_HV_VltgAct_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_HV_Vltg);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_InterlockStat_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_InterlockStat_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_InterlockStat_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_Interlo);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_LIN_ResErr' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_LIN_ResErr_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_LIN_ResErr_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_LIN_Res);

    /* Outport: '<Root>/VeHTIR_b_HVC_Htr_LV_OutofRng_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_HVC_Htr_LV_OutofRng_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_HVC_Htr_LV_OutofRng_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_HVC_Htr_LV_Outo);

    /* Outport: '<Root>/VeHTIR_b_Htr2CoreTemp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_Htr2CoreTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_Htr2CoreTemp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_Htr2CoreTemp_FA);

    /* Outport: '<Root>/VeHTIR_b_Htr2_PCBTemp_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_Htr2_PCBTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_Htr2_PCBTemp_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_Htr2_PCBTemp_FA);

    /* Outport: '<Root>/VeHTIR_b_Htr3Cntctr_StckClsd_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIR_b_Htr3Cntctr_StckClsd_FA_Out_Init'
     */
    (void)Rte_Write_VeHTIR_b_Htr3Cntctr_StckClsd_FA_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_b_Htr3Cntctr_Stck);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2CoreTem);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2Core_OvrTmp' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2Core_OvrTmp_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2Core_OvrTmp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2Core_OvrTmp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2Core_Ov);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2DrvFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2DrvFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2DrvFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2DrvFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2DrvFlt_);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2HVCrnt_);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2IntCom_Err' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2IntCom_Err_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2IntCom_Err_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2IntCom_Err_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2IntCom_);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2PCBTmp_);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2ProcesM);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2Resis_P);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2SelfProtect_Actv' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2SelfProtect_Actv_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2SelfProtect_Actv_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2SelfProtect_Actv_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2SelfPro);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2TmpOvrheatg' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2TmpOvrheatg_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2TmpOvrheatg_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2TmpOvrheatg_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2TmpOvrh);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_HV_Crn);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2_HV_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_HV_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2_HV_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_HV_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_HV_Out);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr2_LV_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_LV_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr2_LV_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_LV_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_LV_Out);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntIn_);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntOut);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntTem);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4CoreTem);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4DrvFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4DrvFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4DrvFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4DrvFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4DrvFlt_);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4IntCom_Err' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4IntCom_Err_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4IntCom_Err_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4IntCom_Err_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4IntCom_);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ProcesM);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4Resis_P);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4SelfProtect_Actv' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4SelfProtect_Actv_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4SelfProtect_Actv_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4SelfProtect_Actv_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4SelfPro);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_DCDC_V);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_HV_Crn);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_HV_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_HV_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4_HV_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_HV_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_HV_Out);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr4_LV_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_LV_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr4_LV_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_LV_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_LV_Out);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntIn_T);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntOut_);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrClntTemp_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntTemp_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntTemp);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrCoreTemp);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrDrvFlt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrDrvFlt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrDrvFlt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrDrvFlt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrDrvFlt_O);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrHighVol_Dwn' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrHighVol_Dwn_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrHighVol_Dwn_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrHighVol_Dwn_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrHighVol_);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrIntCom_Err' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrIntCom_Err_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrIntCom_Err_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrIntCom_Err_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrIntCom_E);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrProcesMemory_Flt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrProcesMemory_Flt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrProcesMemory_Flt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrProcesMemory_Flt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrProcesMe);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrResis_PC);

    /* Outport: '<Root>/VeHTIR_e_HVC_HtrSelfProtect_Actv' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrSelfProtect_Actv_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_HtrSelfProtect_Actv_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrSelfProtect_Actv_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrSelfProt);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_DCDC_Vl);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_HV_Crnt);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_HV_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_HV_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr_HV_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_HV_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_HV_Outo);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_InterlockStat' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_InterlockStat_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr_InterlockStat_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_InterlockStat_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_Interlo);

    /* Outport: '<Root>/VeHTIR_e_HVC_Htr_LV_OutofRng' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_LV_OutofRng_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HVC_Htr_LV_OutofRng_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_LV_OutofRng_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_LV_Outo);

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr2_Sts_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HV_ElecClntHtr2_Sts_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr2_Sts_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr2);

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr3_Sts_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HV_ElecClntHtr3_Sts_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr3_Sts_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr3);

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr4_Sts_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HV_ElecClntHtr4_Sts_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr4_Sts_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr4);

    /* Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr_Sts_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HV_ElecClntHtr_Sts_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr_Sts_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr_);

    /* Outport: '<Root>/VeHTIR_e_HV_Htr3Cntctr_StckClsd' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HV_Htr3Cntctr_StckClsd_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HV_Htr3Cntctr_S);

    /* Outport: '<Root>/VeHTIR_e_Htr2PwrLimit_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_Htr2PwrLimit_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_Htr2PwrLimit_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_Htr2PwrLimit_IO_Cnt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_Htr2PwrLimit_IO);

    /* Outport: '<Root>/VeHTIR_e_Htr3PwrLimit_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_Htr3PwrLimit_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_Htr3PwrLimit_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_Htr3PwrLimit_IO_Cnt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_Htr3PwrLimit_IO);

    /* Outport: '<Root>/VeHTIR_e_Htr4PwrLimit_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_Htr4PwrLimit_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_Htr4PwrLimit_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_Htr4PwrLimit_IO_Cnt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_Htr4PwrLimit_IO);

    /* Outport: '<Root>/VeHTIR_e_HtrPwrLimit_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIR_e_HtrPwrLimit_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S86>/VeHTIR_e_HtrPwrLimit_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeHTIR_e_HtrPwrLimit_IO_Cnt_Value
        (HTIR_ac_B.OutportBufferForVeHTIR_e_HtrPwrLimit_IO_);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr2IntCom_ErrFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2IntCom_ErrFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr2IntCom_ErrFA_INI);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr2IntCom_Err_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr2IntCom_Err_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr2IntCom_Err_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr2IntCom_Err_INIT);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr2Sts_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr2Sts_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr2Sts_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr2Sts_INIT);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr2_HV_OutofRng_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2_HV_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr2_HV_OutofRng_FA_);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr2_HV_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr2_HV_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr2_HV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr2_HV_OutofRng_INI);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr2_LV_OutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2_LV_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr2_LV_OutofRngFA_I);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr2_LV_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr2_LV_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr2_LV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr2_LV_OutofRng_INI);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr3Sts_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr3Sts_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr3Sts_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr3Sts_INIT);

    /* Merge: '<Root>/Merge_82' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr4ClntTemp_OutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4ClntTemp_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4ClntTemp_OutofRn);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr4ClntTemp_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr4ClntTemp_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr4ClntTemp_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4ClntTemp_Outof_h);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr4IntCom_ErrFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4IntCom_ErrFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4IntCom_ErrFA_INI);

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr4IntCom_Err_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr4IntCom_Err_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr4IntCom_Err_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4IntCom_Err_INIT);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr4Sts_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr4Sts_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr4Sts_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4Sts_INIT);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr4_HV_OutofRng_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4_HV_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4_HV_OutofRng_FA_);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr4_HV_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr4_HV_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr4_HV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4_HV_OutofRng_INI);

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr4_LV_OutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4_LV_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4_LV_OutofRngFA_I);

    /* Merge: '<Root>/Merge_79' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr4_LV_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr4_LV_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr4_LV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr4_LV_OutofRng_INI);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_HtrClntTemp_OutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrClntTemp_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_HtrClntTemp_OutofRng);

    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_HtrClntTemp_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_HtrClntTemp_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_HtrClntTemp_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_HtrClntTemp_OutofR_e);

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_HtrIntCom_ErrFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrIntCom_ErrFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_HtrIntCom_ErrFA_INIT);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_HtrIntCom_Err_INIT'
     *  SignalConversion generated from: '<S86>/HVC_HtrIntCom_Err_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_HtrIntCom_Err_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_HtrIntCom_Err_INIT);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_HtrSts_INIT'
     *  SignalConversion generated from: '<S86>/HVC_HtrSts_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_HtrSts_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_HtrSts_INIT);

    /* Merge: '<Root>/Merge_108' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_HtrUnlck_Req_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_HtrUnlck_Req_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_HtrUnlck_Req_INIT);

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr_HV_OutofRng_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_Htr_HV_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr_HV_OutofRng_FA_I);

    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr_HV_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr_HV_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr_HV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr_HV_OutofRng_INIT);

    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr_LV_OutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_Htr_LV_OutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr_LV_OutofRngFA_IN);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S496>/HVC_Htr_LV_OutofRng_INIT'
     *  SignalConversion generated from: '<S86>/HVC_Htr_LV_OutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr_LV_OutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr_LV_OutofRng_INIT);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S86>/HVC_Htr_UnlckCntr_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HVC_Htr_UnlckCntr_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHVC_Htr_UnlckCntr_INIT);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S86>/HV_CrntActFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_Htr_HV_CrntActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHV_CrntActFA_INIT);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S86>/HV_CrntAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HV_CrntAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHV_CrntAct_INIT);

    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S86>/HV_VltgAct_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_Htr_HV_VltgActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHV_VltgAct_FA_INIT);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2CoreTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_Htr2CoreTempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2CoreTemp_FA_INIT);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2CoreTemp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2CoreTemp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2CoreTemp_INIT);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2CoreTemp_SensFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2CoreTemp_SensFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2CoreTemp_SensFltFA_I);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2CoreTemp_SensFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr2CoreTemp_SensFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2CoreTemp_SensFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2CoreTemp_SensFlt_INI);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2Core_OvrTmpFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2Core_OvrTmpFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2Core_OvrTmpFA_INIT);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2Core_OvrTmp_INIT'
     *  SignalConversion generated from: '<S86>/Htr2Core_OvrTmp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2Core_OvrTmp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2Core_OvrTmp_INIT);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2DrvFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2DrvFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2DrvFltFA_INIT);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2DrvFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr2DrvFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2DrvFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2DrvFlt_INIT);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2HVCrnt_SnsrFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2HVCrnt_SnsrFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2HVCrnt_SnsrFltFA_INI);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2HVCrnt_SnsrFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr2HVCrnt_SnsrFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2HVCrnt_SnsrFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2HVCrnt_SnsrFlt_INIT);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2HV_CrntActFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2_HV_CrntActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2HV_CrntActFA_INIT);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2HV_CrntAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2HV_CrntAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2HV_CrntAct_INIT);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2HV_VltgAct_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2_HV_VltgActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2HV_VltgAct_FA_INIT);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2PCBTmp_SnsrFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2PCBTmp_SnsrFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2PCBTmp_SnsrFltFA_INI);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2PCBTmp_SnsrFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr2PCBTmp_SnsrFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2PCBTmp_SnsrFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2PCBTmp_SnsrFlt_INIT);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2ProcesMemory_FltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2ProcesMemory_FltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2ProcesMemory_FltFA_I);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2ProcesMemory_Flt_INIT'
     *  SignalConversion generated from: '<S86>/Htr2ProcesMemory_Flt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2ProcesMemory_Flt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2ProcesMemory_Flt_INI);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2PwrActFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2PwrActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2PwrActFA_INIT);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2PwrAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2PwrAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2PwrAct_INIT);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2Resis_PCB_OvrTempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2Resis_PCB_OvrTempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2Resis_PCB_OvrTempFA_);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2Resis_PCB_OvrTemp_INIT'
     *  SignalConversion generated from: '<S86>/Htr2Resis_PCB_OvrTemp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2Resis_PCB_OvrTemp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2Resis_PCB_OvrTemp_IN);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2SelfProtect_ActvFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2SelfProtect_ActvFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2SelfProtect_ActvFA_I);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2SelfProtect_Actv_INIT'
     *  SignalConversion generated from: '<S86>/Htr2SelfProtect_Actv_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2SelfProtect_Actv_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2SelfProtect_Actv_INI);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2TmpOvrheatgFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2TmpOvrheatgFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2TmpOvrheatgFA_INIT);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2TmpOvrheatg_INIT'
     *  SignalConversion generated from: '<S86>/Htr2TmpOvrheatg_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2TmpOvrheatg_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2TmpOvrheatg_INIT);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2_HV_CrntOutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2_HV_CrntOutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2_HV_CrntOutofRngFA_I);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S496>/Htr2_HV_CrntOutofRng_INIT'
     *  SignalConversion generated from: '<S86>/Htr2_HV_CrntOutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2_HV_CrntOutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2_HV_CrntOutofRng_INI);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2_HV_VltgAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2_HV_VltgAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2_HV_VltgAct_INIT);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2_LIN_ResErr_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2_LIN_ResErr_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2_LIN_ResErr_INIT);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2_PCBTempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr2_PCBTempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2_PCBTempFA_INIT);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S86>/Htr2_PCBTemp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr2_PCBTemp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr2_PCBTemp_INIT);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S86>/Htr3Cntctr_StckClsd_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr3Cntctr_StckClsdFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr3Cntctr_StckClsd_FA_I);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S496>/Htr3Cntctr_StckClsd_INIT'
     *  SignalConversion generated from: '<S86>/Htr3Cntctr_StckClsd_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr3Cntctr_StckClsd_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr3Cntctr_StckClsd_INIT);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S86>/Htr3PwrActFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr3PwrActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr3PwrActFA_INIT);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S86>/Htr3PwrAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr3PwrAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr3PwrAct_INIT);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4ClntIn_TempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4ClntIn_TempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntIn_TempFA_INIT);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4ClntIn_TempSensFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4ClntIn_TempSensFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntIn_TempSensFltFA);

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4ClntIn_TempSensFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr4ClntIn_TempSensFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4ClntIn_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntIn_TempSensFlt_I);

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4ClntIn_Temp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4ClntIn_Temp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntIn_Temp_INIT);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4ClntOut_TempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4ClntOut_TempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntOut_TempFA_INIT);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4ClntOut_TempSensFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4ClntOut_TempSensFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntOut_TempSensFltF);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4ClntOut_TempSensFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr4ClntOut_TempSensFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4ClntOut_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntOut_TempSensFlt_);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4ClntOut_Temp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4ClntOut_Temp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ClntOut_Temp_INIT);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4CoreTemp_SensFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4CoreTemp_SensFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4CoreTemp_SensFltFA_I);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4CoreTemp_SensFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr4CoreTemp_SensFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4CoreTemp_SensFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4CoreTemp_SensFlt_INI);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4DrvFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4DrvFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4DrvFltFA_INIT);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4DrvFlt_INIT'
     *  SignalConversion generated from: '<S86>/Htr4DrvFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4DrvFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4DrvFlt_INIT);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4HV_CrntActFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4_HV_CrntActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4HV_CrntActFA_INIT);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4HV_CrntAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4HV_CrntAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4HV_CrntAct_INIT);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4HV_VltgAct_FA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4_HV_VltgActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4HV_VltgAct_FA_INIT);

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4LIN_ResErr_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4LIN_ResErr_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4LIN_ResErr_INIT);

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4ProcesMemory_FltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4ProcesMemory_FltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ProcesMemory_FltFA_I);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4ProcesMemory_Flt_INIT'
     *  SignalConversion generated from: '<S86>/Htr4ProcesMemory_Flt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4ProcesMemory_Flt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4ProcesMemory_Flt_INI);

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4PwrActFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4PwrActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4PwrActFA_INIT);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4PwrAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4PwrAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4PwrAct_INIT);

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4PwrExpectdFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4PwrExpectdFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4PwrExpectdFA_INIT);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4PwrExpectd_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4PwrExpectd_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4PwrExpectd_INIT);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4Resis_PCB_OvrTempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4Resis_PCB_OvrTempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4Resis_PCB_OvrTempFA_);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4Resis_PCB_OvrTemp_INIT'
     *  SignalConversion generated from: '<S86>/Htr4Resis_PCB_OvrTemp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4Resis_PCB_OvrTemp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4Resis_PCB_OvrTemp_IN);

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4SelfProtect_ActvFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4SelfProtect_ActvFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4SelfProtect_ActvFA_I);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4SelfProtect_Actv_INIT'
     *  SignalConversion generated from: '<S86>/Htr4SelfProtect_Actv_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4SelfProtect_Actv_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4SelfProtect_Actv_INI);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4_DCDC_VltgOutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4_DCDC_VltgOutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4_DCDC_VltgOutofRngFA);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4_DCDC_VltgOutofRng_INIT'
     *  SignalConversion generated from: '<S86>/Htr4_DCDC_VltgOutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4_DCDC_VltgOutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4_DCDC_VltgOutofRng_I);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4_HV_CrntOutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HV_Htr4_HV_CrntOutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4_HV_CrntOutofRngFA_I);

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S496>/Htr4_HV_CrntOutofRng_INIT'
     *  SignalConversion generated from: '<S86>/Htr4_HV_CrntOutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4_HV_CrntOutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4_HV_CrntOutofRng_INI);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S86>/Htr4_HV_VltgAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr4_HV_VltgAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr4_HV_VltgAct_INIT);

    /* Merge: '<Root>/Merge_113' incorporates:
     *  SignalConversion generated from: '<S86>/HtrClntIn_TempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrClntIn_TempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntIn_TempFA_INIT);

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S86>/HtrClntIn_TempSensFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrClntIn_TempSensFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntIn_TempSensFltFA_);

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S496>/HtrClntIn_TempSensFlt_INIT'
     *  SignalConversion generated from: '<S86>/HtrClntIn_TempSensFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrClntIn_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntIn_TempSensFlt_IN);

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S86>/HtrClntIn_Temp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrClntIn_Temp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntIn_Temp_INIT);

    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S86>/HtrClntOut_TempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrClntOut_TempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntOut_TempFA_INIT);

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S86>/HtrClntOut_TempSensFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrClntOut_TempSensFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntOut_TempSensFltFA);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  SignalConversion generated from: '<S496>/HtrClntOut_TempSensFlt_INIT'
     *  SignalConversion generated from: '<S86>/HtrClntOut_TempSensFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrClntOut_TempSensFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntOut_TempSensFlt_I);

    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S86>/HtrClntOut_Temp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrClntOut_Temp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrClntOut_Temp_INIT);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  SignalConversion generated from: '<S86>/HtrCoreTemp_SensFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrCoreTemp_SensFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrCoreTemp_SensFltFA_IN);

    /* Merge: '<Root>/Merge_94' incorporates:
     *  SignalConversion generated from: '<S496>/HtrCoreTemp_SensFlt_INIT'
     *  SignalConversion generated from: '<S86>/HtrCoreTemp_SensFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrCoreTemp_SensFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrCoreTemp_SensFlt_INIT);

    /* Merge: '<Root>/Merge_102' incorporates:
     *  SignalConversion generated from: '<S86>/HtrDrvFltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrDrvFltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrDrvFltFA_INIT);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S496>/HtrDrvFlt_INIT'
     *  SignalConversion generated from: '<S86>/HtrDrvFlt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrDrvFlt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrDrvFlt_INIT);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S496>/HtrHighVol_Dwn_INIT'
     *  SignalConversion generated from: '<S86>/HtrHighVol_Dwn_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrHighVol_Dwn_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrHighVol_Dwn_INIT);

    /* Merge: '<Root>/Merge_104' incorporates:
     *  SignalConversion generated from: '<S86>/HtrProcesMemory_FltFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrProcesMemory_FltFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrProcesMemory_FltFA_IN);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S496>/HtrProcesMemory_Flt_INIT'
     *  SignalConversion generated from: '<S86>/HtrProcesMemory_Flt_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrProcesMemory_Flt_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrProcesMemory_Flt_INIT);

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S86>/HtrPwrActFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrPwrActFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrPwrActFA_INIT);

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S86>/HtrPwrAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrPwrAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrPwrAct_INIT);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S86>/HtrPwrExpectdFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrPwrExpectdFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrPwrExpectdFA_INIT);

    /* Merge: '<Root>/Merge_114' incorporates:
     *  SignalConversion generated from: '<S86>/HtrPwrExpectd_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrPwrExpectd_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrPwrExpectd_INIT);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S86>/HtrResis_PCB_OvrTempFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrResis_PCB_OvrTempFA_I);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S496>/HtrResis_PCB_OvrTemp_INIT'
     *  SignalConversion generated from: '<S86>/HtrResis_PCB_OvrTemp_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrResis_PCB_OvrTemp_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrResis_PCB_OvrTemp_INI);

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S86>/HtrSelfProtect_ActvFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_HtrSelfProtect_ActvFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtrSelfProtect_ActvFA_IN);

    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S496>/HtrSelfProtect_Actv_INIT'
     *  SignalConversion generated from: '<S86>/HtrSelfProtect_Actv_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_HtrSelfProtect_Actv_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtrSelfProtect_Actv_INIT);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S86>/Htr_DCDC_VltgOutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_DCDC_VltgOutofRngFA_);

    /* Merge: '<Root>/Merge_97' incorporates:
     *  SignalConversion generated from: '<S496>/Htr_DCDC_VltgOutofRng_INIT'
     *  SignalConversion generated from: '<S86>/Htr_DCDC_VltgOutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr_DCDC_VltgOutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_DCDC_VltgOutofRng_IN);

    /* Merge: '<Root>/Merge_100' incorporates:
     *  SignalConversion generated from: '<S86>/Htr_HV_CrntOutofRngFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_HV_CrntOutofRngFA_IN);

    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S496>/Htr_HV_CrntOutofRng_INIT'
     *  SignalConversion generated from: '<S86>/Htr_HV_CrntOutofRng_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr_HV_CrntOutofRng_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_HV_CrntOutofRng_INIT);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S86>/Htr_HV_VltgAct_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr_HV_VltgAct_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_HV_VltgAct_INIT);

    /* Merge: '<Root>/Merge_128' incorporates:
     *  SignalConversion generated from: '<S86>/Htr_InterlockStatFA_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIR_b_HVC_Htr_InterlockStatFA_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_InterlockStatFA_INIT);

    /* Merge: '<Root>/Merge_127' incorporates:
     *  SignalConversion generated from: '<S496>/Htr_InterlockStat_INIT'
     *  SignalConversion generated from: '<S86>/Htr_InterlockStat_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr_InterlockStat_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_InterlockStat_INIT);

    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S86>/Htr_LIN_ResErr_INIT_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_Htr_LIN_ResErr_INIT_write_IRV
        (HTIR_ac_B.OutportBufferForHtr_LIN_ResErr_INIT);

    /* Merge: '<Root>/VeHTIF_P_HVC_HtrPwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIF_P_HVC_HtrPwrLimit_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_P_HVC_HtrPwrLimit_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_P_HVC_HtrPwrLimit);

    /* Merge: '<Root>/VeHTIF_P_HV_Htr3PwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIF_P_HV_Htr3PwrLimit_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_P_HV_Htr3PwrLimit_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_P_HV_Htr3PwrLimit);

    /* Merge: '<Root>/VeHTIF_P_HV_Htr4PwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIF_P_HV_Htr4PwrLimit_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_P_HV_Htr4PwrLimit_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_P_HV_Htr4PwrLimit);

    /* Merge: '<Root>/VeHTIF_Pct_HV_Htr2PwrLimit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/VeHTIF_Pct_HV_Htr2PwrLimit_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_Pct_HV_Htr2PwrLimit_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_Pct_HV_Htr2PwrLim);

    /* Merge: '<Root>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write'
     *  SignalConversion generated from: '<S86>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_e_HVC_HtrPwrLimit);

    /* Merge: '<Root>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write'
     *  SignalConversion generated from: '<S86>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr2PwrLimit);

    /* Merge: '<Root>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write'
     *  SignalConversion generated from: '<S86>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr3PwrLimit);

    /* Merge: '<Root>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write'
     *  SignalConversion generated from: '<S86>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write'
     * */
    Rte_IrvWrite_HTIR_PwrOn_VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write_IRV
        (HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr4PwrLimit);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
#if Rte_SysCon_Variant_HTIR_1

FUNC(void, HTIR_CODE) Routine_RC1303_CabOveLoc(void)
{

#if Rte_SysCon_Variant_HTIR_1

    TeDCAB_e_RoutineOpType tmpRead;

#endif

#if Rte_SysCon_Variant_HTIR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1303_CabOveLoc' */
    /* Inport: '<Root>/VeDCAB_e_Routine_RC1303_CabOveLoc_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1303_CabOveLoc_Op_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/Runnable_HVC_HtrOvrht_UnlckReq' */
    /* Merge: '<Root>/Merge_108' incorporates:
     *  Constant: '<S720>/Constant'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1303_CabOveLoc_Op'
     *  RelationalOperator: '<S161>/Equal'
     *  SignalConversion generated from: '<S161>/VeHTIF_b_HVC_HtrOvrht_UnlckReq'
     */
    Rte_IrvWrite_Routine_RC1303_CabOveLoc_HVC_HtrUnlck_Req_INIT_write_IRV
        (((uint32)tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for SubSystem: '<Root>/Runnable_HVC_HtrOvrht_UnlckReq' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1303_CabOveLoc' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, HTIR_CODE) HTIR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HTIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Heater_INIT_Cal'
     */
    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_HtrClntTemp_OutofRngFA_INIT' incorporates:
     *  Constant: '<S596>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrClntTemp_OutofRng =
        KeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_HtrClntTemp_OutofRng_INIT' incorporates:
     *  Constant: '<S616>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrClntTemp_OutofR_e =
        KeHTIR_e_HVC_HtrClntTemp_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_HtrIntCom_ErrFA_INIT' incorporates:
     *  Constant: '<S599>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrIntCom_ErrFA_INIT =
        KeHTIR_b_HVC_HtrIntCom_ErrFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_HtrIntCom_Err_INIT' incorporates:
     *  Constant: '<S620>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrIntCom_Err_INIT =
        KeHTIR_e_HVC_HtrIntCom_ErrINIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_HtrSts_INIT' incorporates:
     *  Constant: '<S624>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrSts_INIT = KeHTIR_e_HVC_HtrSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_HtrUnlck_Req_INIT' incorporates:
     *  Constant: '<S605>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_HtrUnlck_Req_INIT =
        KeHTIR_b_HVC_HtrUnlck_Req_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr_HV_OutofRng_FA_INIT' incorporates:
     *  Constant: '<S609>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_HV_OutofRng_FA_I =
        KeHTIR_b_HVC_Htr_HV_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr_HV_OutofRng_INIT' incorporates:
     *  Constant: '<S627>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_HV_OutofRng_INIT =
        KeHTIR_e_HVC_Htr_HV_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr_LV_OutofRngFA_INIT' incorporates:
     *  Constant: '<S613>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_LV_OutofRngFA_IN =
        KeHTIR_b_HVC_Htr_LV_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr_LV_OutofRng_INIT' incorporates:
     *  Constant: '<S629>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_LV_OutofRng_INIT =
        KeHTIR_e_HVC_Htr_LV_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr_UnlckCntr_INIT' incorporates:
     *  Constant: '<S585>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr_UnlckCntr_INIT =
        KeHTIR_Cnt_HVC_Htr_UnlckCntr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HV_CrntActFA_INIT' incorporates:
     *  Constant: '<S607>/Calib'
     */
    HTIR_ac_B.OutportBufferForHV_CrntActFA_INIT =
        KeHTIR_b_HVC_Htr_HV_CrntActFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HV_CrntAct_INIT' incorporates:
     *  Constant: '<S586>/Calib'
     */
    HTIR_ac_B.OutportBufferForHV_CrntAct_INIT = KeHTIR_I_HVC_Htr_HV_CrntAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HV_VltgAct_FA_INIT' incorporates:
     *  Constant: '<S610>/Calib'
     */
    HTIR_ac_B.OutportBufferForHV_VltgAct_FA_INIT =
        KeHTIR_b_HVC_Htr_HV_VltgAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntIn_TempFA_INIT' incorporates:
     *  Constant: '<S592>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_TempFA_INIT =
        KeHTIR_b_HVC_HtrClntIn_TempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntIn_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S593>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_TempSensFltFA_ =
        KeHTIR_b_HVC_HtrClntIn_TempSensFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntIn_TempSensFlt_INIT' incorporates:
     *  Constant: '<S614>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_TempSensFlt_IN =
        KeHTIR_e_HVC_HtrClntIn_TempSensFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntIn_Temp_INIT' incorporates:
     *  Constant: '<S587>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntIn_Temp_INIT =
        KeHTIR_T_HVC_HtrClntIn_Temp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntOut_TempFA_INIT' incorporates:
     *  Constant: '<S594>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_TempFA_INIT =
        KeHTIR_b_HVC_HtrClntOut_TempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntOut_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S595>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_TempSensFltFA =
        KeHTIR_b_HVC_HtrClntOut_TempSensFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntOut_TempSensFlt_INIT' incorporates:
     *  Constant: '<S615>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_TempSensFlt_I =
        KeHTIR_e_HVC_HtrClntOut_TempSensFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrClntOut_Temp_INIT' incorporates:
     *  Constant: '<S588>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrClntOut_Temp_INIT =
        KeHTIR_T_HVC_HtrClntOut_Temp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrCoreTemp_SensFltFA_INIT' incorporates:
     *  Constant: '<S597>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrCoreTemp_SensFltFA_IN =
        KeHTIR_b_HVC_HtrCoreTemp_SensFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrCoreTemp_SensFlt_INIT' incorporates:
     *  Constant: '<S617>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrCoreTemp_SensFlt_INIT =
        KeHTIR_e_HVC_HtrCoreTemp_SensFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrDrvFltFA_INIT' incorporates:
     *  Constant: '<S598>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrDrvFltFA_INIT = KeHTIR_b_HVC_HtrDrvFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrDrvFlt_INIT' incorporates:
     *  Constant: '<S618>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrDrvFlt_INIT = KeHTIR_e_HVC_HtrDrvFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrHighVol_Dwn_INIT' incorporates:
     *  Constant: '<S619>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrHighVol_Dwn_INIT =
        KeHTIR_e_HVC_HtrHighVol_Dwn_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrProcesMemory_FltFA_INIT' incorporates:
     *  Constant: '<S600>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrProcesMemory_FltFA_IN =
        KeHTIR_b_HVC_HtrProcesMemory_FltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrProcesMemory_Flt_INIT' incorporates:
     *  Constant: '<S621>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrProcesMemory_Flt_INIT =
        KeHTIR_e_HVC_HtrProcesMemory_Flt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrPwrActFA_INIT' incorporates:
     *  Constant: '<S601>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrActFA_INIT = KeHTIR_b_HVC_HtrPwrActFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrPwrAct_INIT' incorporates:
     *  Constant: '<S590>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrAct_INIT = KeHTIR_W_HVC_HtrPwrAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrPwrExpectdFA_INIT' incorporates:
     *  Constant: '<S602>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrExpectdFA_INIT =
        KeHTIR_b_HVC_HtrPwrExpectdFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrPwrExpectd_INIT' incorporates:
     *  Constant: '<S591>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrPwrExpectd_INIT =
        KeHTIR_W_HVC_HtrPwrExpectd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrResis_PCB_OvrTempFA_INIT' incorporates:
     *  Constant: '<S603>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrResis_PCB_OvrTempFA_I =
        KeHTIR_b_HVC_HtrResis_PCB_OvrTempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrResis_PCB_OvrTemp_INIT' incorporates:
     *  Constant: '<S622>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrResis_PCB_OvrTemp_INI =
        KeHTIR_e_HVC_HtrResis_PCB_OvrTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrSelfProtect_ActvFA_INIT' incorporates:
     *  Constant: '<S604>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrSelfProtect_ActvFA_IN =
        KeHTIR_b_HVC_HtrSelfProtect_ActvFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HtrSelfProtect_Actv_INIT' incorporates:
     *  Constant: '<S623>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtrSelfProtect_Actv_INIT =
        KeHTIR_e_HVC_HtrSelfProtect_Actv_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_DCDC_VltgOutofRngFA_INIT' incorporates:
     *  Constant: '<S606>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_DCDC_VltgOutofRngFA_ =
        KeHTIR_b_HVC_Htr_DCDC_VltgOutofRngFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_DCDC_VltgOutofRng_INIT' incorporates:
     *  Constant: '<S625>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_DCDC_VltgOutofRng_IN =
        KeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_HV_CrntOutofRngFA_INIT' incorporates:
     *  Constant: '<S608>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_HV_CrntOutofRngFA_IN =
        KeHTIR_b_HVC_Htr_HV_CrntOutofRngFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_HV_CrntOutofRng_INIT' incorporates:
     *  Constant: '<S626>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_HV_CrntOutofRng_INIT =
        KeHTIR_e_HVC_Htr_HV_CrntOutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_HV_VltgAct_INIT' incorporates:
     *  Constant: '<S589>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_HV_VltgAct_INIT =
        KeHTIR_U_HVC_Htr_HV_VltgAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_InterlockStatFA_INIT' incorporates:
     *  Constant: '<S611>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_InterlockStatFA_INIT =
        KeHTIR_b_HVC_Htr_InterlockStatFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_InterlockStat_INIT' incorporates:
     *  Constant: '<S628>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_InterlockStat_INIT =
        KeHTIR_e_HVC_Htr_InterlockStat_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr_LIN_ResErr_INIT' incorporates:
     *  Constant: '<S612>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr_LIN_ResErr_INIT =
        KeHTIR_b_HVC_Htr_LIN_ResErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr2IntCom_ErrFA_INIT' incorporates:
     *  Constant: '<S511>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2IntCom_ErrFA_INI =
        KeHTIR_b_HVC_Htr2IntCom_ErrFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr2IntCom_Err_INIT' incorporates:
     *  Constant: '<S530>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2IntCom_Err_INIT =
        KeHTIR_e_HVC_Htr2IntCom_ErrINIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr2Sts_INIT' incorporates:
     *  Constant: '<S535>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2Sts_INIT = KeHTIR_e_HVC_Htr2Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr2_HV_OutofRng_FA_INIT' incorporates:
     *  Constant: '<S520>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_HV_OutofRng_FA_ =
        KeHTIR_b_HVC_Htr2_HV_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr2_HV_OutofRng_INIT' incorporates:
     *  Constant: '<S538>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_HV_OutofRng_INI =
        KeHTIR_e_HVC_Htr2_HV_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr2_LV_OutofRngFA_INIT' incorporates:
     *  Constant: '<S523>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_LV_OutofRngFA_I =
        KeHTIR_b_HVC_Htr2_LV_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr2_LV_OutofRng_INIT' incorporates:
     *  Constant: '<S539>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr2_LV_OutofRng_INI =
        KeHTIR_e_HVC_Htr2_LV_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2CoreTemp_FA_INIT' incorporates:
     *  Constant: '<S524>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_FA_INIT =
        KeHTIR_b_Htr2CoreTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2CoreTemp_INIT' incorporates:
     *  Constant: '<S504>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_INIT = KeHTIR_T_Htr2CoreTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2CoreTemp_SensFltFA_INIT' incorporates:
     *  Constant: '<S507>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_SensFltFA_I =
        KeHTIR_b_HVC_Htr2CoreTemp_SensFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2CoreTemp_SensFlt_INIT' incorporates:
     *  Constant: '<S526>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2CoreTemp_SensFlt_INI =
        KeHTIR_e_HVC_Htr2CoreTemp_SensFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2Core_OvrTmpFA_INIT' incorporates:
     *  Constant: '<S508>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Core_OvrTmpFA_INIT =
        KeHTIR_b_HVC_Htr2Core_OvrTmpFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2Core_OvrTmp_INIT' incorporates:
     *  Constant: '<S527>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Core_OvrTmp_INIT =
        KeHTIR_e_HVC_Htr2Core_OvrTmp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2DrvFltFA_INIT' incorporates:
     *  Constant: '<S509>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2DrvFltFA_INIT = KeHTIR_b_HVC_Htr2DrvFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2DrvFlt_INIT' incorporates:
     *  Constant: '<S528>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2DrvFlt_INIT = KeHTIR_e_HVC_Htr2DrvFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2HVCrnt_SnsrFltFA_INIT' incorporates:
     *  Constant: '<S510>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HVCrnt_SnsrFltFA_INI =
        KeHTIR_b_HVC_Htr2HVCrnt_SnsrFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2HVCrnt_SnsrFlt_INIT' incorporates:
     *  Constant: '<S529>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HVCrnt_SnsrFlt_INIT =
        KeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2HV_CrntActFA_INIT' incorporates:
     *  Constant: '<S518>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HV_CrntActFA_INIT =
        KeHTIR_b_HVC_Htr2_HV_CrntActFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2HV_CrntAct_INIT' incorporates:
     *  Constant: '<S502>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HV_CrntAct_INIT =
        KeHTIR_I_HVC_Htr2_HV_CrntAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2HV_VltgAct_FA_INIT' incorporates:
     *  Constant: '<S521>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2HV_VltgAct_FA_INIT =
        KeHTIR_b_HVC_Htr2_HV_VltgAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2PCBTmp_SnsrFltFA_INIT' incorporates:
     *  Constant: '<S512>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PCBTmp_SnsrFltFA_INI =
        KeHTIR_b_HVC_Htr2PCBTmp_SnsrFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2PCBTmp_SnsrFlt_INIT' incorporates:
     *  Constant: '<S531>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PCBTmp_SnsrFlt_INIT =
        KeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2ProcesMemory_FltFA_INIT' incorporates:
     *  Constant: '<S513>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2ProcesMemory_FltFA_I =
        KeHTIR_b_HVC_Htr2ProcesMemory_FltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2ProcesMemory_Flt_INIT' incorporates:
     *  Constant: '<S532>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2ProcesMemory_Flt_INI =
        KeHTIR_e_HVC_Htr2ProcesMemory_Flt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2PwrActFA_INIT' incorporates:
     *  Constant: '<S514>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PwrActFA_INIT = KeHTIR_b_HVC_Htr2PwrActFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2PwrAct_INIT' incorporates:
     *  Constant: '<S503>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2PwrAct_INIT = KeHTIR_Pct_HVC_Htr2PwrAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2Resis_PCB_OvrTempFA_INIT' incorporates:
     *  Constant: '<S515>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Resis_PCB_OvrTempFA_ =
        KeHTIR_b_HVC_Htr2Resis_PCB_OvrTempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2Resis_PCB_OvrTemp_INIT' incorporates:
     *  Constant: '<S533>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2Resis_PCB_OvrTemp_IN =
        KeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2SelfProtect_ActvFA_INIT' incorporates:
     *  Constant: '<S516>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2SelfProtect_ActvFA_I =
        KeHTIR_b_HVC_Htr2SelfProtect_ActvFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2SelfProtect_Actv_INIT' incorporates:
     *  Constant: '<S534>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2SelfProtect_Actv_INI =
        KeHTIR_e_HVC_Htr2SelfProtect_Actv_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2TmpOvrheatgFA_INIT' incorporates:
     *  Constant: '<S517>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2TmpOvrheatgFA_INIT =
        KeHTIR_b_HVC_Htr2TmpOvrheatgFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2TmpOvrheatg_INIT' incorporates:
     *  Constant: '<S536>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2TmpOvrheatg_INIT =
        KeHTIR_e_HVC_Htr2TmpOvrheatg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2_HV_CrntOutofRngFA_INIT' incorporates:
     *  Constant: '<S519>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_HV_CrntOutofRngFA_I =
        KeHTIR_b_HVC_Htr2_HV_CrntOutofRngFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2_HV_CrntOutofRng_INIT' incorporates:
     *  Constant: '<S537>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_HV_CrntOutofRng_INI =
        KeHTIR_e_HVC_Htr2_HV_CrntOutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2_HV_VltgAct_INIT' incorporates:
     *  Constant: '<S506>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_HV_VltgAct_INIT =
        KeHTIR_U_HVC_Htr2_HV_VltgAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2_LIN_ResErr_INIT' incorporates:
     *  Constant: '<S522>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_LIN_ResErr_INIT =
        KeHTIR_b_HVC_Htr2_LIN_ResErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2_PCBTempFA_INIT' incorporates:
     *  Constant: '<S525>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_PCBTempFA_INIT = KeHTIR_b_Htr2_PCBTempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr2_PCBTemp_INIT' incorporates:
     *  Constant: '<S505>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr2_PCBTemp_INIT = KeHTIR_T_Htr2_PCBTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr3Sts_INIT' incorporates:
     *  Constant: '<S544>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr3Sts_INIT = KeHTIR_e_HVC_Htr3Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr3Cntctr_StckClsd_FA_INIT' incorporates:
     *  Constant: '<S541>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3Cntctr_StckClsd_FA_I =
        KeHTIR_b_HVC_Htr3Cntctr_StckClsd_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr3Cntctr_StckClsd_INIT' incorporates:
     *  Constant: '<S543>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3Cntctr_StckClsd_INIT =
        KeHTIR_e_HVC_Htr3Cntctr_StckClsd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr3PwrActFA_INIT' incorporates:
     *  Constant: '<S542>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3PwrActFA_INIT = KeHTIR_b_HVC_Htr3PwrActFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr3PwrAct_INIT' incorporates:
     *  Constant: '<S540>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr3PwrAct_INIT = KeHTIR_W_HVC_Htr3PwrAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4ClntTemp_OutofRngFA_INIT' incorporates:
     *  Constant: '<S555>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4ClntTemp_OutofRn =
        KeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4ClntTemp_OutofRng_INIT' incorporates:
     *  Constant: '<S573>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4ClntTemp_Outof_h =
        KeHTIR_e_HVC_Htr4ClntTemp_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4IntCom_ErrFA_INIT' incorporates:
     *  Constant: '<S558>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4IntCom_ErrFA_INI =
        KeHTIR_b_HVC_Htr4IntCom_ErrFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4IntCom_Err_INIT' incorporates:
     *  Constant: '<S576>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4IntCom_Err_INIT =
        KeHTIR_e_HVC_Htr4IntCom_ErrINIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4Sts_INIT' incorporates:
     *  Constant: '<S580>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4Sts_INIT = KeHTIR_e_HVC_Htr4Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4_HV_OutofRng_FA_INIT' incorporates:
     *  Constant: '<S567>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_HV_OutofRng_FA_ =
        KeHTIR_b_HVC_Htr4_HV_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4_HV_OutofRng_INIT' incorporates:
     *  Constant: '<S583>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_HV_OutofRng_INI =
        KeHTIR_e_HVC_Htr4_HV_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4_LV_OutofRngFA_INIT' incorporates:
     *  Constant: '<S570>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_LV_OutofRngFA_I =
        KeHTIR_b_HVC_Htr4_LV_OutofRng_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/HVC_Htr4_LV_OutofRng_INIT' incorporates:
     *  Constant: '<S584>/Calib'
     */
    HTIR_ac_B.OutportBufferForHVC_Htr4_LV_OutofRng_INI =
        KeHTIR_e_HVC_Htr4_LV_OutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntIn_TempFA_INIT' incorporates:
     *  Constant: '<S551>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_TempFA_INIT =
        KeHTIR_b_HVC_Htr4ClntIn_TempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntIn_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S552>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_TempSensFltFA =
        KeHTIR_b_HVC_Htr4ClntIn_TempSensFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntIn_TempSensFlt_INIT' incorporates:
     *  Constant: '<S571>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_TempSensFlt_I =
        KeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntIn_Temp_INIT' incorporates:
     *  Constant: '<S546>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntIn_Temp_INIT =
        KeHTIR_T_HVC_Htr4ClntIn_Temp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntOut_TempFA_INIT' incorporates:
     *  Constant: '<S553>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_TempFA_INIT =
        KeHTIR_b_HVC_Htr4ClntOut_TempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntOut_TempSensFltFA_INIT' incorporates:
     *  Constant: '<S554>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_TempSensFltF =
        KeHTIR_b_HVC_Htr4ClntOut_TempSensFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntOut_TempSensFlt_INIT' incorporates:
     *  Constant: '<S572>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_TempSensFlt_ =
        KeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ClntOut_Temp_INIT' incorporates:
     *  Constant: '<S547>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ClntOut_Temp_INIT =
        KeHTIR_T_HVC_Htr4ClntOut_Temp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4CoreTemp_SensFltFA_INIT' incorporates:
     *  Constant: '<S556>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4CoreTemp_SensFltFA_I =
        KeHTIR_b_HVC_Htr4CoreTemp_SensFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4CoreTemp_SensFlt_INIT' incorporates:
     *  Constant: '<S574>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4CoreTemp_SensFlt_INI =
        KeHTIR_e_HVC_Htr4CoreTemp_SensFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4DrvFltFA_INIT' incorporates:
     *  Constant: '<S557>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4DrvFltFA_INIT = KeHTIR_b_HVC_Htr4DrvFltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4DrvFlt_INIT' incorporates:
     *  Constant: '<S575>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4DrvFlt_INIT = KeHTIR_e_HVC_Htr4DrvFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4HV_CrntActFA_INIT' incorporates:
     *  Constant: '<S565>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4HV_CrntActFA_INIT =
        KeHTIR_b_HVC_Htr4_HV_CrntActFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4HV_CrntAct_INIT' incorporates:
     *  Constant: '<S545>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4HV_CrntAct_INIT =
        KeHTIR_I_HVC_Htr4_HV_CrntAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4HV_VltgAct_FA_INIT' incorporates:
     *  Constant: '<S568>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4HV_VltgAct_FA_INIT =
        KeHTIR_b_HVC_Htr4_HV_VltgAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4LIN_ResErr_INIT' incorporates:
     *  Constant: '<S569>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4LIN_ResErr_INIT =
        KeHTIR_b_HVC_Htr4_LIN_ResErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ProcesMemory_FltFA_INIT' incorporates:
     *  Constant: '<S559>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ProcesMemory_FltFA_I =
        KeHTIR_b_HVC_Htr4ProcesMemory_FltFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4ProcesMemory_Flt_INIT' incorporates:
     *  Constant: '<S577>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4ProcesMemory_Flt_INI =
        KeHTIR_e_HVC_Htr4ProcesMemory_Flt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4PwrActFA_INIT' incorporates:
     *  Constant: '<S560>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrActFA_INIT = KeHTIR_b_HVC_Htr4PwrActFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4PwrAct_INIT' incorporates:
     *  Constant: '<S549>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrAct_INIT = KeHTIR_W_HVC_Htr4PwrAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4PwrExpectdFA_INIT' incorporates:
     *  Constant: '<S561>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrExpectdFA_INIT =
        KeHTIR_b_HVC_Htr4PwrExpectdFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4PwrExpectd_INIT' incorporates:
     *  Constant: '<S550>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4PwrExpectd_INIT =
        KeHTIR_W_HVC_Htr4PwrExpectd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4Resis_PCB_OvrTempFA_INIT' incorporates:
     *  Constant: '<S562>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4Resis_PCB_OvrTempFA_ =
        KeHTIR_b_HVC_Htr4Resis_PCB_OvrTempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4Resis_PCB_OvrTemp_INIT' incorporates:
     *  Constant: '<S578>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4Resis_PCB_OvrTemp_IN =
        KeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4SelfProtect_ActvFA_INIT' incorporates:
     *  Constant: '<S563>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4SelfProtect_ActvFA_I =
        KeHTIR_b_HVC_Htr4SelfProtect_ActvFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4SelfProtect_Actv_INIT' incorporates:
     *  Constant: '<S579>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4SelfProtect_Actv_INI =
        KeHTIR_e_HVC_Htr4SelfProtect_Actv_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4_DCDC_VltgOutofRngFA_INIT' incorporates:
     *  Constant: '<S564>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_DCDC_VltgOutofRngFA =
        KeHTIR_b_HVC_Htr4_DCDC_VltgOutofRngFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4_DCDC_VltgOutofRng_INIT' incorporates:
     *  Constant: '<S581>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_DCDC_VltgOutofRng_I =
        KeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4_HV_CrntOutofRngFA_INIT' incorporates:
     *  Constant: '<S566>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_HV_CrntOutofRngFA_I =
        KeHTIR_b_HVC_Htr4_HV_CrntOutofRngFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4_HV_CrntOutofRng_INIT' incorporates:
     *  Constant: '<S582>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_HV_CrntOutofRng_INI =
        KeHTIR_e_HVC_Htr4_HV_CrntOutofRng_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S496>/Htr4_HV_VltgAct_INIT' incorporates:
     *  Constant: '<S548>/Calib'
     */
    HTIR_ac_B.OutportBufferForHtr4_HV_VltgAct_INIT =
        KeHTIR_U_HVC_Htr4_HV_VltgAct_INIT;

    /* SystemInitialize for S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const1'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr_ = HTIR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_HV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const2'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_HV_Outo = HTIR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_LV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const4'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_LV_Outo = HTIR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntTemp_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const6'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntTemp = HTIR_ac_ConstB.Const6;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrIntCom_Err_Out_Init' incorporates:
     *  Constant: '<S497>/Const8'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrIntCom_E = HTIR_ac_ConstB.Const8;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Out_Init' incorporates:
     *  Constant: '<S497>/Const10'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrResis_PC = HTIR_ac_ConstB.Const10;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrSelfProtect_Actv_Out_Init' incorporates:
     *  Constant: '<S497>/Const12'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrSelfProt = HTIR_ac_ConstB.Const12;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const14'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntOut_ = HTIR_ac_ConstB.Const14;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const16'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrClntIn_T = HTIR_ac_ConstB.Const16;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const18'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrCoreTemp = HTIR_ac_ConstB.Const18;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const20'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_DCDC_Vl = HTIR_ac_ConstB.Const20;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const22'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_HV_Crnt = HTIR_ac_ConstB.Const22;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrDrvFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const24'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrDrvFlt_O = HTIR_ac_ConstB.Const24;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrProcesMemory_Flt_Out_Init' incorporates:
     *  Constant: '<S497>/Const26'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrProcesMe = HTIR_ac_ConstB.Const26;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_HtrHighVol_Dwn_Out_Init' incorporates:
     *  Constant: '<S497>/Const39'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_HtrHighVol_ = HTIR_ac_ConstB.Const39;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HtrPwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const44'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HtrPwrLimit_IO_ = HTIR_ac_ConstB.Const44;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr2_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const46'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr2 = HTIR_ac_ConstB.Const46;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_HV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const47'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_HV_Out = HTIR_ac_ConstB.Const47;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_LV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const49'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_LV_Out = HTIR_ac_ConstB.Const49;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2IntCom_Err_Out_Init' incorporates:
     *  Constant: '<S497>/Const51'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2IntCom_ = HTIR_ac_ConstB.Const51;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Out_Init' incorporates:
     *  Constant: '<S497>/Const53'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2Resis_P = HTIR_ac_ConstB.Const53;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2SelfProtect_Actv_Out_Init' incorporates:
     *  Constant: '<S497>/Const55'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2SelfPro = HTIR_ac_ConstB.Const55;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2TmpOvrheatg_Out_Init' incorporates:
     *  Constant: '<S497>/Const57'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2TmpOvrh = HTIR_ac_ConstB.Const57;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const59'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2HVCrnt_ = HTIR_ac_ConstB.Const59;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const61'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2CoreTem = HTIR_ac_ConstB.Const61;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const65'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2_HV_Crn = HTIR_ac_ConstB.Const65;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2DrvFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const67'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2DrvFlt_ = HTIR_ac_ConstB.Const67;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Out_Init' incorporates:
     *  Constant: '<S497>/Const69'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2ProcesM = HTIR_ac_ConstB.Const69;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const74'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2PCBTmp_ = HTIR_ac_ConstB.Const74;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr2Core_OvrTmp_Out_Init' incorporates:
     *  Constant: '<S497>/Const76'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr2Core_Ov = HTIR_ac_ConstB.Const76;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_Htr2PwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const84'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_Htr2PwrLimit_IO = HTIR_ac_ConstB.Const84;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr3_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const86'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr3 = HTIR_ac_ConstB.Const86;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HV_Htr3Cntctr_StckClsd_Out_Init' incorporates:
     *  Constant: '<S497>/Const89'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_Htr3Cntctr_S = HTIR_ac_ConstB.Const89;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_Htr3PwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const91'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_Htr3PwrLimit_IO = HTIR_ac_ConstB.Const91;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HV_ElecClntHtr4_Sts_Out_Init' incorporates:
     *  Constant: '<S497>/Const93'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HV_ElecClntHtr4 = HTIR_ac_ConstB.Const93;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_HV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const94'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_HV_Out = HTIR_ac_ConstB.Const94;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_LV_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const96'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_LV_Out = HTIR_ac_ConstB.Const96;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const98'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntTem = HTIR_ac_ConstB.Const98;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4IntCom_Err_Out_Init' incorporates:
     *  Constant: '<S497>/Const100'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4IntCom_ = HTIR_ac_ConstB.Const100;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Out_Init' incorporates:
     *  Constant: '<S497>/Const102'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4Resis_P = HTIR_ac_ConstB.Const102;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4SelfProtect_Actv_Out_Init' incorporates:
     *  Constant: '<S497>/Const104'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4SelfPro = HTIR_ac_ConstB.Const104;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const106'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntOut = HTIR_ac_ConstB.Const106;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const108'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ClntIn_ = HTIR_ac_ConstB.Const108;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const110'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4CoreTem = HTIR_ac_ConstB.Const110;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const112'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_DCDC_V = HTIR_ac_ConstB.Const112;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Out_Init' incorporates:
     *  Constant: '<S497>/Const114'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4_HV_Crn = HTIR_ac_ConstB.Const114;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4DrvFlt_Out_Init' incorporates:
     *  Constant: '<S497>/Const116'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4DrvFlt_ = HTIR_ac_ConstB.Const116;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Out_Init' incorporates:
     *  Constant: '<S497>/Const118'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr4ProcesM = HTIR_ac_ConstB.Const118;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_Htr4PwrLimit_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S497>/Const133'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_Htr4PwrLimit_IO = HTIR_ac_ConstB.Const133;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIF_e_HVC_HtrPwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S630>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HVC_HtrPwrLimit = HTIR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr2PwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S631>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr2PwrLimit =
        HTIR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr3PwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S632>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr3PwrLimit =
        HTIR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIF_e_HV_Htr4PwrLimit_IO_CntrlSt_write' incorporates:
     *  Constant: '<S633>/Constant'
     */
    HTIR_ac_B.OutportBufferForVeHTIF_e_HV_Htr4PwrLimit =
        HTIR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S497>/VeHTIR_e_HVC_Htr_InterlockStat_Out_Init' incorporates:
     *  Constant: '<S497>/Const142'
     */
    HTIR_ac_B.OutportBufferForVeHTIR_e_HVC_Htr_Interlo = HTIR_ac_ConstB.Const142;

    /* End of SystemInitialize for S-Function (fcgen): '<S86>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr_Sts_Value(CeHTIR_e_HtrSts_Off);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr_HV_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_HV_OutofRng_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr_LV_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_LV_OutofRng_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrClntTemp_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_6'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntTemp_OutofRng_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrIntCom_Err' incorporates:
     *  Merge: '<Root>/Merge_Outport_8'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrIntCom_Err_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrSelfProtect_Actv' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrSelfProtect_Actv_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_16'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_18'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_20'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_22'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrDrvFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_24'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrDrvFlt_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrProcesMemory_Flt' incorporates:
     *  Merge: '<Root>/Merge_Outport_26'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrProcesMemory_Flt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_HtrHighVol_Dwn' incorporates:
     *  Merge: '<Root>/Merge_Outport_39'
     */
    (void)Rte_Write_VeHTIR_e_HVC_HtrHighVol_Dwn_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HtrPwrLimit_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_44'
     */
    (void)Rte_Write_VeHTIR_e_HtrPwrLimit_IO_Cnt_Value
        (CeHTIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_46'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr2_Sts_Value(CeHTIR_e_HtrSts_Off);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2_HV_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_47'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_HV_OutofRng_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2_LV_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_49'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_LV_OutofRng_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2IntCom_Err' incorporates:
     *  Merge: '<Root>/Merge_Outport_51'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2IntCom_Err_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp' incorporates:
     *  Merge: '<Root>/Merge_Outport_53'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2SelfProtect_Actv' incorporates:
     *  Merge: '<Root>/Merge_Outport_55'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2SelfProtect_Actv_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2TmpOvrheatg' incorporates:
     *  Merge: '<Root>/Merge_Outport_57'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2TmpOvrheatg_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_59'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_61'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2DrvFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_67'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2DrvFlt_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt' incorporates:
     *  Merge: '<Root>/Merge_Outport_69'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_74'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr2Core_OvrTmp' incorporates:
     *  Merge: '<Root>/Merge_Outport_76'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr2Core_OvrTmp_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_Htr2PwrLimit_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_84'
     */
    (void)Rte_Write_VeHTIR_e_Htr2PwrLimit_IO_Cnt_Value
        (CeHTIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_86'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr3_Sts_Value(CeHTIR_e_HtrSts_Off);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HV_Htr3Cntctr_StckClsd' incorporates:
     *  Merge: '<Root>/Merge_Outport_89'
     */
    (void)Rte_Write_VeHTIR_e_HV_Htr3Cntctr_StckClsd_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_Htr3PwrLimit_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_91'
     */
    (void)Rte_Write_VeHTIR_e_Htr3PwrLimit_IO_Cnt_Value
        (CeHTIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_93'
     */
    (void)Rte_Write_VeHTIR_e_HV_ElecClntHtr4_Sts_Value(CeHTIR_e_HtrSts_Off);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4_HV_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_94'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_HV_OutofRng_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4_LV_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_96'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_LV_OutofRng_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_98'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4IntCom_Err' incorporates:
     *  Merge: '<Root>/Merge_Outport_100'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4IntCom_Err_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp' incorporates:
     *  Merge: '<Root>/Merge_Outport_102'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4SelfProtect_Actv' incorporates:
     *  Merge: '<Root>/Merge_Outport_104'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4SelfProtect_Actv_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_106'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_108'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_110'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_112'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng' incorporates:
     *  Merge: '<Root>/Merge_Outport_114'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4DrvFlt' incorporates:
     *  Merge: '<Root>/Merge_Outport_116'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4DrvFlt_Value(CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt' incorporates:
     *  Merge: '<Root>/Merge_Outport_118'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Value
        (CeHTIR_e_Warning_False);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_Htr4PwrLimit_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_133'
     */
    (void)Rte_Write_VeHTIR_e_Htr4PwrLimit_IO_Cnt_Value
        (CeHTIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeHTIR_e_HVC_Htr_InterlockStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_135'
     */
    (void)Rte_Write_VeHTIR_e_HVC_Htr_InterlockStat_Value
        (CeHVTR_e_IntrlkNotSourced);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
