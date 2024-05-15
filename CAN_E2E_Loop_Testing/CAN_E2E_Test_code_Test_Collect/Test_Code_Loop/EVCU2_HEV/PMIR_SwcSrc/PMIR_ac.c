/*
 * File: PMIR_ac.c
 *
 * Code generated for Simulink model 'PMIR_ac'.
 *
 * Model version                  : 9.95
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:24:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PMIR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PMIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KaPMIR_e_LTActPumpMntrRPM_Map[4] =
{
    CePMPR_e_FTSNA_False, CePMPR_e_FTSNA_True, CePMPR_e_FTSNA_False,
    CePMPR_e_FTSNA_SNA
};                                     /* Referenced by: '<S1549>/Calib' */

static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KaPMIR_e_LTActvPumpDeblock_Map[4] =
{
    CePMPR_e_FTSNA_False, CePMPR_e_FTSNA_True, CePMPR_e_FTSNA_False,
    CePMPR_e_FTSNA_SNA
};                                     /* Referenced by: '<S1542>/Calib' */

static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KaPMIR_e_LTActvPumpDryRun_Map[4] =
{
    CePMPR_e_FTSNA_False, CePMPR_e_FTSNA_True, CePMPR_e_FTSNA_False,
    CePMPR_e_FTSNA_SNA
};                                     /* Referenced by: '<S1544>/Calib' */

static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KaPMIR_e_LTActvPumpFailsafe_Map[4] =
{
    CePMPR_e_TFSNA_True, CePMPR_e_TFSNA_False, CePMPR_e_TFSNA_False,
    CePMPR_e_TFSNA_SNA
};                                     /* Referenced by: '<S1546>/Calib' */

static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KaPMIR_e_LTActvPumpNodeErr_Map[4] =
{
    CePMPR_e_NodeError_NoError, CePMPR_e_NodeError_ActiveError,
    CePMPR_e_NodeError_ErrorStatusChanged, CePMPR_e_NodeError_SNA
};                                     /* Referenced by: '<S1551>/Calib' */

static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KaPMIR_e_LTActvPumpOT_Map[4]
    =
{
    CePMPR_e_FTSNA_False, CePMPR_e_FTSNA_True, CePMPR_e_FTSNA_False,
    CePMPR_e_FTSNA_SNA
};                                     /* Referenced by: '<S1578>/Calib' */

static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KaPMIR_e_LTActvPumpSuppVltErr_Map[4] =
{
    CePMPR_e_FTSNA_False, CePMPR_e_FTSNA_True, CePMPR_e_FTSNA_False,
    CePMPR_e_FTSNA_SNA
};                                     /* Referenced by: '<S1556>/Calib' */

static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KaPMIR_e_TransAuxPmp2_MntrRPM_Map[4] =
{
    CeTAPR_e_TAP_FalseTrueSNA_True, CeTAPR_e_TAP_FalseTrueSNA_False,
    CeTAPR_e_TAP_FalseTrueSNA_False, CeTAPR_e_TAP_FalseTrueSNA_SNA
};                                     /* Referenced by: '<S1586>/Calib' */

static volatile CONST(TeTAPR_e_TransAuxPmp_TrueFalseSNA, PMIR_VAR_INIT)
    KaPMIR_e_TransAuxPmp_MntrRPM_Map[4] =
{
    CeTAPR_e_TAP_TrueFalseSNA_True, CeTAPR_e_TAP_TrueFalseSNA_False,
    CeTAPR_e_TAP_TrueFalseSNA_False, CeTAPR_e_TAP_TrueFalseSNA_SNA
};                                     /* Referenced by: '<S1597>/Calib' */

static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_FCCPmpSuppCrnt_D = 0.0F;/* Referenced by: '<S575>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_FCCPmpSuppCrnt_INIT =
    0.0F;                              /* Referenced by: '<S1187>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_HTAuxPumpCrnt_D = 0.0F;/* Referenced by: '<S699>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_HTAuxPumpCrnt_INIT = 2.0F;/* Referenced by: '<S1213>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_LTActPumpCrnt_INIT = 2.0F;/* Referenced by: '<S1264>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_LTActvPumpCrnt_D = 0.0F;/* Referenced by: '<S768>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_LTPsvPump2Crnt_D = 0.0F;/* Referenced by: '<S949>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_LTPsvPump2Crnt_INIT =
    2.0F;                              /* Referenced by: '<S1312>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_LTPsvPumpCrnt_D = 0.0F;/* Referenced by: '<S1095>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_LTPsvPumpCrnt_INIT = 2.0F;/* Referenced by: '<S1356>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_TransAuxPmp2_Crnt_D =
    0.0F;                              /* Referenced by: '<S378>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_TransAuxPmp2_Crnt_INIT =
    0.0F;                              /* Referenced by: '<S1402>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_TransAuxPmp_Crnt_INIT =
    0.0F;                              /* Referenced by: '<S1444>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_I_TransAuxPumpCurrent_D =
    0.0F;                              /* Referenced by: '<S450>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_ECM_LTPsvPumpRq_D =
    0.0F;                              /* Referenced by: '<S1105>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_ECM_LTPsvPumpRq_INIT =
    0.0F;                              /* Referenced by: '<S1357>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_HTAP_DVC_INIT = 0.0F;/* Referenced by: '<S1214>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_HTAuxPumpActSpd_INIT =
    0.0F;                              /* Referenced by: '<S1215>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_HTAuxPumpTgtSpd_INIT =
    0.0F;                              /* Referenced by: '<S1216>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_HTAuxPump_MaxSpd =
    100.0F;                            /* Referenced by: '<S712>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_HTAuxPump_MinSpd =
    9.45F;                             /* Referenced by: '<S713>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_HT_AuxPump_ActSpd_D =
    0.0F;                              /* Referenced by: '<S680>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_HT_AuxPump_TgtSpd_D =
    0.0F;                              /* Referenced by: '<S664>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTAP_DVC_Cmd_INIT =
    0.0F;                              /* Referenced by: '<S1265>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTActPumpActSpd_INIT =
    0.0F;                              /* Referenced by: '<S1266>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTActPump_ActSpd_D =
    0.0F;                              /* Referenced by: '<S807>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTActPump_MaxSpdPct =
    99.99F;                            /* Referenced by:
                                        * '<S866>/Calib'
                                        * '<S808>/Calib'
                                        * '<S831>/Calib'
                                        */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTActPump_MinSpdPct =
    9.45F;                             /* Referenced by:
                                        * '<S867>/Calib'
                                        * '<S809>/Calib'
                                        * '<S832>/Calib'
                                        */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTActPump_TgtSpd_D =
    0.0F;                              /* Referenced by: '<S833>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTActPump_TgtSpd_INIT =
    0.0F;                              /* Referenced by: '<S1267>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPP2_DVC_Cmd_INIT =
    0.0F;                              /* Referenced by: '<S1313>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPP_DVC_Cmd_INIT =
    0.0F;                              /* Referenced by: '<S1358>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPmp2_ActSpd_D =
    0.0F;                              /* Referenced by: '<S935>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPmp2_TgtSpd_D =
    0.0F;                              /* Referenced by: '<S960>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPmp_ActSpd_D =
    0.0F;                              /* Referenced by: '<S1081>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPmp_TgtSpd_D =
    0.0F;                              /* Referenced by: '<S1114>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPump2_ActSpd_INIT =
    0.0F;                              /* Referenced by: '<S1314>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPump2_TgtSpd_INIT =
    0.0F;                              /* Referenced by: '<S1315>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPump_ActSpd_INIT =
    0.0F;                              /* Referenced by: '<S1359>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LTPsvPump_TgtSpd_INIT =
    0.0F;                              /* Referenced by: '<S1360>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LT_PsvPmp2MaxSpd =
    100.0F;                            /* Referenced by: '<S1005>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LT_PsvPmp2MinSpd =
    9.45F;                             /* Referenced by: '<S1006>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LT_PsvPmpMaxSpd =
    100.0F;                            /* Referenced by: '<S1160>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_LT_PsvPmpMinSpd = 9.45F;/* Referenced by: '<S1161>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_PWM_EOP_IOCtrlSpd_D =
    0.0F;                              /* Referenced by: '<S370>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_Pct_PWM_EOP_IOCtrlSpd_INIT =
    0.0F;                              /* Referenced by: '<S1398>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_FCCPmpActTemp_D = 0.0F;/* Referenced by: '<S533>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_FCCPmpActTemp_INIT = 0.0F;/* Referenced by: '<S1188>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_HTAuxPumpTemp_D = 0.0F;/* Referenced by: '<S637>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_HTAuxPumpTemp_INIT =
    25.0F;                             /* Referenced by: '<S1217>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_LTActPumpTemp_INIT =
    25.0F;                             /* Referenced by: '<S1268>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_LTActvPumpTemp_D = 0.0F;/* Referenced by: '<S851>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_LTPsvPump2Temp_D = 0.0F;/* Referenced by: '<S970>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_LTPsvPump2Temp_INIT =
    25.0F;                             /* Referenced by: '<S1316>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_LTPsvPumpTemp_D = 0.0F;/* Referenced by: '<S1128>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_LTPsvPumpTemp_INIT =
    25.0F;                             /* Referenced by: '<S1361>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp2_OilTemp_D =
    25.0F;                             /* Referenced by: '<S379>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp2_OilTemp_INIT
    = 0.0F;                            /* Referenced by: '<S1403>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp2_Temp_D =
    25.0F;                             /* Referenced by: '<S380>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp2_Temp_INIT =
    25.0F;                             /* Referenced by: '<S1404>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp_OilTemp_D =
    25.0F;                             /* Referenced by: '<S451>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp_OilTemp_INIT =
    0.0F;                              /* Referenced by: '<S1445>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp_Temp_D =
    25.0F;                             /* Referenced by: '<S452>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_T_TransAuxPmp_Temp_INIT =
    25.0F;                             /* Referenced by: '<S1446>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_FCCPmpActVlt_D = 0.0F;/* Referenced by: '<S539>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_FCCPmpActVlt_INIT = 0.0F;/* Referenced by: '<S1189>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_HTAuxPumpVlt_INIT = 12.0F;/* Referenced by: '<S1218>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_HTAuxPumpVltg_D = 0.0F;/* Referenced by: '<S708>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_LTActPumpVlt_INIT = 12.0F;/* Referenced by: '<S1269>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_LTActvPumpVlt_D = 0.0F;/* Referenced by: '<S859>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_LTPsvPump2Vlt_INIT =
    12.0F;                             /* Referenced by: '<S1317>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_LTPsvPump2Vltg_D = 0.0F;/* Referenced by: '<S1001>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_LTPsvPumpVlt_INIT = 12.0F;/* Referenced by: '<S1362>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_LTPsvPumpVltg_D = 0.0F;/* Referenced by: '<S1070>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_TransAuxPmp2_Vltg_D =
    0.0F;                              /* Referenced by: '<S381>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_TransAuxPmp2_Vltg_INIT =
    0.0F;                              /* Referenced by: '<S1405>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_TransAuxPmp_Vltg_INIT =
    0.0F;                              /* Referenced by: '<S1447>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_U_TransAuxPumpVoltage_D =
    0.0F;                              /* Referenced by: '<S453>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_DVC_AuxPmp2SpdEnbl_SD = 0;/* Referenced by: '<S382>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_DVC_AuxPmpSpdEnbl_SD = 0;/* Referenced by: '<S454>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_DVC_AuxPump2SpdDsrd_SD =
    0;                                 /* Referenced by: '<S383>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_DVC_AuxPumpSpdDsrd_SD = 0;/* Referenced by: '<S455>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_ECM_LTPsvPumpRq_FA_D = 0;/* Referenced by: '<S1107>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_ECM_LTPsvPumpRq_FA_INIT =
    0;                                 /* Referenced by: '<S1363>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_ECM_LTPsvPumpRq_FA_SD = 0;/* Referenced by: '<S1108>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_ECM_LTPsvPumpRq_SD = 0;/* Referenced by: '<S1106>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_EOP_SpeedFdbk_FA_D = 0;/* Referenced by: '<S371>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_EOP_SpeedFdbk_FA_SD = 0;/* Referenced by: '<S372>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_EOP_SpeedFdbk_SD = 0;/* Referenced by: '<S373>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActSpd_FA_D = 0;/* Referenced by: '<S525>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActSpd_FA_INIT = 0;/* Referenced by: '<S1190>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActSpd_FA_SD = 0;/* Referenced by: '<S526>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActSpd_SD = 0;/* Referenced by: '<S527>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActTemp_FA_D = 0;/* Referenced by: '<S531>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActTemp_FA_INIT = 0;/* Referenced by: '<S1191>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActTemp_FA_SD = 0;/* Referenced by: '<S532>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActTemp_SD = 0;/* Referenced by: '<S534>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActVlt_FA_D = 0;/* Referenced by: '<S537>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActVlt_FA_INIT = 0;/* Referenced by: '<S1192>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActVlt_FA_SD = 0;/* Referenced by: '<S538>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpActVlt_SD = 0;/* Referenced by: '<S540>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrLIN_D = 0;/* Referenced by: '<S542>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrLIN_INIT = 0;/* Referenced by: '<S1193>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrLIN_SD = 0;/* Referenced by: '<S543>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrLLO_D = 0;/* Referenced by: '<S545>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrLLO_INIT = 0;/* Referenced by: '<S1194>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrLLO_SD = 0;/* Referenced by: '<S546>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOC_D = 0;/* Referenced by: '<S548>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOC_INIT = 0;/* Referenced by: '<S1195>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOC_SD = 0;/* Referenced by: '<S549>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOTD_D = 0;/* Referenced by: '<S551>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOTD_INIT = 0;/* Referenced by: '<S1196>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOTD_SD = 0;/* Referenced by: '<S552>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOT_D = 0;/* Referenced by: '<S554>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOT_INIT = 0;/* Referenced by: '<S1197>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOT_SD = 0;/* Referenced by: '<S555>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOV_D = 0;/* Referenced by: '<S557>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOV_INIT = 0;/* Referenced by: '<S1198>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrOV_SD = 0;/* Referenced by: '<S558>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrSC_D = 0;/* Referenced by: '<S560>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrSC_INIT = 0;/* Referenced by: '<S1199>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrSC_SD = 0;/* Referenced by: '<S561>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrUV_D = 0;/* Referenced by: '<S563>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrUV_INIT = 0;/* Referenced by: '<S1200>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrUV_SD = 0;/* Referenced by: '<S564>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrVD_D = 0;/* Referenced by: '<S566>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrVD_INIT = 0;/* Referenced by: '<S1201>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpErrVD_SD = 0;/* Referenced by: '<S567>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpIntFlt_D = 0;/* Referenced by: '<S569>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpIntFlt_INIT = 0;/* Referenced by: '<S1202>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpIntFlt_SD = 0;/* Referenced by: '<S570>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpStlFlt_D = 0;/* Referenced by: '<S572>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpStlFlt_INIT = 0;/* Referenced by: '<S1203>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpStlFlt_SD = 0;/* Referenced by: '<S573>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_FCCPmpSuppCrnt_SD = 0;/* Referenced by: '<S576>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAP_DVC_FlwRtRq_SD = 0;/* Referenced by: '<S728>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAP_DVC_FlwRt_IO_Cntl_SD
    = 0;                               /* Referenced by: '<S726>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAP_EOLToolType = 0;/* Referenced by: '<S714>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAP_LdfType = 0;/* Referenced by: '<S715>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpActSpd_FA_INIT =
    0;                                 /* Referenced by: '<S1219>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_HTAuxPumpAirPresntErr_FA_D = 0;/* Referenced by: '<S604>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_HTAuxPumpAirPresntErr_FA_INIT = 0;/* Referenced by: '<S1220>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_HTAuxPumpAirPresntErr_FA_SD = 0;/* Referenced by: '<S605>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpAirPresntErr_SD =
    0;                                 /* Referenced by: '<S602>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpCrnt_SD = 0;/* Referenced by: '<S700>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpDeblock_FA_INIT =
    0;                                 /* Referenced by: '<S1222>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpDeblock_SD = 0;/* Referenced by: '<S703>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpDryRun_FA_D = 0;/* Referenced by: '<S657>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpDryRun_FA_INIT =
    0;                                 /* Referenced by: '<S1223>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpDryRun_FA_SD = 0;/* Referenced by: '<S658>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpDryRun_SD = 0;/* Referenced by: '<S655>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpFailsafe_SD = 0;/* Referenced by: '<S607>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpLmpHM_FA_D = 0;/* Referenced by: '<S624>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpLmpHM_FA_INIT =
    0;                                 /* Referenced by: '<S1225>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpLmpHM_FA_SD = 0;/* Referenced by: '<S625>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpLmpHM_SD = 0;/* Referenced by: '<S622>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpMntrRPM_FA_D = 0;/* Referenced by: '<S618>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpMntrRPM_FA_INIT =
    0;                                 /* Referenced by: '<S1226>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpMntrRPM_FA_SD =
    0;                                 /* Referenced by: '<S619>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpMntrRPM_SD = 0;/* Referenced by: '<S616>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpNodeErr_FA_INIT =
    0;                                 /* Referenced by: '<S1227>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpNodeErr_SD = 0;/* Referenced by: '<S648>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpOT_FA_INIT = 0;/* Referenced by: '<S1228>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpOT_SD = 0;/* Referenced by: '<S611>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpOvrCrnt_FA_INIT =
    0;                                 /* Referenced by: '<S1229>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpOvrCrnt_SD = 0;/* Referenced by: '<S695>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpPstRnSt_FA_D = 0;/* Referenced by: '<S630>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpPstRnSt_FA_INIT =
    0;                                 /* Referenced by: '<S1230>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpPstRnSt_FA_SD =
    0;                                 /* Referenced by: '<S631>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpPstRnSt_SD = 0;/* Referenced by: '<S628>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRPMAct_FA_INIT =
    0;                                 /* Referenced by: '<S1231>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRPMTgt_FA_D = 0;/* Referenced by: '<S669>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRPMTgt_FA_INIT =
    0;                                 /* Referenced by: '<S1232>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRPMTgt_FA_SD = 0;/* Referenced by: '<S670>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRPMTgt_SD = 0;/* Referenced by: '<S667>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRespErr_D = 0;/* Referenced by: '<S651>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRespErr_INIT = 0;/* Referenced by: '<S1233>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpRespErr_SD = 0;/* Referenced by: '<S652>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_HTAuxPumpSuppVltErr_FA_INIT = 0;/* Referenced by: '<S1234>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpSuppVltErr_SD =
    0;                                 /* Referenced by: '<S643>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpTemp_FA_D = 0;/* Referenced by: '<S639>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpTemp_FA_INIT = 0;/* Referenced by: '<S1235>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpTemp_FA_SD = 0;/* Referenced by: '<S640>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpTemp_SD = 0;/* Referenced by: '<S638>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpTemp_SNA_D = 0;/* Referenced by: '<S635>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpTemp_SNA_SD = 0;/* Referenced by: '<S636>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpTgtSpd_FA_INIT =
    0;                                 /* Referenced by: '<S1236>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpVer_SD = 0;/* Referenced by: '<S724>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpVlt_FA_INIT = 0;/* Referenced by: '<S1237>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpVltg_FA_D = 0;/* Referenced by: '<S710>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpVltg_FA_SD = 0;/* Referenced by: '<S711>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPumpVltg_SD = 0;/* Referenced by: '<S709>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HTAuxPump_ProdSuplrID_SD =
    0;                                 /* Referenced by: '<S722>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPumpRPMAct_FA_D = 0;/* Referenced by: '<S685>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPumpRPMAct_FA_SD =
    0;                                 /* Referenced by: '<S686>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPumpRPMAct_SD = 0;/* Referenced by: '<S683>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPumpRPMAct_SNA_D =
    0;                                 /* Referenced by: '<S689>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPumpRPMAct_SNA_SD =
    0;                                 /* Referenced by: '<S690>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_ActSpd_FA_D =
    0;                                 /* Referenced by: '<S687>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_ActSpd_FA_SD =
    0;                                 /* Referenced by: '<S688>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_ActSpd_SD = 0;/* Referenced by: '<S681>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_ActSpd_SNA_D =
    0;                                 /* Referenced by: '<S691>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_ActSpd_SNA_SD =
    0;                                 /* Referenced by: '<S692>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_TgtSpd_FA_D =
    0;                                 /* Referenced by: '<S671>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_TgtSpd_FA_SD =
    0;                                 /* Referenced by: '<S672>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_HT_AuxPump_TgtSpd_SD = 0;/* Referenced by: '<S665>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTAP_AirPrsntErr_SD = 0;/* Referenced by: '<S754>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTAP_DVC_FlwRtRq_SD = 0;/* Referenced by: '<S874>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTAP_DVC_FlwRt_IO_Cntl_SD
    = 0;                               /* Referenced by: '<S872>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPmp_EOLToolType = 0;/* Referenced by: '<S868>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpActSpd_FA_D = 0;/* Referenced by: '<S814>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpActSpd_FA_INIT =
    0;                                 /* Referenced by: '<S1270>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpActSpd_FA_SD = 0;/* Referenced by: '<S815>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpActSpd_SNA_D = 0;/* Referenced by: '<S818>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpActSpd_SNA_SD =
    0;                                 /* Referenced by: '<S819>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTActPumpAirPrsntErr_FA_INIT = 0;/* Referenced by: '<S1271>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpCrnt_FA_INIT = 0;/* Referenced by: '<S1272>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpDeblock_FA_INIT =
    0;                                 /* Referenced by: '<S1273>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpDryRun_FA_INIT =
    0;                                 /* Referenced by: '<S1274>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpFailsafe_FA_INIT
    = 0;                               /* Referenced by: '<S1275>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpNodeErr_FA_INIT =
    0;                                 /* Referenced by: '<S1278>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpOvrCrnt_FA_INIT =
    0;                                 /* Referenced by: '<S1279>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpPstRnSt_FA_INIT =
    0;                                 /* Referenced by: '<S1280>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpRPMAct_FA_INIT =
    0;                                 /* Referenced by: '<S1281>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpRPMAct_SD = 0;/* Referenced by: '<S822>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpRPMTgt_FA_INIT =
    0;                                 /* Referenced by: '<S1282>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpRespErr_INIT = 0;/* Referenced by: '<S1283>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTActPumpSuppVltErr_FA_INIT = 0;/* Referenced by: '<S1284>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpTemp_FA_INIT = 0;/* Referenced by: '<S1285>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpTgtSpd_FA_D = 0;/* Referenced by: '<S838>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpTgtSpd_FA_SD = 0;/* Referenced by: '<S839>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPumpVlt_FA_INIT = 0;/* Referenced by: '<S1286>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPump_ActSpd_SD = 0;/* Referenced by: '<S810>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPump_LDFType = 0;/* Referenced by: '<S869>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPump_TgtSpd_FA_INIT =
    0;                                 /* Referenced by: '<S1287>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActPump_TgtSpd_SD = 0;/* Referenced by: '<S834>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpCrnt_SD = 0;/* Referenced by: '<S769>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpDeblock_SD = 0;/* Referenced by: '<S773>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpDryRun_FA_D = 0;/* Referenced by: '<S781>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpDryRun_FA_SD =
    0;                                 /* Referenced by: '<S782>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpDryRun_SD = 0;/* Referenced by: '<S783>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpDryRun_SNA_D =
    0;                                 /* Referenced by: '<S779>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpDryRun_SNA_SD =
    0;                                 /* Referenced by: '<S780>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpFailsafe_SD = 0;/* Referenced by: '<S785>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpLmpHM_SD = 0;/* Referenced by: '<S788>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpMntrRPM_SD = 0;/* Referenced by: '<S791>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpNodeErr_SD = 0;/* Referenced by: '<S793>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpOT_FA_INIT = 0;/* Referenced by: '<S1288>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpOT_SD = 0;/* Referenced by: '<S863>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpOvrCrnt_SD = 0;/* Referenced by: '<S764>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpPstRnSt_SD = 0;/* Referenced by: '<S797>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpRespErr_D = 0;/* Referenced by: '<S844>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpRespErr_SD = 0;/* Referenced by: '<S845>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpSuppVltErr_SD =
    0;                                 /* Referenced by: '<S759>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpTemp_FA_D = 0;/* Referenced by: '<S853>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpTemp_FA_SD = 0;/* Referenced by: '<S854>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpTemp_SD = 0;/* Referenced by: '<S852>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpTemp_SNA_D = 0;/* Referenced by: '<S849>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpTemp_SNA_SD = 0;/* Referenced by: '<S850>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpVlt_FA_D = 0;/* Referenced by: '<S857>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpVlt_FA_SD = 0;/* Referenced by: '<S858>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTActvPumpVlt_SD = 0;/* Referenced by: '<S860>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPP2_DVC_FlwRtRq_SD = 0;/* Referenced by: '<S1016>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPP2_DVC_FlwRt_IO_Cntl_SD = 0;/* Referenced by: '<S1014>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPP_DVC_FlwRtRq_SD = 0;/* Referenced by: '<S1172>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPP_DVC_FlwRt_IO_Cntl_SD
    = 0;                               /* Referenced by: '<S1170>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_ActSpd_FA_D = 0;/* Referenced by: '<S944>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_ActSpd_FA_SD =
    0;                                 /* Referenced by: '<S945>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_ActSpd_SD = 0;/* Referenced by: '<S936>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_ActSpd_SNA_D =
    0;                                 /* Referenced by: '<S946>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_ActSpd_SNA_SD =
    0;                                 /* Referenced by: '<S947>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_LdfType = 0;/* Referenced by: '<S1007>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_TgtSpd_FA_D = 0;/* Referenced by: '<S963>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_TgtSpd_FA_SD =
    0;                                 /* Referenced by: '<S964>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp2_TgtSpd_SD = 0;/* Referenced by: '<S961>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_ActSpd_FA_D = 0;/* Referenced by: '<S1088>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_ActSpd_FA_SD = 0;/* Referenced by: '<S1089>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_ActSpd_SD = 0;/* Referenced by: '<S1082>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_ActSpd_SNA_D = 0;/* Referenced by: '<S1092>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_ActSpd_SNA_SD =
    0;                                 /* Referenced by: '<S1093>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_EOLToolType = 0;/* Referenced by: '<S1162>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_LdfType = 0;/* Referenced by: '<S1163>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_TgtSpd_FA_D = 0;/* Referenced by: '<S1121>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_TgtSpd_FA_SD = 0;/* Referenced by: '<S1122>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPmp_TgtSpd_SD = 0;/* Referenced by: '<S1115>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPump2AirPresntErr_FA_D = 0;/* Referenced by: '<S905>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPump2AirPresntErr_FA_SD = 0;/* Referenced by: '<S906>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2AirPresntErr_SD
    = 0;                               /* Referenced by: '<S903>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPump2AirPrsntErr_FA_INIT = 0;/* Referenced by: '<S1318>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Crnt_SD = 0;/* Referenced by: '<S950>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Deblock_FA_INIT
    = 0;                               /* Referenced by: '<S1320>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Deblock_SD = 0;/* Referenced by: '<S978>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2DryRun_FA_D = 0;/* Referenced by: '<S985>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2DryRun_FA_INIT =
    0;                                 /* Referenced by: '<S1321>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2DryRun_FA_SD =
    0;                                 /* Referenced by: '<S986>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2DryRun_SD = 0;/* Referenced by: '<S983>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Failsafe_SD = 0;/* Referenced by: '<S908>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2LmpHM_FA_D = 0;/* Referenced by: '<S955>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2LmpHM_FA_SD = 0;/* Referenced by: '<S956>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2LmpHM_SD = 0;/* Referenced by: '<S953>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2MntrRPM_FA_D =
    0;                                 /* Referenced by: '<S914>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2MntrRPM_FA_INIT
    = 0;                               /* Referenced by: '<S1323>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2MntrRPM_FA_SD =
    0;                                 /* Referenced by: '<S915>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2MntrRPM_SD = 0;/* Referenced by: '<S912>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2NodeErr_FA_INIT
    = 0;                               /* Referenced by: '<S1324>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2NodeErr_SD = 0;/* Referenced by: '<S989>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2OT_FA_INIT = 0;/* Referenced by: '<S1325>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2OT_SD = 0;/* Referenced by: '<S996>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2OvrCrnt_FA_INIT
    = 0;                               /* Referenced by: '<S1326>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2OvrCrnt_SD = 0;/* Referenced by: '<S918>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2ProdSuplrID_SD =
    0;                                 /* Referenced by: '<S921>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RPMAct_FA_D = 0;/* Referenced by: '<S942>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RPMAct_FA_INIT =
    0;                                 /* Referenced by: '<S1327>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RPMAct_FA_SD =
    0;                                 /* Referenced by: '<S943>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RPMAct_SD = 0;/* Referenced by: '<S940>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RPMAct_SNA_D =
    0;                                 /* Referenced by: '<S938>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RPMAct_SNA_SD =
    0;                                 /* Referenced by: '<S939>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RespErr_D = 0;/* Referenced by: '<S992>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RespErr_INIT =
    0;                                 /* Referenced by: '<S1328>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2RespErr_SD = 0;/* Referenced by: '<S993>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPump2SuppVltErr_FA_INIT = 0;/* Referenced by: '<S1329>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2SuppVltErr_SD =
    0;                                 /* Referenced by: '<S925>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Temp_FA_D = 0;/* Referenced by: '<S972>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Temp_FA_INIT =
    0;                                 /* Referenced by: '<S1330>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Temp_FA_SD = 0;/* Referenced by: '<S973>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Temp_SD = 0;/* Referenced by: '<S971>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Temp_SNA_D = 0;/* Referenced by: '<S968>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Temp_SNA_SD = 0;/* Referenced by: '<S969>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Ver_SD = 0;/* Referenced by: '<S974>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Vlt_FA_INIT = 0;/* Referenced by: '<S1331>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Vltg_FA_D = 0;/* Referenced by: '<S1003>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Vltg_FA_SD = 0;/* Referenced by: '<S1004>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2Vltg_SD = 0;/* Referenced by: '<S1002>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2_ActSpd_FA_INIT
    = 0;                               /* Referenced by: '<S1332>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2_LmpHM_FA_INIT =
    0;                                 /* Referenced by: '<S1333>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPump2_PstRnSt_FA_INIT = 0;/* Referenced by: '<S1474>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump2_TgtSpd_FA_INIT
    = 0;                               /* Referenced by: '<S1334>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPumpAirPresntErr_FA_D = 0;/* Referenced by: '<S1048>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPumpAirPresntErr_FA_SD = 0;/* Referenced by: '<S1049>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpAirPresntErr_SD =
    0;                                 /* Referenced by: '<S1046>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPumpAirPrsntErr_FA_INIT = 0;/* Referenced by: '<S1364>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpCrnt_SD = 0;/* Referenced by: '<S1096>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpDeblock_FA_INIT =
    0;                                 /* Referenced by: '<S1366>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpDeblock_SD = 0;/* Referenced by: '<S1136>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpDryRun_FA_D = 0;/* Referenced by: '<S1143>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpDryRun_FA_INIT =
    0;                                 /* Referenced by: '<S1367>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpDryRun_FA_SD = 0;/* Referenced by: '<S1144>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpDryRun_SD = 0;/* Referenced by: '<S1141>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpFailsafe_SD = 0;/* Referenced by: '<S1146>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpLmpHM_FA_D = 0;/* Referenced by: '<S1101>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpLmpHM_FA_SD = 0;/* Referenced by: '<S1102>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpLmpHM_SD = 0;/* Referenced by: '<S1099>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpMntrRPM_FA_D = 0;/* Referenced by: '<S1054>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpMntrRPM_FA_SD =
    0;                                 /* Referenced by: '<S1055>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpMntrRPM_INIT = 0;/* Referenced by: '<S1369>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpMntrRPM_SD = 0;/* Referenced by: '<S1052>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpNodeErr_FA_INIT =
    0;                                 /* Referenced by: '<S1370>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpNodeErr_SD = 0;/* Referenced by: '<S1150>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpOT_FA_INIT = 0;/* Referenced by: '<S1371>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpOT_SD = 0;/* Referenced by: '<S1157>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpOvrCrnt_FA_INIT =
    0;                                 /* Referenced by: '<S1372>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpOvrCrnt_SD = 0;/* Referenced by: '<S1058>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpProdSuplrID_SD =
    0;                                 /* Referenced by: '<S1061>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMAct_FA_D = 0;/* Referenced by: '<S1086>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMAct_FA_INIT =
    0;                                 /* Referenced by: '<S1373>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMAct_FA_SD = 0;/* Referenced by: '<S1087>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMAct_SD = 0;/* Referenced by: '<S1084>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMAct_SNA_D = 0;/* Referenced by: '<S1090>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMAct_SNA_SD =
    0;                                 /* Referenced by: '<S1091>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMTgt_FA_D = 0;/* Referenced by: '<S1119>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMTgt_FA_INIT =
    0;                                 /* Referenced by: '<S1374>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMTgt_FA_SD = 0;/* Referenced by: '<S1120>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRPMTgt_SD = 0;/* Referenced by: '<S1117>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRespErr_D = 0;/* Referenced by: '<S1153>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRespErr_INIT = 0;/* Referenced by: '<S1375>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpRespErr_SD = 0;/* Referenced by: '<S1154>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_LTPsvPumpSuppVltErr_FA_INIT = 0;/* Referenced by: '<S1376>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpSuppVltErr_SD =
    0;                                 /* Referenced by: '<S1065>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpTemp_FA_D = 0;/* Referenced by: '<S1130>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpTemp_FA_INIT = 0;/* Referenced by: '<S1377>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpTemp_FA_SD = 0;/* Referenced by: '<S1131>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpTemp_SD = 0;/* Referenced by: '<S1129>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpTemp_SNA_D = 0;/* Referenced by: '<S1126>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpTemp_SNA_SD = 0;/* Referenced by: '<S1127>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpVer_SD = 0;/* Referenced by: '<S1132>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpVlt_FA_INIT = 0;/* Referenced by: '<S1378>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpVltg_FA_D = 0;/* Referenced by: '<S1072>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpVltg_FA_SD = 0;/* Referenced by: '<S1073>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPumpVltg_SD = 0;/* Referenced by: '<S1071>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump_ActSpd_FA_INIT =
    0;                                 /* Referenced by: '<S1379>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump_LmpHM_INIT = 0;/* Referenced by: '<S1380>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump_PstRnSt_FA_INIT
    = 0;                               /* Referenced by: '<S1475>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LTPsvPump_TgtSpd_FA_INIT =
    0;                                 /* Referenced by: '<S1381>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LT_ActPmpRPM_Tgt_SD = 0;/* Referenced by: '<S842>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LT_ActvPmpRPMAct_FA_D = 0;/* Referenced by: '<S820>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LT_ActvPmpRPMAct_FA_SD =
    0;                                 /* Referenced by: '<S821>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LT_ActvPmpRPMAct_SNA_D =
    0;                                 /* Referenced by: '<S816>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LT_ActvPmpRPMAct_SNA_SD =
    0;                                 /* Referenced by: '<S817>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LT_ActvPmpRPMTgt_FA_D = 0;/* Referenced by: '<S840>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_LT_ActvPmpRPMTgt_FA_SD =
    0;                                 /* Referenced by: '<S841>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_PWM_EOP_IOCtrlMode_SD = 0;/* Referenced by: '<S374>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_PWM_EOP_IOCtrlSpd_SD = 0;/* Referenced by: '<S375>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_PWM_TAP_Sel = 0;/* Referenced by: '<S456>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TAP_ColdBiasSts_SD = 0;/* Referenced by: '<S457>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_ColdBiasSts_FA_D = 0;/* Referenced by: '<S384>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_ColdBiasSts_FA_INIT = 0;/* Referenced by: '<S1406>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_ColdBiasSts_FA_SD = 0;/* Referenced by: '<S385>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_ColdBiasSts_SD = 0;/* Referenced by: '<S386>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_CrntErr_FA_D
    = 0;                               /* Referenced by: '<S387>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_CrntErr_FA_INIT = 0;/* Referenced by: '<S1407>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_CrntErr_FA_SD = 0;/* Referenced by: '<S388>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_CrntErr_SD =
    0;                                 /* Referenced by: '<S389>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Crnt_FA_D =
    0;                                 /* Referenced by: '<S390>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Crnt_FA_INIT
    = 0;                               /* Referenced by: '<S1408>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Crnt_FA_SD =
    0;                                 /* Referenced by: '<S391>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Crnt_SD = 0;/* Referenced by: '<S392>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_DryRun_FA_D =
    0;                                 /* Referenced by: '<S393>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_DryRun_FA_INIT = 0;/* Referenced by: '<S1409>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_DryRun_FA_SD
    = 0;                               /* Referenced by: '<S394>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_DryRun_SD =
    0;                                 /* Referenced by: '<S395>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_LmpHM_FA_D =
    0;                                 /* Referenced by: '<S396>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_LmpHM_FA_INIT = 0;/* Referenced by: '<S1410>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_LmpHM_FA_SD =
    0;                                 /* Referenced by: '<S397>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_LmpHM_SD = 0;/* Referenced by: '<S398>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_MntrRPM_FA_D
    = 0;                               /* Referenced by: '<S399>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_MntrRPM_FA_INIT = 0;/* Referenced by: '<S1411>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_MntrRPM_FA_SD = 0;/* Referenced by: '<S400>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_MntrRPM_SD =
    0;                                 /* Referenced by: '<S401>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_OilTemp_FA_D
    = 0;                               /* Referenced by: '<S402>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_OilTemp_FA_INIT = 0;/* Referenced by: '<S1412>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_OilTemp_FA_SD = 0;/* Referenced by: '<S403>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_OilTemp_SD =
    0;                                 /* Referenced by: '<S404>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_PstRnSt_FA_D
    = 0;                               /* Referenced by: '<S405>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_PstRnSt_FA_INIT = 0;/* Referenced by: '<S1413>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_PstRnSt_FA_SD = 0;/* Referenced by: '<S406>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_PstRnSt_SD =
    0;                                 /* Referenced by: '<S407>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RPMAct_FA_D =
    0;                                 /* Referenced by: '<S408>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_RPMAct_FA_INIT = 0;/* Referenced by: '<S1414>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RPMAct_FA_SD
    = 0;                               /* Referenced by: '<S409>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RPMAct_SD =
    0;                                 /* Referenced by: '<S410>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RPMAct_SNA_D
    = 0;                               /* Referenced by: '<S411>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_RPMAct_SNA_SD = 0;/* Referenced by: '<S412>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RPMTgt_FA_D =
    0;                                 /* Referenced by: '<S413>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_RPMTgt_FA_INIT = 0;/* Referenced by: '<S1415>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RPMTgt_FA_SD
    = 0;                               /* Referenced by: '<S414>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RPMTgt_SD =
    0;                                 /* Referenced by: '<S415>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RespErr_D =
    0;                                 /* Referenced by: '<S416>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RespErr_INIT
    = 0;                               /* Referenced by: '<S1416>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_RespErr_SD =
    0;                                 /* Referenced by: '<S417>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_StallEvnt_FA_D = 0;/* Referenced by: '<S418>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_StallEvnt_FA_INIT = 0;/* Referenced by: '<S1417>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_StallEvnt_FA_SD = 0;/* Referenced by: '<S419>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_StallEvnt_SD
    = 0;                               /* Referenced by: '<S420>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_TAP_HW_VER_SD = 0;/* Referenced by: '<S421>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_TAP_SW_VER_SD = 0;/* Referenced by: '<S422>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_TempErr_FA_D
    = 0;                               /* Referenced by: '<S423>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_TempErr_FA_INIT = 0;/* Referenced by: '<S1418>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_TempErr_FA_SD = 0;/* Referenced by: '<S424>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_TempErr_SD =
    0;                                 /* Referenced by: '<S425>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Temp_FA_D =
    0;                                 /* Referenced by: '<S426>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Temp_FA_INIT
    = 0;                               /* Referenced by: '<S1419>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Temp_FA_SD =
    0;                                 /* Referenced by: '<S427>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Temp_SD = 0;/* Referenced by: '<S428>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_VltgErr_FA_D
    = 0;                               /* Referenced by: '<S429>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_VltgErr_FA_INIT = 0;/* Referenced by: '<S1420>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp2_VltgErr_FA_SD = 0;/* Referenced by: '<S430>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_VltgErr_SD =
    0;                                 /* Referenced by: '<S431>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Vltg_FA_D =
    0;                                 /* Referenced by: '<S432>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Vltg_FA_INIT
    = 0;                               /* Referenced by: '<S1421>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Vltg_FA_SD =
    0;                                 /* Referenced by: '<S433>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp2_Vltg_SD = 0;/* Referenced by: '<S434>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp_DryRun_FA_INIT = 0;/* Referenced by: '<S1451>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_OilTemp_FA_D =
    0;                                 /* Referenced by: '<S458>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPmp_OilTemp_FA_INIT = 0;/* Referenced by: '<S1454>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_OilTemp_FA_SD
    = 0;                               /* Referenced by: '<S459>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_OilTemp_SD =
    0;                                 /* Referenced by: '<S460>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_RespErr = 0;
                /* Referenced by: '<S100>/FsftPMIR_b_TransAuxPmp_RespErrChrt' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_RespErr_INIT =
    0;                                 /* Referenced by: '<S1457>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_TAP_HW_VER_SD
    = 0;                               /* Referenced by: '<S461>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_TAP_SW_VER_SD
    = 0;                               /* Referenced by: '<S462>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_TCM_Req_INIT =
    0;                                 /* Referenced by: '<S1459>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_TempFA_INIT =
    0;                                 /* Referenced by: '<S1460>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_Temp_FA_D = 0;/* Referenced by: '<S463>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPmp_Temp_SD = 0;/* Referenced by: '<S464>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpCurrent_SD =
    0;                                 /* Referenced by: '<S465>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpDryRun_FA_D =
    0;                                 /* Referenced by: '<S466>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpDryRun_FA_SD =
    0;                                 /* Referenced by: '<S467>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpDryRun_SD = 0;/* Referenced by: '<S468>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpLmpHM_SD = 0;/* Referenced by: '<S469>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpMntrRPM_SD =
    0;                                 /* Referenced by: '<S470>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpPstRnSt_SD =
    0;                                 /* Referenced by: '<S471>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpRespError_D =
    0;                                 /* Referenced by: '<S472>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpRespError_SD =
    0;                                 /* Referenced by: '<S473>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpStallEvent_SD
    = 0;                               /* Referenced by: '<S474>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpTCMReq_D = 0;/* Referenced by: '<S475>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpTCMReq_SD = 0;/* Referenced by: '<S476>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpTempError_SD =
    0;                                 /* Referenced by: '<S477>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpTemp_FA_SD =
    0;                                 /* Referenced by: '<S478>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPumpVoltageError_SD = 0;/* Referenced by: '<S479>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPumpVoltage_SD =
    0;                                 /* Referenced by: '<S480>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPump_CurrentError_SD = 0;/* Referenced by: '<S481>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPump_RPMAct_FA_D =
    0;                                 /* Referenced by: '<S482>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPump_RPMAct_FA_SD
    = 0;                               /* Referenced by: '<S483>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPump_RPMAct_SD =
    0;                                 /* Referenced by: '<S484>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPump_RPMAct_SNA_D
    = 0;                               /* Referenced by: '<S485>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_b_TransAuxPump_RPMAct_SNA_SD = 0;/* Referenced by: '<S486>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT) KePMIR_b_TransAuxPump_RPMTgt_SD =
    0;                                 /* Referenced by: '<S487>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, PMIR_VAR_INIT)
    KePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S727>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpAirPresntErr_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S603>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpAirPresntErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1238>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_HTAuxPumpDeblock_D
    = CePMPR_e_FTSNA_False;            /* Referenced by: '<S704>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpDeblock_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1239>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_HTAuxPumpDryRun_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S656>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpDryRun_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1240>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpFailsafe_D = CePMPR_e_TFSNA_False;/* Referenced by: '<S608>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpFailsafe_INIT = CePMPR_e_TFSNA_True;/* Referenced by: '<S1241>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_HTAuxPumpLmpHM_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S623>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpLmpHM_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1242>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT) KePMIR_e_HTAuxPumpMntrRPM_D
    = CePMPR_e_TFSNA_False;            /* Referenced by: '<S617>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpMntrRPM_INIT = CePMPR_e_TFSNA_True;/* Referenced by: '<S1243>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpNodeErr_D = CePMPR_e_NodeError_NoError;/* Referenced by: '<S649>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpNodeErr_INIT = CePMPR_e_NodeError_NoError;/* Referenced by: '<S1244>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_HTAuxPumpOT_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S612>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_HTAuxPumpOT_INIT =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1245>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_HTAuxPumpOvrCrnt_D
    = CePMPR_e_FTSNA_False;            /* Referenced by: '<S696>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpOvrCrnt_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1246>/Calib' */
static volatile CONST(TeTMIR_e_ECM_LTP_FanAftRunRq, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpPstRnSt_D = CeTMIR_e_SNA_AftRunRequest;/* Referenced by: '<S629>/Calib' */
static volatile CONST(TeTMIR_e_ECM_LTP_FanAftRunRq, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpPstRnSt_INIT = CeTMIR_e_No_AftRunRequest;/* Referenced by: '<S1247>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpSuppVltErr_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S644>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_HTAuxPumpSuppVltErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1248>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTAP_AirPrsntErr_D
    = CePMPR_e_FTSNA_False;            /* Referenced by: '<S755>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, PMIR_VAR_INIT)
    KePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S873>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpAirPrsntErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1289>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpDeblock_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1290>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpDryRun_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1291>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpFailsafe_INIT = CePMPR_e_TFSNA_True;/* Referenced by: '<S1292>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpLmpHM_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1293>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpMntrRPM_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1294>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpNodeErr_INIT = CePMPR_e_NodeError_NoError;/* Referenced by: '<S1295>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpOvrCrnt_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1296>/Calib' */
static volatile CONST(TeTMIR_e_ECM_LTP_FanAftRunRq, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpPstRnSt_INIT = CeTMIR_e_No_AftRunRequest;/* Referenced by: '<S1297>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActPumpSuppVltErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1298>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActvPumpDeblock_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S774>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTActvPumpDryRun_D
    = CePMPR_e_FTSNA_False;            /* Referenced by: '<S784>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActvPumpFailsafe_D = CePMPR_e_TFSNA_False;/* Referenced by: '<S786>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTActvPumpLmpHM_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S789>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActvPumpMntrRPM_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S792>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_LTActvPumpNodeErr_D = CePMPR_e_NodeError_NoError;/* Referenced by: '<S794>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTActvPumpOT_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S864>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTActvPumpOT_INIT =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1299>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActvPumpOvrCrnt_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S765>/Calib' */
static volatile CONST(TeTMIR_e_ECM_LTP_FanAftRunRq, PMIR_VAR_INIT)
    KePMIR_e_LTActvPumpPstRnSt_D = CeTMIR_e_SNA_AftRunRequest;/* Referenced by: '<S798>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTActvPumpSuppVltErr_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S760>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, PMIR_VAR_INIT)
    KePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1015>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, PMIR_VAR_INIT)
    KePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1171>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2AirPresntErr_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S904>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2AirPrsntErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1335>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2Deblock_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S979>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2Deblock_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1336>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPump2DryRun_D
    = CePMPR_e_FTSNA_False;            /* Referenced by: '<S984>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2DryRun_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1337>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2Failsafe_D = CePMPR_e_TFSNA_False;/* Referenced by: '<S909>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2Failsafe_INIT = CePMPR_e_TFSNA_True;/* Referenced by: '<S1338>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPump2LmpHM_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S954>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2MntrRPM_D = CePMPR_e_TFSNA_False;/* Referenced by: '<S913>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2MntrRPM_INIT = CePMPR_e_TFSNA_True;/* Referenced by: '<S1339>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2NodeErr_D = CePMPR_e_NodeError_NoError;/* Referenced by: '<S990>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2NodeErr_INIT = CePMPR_e_NodeError_NoError;/* Referenced by: '<S1340>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPump2OT_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S997>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPump2OT_INIT =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1341>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2OvrCrnt_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S919>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2OvrCrnt_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1342>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2SuppVltErr_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S926>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2SuppVltErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1343>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump2_LmpHM_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1344>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpAirPresntErr_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S1047>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpAirPrsntErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1382>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPumpDeblock_D
    = CePMPR_e_FTSNA_False;            /* Referenced by: '<S1137>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpDeblock_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1383>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPumpDryRun_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1142>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpDryRun_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1384>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpFailsafe_D = CePMPR_e_TFSNA_False;/* Referenced by: '<S1147>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpFailsafe_INIT = CePMPR_e_TFSNA_True;/* Referenced by: '<S1385>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPumpLmpHM_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1100>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPumpMntrRPM_D
    = CePMPR_e_TFSNA_False;            /* Referenced by: '<S1053>/Calib' */
static volatile CONST(TePMPR_e_TFSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpMntrRPM_INIT = CePMPR_e_TFSNA_True;/* Referenced by: '<S1386>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpNodeErr_D = CePMPR_e_NodeError_NoError;/* Referenced by: '<S1151>/Calib' */
static volatile CONST(TePMPR_e_NodeError, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpNodeErr_INIT = CePMPR_e_NodeError_NoError;/* Referenced by: '<S1387>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPumpOT_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1158>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPumpOT_INIT =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1388>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT) KePMIR_e_LTPsvPumpOvrCrnt_D
    = CePMPR_e_FTSNA_False;            /* Referenced by: '<S1059>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpOvrCrnt_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1389>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpSuppVltErr_D = CePMPR_e_FTSNA_False;/* Referenced by: '<S1066>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPumpSuppVltErr_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1390>/Calib' */
static volatile CONST(TePMPR_e_FTSNA, PMIR_VAR_INIT)
    KePMIR_e_LTPsvPump_LmpHM_INIT = CePMPR_e_FTSNA_False;/* Referenced by: '<S1391>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, PMIR_VAR_INIT)
    KePMIR_e_PWM_EOP_IOCtrlMode_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S376>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, PMIR_VAR_INIT)
    KePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S435>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TAP_ColdBiasSts_D = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S488>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, PMIR_VAR_INIT)
    KePMIR_e_TAP_SpdDsrd_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S489>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_ColdBiasSts_D = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S436>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_ColdBiasSts_INIT = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S1422>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_CrntErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_CrntErr_D = CeTAPR_e_CrntErr_NO_FAULT;/* Referenced by: '<S437>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_CrntErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_CrntErr_INIT = CeTAPR_e_CrntErr_NO_FAULT;/* Referenced by: '<S1423>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_DryRun_D = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S438>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_DryRun_INIT = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S1424>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_LmpHM_D = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S439>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_LmpHM_INIT = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S1425>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_MntrRPM_D = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S440>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_MntrRPM_INIT = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S1426>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_PstRnSt_D = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S441>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_PstRnSt_INIT = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S1427>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_StallEvnt, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_StallEvnt_D = CeTAPR_e_StallEvnt_FALSE;/* Referenced by: '<S442>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_StallEvnt, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_StallEvnt_INIT = CeTAPR_e_StallEvnt_FALSE;/* Referenced by: '<S1428>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_TmpErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_TempErr_D = CeTAPR_e_TmpErr_NO_FAULT;/* Referenced by: '<S443>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_TmpErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_TempErr_INIT = CeTAPR_e_TmpErr_NO_FAULT;/* Referenced by: '<S1429>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_VltgtErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_VltgErr_D = CeTAPR_e_VltgtErr_NO_FAULT;/* Referenced by: '<S444>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_VltgtErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp2_VltgErr_INIT = CeTAPR_e_VltgtErr_NO_FAULT;/* Referenced by: '<S1430>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_CrntErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_CrntErrDflt = CeTAPR_e_CrntErr_NO_FAULT;/* Referenced by: '<S1593>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_DryRun_INIT = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S1464>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_LmpHM_INIT = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S1465>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_TrueFalseSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_MntrRPM_INIT = CeTAPR_e_TAP_TrueFalseSNA_False;/* Referenced by: '<S1466>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_PstRnSt_INIT = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S1467>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_StallEvnt, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_StallEvntDflt = CeTAPR_e_StallEvnt_FALSE;/* Referenced by: '<S1600>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_TmpErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_TempErrDflt = CeTAPR_e_TmpErr_NO_FAULT;/* Referenced by: '<S1602>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_VltgtErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPmp_VltgErrDflt = CeTAPR_e_VltgtErr_NO_FAULT;/* Referenced by: '<S1604>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPumpDryRun_D = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S490>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPumpLmpHM_D = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S491>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_TrueFalseSNA, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPumpMntrRPM_D = CeTAPR_e_TAP_TrueFalseSNA_False;/* Referenced by: '<S492>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPumpPstRnSt_D = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S493>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_StallEvnt, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPumpStallEvent_D = CeTAPR_e_StallEvnt_FALSE;/* Referenced by: '<S494>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_TmpErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPumpTempError_D = CeTAPR_e_TmpErr_NO_FAULT;/* Referenced by: '<S495>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_VltgtErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPumpVoltageError_D = CeTAPR_e_VltgtErr_NO_FAULT;/* Referenced by: '<S496>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_CrntErr, PMIR_VAR_INIT)
    KePMIR_e_TransAuxPump_CurrentError_D = CeTAPR_e_CrntErr_NO_FAULT;/* Referenced by: '<S497>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_DVC_AuxPmp2SpdDsrd_INIT =
    0.0F;                              /* Referenced by: '<S1431>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_DVC_AuxPmpSpdDsrd_INIT =
    0.0F;                              /* Referenced by: '<S1468>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_DVC_AuxPump2SpdDsrd_D =
    0.0F;                              /* Referenced by: '<S445>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_DVC_AuxPumpSpdDsrd_D =
    0.0F;                              /* Referenced by: '<S498>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_EOP_SpeedFdbk_D = 0.0F;/* Referenced by: '<S377>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_FCCPmpActSpd_D = 0.0F;/* Referenced by: '<S528>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_FCCPmpActSpd_INIT = 0.0F;/* Referenced by: '<S1204>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_HTAP_DVC_FlwRtRq_D = 0.0F;/* Referenced by: '<S729>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT)
    KePMIR_n_HTAP_DVC_RPM_BatClFlwRt_INIT = 0.0F;/* Referenced by: '<S1249>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_HTAuxPumpRPMAct_INIT =
    200.0F;                            /* Referenced by: '<S1250>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_HTAuxPumpRPMTgt_D = 0.0F;/* Referenced by: '<S668>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_HTAuxPumpRPMTgt_INIT =
    0.0F;                              /* Referenced by: '<S1251>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_HTAuxPump_MaxSpd =
    6180.0F;                           /* Referenced by: '<S716>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_HTAuxPump_MinSpd = 600.0F;/* Referenced by: '<S717>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_HT_AuxPumpRPMAct_D = 0.0F;/* Referenced by: '<S684>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTAP_DVC_FlwRtRq_D = 0.0F;/* Referenced by: '<S875>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT)
    KePMIR_n_LTAP_DVC_RPM_BatClFlwRt_INIT = 0.0F;/* Referenced by: '<S1300>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTActPumpRPMAct_D = 0.0F;/* Referenced by: '<S823>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTActPumpRPMAct_INIT =
    200.0F;                            /* Referenced by: '<S1301>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTActPumpRPMTgt_INIT =
    0.0F;                              /* Referenced by: '<S1302>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTActPump_MaxSpdRPM =
    6180.0F;                           /* Referenced by:
                                        * '<S870>/Calib'
                                        * '<S811>/Calib'
                                        * '<S835>/Calib'
                                        */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTActPump_MinSpdRPM =
    600.0F;                            /* Referenced by:
                                        * '<S871>/Calib'
                                        * '<S812>/Calib'
                                        * '<S836>/Calib'
                                        */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPP2_DVC_FlwRtRq_D =
    0.0F;                              /* Referenced by: '<S1017>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPP_DVC_FlwRtRq_D = 0.0F;/* Referenced by: '<S1173>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT)
    KePMIR_n_LTPP_DVC_RPM_PEClFlwRt_INIT = 0.0F;/* Referenced by: '<S1392>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPsvPump2RPMAct_D = 0.0F;/* Referenced by: '<S941>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPsvPump2RPMAct_INIT =
    200.0F;                            /* Referenced by: '<S1345>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPsvPumpRPMAct_D = 0.0F;/* Referenced by: '<S1085>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPsvPumpRPMAct_INIT =
    200.0F;                            /* Referenced by: '<S1393>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPsvPumpRPMTgt_D = 0.0F;/* Referenced by: '<S1118>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LTPsvPumpRPMTgt_INIT =
    0.0F;                              /* Referenced by: '<S1394>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LT_ActPmpRPM_Tgt_D = 0.0F;/* Referenced by: '<S843>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LT_PsvPmp2MaxSpd =
    6180.0F;                           /* Referenced by: '<S1008>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LT_PsvPmp2MinSpd = 600.0F;/* Referenced by: '<S1009>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LT_PsvPmpMaxSpd = 6180.0F;/* Referenced by: '<S1164>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_LT_PsvPmpMinSpd = 600.0F;/* Referenced by: '<S1165>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPmp2_RPMAct_D =
    0.0F;                              /* Referenced by: '<S446>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPmp2_RPMAct_INIT =
    0.0F;                              /* Referenced by: '<S1432>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPmp2_RPMTgt_D =
    0.0F;                              /* Referenced by: '<S447>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPmp2_RPMTgt_INIT =
    0.0F;                              /* Referenced by: '<S1433>/Calib' */
static volatile CONST(boolean, PMIR_VAR_INIT)
    KePMIR_n_TransAuxPmp_RPMAct_FA_INIT = 0;/* Referenced by: '<S1469>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPmp_RPMAct_INIT =
    0.0F;                              /* Referenced by: '<S1470>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPmp_RPMTgt_INIT =
    0.0F;                              /* Referenced by: '<S1471>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPump_RPMAct_D =
    0.0F;                              /* Referenced by: '<S499>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KePMIR_n_TransAuxPump_RPMTgt_D =
    0.0F;                              /* Referenced by: '<S500>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_HTAuxPumpProdSuplrID_INIT =
    0U;                                /* Referenced by: '<S1252>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_HTAuxPumpVer_D = 0U;/* Referenced by: '<S725>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_HTAuxPumpVer_INIT = 0U;/* Referenced by: '<S1253>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_HTAuxPump_ProdSuplrID_D =
    0U;                                /* Referenced by: '<S723>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTActPumpProdSuplr = 0U;/* Referenced by: '<S1303>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTActPump_Ver_INIT = 0U;/* Referenced by: '<S1304>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPump2ProdSuplrID_D =
    0U;                                /* Referenced by: '<S922>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPump2ProdSuplr_ID_INIT
    = 0U;                              /* Referenced by: '<S1346>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPump2Ver_D = 0U;/* Referenced by: '<S975>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPump2_Ver_INIT = 0U;/* Referenced by: '<S1347>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPumpProdSuplrID_D = 0U;/* Referenced by: '<S1062>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPumpProdSuplr_ID_INIT =
    0U;                                /* Referenced by: '<S1395>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPumpVer_D = 0U;/* Referenced by: '<S1133>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_LTPsvPump_Ver_INIT = 0U;/* Referenced by: '<S1396>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_TransAuxPmp2_TAP_HW_VER_D =
    0U;                                /* Referenced by: '<S448>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT)
    KePMIR_y_TransAuxPmp2_TAP_HW_VER_INIT = 0U;/* Referenced by: '<S1434>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_TransAuxPmp2_TAP_SW_VER_D =
    0U;                                /* Referenced by: '<S449>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT)
    KePMIR_y_TransAuxPmp2_TAP_SW_VER_INIT = 0U;/* Referenced by: '<S1435>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_TransAuxPmp_TAP_HW_VER_D =
    0U;                                /* Referenced by: '<S501>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_TransAuxPmp_TAP_HW_VER_INIT
    = 0U;                              /* Referenced by: '<S1472>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_TransAuxPmp_TAP_SW_VER_D =
    0U;                                /* Referenced by: '<S502>/Calib' */
static volatile CONST(uint8, PMIR_VAR_INIT) KePMIR_y_TransAuxPmp_TAP_SW_VER_INIT
    = 0U;                              /* Referenced by: '<S1473>/Calib' */
static volatile CONST(float32, PMIR_VAR_INIT) KtPMIR_n_EOP_SpeedFdbk[4] =
{
    0.0F, 0.0F, 160.4F, 8000.0F
} ;                                    /* Referenced by: '<S369>/Vector' */

static volatile CONST(float32, PMIR_VAR_INIT) KxPMIR_n_EOP_SpeedFdbk[4] =
{
    0.0F, 4.0F, 4.01F, 200.0F
} ;                                    /* Referenced by: '<S369>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_PMIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpAirPresntErr_FA;/* '<S601>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpDeblock_FA;/* '<S705>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpLmpHM_FA;/* '<S621>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpNodeError_FA;/* '<S650>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpOT_FA;/* '<S613>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpOverCurrent_FA;/* '<S697>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpPstRnSt_FA;/* '<S627>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpRPMTgt_FA;/* '<S589>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpRPMTgt_FA_AD;/* '<S661>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpSuppVltErr_FA;/* '<S645>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPumpTgtSpd_FA_AD;/* '<S662>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPump_ActSpd_FA_AD;/* '<S676>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HTAuxPump_ActSpd_SNA_AD;/* '<S678>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HT_AuxPumpRPMAct_FA_AD;/* '<S675>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_HT_AuxPumpRPMAct_SNA_AD;/* '<S677>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActPumpActSpd_SNA_AD;/* '<S803>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActPumpRPMAct_FA_AD;/* '<S804>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActPumpRPMAct_SNA_AD;/* '<S802>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpCurrent_FA;/* '<S770>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpDeblock_FA;/* '<S775>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpOT_FA;/* '<S865>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpOverCurrent_FA;/* '<S763>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpPstRnSt_FA;/* '<S799>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpRPMTgt_AD;/* '<S827>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpRPMTgt_FA;/* '<S828>/Switch1' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTActvPumpSuppVltErr_FA;/* '<S758>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPmp2_ActSpd_FA_AD;/* '<S932>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPmp2_ActSpd_SNA_AD;/* '<S933>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPmp_ActSpd_FA_AD;/* '<S1077>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPmp_ActSpd_SNA_AD;/* '<S1079>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2AirPresntErr_FA;/* '<S902>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2Deblock_FA;/* '<S980>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2LmpHM_FA;/* '<S952>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2MntrRPM_FA;/* '<S911>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2NodeErr_FA;/* '<S991>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2OT_FA;/* '<S998>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2OverCurrent_FA;/* '<S920>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2RPMAct_FA_AD;/* '<S931>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2RPMAct_SNA_AD;/* '<S929>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2SuppVltErr_FA;/* '<S927>/Gain' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump2_RPMTgt_FA;/* '<S958>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPumpAirPresntErr_FA;/* '<S1045>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPumpMntrRPM_FA;/* '<S1051>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPumpRPMAct_FA_AD;/* '<S1076>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPumpRPMAct_SNA_AD;/* '<S1078>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPumpRPMTgt_FA_AD;/* '<S1111>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPumpTgtSpd_FA_AD;/* '<S1112>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump_LmpHM_FA;/* '<S1098>/Switch' */
static VAR(boolean, PMIR_VAR_INIT) VePMIR_b_LTPsvPump_RPMTgt_FA;/* '<S1032>/Switch' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_DVC_RPM_Cnvrtd;/* '<S1175>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_HTAP_DVC_Cnvrtd;/* '<S731>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_HTAuxPumpRPMAct_AD;/* '<S674>/Switch' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_HTAuxPumpRPMTgt_AD;/* '<S660>/Switch' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_HTAuxPump_ActSpd_AD;/* '<S679>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_HTAuxPump_TgtSpd_AD;/* '<S663>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_LTActPumpRPMAct_AD;/* '<S805>/Switch' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_LTPP2_DVC_Cnvrtd;/* '<S1019>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_LTPsvPmp2_ActSpd_AD;/* '<S934>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_LTPsvPmp_TgtSpd_AD;/* '<S1113>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_LTPsvPump_ActSpd_AD;/* '<S1080>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_LTPsvPump_RPMTgt;/* '<S1032>/Switch1' */
static VAR(float32, PMIR_VAR_INIT) VePMIR_n_LT_ActvPumpRPM_Tgt_AD;/* '<S829>/Switch' */
static VAR(uint8, PMIR_VAR_INIT) VePMIR_y_HTAuxPumpVer;/* '<S597>/Switch' */
static VAR(uint8, PMIR_VAR_INIT) VePMIR_y_HTAuxPump_ProdSuplrID;/* '<S596>/Switch' */
static VAR(uint8, PMIR_VAR_INIT) VePMIR_y_LTPsvPump2ProdSuplrID;/* '<S884>/Switch' */
static VAR(uint8, PMIR_VAR_INIT) VePMIR_y_LTPsvPump2Ver;/* '<S891>/Switch' */
static VAR(uint8, PMIR_VAR_INIT) VePMIR_y_LTPsvPumpProdSuplrID;/* '<S1025>/Switch' */
static VAR(uint8, PMIR_VAR_INIT) VePMIR_y_LTPsvPumpVer;/* '<S1034>/Switch' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PMIR
#include "MemMap.h"

CONST(ConstB_PMIR_ac_T, PMIR_VAR_INIT) PMIR_ac_ConstB =
{
    CeTMIR_e_No_AftRunRequest,         /* '<S1178>/Const82' */
    CeTMIR_e_No_AftRunRequest,         /* '<S1178>/Const107' */
    CeTMIR_e_No_AftRunRequest,         /* '<S1178>/Const207' */
    CeTMIR_e_No_AftRunRequest,         /* '<S1178>/Const208' */
    CeTAPR_e_VltgtErr_NO_FAULT,        /* '<S1178>/Const164' */
    CeTAPR_e_VltgtErr_NO_FAULT,        /* '<S1178>/Const203' */
    CeTAPR_e_VltgtErr_NO_FAULT,        /* '<S1439>/Constant' */
    CeTAPR_e_TAP_TrueFalseSNA_False,   /* '<S1178>/Const160' */
    CeTAPR_e_TmpErr_NO_FAULT,          /* '<S1178>/Const161' */
    CeTAPR_e_TmpErr_NO_FAULT,          /* '<S1178>/Const197' */
    CeTAPR_e_TmpErr_NO_FAULT,          /* '<S1438>/Constant' */
    CeTAPR_e_StallEvnt_FALSE,          /* '<S1178>/Const163' */
    CeTAPR_e_StallEvnt_FALSE,          /* '<S1178>/Const201' */
    CeTAPR_e_StallEvnt_FALSE,          /* '<S1441>/Constant' */
    CeTAPR_e_TAP_PostRunCmd_NoPostRun, /* '<S1178>/Const155' */
    CeTAPR_e_TAP_PostRunCmd_NoPostRun, /* '<S1178>/Const187' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1178>/Const156' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1178>/Const157' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1178>/Const159' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1178>/Const189' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1178>/Const191' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1178>/Const193' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1178>/Const195' */
    CeTAPR_e_TAP_FalseTrueSNA_False,   /* '<S1442>/Constant' */
    CeTAPR_e_CrntErr_NO_FAULT,         /* '<S1178>/Const162' */
    CeTAPR_e_CrntErr_NO_FAULT,         /* '<S1178>/Const199' */
    CeTAPR_e_CrntErr_NO_FAULT,         /* '<S1440>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1178>/Const32' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1178>/Const58' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1178>/Const90' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1178>/Const118' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1178>/Const166' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1178>/Const205' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1178>/Const209' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1355>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1354>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1311>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1262>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1263>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1212>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1211>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1443>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1401>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1397>/Constant' */
    CePMPR_e_TFSNA_False,              /* '<S1178>/Const14' */
    CePMPR_e_TFSNA_False,              /* '<S1178>/Const25' */
    CePMPR_e_TFSNA_False,              /* '<S1178>/Const41' */
    CePMPR_e_TFSNA_False,              /* '<S1178>/Const47' */
    CePMPR_e_TFSNA_False,              /* '<S1178>/Const72' */
    CePMPR_e_TFSNA_False,              /* '<S1178>/Const99' */
    CePMPR_e_TFSNA_False,              /* '<S1178>/Const104' */
    CePMPR_e_NodeError_NoError,        /* '<S1178>/Const7' */
    CePMPR_e_NodeError_NoError,        /* '<S1178>/Const36' */
    CePMPR_e_NodeError_NoError,        /* '<S1178>/Const66' */
    CePMPR_e_NodeError_NoError,        /* '<S1178>/Const94' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const5' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const10' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const15' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const21' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const23' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const24' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const31' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const34' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const39' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const42' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const43' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const45' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const46' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const51' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const64' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const69' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const73' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const74' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const76' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const80' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const81' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const83' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const92' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const97' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const100' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const101' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const103' */
    CePMPR_e_FTSNA_False,              /* '<S1178>/Const106' */
    CePMPR_e_FTSNA_False               /* '<S1178>/Const111' */
};

#define STOP_SEC_CONST_UNSPECIFIED_PMIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMIR
#include "MemMap.h"

VAR(B_PMIR_ac_T, PMIR_VAR_INIT) PMIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMIR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, PMIR_CODE) PMIR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 tmp;
    float32 tmpRead;
    TeTAIR_e_IO_CntrlSt tmp_9;
    TeTAPR_e_TransAuxPmp_CrntErr tmp_4;
    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmp_1;
    TeTAPR_e_TransAuxPmp_PostRunCmd tmp_7;
    TeTAPR_e_TransAuxPmp_StallEvnt tmp_5;
    TeTAPR_e_TransAuxPmp_TmpErr tmp_2;
    TeTAPR_e_TransAuxPmp_TrueFalseSNA tmp_6;
    TeTAPR_e_TransAuxPmp_VltgtErr tmp_3;
    uint8 tmp_8;
    boolean tmpRead_0;
    boolean tmp_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PMIR_MedTED'
     */
    /* Outport: '<Root>/VePMIR_b_PWM_TAP_Sel' incorporates:
     *  Constant: '<S456>/Calib'
     *  SignalConversion generated from: '<S108>/PWM_TAP_Sel'
     */
    (void)Rte_Write_VePMIR_b_PWM_TAP_Sel_Value(KePMIR_b_PWM_TAP_Sel);

    /* Switch: '<S366>/Switch' incorporates:
     *  Constant: '<S484>/Calib'
     *  Constant: '<S499>/Calib'
     *  Merge: '<Root>/Merge_240'
     *  SignalConversion generated from: '<S108>/VePMIR_n_TransAuxPmp_RPMAct_read'
     */
    if (KePMIR_b_TransAuxPump_RPMAct_SD)
    {
        tmp = KePMIR_n_TransAuxPump_RPMAct_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_RPMAct_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_n_AuxPumpSpdAct' incorporates:
     *  Switch: '<S366>/Switch'
     */
    (void)Rte_Write_VePMIR_n_AuxPumpSpdAct_Value(tmp);

    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S482>/Calib'
     *  Constant: '<S483>/Calib'
     *  Merge: '<Root>/Merge_242'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp_RPMActFA_read'
     */
    if (KePMIR_b_TransAuxPump_RPMAct_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPump_RPMAct_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp_RPMActFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_AuxPumpSpdAct_FA' incorporates:
     *  Switch: '<S366>/Switch1'
     */
    (void)Rte_Write_VePMIR_b_AuxPumpSpdAct_FA_Value(tmp_0);

    /* Switch: '<S366>/Switch2' incorporates:
     *  Constant: '<S485>/Calib'
     *  Constant: '<S486>/Calib'
     *  Merge: '<Root>/Merge_241'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp_RPMActSNA_read'
     */
    if (KePMIR_b_TransAuxPump_RPMAct_SNA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPump_RPMAct_SNA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp_RPMActSNA_write_IRV
            ();
    }

    /* Outport: '<Root>/VePMIR_b_AuxPumpSpdAct_SNA' incorporates:
     *  Switch: '<S366>/Switch2'
     */
    (void)Rte_Write_VePMIR_b_AuxPumpSpdAct_SNA_Value(tmp_0);

    /* Switch: '<S366>/Switch3' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S490>/Calib'
     *  Merge: '<Root>/Merge_233'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_DryRun_read'
     */
    if (KePMIR_b_TransAuxPumpDryRun_SD)
    {
        tmp_1 = KePMIR_e_TransAuxPumpDryRun_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_DryRun_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpDryRun' incorporates:
     *  Switch: '<S366>/Switch3'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpDryRun_Value(tmp_1);

    /* Switch: '<S366>/Switch4' incorporates:
     *  Constant: '<S466>/Calib'
     *  Constant: '<S467>/Calib'
     *  Merge: '<Root>/Merge_234'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp_DryRunFA_read'
     */
    if (KePMIR_b_TransAuxPumpDryRun_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPumpDryRun_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp_DryRunFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpDryRun_FA' incorporates:
     *  Switch: '<S366>/Switch4'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpDryRun_FA_Value(tmp_0);

    /* Switch: '<S366>/Switch11' incorporates:
     *  Constant: '<S451>/Calib'
     *  Constant: '<S460>/Calib'
     *  Merge: '<Root>/Merge_237'
     *  SignalConversion generated from: '<S108>/VePMIR_T_TransAuxPmp_OilTemp_read'
     */
    if (KePMIR_b_TransAuxPmp_OilTemp_SD)
    {
        tmp = KePMIR_T_TransAuxPmp_OilTemp_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_OilTemp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_TransAuxPumpOilTemp' incorporates:
     *  Switch: '<S366>/Switch11'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPumpOilTemp_Value(tmp);

    /* Switch: '<S366>/Switch12' incorporates:
     *  Constant: '<S458>/Calib'
     *  Constant: '<S459>/Calib'
     *  Merge: '<Root>/Merge_238'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp_OilTempFA_read'
     */
    if (KePMIR_b_TransAuxPmp_OilTemp_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp_OilTemp_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp_OilTempFA_write_IRV
            ();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpOilTemp_FA' incorporates:
     *  Switch: '<S366>/Switch12'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpOilTemp_FA_Value(tmp_0);

    /* Switch: '<S366>/Switch5' incorporates:
     *  Constant: '<S452>/Calib'
     *  Constant: '<S464>/Calib'
     *  Merge: '<Root>/Merge_249'
     *  SignalConversion generated from: '<S108>/VePMIR_T_TransAuxPmp_Temp_read'
     */
    if (KePMIR_b_TransAuxPmp_Temp_SD)
    {
        tmp = KePMIR_T_TransAuxPmp_Temp_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_Temp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_TransAuxPumpTemp' incorporates:
     *  Switch: '<S366>/Switch5'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPumpTemp_Value(tmp);

    /* Switch: '<S366>/Switch6' incorporates:
     *  Constant: '<S463>/Calib'
     *  Constant: '<S478>/Calib'
     *  Merge: '<Root>/Merge_250'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp_TempFA_read'
     */
    if (KePMIR_b_TransAuxPumpTemp_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp_Temp_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp_TempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpTemp_FA' incorporates:
     *  Switch: '<S366>/Switch6'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpTemp_FA_Value(tmp_0);

    /* Switch: '<S366>/Switch7' incorporates:
     *  Constant: '<S477>/Calib'
     *  Constant: '<S495>/Calib'
     *  Merge: '<Root>/Merge_251'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_TempErr_read'
     */
    if (KePMIR_b_TransAuxPumpTempError_SD)
    {
        tmp_2 = KePMIR_e_TransAuxPumpTempError_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_TempErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpTempError' incorporates:
     *  Switch: '<S366>/Switch7'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpTempError_Value(tmp_2);

    /* Switch: '<S366>/Switch8' incorporates:
     *  Constant: '<S453>/Calib'
     *  Constant: '<S480>/Calib'
     *  Merge: '<Root>/Merge_252'
     *  SignalConversion generated from: '<S108>/VePMIR_U_TransAuxPmp_Vltg_read'
     */
    if (KePMIR_b_TransAuxPumpVoltage_SD)
    {
        tmp = KePMIR_U_TransAuxPumpVoltage_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_Vltg_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_U_TransAuxPumpVoltage' incorporates:
     *  Switch: '<S366>/Switch8'
     */
    (void)Rte_Write_VePMIR_U_TransAuxPumpVoltage_Value(tmp);

    /* Switch: '<S366>/Switch9' incorporates:
     *  Constant: '<S479>/Calib'
     *  Constant: '<S496>/Calib'
     *  Merge: '<Root>/Merge_253'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_VltgErr_read'
     */
    if (KePMIR_b_TransAuxPumpVoltageError_SD)
    {
        tmp_3 = KePMIR_e_TransAuxPumpVoltageError_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_VltgErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpVoltageError' incorporates:
     *  Switch: '<S366>/Switch9'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpVoltageError_Value(tmp_3);

    /* Switch: '<S366>/Switch10' incorporates:
     *  Constant: '<S450>/Calib'
     *  Constant: '<S465>/Calib'
     *  Merge: '<Root>/Merge_231'
     *  SignalConversion generated from: '<S108>/VePMIR_I_TransAuxPmp_Crnt_read'
     */
    if (KePMIR_b_TransAuxPumpCurrent_SD)
    {
        tmp = KePMIR_I_TransAuxPumpCurrent_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_Crnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_I_TransAuxPumpCurrent' incorporates:
     *  Switch: '<S366>/Switch10'
     */
    (void)Rte_Write_VePMIR_I_TransAuxPumpCurrent_Value(tmp);

    /* Switch: '<S366>/Switch20' incorporates:
     *  Constant: '<S481>/Calib'
     *  Constant: '<S497>/Calib'
     *  Merge: '<Root>/Merge_232'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_CrntErr_read'
     */
    if (KePMIR_b_TransAuxPump_CurrentError_SD)
    {
        tmp_4 = KePMIR_e_TransAuxPump_CurrentError_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_CrntErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpCurrentError' incorporates:
     *  Switch: '<S366>/Switch20'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpCurrentError_Value(tmp_4);

    /* Switch: '<S366>/Switch21' incorporates:
     *  Constant: '<S487>/Calib'
     *  Constant: '<S500>/Calib'
     *  Merge: '<Root>/Merge_243'
     *  SignalConversion generated from: '<S108>/VePMIR_n_TransAuxPmp_RPMTgt_read'
     */
    if (KePMIR_b_TransAuxPump_RPMTgt_SD)
    {
        tmp = KePMIR_n_TransAuxPump_RPMTgt_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_RPMTgt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_n_TransAuxPump_RPMTgt' incorporates:
     *  Switch: '<S366>/Switch21'
     */
    (void)Rte_Write_VePMIR_n_TransAuxPump_RPMTgt_Value(tmp);

    /* Switch: '<S366>/Switch22' incorporates:
     *  Constant: '<S474>/Calib'
     *  Constant: '<S494>/Calib'
     *  Merge: '<Root>/Merge_245'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_StallEvnt_read'
     */
    if (KePMIR_b_TransAuxPumpStallEvent_SD)
    {
        tmp_5 = KePMIR_e_TransAuxPumpStallEvent_D;
    }
    else
    {
        tmp_5 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_StallEvnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpStallEvent' incorporates:
     *  Switch: '<S366>/Switch22'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpStallEvent_Value(tmp_5);

    /* Switch: '<S366>/Switch23' incorporates:
     *  Constant: '<S469>/Calib'
     *  Constant: '<S491>/Calib'
     *  Merge: '<Root>/Merge_235'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_LmpHM_read'
     */
    if (KePMIR_b_TransAuxPumpLmpHM_SD)
    {
        tmp_1 = KePMIR_e_TransAuxPumpLmpHM_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_LmpHM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpLmpHM' incorporates:
     *  Switch: '<S366>/Switch23'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpLmpHM_Value(tmp_1);

    /* Switch: '<S366>/Switch24' incorporates:
     *  Constant: '<S470>/Calib'
     *  Constant: '<S492>/Calib'
     *  Merge: '<Root>/Merge_236'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_MntrRPM_read'
     */
    if (KePMIR_b_TransAuxPumpMntrRPM_SD)
    {
        tmp_6 = KePMIR_e_TransAuxPumpMntrRPM_D;
    }
    else
    {
        tmp_6 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_MntrRPM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpMntrRPM' incorporates:
     *  Switch: '<S366>/Switch24'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpMntrRPM_Value(tmp_6);

    /* Switch: '<S366>/Switch25' incorporates:
     *  Constant: '<S457>/Calib'
     *  Constant: '<S488>/Calib'
     *  Merge: '<Root>/Merge_230'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_ColdBiasSts_read'
     */
    if (KePMIR_b_TAP_ColdBiasSts_SD)
    {
        tmp_1 = KePMIR_e_TAP_ColdBiasSts_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_ColdBiasSts_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TAP_ColdBiasSts' incorporates:
     *  Switch: '<S366>/Switch25'
     */
    (void)Rte_Write_VePMIR_e_TAP_ColdBiasSts_Value(tmp_1);

    /* Switch: '<S366>/Switch13' incorporates:
     *  Constant: '<S471>/Calib'
     *  Constant: '<S493>/Calib'
     *  Merge: '<Root>/Merge_239'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp_PstRnSt_read'
     */
    if (KePMIR_b_TransAuxPumpPstRnSt_SD)
    {
        tmp_7 = KePMIR_e_TransAuxPumpPstRnSt_D;
    }
    else
    {
        tmp_7 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_PstRnSt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpPstRnSt' incorporates:
     *  Switch: '<S366>/Switch13'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpPstRnSt_Value(tmp_7);

    /* Switch: '<S366>/Switch26' incorporates:
     *  Constant: '<S461>/Calib'
     *  Constant: '<S501>/Calib'
     *  Merge: '<Root>/Merge_246'
     *  SignalConversion generated from: '<S108>/VePMIR_y_TransAuxPmp_TAP_HW_VER_read'
     */
    if (KePMIR_b_TransAuxPmp_TAP_HW_VER_SD)
    {
        tmp_8 = KePMIR_y_TransAuxPmp_TAP_HW_VER_D;
    }
    else
    {
        tmp_8 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_TAP_HW_VER_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp_TAP_HW_VER' incorporates:
     *  Switch: '<S366>/Switch26'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp_TAP_HW_VER_Value(tmp_8);

    /* Switch: '<S366>/Switch27' incorporates:
     *  Constant: '<S462>/Calib'
     *  Constant: '<S502>/Calib'
     *  Merge: '<Root>/Merge_247'
     *  SignalConversion generated from: '<S108>/VePMIR_y_TransAuxPmp_TAP_SW_VER_read'
     */
    if (KePMIR_b_TransAuxPmp_TAP_SW_VER_SD)
    {
        tmp_8 = KePMIR_y_TransAuxPmp_TAP_SW_VER_D;
    }
    else
    {
        tmp_8 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_TAP_SW_VER_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp_TAP_SW_VER' incorporates:
     *  Switch: '<S366>/Switch27'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp_TAP_SW_VER_Value(tmp_8);

    /* Switch: '<S366>/Switch18' incorporates:
     *  Constant: '<S472>/Calib'
     *  Constant: '<S473>/Calib'
     *  Merge: '<Root>/Merge_244'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp_RespErr_read'
     */
    if (KePMIR_b_TransAuxPumpRespError_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPumpRespError_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp_RespErr_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpRespError' incorporates:
     *  Switch: '<S366>/Switch18'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpRespError_Value(tmp_0);

    /* Switch: '<S366>/Switch19' incorporates:
     *  Constant: '<S454>/Calib'
     *  Constant: '<S489>/Calib'
     *  Merge: '<Root>/Merge_228'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_read'
     */
    if (KePMIR_b_DVC_AuxPmpSpdEnbl_SD)
    {
        tmp_9 = KePMIR_e_TAP_SpdDsrd_IO_CntrlSt_D;
    }
    else
    {
        tmp_9 = Rte_IrvRead_PMIR_MedTED_DVC_AuxPmpSpdEnbl_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt' incorporates:
     *  Switch: '<S366>/Switch19'
     */
    (void)Rte_Write_VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Value(tmp_9);

    /* Switch: '<S366>/Switch17' incorporates:
     *  Constant: '<S455>/Calib'
     *  Constant: '<S498>/Calib'
     *  Merge: '<Root>/Merge_229'
     *  SignalConversion generated from: '<S108>/VePMIR_n_TAP_SpdDsrd_read'
     */
    if (KePMIR_b_DVC_AuxPumpSpdDsrd_SD)
    {
        tmp = KePMIR_n_DVC_AuxPumpSpdDsrd_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_DVC_AuxPmpSpdDsrd_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_n_DVC_AuxPumpSpdDsrd' incorporates:
     *  Switch: '<S366>/Switch17'
     */
    (void)Rte_Write_VePMIR_n_DVC_AuxPumpSpdDsrd_Value(tmp);

    /* Switch: '<S366>/Switch14' incorporates:
     *  Constant: '<S475>/Calib'
     *  Constant: '<S476>/Calib'
     *  Merge: '<Root>/Merge_248'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp_TCM_Req_read'
     */
    if (KePMIR_b_TransAuxPumpTCMReq_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPumpTCMReq_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp_TCM_Req_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpTCMReq' incorporates:
     *  Switch: '<S366>/Switch14'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpTCMReq_Value(tmp_0);

    /* Switch: '<S368>/Switch16' incorporates:
     *  Constant: '<S373>/Calib'
     *  Inport: '<Root>/VePMIB_f_EOP_SpeedFdbk'
     */
    if (KePMIR_b_EOP_SpeedFdbk_SD)
    {
        /* Outport: '<Root>/VePMIR_n_EOP_SpeedFdbk' incorporates:
         *  Constant: '<S377>/Calib'
         */
        (void)Rte_Write_VePMIR_n_EOP_SpeedFdbk_Value(KePMIR_n_EOP_SpeedFdbk_D);
    }
    else
    {
        (void)Rte_Read_VePMIB_f_EOP_SpeedFdbk_Value(&tmpRead);

        /* Outport: '<Root>/VePMIR_n_EOP_SpeedFdbk' incorporates:
         *  Inport: '<Root>/VePMIB_f_EOP_SpeedFdbk'
         *  Lookup_n-D: '<S369>/Vector'
         */
        (void)Rte_Write_VePMIR_n_EOP_SpeedFdbk_Value(look1_iflf_binlca_16a
            (tmpRead, ((const float32 *)&(KxPMIR_n_EOP_SpeedFdbk[0])), ((const
            float32 *)&(KtPMIR_n_EOP_SpeedFdbk[0])), 3U));
    }

    /* End of Switch: '<S368>/Switch16' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePMIB_b_EOP_SpeedFdbkFA' */
    (void)Rte_Read_VePMIB_b_EOP_SpeedFdbkFA_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PMIR_MedTED'
     */
    /* Switch: '<S368>/Switch15' incorporates:
     *  Constant: '<S372>/Calib'
     */
    if (KePMIR_b_EOP_SpeedFdbk_FA_SD)
    {
        /* Outport: '<Root>/VePMIR_b_EOP_SpeedFdbk_FA' incorporates:
         *  Constant: '<S371>/Calib'
         */
        (void)Rte_Write_VePMIR_b_EOP_SpeedFdbk_FA_Value
            (KePMIR_b_EOP_SpeedFdbk_FA_D);
    }
    else
    {
        /* Outport: '<Root>/VePMIR_b_EOP_SpeedFdbk_FA' */
        (void)Rte_Write_VePMIR_b_EOP_SpeedFdbk_FA_Value(tmpRead_0);
    }

    /* End of Switch: '<S368>/Switch15' */

    /* Switch: '<S368>/Switch4' incorporates:
     *  Constant: '<S374>/Calib'
     *  Constant: '<S376>/Calib'
     *  Merge: '<Root>/Merge_226'
     *  SignalConversion generated from: '<S108>/VePMIR_e_PWM_EOP_IOCtrlMode_read'
     */
    if (KePMIR_b_PWM_EOP_IOCtrlMode_SD)
    {
        tmp_9 = KePMIR_e_PWM_EOP_IOCtrlMode_D;
    }
    else
    {
        tmp_9 = Rte_IrvRead_PMIR_MedTED_PWM_EOP_IOCtrlMode_INIT_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_PWM_EOP_IOCtrlMode' incorporates:
     *  Switch: '<S368>/Switch4'
     */
    (void)Rte_Write_VePMIR_e_PWM_EOP_IOCtrlMode_Value(tmp_9);

    /* Switch: '<S368>/Switch3' incorporates:
     *  Constant: '<S370>/Calib'
     *  Constant: '<S375>/Calib'
     *  Merge: '<Root>/Merge_227'
     *  SignalConversion generated from: '<S108>/VePMIR_Pct_PWM_EOP_IOCtrlSpd_read'
     */
    if (KePMIR_b_PWM_EOP_IOCtrlSpd_SD)
    {
        tmp = KePMIR_Pct_PWM_EOP_IOCtrlSpd_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_PWM_EOP_IOCtrlSpd_INIT_IRV();
    }

    /* Outport: '<Root>/VePMIR_Pct_PWM_EOP_IOCtrlSpd' incorporates:
     *  Switch: '<S368>/Switch3'
     */
    (void)Rte_Write_VePMIR_Pct_PWM_EOP_IOCtrlSpd_Value(tmp);

    /* Switch: '<S365>/Switch' incorporates:
     *  Constant: '<S410>/Calib'
     *  Constant: '<S446>/Calib'
     *  Merge: '<Root>/Merge_207'
     *  SignalConversion generated from: '<S108>/VePMIR_n_TransAuxPmp2_RPMAct_read'
     */
    if (KePMIR_b_TransAuxPmp2_RPMAct_SD)
    {
        tmp = KePMIR_n_TransAuxPmp2_RPMAct_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_RPMAct_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_n_TransAuxPump2SpdAct' incorporates:
     *  Switch: '<S365>/Switch'
     */
    (void)Rte_Write_VePMIR_n_TransAuxPump2SpdAct_Value(tmp);

    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S408>/Calib'
     *  Constant: '<S409>/Calib'
     *  Merge: '<Root>/Merge_206'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_RPMActFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_RPMAct_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_RPMAct_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_RPMActFA_write_IRV
            ();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_FA' incorporates:
     *  Switch: '<S365>/Switch1'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2SpdAct_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch2' incorporates:
     *  Constant: '<S411>/Calib'
     *  Constant: '<S412>/Calib'
     *  Merge: '<Root>/Merge_208'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_RPMActSNA_read'
     */
    if (KePMIR_b_TransAuxPmp2_RPMAct_SNA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_RPMAct_SNA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_RPMActSNA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_SNA' incorporates:
     *  Switch: '<S365>/Switch2'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2SpdAct_SNA_Value(tmp_0);

    /* Switch: '<S365>/Switch7' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S428>/Calib'
     *  Merge: '<Root>/Merge_217'
     *  SignalConversion generated from: '<S108>/VePMIR_T_TransAuxPmp2_Temp_read'
     */
    if (KePMIR_b_TransAuxPmp2_Temp_SD)
    {
        tmp = KePMIR_T_TransAuxPmp2_Temp_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_Temp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_TransAuxPump2Temp' incorporates:
     *  Switch: '<S365>/Switch7'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPump2Temp_Value(tmp);

    /* Switch: '<S365>/Switch9' incorporates:
     *  Constant: '<S426>/Calib'
     *  Constant: '<S427>/Calib'
     *  Merge: '<Root>/Merge_216'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_TempFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_Temp_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_Temp_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_TempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2Temp_FA' incorporates:
     *  Switch: '<S365>/Switch9'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2Temp_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch26' incorporates:
     *  Constant: '<S378>/Calib'
     *  Constant: '<S392>/Calib'
     *  Merge: '<Root>/Merge_195'
     *  SignalConversion generated from: '<S108>/VePMIR_I_TransAuxPmp2_Crnt_read'
     */
    if (KePMIR_b_TransAuxPmp2_Crnt_SD)
    {
        tmp = KePMIR_I_TransAuxPmp2_Crnt_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_Crnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_I_TransAuxPump2Current' incorporates:
     *  Switch: '<S365>/Switch26'
     */
    (void)Rte_Write_VePMIR_I_TransAuxPump2Current_Value(tmp);

    /* Switch: '<S365>/Switch27' incorporates:
     *  Constant: '<S390>/Calib'
     *  Constant: '<S391>/Calib'
     *  Merge: '<Root>/Merge_194'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_CrntFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_Crnt_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_Crnt_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_CrntFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2Current_FA' incorporates:
     *  Switch: '<S365>/Switch27'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2Current_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch10' incorporates:
     *  Constant: '<S381>/Calib'
     *  Constant: '<S434>/Calib'
     *  Merge: '<Root>/Merge_225'
     *  SignalConversion generated from: '<S108>/VePMIR_U_TransAuxPmp2_Vltg_read'
     */
    if (KePMIR_b_TransAuxPmp2_Vltg_SD)
    {
        tmp = KePMIR_U_TransAuxPmp2_Vltg_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_Vltg_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_U_TransAuxPump2Voltage' incorporates:
     *  Switch: '<S365>/Switch10'
     */
    (void)Rte_Write_VePMIR_U_TransAuxPump2Voltage_Value(tmp);

    /* Switch: '<S365>/Switch25' incorporates:
     *  Constant: '<S432>/Calib'
     *  Constant: '<S433>/Calib'
     *  Merge: '<Root>/Merge_224'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_VltgFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_Vltg_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_Vltg_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_VltgFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2Voltage_FA' incorporates:
     *  Switch: '<S365>/Switch25'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2Voltage_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch8' incorporates:
     *  Constant: '<S416>/Calib'
     *  Constant: '<S417>/Calib'
     *  Merge: '<Root>/Merge_211'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_RespErrFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_RespErr_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_RespErr_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_RespErrFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2RespError' incorporates:
     *  Switch: '<S365>/Switch8'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2RespError_Value(tmp_0);

    /* Switch: '<S365>/Switch32' incorporates:
     *  Constant: '<S415>/Calib'
     *  Constant: '<S447>/Calib'
     *  Merge: '<Root>/Merge_210'
     *  SignalConversion generated from: '<S108>/VePMIR_n_TransAuxPmp2_RPMTgt_read'
     */
    if (KePMIR_b_TransAuxPmp2_RPMTgt_SD)
    {
        tmp = KePMIR_n_TransAuxPmp2_RPMTgt_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_RPMTgt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_n_TransAuxPump2TgtSpd' incorporates:
     *  Switch: '<S365>/Switch32'
     */
    (void)Rte_Write_VePMIR_n_TransAuxPump2TgtSpd_Value(tmp);

    /* Switch: '<S365>/Switch33' incorporates:
     *  Constant: '<S413>/Calib'
     *  Constant: '<S414>/Calib'
     *  Merge: '<Root>/Merge_209'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_RPMTgtFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_RPMTgt_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_RPMTgt_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_RPMTgtFA_write_IRV
            ();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2TgtSpd_FA' incorporates:
     *  Switch: '<S365>/Switch33'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2TgtSpd_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch5' incorporates:
     *  Constant: '<S421>/Calib'
     *  Constant: '<S448>/Calib'
     *  Merge: '<Root>/Merge_220'
     *  SignalConversion generated from: '<S108>/VePMIR_y_TransAuxPmp2_TAP_HW_VER_read'
     */
    if (KePMIR_b_TransAuxPmp2_TAP_HW_VER_SD)
    {
        tmp_8 = KePMIR_y_TransAuxPmp2_TAP_HW_VER_D;
    }
    else
    {
        tmp_8 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_TAP_HW_VER_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp2_TAP_HW_VER' incorporates:
     *  Switch: '<S365>/Switch5'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp2_TAP_HW_VER_Value(tmp_8);

    /* Switch: '<S365>/Switch11' incorporates:
     *  Constant: '<S422>/Calib'
     *  Constant: '<S449>/Calib'
     *  Merge: '<Root>/Merge_221'
     *  SignalConversion generated from: '<S108>/VePMIR_y_TransAuxPmp2_TAP_SW_VER_read'
     */
    if (KePMIR_b_TransAuxPmp2_TAP_SW_VER_SD)
    {
        tmp_8 = KePMIR_y_TransAuxPmp2_TAP_SW_VER_D;
    }
    else
    {
        tmp_8 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_TAP_SW_VER_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp2_TAP_SW_VER' incorporates:
     *  Switch: '<S365>/Switch11'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp2_TAP_SW_VER_Value(tmp_8);

    /* Switch: '<S365>/Switch6' incorporates:
     *  Constant: '<S379>/Calib'
     *  Constant: '<S404>/Calib'
     *  Merge: '<Root>/Merge_203'
     *  SignalConversion generated from: '<S108>/VePMIR_T_TransAuxPmp2_OilTemp_read'
     */
    if (KePMIR_b_TransAuxPmp2_OilTemp_SD)
    {
        tmp = KePMIR_T_TransAuxPmp2_OilTemp_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_OilTemp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_TransAuxPump2OilTemp' incorporates:
     *  Switch: '<S365>/Switch6'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPump2OilTemp_Value(tmp);

    /* Switch: '<S365>/Switch12' incorporates:
     *  Constant: '<S402>/Calib'
     *  Constant: '<S403>/Calib'
     *  Merge: '<Root>/Merge_202'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_OilTempFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_OilTemp_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_OilTemp_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_OilTempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2OilTemp_FA' incorporates:
     *  Switch: '<S365>/Switch12'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2OilTemp_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch13' incorporates:
     *  Constant: '<S407>/Calib'
     *  Constant: '<S441>/Calib'
     *  Merge: '<Root>/Merge_205'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_PstRnSt_read'
     */
    if (KePMIR_b_TransAuxPmp2_PstRnSt_SD)
    {
        tmp_7 = KePMIR_e_TransAuxPmp2_PstRnSt_D;
    }
    else
    {
        tmp_7 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_PstRnSt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2PstRnSt' incorporates:
     *  Switch: '<S365>/Switch13'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2PstRnSt_Value(tmp_7);

    /* Switch: '<S365>/Switch14' incorporates:
     *  Constant: '<S405>/Calib'
     *  Constant: '<S406>/Calib'
     *  Merge: '<Root>/Merge_204'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_PstRnStFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_PstRnSt_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_PstRnSt_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_PstRnStFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2PstRnSt_FA' incorporates:
     *  Switch: '<S365>/Switch14'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2PstRnSt_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch15' incorporates:
     *  Constant: '<S398>/Calib'
     *  Constant: '<S439>/Calib'
     *  Merge: '<Root>/Merge_199'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_LmpHM_read'
     */
    if (KePMIR_b_TransAuxPmp2_LmpHM_SD)
    {
        tmp_1 = KePMIR_e_TransAuxPmp2_LmpHM_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_LmpHM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPmp2LmpHM' incorporates:
     *  Switch: '<S365>/Switch15'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPmp2LmpHM_Value(tmp_1);

    /* Switch: '<S365>/Switch16' incorporates:
     *  Constant: '<S396>/Calib'
     *  Constant: '<S397>/Calib'
     *  Merge: '<Root>/Merge_198'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_LmpHMFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_LmpHM_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_LmpHM_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_LmpHMFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPmp2LmpHM_FA' incorporates:
     *  Switch: '<S365>/Switch16'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPmp2LmpHM_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch17' incorporates:
     *  Constant: '<S395>/Calib'
     *  Constant: '<S438>/Calib'
     *  Merge: '<Root>/Merge_197'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_DryRun_read'
     */
    if (KePMIR_b_TransAuxPmp2_DryRun_SD)
    {
        tmp_1 = KePMIR_e_TransAuxPmp2_DryRun_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_DryRun_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2DryRun' incorporates:
     *  Switch: '<S365>/Switch17'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2DryRun_Value(tmp_1);

    /* Switch: '<S365>/Switch18' incorporates:
     *  Constant: '<S393>/Calib'
     *  Constant: '<S394>/Calib'
     *  Merge: '<Root>/Merge_196'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_DryRunFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_DryRun_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_DryRun_FA_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_DryRunFA_write_IRV
            ();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2DryRun_FA' incorporates:
     *  Switch: '<S365>/Switch18'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2DryRun_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch19' incorporates:
     *  Constant: '<S386>/Calib'
     *  Constant: '<S436>/Calib'
     *  Merge: '<Root>/Merge_191'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_ColdBiasSts_read'
     */
    if (KePMIR_b_TransAuxPmp2_ColdBiasSts_SD)
    {
        tmp_1 = KePMIR_e_TransAuxPmp2_ColdBiasSts_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_ColdBiasSts_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPmp2ColdBiasSts' incorporates:
     *  Switch: '<S365>/Switch19'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPmp2ColdBiasSts_Value(tmp_1);

    /* Switch: '<S365>/Switch20' incorporates:
     *  Constant: '<S384>/Calib'
     *  Constant: '<S385>/Calib'
     *  Merge: '<Root>/Merge_190'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_ColdBiasStsFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_ColdBiasSts_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_ColdBiasSts_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_ColdBiasStsFA_write_IRV
            ();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPmp2ColdBiasSts_FA' incorporates:
     *  Switch: '<S365>/Switch20'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPmp2ColdBiasSts_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch21' incorporates:
     *  Constant: '<S401>/Calib'
     *  Constant: '<S440>/Calib'
     *  Merge: '<Root>/Merge_201'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_MntrRPM_read'
     */
    if (KePMIR_b_TransAuxPmp2_MntrRPM_SD)
    {
        tmp_1 = KePMIR_e_TransAuxPmp2_MntrRPM_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_MntrRPM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2MntrRPM' incorporates:
     *  Switch: '<S365>/Switch21'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2MntrRPM_Value(tmp_1);

    /* Switch: '<S365>/Switch22' incorporates:
     *  Constant: '<S399>/Calib'
     *  Constant: '<S400>/Calib'
     *  Merge: '<Root>/Merge_200'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_MntrRPMFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_MntrRPM_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_MntrRPM_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_MntrRPMFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2MntrRPM_FA' incorporates:
     *  Switch: '<S365>/Switch22'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2MntrRPM_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch23' incorporates:
     *  Constant: '<S425>/Calib'
     *  Constant: '<S443>/Calib'
     *  Merge: '<Root>/Merge_215'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_TempErr_read'
     */
    if (KePMIR_b_TransAuxPmp2_TempErr_SD)
    {
        tmp_2 = KePMIR_e_TransAuxPmp2_TempErr_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_TempErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2TempError' incorporates:
     *  Switch: '<S365>/Switch23'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2TempError_Value(tmp_2);

    /* Switch: '<S365>/Switch24' incorporates:
     *  Constant: '<S423>/Calib'
     *  Constant: '<S424>/Calib'
     *  Merge: '<Root>/Merge_214'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_TempErrFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_TempErr_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_TempErr_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_TempErrFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2TempError_FA' incorporates:
     *  Switch: '<S365>/Switch24'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2TempError_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch28' incorporates:
     *  Constant: '<S389>/Calib'
     *  Constant: '<S437>/Calib'
     *  Merge: '<Root>/Merge_193'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_CrntErr_read'
     */
    if (KePMIR_b_TransAuxPmp2_CrntErr_SD)
    {
        tmp_4 = KePMIR_e_TransAuxPmp2_CrntErr_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_CrntErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2CurrentError' incorporates:
     *  Switch: '<S365>/Switch28'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2CurrentError_Value(tmp_4);

    /* Switch: '<S365>/Switch31' incorporates:
     *  Constant: '<S387>/Calib'
     *  Constant: '<S388>/Calib'
     *  Merge: '<Root>/Merge_192'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_CrntErrFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_CrntErr_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_CrntErr_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_CrntErrFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2CurrentError_FA' incorporates:
     *  Switch: '<S365>/Switch31'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2CurrentError_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch34' incorporates:
     *  Constant: '<S420>/Calib'
     *  Constant: '<S442>/Calib'
     *  Merge: '<Root>/Merge_213'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_StallEvnt_read'
     */
    if (KePMIR_b_TransAuxPmp2_StallEvnt_SD)
    {
        tmp_5 = KePMIR_e_TransAuxPmp2_StallEvnt_D;
    }
    else
    {
        tmp_5 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_StallEvnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2StallEvent' incorporates:
     *  Switch: '<S365>/Switch34'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2StallEvent_Value(tmp_5);

    /* Switch: '<S365>/Switch35' incorporates:
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Calib'
     *  Merge: '<Root>/Merge_212'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_StallEvntFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_StallEvnt_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_StallEvnt_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_StallEvntFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2StallEvent_FA' incorporates:
     *  Switch: '<S365>/Switch35'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2StallEvent_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch29' incorporates:
     *  Constant: '<S431>/Calib'
     *  Constant: '<S444>/Calib'
     *  Merge: '<Root>/Merge_223'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TransAuxPmp2_VltgErr_read'
     */
    if (KePMIR_b_TransAuxPmp2_VltgErr_SD)
    {
        tmp_3 = KePMIR_e_TransAuxPmp2_VltgErr_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTED_TransAuxPmp2_VltgErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2VoltageError' incorporates:
     *  Switch: '<S365>/Switch29'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2VoltageError_Value(tmp_3);

    /* Switch: '<S365>/Switch30' incorporates:
     *  Constant: '<S429>/Calib'
     *  Constant: '<S430>/Calib'
     *  Merge: '<Root>/Merge_222'
     *  SignalConversion generated from: '<S108>/VePMIR_b_TransAuxPmp2_VltgErrFA_read'
     */
    if (KePMIR_b_TransAuxPmp2_VltgErr_FA_SD)
    {
        tmp_0 = KePMIR_b_TransAuxPmp2_VltgErr_FA_D;
    }
    else
    {
        tmp_0 =
            Rte_IrvRead_PMIR_MedTED_VePMIR_b_TransAuxPmp2_VltgErrFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2VoltageError_FA' incorporates:
     *  Switch: '<S365>/Switch30'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2VoltageError_FA_Value(tmp_0);

    /* Switch: '<S365>/Switch4' incorporates:
     *  Constant: '<S382>/Calib'
     *  Constant: '<S435>/Calib'
     *  Merge: '<Root>/Merge_218'
     *  SignalConversion generated from: '<S108>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_read'
     */
    if (KePMIR_b_DVC_AuxPmp2SpdEnbl_SD)
    {
        tmp_9 = KePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_D;
    }
    else
    {
        tmp_9 = Rte_IrvRead_PMIR_MedTED_DVC_AuxPmp2SpdEnbl_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt' incorporates:
     *  Switch: '<S365>/Switch4'
     */
    (void)Rte_Write_VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Value(tmp_9);

    /* Switch: '<S365>/Switch3' incorporates:
     *  Constant: '<S383>/Calib'
     *  Constant: '<S445>/Calib'
     *  Merge: '<Root>/Merge_219'
     *  SignalConversion generated from: '<S108>/VePMIR_n_TAP2_SpdDsrd_read'
     */
    if (KePMIR_b_DVC_AuxPump2SpdDsrd_SD)
    {
        tmp = KePMIR_n_DVC_AuxPump2SpdDsrd_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTED_DVC_AuxPmp2SpdDsrd_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_n_DVC_AuxPump2SpdDsrd' incorporates:
     *  Switch: '<S365>/Switch3'
     */
    (void)Rte_Write_VePMIR_n_DVC_AuxPump2SpdDsrd_Value(tmp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID2 */
FUNC(void, PMIR_CODE) PMIR_MedTEH(void) /* Explicit Task: MedTEH */
{
    float32 rtb_Sum1;
    float32 rtb_Sum1_f;
    float32 rtb_Sum2;
    float32 rtb_Sum2_pb;
    float32 rtb_VePMIR_Pct_LTPsvPump2TgtSpd;
    float32 rtb_VePMIR_Pct_LTPsvPumpActSpd;
    float32 rtb_VePMIR_Pct_LTPsvPumpTgtSpd;
    TePMPR_e_FTSNA tmp_0;
    TePMPR_e_NodeError tmp_2;
    TePMPR_e_TFSNA tmp_3;
    TeTAIR_e_IO_CntrlSt tmp;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmp_4;
    boolean tmp_1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PMIR_MedTEH'
     */
    /* Switch: '<S1074>/Switch' incorporates:
     *  Constant: '<S1082>/Calib'
     */
    if (KePMIR_b_LTPsvPmp_ActSpd_SD)
    {
        /* Switch: '<S1074>/Switch' incorporates:
         *  Constant: '<S1081>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd = KePMIR_Pct_LTPsvPmp_ActSpd_D;
    }
    else
    {
        /* Switch: '<S1074>/Switch' incorporates:
         *  Merge: '<Root>/Merge_153'
         *  SignalConversion generated from: '<S109>/VePMIR_Pct_LTPsvPumpRPMAct_read'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPmp_ActSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S1074>/Switch' */

    /* Switch: '<S1080>/Switch1' incorporates:
     *  Constant: '<S1160>/Calib'
     *  Constant: '<S1161>/Calib'
     *  Logic: '<S1074>/Logical1'
     *  RelationalOperator: '<S1074>/Comparison2'
     *  RelationalOperator: '<S1074>/Comparison3'
     */
    if ((rtb_VePMIR_Pct_LTPsvPumpActSpd <= KePMIR_Pct_LT_PsvPmpMaxSpd) &&
            (rtb_VePMIR_Pct_LTPsvPumpActSpd >= KePMIR_Pct_LT_PsvPmpMinSpd))
    {
        /* Sum: '<S1074>/Sum1' incorporates:
         *  Constant: '<S1164>/Calib'
         *  Constant: '<S1165>/Calib'
         */
        rtb_Sum1_f = KePMIR_n_LT_PsvPmpMaxSpd - KePMIR_n_LT_PsvPmpMinSpd;

        /* Sum: '<S1074>/Sum2' */
        rtb_Sum2_pb = KePMIR_Pct_LT_PsvPmpMaxSpd - KePMIR_Pct_LT_PsvPmpMinSpd;

        /* Outputs for Atomic SubSystem: '<S1074>/Protected Division1' */
        /* Switch: '<S1083>/Switch1' incorporates:
         *  Constant: '<S1083>/Constant Value'
         *  Constant: '<S1083>/Constant Value1'
         *  Constant: '<S1083>/Constant Value2'
         *  Constant: '<S1083>/Constant Value3'
         *  Logic: '<S1083>/AND'
         *  RelationalOperator: '<S1083>/Greater Than or Equal '
         *  RelationalOperator: '<S1083>/Greater Than or Equal 1'
         *  RelationalOperator: '<S1083>/Not Equal'
         *  RelationalOperator: '<S1083>/Not Equal1'
         *  Switch: '<S1083>/Switch2'
         *  Switch: '<S1083>/Switch3'
         */
        if ((rtb_Sum1_f != 0.0F) && (rtb_Sum2_pb != 0.0F))
        {
            /* Switch: '<S1083>/Switch1' incorporates:
             *  Product: '<S1083>/Division'
             */
            rtb_Sum1_f /= rtb_Sum2_pb;
        }
        else if (rtb_Sum1_f > 0.0F)
        {
            /* Switch: '<S1083>/Switch2' incorporates:
             *  Constant: '<S1083>/MAXFLOAT'
             *  Switch: '<S1083>/Switch1'
             */
            rtb_Sum1_f = 3.402823466E+38F;
        }
        else if (rtb_Sum1_f < 0.0F)
        {
            /* Switch: '<S1083>/Switch3' incorporates:
             *  Constant: '<S1083>/MINFLOAT'
             *  Switch: '<S1083>/Switch1'
             *  Switch: '<S1083>/Switch2'
             */
            rtb_Sum1_f = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S1083>/Switch1' incorporates:
             *  Constant: '<S1083>/Constant Value4'
             *  Switch: '<S1083>/Switch2'
             *  Switch: '<S1083>/Switch3'
             */
            rtb_Sum1_f = 0.0F;
        }

        /* End of Switch: '<S1083>/Switch1' */
        /* End of Outputs for SubSystem: '<S1074>/Protected Division1' */

        /* Switch: '<S1080>/Switch1' incorporates:
         *  Constant: '<S1164>/Calib'
         *  Product: '<S1074>/Product1'
         *  Product: '<S1074>/Product2'
         *  Sum: '<S1074>/Sum'
         *  Sum: '<S1074>/Sum3'
         */
        VePMIR_n_LTPsvPump_ActSpd_AD = (KePMIR_n_LT_PsvPmpMaxSpd - (rtb_Sum1_f *
            KePMIR_Pct_LT_PsvPmpMaxSpd)) + (rtb_VePMIR_Pct_LTPsvPumpActSpd *
            rtb_Sum1_f);
    }
    else
    {
        /* Switch: '<S1080>/Switch1' incorporates:
         *  Constant: '<S1074>/Constant Value3'
         */
        VePMIR_n_LTPsvPump_ActSpd_AD = 0.0F;
    }

    /* End of Switch: '<S1080>/Switch1' */

    /* Switch: '<S1075>/Switch' incorporates:
     *  Constant: '<S1084>/Calib'
     */
    if (KePMIR_b_LTPsvPumpRPMAct_SD)
    {
        /* Switch: '<S957>/Switch' incorporates:
         *  Constant: '<S1085>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPump2TgtSpd = KePMIR_n_LTPsvPumpRPMAct_D;
    }
    else
    {
        /* Switch: '<S957>/Switch' incorporates:
         *  Merge: '<Root>/Merge_178'
         *  SignalConversion generated from: '<S109>/VePMIR_n_LTPsvPumpRPMAct_read'
         */
        rtb_VePMIR_Pct_LTPsvPump2TgtSpd =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPumpRPMAct_INIT_write_IRV();
    }

    /* End of Switch: '<S1075>/Switch' */

    /* Switch: '<S1076>/Switch' incorporates:
     *  Constant: '<S1087>/Calib'
     */
    if (KePMIR_b_LTPsvPumpRPMAct_FA_SD)
    {
        /* Switch: '<S1076>/Switch' incorporates:
         *  Constant: '<S1086>/Calib'
         */
        VePMIR_b_LTPsvPumpRPMAct_FA_AD = KePMIR_b_LTPsvPumpRPMAct_FA_D;
    }
    else
    {
        /* Switch: '<S1076>/Switch' incorporates:
         *  Merge: '<Root>/Merge_177'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpRPMActFA_read'
         */
        VePMIR_b_LTPsvPumpRPMAct_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpRPMActFA_write_IRV();
    }

    /* End of Switch: '<S1076>/Switch' */

    /* Switch: '<S1077>/Switch' incorporates:
     *  Constant: '<S1089>/Calib'
     */
    if (KePMIR_b_LTPsvPmp_ActSpd_FA_SD)
    {
        /* Switch: '<S1077>/Switch' incorporates:
         *  Constant: '<S1088>/Calib'
         */
        VePMIR_b_LTPsvPmp_ActSpd_FA_AD = KePMIR_b_LTPsvPmp_ActSpd_FA_D;
    }
    else
    {
        /* Switch: '<S1077>/Switch' incorporates:
         *  Merge: '<Root>/Merge_152'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpRPMActPctFA_read'
         */
        VePMIR_b_LTPsvPmp_ActSpd_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpRPMActPctFA_write_IRV();
    }

    /* End of Switch: '<S1077>/Switch' */

    /* Switch: '<S1078>/Switch' incorporates:
     *  Constant: '<S1091>/Calib'
     */
    if (KePMIR_b_LTPsvPumpRPMAct_SNA_SD)
    {
        /* Switch: '<S1078>/Switch' incorporates:
         *  Constant: '<S1090>/Calib'
         */
        VePMIR_b_LTPsvPumpRPMAct_SNA_AD = KePMIR_b_LTPsvPumpRPMAct_SNA_D;
    }
    else
    {
        /* Switch: '<S1078>/Switch' incorporates:
         *  Merge: '<Root>/Merge_176'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpRPMActSNA_read'
         */
        VePMIR_b_LTPsvPumpRPMAct_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpRPMActSNA_write_IRV();
    }

    /* End of Switch: '<S1078>/Switch' */

    /* Switch: '<S1079>/Switch' incorporates:
     *  Constant: '<S1093>/Calib'
     */
    if (KePMIR_b_LTPsvPmp_ActSpd_SNA_SD)
    {
        /* Switch: '<S1079>/Switch' incorporates:
         *  Constant: '<S1092>/Calib'
         */
        VePMIR_b_LTPsvPmp_ActSpd_SNA_AD = KePMIR_b_LTPsvPmp_ActSpd_SNA_D;
    }
    else
    {
        /* Switch: '<S1079>/Switch' incorporates:
         *  Merge: '<Root>/Merge_151'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpRPMActPctSNA_read'
         */
        VePMIR_b_LTPsvPmp_ActSpd_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpRPMActPctSNA_write_IRV();
    }

    /* End of Switch: '<S1079>/Switch' */

    /* Switch: '<S1028>/Switch' incorporates:
     *  Constant: '<S1163>/Calib'
     *  Switch: '<S1028>/Switch1'
     *  Switch: '<S1028>/Switch2'
     */
    if (KePMIR_b_LTPsvPmp_LdfType)
    {
        /* Outport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_FA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump_RPMAct_FA_Value
            (VePMIR_b_LTPsvPmp_ActSpd_FA_AD);

        /* Outport: '<Root>/VePMIR_n_LTPsvPump_RPMAct' */
        (void)Rte_Write_VePMIR_n_LTPsvPump_RPMAct_Value
            (VePMIR_n_LTPsvPump_ActSpd_AD);

        /* Outport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump_RPMAct_SNA_Value
            (VePMIR_b_LTPsvPmp_ActSpd_SNA_AD);
    }
    else
    {
        /* Outport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_FA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump_RPMAct_FA_Value
            (VePMIR_b_LTPsvPumpRPMAct_FA_AD);

        /* Outport: '<Root>/VePMIR_n_LTPsvPump_RPMAct' */
        (void)Rte_Write_VePMIR_n_LTPsvPump_RPMAct_Value
            (rtb_VePMIR_Pct_LTPsvPump2TgtSpd);

        /* Outport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump_RPMAct_SNA_Value
            (VePMIR_b_LTPsvPumpRPMAct_SNA_AD);
    }

    /* End of Switch: '<S1028>/Switch' */

    /* Switch: '<S1109>/Switch' incorporates:
     *  Constant: '<S1115>/Calib'
     */
    if (KePMIR_b_LTPsvPmp_TgtSpd_SD)
    {
        /* Switch: '<S1109>/Switch' incorporates:
         *  Constant: '<S1114>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPumpTgtSpd = KePMIR_Pct_LTPsvPmp_TgtSpd_D;
    }
    else
    {
        /* Switch: '<S1109>/Switch' incorporates:
         *  Merge: '<Root>/Merge_186'
         *  SignalConversion generated from: '<S109>/VePMIR_Pct_LTPsvPumpRPMTgt_read'
         */
        rtb_VePMIR_Pct_LTPsvPumpTgtSpd =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPmp_TgtSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S1109>/Switch' */

    /* Switch: '<S1113>/Switch1' incorporates:
     *  Constant: '<S1160>/Calib'
     *  Constant: '<S1161>/Calib'
     *  Logic: '<S1109>/Logical1'
     *  RelationalOperator: '<S1109>/Comparison2'
     *  RelationalOperator: '<S1109>/Comparison3'
     */
    if ((rtb_VePMIR_Pct_LTPsvPumpTgtSpd <= KePMIR_Pct_LT_PsvPmpMaxSpd) &&
            (rtb_VePMIR_Pct_LTPsvPumpTgtSpd >= KePMIR_Pct_LT_PsvPmpMinSpd))
    {
        /* Sum: '<S1109>/Sum1' incorporates:
         *  Constant: '<S1164>/Calib'
         *  Constant: '<S1165>/Calib'
         */
        rtb_Sum1_f = KePMIR_n_LT_PsvPmpMaxSpd - KePMIR_n_LT_PsvPmpMinSpd;

        /* Sum: '<S1109>/Sum2' */
        rtb_Sum2_pb = KePMIR_Pct_LT_PsvPmpMaxSpd - KePMIR_Pct_LT_PsvPmpMinSpd;

        /* Outputs for Atomic SubSystem: '<S1109>/Protected Division' */
        /* Switch: '<S1116>/Switch1' incorporates:
         *  Constant: '<S1116>/Constant Value'
         *  Constant: '<S1116>/Constant Value1'
         *  Constant: '<S1116>/Constant Value2'
         *  Constant: '<S1116>/Constant Value3'
         *  Logic: '<S1116>/AND'
         *  RelationalOperator: '<S1116>/Greater Than or Equal '
         *  RelationalOperator: '<S1116>/Greater Than or Equal 1'
         *  RelationalOperator: '<S1116>/Not Equal'
         *  RelationalOperator: '<S1116>/Not Equal1'
         *  Switch: '<S1116>/Switch2'
         *  Switch: '<S1116>/Switch3'
         */
        if ((rtb_Sum1_f != 0.0F) && (rtb_Sum2_pb != 0.0F))
        {
            /* Switch: '<S1116>/Switch1' incorporates:
             *  Product: '<S1116>/Division'
             */
            rtb_Sum1_f /= rtb_Sum2_pb;
        }
        else if (rtb_Sum1_f > 0.0F)
        {
            /* Switch: '<S1116>/Switch2' incorporates:
             *  Constant: '<S1116>/MAXFLOAT'
             *  Switch: '<S1116>/Switch1'
             */
            rtb_Sum1_f = 3.402823466E+38F;
        }
        else if (rtb_Sum1_f < 0.0F)
        {
            /* Switch: '<S1116>/Switch3' incorporates:
             *  Constant: '<S1116>/MINFLOAT'
             *  Switch: '<S1116>/Switch1'
             *  Switch: '<S1116>/Switch2'
             */
            rtb_Sum1_f = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S1116>/Switch1' incorporates:
             *  Constant: '<S1116>/Constant Value4'
             *  Switch: '<S1116>/Switch2'
             *  Switch: '<S1116>/Switch3'
             */
            rtb_Sum1_f = 0.0F;
        }

        /* End of Switch: '<S1116>/Switch1' */
        /* End of Outputs for SubSystem: '<S1109>/Protected Division' */

        /* Switch: '<S1113>/Switch1' incorporates:
         *  Constant: '<S1164>/Calib'
         *  Product: '<S1109>/Product1'
         *  Product: '<S1109>/Product2'
         *  Sum: '<S1109>/Sum'
         *  Sum: '<S1109>/Sum3'
         */
        VePMIR_n_LTPsvPmp_TgtSpd_AD = (KePMIR_n_LT_PsvPmpMaxSpd - (rtb_Sum1_f *
            KePMIR_Pct_LT_PsvPmpMaxSpd)) + (rtb_VePMIR_Pct_LTPsvPumpTgtSpd *
            rtb_Sum1_f);
    }
    else
    {
        /* Switch: '<S1113>/Switch1' incorporates:
         *  Constant: '<S1109>/Constant Value3'
         */
        VePMIR_n_LTPsvPmp_TgtSpd_AD = 0.0F;
    }

    /* End of Switch: '<S1113>/Switch1' */

    /* Switch: '<S1110>/Switch' incorporates:
     *  Constant: '<S1117>/Calib'
     */
    if (KePMIR_b_LTPsvPumpRPMTgt_SD)
    {
        /* Switch: '<S930>/Switch' incorporates:
         *  Constant: '<S1118>/Calib'
         */
        rtb_Sum1_f = KePMIR_n_LTPsvPumpRPMTgt_D;
    }
    else
    {
        /* Switch: '<S930>/Switch' incorporates:
         *  Merge: '<Root>/Merge_180'
         *  SignalConversion generated from: '<S109>/VePMIR_n_LTPsvPumpRPMTgt_read'
         */
        rtb_Sum1_f = Rte_IrvRead_PMIR_MedTEH_LTPsvPmpRPMTgt_INIT_write_IRV();
    }

    /* End of Switch: '<S1110>/Switch' */

    /* Switch: '<S1111>/Switch' incorporates:
     *  Constant: '<S1120>/Calib'
     */
    if (KePMIR_b_LTPsvPumpRPMTgt_FA_SD)
    {
        /* Switch: '<S1111>/Switch' incorporates:
         *  Constant: '<S1119>/Calib'
         */
        VePMIR_b_LTPsvPumpRPMTgt_FA_AD = KePMIR_b_LTPsvPumpRPMTgt_FA_D;
    }
    else
    {
        /* Switch: '<S1111>/Switch' incorporates:
         *  Merge: '<Root>/Merge_179'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpRPMTgtFA_read'
         */
        VePMIR_b_LTPsvPumpRPMTgt_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpRPMTgtFA_write_IRV();
    }

    /* End of Switch: '<S1111>/Switch' */

    /* Switch: '<S1112>/Switch' incorporates:
     *  Constant: '<S1122>/Calib'
     */
    if (KePMIR_b_LTPsvPmp_TgtSpd_FA_SD)
    {
        /* Switch: '<S1112>/Switch' incorporates:
         *  Constant: '<S1121>/Calib'
         */
        VePMIR_b_LTPsvPumpTgtSpd_FA_AD = KePMIR_b_LTPsvPmp_TgtSpd_FA_D;
    }
    else
    {
        /* Switch: '<S1112>/Switch' incorporates:
         *  Merge: '<Root>/Merge_185'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpRPMTgtPctFA_read'
         */
        VePMIR_b_LTPsvPumpTgtSpd_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpRPMTgtPctFA_write_IRV();
    }

    /* End of Switch: '<S1112>/Switch' */

    /* Switch: '<S1032>/Switch' incorporates:
     *  Constant: '<S1163>/Calib'
     *  Switch: '<S1032>/Switch1'
     */
    if (KePMIR_b_LTPsvPmp_LdfType)
    {
        /* Switch: '<S1032>/Switch' */
        VePMIR_b_LTPsvPump_RPMTgt_FA = VePMIR_b_LTPsvPumpTgtSpd_FA_AD;

        /* Switch: '<S1032>/Switch1' */
        VePMIR_n_LTPsvPump_RPMTgt = VePMIR_n_LTPsvPmp_TgtSpd_AD;
    }
    else
    {
        /* Switch: '<S1032>/Switch' */
        VePMIR_b_LTPsvPump_RPMTgt_FA = VePMIR_b_LTPsvPumpRPMTgt_FA_AD;

        /* Switch: '<S1032>/Switch1' */
        VePMIR_n_LTPsvPump_RPMTgt = rtb_Sum1_f;
    }

    /* End of Switch: '<S1032>/Switch' */

    /* Switch: '<S1042>/Switch' incorporates:
     *  Constant: '<S1162>/Calib'
     *  Constant: '<S1170>/Calib'
     *  Switch: '<S1042>/Switch1'
     */
    if (KePMIR_b_LTPP_DVC_FlwRt_IO_Cntl_SD)
    {
        /* Outport: '<Root>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl' incorporates:
         *  Constant: '<S1171>/Calib'
         */
        (void)Rte_Write_VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Value
            (KePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_D);
    }
    else
    {
        if (KePMIR_b_LTPsvPmp_EOLToolType)
        {
            /* Switch: '<S1042>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_158'
             *  SignalConversion generated from: '<S109>/VePMIF_e_LTTP_IO_CntrlSt_read'
             */
            tmp = Rte_IrvRead_PMIR_MedTEH_LTPP_DVC_IO_Cntl_INIT_write_IRV();
        }
        else
        {
            /* Switch: '<S1042>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_156'
             *  SignalConversion generated from: '<S109>/VePMIF_e_LT_PsvPmpCmd_IO_CntrlSt_read'
             */
            tmp = Rte_IrvRead_PMIR_MedTEH_LTPP_DVC_FlwRt_IO_Cntl_INIT_write_IRV();
        }

        /* Outport: '<Root>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl' incorporates:
         *  Switch: '<S1042>/Switch1'
         */
        (void)Rte_Write_VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Value(tmp);
    }

    /* End of Switch: '<S1042>/Switch' */

    /* SignalConversion generated from: '<S109>/VePMIF_Pct_LTTP_Cmd_read' incorporates:
     *  Merge: '<Root>/Merge_157'
     */
    rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPP_DVC_Pct_INIT_write_IRV();

    /* Switch: '<S1175>/Switch1' incorporates:
     *  Constant: '<S1160>/Calib'
     *  Constant: '<S1161>/Calib'
     *  Logic: '<S1174>/Logical1'
     *  RelationalOperator: '<S1174>/Comparison2'
     *  RelationalOperator: '<S1174>/Comparison3'
     */
    if ((rtb_Sum2_pb <= KePMIR_Pct_LT_PsvPmpMaxSpd) && (rtb_Sum2_pb >=
            KePMIR_Pct_LT_PsvPmpMinSpd))
    {
        /* Sum: '<S1174>/Sum1' incorporates:
         *  Constant: '<S1164>/Calib'
         *  Constant: '<S1165>/Calib'
         */
        rtb_Sum1 = KePMIR_n_LT_PsvPmpMaxSpd - KePMIR_n_LT_PsvPmpMinSpd;

        /* Sum: '<S1174>/Sum2' */
        rtb_Sum2 = KePMIR_Pct_LT_PsvPmpMaxSpd - KePMIR_Pct_LT_PsvPmpMinSpd;

        /* Outputs for Atomic SubSystem: '<S1174>/Protected Division' */
        /* Switch: '<S1176>/Switch1' incorporates:
         *  Constant: '<S1176>/Constant Value'
         *  Constant: '<S1176>/Constant Value1'
         *  Constant: '<S1176>/Constant Value2'
         *  Constant: '<S1176>/Constant Value3'
         *  Logic: '<S1176>/AND'
         *  RelationalOperator: '<S1176>/Greater Than or Equal '
         *  RelationalOperator: '<S1176>/Greater Than or Equal 1'
         *  RelationalOperator: '<S1176>/Not Equal'
         *  RelationalOperator: '<S1176>/Not Equal1'
         *  Switch: '<S1176>/Switch2'
         *  Switch: '<S1176>/Switch3'
         */
        if ((rtb_Sum1 != 0.0F) && (rtb_Sum2 != 0.0F))
        {
            /* Switch: '<S1176>/Switch1' incorporates:
             *  Product: '<S1176>/Division'
             */
            rtb_Sum1 /= rtb_Sum2;
        }
        else if (rtb_Sum1 > 0.0F)
        {
            /* Switch: '<S1176>/Switch2' incorporates:
             *  Constant: '<S1176>/MAXFLOAT'
             *  Switch: '<S1176>/Switch1'
             */
            rtb_Sum1 = 3.402823466E+38F;
        }
        else if (rtb_Sum1 < 0.0F)
        {
            /* Switch: '<S1176>/Switch3' incorporates:
             *  Constant: '<S1176>/MINFLOAT'
             *  Switch: '<S1176>/Switch1'
             *  Switch: '<S1176>/Switch2'
             */
            rtb_Sum1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S1176>/Switch1' incorporates:
             *  Constant: '<S1176>/Constant Value4'
             *  Switch: '<S1176>/Switch2'
             *  Switch: '<S1176>/Switch3'
             */
            rtb_Sum1 = 0.0F;
        }

        /* End of Switch: '<S1176>/Switch1' */
        /* End of Outputs for SubSystem: '<S1174>/Protected Division' */

        /* Switch: '<S1175>/Switch1' incorporates:
         *  Constant: '<S1164>/Calib'
         *  Product: '<S1174>/Product1'
         *  Product: '<S1174>/Product2'
         *  Sum: '<S1174>/Sum'
         *  Sum: '<S1174>/Sum3'
         */
        VePMIR_n_DVC_RPM_Cnvrtd = (KePMIR_n_LT_PsvPmpMaxSpd - (rtb_Sum1 *
            KePMIR_Pct_LT_PsvPmpMaxSpd)) + (rtb_Sum2_pb * rtb_Sum1);
    }
    else
    {
        /* Switch: '<S1175>/Switch1' incorporates:
         *  Constant: '<S1174>/Constant Value3'
         */
        VePMIR_n_DVC_RPM_Cnvrtd = 0.0F;
    }

    /* End of Switch: '<S1175>/Switch1' */

    /* Switch: '<S1043>/Switch' incorporates:
     *  Constant: '<S1162>/Calib'
     *  Constant: '<S1172>/Calib'
     *  Switch: '<S1043>/Switch1'
     */
    if (KePMIR_b_LTPP_DVC_FlwRtRq_SD)
    {
        /* Outport: '<Root>/VePMIR_n_LTPP_DVC_RPM_PEClFlwRt' incorporates:
         *  Constant: '<S1173>/Calib'
         */
        (void)Rte_Write_VePMIR_n_LTPP_DVC_RPM_PEClFlwRt_Value
            (KePMIR_n_LTPP_DVC_FlwRtRq_D);
    }
    else
    {
        if (KePMIR_b_LTPsvPmp_EOLToolType)
        {
            /* Switch: '<S1043>/Switch1' */
            rtb_Sum2_pb = VePMIR_n_DVC_RPM_Cnvrtd;
        }
        else
        {
            /* Switch: '<S1043>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_155'
             *  SignalConversion generated from: '<S109>/VePMIF_n_LT_PsvPmpCmd_read'
             */
            rtb_Sum2_pb =
                Rte_IrvRead_PMIR_MedTEH_LTPP_DVC_RPM_PEClFlwRt_INIT_write_IRV();
        }

        /* Outport: '<Root>/VePMIR_n_LTPP_DVC_RPM_PEClFlwRt' */
        (void)Rte_Write_VePMIR_n_LTPP_DVC_RPM_PEClFlwRt_Value(rtb_Sum2_pb);
    }

    /* End of Switch: '<S1043>/Switch' */

    /* Switch: '<S1155>/Switch' incorporates:
     *  Constant: '<S1157>/Calib'
     *  Constant: '<S1158>/Calib'
     *  Merge: '<Root>/Merge_173'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LT_PsvPmpOT_read'
     */
    if (KePMIR_b_LTPsvPumpOT_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPumpOT_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LT_PsvPmpOT_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpOT' incorporates:
     *  Switch: '<S1155>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpOT_Value(tmp_0);

    /* Switch: '<S1039>/Switch' incorporates:
     *  Constant: '<S1153>/Calib'
     *  Constant: '<S1154>/Calib'
     *  Merge: '<Root>/Merge_181'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpRespErr_read'
     */
    if (KePMIR_b_LTPsvPumpRespErr_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPumpRespErr_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpRespErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpRespErr' incorporates:
     *  Switch: '<S1039>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpRespErr_Value(tmp_1);

    /* Switch: '<S1148>/Switch' incorporates:
     *  Constant: '<S1150>/Calib'
     *  Constant: '<S1151>/Calib'
     *  Merge: '<Root>/Merge_171'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPumpNodeErr_read'
     */
    if (KePMIR_b_LTPsvPumpNodeErr_SD)
    {
        tmp_2 = KePMIR_e_LTPsvPumpNodeErr_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpNodeErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpNodeErr' incorporates:
     *  Switch: '<S1148>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpNodeErr_Value(tmp_2);

    /* Switch: '<S1068>/Switch' incorporates:
     *  Constant: '<S1070>/Calib'
     *  Constant: '<S1071>/Calib'
     *  Merge: '<Root>/Merge_189'
     *  SignalConversion generated from: '<S109>/VePMIR_U_LT_PsvPmpVltg_read'
     */
    if (KePMIR_b_LTPsvPumpVltg_SD)
    {
        rtb_Sum2_pb = KePMIR_U_LTPsvPumpVltg_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpVlt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_U_LTPsvPumpVltg' incorporates:
     *  Switch: '<S1068>/Switch'
     */
    (void)Rte_Write_VePMIR_U_LTPsvPumpVltg_Value(rtb_Sum2_pb);

    /* Switch: '<S1069>/Switch' incorporates:
     *  Constant: '<S1072>/Calib'
     *  Constant: '<S1073>/Calib'
     *  Merge: '<Root>/Merge_188'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LT_PsvPmpVltgFA_read'
     */
    if (KePMIR_b_LTPsvPumpVltg_FA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPumpVltg_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LT_PsvPmpVltgFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpVltg_FA' incorporates:
     *  Switch: '<S1069>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpVltg_FA_Value(tmp_1);

    /* Switch: '<S1139>/Switch' incorporates:
     *  Constant: '<S1141>/Calib'
     *  Constant: '<S1142>/Calib'
     *  Merge: '<Root>/Merge_162'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPumpDryRun_read'
     */
    if (KePMIR_b_LTPsvPumpDryRun_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPumpDryRun_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpDryRun_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpDryRun' incorporates:
     *  Switch: '<S1139>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpDryRun_Value(tmp_0);

    /* Switch: '<S1140>/Switch' incorporates:
     *  Constant: '<S1143>/Calib'
     *  Constant: '<S1144>/Calib'
     *  Merge: '<Root>/Merge_161'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpDryRunFA_read'
     */
    if (KePMIR_b_LTPsvPumpDryRun_FA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPumpDryRun_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpDryRunFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpDryRun_FA' incorporates:
     *  Switch: '<S1140>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpDryRun_FA_Value(tmp_1);

    /* Switch: '<S1145>/Switch' incorporates:
     *  Constant: '<S1146>/Calib'
     *  Constant: '<S1147>/Calib'
     *  Merge: '<Root>/Merge_165'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPumpFailsafe_read'
     */
    if (KePMIR_b_LTPsvPumpFailsafe_SD)
    {
        tmp_3 = KePMIR_e_LTPsvPumpFailsafe_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpFailsafe_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpFailsafe' incorporates:
     *  Switch: '<S1145>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpFailsafe_Value(tmp_3);

    /* Switch: '<S1063>/Switch' incorporates:
     *  Constant: '<S1065>/Calib'
     *  Constant: '<S1066>/Calib'
     *  Merge: '<Root>/Merge_150'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPumpSuppVltErr_read'
     */
    if (KePMIR_b_LTPsvPumpSuppVltErr_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPumpSuppVltErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpSuppVltErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpSuppVltErr' incorporates:
     *  Switch: '<S1063>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpSuppVltErr_Value(tmp_0);

    /* Switch: '<S1056>/Switch' incorporates:
     *  Constant: '<S1058>/Calib'
     *  Constant: '<S1059>/Calib'
     *  Merge: '<Root>/Merge_175'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPumpOvrCrnt_read'
     */
    if (KePMIR_b_LTPsvPumpOvrCrnt_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPumpOvrCrnt_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpOvrCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpOverCurrent' incorporates:
     *  Switch: '<S1056>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpOverCurrent_Value(tmp_0);

    /* Switch: '<S1094>/Switch' incorporates:
     *  Constant: '<S1095>/Calib'
     *  Constant: '<S1096>/Calib'
     *  Merge: '<Root>/Merge_154'
     *  SignalConversion generated from: '<S109>/VePMIR_I_LT_PsvPmpCrnt_read'
     */
    if (KePMIR_b_LTPsvPumpCrnt_SD)
    {
        rtb_Sum2_pb = KePMIR_I_LTPsvPumpCrnt_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPSVPumpCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_I_LTPsvPumpCurrent' incorporates:
     *  Switch: '<S1094>/Switch'
     */
    (void)Rte_Write_VePMIR_I_LTPsvPumpCurrent_Value(rtb_Sum2_pb);

    /* Switch: '<S1134>/Switch' incorporates:
     *  Constant: '<S1136>/Calib'
     *  Constant: '<S1137>/Calib'
     *  Merge: '<Root>/Merge_160'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPumpDeblock_read'
     */
    if (KePMIR_b_LTPsvPumpDeblock_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPumpDeblock_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpDeblock_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpDeblock' incorporates:
     *  Switch: '<S1134>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpDeblock_Value(tmp_0);

    /* Switch: '<S1097>/Switch' incorporates:
     *  Constant: '<S1099>/Calib'
     *  Constant: '<S1100>/Calib'
     *  Merge: '<Root>/Merge_167'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump_LmpHM_read'
     */
    if (KePMIR_b_LTPsvPumpLmpHM_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPumpLmpHM_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump_LmpHM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpLmpHM' incorporates:
     *  Switch: '<S1097>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpLmpHM_Value(tmp_0);

    /* Switch: '<S1098>/Switch' incorporates:
     *  Constant: '<S1102>/Calib'
     */
    if (KePMIR_b_LTPsvPumpLmpHM_FA_SD)
    {
        /* Switch: '<S1098>/Switch' incorporates:
         *  Constant: '<S1101>/Calib'
         */
        VePMIR_b_LTPsvPump_LmpHM_FA = KePMIR_b_LTPsvPumpLmpHM_FA_D;
    }
    else
    {
        /* Switch: '<S1098>/Switch' incorporates:
         *  Merge: '<Root>/Merge_166'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump_LmpHMFA_read'
         */
        VePMIR_b_LTPsvPump_LmpHM_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump_LmpHMFA_write_IRV();
    }

    /* End of Switch: '<S1098>/Switch' */

    /* Switch: '<S1050>/Switch' incorporates:
     *  Constant: '<S1052>/Calib'
     *  Constant: '<S1053>/Calib'
     *  Merge: '<Root>/Merge_169'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPumpMntrRPM_read'
     */
    if (KePMIR_b_LTPsvPumpMntrRPM_SD)
    {
        tmp_3 = KePMIR_e_LTPsvPumpMntrRPM_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpMntrRPM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpMntrRPM' incorporates:
     *  Switch: '<S1050>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpMntrRPM_Value(tmp_3);

    /* Switch: '<S1051>/Switch' incorporates:
     *  Constant: '<S1055>/Calib'
     */
    if (KePMIR_b_LTPsvPumpMntrRPM_FA_SD)
    {
        /* Switch: '<S1051>/Switch' incorporates:
         *  Constant: '<S1054>/Calib'
         */
        VePMIR_b_LTPsvPumpMntrRPM_FA = KePMIR_b_LTPsvPumpMntrRPM_FA_D;
    }
    else
    {
        /* Switch: '<S1051>/Switch' incorporates:
         *  Merge: '<Root>/Merge_168'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpMntrRPMFA_read'
         */
        VePMIR_b_LTPsvPumpMntrRPM_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpMntrRPMFA_write_IRV();
    }

    /* End of Switch: '<S1051>/Switch' */

    /* Switch: '<S1124>/Switch' incorporates:
     *  Constant: '<S1128>/Calib'
     *  Constant: '<S1129>/Calib'
     *  Merge: '<Root>/Merge_184'
     *  SignalConversion generated from: '<S109>/VePMIR_T_LTPsvPumpTemp_read'
     */
    if (KePMIR_b_LTPsvPumpTemp_SD)
    {
        rtb_Sum2_pb = KePMIR_T_LTPsvPumpTemp_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPsvPumpTemp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_LTPsvPumpTemp' incorporates:
     *  Switch: '<S1124>/Switch'
     */
    (void)Rte_Write_VePMIR_T_LTPsvPumpTemp_Value(rtb_Sum2_pb);

    /* Switch: '<S1125>/Switch' incorporates:
     *  Constant: '<S1130>/Calib'
     *  Constant: '<S1131>/Calib'
     *  Merge: '<Root>/Merge_183'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpTempFA_read'
     */
    if (KePMIR_b_LTPsvPumpTemp_FA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPumpTemp_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpTempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA' incorporates:
     *  Switch: '<S1125>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpTemp_FA_Value(tmp_1);

    /* Switch: '<S1123>/Switch' incorporates:
     *  Constant: '<S1126>/Calib'
     *  Constant: '<S1127>/Calib'
     *  Merge: '<Root>/Merge_182'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPumpTempSNA_read'
     */
    if (KePMIR_b_LTPsvPumpTemp_SNA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPumpTemp_SNA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPumpTempSNA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpTemp_SNA' incorporates:
     *  Switch: '<S1123>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpTemp_SNA_Value(tmp_1);

    /* Switch: '<S1034>/Switch' incorporates:
     *  Constant: '<S1132>/Calib'
     */
    if (KePMIR_b_LTPsvPumpVer_SD)
    {
        /* Switch: '<S1034>/Switch' incorporates:
         *  Constant: '<S1133>/Calib'
         */
        VePMIR_y_LTPsvPumpVer = KePMIR_y_LTPsvPumpVer_D;
    }
    else
    {
        /* Switch: '<S1034>/Switch' incorporates:
         *  Merge: '<Root>/Merge_187'
         *  SignalConversion generated from: '<S109>/VePMIR_y_LTPsvPump_Ver_read'
         */
        VePMIR_y_LTPsvPumpVer =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPump_Ver_INIT_write_IRV();
    }

    /* End of Switch: '<S1034>/Switch' */

    /* Switch: '<S1103>/Switch' incorporates:
     *  Constant: '<S1105>/Calib'
     *  Constant: '<S1106>/Calib'
     *  Merge: '<Root>/Merge_164'
     *  SignalConversion generated from: '<S109>/VePMIR_Pct_ECM_LTPsvPmpRq_read'
     */
    if (KePMIR_b_ECM_LTPsvPumpRq_SD)
    {
        rtb_Sum2_pb = KePMIR_Pct_ECM_LTPsvPumpRq_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_ECM_LTPsvPmpRq_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_Pct_ECM_LTPsvPumpRq' incorporates:
     *  Switch: '<S1103>/Switch'
     */
    (void)Rte_Write_VePMIR_Pct_ECM_LTPsvPumpRq_Value(rtb_Sum2_pb);

    /* Switch: '<S1104>/Switch' incorporates:
     *  Constant: '<S1107>/Calib'
     *  Constant: '<S1108>/Calib'
     *  Merge: '<Root>/Merge_163'
     *  SignalConversion generated from: '<S109>/VePMIR_b_ECM_LTPsvPmpRqFA_read'
     */
    if (KePMIR_b_ECM_LTPsvPumpRq_FA_SD)
    {
        tmp_1 = KePMIR_b_ECM_LTPsvPumpRq_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_ECM_LTPsvPmpRqFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_ECM_LTPsvPumpRq_FA' incorporates:
     *  Switch: '<S1104>/Switch'
     */
    (void)Rte_Write_VePMIR_b_ECM_LTPsvPumpRq_FA_Value(tmp_1);

    /* Switch: '<S1044>/Switch' incorporates:
     *  Constant: '<S1046>/Calib'
     *  Constant: '<S1047>/Calib'
     *  Merge: '<Root>/Merge_147'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPmpAirPrsntErr_read'
     */
    if (KePMIR_b_LTPsvPumpAirPresntErr_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPumpAirPresntErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPmpAirPrsntErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpAirPresntErr' incorporates:
     *  Switch: '<S1044>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpAirPresntErr_Value(tmp_0);

    /* Switch: '<S1045>/Switch' incorporates:
     *  Constant: '<S1049>/Calib'
     */
    if (KePMIR_b_LTPsvPumpAirPresntErr_FA_SD)
    {
        /* Switch: '<S1045>/Switch' incorporates:
         *  Constant: '<S1048>/Calib'
         */
        VePMIR_b_LTPsvPumpAirPresntErr_FA = KePMIR_b_LTPsvPumpAirPresntErr_FA_D;
    }
    else
    {
        /* Switch: '<S1045>/Switch' incorporates:
         *  Merge: '<Root>/Merge_146'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPmpAirPrsntErrFA_read'
         */
        VePMIR_b_LTPsvPumpAirPresntErr_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPmpAirPrsntErrFA_write_IRV();
    }

    /* End of Switch: '<S1045>/Switch' */

    /* Switch: '<S1025>/Switch' incorporates:
     *  Constant: '<S1061>/Calib'
     */
    if (KePMIR_b_LTPsvPumpProdSuplrID_SD)
    {
        /* Switch: '<S1025>/Switch' incorporates:
         *  Constant: '<S1062>/Calib'
         */
        VePMIR_y_LTPsvPumpProdSuplrID = KePMIR_y_LTPsvPumpProdSuplrID_D;
    }
    else
    {
        /* Switch: '<S1025>/Switch' incorporates:
         *  Merge: '<Root>/Merge_148'
         *  SignalConversion generated from: '<S109>/VePMIR_y_LTPsvPmpProdSuplr_ID_read'
         */
        VePMIR_y_LTPsvPumpProdSuplrID =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPmpProdSuplr_ID_INIT_write_IRV();
    }

    /* End of Switch: '<S1025>/Switch' */

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTPsvPmp_Pct_ActSpd'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPumpActSpd_Value
        (rtb_VePMIR_Pct_LTPsvPumpActSpd);

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTPsvPmp_Pct_TgtSpd'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPumpTgtSpd_Value
        (rtb_VePMIR_Pct_LTPsvPumpTgtSpd);

    /* Outport: '<Root>/VePMIR_n_LTPsvPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTPsvPmp_n_ActSpd'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPumpActSpd_Value
        (rtb_VePMIR_Pct_LTPsvPump2TgtSpd);

    /* Outport: '<Root>/VePMIR_n_LTPsvPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTPsvPmp_n_TgtSpd'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPumpTgtSpd_Value(rtb_Sum1_f);

    /* Outport: '<Root>/VePMIR_Pct_LTPPMaxSpd' incorporates:
     *  Constant: '<S1160>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmpMaxSpdPct'
     */
    (void)Rte_Write_VePMIR_Pct_LTPPMaxSpd_Value(KePMIR_Pct_LT_PsvPmpMaxSpd);

    /* Outport: '<Root>/VePMIR_n_LTPPMaxSpd' incorporates:
     *  Constant: '<S1164>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmpMaxSpdRPM'
     */
    (void)Rte_Write_VePMIR_n_LTPPMaxSpd_Value(KePMIR_n_LT_PsvPmpMaxSpd);

    /* Outport: '<Root>/VePMIR_Pct_LTPPMinSpd' incorporates:
     *  Constant: '<S1161>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmpMinSpdPct'
     */
    (void)Rte_Write_VePMIR_Pct_LTPPMinSpd_Value(KePMIR_Pct_LT_PsvPmpMinSpd);

    /* Outport: '<Root>/VePMIR_n_LTPPMinSpd' incorporates:
     *  Constant: '<S1165>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmpMinSpdRPM'
     */
    (void)Rte_Write_VePMIR_n_LTPPMinSpd_Value(KePMIR_n_LT_PsvPmpMinSpd);

    /* Switch: '<S928>/Switch' incorporates:
     *  Constant: '<S936>/Calib'
     */
    if (KePMIR_b_LTPsvPmp2_ActSpd_SD)
    {
        /* Switch: '<S928>/Switch' incorporates:
         *  Constant: '<S935>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd = KePMIR_Pct_LTPsvPmp2_ActSpd_D;
    }
    else
    {
        /* Switch: '<S928>/Switch' incorporates:
         *  Merge: '<Root>/Merge_115'
         *  SignalConversion generated from: '<S109>/VePMIR_Pct_LTPsvPump2RPMAct_read'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPmp2_ActSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S928>/Switch' */

    /* Switch: '<S934>/Switch1' incorporates:
     *  Constant: '<S1005>/Calib'
     *  Constant: '<S1006>/Calib'
     *  Logic: '<S928>/Logical1'
     *  RelationalOperator: '<S928>/Comparison2'
     *  RelationalOperator: '<S928>/Comparison3'
     */
    if ((rtb_VePMIR_Pct_LTPsvPumpActSpd <= KePMIR_Pct_LT_PsvPmp2MaxSpd) &&
            (rtb_VePMIR_Pct_LTPsvPumpActSpd >= KePMIR_Pct_LT_PsvPmp2MinSpd))
    {
        /* Sum: '<S928>/Sum1' incorporates:
         *  Constant: '<S1008>/Calib'
         *  Constant: '<S1009>/Calib'
         */
        rtb_Sum1_f = KePMIR_n_LT_PsvPmp2MaxSpd - KePMIR_n_LT_PsvPmp2MinSpd;

        /* Sum: '<S928>/Sum2' */
        rtb_Sum2_pb = KePMIR_Pct_LT_PsvPmp2MaxSpd - KePMIR_Pct_LT_PsvPmp2MinSpd;

        /* Outputs for Atomic SubSystem: '<S928>/Protected Division1' */
        /* Switch: '<S937>/Switch1' incorporates:
         *  Constant: '<S937>/Constant Value'
         *  Constant: '<S937>/Constant Value1'
         *  Constant: '<S937>/Constant Value2'
         *  Constant: '<S937>/Constant Value3'
         *  Logic: '<S937>/AND'
         *  RelationalOperator: '<S937>/Greater Than or Equal '
         *  RelationalOperator: '<S937>/Greater Than or Equal 1'
         *  RelationalOperator: '<S937>/Not Equal'
         *  RelationalOperator: '<S937>/Not Equal1'
         *  Switch: '<S937>/Switch2'
         *  Switch: '<S937>/Switch3'
         */
        if ((rtb_Sum1_f != 0.0F) && (rtb_Sum2_pb != 0.0F))
        {
            /* Switch: '<S937>/Switch1' incorporates:
             *  Product: '<S937>/Division'
             */
            rtb_Sum1_f /= rtb_Sum2_pb;
        }
        else if (rtb_Sum1_f > 0.0F)
        {
            /* Switch: '<S937>/Switch2' incorporates:
             *  Constant: '<S937>/MAXFLOAT'
             *  Switch: '<S937>/Switch1'
             */
            rtb_Sum1_f = 3.402823466E+38F;
        }
        else if (rtb_Sum1_f < 0.0F)
        {
            /* Switch: '<S937>/Switch3' incorporates:
             *  Constant: '<S937>/MINFLOAT'
             *  Switch: '<S937>/Switch1'
             *  Switch: '<S937>/Switch2'
             */
            rtb_Sum1_f = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S937>/Switch1' incorporates:
             *  Constant: '<S937>/Constant Value4'
             *  Switch: '<S937>/Switch2'
             *  Switch: '<S937>/Switch3'
             */
            rtb_Sum1_f = 0.0F;
        }

        /* End of Switch: '<S937>/Switch1' */
        /* End of Outputs for SubSystem: '<S928>/Protected Division1' */

        /* Switch: '<S934>/Switch1' incorporates:
         *  Constant: '<S1008>/Calib'
         *  Product: '<S928>/Product1'
         *  Product: '<S928>/Product2'
         *  Sum: '<S928>/Sum'
         *  Sum: '<S928>/Sum3'
         */
        VePMIR_n_LTPsvPmp2_ActSpd_AD = (KePMIR_n_LT_PsvPmp2MaxSpd - (rtb_Sum1_f *
            KePMIR_Pct_LT_PsvPmp2MaxSpd)) + (rtb_VePMIR_Pct_LTPsvPumpActSpd *
            rtb_Sum1_f);
    }
    else
    {
        /* Switch: '<S934>/Switch1' incorporates:
         *  Constant: '<S928>/Constant Value3'
         */
        VePMIR_n_LTPsvPmp2_ActSpd_AD = 0.0F;
    }

    /* End of Switch: '<S934>/Switch1' */

    /* Switch: '<S929>/Switch' incorporates:
     *  Constant: '<S939>/Calib'
     */
    if (KePMIR_b_LTPsvPump2RPMAct_SNA_SD)
    {
        /* Switch: '<S929>/Switch' incorporates:
         *  Constant: '<S938>/Calib'
         */
        VePMIR_b_LTPsvPump2RPMAct_SNA_AD = KePMIR_b_LTPsvPump2RPMAct_SNA_D;
    }
    else
    {
        /* Switch: '<S929>/Switch' incorporates:
         *  Merge: '<Root>/Merge_132'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2RPMActSNA_read'
         */
        VePMIR_b_LTPsvPump2RPMAct_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2RPMActSNA_write_IRV();
    }

    /* End of Switch: '<S929>/Switch' */

    /* Switch: '<S930>/Switch' incorporates:
     *  Constant: '<S940>/Calib'
     */
    if (KePMIR_b_LTPsvPump2RPMAct_SD)
    {
        /* Switch: '<S930>/Switch' incorporates:
         *  Constant: '<S941>/Calib'
         */
        rtb_Sum1_f = KePMIR_n_LTPsvPump2RPMAct_D;
    }
    else
    {
        /* Switch: '<S930>/Switch' incorporates:
         *  Merge: '<Root>/Merge_134'
         *  SignalConversion generated from: '<S109>/VePMIR_n_LTPsvPump2RPMAct_read'
         */
        rtb_Sum1_f = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2RPMAct_INIT_write_IRV();
    }

    /* End of Switch: '<S930>/Switch' */

    /* Switch: '<S931>/Switch' incorporates:
     *  Constant: '<S943>/Calib'
     */
    if (KePMIR_b_LTPsvPump2RPMAct_FA_SD)
    {
        /* Switch: '<S931>/Switch' incorporates:
         *  Constant: '<S942>/Calib'
         */
        VePMIR_b_LTPsvPump2RPMAct_FA_AD = KePMIR_b_LTPsvPump2RPMAct_FA_D;
    }
    else
    {
        /* Switch: '<S931>/Switch' incorporates:
         *  Merge: '<Root>/Merge_133'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2RPMActFA_read'
         */
        VePMIR_b_LTPsvPump2RPMAct_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2RPMActFA_write_IRV();
    }

    /* End of Switch: '<S931>/Switch' */

    /* Switch: '<S932>/Switch' incorporates:
     *  Constant: '<S945>/Calib'
     */
    if (KePMIR_b_LTPsvPmp2_ActSpd_FA_SD)
    {
        /* Switch: '<S932>/Switch' incorporates:
         *  Constant: '<S944>/Calib'
         */
        VePMIR_b_LTPsvPmp2_ActSpd_FA_AD = KePMIR_b_LTPsvPmp2_ActSpd_FA_D;
    }
    else
    {
        /* Switch: '<S932>/Switch' incorporates:
         *  Merge: '<Root>/Merge_114'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2RPMActPctFA_read'
         */
        VePMIR_b_LTPsvPmp2_ActSpd_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2RPMActPctFA_write_IRV();
    }

    /* End of Switch: '<S932>/Switch' */

    /* Switch: '<S933>/Switch' incorporates:
     *  Constant: '<S947>/Calib'
     */
    if (KePMIR_b_LTPsvPmp2_ActSpd_SNA_SD)
    {
        /* Switch: '<S933>/Switch' incorporates:
         *  Constant: '<S946>/Calib'
         */
        VePMIR_b_LTPsvPmp2_ActSpd_SNA_AD = KePMIR_b_LTPsvPmp2_ActSpd_SNA_D;
    }
    else
    {
        /* Switch: '<S933>/Switch' incorporates:
         *  Merge: '<Root>/Merge_113'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2RPMActPctSNA_read'
         */
        VePMIR_b_LTPsvPmp2_ActSpd_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2RPMActPctSNA_write_IRV();
    }

    /* End of Switch: '<S933>/Switch' */

    /* Switch: '<S886>/Switch' incorporates:
     *  Constant: '<S1007>/Calib'
     *  Switch: '<S886>/Switch1'
     *  Switch: '<S886>/Switch2'
     */
    if (KePMIR_b_LTPsvPmp2_LdfType)
    {
        /* Outport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_FA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump2RPMAct_FA_Value
            (VePMIR_b_LTPsvPmp2_ActSpd_FA_AD);

        /* Outport: '<Root>/VePMIR_n_LTPsvPump2RPMAct' */
        (void)Rte_Write_VePMIR_n_LTPsvPump2RPMAct_Value
            (VePMIR_n_LTPsvPmp2_ActSpd_AD);

        /* Outport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump2RPMAct_SNA_Value
            (VePMIR_b_LTPsvPmp2_ActSpd_SNA_AD);
    }
    else
    {
        /* Outport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_FA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump2RPMAct_FA_Value
            (VePMIR_b_LTPsvPump2RPMAct_FA_AD);

        /* Outport: '<Root>/VePMIR_n_LTPsvPump2RPMAct' */
        (void)Rte_Write_VePMIR_n_LTPsvPump2RPMAct_Value(rtb_Sum1_f);

        /* Outport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_LTPsvPump2RPMAct_SNA_Value
            (VePMIR_b_LTPsvPump2RPMAct_SNA_AD);
    }

    /* End of Switch: '<S886>/Switch' */

    /* Switch: '<S958>/Switch' incorporates:
     *  Constant: '<S964>/Calib'
     */
    if (KePMIR_b_LTPsvPmp2_TgtSpd_FA_SD)
    {
        /* Switch: '<S958>/Switch' incorporates:
         *  Constant: '<S963>/Calib'
         */
        VePMIR_b_LTPsvPump2_RPMTgt_FA = KePMIR_b_LTPsvPmp2_TgtSpd_FA_D;
    }
    else
    {
        /* Switch: '<S958>/Switch' incorporates:
         *  Merge: '<Root>/Merge_139'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2RPMTgtPctFA_read'
         */
        VePMIR_b_LTPsvPump2_RPMTgt_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2RPMTgtPctFA_write_IRV();
    }

    /* End of Switch: '<S958>/Switch' */

    /* SignalConversion generated from: '<S109>/VePMIF_Pct_LTPP2_Cmd_read' incorporates:
     *  Merge: '<Root>/Merge_144'
     */
    rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPP2_DVC_Pct_INIT_write_IRV();

    /* Switch: '<S1019>/Switch1' incorporates:
     *  Constant: '<S1005>/Calib'
     *  Constant: '<S1006>/Calib'
     *  Logic: '<S1018>/Logical1'
     *  RelationalOperator: '<S1018>/Comparison2'
     *  RelationalOperator: '<S1018>/Comparison3'
     */
    if ((rtb_Sum2_pb <= KePMIR_Pct_LT_PsvPmp2MaxSpd) && (rtb_Sum2_pb >=
            KePMIR_Pct_LT_PsvPmp2MinSpd))
    {
        /* Sum: '<S1018>/Sum1' incorporates:
         *  Constant: '<S1008>/Calib'
         *  Constant: '<S1009>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPump2TgtSpd = KePMIR_n_LT_PsvPmp2MaxSpd -
            KePMIR_n_LT_PsvPmp2MinSpd;

        /* Sum: '<S1018>/Sum2' */
        rtb_VePMIR_Pct_LTPsvPumpTgtSpd = KePMIR_Pct_LT_PsvPmp2MaxSpd -
            KePMIR_Pct_LT_PsvPmp2MinSpd;

        /* Outputs for Atomic SubSystem: '<S1018>/Protected Division1' */
        /* Switch: '<S1020>/Switch1' incorporates:
         *  Constant: '<S1020>/Constant Value'
         *  Constant: '<S1020>/Constant Value1'
         *  Constant: '<S1020>/Constant Value2'
         *  Constant: '<S1020>/Constant Value3'
         *  Logic: '<S1020>/AND'
         *  RelationalOperator: '<S1020>/Greater Than or Equal '
         *  RelationalOperator: '<S1020>/Greater Than or Equal 1'
         *  RelationalOperator: '<S1020>/Not Equal'
         *  RelationalOperator: '<S1020>/Not Equal1'
         *  Switch: '<S1020>/Switch2'
         *  Switch: '<S1020>/Switch3'
         */
        if ((rtb_VePMIR_Pct_LTPsvPump2TgtSpd != 0.0F) &&
                (rtb_VePMIR_Pct_LTPsvPumpTgtSpd != 0.0F))
        {
            /* Switch: '<S1020>/Switch1' incorporates:
             *  Product: '<S1020>/Division'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd /= rtb_VePMIR_Pct_LTPsvPumpTgtSpd;
        }
        else if (rtb_VePMIR_Pct_LTPsvPump2TgtSpd > 0.0F)
        {
            /* Switch: '<S1020>/Switch2' incorporates:
             *  Constant: '<S1020>/MAXFLOAT'
             *  Switch: '<S1020>/Switch1'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd = 3.402823466E+38F;
        }
        else if (rtb_VePMIR_Pct_LTPsvPump2TgtSpd < 0.0F)
        {
            /* Switch: '<S1020>/Switch3' incorporates:
             *  Constant: '<S1020>/MINFLOAT'
             *  Switch: '<S1020>/Switch1'
             *  Switch: '<S1020>/Switch2'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S1020>/Switch1' incorporates:
             *  Constant: '<S1020>/Constant Value4'
             *  Switch: '<S1020>/Switch2'
             *  Switch: '<S1020>/Switch3'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd = 0.0F;
        }

        /* End of Switch: '<S1020>/Switch1' */
        /* End of Outputs for SubSystem: '<S1018>/Protected Division1' */

        /* Switch: '<S1019>/Switch1' incorporates:
         *  Constant: '<S1008>/Calib'
         *  Product: '<S1018>/Product1'
         *  Product: '<S1018>/Product2'
         *  Sum: '<S1018>/Sum'
         *  Sum: '<S1018>/Sum3'
         */
        VePMIR_n_LTPP2_DVC_Cnvrtd = (KePMIR_n_LT_PsvPmp2MaxSpd -
            (rtb_VePMIR_Pct_LTPsvPump2TgtSpd * KePMIR_Pct_LT_PsvPmp2MaxSpd)) +
            (rtb_Sum2_pb * rtb_VePMIR_Pct_LTPsvPump2TgtSpd);
    }
    else
    {
        /* Switch: '<S1019>/Switch1' incorporates:
         *  Constant: '<S1018>/Constant Value3'
         */
        VePMIR_n_LTPP2_DVC_Cnvrtd = 0.0F;
    }

    /* End of Switch: '<S1019>/Switch1' */

    /* Switch: '<S900>/Switch' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    if (KePMIR_b_LTPP2_DVC_FlwRtRq_SD)
    {
        /* Outport: '<Root>/VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt' incorporates:
         *  Constant: '<S1017>/Calib'
         */
        (void)Rte_Write_VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt_Value
            (KePMIR_n_LTPP2_DVC_FlwRtRq_D);
    }
    else
    {
        /* Outport: '<Root>/VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt' */
        (void)Rte_Write_VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt_Value
            (VePMIR_n_LTPP2_DVC_Cnvrtd);
    }

    /* End of Switch: '<S900>/Switch' */

    /* Switch: '<S994>/Switch' incorporates:
     *  Constant: '<S996>/Calib'
     *  Constant: '<S997>/Calib'
     *  Merge: '<Root>/Merge_129'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LT_PsvPmp2OT_read'
     */
    if (KePMIR_b_LTPsvPump2OT_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPump2OT_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LT_PsvPmp2OT_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2OT' incorporates:
     *  Switch: '<S994>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2OT_Value(tmp_0);

    /* Gain: '<S998>/Gain' incorporates:
     *  Merge: '<Root>/Merge_128'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LT_PsvPmp2OTFA_read'
     */
    VePMIR_b_LTPsvPump2OT_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LT_PsvPmp2OTFA_write_IRV();

    /* Switch: '<S895>/Switch' incorporates:
     *  Constant: '<S992>/Calib'
     *  Constant: '<S993>/Calib'
     *  Merge: '<Root>/Merge_135'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2RespErr_read'
     */
    if (KePMIR_b_LTPsvPump2RespErr_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPump2RespErr_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2RespErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2RespErr' incorporates:
     *  Switch: '<S895>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2RespErr_Value(tmp_1);

    /* Switch: '<S987>/Switch' incorporates:
     *  Constant: '<S989>/Calib'
     *  Constant: '<S990>/Calib'
     *  Merge: '<Root>/Merge_127'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2NodeErr_read'
     */
    if (KePMIR_b_LTPsvPump2NodeErr_SD)
    {
        tmp_2 = KePMIR_e_LTPsvPump2NodeErr_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2NodeErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2NodeErr' incorporates:
     *  Switch: '<S987>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2NodeErr_Value(tmp_2);

    /* Gain: '<S991>/Gain' incorporates:
     *  Merge: '<Root>/Merge_126'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2NodeErrFA_read'
     */
    VePMIR_b_LTPsvPump2NodeErr_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2NodeErrFA_write_IRV();

    /* Switch: '<S999>/Switch' incorporates:
     *  Constant: '<S1001>/Calib'
     *  Constant: '<S1002>/Calib'
     *  Merge: '<Root>/Merge_143'
     *  SignalConversion generated from: '<S109>/VePMIR_U_LT_PsvPmp2Vltg_read'
     */
    if (KePMIR_b_LTPsvPump2Vltg_SD)
    {
        rtb_Sum2_pb = KePMIR_U_LTPsvPump2Vltg_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2Vlt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_U_LTPsvPump2Vltg' incorporates:
     *  Switch: '<S999>/Switch'
     */
    (void)Rte_Write_VePMIR_U_LTPsvPump2Vltg_Value(rtb_Sum2_pb);

    /* Switch: '<S1000>/Switch' incorporates:
     *  Constant: '<S1003>/Calib'
     *  Constant: '<S1004>/Calib'
     *  Merge: '<Root>/Merge_142'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LT_PsvPmp2VltgFA_read'
     */
    if (KePMIR_b_LTPsvPump2Vltg_FA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPump2Vltg_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LT_PsvPmp2VltgFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2Vltg_FA' incorporates:
     *  Switch: '<S1000>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2Vltg_FA_Value(tmp_1);

    /* Switch: '<S981>/Switch' incorporates:
     *  Constant: '<S983>/Calib'
     *  Constant: '<S984>/Calib'
     *  Merge: '<Root>/Merge_120'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2DryRun_read'
     */
    if (KePMIR_b_LTPsvPump2DryRun_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPump2DryRun_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2DryRun_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2DryRun' incorporates:
     *  Switch: '<S981>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2DryRun_Value(tmp_0);

    /* Switch: '<S982>/Switch' incorporates:
     *  Constant: '<S985>/Calib'
     *  Constant: '<S986>/Calib'
     *  Merge: '<Root>/Merge_119'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2DryRunFA_read'
     */
    if (KePMIR_b_LTPsvPump2DryRun_FA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPump2DryRun_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2DryRunFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2DryRun_FA' incorporates:
     *  Switch: '<S982>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2DryRun_FA_Value(tmp_1);

    /* Switch: '<S907>/Switch' incorporates:
     *  Constant: '<S908>/Calib'
     *  Constant: '<S909>/Calib'
     *  Merge: '<Root>/Merge_121'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2Failsafe_read'
     */
    if (KePMIR_b_LTPsvPump2Failsafe_SD)
    {
        tmp_3 = KePMIR_e_LTPsvPump2Failsafe_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2Failsafe_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2Failsafe' incorporates:
     *  Switch: '<S907>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2Failsafe_Value(tmp_3);

    /* Switch: '<S923>/Switch' incorporates:
     *  Constant: '<S925>/Calib'
     *  Constant: '<S926>/Calib'
     *  Merge: '<Root>/Merge_112'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2SuppVltErr_read'
     */
    if (KePMIR_b_LTPsvPump2SuppVltErr_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPump2SuppVltErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2SuppVltErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2SuppVltErr' incorporates:
     *  Switch: '<S923>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2SuppVltErr_Value(tmp_0);

    /* Gain: '<S927>/Gain' incorporates:
     *  Merge: '<Root>/Merge_111'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2SuppVltErrFA_read'
     */
    VePMIR_b_LTPsvPump2SuppVltErr_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2SuppVltErrFA_write_IRV();

    /* Switch: '<S916>/Switch' incorporates:
     *  Constant: '<S918>/Calib'
     *  Constant: '<S919>/Calib'
     *  Merge: '<Root>/Merge_131'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2OvrCrnt_read'
     */
    if (KePMIR_b_LTPsvPump2OvrCrnt_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPump2OvrCrnt_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2OvrCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2OverCurrent' incorporates:
     *  Switch: '<S916>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2OverCurrent_Value(tmp_0);

    /* Gain: '<S920>/Gain' incorporates:
     *  Merge: '<Root>/Merge_130'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2OvrCrntFA_read'
     */
    VePMIR_b_LTPsvPump2OverCurrent_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2OvrCrntFA_write_IRV();

    /* Switch: '<S948>/Switch' incorporates:
     *  Constant: '<S949>/Calib'
     *  Constant: '<S950>/Calib'
     *  Merge: '<Root>/Merge_116'
     *  SignalConversion generated from: '<S109>/VePMIR_I_LT_PsvPmp2Crnt_read'
     */
    if (KePMIR_b_LTPsvPump2Crnt_SD)
    {
        rtb_Sum2_pb = KePMIR_I_LTPsvPump2Crnt_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPSVPump2Crnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_I_LTPsvPump2Current' incorporates:
     *  Switch: '<S948>/Switch'
     */
    (void)Rte_Write_VePMIR_I_LTPsvPump2Current_Value(rtb_Sum2_pb);

    /* Switch: '<S976>/Switch' incorporates:
     *  Constant: '<S978>/Calib'
     *  Constant: '<S979>/Calib'
     *  Merge: '<Root>/Merge_118'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2Deblock_read'
     */
    if (KePMIR_b_LTPsvPump2Deblock_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPump2Deblock_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2Deblock_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2Deblock' incorporates:
     *  Switch: '<S976>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2Deblock_Value(tmp_0);

    /* Gain: '<S980>/Gain' incorporates:
     *  Merge: '<Root>/Merge_117'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2DeblockFA_read'
     */
    VePMIR_b_LTPsvPump2Deblock_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2DeblockFA_write_IRV();

    /* Switch: '<S951>/Switch' incorporates:
     *  Constant: '<S953>/Calib'
     *  Constant: '<S954>/Calib'
     *  Merge: '<Root>/Merge_123'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2_LmpHM_read'
     */
    if (KePMIR_b_LTPsvPump2LmpHM_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPump2LmpHM_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2_LmpHM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2LmpHM' incorporates:
     *  Switch: '<S951>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2LmpHM_Value(tmp_0);

    /* Switch: '<S952>/Switch' incorporates:
     *  Constant: '<S956>/Calib'
     */
    if (KePMIR_b_LTPsvPump2LmpHM_FA_SD)
    {
        /* Switch: '<S952>/Switch' incorporates:
         *  Constant: '<S955>/Calib'
         */
        VePMIR_b_LTPsvPump2LmpHM_FA = KePMIR_b_LTPsvPump2LmpHM_FA_D;
    }
    else
    {
        /* Switch: '<S952>/Switch' incorporates:
         *  Merge: '<Root>/Merge_122'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2_LmpHMFA_read'
         */
        VePMIR_b_LTPsvPump2LmpHM_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2_LmpHMFA_write_IRV();
    }

    /* End of Switch: '<S952>/Switch' */

    /* Switch: '<S910>/Switch' incorporates:
     *  Constant: '<S912>/Calib'
     *  Constant: '<S913>/Calib'
     *  Merge: '<Root>/Merge_125'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPump2MntrRPM_read'
     */
    if (KePMIR_b_LTPsvPump2MntrRPM_SD)
    {
        tmp_3 = KePMIR_e_LTPsvPump2MntrRPM_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2MntrRPM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2MntrRPM' incorporates:
     *  Switch: '<S910>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2MntrRPM_Value(tmp_3);

    /* Switch: '<S911>/Switch' incorporates:
     *  Constant: '<S915>/Calib'
     */
    if (KePMIR_b_LTPsvPump2MntrRPM_FA_SD)
    {
        /* Switch: '<S911>/Switch' incorporates:
         *  Constant: '<S914>/Calib'
         */
        VePMIR_b_LTPsvPump2MntrRPM_FA = KePMIR_b_LTPsvPump2MntrRPM_FA_D;
    }
    else
    {
        /* Switch: '<S911>/Switch' incorporates:
         *  Merge: '<Root>/Merge_124'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2MntrRPMFA_read'
         */
        VePMIR_b_LTPsvPump2MntrRPM_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2MntrRPMFA_write_IRV();
    }

    /* End of Switch: '<S911>/Switch' */

    /* Switch: '<S966>/Switch' incorporates:
     *  Constant: '<S970>/Calib'
     *  Constant: '<S971>/Calib'
     *  Merge: '<Root>/Merge_138'
     *  SignalConversion generated from: '<S109>/VePMIR_T_LTPsvPump2Temp_read'
     */
    if (KePMIR_b_LTPsvPump2Temp_SD)
    {
        rtb_Sum2_pb = KePMIR_T_LTPsvPump2Temp_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2Temp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_LTPsvPump2Temp' incorporates:
     *  Switch: '<S966>/Switch'
     */
    (void)Rte_Write_VePMIR_T_LTPsvPump2Temp_Value(rtb_Sum2_pb);

    /* Switch: '<S967>/Switch' incorporates:
     *  Constant: '<S972>/Calib'
     *  Constant: '<S973>/Calib'
     *  Merge: '<Root>/Merge_137'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2TempFA_read'
     */
    if (KePMIR_b_LTPsvPump2Temp_FA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPump2Temp_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2TempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2Temp_FA' incorporates:
     *  Switch: '<S967>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2Temp_FA_Value(tmp_1);

    /* Switch: '<S965>/Switch' incorporates:
     *  Constant: '<S968>/Calib'
     *  Constant: '<S969>/Calib'
     *  Merge: '<Root>/Merge_136'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPump2TempSNA_read'
     */
    if (KePMIR_b_LTPsvPump2Temp_SNA_SD)
    {
        tmp_1 = KePMIR_b_LTPsvPump2Temp_SNA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPump2TempSNA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2Temp_SNA' incorporates:
     *  Switch: '<S965>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2Temp_SNA_Value(tmp_1);

    /* Switch: '<S891>/Switch' incorporates:
     *  Constant: '<S974>/Calib'
     */
    if (KePMIR_b_LTPsvPump2Ver_SD)
    {
        /* Switch: '<S891>/Switch' incorporates:
         *  Constant: '<S975>/Calib'
         */
        VePMIR_y_LTPsvPump2Ver = KePMIR_y_LTPsvPump2Ver_D;
    }
    else
    {
        /* Switch: '<S891>/Switch' incorporates:
         *  Merge: '<Root>/Merge_141'
         *  SignalConversion generated from: '<S109>/VePMIR_y_LTPsvPump2_Ver_read'
         */
        VePMIR_y_LTPsvPump2Ver =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPump2_Ver_INIT_write_IRV();
    }

    /* End of Switch: '<S891>/Switch' */

    /* Switch: '<S901>/Switch' incorporates:
     *  Constant: '<S903>/Calib'
     *  Constant: '<S904>/Calib'
     *  Merge: '<Root>/Merge_109'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTPsvPmp2AirPrsntErr_read'
     */
    if (KePMIR_b_LTPsvPump2AirPresntErr_SD)
    {
        tmp_0 = KePMIR_e_LTPsvPump2AirPresntErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTPsvPump2AirPresntErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2AirPresntErr' incorporates:
     *  Switch: '<S901>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2AirPresntErr_Value(tmp_0);

    /* Switch: '<S902>/Switch' incorporates:
     *  Constant: '<S906>/Calib'
     */
    if (KePMIR_b_LTPsvPump2AirPresntErr_FA_SD)
    {
        /* Switch: '<S902>/Switch' incorporates:
         *  Constant: '<S905>/Calib'
         */
        VePMIR_b_LTPsvPump2AirPresntErr_FA =
            KePMIR_b_LTPsvPump2AirPresntErr_FA_D;
    }
    else
    {
        /* Switch: '<S902>/Switch' incorporates:
         *  Merge: '<Root>/Merge_108'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTPsvPmp2AirPrsntErrFA_read'
         */
        VePMIR_b_LTPsvPump2AirPresntErr_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTPsvPmp2AirPrsntErrFA_write_IRV();
    }

    /* End of Switch: '<S902>/Switch' */

    /* Switch: '<S884>/Switch' incorporates:
     *  Constant: '<S921>/Calib'
     */
    if (KePMIR_b_LTPsvPump2ProdSuplrID_SD)
    {
        /* Switch: '<S884>/Switch' incorporates:
         *  Constant: '<S922>/Calib'
         */
        VePMIR_y_LTPsvPump2ProdSuplrID = KePMIR_y_LTPsvPump2ProdSuplrID_D;
    }
    else
    {
        /* Switch: '<S884>/Switch' incorporates:
         *  Merge: '<Root>/Merge_110'
         *  SignalConversion generated from: '<S109>/VePMIR_y_LTPsvPmp2ProdSuplr_ID_read'
         */
        VePMIR_y_LTPsvPump2ProdSuplrID =
            Rte_IrvRead_PMIR_MedTEH_LTPsvPmp2ProdSuplrID_INIT_write_IRV();
    }

    /* End of Switch: '<S884>/Switch' */

    /* Switch: '<S899>/Switch' incorporates:
     *  Constant: '<S1014>/Calib'
     *  Constant: '<S1015>/Calib'
     *  Merge: '<Root>/Merge_145'
     *  SignalConversion generated from: '<S109>/VePMIF_e_LTPP2_IO_CntrlSt_read'
     */
    if (KePMIR_b_LTPP2_DVC_FlwRt_IO_Cntl_SD)
    {
        tmp = KePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_D;
    }
    else
    {
        tmp = Rte_IrvRead_PMIR_MedTEH_LTPP2_DVC_IO_Pct_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl' incorporates:
     *  Switch: '<S899>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_Value(tmp);

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPump2ActSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTPsvPmp2_Pct_ActSpd'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPump2ActSpd_Value
        (rtb_VePMIR_Pct_LTPsvPumpActSpd);

    /* Switch: '<S957>/Switch' incorporates:
     *  Constant: '<S960>/Calib'
     *  Constant: '<S961>/Calib'
     *  Merge: '<Root>/Merge_140'
     *  SignalConversion generated from: '<S109>/VePMIR_Pct_LTPsvPump2RPMTgt_read'
     */
    if (KePMIR_b_LTPsvPmp2_TgtSpd_SD)
    {
        rtb_Sum2_pb = KePMIR_Pct_LTPsvPmp2_TgtSpd_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTPsvPmp2_TgtSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S957>/Switch' */

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPump2TgtSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTPsvPmp2_Pct_TgtSpd'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPump2TgtSpd_Value(rtb_Sum2_pb);

    /* Outport: '<Root>/VePMIR_n_LTPsvPump2ActSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTPsvPmp2_n_ActSpd'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPump2ActSpd_Value(rtb_Sum1_f);

    /* Outport: '<Root>/VePMIR_Pct_LTPP2MaxSpd' incorporates:
     *  Constant: '<S1005>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmp2MaxSpdPct'
     */
    (void)Rte_Write_VePMIR_Pct_LTPP2MaxSpd_Value(KePMIR_Pct_LT_PsvPmp2MaxSpd);

    /* Outport: '<Root>/VePMIR_n_LTPP2MaxSpd' incorporates:
     *  Constant: '<S1008>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmp2MaxSpdRPM'
     */
    (void)Rte_Write_VePMIR_n_LTPP2MaxSpd_Value(KePMIR_n_LT_PsvPmp2MaxSpd);

    /* Outport: '<Root>/VePMIR_Pct_LTPP2MinSpd' incorporates:
     *  Constant: '<S1006>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmp2MinSpdPct'
     */
    (void)Rte_Write_VePMIR_Pct_LTPP2MinSpd_Value(KePMIR_Pct_LT_PsvPmp2MinSpd);

    /* Outport: '<Root>/VePMIR_n_LTPP2MinSpd' incorporates:
     *  Constant: '<S1009>/Calib'
     *  SignalConversion generated from: '<S109>/LT_PsvPmp2MinSpdRPM'
     */
    (void)Rte_Write_VePMIR_n_LTPP2MinSpd_Value(KePMIR_n_LT_PsvPmp2MinSpd);

    /* Switch: '<S861>/Switch' incorporates:
     *  Constant: '<S863>/Calib'
     *  Constant: '<S864>/Calib'
     *  Merge: '<Root>/Merge_28'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LT_ActvPmpOT_read'
     */
    if (KePMIR_b_LTActvPumpOT_SD)
    {
        tmp_0 = KePMIR_e_LTActvPumpOT_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LT_ActvPmpOT_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpOT' incorporates:
     *  Switch: '<S861>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpOT_Value(tmp_0);

    /* Gain: '<S865>/Gain' incorporates:
     *  Merge: '<Root>/Merge_29'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LT_ActvPmpOTFA_read'
     */
    VePMIR_b_LTActvPumpOT_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LT_ActvPmpOTFA_write_IRV();

    /* Switch: '<S747>/Switch' incorporates:
     *  Constant: '<S844>/Calib'
     *  Constant: '<S845>/Calib'
     *  Merge: '<Root>/Merge_39'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpRespErr_read'
     */
    if (KePMIR_b_LTActvPumpRespErr_SD)
    {
        tmp_1 = KePMIR_b_LTActvPumpRespErr_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_LTActPumpRespErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTActvPumpRespErr' incorporates:
     *  Switch: '<S747>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpRespErr_Value(tmp_1);

    /* Switch: '<S743>/Switch' incorporates:
     *  Constant: '<S793>/Calib'
     *  Constant: '<S794>/Calib'
     *  Merge: '<Root>/Merge_27'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpNodeErr_read'
     */
    if (KePMIR_b_LTActvPumpNodeErr_SD)
    {
        tmp_2 = KePMIR_e_LTActvPumpNodeErr_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_PMIR_MedTEH_LTActPumpNodeErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpNodeErr' incorporates:
     *  Switch: '<S743>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpNodeErr_Value(tmp_2);

    /* Switch: '<S856>/Switch' incorporates:
     *  Constant: '<S859>/Calib'
     *  Constant: '<S860>/Calib'
     *  Merge: '<Root>/Merge_45'
     *  SignalConversion generated from: '<S109>/VePMIR_U_LTActPumpVlt_read'
     */
    if (KePMIR_b_LTActvPumpVlt_SD)
    {
        rtb_Sum2_pb = KePMIR_U_LTActvPumpVlt_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTActPumpVlt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_U_LTActvPumpVlt' incorporates:
     *  Switch: '<S856>/Switch'
     */
    (void)Rte_Write_VePMIR_U_LTActvPumpVlt_Value(rtb_Sum2_pb);

    /* Switch: '<S855>/Switch' incorporates:
     *  Constant: '<S857>/Calib'
     *  Constant: '<S858>/Calib'
     *  Merge: '<Root>/Merge_44'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpVltFA_read'
     */
    if (KePMIR_b_LTActvPumpVlt_FA_SD)
    {
        tmp_1 = KePMIR_b_LTActvPumpVlt_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpVltFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTActvPumpVlt_FA' incorporates:
     *  Switch: '<S855>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpVlt_FA_Value(tmp_1);

    /* Switch: '<S778>/Switch' incorporates:
     *  Constant: '<S783>/Calib'
     *  Constant: '<S784>/Calib'
     *  Merge: '<Root>/Merge_21'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpDryRun_read'
     */
    if (KePMIR_b_LTActvPumpDryRun_SD)
    {
        tmp_0 = KePMIR_e_LTActvPumpDryRun_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTActPumpDryRun_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpDryRun' incorporates:
     *  Switch: '<S778>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpDryRun_Value(tmp_0);

    /* Switch: '<S777>/Switch' incorporates:
     *  Constant: '<S781>/Calib'
     *  Constant: '<S782>/Calib'
     *  Merge: '<Root>/Merge_20'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpDryRunFA_read'
     */
    if (KePMIR_b_LTActvPumpDryRun_FA_SD)
    {
        tmp_1 = KePMIR_b_LTActvPumpDryRun_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpDryRunFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA' incorporates:
     *  Switch: '<S777>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpDryRun_FA_Value(tmp_1);

    /* Switch: '<S776>/Switch' incorporates:
     *  Constant: '<S779>/Calib'
     *  Constant: '<S780>/Calib'
     *  Merge: '<Root>/Merge_19'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpDryRunSNA_read'
     */
    if (KePMIR_b_LTActvPumpDryRun_SNA_SD)
    {
        tmp_1 = KePMIR_b_LTActvPumpDryRun_SNA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpDryRunSNA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTActvPumpDryRun_SNA' incorporates:
     *  Switch: '<S776>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpDryRun_SNA_Value(tmp_1);

    /* Switch: '<S740>/Switch' incorporates:
     *  Constant: '<S785>/Calib'
     *  Constant: '<S786>/Calib'
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpFailsafe_read'
     */
    if (KePMIR_b_LTActvPumpFailsafe_SD)
    {
        tmp_3 = KePMIR_e_LTActvPumpFailsafe_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTEH_LTActPumpFailsafe_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpFailsafe' incorporates:
     *  Switch: '<S740>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpFailsafe_Value(tmp_3);

    /* Switch: '<S757>/Switch' incorporates:
     *  Constant: '<S759>/Calib'
     *  Constant: '<S760>/Calib'
     *  Merge: '<Root>/Merge_12'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpSuppVltErr_read'
     */
    if (KePMIR_b_LTActvPumpSuppVltErr_SD)
    {
        tmp_0 = KePMIR_e_LTActvPumpSuppVltErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTActPumpSuppVltErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpSuppVltErr' incorporates:
     *  Switch: '<S757>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpSuppVltErr_Value(tmp_0);

    /* Gain: '<S758>/Gain' incorporates:
     *  Merge: '<Root>/Merge_11'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpSuppVltErrFA_read'
     */
    VePMIR_b_LTActvPumpSuppVltErr_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpSuppVltErrFA_write_IRV();

    /* Switch: '<S762>/Switch' incorporates:
     *  Constant: '<S764>/Calib'
     *  Constant: '<S765>/Calib'
     *  Merge: '<Root>/Merge_31'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpOvrCrnt_read'
     */
    if (KePMIR_b_LTActvPumpOvrCrnt_SD)
    {
        tmp_0 = KePMIR_e_LTActvPumpOvrCrnt_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTActPumpOvrCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpOverCurrent' incorporates:
     *  Switch: '<S762>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpOverCurrent_Value(tmp_0);

    /* Gain: '<S763>/Gain' incorporates:
     *  Merge: '<Root>/Merge_30'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpOvrCrntFA_read'
     */
    VePMIR_b_LTActvPumpOverCurrent_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpOvrCrntFA_write_IRV();

    /* Switch: '<S766>/Switch' incorporates:
     *  Constant: '<S768>/Calib'
     *  Constant: '<S769>/Calib'
     *  Merge: '<Root>/Merge_15'
     *  SignalConversion generated from: '<S109>/VePMIR_I_LTActPumpCrnt_read'
     */
    if (KePMIR_b_LTActvPumpCrnt_SD)
    {
        rtb_Sum2_pb = KePMIR_I_LTActvPumpCrnt_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTActPumpCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_I_LTActvPumpCurrent' incorporates:
     *  Switch: '<S766>/Switch'
     */
    (void)Rte_Write_VePMIR_I_LTActvPumpCurrent_Value(rtb_Sum2_pb);

    /* Gain: '<S770>/Gain' incorporates:
     *  Merge: '<Root>/Merge_16'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpCrntFA_read'
     */
    VePMIR_b_LTActvPumpCurrent_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpCrntFA_write_IRV();

    /* Switch: '<S771>/Switch' incorporates:
     *  Constant: '<S773>/Calib'
     *  Constant: '<S774>/Calib'
     *  Merge: '<Root>/Merge_17'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpDeblock_read'
     */
    if (KePMIR_b_LTActvPumpDeblock_SD)
    {
        tmp_0 = KePMIR_e_LTActvPumpDeblock_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTActPumpDeblock_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpDeblock' incorporates:
     *  Switch: '<S771>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpDeblock_Value(tmp_0);

    /* Gain: '<S775>/Gain' incorporates:
     *  Merge: '<Root>/Merge_18'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpDeblockFA_read'
     */
    VePMIR_b_LTActvPumpDeblock_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpDeblockFA_write_IRV();

    /* Switch: '<S847>/Switch' incorporates:
     *  Constant: '<S851>/Calib'
     *  Constant: '<S852>/Calib'
     *  Merge: '<Root>/Merge_41'
     *  SignalConversion generated from: '<S109>/VePMIR_T_LTActPumpTemp_read'
     */
    if (KePMIR_b_LTActvPumpTemp_SD)
    {
        rtb_Sum2_pb = KePMIR_T_LTActvPumpTemp_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTActPumpTemp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_LTActvPumpTemp' incorporates:
     *  Switch: '<S847>/Switch'
     */
    (void)Rte_Write_VePMIR_T_LTActvPumpTemp_Value(rtb_Sum2_pb);

    /* Switch: '<S848>/Switch' incorporates:
     *  Constant: '<S853>/Calib'
     *  Constant: '<S854>/Calib'
     *  Merge: '<Root>/Merge_42'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpTempFA_read'
     */
    if (KePMIR_b_LTActvPumpTemp_FA_SD)
    {
        tmp_1 = KePMIR_b_LTActvPumpTemp_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpTempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTActvPumpTemp_FA' incorporates:
     *  Switch: '<S848>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpTemp_FA_Value(tmp_1);

    /* Switch: '<S846>/Switch' incorporates:
     *  Constant: '<S849>/Calib'
     *  Constant: '<S850>/Calib'
     *  Merge: '<Root>/Merge_40'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpTempSNA_read'
     */
    if (KePMIR_b_LTActvPumpTemp_SNA_SD)
    {
        tmp_1 = KePMIR_b_LTActvPumpTemp_SNA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpTempSNA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_LTActvPumpTemp_SNA' incorporates:
     *  Switch: '<S846>/Switch'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpTemp_SNA_Value(tmp_1);

    /* Switch: '<S790>/Switch' incorporates:
     *  Constant: '<S791>/Calib'
     *  Constant: '<S792>/Calib'
     *  Merge: '<Root>/Merge_25'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpMntrRPM_read'
     */
    if (KePMIR_b_LTActvPumpMntrRPM_SD)
    {
        tmp_0 = KePMIR_e_LTActvPumpMntrRPM_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTActPumpMntrRPM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpMntrRPM' incorporates:
     *  Switch: '<S790>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpMntrRPM_Value(tmp_0);

    /* Switch: '<S787>/Switch' incorporates:
     *  Constant: '<S788>/Calib'
     *  Constant: '<S789>/Calib'
     *  Merge: '<Root>/Merge_24'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpLmpHM_read'
     */
    if (KePMIR_b_LTActvPumpLmpHM_SD)
    {
        tmp_0 = KePMIR_e_LTActvPumpLmpHM_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTActPumpLmpHM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpLmpHM' incorporates:
     *  Switch: '<S787>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpLmpHM_Value(tmp_0);

    /* Switch: '<S795>/Switch' incorporates:
     *  Constant: '<S797>/Calib'
     *  Constant: '<S798>/Calib'
     *  Merge: '<Root>/Merge_32'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpPstRnSt_read'
     */
    if (KePMIR_b_LTActvPumpPstRnSt_SD)
    {
        tmp_4 = KePMIR_e_LTActvPumpPstRnSt_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_PMIR_MedTEH_LTActPumpPstRnSt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTActvPumpPstRnSt' incorporates:
     *  Switch: '<S795>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpPstRnSt_Value(tmp_4);

    /* Gain: '<S799>/Gain' incorporates:
     *  Merge: '<Root>/Merge_33'
     *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpPstRnStFA_read'
     */
    VePMIR_b_LTActvPumpPstRnSt_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpPstRnStFA_write_IRV();

    /* Switch: '<S734>/Switch' incorporates:
     *  Constant: '<S754>/Calib'
     *  Constant: '<S755>/Calib'
     *  Merge: '<Root>/Merge_5'
     *  SignalConversion generated from: '<S109>/VePMIR_e_LTActPumpAirPrsntErr_read'
     */
    if (KePMIR_b_LTAP_AirPrsntErr_SD)
    {
        tmp_0 = KePMIR_e_LTAP_AirPrsntErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_LTActPumpAirPrsntErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_LTAP_AirPrsntErr' incorporates:
     *  Switch: '<S734>/Switch'
     */
    (void)Rte_Write_VePMIR_e_LTAP_AirPrsntErr_Value(tmp_0);

    /* Switch: '<S800>/Switch' incorporates:
     *  Constant: '<S810>/Calib'
     */
    if (KePMIR_b_LTActPump_ActSpd_SD)
    {
        /* Switch: '<S800>/Switch' incorporates:
         *  Constant: '<S807>/Calib'
         */
        rtb_Sum1_f = KePMIR_Pct_LTActPump_ActSpd_D;
    }
    else
    {
        /* Switch: '<S800>/Switch' incorporates:
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S109>/VePMIR_Pct_LTActPumpRPMAct_read'
         */
        rtb_Sum1_f = Rte_IrvRead_PMIR_MedTEH_LTActPumpActSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S800>/Switch' */

    /* Switch: '<S802>/Switch' incorporates:
     *  Constant: '<S817>/Calib'
     */
    if (KePMIR_b_LT_ActvPmpRPMAct_SNA_SD)
    {
        /* Switch: '<S802>/Switch' incorporates:
         *  Constant: '<S816>/Calib'
         */
        VePMIR_b_LTActPumpRPMAct_SNA_AD = KePMIR_b_LT_ActvPmpRPMAct_SNA_D;
    }
    else
    {
        /* Switch: '<S802>/Switch' incorporates:
         *  Merge: '<Root>/Merge_34'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpRPMActSNA_read'
         */
        VePMIR_b_LTActPumpRPMAct_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpRPMActSNA_write_IRV();
    }

    /* End of Switch: '<S802>/Switch' */

    /* Switch: '<S803>/Switch' incorporates:
     *  Constant: '<S819>/Calib'
     */
    if (KePMIR_b_LTActPumpActSpd_SNA_SD)
    {
        /* Switch: '<S803>/Switch' incorporates:
         *  Constant: '<S818>/Calib'
         */
        VePMIR_b_LTActPumpActSpd_SNA_AD = KePMIR_b_LTActPumpActSpd_SNA_D;
    }
    else
    {
        /* Switch: '<S803>/Switch' incorporates:
         *  Merge: '<Root>/Merge_3'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpRPMActPctSNA_read'
         */
        VePMIR_b_LTActPumpActSpd_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpRPMActPctSNA_write_IRV();
    }

    /* End of Switch: '<S803>/Switch' */

    /* Switch: '<S804>/Switch' incorporates:
     *  Constant: '<S821>/Calib'
     */
    if (KePMIR_b_LT_ActvPmpRPMAct_FA_SD)
    {
        /* Switch: '<S804>/Switch' incorporates:
         *  Constant: '<S820>/Calib'
         */
        VePMIR_b_LTActPumpRPMAct_FA_AD = KePMIR_b_LT_ActvPmpRPMAct_FA_D;
    }
    else
    {
        /* Switch: '<S804>/Switch' incorporates:
         *  Merge: '<Root>/Merge_35'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpRPMActFA_read'
         */
        VePMIR_b_LTActPumpRPMAct_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpRPMActFA_write_IRV();
    }

    /* End of Switch: '<S804>/Switch' */

    /* Switch: '<S805>/Switch' incorporates:
     *  Constant: '<S822>/Calib'
     */
    if (KePMIR_b_LTActPumpRPMAct_SD)
    {
        /* Switch: '<S805>/Switch' incorporates:
         *  Constant: '<S823>/Calib'
         */
        VePMIR_n_LTActPumpRPMAct_AD = KePMIR_n_LTActPumpRPMAct_D;
    }
    else
    {
        /* Switch: '<S805>/Switch' incorporates:
         *  Merge: '<Root>/Merge_36'
         *  SignalConversion generated from: '<S109>/VePMIR_n_LTActPumpRPMAct_read'
         */
        VePMIR_n_LTActPumpRPMAct_AD =
            Rte_IrvRead_PMIR_MedTEH_LTActPumpRPMAct_INIT_write_IRV();
    }

    /* End of Switch: '<S805>/Switch' */

    /* Switch: '<S745>/Switch' incorporates:
     *  Constant: '<S869>/Calib'
     *  Switch: '<S745>/Switch1'
     *  Switch: '<S745>/Switch2'
     */
    if (KePMIR_b_LTActPump_LDFType)
    {
        /* Switch: '<S806>/Switch1' incorporates:
         *  Constant: '<S808>/Calib'
         *  Constant: '<S809>/Calib'
         *  Logic: '<S800>/Logical'
         *  RelationalOperator: '<S800>/Comparison1'
         *  RelationalOperator: '<S800>/Comparison3'
         */
        if ((rtb_Sum1_f <= KePMIR_Pct_LTActPump_MaxSpdPct) && (rtb_Sum1_f >=
                KePMIR_Pct_LTActPump_MinSpdPct))
        {
            /* Sum: '<S800>/Sum3' incorporates:
             *  Constant: '<S811>/Calib'
             *  Constant: '<S812>/Calib'
             */
            rtb_VePMIR_Pct_LTPsvPumpActSpd = KePMIR_n_LTActPump_MaxSpdRPM -
                KePMIR_n_LTActPump_MinSpdRPM;

            /* Sum: '<S800>/Sum2' */
            rtb_Sum2_pb = KePMIR_Pct_LTActPump_MaxSpdPct -
                KePMIR_Pct_LTActPump_MinSpdPct;

            /* Outputs for Atomic SubSystem: '<S800>/Protected Division' */
            /* Switch: '<S813>/Switch1' incorporates:
             *  Constant: '<S813>/Constant Value'
             *  Constant: '<S813>/Constant Value1'
             *  Constant: '<S813>/Constant Value2'
             *  Constant: '<S813>/Constant Value3'
             *  Logic: '<S813>/AND'
             *  RelationalOperator: '<S813>/Greater Than or Equal '
             *  RelationalOperator: '<S813>/Greater Than or Equal 1'
             *  RelationalOperator: '<S813>/Not Equal'
             *  RelationalOperator: '<S813>/Not Equal1'
             *  Switch: '<S813>/Switch2'
             *  Switch: '<S813>/Switch3'
             */
            if ((rtb_VePMIR_Pct_LTPsvPumpActSpd != 0.0F) && (rtb_Sum2_pb != 0.0F))
            {
                /* Switch: '<S813>/Switch1' incorporates:
                 *  Product: '<S813>/Division'
                 */
                rtb_VePMIR_Pct_LTPsvPumpActSpd /= rtb_Sum2_pb;
            }
            else if (rtb_VePMIR_Pct_LTPsvPumpActSpd > 0.0F)
            {
                /* Switch: '<S813>/Switch2' incorporates:
                 *  Constant: '<S813>/MAXFLOAT'
                 *  Switch: '<S813>/Switch1'
                 */
                rtb_VePMIR_Pct_LTPsvPumpActSpd = 3.402823466E+38F;
            }
            else if (rtb_VePMIR_Pct_LTPsvPumpActSpd < 0.0F)
            {
                /* Switch: '<S813>/Switch3' incorporates:
                 *  Constant: '<S813>/MINFLOAT'
                 *  Switch: '<S813>/Switch1'
                 *  Switch: '<S813>/Switch2'
                 */
                rtb_VePMIR_Pct_LTPsvPumpActSpd = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S813>/Switch1' incorporates:
                 *  Constant: '<S813>/Constant Value4'
                 *  Switch: '<S813>/Switch2'
                 *  Switch: '<S813>/Switch3'
                 */
                rtb_VePMIR_Pct_LTPsvPumpActSpd = 0.0F;
            }

            /* End of Switch: '<S813>/Switch1' */
            /* End of Outputs for SubSystem: '<S800>/Protected Division' */

            /* Switch: '<S806>/Switch1' incorporates:
             *  Constant: '<S812>/Calib'
             *  Product: '<S800>/Product1'
             *  Product: '<S800>/Product2'
             *  Sum: '<S800>/Sum'
             *  Sum: '<S800>/Sum4'
             */
            rtb_VePMIR_Pct_LTPsvPumpActSpd = (KePMIR_n_LTActPump_MinSpdRPM -
                (rtb_VePMIR_Pct_LTPsvPumpActSpd * KePMIR_Pct_LTActPump_MinSpdPct))
                + (rtb_Sum1_f * rtb_VePMIR_Pct_LTPsvPumpActSpd);
        }
        else
        {
            /* Switch: '<S806>/Switch1' incorporates:
             *  Constant: '<S800>/Constant Value3'
             */
            rtb_VePMIR_Pct_LTPsvPumpActSpd = 0.0F;
        }

        /* End of Switch: '<S806>/Switch1' */

        /* Outport: '<Root>/VePMIR_n_LTActvPumpRPMAct' */
        (void)Rte_Write_VePMIR_n_LTActvPumpRPMAct_Value
            (rtb_VePMIR_Pct_LTPsvPumpActSpd);

        /* Switch: '<S801>/Switch' incorporates:
         *  Constant: '<S814>/Calib'
         *  Constant: '<S815>/Calib'
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpRPMActPctFA_read'
         */
        if (KePMIR_b_LTActPumpActSpd_FA_SD)
        {
            tmp_1 = KePMIR_b_LTActPumpActSpd_FA_D;
        }
        else
        {
            tmp_1 =
                Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpRPMActPctFA_write_IRV();
        }

        /* End of Switch: '<S801>/Switch' */

        /* Outport: '<Root>/VePMIR_b_LTActvPumpRPMAct_FA' */
        (void)Rte_Write_VePMIR_b_LTActvPumpRPMAct_FA_Value(tmp_1);

        /* Outport: '<Root>/VePMIR_b_LTActvPumpRPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_LTActvPumpRPMAct_SNA_Value
            (VePMIR_b_LTActPumpActSpd_SNA_AD);
    }
    else
    {
        /* Outport: '<Root>/VePMIR_n_LTActvPumpRPMAct' */
        (void)Rte_Write_VePMIR_n_LTActvPumpRPMAct_Value
            (VePMIR_n_LTActPumpRPMAct_AD);

        /* Outport: '<Root>/VePMIR_b_LTActvPumpRPMAct_FA' */
        (void)Rte_Write_VePMIR_b_LTActvPumpRPMAct_FA_Value
            (VePMIR_b_LTActPumpRPMAct_FA_AD);

        /* Outport: '<Root>/VePMIR_b_LTActvPumpRPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_LTActvPumpRPMAct_SNA_Value
            (VePMIR_b_LTActPumpRPMAct_SNA_AD);
    }

    /* End of Switch: '<S745>/Switch' */

    /* Switch: '<S824>/Switch' incorporates:
     *  Constant: '<S834>/Calib'
     */
    if (KePMIR_b_LTActPump_TgtSpd_SD)
    {
        /* Switch: '<S824>/Switch' incorporates:
         *  Constant: '<S833>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd = KePMIR_Pct_LTActPump_TgtSpd_D;
    }
    else
    {
        /* Switch: '<S824>/Switch' incorporates:
         *  Merge: '<Root>/Merge_14'
         *  SignalConversion generated from: '<S109>/VePMIR_Pct_LTActPumpRPMTgt_read'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd =
            Rte_IrvRead_PMIR_MedTEH_LTActPumpTgtSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S824>/Switch' */

    /* Switch: '<S829>/Switch' incorporates:
     *  Constant: '<S842>/Calib'
     */
    if (KePMIR_b_LT_ActPmpRPM_Tgt_SD)
    {
        /* Switch: '<S829>/Switch' incorporates:
         *  Constant: '<S843>/Calib'
         */
        VePMIR_n_LT_ActvPumpRPM_Tgt_AD = KePMIR_n_LT_ActPmpRPM_Tgt_D;
    }
    else
    {
        /* Switch: '<S829>/Switch' incorporates:
         *  Merge: '<Root>/Merge_38'
         *  SignalConversion generated from: '<S109>/VePMIR_n_LTActPumpRPMTgt_read'
         */
        VePMIR_n_LT_ActvPumpRPM_Tgt_AD =
            Rte_IrvRead_PMIR_MedTEH_LTActPumpPmpRPMTgt_INIT_write_IRV();
    }

    /* End of Switch: '<S829>/Switch' */

    /* Switch: '<S826>/Switch' incorporates:
     *  Constant: '<S869>/Calib'
     */
    if (KePMIR_b_LTActPump_LDFType)
    {
        /* Switch: '<S830>/Switch1' incorporates:
         *  Constant: '<S831>/Calib'
         *  Constant: '<S832>/Calib'
         *  Logic: '<S824>/Logical'
         *  RelationalOperator: '<S824>/Comparison1'
         *  RelationalOperator: '<S824>/Comparison3'
         */
        if ((rtb_VePMIR_Pct_LTPsvPumpActSpd <= KePMIR_Pct_LTActPump_MaxSpdPct) &&
            (rtb_VePMIR_Pct_LTPsvPumpActSpd >= KePMIR_Pct_LTActPump_MinSpdPct))
        {
            /* Sum: '<S824>/Sum3' incorporates:
             *  Constant: '<S835>/Calib'
             *  Constant: '<S836>/Calib'
             */
            rtb_Sum2_pb = KePMIR_n_LTActPump_MaxSpdRPM -
                KePMIR_n_LTActPump_MinSpdRPM;

            /* Sum: '<S824>/Sum2' */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd = KePMIR_Pct_LTActPump_MaxSpdPct -
                KePMIR_Pct_LTActPump_MinSpdPct;

            /* Outputs for Atomic SubSystem: '<S824>/Protected Division' */
            /* Switch: '<S837>/Switch1' incorporates:
             *  Constant: '<S837>/Constant Value'
             *  Constant: '<S837>/Constant Value1'
             *  Constant: '<S837>/Constant Value2'
             *  Constant: '<S837>/Constant Value3'
             *  Logic: '<S837>/AND'
             *  RelationalOperator: '<S837>/Greater Than or Equal '
             *  RelationalOperator: '<S837>/Greater Than or Equal 1'
             *  RelationalOperator: '<S837>/Not Equal'
             *  RelationalOperator: '<S837>/Not Equal1'
             *  Switch: '<S837>/Switch2'
             *  Switch: '<S837>/Switch3'
             */
            if ((rtb_Sum2_pb != 0.0F) && (rtb_VePMIR_Pct_LTPsvPump2TgtSpd !=
                    0.0F))
            {
                /* Switch: '<S837>/Switch1' incorporates:
                 *  Product: '<S837>/Division'
                 */
                rtb_Sum2_pb /= rtb_VePMIR_Pct_LTPsvPump2TgtSpd;
            }
            else if (rtb_Sum2_pb > 0.0F)
            {
                /* Switch: '<S837>/Switch2' incorporates:
                 *  Constant: '<S837>/MAXFLOAT'
                 *  Switch: '<S837>/Switch1'
                 */
                rtb_Sum2_pb = 3.402823466E+38F;
            }
            else if (rtb_Sum2_pb < 0.0F)
            {
                /* Switch: '<S837>/Switch3' incorporates:
                 *  Constant: '<S837>/MINFLOAT'
                 *  Switch: '<S837>/Switch1'
                 *  Switch: '<S837>/Switch2'
                 */
                rtb_Sum2_pb = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S837>/Switch1' incorporates:
                 *  Constant: '<S837>/Constant Value4'
                 *  Switch: '<S837>/Switch2'
                 *  Switch: '<S837>/Switch3'
                 */
                rtb_Sum2_pb = 0.0F;
            }

            /* End of Switch: '<S837>/Switch1' */
            /* End of Outputs for SubSystem: '<S824>/Protected Division' */

            /* Switch: '<S830>/Switch1' incorporates:
             *  Constant: '<S836>/Calib'
             *  Product: '<S824>/Product1'
             *  Product: '<S824>/Product2'
             *  Sum: '<S824>/Sum'
             *  Sum: '<S824>/Sum4'
             */
            rtb_Sum2_pb = (KePMIR_n_LTActPump_MinSpdRPM - (rtb_Sum2_pb *
                            KePMIR_Pct_LTActPump_MinSpdPct)) +
                (rtb_VePMIR_Pct_LTPsvPumpActSpd * rtb_Sum2_pb);
        }
        else
        {
            /* Switch: '<S830>/Switch1' incorporates:
             *  Constant: '<S824>/Constant Value3'
             */
            rtb_Sum2_pb = 0.0F;
        }

        /* End of Switch: '<S830>/Switch1' */

        /* Outport: '<Root>/VePMIR_n_LTActvPumpRPMTgt' */
        (void)Rte_Write_VePMIR_n_LTActvPumpRPMTgt_Value(rtb_Sum2_pb);
    }
    else
    {
        /* Outport: '<Root>/VePMIR_n_LTActvPumpRPMTgt' */
        (void)Rte_Write_VePMIR_n_LTActvPumpRPMTgt_Value
            (VePMIR_n_LT_ActvPumpRPM_Tgt_AD);
    }

    /* End of Switch: '<S826>/Switch' */

    /* Switch: '<S827>/Switch' incorporates:
     *  Constant: '<S841>/Calib'
     */
    if (KePMIR_b_LT_ActvPmpRPMTgt_FA_SD)
    {
        /* Switch: '<S827>/Switch' incorporates:
         *  Constant: '<S840>/Calib'
         */
        VePMIR_b_LTActvPumpRPMTgt_AD = KePMIR_b_LT_ActvPmpRPMTgt_FA_D;
    }
    else
    {
        /* Switch: '<S827>/Switch' incorporates:
         *  Merge: '<Root>/Merge_37'
         *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpRPMTgtFA_read'
         */
        VePMIR_b_LTActvPumpRPMTgt_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpRPMTgtFA_write_IRV();
    }

    /* End of Switch: '<S827>/Switch' */

    /* Switch: '<S828>/Switch1' incorporates:
     *  Constant: '<S869>/Calib'
     */
    if (KePMIR_b_LTActPump_LDFType)
    {
        /* Switch: '<S825>/Switch' incorporates:
         *  Constant: '<S839>/Calib'
         */
        if (KePMIR_b_LTActPumpTgtSpd_FA_SD)
        {
            /* Switch: '<S828>/Switch1' incorporates:
             *  Constant: '<S838>/Calib'
             */
            VePMIR_b_LTActvPumpRPMTgt_FA = KePMIR_b_LTActPumpTgtSpd_FA_D;
        }
        else
        {
            /* Switch: '<S828>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_13'
             *  SignalConversion generated from: '<S109>/VePMIR_b_LTActPumpRPMTgtPctFA_read'
             */
            VePMIR_b_LTActvPumpRPMTgt_FA =
                Rte_IrvRead_PMIR_MedTEH_VePMIR_b_LTActPumpRPMTgtPctFA_write_IRV();
        }

        /* End of Switch: '<S825>/Switch' */
    }
    else
    {
        /* Switch: '<S828>/Switch1' */
        VePMIR_b_LTActvPumpRPMTgt_FA = VePMIR_b_LTActvPumpRPMTgt_AD;
    }

    /* End of Switch: '<S828>/Switch1' */

    /* Switch: '<S752>/Switch' incorporates:
     *  Constant: '<S868>/Calib'
     *  Constant: '<S872>/Calib'
     *  Switch: '<S752>/Switch1'
     */
    if (KePMIR_b_LTAP_DVC_FlwRt_IO_Cntl_SD)
    {
        /* Outport: '<Root>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl' incorporates:
         *  Constant: '<S873>/Calib'
         */
        (void)Rte_Write_VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Value
            (KePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_D);
    }
    else
    {
        if (KePMIR_b_LTActPmp_EOLToolType)
        {
            /* Switch: '<S752>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_8'
             *  SignalConversion generated from: '<S109>/VePMIF_e_LTAP_IO_CntrlSt_read'
             */
            tmp = Rte_IrvRead_PMIR_MedTEH_LTAP_DVC_IO_Pct_INIT_write_IRV();
        }
        else
        {
            /* Switch: '<S752>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_6'
             *  SignalConversion generated from: '<S109>/VePMIF_e_LT_ActvPmpCmd_IO_CntrlSt_read'
             */
            tmp = Rte_IrvRead_PMIR_MedTEH_LTAP_DVC_FlwRt_IO_Cntl_INIT_write_IRV();
        }

        /* Outport: '<Root>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl' incorporates:
         *  Switch: '<S752>/Switch1'
         */
        (void)Rte_Write_VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Value(tmp);
    }

    /* End of Switch: '<S752>/Switch' */

    /* SignalConversion generated from: '<S109>/VePMIF_Pct_LTAP_Cmd_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_LTAP_DVC_Pct_INIT_write_IRV();

    /* Switch: '<S753>/Switch' incorporates:
     *  Constant: '<S868>/Calib'
     *  Constant: '<S874>/Calib'
     *  Switch: '<S753>/Switch1'
     */
    if (KePMIR_b_LTAP_DVC_FlwRtRq_SD)
    {
        /* Outport: '<Root>/VePMIR_n_LTAP_DVC_RPM_PEClFlwRt' incorporates:
         *  Constant: '<S875>/Calib'
         */
        (void)Rte_Write_VePMIR_n_LTAP_DVC_RPM_PEClFlwRt_Value
            (KePMIR_n_LTAP_DVC_FlwRtRq_D);
    }
    else
    {
        if (KePMIR_b_LTActPmp_EOLToolType)
        {
            /* Switch: '<S877>/Switch1' incorporates:
             *  Constant: '<S866>/Calib'
             *  Constant: '<S867>/Calib'
             *  Logic: '<S876>/Logical'
             *  RelationalOperator: '<S876>/Comparison1'
             *  RelationalOperator: '<S876>/Comparison3'
             *  Switch: '<S753>/Switch1'
             */
            if ((rtb_Sum2_pb <= KePMIR_Pct_LTActPump_MaxSpdPct) && (rtb_Sum2_pb >=
                 KePMIR_Pct_LTActPump_MinSpdPct))
            {
                /* Sum: '<S876>/Sum3' incorporates:
                 *  Constant: '<S870>/Calib'
                 *  Constant: '<S871>/Calib'
                 */
                rtb_VePMIR_Pct_LTPsvPump2TgtSpd = KePMIR_n_LTActPump_MaxSpdRPM -
                    KePMIR_n_LTActPump_MinSpdRPM;

                /* Sum: '<S876>/Sum2' */
                rtb_VePMIR_Pct_LTPsvPumpTgtSpd = KePMIR_Pct_LTActPump_MaxSpdPct
                    - KePMIR_Pct_LTActPump_MinSpdPct;

                /* Outputs for Atomic SubSystem: '<S876>/Protected Division' */
                /* Switch: '<S878>/Switch1' incorporates:
                 *  Constant: '<S878>/Constant Value'
                 *  Constant: '<S878>/Constant Value1'
                 *  Constant: '<S878>/Constant Value2'
                 *  Constant: '<S878>/Constant Value3'
                 *  Logic: '<S878>/AND'
                 *  RelationalOperator: '<S878>/Greater Than or Equal '
                 *  RelationalOperator: '<S878>/Greater Than or Equal 1'
                 *  RelationalOperator: '<S878>/Not Equal'
                 *  RelationalOperator: '<S878>/Not Equal1'
                 *  Switch: '<S878>/Switch2'
                 *  Switch: '<S878>/Switch3'
                 */
                if ((rtb_VePMIR_Pct_LTPsvPump2TgtSpd != 0.0F) &&
                        (rtb_VePMIR_Pct_LTPsvPumpTgtSpd != 0.0F))
                {
                    /* Switch: '<S878>/Switch1' incorporates:
                     *  Product: '<S878>/Division'
                     */
                    rtb_VePMIR_Pct_LTPsvPump2TgtSpd /=
                        rtb_VePMIR_Pct_LTPsvPumpTgtSpd;
                }
                else if (rtb_VePMIR_Pct_LTPsvPump2TgtSpd > 0.0F)
                {
                    /* Switch: '<S878>/Switch2' incorporates:
                     *  Constant: '<S878>/MAXFLOAT'
                     *  Switch: '<S878>/Switch1'
                     */
                    rtb_VePMIR_Pct_LTPsvPump2TgtSpd = 3.402823466E+38F;
                }
                else if (rtb_VePMIR_Pct_LTPsvPump2TgtSpd < 0.0F)
                {
                    /* Switch: '<S878>/Switch3' incorporates:
                     *  Constant: '<S878>/MINFLOAT'
                     *  Switch: '<S878>/Switch1'
                     *  Switch: '<S878>/Switch2'
                     */
                    rtb_VePMIR_Pct_LTPsvPump2TgtSpd = -3.402823466E+38F;
                }
                else
                {
                    /* Switch: '<S878>/Switch1' incorporates:
                     *  Constant: '<S878>/Constant Value4'
                     *  Switch: '<S878>/Switch2'
                     *  Switch: '<S878>/Switch3'
                     */
                    rtb_VePMIR_Pct_LTPsvPump2TgtSpd = 0.0F;
                }

                /* End of Switch: '<S878>/Switch1' */
                /* End of Outputs for SubSystem: '<S876>/Protected Division' */

                /* Switch: '<S753>/Switch1' incorporates:
                 *  Constant: '<S871>/Calib'
                 *  Product: '<S876>/Product1'
                 *  Product: '<S876>/Product2'
                 *  Sum: '<S876>/Sum'
                 *  Sum: '<S876>/Sum4'
                 *  Switch: '<S877>/Switch1'
                 */
                rtb_Sum2_pb = (KePMIR_n_LTActPump_MinSpdRPM -
                               (rtb_VePMIR_Pct_LTPsvPump2TgtSpd *
                                KePMIR_Pct_LTActPump_MinSpdPct)) + (rtb_Sum2_pb *
                    rtb_VePMIR_Pct_LTPsvPump2TgtSpd);
            }
            else
            {
                /* Switch: '<S753>/Switch1' incorporates:
                 *  Constant: '<S876>/Constant Value3'
                 *  Switch: '<S877>/Switch1'
                 */
                rtb_Sum2_pb = 0.0F;
            }

            /* End of Switch: '<S877>/Switch1' */
        }
        else
        {
            /* Switch: '<S753>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_9'
             *  SignalConversion generated from: '<S109>/VePMIF_n_LT_ActvPmpCmd_read'
             */
            rtb_Sum2_pb =
                Rte_IrvRead_PMIR_MedTEH_LTAP_DVC_RPM_BatClFlwRt_INIT_write_IRV();
        }

        /* Outport: '<Root>/VePMIR_n_LTAP_DVC_RPM_PEClFlwRt' */
        (void)Rte_Write_VePMIR_n_LTAP_DVC_RPM_PEClFlwRt_Value(rtb_Sum2_pb);
    }

    /* End of Switch: '<S753>/Switch' */

    /* Outport: '<Root>/VePMIR_Pct_LTActvPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTAP_ActSpd_Pct'
     */
    (void)Rte_Write_VePMIR_Pct_LTActvPumpActSpd_Value(rtb_Sum1_f);

    /* Outport: '<Root>/VePMIR_Pct_LTActvPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S109>/LTAP_TgtSpd_Pct'
     */
    (void)Rte_Write_VePMIR_Pct_LTActvPumpTgtSpd_Value
        (rtb_VePMIR_Pct_LTPsvPumpActSpd);

    /* Switch: '<S659>/Switch' incorporates:
     *  Constant: '<S665>/Calib'
     */
    if (KePMIR_b_HT_AuxPump_TgtSpd_SD)
    {
        /* Switch: '<S659>/Switch' incorporates:
         *  Constant: '<S664>/Calib'
         */
        rtb_Sum1_f = KePMIR_Pct_HT_AuxPump_TgtSpd_D;
    }
    else
    {
        /* Switch: '<S659>/Switch' incorporates:
         *  Merge: '<Root>/Merge_104'
         *  SignalConversion generated from: '<S109>/VePMIR_Pct_HTAuxPumpRPMTgt_read'
         */
        rtb_Sum1_f = Rte_IrvRead_PMIR_MedTEH_HTAuxPump_TgtSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S659>/Switch' */

    /* Switch: '<S663>/Switch1' incorporates:
     *  Constant: '<S712>/Calib'
     *  Constant: '<S713>/Calib'
     *  Logic: '<S659>/Logical1'
     *  RelationalOperator: '<S659>/Comparison2'
     *  RelationalOperator: '<S659>/Comparison3'
     */
    if ((rtb_Sum1_f <= KePMIR_Pct_HTAuxPump_MaxSpd) && (rtb_Sum1_f >=
            KePMIR_Pct_HTAuxPump_MinSpd))
    {
        /* Sum: '<S659>/Sum1' incorporates:
         *  Constant: '<S716>/Calib'
         *  Constant: '<S717>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd = KePMIR_n_HTAuxPump_MaxSpd -
            KePMIR_n_HTAuxPump_MinSpd;

        /* Sum: '<S659>/Sum2' */
        rtb_Sum2_pb = KePMIR_Pct_HTAuxPump_MaxSpd - KePMIR_Pct_HTAuxPump_MinSpd;

        /* Outputs for Atomic SubSystem: '<S659>/Protected Division1' */
        /* Switch: '<S666>/Switch1' incorporates:
         *  Constant: '<S666>/Constant Value'
         *  Constant: '<S666>/Constant Value1'
         *  Constant: '<S666>/Constant Value2'
         *  Constant: '<S666>/Constant Value3'
         *  Logic: '<S666>/AND'
         *  RelationalOperator: '<S666>/Greater Than or Equal '
         *  RelationalOperator: '<S666>/Greater Than or Equal 1'
         *  RelationalOperator: '<S666>/Not Equal'
         *  RelationalOperator: '<S666>/Not Equal1'
         *  Switch: '<S666>/Switch2'
         *  Switch: '<S666>/Switch3'
         */
        if ((rtb_VePMIR_Pct_LTPsvPumpActSpd != 0.0F) && (rtb_Sum2_pb != 0.0F))
        {
            /* Switch: '<S666>/Switch1' incorporates:
             *  Product: '<S666>/Division'
             */
            rtb_VePMIR_Pct_LTPsvPumpActSpd /= rtb_Sum2_pb;
        }
        else if (rtb_VePMIR_Pct_LTPsvPumpActSpd > 0.0F)
        {
            /* Switch: '<S666>/Switch2' incorporates:
             *  Constant: '<S666>/MAXFLOAT'
             *  Switch: '<S666>/Switch1'
             */
            rtb_VePMIR_Pct_LTPsvPumpActSpd = 3.402823466E+38F;
        }
        else if (rtb_VePMIR_Pct_LTPsvPumpActSpd < 0.0F)
        {
            /* Switch: '<S666>/Switch3' incorporates:
             *  Constant: '<S666>/MINFLOAT'
             *  Switch: '<S666>/Switch1'
             *  Switch: '<S666>/Switch2'
             */
            rtb_VePMIR_Pct_LTPsvPumpActSpd = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S666>/Switch1' incorporates:
             *  Constant: '<S666>/Constant Value4'
             *  Switch: '<S666>/Switch2'
             *  Switch: '<S666>/Switch3'
             */
            rtb_VePMIR_Pct_LTPsvPumpActSpd = 0.0F;
        }

        /* End of Switch: '<S666>/Switch1' */
        /* End of Outputs for SubSystem: '<S659>/Protected Division1' */

        /* Switch: '<S663>/Switch1' incorporates:
         *  Constant: '<S716>/Calib'
         *  Product: '<S659>/Product1'
         *  Product: '<S659>/Product2'
         *  Sum: '<S659>/Sum'
         *  Sum: '<S659>/Sum3'
         */
        VePMIR_n_HTAuxPump_TgtSpd_AD = (KePMIR_n_HTAuxPump_MaxSpd -
            (rtb_VePMIR_Pct_LTPsvPumpActSpd * KePMIR_Pct_HTAuxPump_MaxSpd)) +
            (rtb_Sum1_f * rtb_VePMIR_Pct_LTPsvPumpActSpd);
    }
    else
    {
        /* Switch: '<S663>/Switch1' incorporates:
         *  Constant: '<S659>/Constant Value3'
         */
        VePMIR_n_HTAuxPump_TgtSpd_AD = 0.0F;
    }

    /* End of Switch: '<S663>/Switch1' */

    /* Switch: '<S660>/Switch' incorporates:
     *  Constant: '<S667>/Calib'
     */
    if (KePMIR_b_HTAuxPumpRPMTgt_SD)
    {
        /* Switch: '<S660>/Switch' incorporates:
         *  Constant: '<S668>/Calib'
         */
        VePMIR_n_HTAuxPumpRPMTgt_AD = KePMIR_n_HTAuxPumpRPMTgt_D;
    }
    else
    {
        /* Switch: '<S660>/Switch' incorporates:
         *  Merge: '<Root>/Merge_98'
         *  SignalConversion generated from: '<S109>/VePMIR_n_HTAuxPumpPmpRPMTgt_read'
         */
        VePMIR_n_HTAuxPumpRPMTgt_AD =
            Rte_IrvRead_PMIR_MedTEH_HTAuxPmpRPMTgt_INIT_write_IRV();
    }

    /* End of Switch: '<S660>/Switch' */

    /* Switch: '<S661>/Switch' incorporates:
     *  Constant: '<S670>/Calib'
     */
    if (KePMIR_b_HTAuxPumpRPMTgt_FA_SD)
    {
        /* Switch: '<S661>/Switch' incorporates:
         *  Constant: '<S669>/Calib'
         */
        VePMIR_b_HTAuxPumpRPMTgt_FA_AD = KePMIR_b_HTAuxPumpRPMTgt_FA_D;
    }
    else
    {
        /* Switch: '<S661>/Switch' incorporates:
         *  Merge: '<Root>/Merge_97'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpRPMTgtFA_read'
         */
        VePMIR_b_HTAuxPumpRPMTgt_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpRPMTgtFA_write_IRV();
    }

    /* End of Switch: '<S661>/Switch' */

    /* Switch: '<S662>/Switch' incorporates:
     *  Constant: '<S672>/Calib'
     */
    if (KePMIR_b_HT_AuxPump_TgtSpd_FA_SD)
    {
        /* Switch: '<S662>/Switch' incorporates:
         *  Constant: '<S671>/Calib'
         */
        VePMIR_b_HTAuxPumpTgtSpd_FA_AD = KePMIR_b_HT_AuxPump_TgtSpd_FA_D;
    }
    else
    {
        /* Switch: '<S662>/Switch' incorporates:
         *  Merge: '<Root>/Merge_103'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpRPMTgtPctFA_read'
         */
        VePMIR_b_HTAuxPumpTgtSpd_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpRPMTgtPctFA_write_IRV();
    }

    /* End of Switch: '<S662>/Switch' */

    /* Switch: '<S589>/Switch' incorporates:
     *  Constant: '<S715>/Calib'
     *  Switch: '<S589>/Switch1'
     */
    if (KePMIR_b_HTAP_LdfType)
    {
        /* Switch: '<S589>/Switch' */
        VePMIR_b_HTAuxPumpRPMTgt_FA = VePMIR_b_HTAuxPumpTgtSpd_FA_AD;

        /* Outport: '<Root>/VePMIR_n_HTAuxPumpRPMTgt' */
        (void)Rte_Write_VePMIR_n_HTAuxPumpRPMTgt_Value
            (VePMIR_n_HTAuxPump_TgtSpd_AD);
    }
    else
    {
        /* Switch: '<S589>/Switch' */
        VePMIR_b_HTAuxPumpRPMTgt_FA = VePMIR_b_HTAuxPumpRPMTgt_FA_AD;

        /* Outport: '<Root>/VePMIR_n_HTAuxPumpRPMTgt' */
        (void)Rte_Write_VePMIR_n_HTAuxPumpRPMTgt_Value
            (VePMIR_n_HTAuxPumpRPMTgt_AD);
    }

    /* End of Switch: '<S589>/Switch' */

    /* Switch: '<S673>/Switch' incorporates:
     *  Constant: '<S681>/Calib'
     */
    if (KePMIR_b_HT_AuxPump_ActSpd_SD)
    {
        /* Switch: '<S673>/Switch' incorporates:
         *  Constant: '<S680>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd = KePMIR_Pct_HT_AuxPump_ActSpd_D;
    }
    else
    {
        /* Switch: '<S673>/Switch' incorporates:
         *  Merge: '<Root>/Merge_76'
         *  SignalConversion generated from: '<S109>/VePMIR_Pct_HTAuxPumpRPMAct_read'
         */
        rtb_VePMIR_Pct_LTPsvPumpActSpd =
            Rte_IrvRead_PMIR_MedTEH_HTAuxPump_ActSpd_INIT_write_IRV();
    }

    /* End of Switch: '<S673>/Switch' */

    /* Switch: '<S679>/Switch1' incorporates:
     *  Constant: '<S712>/Calib'
     *  Constant: '<S713>/Calib'
     *  Logic: '<S673>/Logical1'
     *  RelationalOperator: '<S673>/Comparison2'
     *  RelationalOperator: '<S673>/Comparison3'
     */
    if ((rtb_VePMIR_Pct_LTPsvPumpActSpd <= KePMIR_Pct_HTAuxPump_MaxSpd) &&
            (rtb_VePMIR_Pct_LTPsvPumpActSpd >= KePMIR_Pct_HTAuxPump_MinSpd))
    {
        /* Sum: '<S673>/Sum1' incorporates:
         *  Constant: '<S716>/Calib'
         *  Constant: '<S717>/Calib'
         */
        rtb_Sum2_pb = KePMIR_n_HTAuxPump_MaxSpd - KePMIR_n_HTAuxPump_MinSpd;

        /* Sum: '<S673>/Sum2' */
        rtb_VePMIR_Pct_LTPsvPump2TgtSpd = KePMIR_Pct_HTAuxPump_MaxSpd -
            KePMIR_Pct_HTAuxPump_MinSpd;

        /* Outputs for Atomic SubSystem: '<S673>/Protected Division1' */
        /* Switch: '<S682>/Switch1' incorporates:
         *  Constant: '<S682>/Constant Value'
         *  Constant: '<S682>/Constant Value1'
         *  Constant: '<S682>/Constant Value2'
         *  Constant: '<S682>/Constant Value3'
         *  Logic: '<S682>/AND'
         *  RelationalOperator: '<S682>/Greater Than or Equal '
         *  RelationalOperator: '<S682>/Greater Than or Equal 1'
         *  RelationalOperator: '<S682>/Not Equal'
         *  RelationalOperator: '<S682>/Not Equal1'
         *  Switch: '<S682>/Switch2'
         *  Switch: '<S682>/Switch3'
         */
        if ((rtb_Sum2_pb != 0.0F) && (rtb_VePMIR_Pct_LTPsvPump2TgtSpd != 0.0F))
        {
            /* Switch: '<S682>/Switch1' incorporates:
             *  Product: '<S682>/Division'
             */
            rtb_Sum2_pb /= rtb_VePMIR_Pct_LTPsvPump2TgtSpd;
        }
        else if (rtb_Sum2_pb > 0.0F)
        {
            /* Switch: '<S682>/Switch2' incorporates:
             *  Constant: '<S682>/MAXFLOAT'
             *  Switch: '<S682>/Switch1'
             */
            rtb_Sum2_pb = 3.402823466E+38F;
        }
        else if (rtb_Sum2_pb < 0.0F)
        {
            /* Switch: '<S682>/Switch3' incorporates:
             *  Constant: '<S682>/MINFLOAT'
             *  Switch: '<S682>/Switch1'
             *  Switch: '<S682>/Switch2'
             */
            rtb_Sum2_pb = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S682>/Switch1' incorporates:
             *  Constant: '<S682>/Constant Value4'
             *  Switch: '<S682>/Switch2'
             *  Switch: '<S682>/Switch3'
             */
            rtb_Sum2_pb = 0.0F;
        }

        /* End of Switch: '<S682>/Switch1' */
        /* End of Outputs for SubSystem: '<S673>/Protected Division1' */

        /* Switch: '<S679>/Switch1' incorporates:
         *  Constant: '<S716>/Calib'
         *  Product: '<S673>/Product1'
         *  Product: '<S673>/Product2'
         *  Sum: '<S673>/Sum'
         *  Sum: '<S673>/Sum3'
         */
        VePMIR_n_HTAuxPump_ActSpd_AD = (KePMIR_n_HTAuxPump_MaxSpd - (rtb_Sum2_pb
            * KePMIR_Pct_HTAuxPump_MaxSpd)) + (rtb_VePMIR_Pct_LTPsvPumpActSpd *
            rtb_Sum2_pb);
    }
    else
    {
        /* Switch: '<S679>/Switch1' incorporates:
         *  Constant: '<S673>/Constant Value3'
         */
        VePMIR_n_HTAuxPump_ActSpd_AD = 0.0F;
    }

    /* End of Switch: '<S679>/Switch1' */

    /* Switch: '<S674>/Switch' incorporates:
     *  Constant: '<S683>/Calib'
     */
    if (KePMIR_b_HT_AuxPumpRPMAct_SD)
    {
        /* Switch: '<S674>/Switch' incorporates:
         *  Constant: '<S684>/Calib'
         */
        VePMIR_n_HTAuxPumpRPMAct_AD = KePMIR_n_HT_AuxPumpRPMAct_D;
    }
    else
    {
        /* Switch: '<S674>/Switch' incorporates:
         *  Merge: '<Root>/Merge_95'
         *  SignalConversion generated from: '<S109>/VePMIR_n_HTAuxPumpRPMAct_read'
         */
        VePMIR_n_HTAuxPumpRPMAct_AD =
            Rte_IrvRead_PMIR_MedTEH_HTAuxPumpRPMAct_INIT_write_IRV();
    }

    /* End of Switch: '<S674>/Switch' */

    /* Switch: '<S675>/Switch' incorporates:
     *  Constant: '<S686>/Calib'
     */
    if (KePMIR_b_HT_AuxPumpRPMAct_FA_SD)
    {
        /* Switch: '<S675>/Switch' incorporates:
         *  Constant: '<S685>/Calib'
         */
        VePMIR_b_HT_AuxPumpRPMAct_FA_AD = KePMIR_b_HT_AuxPumpRPMAct_FA_D;
    }
    else
    {
        /* Switch: '<S675>/Switch' incorporates:
         *  Merge: '<Root>/Merge_94'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpRPMActFA_read'
         */
        VePMIR_b_HT_AuxPumpRPMAct_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpRPMActFA_write_IRV();
    }

    /* End of Switch: '<S675>/Switch' */

    /* Switch: '<S676>/Switch' incorporates:
     *  Constant: '<S688>/Calib'
     */
    if (KePMIR_b_HT_AuxPump_ActSpd_FA_SD)
    {
        /* Switch: '<S676>/Switch' incorporates:
         *  Constant: '<S687>/Calib'
         */
        VePMIR_b_HTAuxPump_ActSpd_FA_AD = KePMIR_b_HT_AuxPump_ActSpd_FA_D;
    }
    else
    {
        /* Switch: '<S676>/Switch' incorporates:
         *  Merge: '<Root>/Merge_75'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpRPMActPctFA_read'
         */
        VePMIR_b_HTAuxPump_ActSpd_FA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpRPMActPctFA_write_IRV();
    }

    /* End of Switch: '<S676>/Switch' */

    /* Switch: '<S677>/Switch' incorporates:
     *  Constant: '<S690>/Calib'
     */
    if (KePMIR_b_HT_AuxPumpRPMAct_SNA_SD)
    {
        /* Switch: '<S677>/Switch' incorporates:
         *  Constant: '<S689>/Calib'
         */
        VePMIR_b_HT_AuxPumpRPMAct_SNA_AD = KePMIR_b_HT_AuxPumpRPMAct_SNA_D;
    }
    else
    {
        /* Switch: '<S677>/Switch' incorporates:
         *  Merge: '<Root>/Merge_96'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpRPMActSNA_read'
         */
        VePMIR_b_HT_AuxPumpRPMAct_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpRPMActSNA_write_IRV();
    }

    /* End of Switch: '<S677>/Switch' */

    /* Switch: '<S678>/Switch' incorporates:
     *  Constant: '<S692>/Calib'
     */
    if (KePMIR_b_HT_AuxPump_ActSpd_SNA_SD)
    {
        /* Switch: '<S678>/Switch' incorporates:
         *  Constant: '<S691>/Calib'
         */
        VePMIR_b_HTAuxPump_ActSpd_SNA_AD = KePMIR_b_HT_AuxPump_ActSpd_SNA_D;
    }
    else
    {
        /* Switch: '<S678>/Switch' incorporates:
         *  Merge: '<Root>/Merge_74'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpRPMActPctSNA_read'
         */
        VePMIR_b_HTAuxPump_ActSpd_SNA_AD =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpRPMActPctSNA_write_IRV();
    }

    /* End of Switch: '<S678>/Switch' */

    /* Switch: '<S590>/Switch' incorporates:
     *  Constant: '<S715>/Calib'
     *  Switch: '<S590>/Switch1'
     *  Switch: '<S590>/Switch2'
     */
    if (KePMIR_b_HTAP_LdfType)
    {
        /* Outport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_FA' */
        (void)Rte_Write_VePMIR_b_HTAuxPumpRPMAct_FA_Value
            (VePMIR_b_HTAuxPump_ActSpd_FA_AD);

        /* Outport: '<Root>/VePMIR_n_HTAuxPumpRPMAct' */
        (void)Rte_Write_VePMIR_n_HTAuxPumpRPMAct_Value
            (VePMIR_n_HTAuxPump_ActSpd_AD);

        /* Outport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_HTAuxPumpRPMAct_SNA_Value
            (VePMIR_b_HTAuxPump_ActSpd_SNA_AD);
    }
    else
    {
        /* Outport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_FA' */
        (void)Rte_Write_VePMIR_b_HTAuxPumpRPMAct_FA_Value
            (VePMIR_b_HT_AuxPumpRPMAct_FA_AD);

        /* Outport: '<Root>/VePMIR_n_HTAuxPumpRPMAct' */
        (void)Rte_Write_VePMIR_n_HTAuxPumpRPMAct_Value
            (VePMIR_n_HTAuxPumpRPMAct_AD);

        /* Outport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_SNA' */
        (void)Rte_Write_VePMIR_b_HTAuxPumpRPMAct_SNA_Value
            (VePMIR_b_HT_AuxPumpRPMAct_SNA_AD);
    }

    /* End of Switch: '<S590>/Switch' */

    /* Switch: '<S598>/Switch' incorporates:
     *  Constant: '<S714>/Calib'
     *  Constant: '<S726>/Calib'
     *  Switch: '<S598>/Switch1'
     */
    if (KePMIR_b_HTAP_DVC_FlwRt_IO_Cntl_SD)
    {
        /* Outport: '<Root>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl' incorporates:
         *  Constant: '<S727>/Calib'
         */
        (void)Rte_Write_VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Value
            (KePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_D);
    }
    else
    {
        if (KePMIR_b_HTAP_EOLToolType)
        {
            /* Switch: '<S598>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_67'
             *  SignalConversion generated from: '<S109>/VePMIF_e_HTAP_IO_CntrlSt_read'
             */
            tmp = Rte_IrvRead_PMIR_MedTEH_HTAP_DVC_IO_Pct_INIT_write_IRV();
        }
        else
        {
            /* Switch: '<S598>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_65'
             *  SignalConversion generated from: '<S109>/VePMIF_e_HT_AuxPmpCmd_IO_CntrlSt_read'
             */
            tmp = Rte_IrvRead_PMIR_MedTEH_HTAP_DVC_FlwRt_IO_Cntl_INIT_write_IRV();
        }

        /* Outport: '<Root>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl' incorporates:
         *  Switch: '<S598>/Switch1'
         */
        (void)Rte_Write_VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Value(tmp);
    }

    /* End of Switch: '<S598>/Switch' */

    /* SignalConversion generated from: '<S109>/VePMIF_Pct_HTAP_Cmd_read' incorporates:
     *  Merge: '<Root>/Merge_66'
     */
    rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_HTAP_DVC_Pct_INIT_write_IRV();

    /* Switch: '<S731>/Switch1' incorporates:
     *  Constant: '<S712>/Calib'
     *  Constant: '<S713>/Calib'
     *  Logic: '<S730>/Logical1'
     *  RelationalOperator: '<S730>/Comparison2'
     *  RelationalOperator: '<S730>/Comparison3'
     */
    if ((rtb_Sum2_pb <= KePMIR_Pct_HTAuxPump_MaxSpd) && (rtb_Sum2_pb >=
            KePMIR_Pct_HTAuxPump_MinSpd))
    {
        /* Sum: '<S730>/Sum1' incorporates:
         *  Constant: '<S716>/Calib'
         *  Constant: '<S717>/Calib'
         */
        rtb_VePMIR_Pct_LTPsvPump2TgtSpd = KePMIR_n_HTAuxPump_MaxSpd -
            KePMIR_n_HTAuxPump_MinSpd;

        /* Sum: '<S730>/Sum2' */
        rtb_VePMIR_Pct_LTPsvPumpTgtSpd = KePMIR_Pct_HTAuxPump_MaxSpd -
            KePMIR_Pct_HTAuxPump_MinSpd;

        /* Outputs for Atomic SubSystem: '<S730>/Protected Division1' */
        /* Switch: '<S732>/Switch1' incorporates:
         *  Constant: '<S732>/Constant Value'
         *  Constant: '<S732>/Constant Value1'
         *  Constant: '<S732>/Constant Value2'
         *  Constant: '<S732>/Constant Value3'
         *  Logic: '<S732>/AND'
         *  RelationalOperator: '<S732>/Greater Than or Equal '
         *  RelationalOperator: '<S732>/Greater Than or Equal 1'
         *  RelationalOperator: '<S732>/Not Equal'
         *  RelationalOperator: '<S732>/Not Equal1'
         *  Switch: '<S732>/Switch2'
         *  Switch: '<S732>/Switch3'
         */
        if ((rtb_VePMIR_Pct_LTPsvPump2TgtSpd != 0.0F) &&
                (rtb_VePMIR_Pct_LTPsvPumpTgtSpd != 0.0F))
        {
            /* Switch: '<S732>/Switch1' incorporates:
             *  Product: '<S732>/Division'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd /= rtb_VePMIR_Pct_LTPsvPumpTgtSpd;
        }
        else if (rtb_VePMIR_Pct_LTPsvPump2TgtSpd > 0.0F)
        {
            /* Switch: '<S732>/Switch2' incorporates:
             *  Constant: '<S732>/MAXFLOAT'
             *  Switch: '<S732>/Switch1'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd = 3.402823466E+38F;
        }
        else if (rtb_VePMIR_Pct_LTPsvPump2TgtSpd < 0.0F)
        {
            /* Switch: '<S732>/Switch3' incorporates:
             *  Constant: '<S732>/MINFLOAT'
             *  Switch: '<S732>/Switch1'
             *  Switch: '<S732>/Switch2'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S732>/Switch1' incorporates:
             *  Constant: '<S732>/Constant Value4'
             *  Switch: '<S732>/Switch2'
             *  Switch: '<S732>/Switch3'
             */
            rtb_VePMIR_Pct_LTPsvPump2TgtSpd = 0.0F;
        }

        /* End of Switch: '<S732>/Switch1' */
        /* End of Outputs for SubSystem: '<S730>/Protected Division1' */

        /* Switch: '<S731>/Switch1' incorporates:
         *  Constant: '<S716>/Calib'
         *  Product: '<S730>/Product1'
         *  Product: '<S730>/Product2'
         *  Sum: '<S730>/Sum'
         *  Sum: '<S730>/Sum3'
         */
        VePMIR_n_HTAP_DVC_Cnvrtd = (KePMIR_n_HTAuxPump_MaxSpd -
            (rtb_VePMIR_Pct_LTPsvPump2TgtSpd * KePMIR_Pct_HTAuxPump_MaxSpd)) +
            (rtb_Sum2_pb * rtb_VePMIR_Pct_LTPsvPump2TgtSpd);
    }
    else
    {
        /* Switch: '<S731>/Switch1' incorporates:
         *  Constant: '<S730>/Constant Value3'
         */
        VePMIR_n_HTAP_DVC_Cnvrtd = 0.0F;
    }

    /* End of Switch: '<S731>/Switch1' */

    /* Switch: '<S599>/Switch' incorporates:
     *  Constant: '<S714>/Calib'
     *  Constant: '<S728>/Calib'
     *  Switch: '<S599>/Switch1'
     */
    if (KePMIR_b_HTAP_DVC_FlwRtRq_SD)
    {
        /* Outport: '<Root>/VePMIR_n_HTAP_DVC_RPM_PEClFlwRt' incorporates:
         *  Constant: '<S729>/Calib'
         */
        (void)Rte_Write_VePMIR_n_HTAP_DVC_RPM_PEClFlwRt_Value
            (KePMIR_n_HTAP_DVC_FlwRtRq_D);
    }
    else
    {
        if (KePMIR_b_HTAP_EOLToolType)
        {
            /* Switch: '<S599>/Switch1' */
            rtb_Sum2_pb = VePMIR_n_HTAP_DVC_Cnvrtd;
        }
        else
        {
            /* Switch: '<S599>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_64'
             *  SignalConversion generated from: '<S109>/VePMIF_n_HT_AuxPmpCmd_read'
             */
            rtb_Sum2_pb =
                Rte_IrvRead_PMIR_MedTEH_HTAP_DVC_RPM_BatClFlwRt_INIT_write_IRV();
        }

        /* Outport: '<Root>/VePMIR_n_HTAP_DVC_RPM_PEClFlwRt' */
        (void)Rte_Write_VePMIR_n_HTAP_DVC_RPM_PEClFlwRt_Value(rtb_Sum2_pb);
    }

    /* End of Switch: '<S599>/Switch' */

    /* Switch: '<S609>/Switch' incorporates:
     *  Constant: '<S611>/Calib'
     *  Constant: '<S612>/Calib'
     *  Merge: '<Root>/Merge_88'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HT_AuxPmpOT_read'
     */
    if (KePMIR_b_HTAuxPumpOT_SD)
    {
        tmp_0 = KePMIR_e_HTAuxPumpOT_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_HTAuxPmpOT_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpOT' incorporates:
     *  Switch: '<S609>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpOT_Value(tmp_0);

    /* Gain: '<S613>/Gain' incorporates:
     *  Merge: '<Root>/Merge_87'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HT_AuxPmpOTFA_read'
     */
    VePMIR_b_HTAuxPumpOT_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HT_AuxPmpOTFA_write_IRV();

    /* Switch: '<S587>/Switch' incorporates:
     *  Constant: '<S651>/Calib'
     *  Constant: '<S652>/Calib'
     *  Merge: '<Root>/Merge_99'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpRespErr_read'
     */
    if (KePMIR_b_HTAuxPumpRespErr_SD)
    {
        tmp_1 = KePMIR_b_HTAuxPumpRespErr_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpRespErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpRespErr' incorporates:
     *  Switch: '<S587>/Switch'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpRespErr_Value(tmp_1);

    /* Switch: '<S646>/Switch' incorporates:
     *  Constant: '<S648>/Calib'
     *  Constant: '<S649>/Calib'
     *  Merge: '<Root>/Merge_73'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPumpNodeErr_read'
     */
    if (KePMIR_b_HTAuxPumpNodeErr_SD)
    {
        tmp_2 = KePMIR_e_HTAuxPumpNodeErr_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpNodeErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpNodeErr' incorporates:
     *  Switch: '<S646>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpNodeErr_Value(tmp_2);

    /* Gain: '<S650>/Gain' incorporates:
     *  Merge: '<Root>/Merge_72'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpNodeErrFA_read'
     */
    VePMIR_b_HTAuxPumpNodeError_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpNodeErrFA_write_IRV();

    /* Switch: '<S706>/Switch' incorporates:
     *  Constant: '<S708>/Calib'
     *  Constant: '<S709>/Calib'
     *  Merge: '<Root>/Merge_107'
     *  SignalConversion generated from: '<S109>/VePMIR_U_HT_AuxPmpVltg_read'
     */
    if (KePMIR_b_HTAuxPumpVltg_SD)
    {
        rtb_Sum2_pb = KePMIR_U_HTAuxPumpVltg_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpVlt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_U_HTAuxPumpVltg' incorporates:
     *  Switch: '<S706>/Switch'
     */
    (void)Rte_Write_VePMIR_U_HTAuxPumpVltg_Value(rtb_Sum2_pb);

    /* Switch: '<S707>/Switch' incorporates:
     *  Constant: '<S710>/Calib'
     *  Constant: '<S711>/Calib'
     *  Merge: '<Root>/Merge_106'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HT_AuxPmpVltgFA_read'
     */
    if (KePMIR_b_HTAuxPumpVltg_FA_SD)
    {
        tmp_1 = KePMIR_b_HTAuxPumpVltg_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HT_AuxPmpVltgFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpVltg_FA' incorporates:
     *  Switch: '<S707>/Switch'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpVltg_FA_Value(tmp_1);

    /* Switch: '<S653>/Switch' incorporates:
     *  Constant: '<S655>/Calib'
     *  Constant: '<S656>/Calib'
     *  Merge: '<Root>/Merge_81'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPumpDryRun_read'
     */
    if (KePMIR_b_HTAuxPumpDryRun_SD)
    {
        tmp_0 = KePMIR_e_HTAuxPumpDryRun_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpDryRun_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpDryRun' incorporates:
     *  Switch: '<S653>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpDryRun_Value(tmp_0);

    /* Switch: '<S654>/Switch' incorporates:
     *  Constant: '<S657>/Calib'
     *  Constant: '<S658>/Calib'
     *  Merge: '<Root>/Merge_80'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpDryRunFA_read'
     */
    if (KePMIR_b_HTAuxPumpDryRun_FA_SD)
    {
        tmp_1 = KePMIR_b_HTAuxPumpDryRun_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpDryRunFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpDryRun_FA' incorporates:
     *  Switch: '<S654>/Switch'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpDryRun_FA_Value(tmp_1);

    /* Switch: '<S606>/Switch' incorporates:
     *  Constant: '<S607>/Calib'
     *  Constant: '<S608>/Calib'
     *  Merge: '<Root>/Merge_82'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPumpFailsafe_read'
     */
    if (KePMIR_b_HTAuxPumpFailsafe_SD)
    {
        tmp_3 = KePMIR_e_HTAuxPumpFailsafe_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpFailsafe_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpFailsafe' incorporates:
     *  Switch: '<S606>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpFailsafe_Value(tmp_3);

    /* Switch: '<S641>/Switch' incorporates:
     *  Constant: '<S643>/Calib'
     *  Constant: '<S644>/Calib'
     *  Merge: '<Root>/Merge_71'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPumpSuppVltErr_read'
     */
    if (KePMIR_b_HTAuxPumpSuppVltErr_SD)
    {
        tmp_0 = KePMIR_e_HTAuxPumpSuppVltErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpSuppVltErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpSuppVltErr' incorporates:
     *  Switch: '<S641>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpSuppVltErr_Value(tmp_0);

    /* Gain: '<S645>/Gain' incorporates:
     *  Merge: '<Root>/Merge_70'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpSuppVltErrFA_read'
     */
    VePMIR_b_HTAuxPumpSuppVltErr_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpSuppVltErrFA_write_IRV();

    /* Switch: '<S693>/Switch' incorporates:
     *  Constant: '<S695>/Calib'
     *  Constant: '<S696>/Calib'
     *  Merge: '<Root>/Merge_90'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPumpOvrCrnt_read'
     */
    if (KePMIR_b_HTAuxPumpOvrCrnt_SD)
    {
        tmp_0 = KePMIR_e_HTAuxPumpOvrCrnt_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpOvrCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpOverCurrent' incorporates:
     *  Switch: '<S693>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpOverCurrent_Value(tmp_0);

    /* Gain: '<S697>/Gain' incorporates:
     *  Merge: '<Root>/Merge_89'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpOvrCrntFA_read'
     */
    VePMIR_b_HTAuxPumpOverCurrent_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpOvrCrntFA_write_IRV();

    /* Switch: '<S698>/Switch' incorporates:
     *  Constant: '<S699>/Calib'
     *  Constant: '<S700>/Calib'
     *  Merge: '<Root>/Merge_77'
     *  SignalConversion generated from: '<S109>/VePMIR_I_HT_AuxPmpCrnt_read'
     */
    if (KePMIR_b_HTAuxPumpCrnt_SD)
    {
        rtb_Sum2_pb = KePMIR_I_HTAuxPumpCrnt_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_I_HTAuxPumpCurrent' incorporates:
     *  Switch: '<S698>/Switch'
     */
    (void)Rte_Write_VePMIR_I_HTAuxPumpCurrent_Value(rtb_Sum2_pb);

    /* Switch: '<S701>/Switch' incorporates:
     *  Constant: '<S703>/Calib'
     *  Constant: '<S704>/Calib'
     *  Merge: '<Root>/Merge_79'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPumpDeblock_read'
     */
    if (KePMIR_b_HTAuxPumpDeblock_SD)
    {
        tmp_0 = KePMIR_e_HTAuxPumpDeblock_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpDeblock_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpDeblock' incorporates:
     *  Switch: '<S701>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpDeblock_Value(tmp_0);

    /* Gain: '<S705>/Gain' incorporates:
     *  Merge: '<Root>/Merge_78'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPumpDeblockFA_read'
     */
    VePMIR_b_HTAuxPumpDeblock_FA =
        Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPumpDeblockFA_write_IRV();

    /* Switch: '<S614>/Switch' incorporates:
     *  Constant: '<S616>/Calib'
     *  Constant: '<S617>/Calib'
     *  Merge: '<Root>/Merge_86'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HT_AuxPmpMntrRPM_read'
     */
    if (KePMIR_b_HTAuxPumpMntrRPM_SD)
    {
        tmp_3 = KePMIR_e_HTAuxPumpMntrRPM_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_PMIR_MedTEH_HT_AuxPmpMntrRPM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM' incorporates:
     *  Switch: '<S614>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpMntrRPM_Value(tmp_3);

    /* Switch: '<S615>/Switch' incorporates:
     *  Constant: '<S618>/Calib'
     *  Constant: '<S619>/Calib'
     *  Merge: '<Root>/Merge_85'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HT_AuxPmpMntrRPMFA_read'
     */
    if (KePMIR_b_HTAuxPumpMntrRPM_FA_SD)
    {
        tmp_1 = KePMIR_b_HTAuxPumpMntrRPM_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HT_AuxPmpMntrRPMFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpMntrRPM_FA' incorporates:
     *  Switch: '<S615>/Switch'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpMntrRPM_FA_Value(tmp_1);

    /* Switch: '<S620>/Switch' incorporates:
     *  Constant: '<S622>/Calib'
     *  Constant: '<S623>/Calib'
     *  Merge: '<Root>/Merge_84'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPump_LmpHM_read'
     */
    if (KePMIR_b_HTAuxPumpLmpHM_SD)
    {
        tmp_0 = KePMIR_e_HTAuxPumpLmpHM_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_HTAuxPump_LmpHM_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpLmpHM' incorporates:
     *  Switch: '<S620>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpLmpHM_Value(tmp_0);

    /* Switch: '<S621>/Switch' incorporates:
     *  Constant: '<S625>/Calib'
     */
    if (KePMIR_b_HTAuxPumpLmpHM_FA_SD)
    {
        /* Switch: '<S621>/Switch' incorporates:
         *  Constant: '<S624>/Calib'
         */
        VePMIR_b_HTAuxPumpLmpHM_FA = KePMIR_b_HTAuxPumpLmpHM_FA_D;
    }
    else
    {
        /* Switch: '<S621>/Switch' incorporates:
         *  Merge: '<Root>/Merge_83'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPump_LmpHMFA_read'
         */
        VePMIR_b_HTAuxPumpLmpHM_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPump_LmpHMFA_write_IRV();
    }

    /* End of Switch: '<S621>/Switch' */

    /* Switch: '<S626>/Switch' incorporates:
     *  Constant: '<S628>/Calib'
     *  Constant: '<S629>/Calib'
     *  Merge: '<Root>/Merge_93'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HT_AuxPmp_PstRnSt_read'
     */
    if (KePMIR_b_HTAuxPumpPstRnSt_SD)
    {
        tmp_4 = KePMIR_e_HTAuxPumpPstRnSt_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_PMIR_MedTEH_HT_AuxPmp_PstRnSt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpPstRnSt' incorporates:
     *  Switch: '<S626>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpPstRnSt_Value(tmp_4);

    /* Switch: '<S627>/Switch' incorporates:
     *  Constant: '<S631>/Calib'
     */
    if (KePMIR_b_HTAuxPumpPstRnSt_FA_SD)
    {
        /* Switch: '<S627>/Switch' incorporates:
         *  Constant: '<S630>/Calib'
         */
        VePMIR_b_HTAuxPumpPstRnSt_FA = KePMIR_b_HTAuxPumpPstRnSt_FA_D;
    }
    else
    {
        /* Switch: '<S627>/Switch' incorporates:
         *  Merge: '<Root>/Merge_92'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HT_AuxPmp_PstRnStFA_read'
         */
        VePMIR_b_HTAuxPumpPstRnSt_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HT_AuxPmp_PstRnStFA_write_IRV();
    }

    /* End of Switch: '<S627>/Switch' */

    /* Switch: '<S633>/Switch' incorporates:
     *  Constant: '<S637>/Calib'
     *  Constant: '<S638>/Calib'
     *  Merge: '<Root>/Merge_101'
     *  SignalConversion generated from: '<S109>/VePMIR_T_HT_AuxPmpTemp_read'
     */
    if (KePMIR_b_HTAuxPumpTemp_SD)
    {
        rtb_Sum2_pb = KePMIR_T_HTAuxPumpTemp_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_HT_AuxPmpTemp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_HTAuxPumpTemp' incorporates:
     *  Switch: '<S633>/Switch'
     */
    (void)Rte_Write_VePMIR_T_HTAuxPumpTemp_Value(rtb_Sum2_pb);

    /* Switch: '<S634>/Switch' incorporates:
     *  Constant: '<S639>/Calib'
     *  Constant: '<S640>/Calib'
     *  Merge: '<Root>/Merge_100'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HT_AuxPmpTempFA_read'
     */
    if (KePMIR_b_HTAuxPumpTemp_FA_SD)
    {
        tmp_1 = KePMIR_b_HTAuxPumpTemp_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HT_AuxPmpTempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpTemp_FA' incorporates:
     *  Switch: '<S634>/Switch'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpTemp_FA_Value(tmp_1);

    /* Switch: '<S632>/Switch' incorporates:
     *  Constant: '<S635>/Calib'
     *  Constant: '<S636>/Calib'
     *  Merge: '<Root>/Merge_102'
     *  SignalConversion generated from: '<S109>/VePMIR_b_HT_AuxPmpTempSNA_read'
     */
    if (KePMIR_b_HTAuxPumpTemp_SNA_SD)
    {
        tmp_1 = KePMIR_b_HTAuxPumpTemp_SNA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HT_AuxPmpTempSNA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpTemp_SNA' incorporates:
     *  Switch: '<S632>/Switch'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpTemp_SNA_Value(tmp_1);

    /* Switch: '<S597>/Switch' incorporates:
     *  Constant: '<S724>/Calib'
     */
    if (KePMIR_b_HTAuxPumpVer_SD)
    {
        /* Switch: '<S597>/Switch' incorporates:
         *  Constant: '<S725>/Calib'
         */
        VePMIR_y_HTAuxPumpVer = KePMIR_y_HTAuxPumpVer_D;
    }
    else
    {
        /* Switch: '<S597>/Switch' incorporates:
         *  Merge: '<Root>/Merge_105'
         *  SignalConversion generated from: '<S109>/VePMIR_y_HT_AuxPmp_Ver_read'
         */
        VePMIR_y_HTAuxPumpVer =
            Rte_IrvRead_PMIR_MedTEH_HT_AuxPmp_Ver_INIT_write_IRV();
    }

    /* End of Switch: '<S597>/Switch' */

    /* Switch: '<S600>/Switch' incorporates:
     *  Constant: '<S602>/Calib'
     *  Constant: '<S603>/Calib'
     *  Merge: '<Root>/Merge_69'
     *  SignalConversion generated from: '<S109>/VePMIR_e_HTAuxPmpAirPrsntErr_read'
     */
    if (KePMIR_b_HTAuxPumpAirPresntErr_SD)
    {
        tmp_0 = KePMIR_e_HTAuxPumpAirPresntErr_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_PMIR_MedTEH_HTAuxPumpAirPresntErr_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpAirPresntErr' incorporates:
     *  Switch: '<S600>/Switch'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpAirPresntErr_Value(tmp_0);

    /* Switch: '<S601>/Switch' incorporates:
     *  Constant: '<S605>/Calib'
     */
    if (KePMIR_b_HTAuxPumpAirPresntErr_FA_SD)
    {
        /* Switch: '<S601>/Switch' incorporates:
         *  Constant: '<S604>/Calib'
         */
        VePMIR_b_HTAuxPumpAirPresntErr_FA = KePMIR_b_HTAuxPumpAirPresntErr_FA_D;
    }
    else
    {
        /* Switch: '<S601>/Switch' incorporates:
         *  Merge: '<Root>/Merge_68'
         *  SignalConversion generated from: '<S109>/VePMIR_b_HTAuxPmpAirPrsntErrFA_read'
         */
        VePMIR_b_HTAuxPumpAirPresntErr_FA =
            Rte_IrvRead_PMIR_MedTEH_VePMIR_b_HTAuxPmpAirPrsntErrFA_write_IRV();
    }

    /* End of Switch: '<S601>/Switch' */

    /* Switch: '<S596>/Switch' incorporates:
     *  Constant: '<S722>/Calib'
     */
    if (KePMIR_b_HTAuxPump_ProdSuplrID_SD)
    {
        /* Switch: '<S596>/Switch' incorporates:
         *  Constant: '<S723>/Calib'
         */
        VePMIR_y_HTAuxPump_ProdSuplrID = KePMIR_y_HTAuxPump_ProdSuplrID_D;
    }
    else
    {
        /* Switch: '<S596>/Switch' incorporates:
         *  Merge: '<Root>/Merge_91'
         *  SignalConversion generated from: '<S109>/VePMIR_y_HTAuxPmpProdSuplr_ID_read'
         */
        VePMIR_y_HTAuxPump_ProdSuplrID =
            Rte_IrvRead_PMIR_MedTEH_HTAuxPumpProdSuplrID_INIT_write_IRV();
    }

    /* End of Switch: '<S596>/Switch' */

    /* Outport: '<Root>/VePMIR_Pct_HTAuxPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S109>/HTAP_ActSpd_Pct'
     */
    (void)Rte_Write_VePMIR_Pct_HTAuxPumpActSpd_Value
        (rtb_VePMIR_Pct_LTPsvPumpActSpd);

    /* Outport: '<Root>/VePMIR_Pct_HTAuxPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S109>/HTAP_TgtSpd_Pct'
     */
    (void)Rte_Write_VePMIR_Pct_HTAuxPumpTgtSpd_Value(rtb_Sum1_f);

    /* Outport: '<Root>/VePMIR_Pct_HTAPMaxSpd' incorporates:
     *  Constant: '<S712>/Calib'
     *  SignalConversion generated from: '<S109>/HT_AuxPmpMaxSpdPct'
     */
    (void)Rte_Write_VePMIR_Pct_HTAPMaxSpd_Value(KePMIR_Pct_HTAuxPump_MaxSpd);

    /* Outport: '<Root>/VePMIR_n_HTAPMaxSpd' incorporates:
     *  Constant: '<S716>/Calib'
     *  SignalConversion generated from: '<S109>/HT_AuxPmpMaxSpdRPM'
     */
    (void)Rte_Write_VePMIR_n_HTAPMaxSpd_Value(KePMIR_n_HTAuxPump_MaxSpd);

    /* Outport: '<Root>/VePMIR_Pct_HTAPMinSpd' incorporates:
     *  Constant: '<S713>/Calib'
     *  SignalConversion generated from: '<S109>/HT_AuxPmpMinSpdPct'
     */
    (void)Rte_Write_VePMIR_Pct_HTAPMinSpd_Value(KePMIR_Pct_HTAuxPump_MinSpd);

    /* Outport: '<Root>/VePMIR_n_HTAPMinSpd' incorporates:
     *  Constant: '<S717>/Calib'
     *  SignalConversion generated from: '<S109>/HT_AuxPmpMinSpdRPM'
     */
    (void)Rte_Write_VePMIR_n_HTAPMinSpd_Value(KePMIR_n_HTAuxPump_MinSpd);

    /* Outputs for Atomic SubSystem: '<S109>/FCCP_Inputs' */
    /* Switch: '<S524>/Switch' incorporates:
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Merge: '<Root>/Merge_47'
     *  SignalConversion generated from: '<S109>/VePMIR_n_FCCPmpActSpd_read'
     */
    if (KePMIR_b_FCCPmpActSpd_SD)
    {
        rtb_Sum2_pb = KePMIR_n_FCCPmpActSpd_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_FCCPmpActSpd_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_n_FCCPmpActSpd' incorporates:
     *  Switch: '<S524>/Switch'
     */
    (void)Rte_Write_VePMIR_n_FCCPmpActSpd_Value(rtb_Sum2_pb);

    /* Switch: '<S523>/Switch1' incorporates:
     *  Constant: '<S525>/Calib'
     *  Constant: '<S526>/Calib'
     *  Merge: '<Root>/Merge_46'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpActSpdFA_read'
     */
    if (KePMIR_b_FCCPmpActSpd_FA_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpActSpd_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_FCCPmpActSpdFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpActSpd_FA' incorporates:
     *  Switch: '<S523>/Switch1'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpActSpd_FA_Value(tmp_1);

    /* Switch: '<S574>/Switch' incorporates:
     *  Constant: '<S575>/Calib'
     *  Constant: '<S576>/Calib'
     *  Merge: '<Root>/Merge_63'
     *  SignalConversion generated from: '<S109>/VePMIR_I_FCCPmpSuppCrnt_read'
     */
    if (KePMIR_b_FCCPmpSuppCrnt_SD)
    {
        rtb_Sum2_pb = KePMIR_I_FCCPmpSuppCrnt_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_FCCPmpSuppCrnt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_I_FCCPmpSuppCrnt' incorporates:
     *  Switch: '<S574>/Switch'
     */
    (void)Rte_Write_VePMIR_I_FCCPmpSuppCrnt_Value(rtb_Sum2_pb);

    /* Switch: '<S530>/Switch' incorporates:
     *  Constant: '<S533>/Calib'
     *  Constant: '<S534>/Calib'
     *  Merge: '<Root>/Merge_49'
     *  SignalConversion generated from: '<S109>/VePMIR_T_FCCPmpActTemp_read'
     */
    if (KePMIR_b_FCCPmpActTemp_SD)
    {
        rtb_Sum2_pb = KePMIR_T_FCCPmpActTemp_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_FCCPmpActTemp_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_T_FCCPmpActTemp' incorporates:
     *  Switch: '<S530>/Switch'
     */
    (void)Rte_Write_VePMIR_T_FCCPmpActTemp_Value(rtb_Sum2_pb);

    /* Switch: '<S529>/Switch1' incorporates:
     *  Constant: '<S531>/Calib'
     *  Constant: '<S532>/Calib'
     *  Merge: '<Root>/Merge_48'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpActTempFA_read'
     */
    if (KePMIR_b_FCCPmpActTemp_FA_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpActTemp_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_FCCPmpActTempFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpActTemp_FA' incorporates:
     *  Switch: '<S529>/Switch1'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpActTemp_FA_Value(tmp_1);

    /* Switch: '<S536>/Switch' incorporates:
     *  Constant: '<S539>/Calib'
     *  Constant: '<S540>/Calib'
     *  Merge: '<Root>/Merge_51'
     *  SignalConversion generated from: '<S109>/VePMIR_U_FCCPmpActVlt_read'
     */
    if (KePMIR_b_FCCPmpActVlt_SD)
    {
        rtb_Sum2_pb = KePMIR_U_FCCPmpActVlt_D;
    }
    else
    {
        rtb_Sum2_pb = Rte_IrvRead_PMIR_MedTEH_FCCPmpActVlt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_U_FCCPmpActVlt' incorporates:
     *  Switch: '<S536>/Switch'
     */
    (void)Rte_Write_VePMIR_U_FCCPmpActVlt_Value(rtb_Sum2_pb);

    /* Switch: '<S535>/Switch1' incorporates:
     *  Constant: '<S537>/Calib'
     *  Constant: '<S538>/Calib'
     *  Merge: '<Root>/Merge_50'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpActVltFA_read'
     */
    if (KePMIR_b_FCCPmpActVlt_FA_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpActVlt_FA_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_VePMIR_b_FCCPmpActVltFA_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpActVlt_FA' incorporates:
     *  Switch: '<S535>/Switch1'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpActVlt_FA_Value(tmp_1);

    /* Switch: '<S559>/Switch' incorporates:
     *  Constant: '<S560>/Calib'
     *  Constant: '<S561>/Calib'
     *  Merge: '<Root>/Merge_58'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrSC_read'
     */
    if (KePMIR_b_FCCPmpErrSC_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrSC_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrSC_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrSC' incorporates:
     *  Switch: '<S559>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrSC_Value(tmp_1);

    /* Switch: '<S568>/Switch' incorporates:
     *  Constant: '<S569>/Calib'
     *  Constant: '<S570>/Calib'
     *  Merge: '<Root>/Merge_61'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpIntFlt_read'
     */
    if (KePMIR_b_FCCPmpIntFlt_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpIntFlt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpIntFlt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpIntFlt' incorporates:
     *  Switch: '<S568>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpIntFlt_Value(tmp_1);

    /* Switch: '<S541>/Switch' incorporates:
     *  Constant: '<S542>/Calib'
     *  Constant: '<S543>/Calib'
     *  Merge: '<Root>/Merge_52'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrLIN_read'
     */
    if (KePMIR_b_FCCPmpErrLIN_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrLIN_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrLIN_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrLIN' incorporates:
     *  Switch: '<S541>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrLIN_Value(tmp_1);

    /* Switch: '<S544>/Switch' incorporates:
     *  Constant: '<S545>/Calib'
     *  Constant: '<S546>/Calib'
     *  Merge: '<Root>/Merge_53'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrLLO_read'
     */
    if (KePMIR_b_FCCPmpErrLLO_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrLLO_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrLLO_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrLLO' incorporates:
     *  Switch: '<S544>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrLLO_Value(tmp_1);

    /* Switch: '<S547>/Switch' incorporates:
     *  Constant: '<S548>/Calib'
     *  Constant: '<S549>/Calib'
     *  Merge: '<Root>/Merge_54'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrOC_read'
     */
    if (KePMIR_b_FCCPmpErrOC_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrOC_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrOC_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOC' incorporates:
     *  Switch: '<S547>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOC_Value(tmp_1);

    /* Switch: '<S553>/Switch' incorporates:
     *  Constant: '<S554>/Calib'
     *  Constant: '<S555>/Calib'
     *  Merge: '<Root>/Merge_55'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrOT_read'
     */
    if (KePMIR_b_FCCPmpErrOT_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrOT_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrOT_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOT' incorporates:
     *  Switch: '<S553>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOT_Value(tmp_1);

    /* Switch: '<S550>/Switch' incorporates:
     *  Constant: '<S551>/Calib'
     *  Constant: '<S552>/Calib'
     *  Merge: '<Root>/Merge_56'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrOTD_read'
     */
    if (KePMIR_b_FCCPmpErrOTD_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrOTD_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrOTD_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOTD' incorporates:
     *  Switch: '<S550>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOTD_Value(tmp_1);

    /* Switch: '<S556>/Switch' incorporates:
     *  Constant: '<S557>/Calib'
     *  Constant: '<S558>/Calib'
     *  Merge: '<Root>/Merge_57'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrOV_read'
     */
    if (KePMIR_b_FCCPmpErrOV_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrOV_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrOV_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOV' incorporates:
     *  Switch: '<S556>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOV_Value(tmp_1);

    /* Switch: '<S571>/Switch' incorporates:
     *  Constant: '<S572>/Calib'
     *  Constant: '<S573>/Calib'
     *  Merge: '<Root>/Merge_62'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpStlFlt_read'
     */
    if (KePMIR_b_FCCPmpStlFlt_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpStlFlt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpStlFlt_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpStlFlt' incorporates:
     *  Switch: '<S571>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpStlFlt_Value(tmp_1);

    /* Switch: '<S562>/Switch' incorporates:
     *  Constant: '<S563>/Calib'
     *  Constant: '<S564>/Calib'
     *  Merge: '<Root>/Merge_59'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrUV_read'
     */
    if (KePMIR_b_FCCPmpErrUV_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrUV_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrUV_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrUV' incorporates:
     *  Switch: '<S562>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrUV_Value(tmp_1);

    /* Switch: '<S565>/Switch' incorporates:
     *  Constant: '<S566>/Calib'
     *  Constant: '<S567>/Calib'
     *  Merge: '<Root>/Merge_60'
     *  SignalConversion generated from: '<S109>/VePMIR_b_FCCPmpErrVD_read'
     */
    if (KePMIR_b_FCCPmpErrVD_SD)
    {
        tmp_1 = KePMIR_b_FCCPmpErrVD_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_PMIR_MedTEH_FCCPmpErrVD_INIT_write_IRV();
    }

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrVD' incorporates:
     *  Switch: '<S565>/Switch'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrVD_Value(tmp_1);

    /* End of Outputs for SubSystem: '<S109>/FCCP_Inputs' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_ECM_LTPsvPmpRq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_ECM_LTPsvPmpRq' */
    /* Merge: '<Root>/Merge_163' incorporates:
     *  Chart: '<S1>/FsftPMIR_b_ECM_LTPsvPmpRqChrt'
     *  SignalConversion generated from: '<S1>/VePMIR_b_ECM_LTPsvPmpRqFA_write'
     */
    /* Gateway: FsftPMIR_b_ECM_LTPsvPmpRq/FsftPMIR_b_ECM_LTPsvPmpRqChrt */
    /* During: FsftPMIR_b_ECM_LTPsvPmpRq/FsftPMIR_b_ECM_LTPsvPmpRqChrt */
    /* Entry Internal: FsftPMIR_b_ECM_LTPsvPmpRq/FsftPMIR_b_ECM_LTPsvPmpRqChrt */
    /* Transition: '<S257>:2' */
    Rte_IrvWrite_FsftPMIR_b_ECM_LTPsvPmpRq_VePMIR_b_ECM_LTPsvPmpRqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_ECM_LTPsvPmpRq' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_FCCPmpActSpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_FCCPmpActSpd' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S2>/FsftPMIR_b_FCCPmpActSpdChrt'
     *  SignalConversion generated from: '<S2>/VePMIR_b_FCCPmpActSpdFA_write'
     */
    /* Gateway: FsftPMIR_b_FCCPmpActSpd/FsftPMIR_b_FCCPmpActSpdChrt */
    /* During: FsftPMIR_b_FCCPmpActSpd/FsftPMIR_b_FCCPmpActSpdChrt */
    /* Entry Internal: FsftPMIR_b_FCCPmpActSpd/FsftPMIR_b_FCCPmpActSpdChrt */
    /* Transition: '<S258>:2' */
    Rte_IrvWrite_FsftPMIR_b_FCCPmpActSpd_VePMIR_b_FCCPmpActSpdFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_FCCPmpActSpd' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_FCCPmpActTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_FCCPmpActTemp' */
    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S3>/FsftPMIR_b_FCCPmpActTempChrt'
     *  SignalConversion generated from: '<S3>/VePMIR_b_FCCPmpActTempFA_write'
     */
    /* Gateway: FsftPMIR_b_FCCPmpActTemp/FsftPMIR_b_FCCPmpActTempChrt */
    /* During: FsftPMIR_b_FCCPmpActTemp/FsftPMIR_b_FCCPmpActTempChrt */
    /* Entry Internal: FsftPMIR_b_FCCPmpActTemp/FsftPMIR_b_FCCPmpActTempChrt */
    /* Transition: '<S259>:2' */
    Rte_IrvWrite_FsftPMIR_b_FCCPmpActTemp_VePMIR_b_FCCPmpActTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_FCCPmpActTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_FCCPmpActVlt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_FCCPmpActVlt' */
    /* Merge: '<Root>/Merge_50' incorporates:
     *  Chart: '<S4>/FsftPMIR_b_FCCPmpActVltChrt'
     *  SignalConversion generated from: '<S4>/VePMIR_b_FCCPmpActVltFA_write'
     */
    /* Gateway: FsftPMIR_b_FCCPmpActVlt/FsftPMIR_b_FCCPmpActVltChrt */
    /* During: FsftPMIR_b_FCCPmpActVlt/FsftPMIR_b_FCCPmpActVltChrt */
    /* Entry Internal: FsftPMIR_b_FCCPmpActVlt/FsftPMIR_b_FCCPmpActVltChrt */
    /* Transition: '<S260>:2' */
    Rte_IrvWrite_FsftPMIR_b_FCCPmpActVlt_VePMIR_b_FCCPmpActVltFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_FCCPmpActVlt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPmpAirPrsntErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPmpAirPrsntErr' */
    /* Merge: '<Root>/Merge_68' incorporates:
     *  Chart: '<S5>/FsftPMIR_b_HTAuxPmpAirPrsntErrChrt'
     *  SignalConversion generated from: '<S5>/VePMIR_b_HTAuxPmpAirPrsntErrFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPmpAirPrsntErr/FsftPMIR_b_HTAuxPmpAirPrsntErrChrt */
    /* During: FsftPMIR_b_HTAuxPmpAirPrsntErr/FsftPMIR_b_HTAuxPmpAirPrsntErrChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPmpAirPrsntErr/FsftPMIR_b_HTAuxPmpAirPrsntErrChrt */
    /* Transition: '<S261>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPmpAirPrsntErr_VePMIR_b_HTAuxPmpAirPrsntErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPmpAirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpDeblock(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpDeblock' */
    /* Merge: '<Root>/Merge_78' incorporates:
     *  Chart: '<S6>/FsftPMIR_b_HTAuxPumpDeblockChrt'
     *  SignalConversion generated from: '<S6>/VePMIR_b_HTAuxPumpDeblockFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpDeblock/FsftPMIR_b_HTAuxPumpDeblockChrt */
    /* During: FsftPMIR_b_HTAuxPumpDeblock/FsftPMIR_b_HTAuxPumpDeblockChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpDeblock/FsftPMIR_b_HTAuxPumpDeblockChrt */
    /* Transition: '<S262>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpDeblock_VePMIR_b_HTAuxPumpDeblockFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpDeblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpDryRun(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpDryRun' */
    /* Merge: '<Root>/Merge_80' incorporates:
     *  Chart: '<S7>/FsftPMIR_b_HTAuxPumpDryRunChrt'
     *  SignalConversion generated from: '<S7>/VePMIR_b_HTAuxPumpDryRunFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpDryRun/FsftPMIR_b_HTAuxPumpDryRunChrt */
    /* During: FsftPMIR_b_HTAuxPumpDryRun/FsftPMIR_b_HTAuxPumpDryRunChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpDryRun/FsftPMIR_b_HTAuxPumpDryRunChrt */
    /* Transition: '<S263>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpDryRun_VePMIR_b_HTAuxPumpDryRunFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpDryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpFailsafe(void)
{
    /* Gateway: FsftPMIR_b_HTAuxPumpFailsafe/FsftPMIR_b_HTAuxPumpFailsafeChrt */
    /* During: FsftPMIR_b_HTAuxPumpFailsafe/FsftPMIR_b_HTAuxPumpFailsafeChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpFailsafe/FsftPMIR_b_HTAuxPumpFailsafeChrt */
    /* Transition: '<S264>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpNodeErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpNodeErr' */
    /* Merge: '<Root>/Merge_72' incorporates:
     *  Chart: '<S9>/FsftPMIR_b_HTAuxPumpNodeErrChrt'
     *  SignalConversion generated from: '<S9>/VePMIR_b_HTAuxPumpNodeErrFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpNodeErr/FsftPMIR_b_HTAuxPumpNodeErrChrt */
    /* During: FsftPMIR_b_HTAuxPumpNodeErr/FsftPMIR_b_HTAuxPumpNodeErrChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpNodeErr/FsftPMIR_b_HTAuxPumpNodeErrChrt */
    /* Transition: '<S265>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpNodeErr_VePMIR_b_HTAuxPumpNodeErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpNodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpOvrCrnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpOvrCrnt' */
    /* Merge: '<Root>/Merge_89' incorporates:
     *  Chart: '<S10>/FsftPMIR_b_HTAuxPumpOvrCrntChrt'
     *  SignalConversion generated from: '<S10>/VePMIR_b_HTAuxPumpOvrCrntFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpOvrCrnt/FsftPMIR_b_HTAuxPumpOvrCrntChrt */
    /* During: FsftPMIR_b_HTAuxPumpOvrCrnt/FsftPMIR_b_HTAuxPumpOvrCrntChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpOvrCrnt/FsftPMIR_b_HTAuxPumpOvrCrntChrt */
    /* Transition: '<S266>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpOvrCrnt_VePMIR_b_HTAuxPumpOvrCrntFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpOvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpRPMAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMAct' */
    /* Merge: '<Root>/Merge_94' incorporates:
     *  Chart: '<S11>/FsftPMIR_b_HTAuxPumpRPMActChrt'
     *  SignalConversion generated from: '<S11>/VePMIR_b_HTAuxPumpRPMActFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpRPMAct/FsftPMIR_b_HTAuxPumpRPMActChrt */
    /* During: FsftPMIR_b_HTAuxPumpRPMAct/FsftPMIR_b_HTAuxPumpRPMActChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpRPMAct/FsftPMIR_b_HTAuxPumpRPMActChrt */
    /* Transition: '<S267>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpRPMAct_VePMIR_b_HTAuxPumpRPMActFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  Chart: '<S11>/FsftPMIR_b_HTAuxPumpRPMActChrt'
     *  SignalConversion generated from: '<S11>/VePMIR_b_HTAuxPumpRPMActSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpRPMAct_VePMIR_b_HTAuxPumpRPMActSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpRPMActPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMActPct' */
    /* Merge: '<Root>/Merge_75' incorporates:
     *  Chart: '<S12>/FsftPMIR_b_HTAuxPumpRPMActPctChrt'
     *  SignalConversion generated from: '<S12>/VePMIR_b_HTAuxPumpRPMActPctFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpRPMActPct/FsftPMIR_b_HTAuxPumpRPMActPctChrt */
    /* During: FsftPMIR_b_HTAuxPumpRPMActPct/FsftPMIR_b_HTAuxPumpRPMActPctChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpRPMActPct/FsftPMIR_b_HTAuxPumpRPMActPctChrt */
    /* Transition: '<S268>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpRPMActPct_VePMIR_b_HTAuxPumpRPMActPctFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  Chart: '<S12>/FsftPMIR_b_HTAuxPumpRPMActPctChrt'
     *  SignalConversion generated from: '<S12>/VePMIR_b_HTAuxPumpRPMActPctSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpRPMActPct_VePMIR_b_HTAuxPumpRPMActPctSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMActPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpRPMTgt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMTgt' */
    /* Merge: '<Root>/Merge_97' incorporates:
     *  Chart: '<S13>/FsftPMIR_b_HTAuxPumpRPMTgtChrt'
     *  SignalConversion generated from: '<S13>/VePMIR_b_HTAuxPumpRPMTgtFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpRPMTgt/FsftPMIR_b_HTAuxPumpRPMTgtChrt */
    /* During: FsftPMIR_b_HTAuxPumpRPMTgt/FsftPMIR_b_HTAuxPumpRPMTgtChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpRPMTgt/FsftPMIR_b_HTAuxPumpRPMTgtChrt */
    /* Transition: '<S269>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpRPMTgt_VePMIR_b_HTAuxPumpRPMTgtFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpRPMTgtPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMTgtPct' */
    /* Merge: '<Root>/Merge_103' incorporates:
     *  Chart: '<S14>/FsftPMIR_b_HTAuxPumpRPMTgtPctChrt'
     *  SignalConversion generated from: '<S14>/VePMIR_b_HTAuxPumpRPMTgtPctFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpRPMTgtPct/FsftPMIR_b_HTAuxPumpRPMTgtPctChrt */
    /* During: FsftPMIR_b_HTAuxPumpRPMTgtPct/FsftPMIR_b_HTAuxPumpRPMTgtPctChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpRPMTgtPct/FsftPMIR_b_HTAuxPumpRPMTgtPctChrt */
    /* Transition: '<S270>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpRPMTgtPct_VePMIR_b_HTAuxPumpRPMTgtPctFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpRPMTgtPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPumpSuppVltErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpSuppVltErr' */
    /* Merge: '<Root>/Merge_70' incorporates:
     *  Chart: '<S15>/FsftPMIR_b_HTAuxPumpSuppVltErrChrt'
     *  SignalConversion generated from: '<S15>/VePMIR_b_HTAuxPumpSuppVltErrFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPumpSuppVltErr/FsftPMIR_b_HTAuxPumpSuppVltErrChrt */
    /* During: FsftPMIR_b_HTAuxPumpSuppVltErr/FsftPMIR_b_HTAuxPumpSuppVltErrChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPumpSuppVltErr/FsftPMIR_b_HTAuxPumpSuppVltErrChrt */
    /* Transition: '<S271>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPumpSuppVltErr_VePMIR_b_HTAuxPumpSuppVltErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPumpSuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HTAuxPump_LmpHM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HTAuxPump_LmpHM' */
    /* Merge: '<Root>/Merge_83' incorporates:
     *  Chart: '<S16>/FsftPMIR_b_HTAuxPump_LmpHMChrt'
     *  SignalConversion generated from: '<S16>/VePMIR_b_HTAuxPump_LmpHMFA_write'
     */
    /* Gateway: FsftPMIR_b_HTAuxPump_LmpHM/FsftPMIR_b_HTAuxPump_LmpHMChrt */
    /* During: FsftPMIR_b_HTAuxPump_LmpHM/FsftPMIR_b_HTAuxPump_LmpHMChrt */
    /* Entry Internal: FsftPMIR_b_HTAuxPump_LmpHM/FsftPMIR_b_HTAuxPump_LmpHMChrt */
    /* Transition: '<S272>:2' */
    Rte_IrvWrite_FsftPMIR_b_HTAuxPump_LmpHM_VePMIR_b_HTAuxPump_LmpHMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HTAuxPump_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HT_AuxPmpCrnt(void)
{
    /* Gateway: FsftPMIR_b_HT_AuxPmpCrnt/FsftPMIR_b_HT_AuxPmpCrntChrt */
    /* During: FsftPMIR_b_HT_AuxPmpCrnt/FsftPMIR_b_HT_AuxPmpCrntChrt */
    /* Entry Internal: FsftPMIR_b_HT_AuxPmpCrnt/FsftPMIR_b_HT_AuxPmpCrntChrt */
    /* Transition: '<S273>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HT_AuxPmpMntrRPM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpMntrRPM' */
    /* Merge: '<Root>/Merge_85' incorporates:
     *  Chart: '<S18>/FsftPMIR_b_HT_AuxPmpMntrRPMChrt'
     *  SignalConversion generated from: '<S18>/VePMIR_b_HT_AuxPmpMntrRPMFA_write'
     */
    /* Gateway: FsftPMIR_b_HT_AuxPmpMntrRPM/FsftPMIR_b_HT_AuxPmpMntrRPMChrt */
    /* During: FsftPMIR_b_HT_AuxPmpMntrRPM/FsftPMIR_b_HT_AuxPmpMntrRPMChrt */
    /* Entry Internal: FsftPMIR_b_HT_AuxPmpMntrRPM/FsftPMIR_b_HT_AuxPmpMntrRPMChrt */
    /* Transition: '<S274>:2' */
    Rte_IrvWrite_FsftPMIR_b_HT_AuxPmpMntrRPM_VePMIR_b_HT_AuxPmpMntrRPMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpMntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HT_AuxPmpOT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpOT' */
    /* Merge: '<Root>/Merge_87' incorporates:
     *  Chart: '<S19>/FsftPMIR_b_HT_AuxPmpOTChrt'
     *  SignalConversion generated from: '<S19>/VePMIR_b_HT_AuxPmpOTFA_write'
     */
    /* Gateway: FsftPMIR_b_HT_AuxPmpOT/FsftPMIR_b_HT_AuxPmpOTChrt */
    /* During: FsftPMIR_b_HT_AuxPmpOT/FsftPMIR_b_HT_AuxPmpOTChrt */
    /* Entry Internal: FsftPMIR_b_HT_AuxPmpOT/FsftPMIR_b_HT_AuxPmpOTChrt */
    /* Transition: '<S275>:2' */
    Rte_IrvWrite_FsftPMIR_b_HT_AuxPmpOT_VePMIR_b_HT_AuxPmpOTFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpOT' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HT_AuxPmpTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpTemp' */
    /* Merge: '<Root>/Merge_100' incorporates:
     *  Chart: '<S20>/FsftPMIR_b_HT_AuxPmpTempChrt'
     *  SignalConversion generated from: '<S20>/VePMIR_b_HT_AuxPmpTempFA_write'
     */
    /* Gateway: FsftPMIR_b_HT_AuxPmpTemp/FsftPMIR_b_HT_AuxPmpTempChrt */
    /* During: FsftPMIR_b_HT_AuxPmpTemp/FsftPMIR_b_HT_AuxPmpTempChrt */
    /* Entry Internal: FsftPMIR_b_HT_AuxPmpTemp/FsftPMIR_b_HT_AuxPmpTempChrt */
    /* Transition: '<S276>:2' */
    Rte_IrvWrite_FsftPMIR_b_HT_AuxPmpTemp_VePMIR_b_HT_AuxPmpTempFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_102' incorporates:
     *  Chart: '<S20>/FsftPMIR_b_HT_AuxPmpTempChrt'
     *  SignalConversion generated from: '<S20>/VePMIR_b_HT_AuxPmpTempSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_HT_AuxPmpTemp_VePMIR_b_HT_AuxPmpTempSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HT_AuxPmpVltg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpVltg' */
    /* Merge: '<Root>/Merge_106' incorporates:
     *  Chart: '<S21>/FsftPMIR_b_HT_AuxPmpVltgChrt'
     *  SignalConversion generated from: '<S21>/VePMIR_b_HT_AuxPmpVltgFA_write'
     */
    /* Gateway: FsftPMIR_b_HT_AuxPmpVltg/FsftPMIR_b_HT_AuxPmpVltgChrt */
    /* During: FsftPMIR_b_HT_AuxPmpVltg/FsftPMIR_b_HT_AuxPmpVltgChrt */
    /* Entry Internal: FsftPMIR_b_HT_AuxPmpVltg/FsftPMIR_b_HT_AuxPmpVltgChrt */
    /* Transition: '<S277>:2' */
    Rte_IrvWrite_FsftPMIR_b_HT_AuxPmpVltg_VePMIR_b_HT_AuxPmpVltgFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmpVltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_HT_AuxPmp_PstRnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmp_PstRnSt' */
    /* Merge: '<Root>/Merge_92' incorporates:
     *  Chart: '<S22>/FsftPMIR_b_HT_AuxPmp_PstRnStChrt'
     *  SignalConversion generated from: '<S22>/VePMIR_b_HT_AuxPmp_PstRnStFA_write'
     */
    /* Gateway: FsftPMIR_b_HT_AuxPmp_PstRnSt/FsftPMIR_b_HT_AuxPmp_PstRnStChrt */
    /* During: FsftPMIR_b_HT_AuxPmp_PstRnSt/FsftPMIR_b_HT_AuxPmp_PstRnStChrt */
    /* Entry Internal: FsftPMIR_b_HT_AuxPmp_PstRnSt/FsftPMIR_b_HT_AuxPmp_PstRnStChrt */
    /* Transition: '<S278>:2' */
    Rte_IrvWrite_FsftPMIR_b_HT_AuxPmp_PstRnSt_VePMIR_b_HT_AuxPmp_PstRnStFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_HT_AuxPmp_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpAirPrsntErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpAirPrsntErr' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S23>/FsftPMIR_b_LTActPumpAirPrsntErrChrt'
     *  SignalConversion generated from: '<S23>/VePMIR_b_LTActPumpAirPrsntErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpAirPrsntErr/FsftPMIR_b_LTActPumpAirPrsntErrChrt */
    /* During: FsftPMIR_b_LTActPumpAirPrsntErr/FsftPMIR_b_LTActPumpAirPrsntErrChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpAirPrsntErr/FsftPMIR_b_LTActPumpAirPrsntErrChrt */
    /* Transition: '<S279>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpAirPrsntErr_VePMIR_b_LTActPumpAirPrsntErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpAirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpCrnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpCrnt' */
    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S24>/FsftPMIR_b_LTActPumpCrntChrt'
     *  SignalConversion generated from: '<S24>/VePMIR_b_LTActPumpCrntFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpCrnt/FsftPMIR_b_LTActPumpCrntChrt */
    /* During: FsftPMIR_b_LTActPumpCrnt/FsftPMIR_b_LTActPumpCrntChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpCrnt/FsftPMIR_b_LTActPumpCrntChrt */
    /* Transition: '<S280>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpCrnt_VePMIR_b_LTActPumpCrntFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpDeblock(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpDeblock' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S25>/FsftPMIR_b_LTActPumpDeblockChrt'
     *  SignalConversion generated from: '<S25>/VePMIR_b_LTActPumpDeblockFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpDeblock/FsftPMIR_b_LTActPumpDeblockChrt */
    /* During: FsftPMIR_b_LTActPumpDeblock/FsftPMIR_b_LTActPumpDeblockChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpDeblock/FsftPMIR_b_LTActPumpDeblockChrt */
    /* Transition: '<S281>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpDeblock_VePMIR_b_LTActPumpDeblockFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpDeblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpDryRun(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpDryRun' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S26>/FsftPMIR_b_LTActPumpDryRunChrt'
     *  SignalConversion generated from: '<S26>/VePMIR_b_LTActPumpDryRunFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpDryRun/FsftPMIR_b_LTActPumpDryRunChrt */
    /* During: FsftPMIR_b_LTActPumpDryRun/FsftPMIR_b_LTActPumpDryRunChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpDryRun/FsftPMIR_b_LTActPumpDryRunChrt */
    /* Transition: '<S282>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpDryRun_VePMIR_b_LTActPumpDryRunFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S26>/FsftPMIR_b_LTActPumpDryRunChrt'
     *  SignalConversion generated from: '<S26>/VePMIR_b_LTActPumpDryRunSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpDryRun_VePMIR_b_LTActPumpDryRunSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpDryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpFailsafe(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpFailsafe' */
    /* Merge: '<Root>/Merge_22' incorporates:
     *  Chart: '<S27>/FsftPMIR_b_LTActPumpFailsafeChrt'
     *  SignalConversion generated from: '<S27>/VePMIR_b_LTActPumpFailsafeFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpFailsafe/FsftPMIR_b_LTActPumpFailsafeChrt */
    /* During: FsftPMIR_b_LTActPumpFailsafe/FsftPMIR_b_LTActPumpFailsafeChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpFailsafe/FsftPMIR_b_LTActPumpFailsafeChrt */
    /* Transition: '<S283>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpFailsafe_VePMIR_b_LTActPumpFailsafeFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpFailsafe' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpLmpHM(void)
{
    /* Gateway: FsftPMIR_b_LTActPumpLmpHM/FsftPMIR_b_LTActPumpLmpHMChrt */
    /* During: FsftPMIR_b_LTActPumpLmpHM/FsftPMIR_b_LTActPumpLmpHMChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpLmpHM/FsftPMIR_b_LTActPumpLmpHMChrt */
    /* Transition: '<S284>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpMntrRPM(void)
{
    /* Gateway: FsftPMIR_b_LTActPumpMntrRPM/FsftPMIR_b_LTActPumpMntrRPMChrt */
    /* During: FsftPMIR_b_LTActPumpMntrRPM/FsftPMIR_b_LTActPumpMntrRPMChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpMntrRPM/FsftPMIR_b_LTActPumpMntrRPMChrt */
    /* Transition: '<S285>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpNodeErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpNodeErr' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S30>/FsftPMIR_b_LTActPumpNodeErrChrt'
     *  SignalConversion generated from: '<S30>/VePMIR_b_LTActPumpNodeErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpNodeErr/FsftPMIR_b_LTActPumpNodeErrChrt */
    /* During: FsftPMIR_b_LTActPumpNodeErr/FsftPMIR_b_LTActPumpNodeErrChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpNodeErr/FsftPMIR_b_LTActPumpNodeErrChrt */
    /* Transition: '<S286>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpNodeErr_VePMIR_b_LTActPumpNodeErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpNodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpOvrCrnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpOvrCrnt' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S31>/FsftPMIR_b_LTActPumpOvrCrntChrt'
     *  SignalConversion generated from: '<S31>/VePMIR_b_LTActPumpOvrCrntFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpOvrCrnt/FsftPMIR_b_LTActPumpOvrCrntChrt */
    /* During: FsftPMIR_b_LTActPumpOvrCrnt/FsftPMIR_b_LTActPumpOvrCrntChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpOvrCrnt/FsftPMIR_b_LTActPumpOvrCrntChrt */
    /* Transition: '<S287>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpOvrCrnt_VePMIR_b_LTActPumpOvrCrntFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpOvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpPstRnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpPstRnSt' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S32>/FsftPMIR_b_LTActPumpPstRnStChrt'
     *  SignalConversion generated from: '<S32>/VePMIR_b_LTActPumpPstRnStFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpPstRnSt/FsftPMIR_b_LTActPumpPstRnStChrt */
    /* During: FsftPMIR_b_LTActPumpPstRnSt/FsftPMIR_b_LTActPumpPstRnStChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpPstRnSt/FsftPMIR_b_LTActPumpPstRnStChrt */
    /* Transition: '<S288>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpPstRnSt_VePMIR_b_LTActPumpPstRnStFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpPstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpRPMAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMAct' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S33>/FsftPMIR_b_LTActPumpRPMActChrt'
     *  SignalConversion generated from: '<S33>/VePMIR_b_LTActPumpRPMActFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpRPMAct/FsftPMIR_b_LTActPumpRPMActChrt */
    /* During: FsftPMIR_b_LTActPumpRPMAct/FsftPMIR_b_LTActPumpRPMActChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpRPMAct/FsftPMIR_b_LTActPumpRPMActChrt */
    /* Transition: '<S289>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpRPMAct_VePMIR_b_LTActPumpRPMActFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  Chart: '<S33>/FsftPMIR_b_LTActPumpRPMActChrt'
     *  SignalConversion generated from: '<S33>/VePMIR_b_LTActPumpRPMActSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpRPMAct_VePMIR_b_LTActPumpRPMActSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpRPMActPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMActPct' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  Chart: '<S34>/FsftPMIR_b_LTActPumpRPMActPctChrt'
     *  SignalConversion generated from: '<S34>/VePMIR_b_LTActPumpRPMActPctFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpRPMActPct/FsftPMIR_b_LTActPumpRPMActPctChrt */
    /* During: FsftPMIR_b_LTActPumpRPMActPct/FsftPMIR_b_LTActPumpRPMActPctChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpRPMActPct/FsftPMIR_b_LTActPumpRPMActPctChrt */
    /* Transition: '<S290>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpRPMActPct_VePMIR_b_LTActPumpRPMActPctFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S34>/FsftPMIR_b_LTActPumpRPMActPctChrt'
     *  SignalConversion generated from: '<S34>/VePMIR_b_LTActPumpRPMActPctSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpRPMActPct_VePMIR_b_LTActPumpRPMActPctSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMActPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpRPMTgt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMTgt' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S35>/FsftPMIR_b_LTActPumpRPMTgtChrt'
     *  SignalConversion generated from: '<S35>/VePMIR_b_LTActPumpRPMTgtFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpRPMTgt/FsftPMIR_b_LTActPumpRPMTgtChrt */
    /* During: FsftPMIR_b_LTActPumpRPMTgt/FsftPMIR_b_LTActPumpRPMTgtChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpRPMTgt/FsftPMIR_b_LTActPumpRPMTgtChrt */
    /* Transition: '<S291>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpRPMTgt_VePMIR_b_LTActPumpRPMTgtFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpRPMTgtPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMTgtPct' */
    /* Merge: '<Root>/Merge_13' incorporates:
     *  Chart: '<S36>/FsftPMIR_b_LTActPumpRPMTgtPctChrt'
     *  SignalConversion generated from: '<S36>/VePMIR_b_LTActPumpRPMTgtPctFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpRPMTgtPct/FsftPMIR_b_LTActPumpRPMTgtPctChrt */
    /* During: FsftPMIR_b_LTActPumpRPMTgtPct/FsftPMIR_b_LTActPumpRPMTgtPctChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpRPMTgtPct/FsftPMIR_b_LTActPumpRPMTgtPctChrt */
    /* Transition: '<S292>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpRPMTgtPct_VePMIR_b_LTActPumpRPMTgtPctFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpRPMTgtPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpSuppVltErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpSuppVltErr' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S37>/FsftPMIR_b_LTActPumpSuppVltErrChrt'
     *  SignalConversion generated from: '<S37>/VePMIR_b_LTActPumpSuppVltErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpSuppVltErr/FsftPMIR_b_LTActPumpSuppVltErrChrt */
    /* During: FsftPMIR_b_LTActPumpSuppVltErr/FsftPMIR_b_LTActPumpSuppVltErrChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpSuppVltErr/FsftPMIR_b_LTActPumpSuppVltErrChrt */
    /* Transition: '<S293>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpSuppVltErr_VePMIR_b_LTActPumpSuppVltErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpSuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpTemp' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  Chart: '<S38>/FsftPMIR_b_LTActPumpTempChrt'
     *  SignalConversion generated from: '<S38>/VePMIR_b_LTActPumpTempFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpTemp/FsftPMIR_b_LTActPumpTempChrt */
    /* During: FsftPMIR_b_LTActPumpTemp/FsftPMIR_b_LTActPumpTempChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpTemp/FsftPMIR_b_LTActPumpTempChrt */
    /* Transition: '<S294>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpTemp_VePMIR_b_LTActPumpTempFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S38>/FsftPMIR_b_LTActPumpTempChrt'
     *  SignalConversion generated from: '<S38>/VePMIR_b_LTActPumpTempSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpTemp_VePMIR_b_LTActPumpTempSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTActPumpVlt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTActPumpVlt' */
    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S39>/FsftPMIR_b_LTActPumpVltChrt'
     *  SignalConversion generated from: '<S39>/VePMIR_b_LTActPumpVltFA_write'
     */
    /* Gateway: FsftPMIR_b_LTActPumpVlt/FsftPMIR_b_LTActPumpVltChrt */
    /* During: FsftPMIR_b_LTActPumpVlt/FsftPMIR_b_LTActPumpVltChrt */
    /* Entry Internal: FsftPMIR_b_LTActPumpVlt/FsftPMIR_b_LTActPumpVltChrt */
    /* Transition: '<S295>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTActPumpVlt_VePMIR_b_LTActPumpVltFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTActPumpVlt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPmp2AirPrsntErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPmp2AirPrsntErr' */
    /* Merge: '<Root>/Merge_108' incorporates:
     *  Chart: '<S40>/FsftPMIR_b_LTPsvPmp2AirPrsntErrChrt'
     *  SignalConversion generated from: '<S40>/VePMIR_b_LTPsvPmp2AirPrsntErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPmp2AirPrsntErr/FsftPMIR_b_LTPsvPmp2AirPrsntErrChrt */
    /* During: FsftPMIR_b_LTPsvPmp2AirPrsntErr/FsftPMIR_b_LTPsvPmp2AirPrsntErrChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPmp2AirPrsntErr/FsftPMIR_b_LTPsvPmp2AirPrsntErrChrt */
    /* Transition: '<S296>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPmp2AirPrsntErr_VePMIR_b_LTPsvPmp2AirPrsntErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPmp2AirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPmpAirPrsntErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPmpAirPrsntErr' */
    /* Merge: '<Root>/Merge_146' incorporates:
     *  Chart: '<S41>/FsftPMIR_b_LTPsvPmpAirPrsntErrChrt'
     *  SignalConversion generated from: '<S41>/VePMIR_b_LTPsvPmpAirPrsntErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPmpAirPrsntErr/FsftPMIR_b_LTPsvPmpAirPrsntErrChrt */
    /* During: FsftPMIR_b_LTPsvPmpAirPrsntErr/FsftPMIR_b_LTPsvPmpAirPrsntErrChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPmpAirPrsntErr/FsftPMIR_b_LTPsvPmpAirPrsntErrChrt */
    /* Transition: '<S297>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPmpAirPrsntErr_VePMIR_b_LTPsvPmpAirPrsntErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPmpAirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2Deblock(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2Deblock' */
    /* Merge: '<Root>/Merge_117' incorporates:
     *  Chart: '<S42>/FsftPMIR_b_LTPsvPump2DeblockChrt'
     *  SignalConversion generated from: '<S42>/VePMIR_b_LTPsvPump2DeblockFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2Deblock/FsftPMIR_b_LTPsvPump2DeblockChrt */
    /* During: FsftPMIR_b_LTPsvPump2Deblock/FsftPMIR_b_LTPsvPump2DeblockChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2Deblock/FsftPMIR_b_LTPsvPump2DeblockChrt */
    /* Transition: '<S298>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2Deblock_VePMIR_b_LTPsvPump2DeblockFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2Deblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2DryRun(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2DryRun' */
    /* Merge: '<Root>/Merge_119' incorporates:
     *  Chart: '<S43>/FsftPMIR_b_LTPsvPump2DryRunChrt'
     *  SignalConversion generated from: '<S43>/VePMIR_b_LTPsvPump2DryRunFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2DryRun/FsftPMIR_b_LTPsvPump2DryRunChrt */
    /* During: FsftPMIR_b_LTPsvPump2DryRun/FsftPMIR_b_LTPsvPump2DryRunChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2DryRun/FsftPMIR_b_LTPsvPump2DryRunChrt */
    /* Transition: '<S299>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2DryRun_VePMIR_b_LTPsvPump2DryRunFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2DryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2Failsafe(void)
{
    /* Gateway: FsftPMIR_b_LTPsvPump2Failsafe/FsftPMIR_b_LTPsvPump2FailsafeChrt */
    /* During: FsftPMIR_b_LTPsvPump2Failsafe/FsftPMIR_b_LTPsvPump2FailsafeChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2Failsafe/FsftPMIR_b_LTPsvPump2FailsafeChrt */
    /* Transition: '<S300>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2MntrRPM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2MntrRPM' */
    /* Merge: '<Root>/Merge_124' incorporates:
     *  Chart: '<S45>/FsftPMIR_b_LTPsvPump2MntrRPMChrt'
     *  SignalConversion generated from: '<S45>/VePMIR_b_LTPsvPump2MntrRPMFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2MntrRPM/FsftPMIR_b_LTPsvPump2MntrRPMChrt */
    /* During: FsftPMIR_b_LTPsvPump2MntrRPM/FsftPMIR_b_LTPsvPump2MntrRPMChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2MntrRPM/FsftPMIR_b_LTPsvPump2MntrRPMChrt */
    /* Transition: '<S301>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2MntrRPM_VePMIR_b_LTPsvPump2MntrRPMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2MntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2NodeErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2NodeErr' */
    /* Merge: '<Root>/Merge_126' incorporates:
     *  Chart: '<S46>/FsftPMIR_b_LTPsvPump2NodeErrChrt'
     *  SignalConversion generated from: '<S46>/VePMIR_b_LTPsvPump2NodeErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2NodeErr/FsftPMIR_b_LTPsvPump2NodeErrChrt */
    /* During: FsftPMIR_b_LTPsvPump2NodeErr/FsftPMIR_b_LTPsvPump2NodeErrChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2NodeErr/FsftPMIR_b_LTPsvPump2NodeErrChrt */
    /* Transition: '<S302>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2NodeErr_VePMIR_b_LTPsvPump2NodeErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2NodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2OvrCrnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2OvrCrnt' */
    /* Merge: '<Root>/Merge_130' incorporates:
     *  Chart: '<S47>/FsftPMIR_b_LTPsvPump2OvrCrntChrt'
     *  SignalConversion generated from: '<S47>/VePMIR_b_LTPsvPump2OvrCrntFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2OvrCrnt/FsftPMIR_b_LTPsvPump2OvrCrntChrt */
    /* During: FsftPMIR_b_LTPsvPump2OvrCrnt/FsftPMIR_b_LTPsvPump2OvrCrntChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2OvrCrnt/FsftPMIR_b_LTPsvPump2OvrCrntChrt */
    /* Transition: '<S303>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2OvrCrnt_VePMIR_b_LTPsvPump2OvrCrntFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2OvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2RPMAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2RPMAct' */
    /* Merge: '<Root>/Merge_133' incorporates:
     *  Chart: '<S48>/FsftPMIR_b_LTPsvPump2RPMActChrt'
     *  SignalConversion generated from: '<S48>/VePMIR_b_LTPsvPump2RPMActFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2RPMAct/FsftPMIR_b_LTPsvPump2RPMActChrt */
    /* During: FsftPMIR_b_LTPsvPump2RPMAct/FsftPMIR_b_LTPsvPump2RPMActChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2RPMAct/FsftPMIR_b_LTPsvPump2RPMActChrt */
    /* Transition: '<S304>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2RPMAct_VePMIR_b_LTPsvPump2RPMActFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_132' incorporates:
     *  Chart: '<S48>/FsftPMIR_b_LTPsvPump2RPMActChrt'
     *  SignalConversion generated from: '<S48>/VePMIR_b_LTPsvPump2RPMActSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2RPMAct_VePMIR_b_LTPsvPump2RPMActSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2RPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2RPMActPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2RPMActPct' */
    /* Merge: '<Root>/Merge_114' incorporates:
     *  Chart: '<S49>/FsftPMIR_b_LTPsvPump2RPMActPctChrt'
     *  SignalConversion generated from: '<S49>/VePMIR_b_LTPsvPump2RPMActPctFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2RPMActPct/FsftPMIR_b_LTPsvPump2RPMActPctChrt */
    /* During: FsftPMIR_b_LTPsvPump2RPMActPct/FsftPMIR_b_LTPsvPump2RPMActPctChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2RPMActPct/FsftPMIR_b_LTPsvPump2RPMActPctChrt */
    /* Transition: '<S305>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2RPMActPct_VePMIR_b_LTPsvPump2RPMActPctFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_113' incorporates:
     *  Chart: '<S49>/FsftPMIR_b_LTPsvPump2RPMActPctChrt'
     *  SignalConversion generated from: '<S49>/VePMIR_b_LTPsvPump2RPMActPctSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2RPMActPct_VePMIR_b_LTPsvPump2RPMActPctSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2RPMActPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2RPMTgtPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2RPMTgtPct' */
    /* Merge: '<Root>/Merge_139' incorporates:
     *  Chart: '<S50>/FsftPMIR_b_LTPsvPump2RPMTgtPctChrt'
     *  SignalConversion generated from: '<S50>/VePMIR_b_LTPsvPump2RPMTgtPctFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2RPMTgtPct/FsftPMIR_b_LTPsvPump2RPMTgtPctChrt */
    /* During: FsftPMIR_b_LTPsvPump2RPMTgtPct/FsftPMIR_b_LTPsvPump2RPMTgtPctChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2RPMTgtPct/FsftPMIR_b_LTPsvPump2RPMTgtPctChrt */
    /* Transition: '<S306>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2RPMTgtPct_VePMIR_b_LTPsvPump2RPMTgtPctFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2RPMTgtPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2SuppVltErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2SuppVltErr' */
    /* Merge: '<Root>/Merge_111' incorporates:
     *  Chart: '<S51>/FsftPMIR_b_LTPsvPump2SuppVltErrChrt'
     *  SignalConversion generated from: '<S51>/VePMIR_b_LTPsvPump2SuppVltErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2SuppVltErr/FsftPMIR_b_LTPsvPump2SuppVltErrChrt */
    /* During: FsftPMIR_b_LTPsvPump2SuppVltErr/FsftPMIR_b_LTPsvPump2SuppVltErrChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2SuppVltErr/FsftPMIR_b_LTPsvPump2SuppVltErrChrt */
    /* Transition: '<S307>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2SuppVltErr_VePMIR_b_LTPsvPump2SuppVltErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2SuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2Temp' */
    /* Merge: '<Root>/Merge_137' incorporates:
     *  Chart: '<S52>/FsftPMIR_b_LTPsvPump2TempChrt'
     *  SignalConversion generated from: '<S52>/VePMIR_b_LTPsvPump2TempFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2Temp/FsftPMIR_b_LTPsvPump2TempChrt */
    /* During: FsftPMIR_b_LTPsvPump2Temp/FsftPMIR_b_LTPsvPump2TempChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2Temp/FsftPMIR_b_LTPsvPump2TempChrt */
    /* Transition: '<S308>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2Temp_VePMIR_b_LTPsvPump2TempFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_136' incorporates:
     *  Chart: '<S52>/FsftPMIR_b_LTPsvPump2TempChrt'
     *  SignalConversion generated from: '<S52>/VePMIR_b_LTPsvPump2TempSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2Temp_VePMIR_b_LTPsvPump2TempSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2Temp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump2_LmpHM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2_LmpHM' */
    /* Merge: '<Root>/Merge_122' incorporates:
     *  Chart: '<S53>/FsftPMIR_b_LTPsvPump2_LmpHMChrt'
     *  SignalConversion generated from: '<S53>/VePMIR_b_LTPsvPump2_LmpHMFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump2_LmpHM/FsftPMIR_b_LTPsvPump2_LmpHMChrt */
    /* During: FsftPMIR_b_LTPsvPump2_LmpHM/FsftPMIR_b_LTPsvPump2_LmpHMChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump2_LmpHM/FsftPMIR_b_LTPsvPump2_LmpHMChrt */
    /* Transition: '<S309>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump2_LmpHM_VePMIR_b_LTPsvPump2_LmpHMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump2_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpDeblock(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpDeblock' */
    /* Merge: '<Root>/Merge_159' incorporates:
     *  Chart: '<S54>/FsftPMIR_b_LTPsvPumpDeblockChrt'
     *  SignalConversion generated from: '<S54>/VePMIR_b_LTPsvPumpDeblockFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpDeblock/FsftPMIR_b_LTPsvPumpDeblockChrt */
    /* During: FsftPMIR_b_LTPsvPumpDeblock/FsftPMIR_b_LTPsvPumpDeblockChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpDeblock/FsftPMIR_b_LTPsvPumpDeblockChrt */
    /* Transition: '<S310>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpDeblock_VePMIR_b_LTPsvPumpDeblockFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpDeblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpDryRun(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpDryRun' */
    /* Merge: '<Root>/Merge_161' incorporates:
     *  Chart: '<S55>/FsftPMIR_b_LTPsvPumpDryRunChrt'
     *  SignalConversion generated from: '<S55>/VePMIR_b_LTPsvPumpDryRunFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpDryRun/FsftPMIR_b_LTPsvPumpDryRunChrt */
    /* During: FsftPMIR_b_LTPsvPumpDryRun/FsftPMIR_b_LTPsvPumpDryRunChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpDryRun/FsftPMIR_b_LTPsvPumpDryRunChrt */
    /* Transition: '<S311>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpDryRun_VePMIR_b_LTPsvPumpDryRunFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpDryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpFailsafe(void)
{
    /* Gateway: FsftPMIR_b_LTPsvPumpFailsafe/FsftPMIR_b_LTPsvPumpFailsafeChrt */
    /* During: FsftPMIR_b_LTPsvPumpFailsafe/FsftPMIR_b_LTPsvPumpFailsafeChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpFailsafe/FsftPMIR_b_LTPsvPumpFailsafeChrt */
    /* Transition: '<S312>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpMntrRPM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpMntrRPM' */
    /* Merge: '<Root>/Merge_168' incorporates:
     *  Chart: '<S57>/FsftPMIR_b_LTPsvPumpMntrRPMChrt'
     *  SignalConversion generated from: '<S57>/VePMIR_b_LTPsvPumpMntrRPMFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpMntrRPM/FsftPMIR_b_LTPsvPumpMntrRPMChrt */
    /* During: FsftPMIR_b_LTPsvPumpMntrRPM/FsftPMIR_b_LTPsvPumpMntrRPMChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpMntrRPM/FsftPMIR_b_LTPsvPumpMntrRPMChrt */
    /* Transition: '<S313>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpMntrRPM_VePMIR_b_LTPsvPumpMntrRPMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpMntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpNodeErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpNodeErr' */
    /* Merge: '<Root>/Merge_170' incorporates:
     *  Chart: '<S58>/FsftPMIR_b_LTPsvPumpNodeErrChrt'
     *  SignalConversion generated from: '<S58>/VePMIR_b_LTPsvPumpNodeErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpNodeErr/FsftPMIR_b_LTPsvPumpNodeErrChrt */
    /* During: FsftPMIR_b_LTPsvPumpNodeErr/FsftPMIR_b_LTPsvPumpNodeErrChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpNodeErr/FsftPMIR_b_LTPsvPumpNodeErrChrt */
    /* Transition: '<S314>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpNodeErr_VePMIR_b_LTPsvPumpNodeErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpNodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpOvrCrnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpOvrCrnt' */
    /* Merge: '<Root>/Merge_174' incorporates:
     *  Chart: '<S59>/FsftPMIR_b_LTPsvPumpOvrCrntChrt'
     *  SignalConversion generated from: '<S59>/VePMIR_b_LTPsvPumpOvrCrntFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpOvrCrnt/FsftPMIR_b_LTPsvPumpOvrCrntChrt */
    /* During: FsftPMIR_b_LTPsvPumpOvrCrnt/FsftPMIR_b_LTPsvPumpOvrCrntChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpOvrCrnt/FsftPMIR_b_LTPsvPumpOvrCrntChrt */
    /* Transition: '<S315>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpOvrCrnt_VePMIR_b_LTPsvPumpOvrCrntFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpOvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpRPMAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMAct' */
    /* Merge: '<Root>/Merge_177' incorporates:
     *  Chart: '<S60>/FsftPMIR_b_LTPsvPumpRPMActChrt'
     *  SignalConversion generated from: '<S60>/VePMIR_b_LTPsvPumpRPMActFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpRPMAct/FsftPMIR_b_LTPsvPumpRPMActChrt */
    /* During: FsftPMIR_b_LTPsvPumpRPMAct/FsftPMIR_b_LTPsvPumpRPMActChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpRPMAct/FsftPMIR_b_LTPsvPumpRPMActChrt */
    /* Transition: '<S316>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpRPMAct_VePMIR_b_LTPsvPumpRPMActFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_176' incorporates:
     *  Chart: '<S60>/FsftPMIR_b_LTPsvPumpRPMActChrt'
     *  SignalConversion generated from: '<S60>/VePMIR_b_LTPsvPumpRPMActSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpRPMAct_VePMIR_b_LTPsvPumpRPMActSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpRPMActPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMActPct' */
    /* Merge: '<Root>/Merge_152' incorporates:
     *  Chart: '<S61>/FsftPMIR_b_LTPsvPumpRPMActPctChrt'
     *  SignalConversion generated from: '<S61>/VePMIR_b_LTPsvPumpRPMActPctFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpRPMActPct/FsftPMIR_b_LTPsvPumpRPMActPctChrt */
    /* During: FsftPMIR_b_LTPsvPumpRPMActPct/FsftPMIR_b_LTPsvPumpRPMActPctChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpRPMActPct/FsftPMIR_b_LTPsvPumpRPMActPctChrt */
    /* Transition: '<S317>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpRPMActPct_VePMIR_b_LTPsvPumpRPMActPctFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_151' incorporates:
     *  Chart: '<S61>/FsftPMIR_b_LTPsvPumpRPMActPctChrt'
     *  SignalConversion generated from: '<S61>/VePMIR_b_LTPsvPumpRPMActPctSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpRPMActPct_VePMIR_b_LTPsvPumpRPMActPctSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMActPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpRPMTgt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMTgt' */
    /* Merge: '<Root>/Merge_179' incorporates:
     *  Chart: '<S62>/FsftPMIR_b_LTPsvPumpRPMTgtChrt'
     *  SignalConversion generated from: '<S62>/VePMIR_b_LTPsvPumpRPMTgtFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpRPMTgt/FsftPMIR_b_LTPsvPumpRPMTgtChrt */
    /* During: FsftPMIR_b_LTPsvPumpRPMTgt/FsftPMIR_b_LTPsvPumpRPMTgtChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpRPMTgt/FsftPMIR_b_LTPsvPumpRPMTgtChrt */
    /* Transition: '<S318>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpRPMTgt_VePMIR_b_LTPsvPumpRPMTgtFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpRPMTgtPct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMTgtPct' */
    /* Merge: '<Root>/Merge_185' incorporates:
     *  Chart: '<S63>/FsftPMIR_b_LTPsvPumpRPMTgtPctChrt'
     *  SignalConversion generated from: '<S63>/VePMIR_b_LTPsvPumpRPMTgtPctFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpRPMTgtPct/FsftPMIR_b_LTPsvPumpRPMTgtPctChrt */
    /* During: FsftPMIR_b_LTPsvPumpRPMTgtPct/FsftPMIR_b_LTPsvPumpRPMTgtPctChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpRPMTgtPct/FsftPMIR_b_LTPsvPumpRPMTgtPctChrt */
    /* Transition: '<S319>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpRPMTgtPct_VePMIR_b_LTPsvPumpRPMTgtPctFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpRPMTgtPct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpSuppVltErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpSuppVltErr' */
    /* Merge: '<Root>/Merge_149' incorporates:
     *  Chart: '<S64>/FsftPMIR_b_LTPsvPumpSuppVltErrChrt'
     *  SignalConversion generated from: '<S64>/VePMIR_b_LTPsvPumpSuppVltErrFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpSuppVltErr/FsftPMIR_b_LTPsvPumpSuppVltErrChrt */
    /* During: FsftPMIR_b_LTPsvPumpSuppVltErr/FsftPMIR_b_LTPsvPumpSuppVltErrChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpSuppVltErr/FsftPMIR_b_LTPsvPumpSuppVltErrChrt */
    /* Transition: '<S320>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpSuppVltErr_VePMIR_b_LTPsvPumpSuppVltErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpSuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPumpTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpTemp' */
    /* Merge: '<Root>/Merge_183' incorporates:
     *  Chart: '<S65>/FsftPMIR_b_LTPsvPumpTempChrt'
     *  SignalConversion generated from: '<S65>/VePMIR_b_LTPsvPumpTempFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPumpTemp/FsftPMIR_b_LTPsvPumpTempChrt */
    /* During: FsftPMIR_b_LTPsvPumpTemp/FsftPMIR_b_LTPsvPumpTempChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPumpTemp/FsftPMIR_b_LTPsvPumpTempChrt */
    /* Transition: '<S321>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpTemp_VePMIR_b_LTPsvPumpTempFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_182' incorporates:
     *  Chart: '<S65>/FsftPMIR_b_LTPsvPumpTempChrt'
     *  SignalConversion generated from: '<S65>/VePMIR_b_LTPsvPumpTempSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPumpTemp_VePMIR_b_LTPsvPumpTempSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPumpTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LTPsvPump_LmpHM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LTPsvPump_LmpHM' */
    /* Merge: '<Root>/Merge_166' incorporates:
     *  Chart: '<S66>/FsftPMIR_b_LTPsvPump_LmpHMChrt'
     *  SignalConversion generated from: '<S66>/VePMIR_b_LTPsvPump_LmpHMFA_write'
     */
    /* Gateway: FsftPMIR_b_LTPsvPump_LmpHM/FsftPMIR_b_LTPsvPump_LmpHMChrt */
    /* During: FsftPMIR_b_LTPsvPump_LmpHM/FsftPMIR_b_LTPsvPump_LmpHMChrt */
    /* Entry Internal: FsftPMIR_b_LTPsvPump_LmpHM/FsftPMIR_b_LTPsvPump_LmpHMChrt */
    /* Transition: '<S322>:2' */
    Rte_IrvWrite_FsftPMIR_b_LTPsvPump_LmpHM_VePMIR_b_LTPsvPump_LmpHMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LTPsvPump_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LT_ActvPmpOT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LT_ActvPmpOT' */
    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S67>/FsftPMIR_b_LT_ActvPmpOTChrt'
     *  SignalConversion generated from: '<S67>/VePMIR_b_LT_ActvPmpOTFA_write'
     */
    /* Gateway: FsftPMIR_b_LT_ActvPmpOT/FsftPMIR_b_LT_ActvPmpOTChrt */
    /* During: FsftPMIR_b_LT_ActvPmpOT/FsftPMIR_b_LT_ActvPmpOTChrt */
    /* Entry Internal: FsftPMIR_b_LT_ActvPmpOT/FsftPMIR_b_LT_ActvPmpOTChrt */
    /* Transition: '<S323>:2' */
    Rte_IrvWrite_FsftPMIR_b_LT_ActvPmpOT_VePMIR_b_LT_ActvPmpOTFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LT_ActvPmpOT' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LT_PsvPmp2Crnt(void)
{
    /* Gateway: FsftPMIR_b_LT_PsvPmp2Crnt/FsftPMIR_b_LT_PsvPmp2CrntChrt */
    /* During: FsftPMIR_b_LT_PsvPmp2Crnt/FsftPMIR_b_LT_PsvPmp2CrntChrt */
    /* Entry Internal: FsftPMIR_b_LT_PsvPmp2Crnt/FsftPMIR_b_LT_PsvPmp2CrntChrt */
    /* Transition: '<S324>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LT_PsvPmp2OT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmp2OT' */
    /* Merge: '<Root>/Merge_128' incorporates:
     *  Chart: '<S69>/FsftPMIR_b_LT_PsvPmp2OTChrt'
     *  SignalConversion generated from: '<S69>/VePMIR_b_LT_PsvPmp2OTFA_write'
     */
    /* Gateway: FsftPMIR_b_LT_PsvPmp2OT/FsftPMIR_b_LT_PsvPmp2OTChrt */
    /* During: FsftPMIR_b_LT_PsvPmp2OT/FsftPMIR_b_LT_PsvPmp2OTChrt */
    /* Entry Internal: FsftPMIR_b_LT_PsvPmp2OT/FsftPMIR_b_LT_PsvPmp2OTChrt */
    /* Transition: '<S325>:2' */
    Rte_IrvWrite_FsftPMIR_b_LT_PsvPmp2OT_VePMIR_b_LT_PsvPmp2OTFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmp2OT' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LT_PsvPmp2Vltg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmp2Vltg' */
    /* Merge: '<Root>/Merge_142' incorporates:
     *  Chart: '<S70>/FsftPMIR_b_LT_PsvPmp2VltgChrt'
     *  SignalConversion generated from: '<S70>/VePMIR_b_LT_PsvPmp2VltgFA_write'
     */
    /* Gateway: FsftPMIR_b_LT_PsvPmp2Vltg/FsftPMIR_b_LT_PsvPmp2VltgChrt */
    /* During: FsftPMIR_b_LT_PsvPmp2Vltg/FsftPMIR_b_LT_PsvPmp2VltgChrt */
    /* Entry Internal: FsftPMIR_b_LT_PsvPmp2Vltg/FsftPMIR_b_LT_PsvPmp2VltgChrt */
    /* Transition: '<S326>:2' */
    Rte_IrvWrite_FsftPMIR_b_LT_PsvPmp2Vltg_VePMIR_b_LT_PsvPmp2VltgFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmp2Vltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LT_PsvPmpCrnt(void)
{
    /* Gateway: FsftPMIR_b_LT_PsvPmpCrnt/FsftPMIR_b_LT_PsvPmpCrntChrt */
    /* During: FsftPMIR_b_LT_PsvPmpCrnt/FsftPMIR_b_LT_PsvPmpCrntChrt */
    /* Entry Internal: FsftPMIR_b_LT_PsvPmpCrnt/FsftPMIR_b_LT_PsvPmpCrntChrt */
    /* Transition: '<S327>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LT_PsvPmpOT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmpOT' */
    /* Merge: '<Root>/Merge_172' incorporates:
     *  Chart: '<S72>/FsftPMIR_b_LT_PsvPmpOTChrt'
     *  SignalConversion generated from: '<S72>/VePMIR_b_LT_PsvPmpOTFA_write'
     */
    /* Gateway: FsftPMIR_b_LT_PsvPmpOT/FsftPMIR_b_LT_PsvPmpOTChrt */
    /* During: FsftPMIR_b_LT_PsvPmpOT/FsftPMIR_b_LT_PsvPmpOTChrt */
    /* Entry Internal: FsftPMIR_b_LT_PsvPmpOT/FsftPMIR_b_LT_PsvPmpOTChrt */
    /* Transition: '<S328>:2' */
    Rte_IrvWrite_FsftPMIR_b_LT_PsvPmpOT_VePMIR_b_LT_PsvPmpOTFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmpOT' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_LT_PsvPmpVltg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmpVltg' */
    /* Merge: '<Root>/Merge_188' incorporates:
     *  Chart: '<S73>/FsftPMIR_b_LT_PsvPmpVltgChrt'
     *  SignalConversion generated from: '<S73>/VePMIR_b_LT_PsvPmpVltgFA_write'
     */
    /* Gateway: FsftPMIR_b_LT_PsvPmpVltg/FsftPMIR_b_LT_PsvPmpVltgChrt */
    /* During: FsftPMIR_b_LT_PsvPmpVltg/FsftPMIR_b_LT_PsvPmpVltgChrt */
    /* Entry Internal: FsftPMIR_b_LT_PsvPmpVltg/FsftPMIR_b_LT_PsvPmpVltgChrt */
    /* Transition: '<S329>:2' */
    Rte_IrvWrite_FsftPMIR_b_LT_PsvPmpVltg_VePMIR_b_LT_PsvPmpVltgFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_LT_PsvPmpVltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_ColdBiasSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_ColdBiasSts' */
    /* Merge: '<Root>/Merge_190' incorporates:
     *  Chart: '<S74>/FsftPMIR_b_TransAuxPmp2_ColdBiasStsChrt'
     *  SignalConversion generated from: '<S74>/VePMIR_b_TransAuxPmp2_ColdBiasStsFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_ColdBiasSts/FsftPMIR_b_TransAuxPmp2_ColdBiasStsChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_ColdBiasSts/FsftPMIR_b_TransAuxPmp2_ColdBiasStsChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_ColdBiasSts/FsftPMIR_b_TransAuxPmp2_ColdBiasStsChrt */
    /* Transition: '<S330>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_ColdBiasSts_VePMIR_b_TransAuxPmp2_ColdBiasStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_ColdBiasSts' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_Crnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_Crnt' */
    /* Merge: '<Root>/Merge_194' incorporates:
     *  Chart: '<S75>/FsftPMIR_b_TransAuxPmp2_CrntChrt'
     *  SignalConversion generated from: '<S75>/VePMIR_b_TransAuxPmp2_CrntFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_Crnt/FsftPMIR_b_TransAuxPmp2_CrntChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_Crnt/FsftPMIR_b_TransAuxPmp2_CrntChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_Crnt/FsftPMIR_b_TransAuxPmp2_CrntChrt */
    /* Transition: '<S331>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_Crnt_VePMIR_b_TransAuxPmp2_CrntFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_Crnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_CrntErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_CrntErr' */
    /* Merge: '<Root>/Merge_192' incorporates:
     *  Chart: '<S76>/FsftPMIR_b_TransAuxPmp2_CrntErrChrt'
     *  SignalConversion generated from: '<S76>/VePMIR_b_TransAuxPmp2_CrntErrFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_CrntErr/FsftPMIR_b_TransAuxPmp2_CrntErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_CrntErr/FsftPMIR_b_TransAuxPmp2_CrntErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_CrntErr/FsftPMIR_b_TransAuxPmp2_CrntErrChrt */
    /* Transition: '<S332>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_CrntErr_VePMIR_b_TransAuxPmp2_CrntErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_CrntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_DryRun(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_DryRun' */
    /* Merge: '<Root>/Merge_196' incorporates:
     *  Chart: '<S77>/FsftPMIR_b_TransAuxPmp2_DryRunChrt'
     *  SignalConversion generated from: '<S77>/VePMIR_b_TransAuxPmp2_DryRunFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_DryRun/FsftPMIR_b_TransAuxPmp2_DryRunChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_DryRun/FsftPMIR_b_TransAuxPmp2_DryRunChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_DryRun/FsftPMIR_b_TransAuxPmp2_DryRunChrt */
    /* Transition: '<S333>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_DryRun_VePMIR_b_TransAuxPmp2_DryRunFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_DryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_LmpHM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_LmpHM' */
    /* Merge: '<Root>/Merge_198' incorporates:
     *  Chart: '<S78>/FsftPMIR_b_TransAuxPmp2_LmpHMChrt'
     *  SignalConversion generated from: '<S78>/VePMIR_b_TransAuxPmp2_LmpHMFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_LmpHM/FsftPMIR_b_TransAuxPmp2_LmpHMChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_LmpHM/FsftPMIR_b_TransAuxPmp2_LmpHMChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_LmpHM/FsftPMIR_b_TransAuxPmp2_LmpHMChrt */
    /* Transition: '<S334>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_LmpHM_VePMIR_b_TransAuxPmp2_LmpHMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_MntrRPM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_MntrRPM' */
    /* Merge: '<Root>/Merge_200' incorporates:
     *  Chart: '<S79>/FsftPMIR_b_TransAuxPmp2_MntrRPMChrt'
     *  SignalConversion generated from: '<S79>/VePMIR_b_TransAuxPmp2_MntrRPMFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_MntrRPM/FsftPMIR_b_TransAuxPmp2_MntrRPMChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_MntrRPM/FsftPMIR_b_TransAuxPmp2_MntrRPMChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_MntrRPM/FsftPMIR_b_TransAuxPmp2_MntrRPMChrt */
    /* Transition: '<S335>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_MntrRPM_VePMIR_b_TransAuxPmp2_MntrRPMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_MntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_OilTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_OilTemp' */
    /* Merge: '<Root>/Merge_202' incorporates:
     *  Chart: '<S80>/FsftPMIR_b_TransAuxPmp2_OilTempChrt'
     *  SignalConversion generated from: '<S80>/VePMIR_b_TransAuxPmp2_OilTempFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_OilTemp/FsftPMIR_b_TransAuxPmp2_OilTempChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_OilTemp/FsftPMIR_b_TransAuxPmp2_OilTempChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_OilTemp/FsftPMIR_b_TransAuxPmp2_OilTempChrt */
    /* Transition: '<S336>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_OilTemp_VePMIR_b_TransAuxPmp2_OilTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_OilTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_PstRnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_PstRnSt' */
    /* Merge: '<Root>/Merge_204' incorporates:
     *  Chart: '<S81>/FsftPMIR_b_TransAuxPmp2_PstRnStChrt'
     *  SignalConversion generated from: '<S81>/VePMIR_b_TransAuxPmp2_PstRnStFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_PstRnSt/FsftPMIR_b_TransAuxPmp2_PstRnStChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_PstRnSt/FsftPMIR_b_TransAuxPmp2_PstRnStChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_PstRnSt/FsftPMIR_b_TransAuxPmp2_PstRnStChrt */
    /* Transition: '<S337>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_PstRnSt_VePMIR_b_TransAuxPmp2_PstRnStFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_RPMAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_RPMAct' */
    /* Merge: '<Root>/Merge_206' incorporates:
     *  Chart: '<S82>/FsftPMIR_b_TransAuxPmp2_RPMActChrt'
     *  SignalConversion generated from: '<S82>/VePMIR_b_TransAuxPmp2_RPMActFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_RPMAct/FsftPMIR_b_TransAuxPmp2_RPMActChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_RPMAct/FsftPMIR_b_TransAuxPmp2_RPMActChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_RPMAct/FsftPMIR_b_TransAuxPmp2_RPMActChrt */
    /* Transition: '<S338>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_RPMAct_VePMIR_b_TransAuxPmp2_RPMActFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_208' incorporates:
     *  Chart: '<S82>/FsftPMIR_b_TransAuxPmp2_RPMActChrt'
     *  SignalConversion generated from: '<S82>/VePMIR_b_TransAuxPmp2_RPMActSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_RPMAct_VePMIR_b_TransAuxPmp2_RPMActSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_RPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_RPMTgt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_RPMTgt' */
    /* Merge: '<Root>/Merge_209' incorporates:
     *  Chart: '<S83>/FsftPMIR_b_TransAuxPmp2_RPMTgtChrt'
     *  SignalConversion generated from: '<S83>/VePMIR_b_TransAuxPmp2_RPMTgtFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_RPMTgt/FsftPMIR_b_TransAuxPmp2_RPMTgtChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_RPMTgt/FsftPMIR_b_TransAuxPmp2_RPMTgtChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_RPMTgt/FsftPMIR_b_TransAuxPmp2_RPMTgtChrt */
    /* Transition: '<S339>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_RPMTgt_VePMIR_b_TransAuxPmp2_RPMTgtFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_RPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_RespErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_RespErr' */
    /* Merge: '<Root>/Merge_211' incorporates:
     *  Chart: '<S84>/FsftPMIR_b_TransAuxPmp2_RespErrChrt'
     *  SignalConversion generated from: '<S84>/VePMIR_b_TransAuxPmp2_RespErrFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_RespErr/FsftPMIR_b_TransAuxPmp2_RespErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_RespErr/FsftPMIR_b_TransAuxPmp2_RespErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_RespErr/FsftPMIR_b_TransAuxPmp2_RespErrChrt */
    /* Transition: '<S340>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_RespErr_VePMIR_b_TransAuxPmp2_RespErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_RespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_StallEvnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_StallEvnt' */
    /* Merge: '<Root>/Merge_212' incorporates:
     *  Chart: '<S85>/FsftPMIR_b_TransAuxPmp2_StallEvntChrt'
     *  SignalConversion generated from: '<S85>/VePMIR_b_TransAuxPmp2_StallEvntFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_StallEvnt/FsftPMIR_b_TransAuxPmp2_StallEvntChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_StallEvnt/FsftPMIR_b_TransAuxPmp2_StallEvntChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_StallEvnt/FsftPMIR_b_TransAuxPmp2_StallEvntChrt */
    /* Transition: '<S341>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_StallEvnt_VePMIR_b_TransAuxPmp2_StallEvntFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_StallEvnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_Temp' */
    /* Merge: '<Root>/Merge_216' incorporates:
     *  Chart: '<S86>/FsftPMIR_b_TransAuxPmp2_TempChrt'
     *  SignalConversion generated from: '<S86>/VePMIR_b_TransAuxPmp2_TempFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_Temp/FsftPMIR_b_TransAuxPmp2_TempChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_Temp/FsftPMIR_b_TransAuxPmp2_TempChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_Temp/FsftPMIR_b_TransAuxPmp2_TempChrt */
    /* Transition: '<S342>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_Temp_VePMIR_b_TransAuxPmp2_TempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_Temp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_TempErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_TempErr' */
    /* Merge: '<Root>/Merge_214' incorporates:
     *  Chart: '<S87>/FsftPMIR_b_TransAuxPmp2_TempErrChrt'
     *  SignalConversion generated from: '<S87>/VePMIR_b_TransAuxPmp2_TempErrFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_TempErr/FsftPMIR_b_TransAuxPmp2_TempErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_TempErr/FsftPMIR_b_TransAuxPmp2_TempErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_TempErr/FsftPMIR_b_TransAuxPmp2_TempErrChrt */
    /* Transition: '<S343>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_TempErr_VePMIR_b_TransAuxPmp2_TempErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_TempErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_Vltg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_Vltg' */
    /* Merge: '<Root>/Merge_224' incorporates:
     *  Chart: '<S88>/FsftPMIR_b_TransAuxPmp2_VltgChrt'
     *  SignalConversion generated from: '<S88>/VePMIR_b_TransAuxPmp2_VltgFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_Vltg/FsftPMIR_b_TransAuxPmp2_VltgChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_Vltg/FsftPMIR_b_TransAuxPmp2_VltgChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_Vltg/FsftPMIR_b_TransAuxPmp2_VltgChrt */
    /* Transition: '<S344>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_Vltg_VePMIR_b_TransAuxPmp2_VltgFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_Vltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp2_VltgErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_VltgErr' */
    /* Merge: '<Root>/Merge_222' incorporates:
     *  Chart: '<S89>/FsftPMIR_b_TransAuxPmp2_VltgErrChrt'
     *  SignalConversion generated from: '<S89>/VePMIR_b_TransAuxPmp2_VltgErrFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp2_VltgErr/FsftPMIR_b_TransAuxPmp2_VltgErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp2_VltgErr/FsftPMIR_b_TransAuxPmp2_VltgErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp2_VltgErr/FsftPMIR_b_TransAuxPmp2_VltgErrChrt */
    /* Transition: '<S345>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp2_VltgErr_VePMIR_b_TransAuxPmp2_VltgErrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp2_VltgErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_ColdBiasSts(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_ColdBiasSts/FsftPMIR_b_TransAuxPmp_ColdBiasStsChrt */
    /* During: FsftPMIR_b_TransAuxPmp_ColdBiasSts/FsftPMIR_b_TransAuxPmp_ColdBiasStsChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_ColdBiasSts/FsftPMIR_b_TransAuxPmp_ColdBiasStsChrt */
    /* Transition: '<S346>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_Crnt(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_Crnt/FsftPMIR_b_TransAuxPmp_CrntChrt */
    /* During: FsftPMIR_b_TransAuxPmp_Crnt/FsftPMIR_b_TransAuxPmp_CrntChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_Crnt/FsftPMIR_b_TransAuxPmp_CrntChrt */
    /* Transition: '<S347>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_CrntErr(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_CrntErr/FsftPMIR_b_TransAuxPmp_CrntErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp_CrntErr/FsftPMIR_b_TransAuxPmp_CrntErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_CrntErr/FsftPMIR_b_TransAuxPmp_CrntErrChrt */
    /* Transition: '<S348>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_DryRun(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_DryRun' */
    /* Merge: '<Root>/Merge_234' incorporates:
     *  Chart: '<S93>/FsftPMIR_b_TransAuxPmp_DryRunChrt'
     *  SignalConversion generated from: '<S93>/VePMIR_b_TransAuxPmp_DryRunFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp_DryRun/FsftPMIR_b_TransAuxPmp_DryRunChrt */
    /* During: FsftPMIR_b_TransAuxPmp_DryRun/FsftPMIR_b_TransAuxPmp_DryRunChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_DryRun/FsftPMIR_b_TransAuxPmp_DryRunChrt */
    /* Transition: '<S349>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp_DryRun_VePMIR_b_TransAuxPmp_DryRunFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_DryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_LmpHM(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_LmpHM/FsftPMIR_b_TransAuxPmp_LmpHMChrt */
    /* During: FsftPMIR_b_TransAuxPmp_LmpHM/FsftPMIR_b_TransAuxPmp_LmpHMChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_LmpHM/FsftPMIR_b_TransAuxPmp_LmpHMChrt */
    /* Transition: '<S350>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_MntrRPM(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_MntrRPM/FsftPMIR_b_TransAuxPmp_MntrRPMChrt */
    /* During: FsftPMIR_b_TransAuxPmp_MntrRPM/FsftPMIR_b_TransAuxPmp_MntrRPMChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_MntrRPM/FsftPMIR_b_TransAuxPmp_MntrRPMChrt */
    /* Transition: '<S351>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_OilTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_OilTemp' */
    /* Merge: '<Root>/Merge_238' incorporates:
     *  Chart: '<S96>/FsftPMIR_b_TransAuxPmp_OilTempChrt'
     *  SignalConversion generated from: '<S96>/VePMIR_b_TransAuxPmp_OilTempFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp_OilTemp/FsftPMIR_b_TransAuxPmp_OilTempChrt */
    /* During: FsftPMIR_b_TransAuxPmp_OilTemp/FsftPMIR_b_TransAuxPmp_OilTempChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_OilTemp/FsftPMIR_b_TransAuxPmp_OilTempChrt */
    /* Transition: '<S352>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp_OilTemp_VePMIR_b_TransAuxPmp_OilTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_OilTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_PstRnSt(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_PstRnSt/FsftPMIR_b_TransAuxPmp_PstRnStChrt */
    /* During: FsftPMIR_b_TransAuxPmp_PstRnSt/FsftPMIR_b_TransAuxPmp_PstRnStChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_PstRnSt/FsftPMIR_b_TransAuxPmp_PstRnStChrt */
    /* Transition: '<S353>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_RPMAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_RPMAct' */
    /* Merge: '<Root>/Merge_242' incorporates:
     *  Chart: '<S98>/FsftPMIR_b_TransAuxPmp_RPMActChrt'
     *  SignalConversion generated from: '<S98>/VePMIR_b_TransAuxPmp_RPMActFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp_RPMAct/FsftPMIR_b_TransAuxPmp_RPMActChrt */
    /* During: FsftPMIR_b_TransAuxPmp_RPMAct/FsftPMIR_b_TransAuxPmp_RPMActChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_RPMAct/FsftPMIR_b_TransAuxPmp_RPMActChrt */
    /* Transition: '<S354>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp_RPMAct_VePMIR_b_TransAuxPmp_RPMActFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_241' incorporates:
     *  Chart: '<S98>/FsftPMIR_b_TransAuxPmp_RPMActChrt'
     *  SignalConversion generated from: '<S98>/VePMIR_b_TransAuxPmp_RPMActSNA_write'
     */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp_RPMAct_VePMIR_b_TransAuxPmp_RPMActSNA_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_RPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_RPMTgt(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_RPMTgt/FsftPMIR_b_TransAuxPmp_RPMTgtChrt */
    /* During: FsftPMIR_b_TransAuxPmp_RPMTgt/FsftPMIR_b_TransAuxPmp_RPMTgtChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_RPMTgt/FsftPMIR_b_TransAuxPmp_RPMTgtChrt */
    /* Transition: '<S355>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_RespErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_RespErr' */
    /* Merge: '<Root>/Merge_244' incorporates:
     *  Chart: '<S100>/FsftPMIR_b_TransAuxPmp_RespErrChrt'
     *  SignalConversion generated from: '<S100>/VePMIR_b_TransAuxPmp_RespErr_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp_RespErr/FsftPMIR_b_TransAuxPmp_RespErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp_RespErr/FsftPMIR_b_TransAuxPmp_RespErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_RespErr/FsftPMIR_b_TransAuxPmp_RespErrChrt */
    /* Transition: '<S356>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp_RespErr_VePMIR_b_TransAuxPmp_RespErr_write_IRV
        (KePMIR_b_TransAuxPmp_RespErr);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_RespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_StallEvnt(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_StallEvnt/FsftPMIR_b_TransAuxPmp_StallEvntChrt */
    /* During: FsftPMIR_b_TransAuxPmp_StallEvnt/FsftPMIR_b_TransAuxPmp_StallEvntChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_StallEvnt/FsftPMIR_b_TransAuxPmp_StallEvntChrt */
    /* Transition: '<S357>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_Temp' */
    /* Merge: '<Root>/Merge_250' incorporates:
     *  Chart: '<S102>/FsftPMIR_b_TransAuxPmp_TempChrt'
     *  SignalConversion generated from: '<S102>/VePMIR_b_TransAuxPmp_TempFA_write'
     */
    /* Gateway: FsftPMIR_b_TransAuxPmp_Temp/FsftPMIR_b_TransAuxPmp_TempChrt */
    /* During: FsftPMIR_b_TransAuxPmp_Temp/FsftPMIR_b_TransAuxPmp_TempChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_Temp/FsftPMIR_b_TransAuxPmp_TempChrt */
    /* Transition: '<S358>:2' */
    Rte_IrvWrite_FsftPMIR_b_TransAuxPmp_Temp_VePMIR_b_TransAuxPmp_TempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMIR_b_TransAuxPmp_Temp' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_TempErr(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_TempErr/FsftPMIR_b_TransAuxPmp_TempErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp_TempErr/FsftPMIR_b_TransAuxPmp_TempErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_TempErr/FsftPMIR_b_TransAuxPmp_TempErrChrt */
    /* Transition: '<S359>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_Vltg(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_Vltg/FsftPMIR_b_TransAuxPmp_VltgChrt */
    /* During: FsftPMIR_b_TransAuxPmp_Vltg/FsftPMIR_b_TransAuxPmp_VltgChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_Vltg/FsftPMIR_b_TransAuxPmp_VltgChrt */
    /* Transition: '<S360>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMIR_b_TransAuxPmp_VltgErr(void)
{
    /* Gateway: FsftPMIR_b_TransAuxPmp_VltgErr/FsftPMIR_b_TransAuxPmp_VltgErrChrt */
    /* During: FsftPMIR_b_TransAuxPmp_VltgErr/FsftPMIR_b_TransAuxPmp_VltgErrChrt */
    /* Entry Internal: FsftPMIR_b_TransAuxPmp_VltgErr/FsftPMIR_b_TransAuxPmp_VltgErrChrt */
    /* Transition: '<S361>:2' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMPR_e_LTPsvPump2_PstRnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMPR_e_LTPsvPump2_PstRnSt' */
    /* Outport: '<Root>/VePMIR_b_LTPsvPump2_PstRnStFA' incorporates:
     *  Chart: '<S106>/FsftPMPR_e_LTPsvPump2_PstRnStChrt'
     *  SignalConversion generated from: '<S106>/VePMPR_b_LTPsvPump2_PstRnStFA'
     */
    /* Gateway: FsftPMPR_e_LTPsvPump2_PstRnSt/FsftPMPR_e_LTPsvPump2_PstRnStChrt */
    /* During: FsftPMPR_e_LTPsvPump2_PstRnSt/FsftPMPR_e_LTPsvPump2_PstRnStChrt */
    /* Entry Internal: FsftPMPR_e_LTPsvPump2_PstRnSt/FsftPMPR_e_LTPsvPump2_PstRnStChrt */
    /* Transition: '<S362>:2' */
    (void)Rte_Write_VePMIR_b_LTPsvPump2_PstRnStFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMPR_e_LTPsvPump2_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) FsftPMPR_e_LTPsvPump_PstRnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMPR_e_LTPsvPump_PstRnSt' */
    /* Outport: '<Root>/VePMIR_b_LTPsvPump_PstRnStFA' incorporates:
     *  Chart: '<S107>/FsftPMPR_e_LTPsvPump_PstRnStChrt'
     *  SignalConversion generated from: '<S107>/VePMPR_b_LTPsvPump_PstRnStFA'
     */
    /* Gateway: FsftPMPR_e_LTPsvPump_PstRnSt/FsftPMPR_e_LTPsvPump_PstRnStChrt */
    /* During: FsftPMPR_e_LTPsvPump_PstRnSt/FsftPMPR_e_LTPsvPump_PstRnStChrt */
    /* Entry Internal: FsftPMPR_e_LTPsvPump_PstRnSt/FsftPMPR_e_LTPsvPump_PstRnStChrt */
    /* Transition: '<S363>:2' */
    (void)Rte_Write_VePMIR_b_LTPsvPump_PstRnStFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMPR_e_LTPsvPump_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) IOControl_IOCD00D_HigTemAuxPump(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCo_c;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD00D_HigTemAuxPump' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD00D_HigTemAuxPump'
     */
    /* SignalConversion generated from: '<S250>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD00D_HigTemAuxPump_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCo_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD00D_HigTemAuxPump' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD00D_HigTemAuxPump' */
    (void)Rte_Read_VeDCAB_Pct_IOCD00D_HigTemAuxPump_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD00D_HigTemAuxPump' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD00D_HigTemAuxPump'
     */
    /* Switch: '<S250>/Switch' incorporates:
     *  Constant: '<S1628>/Constant'
     *  Constant: '<S1629>/Constant'
     *  Constant: '<S1631>/Constant'
     *  Constant: '<S1632>/Constant'
     *  RelationalOperator: '<S250>/Equal'
     *  RelationalOperator: '<S250>/Equal1'
     *  Switch: '<S250>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_c) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_c) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S250>/Switch1' incorporates:
         *  Constant: '<S1630>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S250>/Switch' */

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S250>/VePMIF_e_HTAP_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD00D_HigTemAuxPump_HTAP_DVC_IO_Pct_INIT_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S250>/VeDCAB_Pct_IOCD00D_HigTemAuxPump'
     *  SignalConversion generated from: '<S250>/VePMIF_Pct_HTAP_Cmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD00D_HigTemAuxPump_HTAP_DVC_Pct_INIT_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD00D_HigTemAuxPump' */
}

/* Output function */
FUNC(void, PMIR_CODE) IOControl_IOCD016_MtrElecCoolPmpA(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCo_n;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD016_MtrElecCoolPmpA' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD016_MtrElecCoolPmpA'
     */
    /* SignalConversion generated from: '<S251>/VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD016_MtrElecCoolPmpA_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCo_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD016_MtrElecCoolPmpA' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD016_MtrElecCoolPmpA' */
    (void)Rte_Read_VeDCAB_Pct_IOCD016_MtrElecCoolPmpA_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD016_MtrElecCoolPmpA' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD016_MtrElecCoolPmpA'
     */
    /* Switch: '<S251>/Switch' incorporates:
     *  Constant: '<S1633>/Constant'
     *  Constant: '<S1634>/Constant'
     *  Constant: '<S1636>/Constant'
     *  Constant: '<S1637>/Constant'
     *  RelationalOperator: '<S251>/Equal'
     *  RelationalOperator: '<S251>/Equal1'
     *  Switch: '<S251>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_n) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_n) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S1635>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S251>/Switch' */

    /* Merge: '<Root>/Merge_158' incorporates:
     *  SignalConversion generated from: '<S251>/VePMIF_e_LTTP_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD016_MtrElecCoolPmpA_LTPP_DVC_IO_Cntl_INIT_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_157' incorporates:
     *  SignalConversion generated from: '<S251>/VeDCAB_Pct_IOCD016_MtrElecCoolPmpA'
     *  SignalConversion generated from: '<S251>/VePMIF_Pct_LTTP_Cmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD016_MtrElecCoolPmpA_LTPP_DVC_Pct_INIT_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD016_MtrElecCoolPmpA' */
}

/* Output function */
FUNC(void, PMIR_CODE) IOControl_IOCD017_MtrElecCoolPmpB(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOC_cm;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD017_MtrElecCoolPmpB' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD017_MtrElecCoolPmpB'
     */
    /* SignalConversion generated from: '<S252>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD017_MtrElecCoolPmpB_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOC_cm);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD017_MtrElecCoolPmpB' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD017_MtrElecCoolPmpB' */
    (void)Rte_Read_VeDCAB_Pct_IOCD017_MtrElecCoolPmpB_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD017_MtrElecCoolPmpB' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD017_MtrElecCoolPmpB'
     */
    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S1638>/Constant'
     *  Constant: '<S1639>/Constant'
     *  Constant: '<S1641>/Constant'
     *  Constant: '<S1642>/Constant'
     *  RelationalOperator: '<S252>/Equal'
     *  RelationalOperator: '<S252>/Equal1'
     *  Switch: '<S252>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOC_cm) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOC_cm) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S1640>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S252>/Switch' */

    /* Merge: '<Root>/Merge_145' incorporates:
     *  SignalConversion generated from: '<S252>/VePMIF_e_LTPP2_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD017_MtrElecCoolPmpB_LTPP2_DVC_IO_Pct_INIT_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_144' incorporates:
     *  SignalConversion generated from: '<S252>/VeDCAB_Pct_IOCD017_MtrElecCoolPmpB'
     *  SignalConversion generated from: '<S252>/VePMIF_Pct_LTPP2_Cmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD017_MtrElecCoolPmpB_LTPP2_DVC_Pct_INIT_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD017_MtrElecCoolPmpB' */
}

/* Output function */
FUNC(void, PMIR_CODE) IOControl_IOCD019_BatteryCoolPump(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOC_ec;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD019_BatteryCoolPump' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD019_BatteryCoolPump'
     */
    /* SignalConversion generated from: '<S253>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD019_BatteryCoolPump_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOC_ec);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD019_BatteryCoolPump' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD019_BatteryCoolPump' */
    (void)Rte_Read_VeDCAB_Pct_IOCD019_BatteryCoolPump_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD019_BatteryCoolPump' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD019_BatteryCoolPump'
     */
    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S1643>/Constant'
     *  Constant: '<S1644>/Constant'
     *  Constant: '<S1646>/Constant'
     *  Constant: '<S1647>/Constant'
     *  RelationalOperator: '<S253>/Equal'
     *  RelationalOperator: '<S253>/Equal1'
     *  Switch: '<S253>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOC_ec) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOC_ec) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S253>/Switch1' incorporates:
         *  Constant: '<S1645>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S253>/Switch' */

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S253>/VePMIF_e_LTAP_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD019_BatteryCoolPump_LTAP_DVC_IO_Pct_INIT_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S253>/VeDCAB_Pct_IOCD019_BatteryCoolPump'
     *  SignalConversion generated from: '<S253>/VePMIF_Pct_LTAP_Cmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD019_BatteryCoolPump_LTAP_DVC_Pct_INIT_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD019_BatteryCoolPump' */
}

/* Output function */
FUNC(void, PMIR_CODE) IOControl_IOCD027_PowOilPumACon_Pump_Speed(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCont;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD027_PowOilPumACon_Pump_Speed' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD027_PowOilPumACon_Pump_Speed'
     */
    /* SignalConversion generated from: '<S254>/VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD027_PowOilPumACon_Pump_Speed_Op_Value(
        &rtb_TmpSignalConversionAtVeDCAB_e_IOCont);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD027_PowOilPumACon_Pump_Speed' */

    /* Inport: '<Root>/VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed' */
    (void)Rte_Read_VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD027_PowOilPumACon_Pump_Speed' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD027_PowOilPumACon_Pump_Speed'
     */
    /* Switch: '<S254>/Switch' incorporates:
     *  Constant: '<S1648>/Constant'
     *  Constant: '<S1649>/Constant'
     *  Constant: '<S1651>/Constant'
     *  Constant: '<S1652>/Constant'
     *  RelationalOperator: '<S254>/Equal'
     *  RelationalOperator: '<S254>/Equal1'
     *  Switch: '<S254>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S254>/Switch1' incorporates:
         *  Constant: '<S1650>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S254>/Switch' */

    /* Merge: '<Root>/Merge_228' incorporates:
     *  SignalConversion generated from: '<S254>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD027_PowOilPumACon_Pump_Speed_DVC_AuxPmpSpdEnbl_INIT_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_229' incorporates:
     *  SignalConversion generated from: '<S254>/VeDCAB_n_IOCD027_PowOilPumACon_Pump_Speed'
     *  SignalConversion generated from: '<S254>/VePMIR_n_TAP_SpdDsrd_write'
     */
    Rte_IrvWrite_IOControl_IOCD027_PowOilPumACon_Pump_Speed_DVC_AuxPmpSpdDsrd_INIT_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD027_PowOilPumACon_Pump_Speed' */
}

/* Output function */
FUNC(void, PMIR_CODE) IOControl_IOCD028_PowOilPumBCon_Pump_Speed(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCo_g;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD028_PowOilPumBCon_Pump_Speed' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD028_PowOilPumBCon_Pump_Speed'
     */
    /* SignalConversion generated from: '<S255>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_Op_Value(
        &rtb_TmpSignalConversionAtVeDCAB_e_IOCo_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD028_PowOilPumBCon_Pump_Speed' */

    /* Inport: '<Root>/VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed' */
    (void)Rte_Read_VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD028_PowOilPumBCon_Pump_Speed' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD028_PowOilPumBCon_Pump_Speed'
     */
    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S1653>/Constant'
     *  Constant: '<S1654>/Constant'
     *  Constant: '<S1656>/Constant'
     *  Constant: '<S1657>/Constant'
     *  RelationalOperator: '<S255>/Equal'
     *  RelationalOperator: '<S255>/Equal1'
     *  Switch: '<S255>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_g) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCo_g) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  Constant: '<S1655>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S255>/Switch' */

    /* Merge: '<Root>/Merge_218' incorporates:
     *  SignalConversion generated from: '<S255>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_DVC_AuxPmp2SpdEnbl_INIT_write_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_219' incorporates:
     *  SignalConversion generated from: '<S255>/VeDCAB_n_IOCD028_PowOilPumBCon_Pump_Speed'
     *  SignalConversion generated from: '<S255>/VePMIR_n_TAP2_SpdDsrd_write'
     */
    Rte_IrvWrite_IOControl_IOCD028_PowOilPumBCon_Pump_Speed_DVC_AuxPmp2SpdDsrd_INIT_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD028_PowOilPumBCon_Pump_Speed' */
}

/* Output function */
FUNC(void, PMIR_CODE) IOControl_IOCD043_PWMElectricOilPump(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCont;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD043_PWMElectricOilPump' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD043_PWMElectricOilPump'
     */
    /* SignalConversion generated from: '<S256>/VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD043_PWMElectricOilPump_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCont);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD043_PWMElectricOilPump' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD043_PWMElectricOilPump' */
    (void)Rte_Read_VeDCAB_Pct_IOCD043_PWMElectricOilPump_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD043_PWMElectricOilPump' incorporates:
     *  SubSystem: '<Root>/Runnable_IOControl_IOCD043_PWMElectricOilPump'
     */
    /* Switch: '<S256>/Switch' incorporates:
     *  Constant: '<S1658>/Constant'
     *  Constant: '<S1659>/Constant'
     *  Constant: '<S1661>/Constant'
     *  Constant: '<S1662>/Constant'
     *  RelationalOperator: '<S256>/Equal'
     *  RelationalOperator: '<S256>/Equal1'
     *  Switch: '<S256>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S256>/Switch1' incorporates:
         *  Constant: '<S1660>/Constant'
         */
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDCAB = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S256>/Switch' */

    /* Merge: '<Root>/Merge_226' incorporates:
     *  SignalConversion generated from: '<S256>/VePMIR_e_PWM_EOP_IOCtrlMode_write'
     */
    Rte_IrvWrite_IOControl_IOCD043_PWMElectricOilPump_PWM_EOP_IOCtrlMode_INIT_IRV
        (rtb_TmpSignalConversionAtVeDCAB);

    /* Merge: '<Root>/Merge_227' incorporates:
     *  SignalConversion generated from: '<S256>/VeDCAB_Pct_IOCD043_PWMElectricOilPump'
     *  SignalConversion generated from: '<S256>/VePMIR_Pct_PWM_EOP_IOCtrlSpd_write'
     */
    Rte_IrvWrite_IOControl_IOCD043_PWMElectricOilPump_PWM_EOP_IOCtrlSpd_INIT_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD043_PWMElectricOilPump' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIF_DVC_HT_AuxPmpCmd(VAR(TeTAIR_e_IO_CntrlSt,
    AUTOMATIC) LePMIF_e_HT_AuxPmpCmd_IO_CntrlSt, VAR(float32, AUTOMATIC)
    LePMIF_n_HT_AuxPmpCmd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIF_DVC_HT_AuxPmpCmd' */
    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S111>/LePMIF_e_HT_AuxPmpCmd_IO_CntrlSt'
     *  SignalConversion generated from: '<S111>/VePMIF_e_HT_AuxPmpCmd_IO_CntrlSt_write'
     */
    /* Gateway: PokePMIF_DVC_HT_AuxPmpCmd/PokePMIF_DVC_HT_AuxPmpCmdChrt */
    /* During: PokePMIF_DVC_HT_AuxPmpCmd/PokePMIF_DVC_HT_AuxPmpCmdChrt */
    /* Entry Internal: PokePMIF_DVC_HT_AuxPmpCmd/PokePMIF_DVC_HT_AuxPmpCmdChrt */
    /* Transition: '<S1476>:2' */
    Rte_IrvWrite_PokePMIF_DVC_HT_AuxPmpCmd_HTAP_DVC_FlwRt_IO_Cntl_INIT_write_IRV
        (LePMIF_e_HT_AuxPmpCmd_IO_CntrlSt);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S111>/LePMIF_n_HT_AuxPmpCmd'
     *  SignalConversion generated from: '<S111>/VePMIF_n_HT_AuxPmpCmd_write'
     */
    Rte_IrvWrite_PokePMIF_DVC_HT_AuxPmpCmd_HTAP_DVC_RPM_BatClFlwRt_INIT_write_IRV
        (LePMIF_n_HT_AuxPmpCmd);

    /* End of Outputs for SubSystem: '<Root>/PokePMIF_DVC_HT_AuxPmpCmd' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIF_DVC_LT_ActvPmpCmd(VAR(TeTAIR_e_IO_CntrlSt,
    AUTOMATIC) LePMIF_e_LT_ActvPmpCmd_IO_CntrlSt, VAR(float32, AUTOMATIC)
    LePMIF_n_LT_ActvPmpCmd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIF_DVC_LT_ActvPmpCmd' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S112>/LePMIF_e_LT_ActvPmpCmd_IO_CntrlSt'
     *  SignalConversion generated from: '<S112>/VePMIF_e_LT_ActvPmpCmd_IO_CntrlSt_write'
     */
    /* Gateway: PokePMIF_DVC_LT_ActvPmpCmd/PokePMIF_DVC_LT_ActvPmpCmdChrt */
    /* During: PokePMIF_DVC_LT_ActvPmpCmd/PokePMIF_DVC_LT_ActvPmpCmdChrt */
    /* Entry Internal: PokePMIF_DVC_LT_ActvPmpCmd/PokePMIF_DVC_LT_ActvPmpCmdChrt */
    /* Transition: '<S1477>:2' */
    Rte_IrvWrite_PokePMIF_DVC_LT_ActvPmpCmd_LTAP_DVC_FlwRt_IO_Cntl_INIT_write_IRV
        (LePMIF_e_LT_ActvPmpCmd_IO_CntrlSt);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S112>/LePMIF_n_LT_ActvPmpCmd'
     *  SignalConversion generated from: '<S112>/VePMIF_n_LT_ActvPmpCmd_write'
     */
    Rte_IrvWrite_PokePMIF_DVC_LT_ActvPmpCmd_LTAP_DVC_RPM_BatClFlwRt_INIT_write_IRV
        (LePMIF_n_LT_ActvPmpCmd);

    /* End of Outputs for SubSystem: '<Root>/PokePMIF_DVC_LT_ActvPmpCmd' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIF_DVC_LT_PsvPmpCmd(VAR(TeTAIR_e_IO_CntrlSt,
    AUTOMATIC) LePMIF_e_LT_PsvPmpCmd_IO_CntrlSt, VAR(float32, AUTOMATIC)
    LePMIF_n_LT_PsvPmpCmd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIF_DVC_LT_PsvPmpCmd' */
    /* Merge: '<Root>/Merge_156' incorporates:
     *  SignalConversion generated from: '<S113>/LePMIF_e_LT_PsvPmpCmd_IO_CntrlSt'
     *  SignalConversion generated from: '<S113>/VePMIF_e_LT_PsvPmpCmd_IO_CntrlSt_write'
     */
    /* Gateway: PokePMIF_DVC_LT_PsvPmpCmd/PokePMIF_DVC_LT_PsvPmpCmdChrt */
    /* During: PokePMIF_DVC_LT_PsvPmpCmd/PokePMIF_DVC_LT_PsvPmpCmdChrt */
    /* Entry Internal: PokePMIF_DVC_LT_PsvPmpCmd/PokePMIF_DVC_LT_PsvPmpCmdChrt */
    /* Transition: '<S1478>:2' */
    Rte_IrvWrite_PokePMIF_DVC_LT_PsvPmpCmd_LTPP_DVC_FlwRt_IO_Cntl_INIT_write_IRV
        (LePMIF_e_LT_PsvPmpCmd_IO_CntrlSt);

    /* Merge: '<Root>/Merge_155' incorporates:
     *  SignalConversion generated from: '<S113>/LePMIF_n_LT_PsvPmpCmd'
     *  SignalConversion generated from: '<S113>/VePMIF_n_LT_PsvPmpCmd_write'
     */
    Rte_IrvWrite_PokePMIF_DVC_LT_PsvPmpCmd_LTPP_DVC_RPM_PEClFlwRt_INIT_write_IRV
        (LePMIF_n_LT_PsvPmpCmd);

    /* End of Outputs for SubSystem: '<Root>/PokePMIF_DVC_LT_PsvPmpCmd' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_I_FCCPmpSuppCrnt(VAR(float32, AUTOMATIC)
    LePMIR_I_FCCPmpSuppCrnt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_I_FCCPmpSuppCrnt' */
    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S114>/LePMIR_I_FCCPmpSuppCrnt'
     *  SignalConversion generated from: '<S114>/VePMIR_I_FCCPmpSuppCrnt_write'
     */
    /* Gateway: PokePMIR_I_FCCPmpSuppCrnt/PokePMIR_I_FCCPmpSuppCrntChrt */
    /* During: PokePMIR_I_FCCPmpSuppCrnt/PokePMIR_I_FCCPmpSuppCrntChrt */
    /* Entry Internal: PokePMIR_I_FCCPmpSuppCrnt/PokePMIR_I_FCCPmpSuppCrntChrt */
    /* Transition: '<S1479>:2' */
    Rte_IrvWrite_PokePMIR_I_FCCPmpSuppCrnt_FCCPmpSuppCrnt_INIT_write_IRV
        (LePMIR_I_FCCPmpSuppCrnt);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_I_FCCPmpSuppCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_I_HT_AuxPmpCrnt(VAR(float32, AUTOMATIC)
    LePMIR_I_HT_AuxPmpCrnt, VAR(boolean, AUTOMATIC) LePMIR_b_HT_AuxPmpCrntFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_I_HT_AuxPmpCrnt' */
    /* Chart: '<S115>/PokePMIR_I_HT_AuxPmpCrntChrt' incorporates:
     *  SignalConversion generated from: '<S115>/LePMIR_I_HT_AuxPmpCrnt'
     *  SignalConversion generated from: '<S115>/LePMIR_b_HT_AuxPmpCrntFA'
     */
    /* Gateway: PokePMIR_I_HT_AuxPmpCrnt/PokePMIR_I_HT_AuxPmpCrntChrt */
    /* During: PokePMIR_I_HT_AuxPmpCrnt/PokePMIR_I_HT_AuxPmpCrntChrt */
    /* Entry Internal: PokePMIR_I_HT_AuxPmpCrnt/PokePMIR_I_HT_AuxPmpCrntChrt */
    /* Transition: '<S1480>:2' */
    if (!LePMIR_b_HT_AuxPmpCrntFA)
    {
        /* Transition: '<S1480>:3' */
        /* Transition: '<S1480>:15' */
        PMIR_ac_B.LePMIR_I_HT_AuxPmpCrnt_out = LePMIR_I_HT_AuxPmpCrnt;

        /* Transition: '<S1480>:18' */
    }
    else
    {
        /* Transition: '<S1480>:4' */
    }

    /* End of Chart: '<S115>/PokePMIR_I_HT_AuxPmpCrntChrt' */

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S115>/VePMIR_I_HT_AuxPmpCrnt_write'
     * */
    Rte_IrvWrite_PokePMIR_I_HT_AuxPmpCrnt_HTAuxPumpCrnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_I_HT_AuxPmpCrnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_I_HT_AuxPmpCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_I_LTActPumpCrnt(VAR(float32, AUTOMATIC)
    LePMIR_I_LTActPumpCrnt, VAR(boolean, AUTOMATIC) LePMIR_b_LTActPumpCrntFA)
{
    boolean rtb_LePMIR_b_LTActPumpCrntFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_I_LTActPumpCrnt' */
    /* Chart: '<S116>/PokePMIR_I_LTActPumpCrntChrt' incorporates:
     *  SignalConversion generated from: '<S116>/LePMIR_I_LTActPumpCrnt'
     *  SignalConversion generated from: '<S116>/LePMIR_b_LTActPumpCrntFA'
     */
    /* Gateway: PokePMIR_I_LTActPumpCrnt/PokePMIR_I_LTActPumpCrntChrt */
    /* During: PokePMIR_I_LTActPumpCrnt/PokePMIR_I_LTActPumpCrntChrt */
    /* Entry Internal: PokePMIR_I_LTActPumpCrnt/PokePMIR_I_LTActPumpCrntChrt */
    /* Transition: '<S1481>:2' */
    if (!LePMIR_b_LTActPumpCrntFA)
    {
        /* Transition: '<S1481>:3' */
        /* Transition: '<S1481>:15' */
        PMIR_ac_B.LePMIR_I_LTActPumpCrnt_out = LePMIR_I_LTActPumpCrnt;
        rtb_LePMIR_b_LTActPumpCrntFA_out = false;

        /* Transition: '<S1481>:18' */
    }
    else
    {
        /* Transition: '<S1481>:4' */
        rtb_LePMIR_b_LTActPumpCrntFA_out = true;
    }

    /* End of Chart: '<S116>/PokePMIR_I_LTActPumpCrntChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S116>/VePMIR_I_LTActPumpCrnt_write'
     * */
    Rte_IrvWrite_PokePMIR_I_LTActPumpCrnt_LTActPumpCrnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_I_LTActPumpCrnt_out);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S116>/VePMIR_b_LTActPumpCrntFA_write'
     * */
    Rte_IrvWrite_PokePMIR_I_LTActPumpCrnt_VePMIR_b_LTActPumpCrntFA_write_IRV
        (rtb_LePMIR_b_LTActPumpCrntFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_I_LTActPumpCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_I_LT_PsvPmp2Crnt(VAR(float32, AUTOMATIC)
    LePMIR_I_LT_PsvPmp2Crnt, VAR(boolean, AUTOMATIC) LePMIR_b_LT_PsvPmp2CrntFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_I_LT_PsvPmp2Crnt' */
    /* Chart: '<S117>/PokePMIR_I_LT_PsvPmp2CrntChrt' incorporates:
     *  SignalConversion generated from: '<S117>/LePMIR_I_LT_PsvPmp2Crnt'
     *  SignalConversion generated from: '<S117>/LePMIR_b_LT_PsvPmp2CrntFA'
     */
    /* Gateway: PokePMIR_I_LT_PsvPmp2Crnt/PokePMIR_I_LT_PsvPmp2CrntChrt */
    /* During: PokePMIR_I_LT_PsvPmp2Crnt/PokePMIR_I_LT_PsvPmp2CrntChrt */
    /* Entry Internal: PokePMIR_I_LT_PsvPmp2Crnt/PokePMIR_I_LT_PsvPmp2CrntChrt */
    /* Transition: '<S1482>:2' */
    if (!LePMIR_b_LT_PsvPmp2CrntFA)
    {
        /* Transition: '<S1482>:3' */
        /* Transition: '<S1482>:15' */
        PMIR_ac_B.LePMIR_I_LT_PsvPmp2Crnt_out = LePMIR_I_LT_PsvPmp2Crnt;

        /* Transition: '<S1482>:18' */
    }
    else
    {
        /* Transition: '<S1482>:4' */
    }

    /* End of Chart: '<S117>/PokePMIR_I_LT_PsvPmp2CrntChrt' */

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S117>/VePMIR_I_LT_PsvPmp2Crnt_write'
     * */
    Rte_IrvWrite_PokePMIR_I_LT_PsvPmp2Crnt_LTPSVPump2Crnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_I_LT_PsvPmp2Crnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_I_LT_PsvPmp2Crnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_I_LT_PsvPmpCrnt(VAR(float32, AUTOMATIC)
    LePMIR_I_LT_PsvPmpCrnt, VAR(boolean, AUTOMATIC) LePMIR_b_LT_PsvPmpCrntFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_I_LT_PsvPmpCrnt' */
    /* Chart: '<S118>/PokePMIR_I_LT_PsvPmpCrntChrt' incorporates:
     *  SignalConversion generated from: '<S118>/LePMIR_I_LT_PsvPmpCrnt'
     *  SignalConversion generated from: '<S118>/LePMIR_b_LT_PsvPmpCrntFA'
     */
    /* Gateway: PokePMIR_I_LT_PsvPmpCrnt/PokePMIR_I_LT_PsvPmpCrntChrt */
    /* During: PokePMIR_I_LT_PsvPmpCrnt/PokePMIR_I_LT_PsvPmpCrntChrt */
    /* Entry Internal: PokePMIR_I_LT_PsvPmpCrnt/PokePMIR_I_LT_PsvPmpCrntChrt */
    /* Transition: '<S1483>:2' */
    if (!LePMIR_b_LT_PsvPmpCrntFA)
    {
        /* Transition: '<S1483>:3' */
        /* Transition: '<S1483>:15' */
        PMIR_ac_B.LePMIR_I_LT_PsvPmpCrnt_out = LePMIR_I_LT_PsvPmpCrnt;

        /* Transition: '<S1483>:18' */
    }
    else
    {
        /* Transition: '<S1483>:4' */
    }

    /* End of Chart: '<S118>/PokePMIR_I_LT_PsvPmpCrntChrt' */

    /* Merge: '<Root>/Merge_154' incorporates:
     *  SignalConversion generated from: '<S118>/VePMIR_I_LT_PsvPmpCrnt_write'
     * */
    Rte_IrvWrite_PokePMIR_I_LT_PsvPmpCrnt_LTPSVPumpCrnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_I_LT_PsvPmpCrnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_I_LT_PsvPmpCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_I_TransAuxPmp2_Crnt(VAR(float32, AUTOMATIC)
    LePMIR_I_TransAuxPmp2_Crnt, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_CrntFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_CrntFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_I_TransAuxPmp2_Crnt' */
    /* Chart: '<S119>/PokePMIR_I_TransAuxPmp2_CrntChrt' incorporates:
     *  SignalConversion generated from: '<S119>/LePMIR_I_TransAuxPmp2_Crnt'
     *  SignalConversion generated from: '<S119>/LePMIR_b_TransAuxPmp2_CrntFA'
     */
    /* Gateway: PokePMIR_I_TransAuxPmp2_Crnt/PokePMIR_I_TransAuxPmp2_CrntChrt */
    /* During: PokePMIR_I_TransAuxPmp2_Crnt/PokePMIR_I_TransAuxPmp2_CrntChrt */
    /* Entry Internal: PokePMIR_I_TransAuxPmp2_Crnt/PokePMIR_I_TransAuxPmp2_CrntChrt */
    /* Transition: '<S1484>:2' */
    if (!LePMIR_b_TransAuxPmp2_CrntFA)
    {
        /* Transition: '<S1484>:3' */
        /* Transition: '<S1484>:15' */
        PMIR_ac_B.LePMIR_I_TransAuxPmp2_Crnt_out = LePMIR_I_TransAuxPmp2_Crnt;
        rtb_LePMIR_b_TransAuxPmp2_CrntFA_out = false;

        /* Transition: '<S1484>:18' */
    }
    else
    {
        /* Transition: '<S1484>:4' */
        rtb_LePMIR_b_TransAuxPmp2_CrntFA_out = true;
    }

    /* End of Chart: '<S119>/PokePMIR_I_TransAuxPmp2_CrntChrt' */

    /* Merge: '<Root>/Merge_195' incorporates:
     *  SignalConversion generated from: '<S119>/VePMIR_I_TransAuxPmp2_Crnt_write'
     * */
    Rte_IrvWrite_PokePMIR_I_TransAuxPmp2_Crnt_TransAuxPmp2_Crnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_I_TransAuxPmp2_Crnt_out);

    /* Merge: '<Root>/Merge_194' incorporates:
     *  SignalConversion generated from: '<S119>/VePMIR_b_TransAuxPmp2_CrntFA_write'
     * */
    Rte_IrvWrite_PokePMIR_I_TransAuxPmp2_Crnt_VePMIR_b_TransAuxPmp2_CrntFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_CrntFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_I_TransAuxPmp2_Crnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_I_TransAuxPmp_Crnt(VAR(float32, AUTOMATIC)
    LePMIR_I_TransAuxPmp_Crnt, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_CrntFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_I_TransAuxPmp_Crnt' */
    /* Chart: '<S120>/PokePMIR_I_TransAuxPmp_CrntChrt' incorporates:
     *  SignalConversion generated from: '<S120>/LePMIR_I_TransAuxPmp_Crnt'
     *  SignalConversion generated from: '<S120>/LePMIR_b_TransAuxPmp_CrntFA'
     */
    /* Gateway: PokePMIR_I_TransAuxPmp_Crnt/PokePMIR_I_TransAuxPmp_CrntChrt */
    /* During: PokePMIR_I_TransAuxPmp_Crnt/PokePMIR_I_TransAuxPmp_CrntChrt */
    /* Entry Internal: PokePMIR_I_TransAuxPmp_Crnt/PokePMIR_I_TransAuxPmp_CrntChrt */
    /* Transition: '<S1485>:2' */
    if (!LePMIR_b_TransAuxPmp_CrntFA)
    {
        /* Transition: '<S1485>:3' */
        /* Transition: '<S1485>:15' */
        PMIR_ac_B.LePMIR_I_TransAuxPmp_Crnt_out = LePMIR_I_TransAuxPmp_Crnt;

        /* Transition: '<S1485>:18' */
    }
    else
    {
        /* Transition: '<S1485>:4' */
    }

    /* End of Chart: '<S120>/PokePMIR_I_TransAuxPmp_CrntChrt' */

    /* Merge: '<Root>/Merge_231' incorporates:
     *  SignalConversion generated from: '<S120>/VePMIR_I_TransAuxPmp_Crnt_write'
     * */
    Rte_IrvWrite_PokePMIR_I_TransAuxPmp_Crnt_TransAuxPmp_Crnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_I_TransAuxPmp_Crnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_I_TransAuxPmp_Crnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_ECM_LTPsvPmpRq(VAR(float32, AUTOMATIC)
    LePMIR_Pct_ECM_LTPsvPmpRq, VAR(boolean, AUTOMATIC) LePMIR_b_ECM_LTPsvPmpRqFA)
{
    boolean rtb_LePMIR_b_ECM_LTPsvPmpRqFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_ECM_LTPsvPmpRq' */
    /* Chart: '<S121>/PokePMIR_Pct_ECM_LTPsvPmpRqChrt' incorporates:
     *  SignalConversion generated from: '<S121>/LePMIR_Pct_ECM_LTPsvPmpRq'
     *  SignalConversion generated from: '<S121>/LePMIR_b_ECM_LTPsvPmpRqFA'
     */
    /* Gateway: PokePMIR_Pct_ECM_LTPsvPmpRq/PokePMIR_Pct_ECM_LTPsvPmpRqChrt */
    /* During: PokePMIR_Pct_ECM_LTPsvPmpRq/PokePMIR_Pct_ECM_LTPsvPmpRqChrt */
    /* Entry Internal: PokePMIR_Pct_ECM_LTPsvPmpRq/PokePMIR_Pct_ECM_LTPsvPmpRqChrt */
    /* Transition: '<S1486>:2' */
    if (!LePMIR_b_ECM_LTPsvPmpRqFA)
    {
        /* Transition: '<S1486>:3' */
        /* Transition: '<S1486>:15' */
        PMIR_ac_B.LePMIR_Pct_ECM_LTPsvPmpRq_out = LePMIR_Pct_ECM_LTPsvPmpRq;
        rtb_LePMIR_b_ECM_LTPsvPmpRqFA_out_f = false;

        /* Transition: '<S1486>:18' */
    }
    else
    {
        /* Transition: '<S1486>:4' */
        rtb_LePMIR_b_ECM_LTPsvPmpRqFA_out_f = true;
    }

    /* End of Chart: '<S121>/PokePMIR_Pct_ECM_LTPsvPmpRqChrt' */

    /* Merge: '<Root>/Merge_164' incorporates:
     *  SignalConversion generated from: '<S121>/VePMIR_Pct_ECM_LTPsvPmpRq_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_ECM_LTPsvPmpRq_ECM_LTPsvPmpRq_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_ECM_LTPsvPmpRq_out);

    /* Merge: '<Root>/Merge_163' incorporates:
     *  SignalConversion generated from: '<S121>/VePMIR_b_ECM_LTPsvPmpRqFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_ECM_LTPsvPmpRq_VePMIR_b_ECM_LTPsvPmpRqFA_write_IRV
        (rtb_LePMIR_b_ECM_LTPsvPmpRqFA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_ECM_LTPsvPmpRq' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_HTAuxPumpRPMAct(VAR(float32, AUTOMATIC)
    LePMIR_Pct_HTAuxPumpRPMAct, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpRPMActFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpRPMActPctFA_out_a;
    boolean rtb_LePMIR_b_HTAuxPumpRPMActPctSNA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_HTAuxPumpRPMAct' */
    /* Chart: '<S122>/PokePMIR_Pct_HTAuxPumpRPMActChrt' incorporates:
     *  SignalConversion generated from: '<S122>/LePMIR_Pct_HTAuxPumpRPMAct'
     *  SignalConversion generated from: '<S122>/LePMIR_b_HTAuxPumpRPMActFA'
     */
    /* Gateway: PokePMIR_Pct_HTAuxPumpRPMAct/PokePMIR_Pct_HTAuxPumpRPMActChrt */
    /* During: PokePMIR_Pct_HTAuxPumpRPMAct/PokePMIR_Pct_HTAuxPumpRPMActChrt */
    /* Entry Internal: PokePMIR_Pct_HTAuxPumpRPMAct/PokePMIR_Pct_HTAuxPumpRPMActChrt */
    /* Transition: '<S1487>:2' */
    if (!LePMIR_b_HTAuxPumpRPMActFA)
    {
        /* Transition: '<S1487>:3' */
        /* Transition: '<S1487>:15' */
        PMIR_ac_B.LePMIR_Pct_HTAuxPumpRPMAct_out = LePMIR_Pct_HTAuxPumpRPMAct;
        rtb_LePMIR_b_HTAuxPumpRPMActPctFA_out_a = false;
        rtb_LePMIR_b_HTAuxPumpRPMActPctSNA_out_o = false;

        /* Transition: '<S1487>:18' */
    }
    else
    {
        /* Transition: '<S1487>:4' */
        rtb_LePMIR_b_HTAuxPumpRPMActPctFA_out_a = true;
        rtb_LePMIR_b_HTAuxPumpRPMActPctSNA_out_o = true;
    }

    /* End of Chart: '<S122>/PokePMIR_Pct_HTAuxPumpRPMActChrt' */

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S122>/VePMIR_Pct_HTAuxPumpRPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_HTAuxPumpRPMAct_HTAuxPump_ActSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_HTAuxPumpRPMAct_out);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S122>/VePMIR_b_HTAuxPumpRPMActPctFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_HTAuxPumpRPMAct_VePMIR_b_HTAuxPumpRPMActPctFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpRPMActPctFA_out_a);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S122>/VePMIR_b_HTAuxPumpRPMActPctSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_HTAuxPumpRPMAct_VePMIR_b_HTAuxPumpRPMActPctSNA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpRPMActPctSNA_out_o);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_HTAuxPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_HTAuxPumpRPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_Pct_HTAuxPumpRPMTgt, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpRPMTgtFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpRPMTgtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_HTAuxPumpRPMTgt' */
    /* Chart: '<S123>/PokePMIR_Pct_HTAuxPumpRPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S123>/LePMIR_Pct_HTAuxPumpRPMTgt'
     *  SignalConversion generated from: '<S123>/LePMIR_b_HTAuxPumpRPMTgtFA'
     */
    /* Gateway: PokePMIR_Pct_HTAuxPumpRPMTgt/PokePMIR_Pct_HTAuxPumpRPMTgtChrt */
    /* During: PokePMIR_Pct_HTAuxPumpRPMTgt/PokePMIR_Pct_HTAuxPumpRPMTgtChrt */
    /* Entry Internal: PokePMIR_Pct_HTAuxPumpRPMTgt/PokePMIR_Pct_HTAuxPumpRPMTgtChrt */
    /* Transition: '<S1488>:2' */
    if (!LePMIR_b_HTAuxPumpRPMTgtFA)
    {
        /* Transition: '<S1488>:3' */
        /* Transition: '<S1488>:15' */
        PMIR_ac_B.LePMIR_Pct_HTAuxPumpRPMTgt_out = LePMIR_Pct_HTAuxPumpRPMTgt;
        rtb_LePMIR_b_HTAuxPumpRPMTgtFA_out = false;

        /* Transition: '<S1488>:18' */
    }
    else
    {
        /* Transition: '<S1488>:4' */
        rtb_LePMIR_b_HTAuxPumpRPMTgtFA_out = true;
    }

    /* End of Chart: '<S123>/PokePMIR_Pct_HTAuxPumpRPMTgtChrt' */

    /* Merge: '<Root>/Merge_104' incorporates:
     *  SignalConversion generated from: '<S123>/VePMIR_Pct_HTAuxPumpRPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_HTAuxPumpRPMTgt_HTAuxPump_TgtSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_HTAuxPumpRPMTgt_out);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S123>/VePMIR_b_HTAuxPumpRPMTgtFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_HTAuxPumpRPMTgt_VePMIR_b_HTAuxPumpRPMTgtPctFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpRPMTgtFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_HTAuxPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_LTActPumpRPMAct(VAR(float32, AUTOMATIC)
    LePMIR_Pct_LTActPumpRPMAct, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpRPMActFA)
{
    boolean rtb_LePMIR_b_LTActPumpRPMActPctFA_out;
    boolean rtb_LePMIR_b_LTActPumpRPMActPctSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_LTActPumpRPMAct' */
    /* Chart: '<S124>/PokePMIR_Pct_LTActPumpRPMActChrt' incorporates:
     *  SignalConversion generated from: '<S124>/LePMIR_Pct_LTActPumpRPMAct'
     *  SignalConversion generated from: '<S124>/LePMIR_b_LTActPumpRPMActFA'
     */
    /* Gateway: PokePMIR_Pct_LTActPumpRPMAct/PokePMIR_Pct_LTActPumpRPMActChrt */
    /* During: PokePMIR_Pct_LTActPumpRPMAct/PokePMIR_Pct_LTActPumpRPMActChrt */
    /* Entry Internal: PokePMIR_Pct_LTActPumpRPMAct/PokePMIR_Pct_LTActPumpRPMActChrt */
    /* Transition: '<S1489>:2' */
    if (!LePMIR_b_LTActPumpRPMActFA)
    {
        /* Transition: '<S1489>:3' */
        /* Transition: '<S1489>:15' */
        PMIR_ac_B.LePMIR_Pct_LTActPumpRPMAct_out = LePMIR_Pct_LTActPumpRPMAct;
        rtb_LePMIR_b_LTActPumpRPMActPctFA_out = false;
        rtb_LePMIR_b_LTActPumpRPMActPctSNA_out = false;

        /* Transition: '<S1489>:18' */
    }
    else
    {
        /* Transition: '<S1489>:4' */
        rtb_LePMIR_b_LTActPumpRPMActPctFA_out = true;
        rtb_LePMIR_b_LTActPumpRPMActPctSNA_out = true;
    }

    /* End of Chart: '<S124>/PokePMIR_Pct_LTActPumpRPMActChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S124>/VePMIR_Pct_LTActPumpRPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTActPumpRPMAct_LTActPumpActSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_LTActPumpRPMAct_out);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S124>/VePMIR_b_LTActPumpRPMActPctFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTActPumpRPMAct_VePMIR_b_LTActPumpRPMActPctFA_write_IRV
        (rtb_LePMIR_b_LTActPumpRPMActPctFA_out);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S124>/VePMIR_b_LTActPumpRPMActPctSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTActPumpRPMAct_VePMIR_b_LTActPumpRPMActPctSNA_write_IRV
        (rtb_LePMIR_b_LTActPumpRPMActPctSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_LTActPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_LTActPumpRPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_Pct_LTActPumpRPMTgt, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpRPMTgtFA)
{
    boolean rtb_LePMIR_b_LTActPumpRPMTgtPctFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_LTActPumpRPMTgt' */
    /* Chart: '<S125>/PokePMIR_Pct_LTActPumpRPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S125>/LePMIR_Pct_LTActPumpRPMTgt'
     *  SignalConversion generated from: '<S125>/LePMIR_b_LTActPumpRPMTgtFA'
     */
    /* Gateway: PokePMIR_Pct_LTActPumpRPMTgt/PokePMIR_Pct_LTActPumpRPMTgtChrt */
    /* During: PokePMIR_Pct_LTActPumpRPMTgt/PokePMIR_Pct_LTActPumpRPMTgtChrt */
    /* Entry Internal: PokePMIR_Pct_LTActPumpRPMTgt/PokePMIR_Pct_LTActPumpRPMTgtChrt */
    /* Transition: '<S1490>:2' */
    if (!LePMIR_b_LTActPumpRPMTgtFA)
    {
        /* Transition: '<S1490>:3' */
        /* Transition: '<S1490>:15' */
        PMIR_ac_B.LePMIR_Pct_LTActPumpRPMTgt_out = LePMIR_Pct_LTActPumpRPMTgt;
        rtb_LePMIR_b_LTActPumpRPMTgtPctFA_out = false;

        /* Transition: '<S1490>:18' */
    }
    else
    {
        /* Transition: '<S1490>:4' */
        rtb_LePMIR_b_LTActPumpRPMTgtPctFA_out = true;
    }

    /* End of Chart: '<S125>/PokePMIR_Pct_LTActPumpRPMTgtChrt' */

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S125>/VePMIR_Pct_LTActPumpRPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTActPumpRPMTgt_LTActPumpTgtSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_LTActPumpRPMTgt_out);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S125>/VePMIR_b_LTActPumpRPMTgtPctFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTActPumpRPMTgt_VePMIR_b_LTActPumpRPMTgtPctFA_write_IRV
        (rtb_LePMIR_b_LTActPumpRPMTgtPctFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_LTActPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_LTPsvPump2RPMAct(VAR(float32, AUTOMATIC)
    LePMIR_Pct_LTPsvPump2RPMAct, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2RPMActFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2RPMActPctFA_out;
    boolean rtb_LePMIR_b_LTPsvPump2RPMActPctSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_LTPsvPump2RPMAct' */
    /* Chart: '<S126>/PokePMIR_Pct_LTPsvPump2RPMActChrt' incorporates:
     *  SignalConversion generated from: '<S126>/LePMIR_Pct_LTPsvPump2RPMAct'
     *  SignalConversion generated from: '<S126>/LePMIR_b_LTPsvPump2RPMActFA'
     */
    /* Gateway: PokePMIR_Pct_LTPsvPump2RPMAct/PokePMIR_Pct_LTPsvPump2RPMActChrt */
    /* During: PokePMIR_Pct_LTPsvPump2RPMAct/PokePMIR_Pct_LTPsvPump2RPMActChrt */
    /* Entry Internal: PokePMIR_Pct_LTPsvPump2RPMAct/PokePMIR_Pct_LTPsvPump2RPMActChrt */
    /* Transition: '<S1491>:2' */
    if (!LePMIR_b_LTPsvPump2RPMActFA)
    {
        /* Transition: '<S1491>:3' */
        /* Transition: '<S1491>:15' */
        PMIR_ac_B.LePMIR_Pct_LTPsvPump2RPMAct_out = LePMIR_Pct_LTPsvPump2RPMAct;
        rtb_LePMIR_b_LTPsvPump2RPMActPctFA_out = false;
        rtb_LePMIR_b_LTPsvPump2RPMActPctSNA_out = false;

        /* Transition: '<S1491>:18' */
    }
    else
    {
        /* Transition: '<S1491>:4' */
        rtb_LePMIR_b_LTPsvPump2RPMActPctFA_out = true;
        rtb_LePMIR_b_LTPsvPump2RPMActPctSNA_out = true;
    }

    /* End of Chart: '<S126>/PokePMIR_Pct_LTPsvPump2RPMActChrt' */

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S126>/VePMIR_Pct_LTPsvPump2RPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPump2RPMAct_LTPsvPmp2_ActSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_LTPsvPump2RPMAct_out);

    /* Merge: '<Root>/Merge_114' incorporates:
     *  SignalConversion generated from: '<S126>/VePMIR_b_LTPsvPump2RPMActPctFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPump2RPMAct_VePMIR_b_LTPsvPump2RPMActPctFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2RPMActPctFA_out);

    /* Merge: '<Root>/Merge_113' incorporates:
     *  SignalConversion generated from: '<S126>/VePMIR_b_LTPsvPump2RPMActPctSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPump2RPMAct_VePMIR_b_LTPsvPump2RPMActPctSNA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2RPMActPctSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_LTPsvPump2RPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_LTPsvPump2RPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_Pct_LTPsvPump2RPMTgt, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2RPMTgtFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2RPMTgtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_LTPsvPump2RPMTgt' */
    /* Chart: '<S127>/PokePMIR_Pct_LTPsvPump2RPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S127>/LePMIR_Pct_LTPsvPump2RPMTgt'
     *  SignalConversion generated from: '<S127>/LePMIR_b_LTPsvPump2RPMTgtFA'
     */
    /* Gateway: PokePMIR_Pct_LTPsvPump2RPMTgt/PokePMIR_Pct_LTPsvPump2RPMTgtChrt */
    /* During: PokePMIR_Pct_LTPsvPump2RPMTgt/PokePMIR_Pct_LTPsvPump2RPMTgtChrt */
    /* Entry Internal: PokePMIR_Pct_LTPsvPump2RPMTgt/PokePMIR_Pct_LTPsvPump2RPMTgtChrt */
    /* Transition: '<S1492>:2' */
    if (!LePMIR_b_LTPsvPump2RPMTgtFA)
    {
        /* Transition: '<S1492>:3' */
        /* Transition: '<S1492>:15' */
        PMIR_ac_B.LePMIR_Pct_LTPsvPump2RPMTgt_out = LePMIR_Pct_LTPsvPump2RPMTgt;
        rtb_LePMIR_b_LTPsvPump2RPMTgtFA_out = false;

        /* Transition: '<S1492>:18' */
    }
    else
    {
        /* Transition: '<S1492>:4' */
        rtb_LePMIR_b_LTPsvPump2RPMTgtFA_out = true;
    }

    /* End of Chart: '<S127>/PokePMIR_Pct_LTPsvPump2RPMTgtChrt' */

    /* Merge: '<Root>/Merge_140' incorporates:
     *  SignalConversion generated from: '<S127>/VePMIR_Pct_LTPsvPump2RPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPump2RPMTgt_LTPsvPmp2_TgtSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_LTPsvPump2RPMTgt_out);

    /* Merge: '<Root>/Merge_139' incorporates:
     *  SignalConversion generated from: '<S127>/VePMIR_b_LTPsvPump2RPMTgtFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPump2RPMTgt_VePMIR_b_LTPsvPump2RPMTgtPctFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2RPMTgtFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_LTPsvPump2RPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_LTPsvPumpRPMAct(VAR(float32, AUTOMATIC)
    LePMIR_Pct_LTPsvPumpRPMAct, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpRPMActFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpRPMActPctFA_out;
    boolean rtb_LePMIR_b_LTPsvPumpRPMActPctSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_LTPsvPumpRPMAct' */
    /* Chart: '<S128>/PokePMIR_Pct_LTPsvPumpRPMActChrt' incorporates:
     *  SignalConversion generated from: '<S128>/LePMIR_Pct_LTPsvPumpRPMAct'
     *  SignalConversion generated from: '<S128>/LePMIR_b_LTPsvPumpRPMActFA'
     */
    /* Gateway: PokePMIR_Pct_LTPsvPumpRPMAct/PokePMIR_Pct_LTPsvPumpRPMActChrt */
    /* During: PokePMIR_Pct_LTPsvPumpRPMAct/PokePMIR_Pct_LTPsvPumpRPMActChrt */
    /* Entry Internal: PokePMIR_Pct_LTPsvPumpRPMAct/PokePMIR_Pct_LTPsvPumpRPMActChrt */
    /* Transition: '<S1493>:2' */
    if (!LePMIR_b_LTPsvPumpRPMActFA)
    {
        /* Transition: '<S1493>:3' */
        /* Transition: '<S1493>:15' */
        PMIR_ac_B.LePMIR_Pct_LTPsvPumpRPMAct_out = LePMIR_Pct_LTPsvPumpRPMAct;
        rtb_LePMIR_b_LTPsvPumpRPMActPctFA_out = false;
        rtb_LePMIR_b_LTPsvPumpRPMActPctSNA_out = false;

        /* Transition: '<S1493>:18' */
    }
    else
    {
        /* Transition: '<S1493>:4' */
        rtb_LePMIR_b_LTPsvPumpRPMActPctFA_out = true;
        rtb_LePMIR_b_LTPsvPumpRPMActPctSNA_out = true;
    }

    /* End of Chart: '<S128>/PokePMIR_Pct_LTPsvPumpRPMActChrt' */

    /* Merge: '<Root>/Merge_153' incorporates:
     *  SignalConversion generated from: '<S128>/VePMIR_Pct_LTPsvPumpRPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPumpRPMAct_LTPsvPmp_ActSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_LTPsvPumpRPMAct_out);

    /* Merge: '<Root>/Merge_152' incorporates:
     *  SignalConversion generated from: '<S128>/VePMIR_b_LTPsvPumpRPMActPctFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPumpRPMAct_VePMIR_b_LTPsvPumpRPMActPctFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpRPMActPctFA_out);

    /* Merge: '<Root>/Merge_151' incorporates:
     *  SignalConversion generated from: '<S128>/VePMIR_b_LTPsvPumpRPMActPctSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPumpRPMAct_VePMIR_b_LTPsvPumpRPMActPctSNA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpRPMActPctSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_LTPsvPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_Pct_LTPsvPumpRPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_Pct_LTPsvPumpRPMTgt, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpRPMTgtFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpRPMTgtPctFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_Pct_LTPsvPumpRPMTgt' */
    /* Chart: '<S129>/PokePMIR_Pct_LTPsvPumpRPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S129>/LePMIR_Pct_LTPsvPumpRPMTgt'
     *  SignalConversion generated from: '<S129>/LePMIR_b_LTPsvPumpRPMTgtFA'
     */
    /* Gateway: PokePMIR_Pct_LTPsvPumpRPMTgt/PokePMIR_Pct_LTPsvPumpRPMTgtChrt */
    /* During: PokePMIR_Pct_LTPsvPumpRPMTgt/PokePMIR_Pct_LTPsvPumpRPMTgtChrt */
    /* Entry Internal: PokePMIR_Pct_LTPsvPumpRPMTgt/PokePMIR_Pct_LTPsvPumpRPMTgtChrt */
    /* Transition: '<S1494>:2' */
    if (!LePMIR_b_LTPsvPumpRPMTgtFA)
    {
        /* Transition: '<S1494>:3' */
        /* Transition: '<S1494>:15' */
        PMIR_ac_B.LePMIR_Pct_LTPsvPumpRPMTgt_out = LePMIR_Pct_LTPsvPumpRPMTgt;
        rtb_LePMIR_b_LTPsvPumpRPMTgtPctFA_out = false;

        /* Transition: '<S1494>:18' */
    }
    else
    {
        /* Transition: '<S1494>:4' */
        rtb_LePMIR_b_LTPsvPumpRPMTgtPctFA_out = true;
    }

    /* End of Chart: '<S129>/PokePMIR_Pct_LTPsvPumpRPMTgtChrt' */

    /* Merge: '<Root>/Merge_186' incorporates:
     *  SignalConversion generated from: '<S129>/VePMIR_Pct_LTPsvPumpRPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPumpRPMTgt_LTPsvPmp_TgtSpd_INIT_write_IRV
        (PMIR_ac_B.LePMIR_Pct_LTPsvPumpRPMTgt_out);

    /* Merge: '<Root>/Merge_185' incorporates:
     *  SignalConversion generated from: '<S129>/VePMIR_b_LTPsvPumpRPMTgtPctFA_write'
     * */
    Rte_IrvWrite_PokePMIR_Pct_LTPsvPumpRPMTgt_VePMIR_b_LTPsvPumpRPMTgtPctFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpRPMTgtPctFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_Pct_LTPsvPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_FCCPmpActTemp(VAR(float32, AUTOMATIC)
    LePMIR_T_FCCPmpActTemp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_FCCPmpActTemp' */
    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S130>/LePMIR_T_FCCPmpActTemp'
     *  SignalConversion generated from: '<S130>/VePMIR_T_FCCPmpActTemp_write'
     */
    /* Gateway: PokePMIR_T_FCCPmpActTemp/PokePMIR_T_FCCPmpActTempChrt */
    /* During: PokePMIR_T_FCCPmpActTemp/PokePMIR_T_FCCPmpActTempChrt */
    /* Entry Internal: PokePMIR_T_FCCPmpActTemp/PokePMIR_T_FCCPmpActTempChrt */
    /* Transition: '<S1495>:2' */
    Rte_IrvWrite_PokePMIR_T_FCCPmpActTemp_FCCPmpActTemp_INIT_write_IRV
        (LePMIR_T_FCCPmpActTemp);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_FCCPmpActTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_HT_AuxPmpTemp(VAR(float32, AUTOMATIC)
    LePMIR_T_HT_AuxPmpTemp, VAR(boolean, AUTOMATIC) LePMIR_b_HT_AuxPmpTempFA)
{
    boolean rtb_LePMIR_b_HT_AuxPmpTempFA_out;
    boolean rtb_LePMIR_b_HT_AuxPmpTempSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_HT_AuxPmpTemp' */
    /* Chart: '<S131>/PokePMIR_T_HT_AuxPmpTempChrt' incorporates:
     *  SignalConversion generated from: '<S131>/LePMIR_T_HT_AuxPmpTemp'
     *  SignalConversion generated from: '<S131>/LePMIR_b_HT_AuxPmpTempFA'
     */
    /* Gateway: PokePMIR_T_HT_AuxPmpTemp/PokePMIR_T_HT_AuxPmpTempChrt */
    /* During: PokePMIR_T_HT_AuxPmpTemp/PokePMIR_T_HT_AuxPmpTempChrt */
    /* Entry Internal: PokePMIR_T_HT_AuxPmpTemp/PokePMIR_T_HT_AuxPmpTempChrt */
    /* Transition: '<S1496>:2' */
    if (!LePMIR_b_HT_AuxPmpTempFA)
    {
        /* Transition: '<S1496>:3' */
        /* Transition: '<S1496>:15' */
        PMIR_ac_B.LePMIR_T_HT_AuxPmpTemp_out = LePMIR_T_HT_AuxPmpTemp;
        rtb_LePMIR_b_HT_AuxPmpTempFA_out = false;
        rtb_LePMIR_b_HT_AuxPmpTempSNA_out = false;

        /* Transition: '<S1496>:18' */
    }
    else
    {
        /* Transition: '<S1496>:4' */
        rtb_LePMIR_b_HT_AuxPmpTempFA_out = true;
        rtb_LePMIR_b_HT_AuxPmpTempSNA_out = true;
    }

    /* End of Chart: '<S131>/PokePMIR_T_HT_AuxPmpTempChrt' */

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S131>/VePMIR_T_HT_AuxPmpTemp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_HT_AuxPmpTemp_HT_AuxPmpTemp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_HT_AuxPmpTemp_out);

    /* Merge: '<Root>/Merge_100' incorporates:
     *  SignalConversion generated from: '<S131>/VePMIR_b_HT_AuxPmpTempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_HT_AuxPmpTemp_VePMIR_b_HT_AuxPmpTempFA_write_IRV
        (rtb_LePMIR_b_HT_AuxPmpTempFA_out);

    /* Merge: '<Root>/Merge_102' incorporates:
     *  SignalConversion generated from: '<S131>/VePMIR_b_HT_AuxPmpTempSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_HT_AuxPmpTemp_VePMIR_b_HT_AuxPmpTempSNA_write_IRV
        (rtb_LePMIR_b_HT_AuxPmpTempSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_HT_AuxPmpTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_LTActPumpTemp(VAR(float32, AUTOMATIC)
    LePMIR_T_LTActPumpTemp, VAR(boolean, AUTOMATIC) LePMIR_b_LTActPumpTempFA)
{
    boolean rtb_LePMIR_b_LTActPumpTempFA_out;
    boolean rtb_LePMIR_b_LTActPumpTempSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_LTActPumpTemp' */
    /* Chart: '<S132>/PokePMIR_T_LTActPumpTempChrt' incorporates:
     *  SignalConversion generated from: '<S132>/LePMIR_T_LTActPumpTemp'
     *  SignalConversion generated from: '<S132>/LePMIR_b_LTActPumpTempFA'
     */
    /* Gateway: PokePMIR_T_LTActPumpTemp/PokePMIR_T_LTActPumpTempChrt */
    /* During: PokePMIR_T_LTActPumpTemp/PokePMIR_T_LTActPumpTempChrt */
    /* Entry Internal: PokePMIR_T_LTActPumpTemp/PokePMIR_T_LTActPumpTempChrt */
    /* Transition: '<S1497>:2' */
    if (!LePMIR_b_LTActPumpTempFA)
    {
        /* Transition: '<S1497>:3' */
        /* Transition: '<S1497>:15' */
        PMIR_ac_B.LePMIR_T_LTActPumpTemp_out = LePMIR_T_LTActPumpTemp;
        rtb_LePMIR_b_LTActPumpTempFA_out = false;
        rtb_LePMIR_b_LTActPumpTempSNA_out = false;

        /* Transition: '<S1497>:18' */
    }
    else
    {
        /* Transition: '<S1497>:4' */
        rtb_LePMIR_b_LTActPumpTempFA_out = true;
        rtb_LePMIR_b_LTActPumpTempSNA_out = true;
    }

    /* End of Chart: '<S132>/PokePMIR_T_LTActPumpTempChrt' */

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S132>/VePMIR_T_LTActPumpTemp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTActPumpTemp_LTActPumpTemp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_LTActPumpTemp_out);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S132>/VePMIR_b_LTActPumpTempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTActPumpTemp_VePMIR_b_LTActPumpTempFA_write_IRV
        (rtb_LePMIR_b_LTActPumpTempFA_out);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S132>/VePMIR_b_LTActPumpTempSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTActPumpTemp_VePMIR_b_LTActPumpTempSNA_write_IRV
        (rtb_LePMIR_b_LTActPumpTempSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_LTActPumpTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_LTPsvPump2Temp(VAR(float32, AUTOMATIC)
    LePMIR_T_LTPsvPump2Temp, VAR(boolean, AUTOMATIC) LePMIR_b_LTPsvPump2TempFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2TempFA_out;
    boolean rtb_LePMIR_b_LTPsvPump2TempSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_LTPsvPump2Temp' */
    /* Chart: '<S133>/PokePMIR_T_LTPsvPump2TempChrt' incorporates:
     *  SignalConversion generated from: '<S133>/LePMIR_T_LTPsvPump2Temp'
     *  SignalConversion generated from: '<S133>/LePMIR_b_LTPsvPump2TempFA'
     */
    /* Gateway: PokePMIR_T_LTPsvPump2Temp/PokePMIR_T_LTPsvPump2TempChrt */
    /* During: PokePMIR_T_LTPsvPump2Temp/PokePMIR_T_LTPsvPump2TempChrt */
    /* Entry Internal: PokePMIR_T_LTPsvPump2Temp/PokePMIR_T_LTPsvPump2TempChrt */
    /* Transition: '<S1498>:2' */
    if (!LePMIR_b_LTPsvPump2TempFA)
    {
        /* Transition: '<S1498>:3' */
        /* Transition: '<S1498>:15' */
        PMIR_ac_B.LePMIR_T_LTPsvPump2Temp_out = LePMIR_T_LTPsvPump2Temp;
        rtb_LePMIR_b_LTPsvPump2TempFA_out = false;
        rtb_LePMIR_b_LTPsvPump2TempSNA_out = false;

        /* Transition: '<S1498>:18' */
    }
    else
    {
        /* Transition: '<S1498>:4' */
        rtb_LePMIR_b_LTPsvPump2TempFA_out = true;
        rtb_LePMIR_b_LTPsvPump2TempSNA_out = true;
    }

    /* End of Chart: '<S133>/PokePMIR_T_LTPsvPump2TempChrt' */

    /* Merge: '<Root>/Merge_138' incorporates:
     *  SignalConversion generated from: '<S133>/VePMIR_T_LTPsvPump2Temp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTPsvPump2Temp_LTPsvPump2Temp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_LTPsvPump2Temp_out);

    /* Merge: '<Root>/Merge_137' incorporates:
     *  SignalConversion generated from: '<S133>/VePMIR_b_LTPsvPump2TempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTPsvPump2Temp_VePMIR_b_LTPsvPump2TempFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2TempFA_out);

    /* Merge: '<Root>/Merge_136' incorporates:
     *  SignalConversion generated from: '<S133>/VePMIR_b_LTPsvPump2TempSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTPsvPump2Temp_VePMIR_b_LTPsvPump2TempSNA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2TempSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_LTPsvPump2Temp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_LTPsvPumpTemp(VAR(float32, AUTOMATIC)
    LePMIR_T_LTPsvPumpTemp, VAR(boolean, AUTOMATIC) LePMIR_b_LTPsvPumpTempFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpTempFA_out;
    boolean rtb_LePMIR_b_LTPsvPumpTempSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_LTPsvPumpTemp' */
    /* Chart: '<S134>/PokePMIR_T_LTPsvPumpTempChrt' incorporates:
     *  SignalConversion generated from: '<S134>/LePMIR_T_LTPsvPumpTemp'
     *  SignalConversion generated from: '<S134>/LePMIR_b_LTPsvPumpTempFA'
     */
    /* Gateway: PokePMIR_T_LTPsvPumpTemp/PokePMIR_T_LTPsvPumpTempChrt */
    /* During: PokePMIR_T_LTPsvPumpTemp/PokePMIR_T_LTPsvPumpTempChrt */
    /* Entry Internal: PokePMIR_T_LTPsvPumpTemp/PokePMIR_T_LTPsvPumpTempChrt */
    /* Transition: '<S1499>:2' */
    if (!LePMIR_b_LTPsvPumpTempFA)
    {
        /* Transition: '<S1499>:3' */
        /* Transition: '<S1499>:15' */
        PMIR_ac_B.LePMIR_T_LTPsvPumpTemp_out = LePMIR_T_LTPsvPumpTemp;
        rtb_LePMIR_b_LTPsvPumpTempFA_out = false;
        rtb_LePMIR_b_LTPsvPumpTempSNA_out = false;

        /* Transition: '<S1499>:18' */
    }
    else
    {
        /* Transition: '<S1499>:4' */
        rtb_LePMIR_b_LTPsvPumpTempFA_out = true;
        rtb_LePMIR_b_LTPsvPumpTempSNA_out = true;
    }

    /* End of Chart: '<S134>/PokePMIR_T_LTPsvPumpTempChrt' */

    /* Merge: '<Root>/Merge_184' incorporates:
     *  SignalConversion generated from: '<S134>/VePMIR_T_LTPsvPumpTemp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTPsvPumpTemp_LTPsvPumpTemp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_LTPsvPumpTemp_out);

    /* Merge: '<Root>/Merge_183' incorporates:
     *  SignalConversion generated from: '<S134>/VePMIR_b_LTPsvPumpTempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTPsvPumpTemp_VePMIR_b_LTPsvPumpTempFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpTempFA_out);

    /* Merge: '<Root>/Merge_182' incorporates:
     *  SignalConversion generated from: '<S134>/VePMIR_b_LTPsvPumpTempSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_LTPsvPumpTemp_VePMIR_b_LTPsvPumpTempSNA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpTempSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_LTPsvPumpTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_TransAuxPmp2_OilTemp(VAR(float32, AUTOMATIC)
    LePMIR_T_TransAuxPmp2_OilTemp, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_OilTempFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_OilTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_TransAuxPmp2_OilTemp' */
    /* Chart: '<S135>/PokePMIR_T_TransAuxPmp2_OilTempChrt' incorporates:
     *  SignalConversion generated from: '<S135>/LePMIR_T_TransAuxPmp2_OilTemp'
     *  SignalConversion generated from: '<S135>/LePMIR_b_TransAuxPmp2_OilTempFA'
     */
    /* Gateway: PokePMIR_T_TransAuxPmp2_OilTemp/PokePMIR_T_TransAuxPmp2_OilTempChrt */
    /* During: PokePMIR_T_TransAuxPmp2_OilTemp/PokePMIR_T_TransAuxPmp2_OilTempChrt */
    /* Entry Internal: PokePMIR_T_TransAuxPmp2_OilTemp/PokePMIR_T_TransAuxPmp2_OilTempChrt */
    /* Transition: '<S1500>:2' */
    if (!LePMIR_b_TransAuxPmp2_OilTempFA)
    {
        /* Transition: '<S1500>:3' */
        /* Transition: '<S1500>:15' */
        PMIR_ac_B.LePMIR_T_TransAuxPmp2_OilTemp_out =
            LePMIR_T_TransAuxPmp2_OilTemp;
        rtb_LePMIR_b_TransAuxPmp2_OilTempFA_out = false;

        /* Transition: '<S1500>:18' */
    }
    else
    {
        /* Transition: '<S1500>:4' */
        rtb_LePMIR_b_TransAuxPmp2_OilTempFA_out = true;
    }

    /* End of Chart: '<S135>/PokePMIR_T_TransAuxPmp2_OilTempChrt' */

    /* Merge: '<Root>/Merge_203' incorporates:
     *  SignalConversion generated from: '<S135>/VePMIR_T_TransAuxPmp2_OilTemp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp2_OilTemp_TransAuxPmp2_OilTemp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_TransAuxPmp2_OilTemp_out);

    /* Merge: '<Root>/Merge_202' incorporates:
     *  SignalConversion generated from: '<S135>/VePMIR_b_TransAuxPmp2_OilTempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp2_OilTemp_VePMIR_b_TransAuxPmp2_OilTempFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_OilTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_TransAuxPmp2_OilTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_TransAuxPmp2_Temp(VAR(float32, AUTOMATIC)
    LePMIR_T_TransAuxPmp2_Temp, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_TempFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_TempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_TransAuxPmp2_Temp' */
    /* Chart: '<S136>/PokePMIR_T_TransAuxPmp2_TempChrt' incorporates:
     *  SignalConversion generated from: '<S136>/LePMIR_T_TransAuxPmp2_Temp'
     *  SignalConversion generated from: '<S136>/LePMIR_b_TransAuxPmp2_TempFA'
     */
    /* Gateway: PokePMIR_T_TransAuxPmp2_Temp/PokePMIR_T_TransAuxPmp2_TempChrt */
    /* During: PokePMIR_T_TransAuxPmp2_Temp/PokePMIR_T_TransAuxPmp2_TempChrt */
    /* Entry Internal: PokePMIR_T_TransAuxPmp2_Temp/PokePMIR_T_TransAuxPmp2_TempChrt */
    /* Transition: '<S1501>:2' */
    if (!LePMIR_b_TransAuxPmp2_TempFA)
    {
        /* Transition: '<S1501>:3' */
        /* Transition: '<S1501>:15' */
        PMIR_ac_B.LePMIR_T_TransAuxPmp2_Temp_out = LePMIR_T_TransAuxPmp2_Temp;
        rtb_LePMIR_b_TransAuxPmp2_TempFA_out = false;

        /* Transition: '<S1501>:18' */
    }
    else
    {
        /* Transition: '<S1501>:4' */
        rtb_LePMIR_b_TransAuxPmp2_TempFA_out = true;
    }

    /* End of Chart: '<S136>/PokePMIR_T_TransAuxPmp2_TempChrt' */

    /* Merge: '<Root>/Merge_217' incorporates:
     *  SignalConversion generated from: '<S136>/VePMIR_T_TransAuxPmp2_Temp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp2_Temp_TransAuxPmp2_Temp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_TransAuxPmp2_Temp_out);

    /* Merge: '<Root>/Merge_216' incorporates:
     *  SignalConversion generated from: '<S136>/VePMIR_b_TransAuxPmp2_TempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp2_Temp_VePMIR_b_TransAuxPmp2_TempFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_TempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_TransAuxPmp2_Temp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_TransAuxPmp_OilTemp(VAR(float32, AUTOMATIC)
    LePMIR_T_TransAuxPmp_OilTemp, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_OilTempFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp_OilTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_TransAuxPmp_OilTemp' */
    /* Chart: '<S137>/PokePMIR_T_TransAuxPmp_OilTempChrt' incorporates:
     *  SignalConversion generated from: '<S137>/LePMIR_T_TransAuxPmp_OilTemp'
     *  SignalConversion generated from: '<S137>/LePMIR_b_TransAuxPmp_OilTempFA'
     */
    /* Gateway: PokePMIR_T_TransAuxPmp_OilTemp/PokePMIR_T_TransAuxPmp_OilTempChrt */
    /* During: PokePMIR_T_TransAuxPmp_OilTemp/PokePMIR_T_TransAuxPmp_OilTempChrt */
    /* Entry Internal: PokePMIR_T_TransAuxPmp_OilTemp/PokePMIR_T_TransAuxPmp_OilTempChrt */
    /* Transition: '<S1502>:2' */
    if (!LePMIR_b_TransAuxPmp_OilTempFA)
    {
        /* Transition: '<S1502>:3' */
        /* Transition: '<S1502>:15' */
        PMIR_ac_B.LePMIR_T_TransAuxPmp_OilTemp_out =
            LePMIR_T_TransAuxPmp_OilTemp;
        rtb_LePMIR_b_TransAuxPmp_OilTempFA_out = false;

        /* Transition: '<S1502>:18' */
    }
    else
    {
        /* Transition: '<S1502>:4' */
        rtb_LePMIR_b_TransAuxPmp_OilTempFA_out = true;
    }

    /* End of Chart: '<S137>/PokePMIR_T_TransAuxPmp_OilTempChrt' */

    /* Merge: '<Root>/Merge_237' incorporates:
     *  SignalConversion generated from: '<S137>/VePMIR_T_TransAuxPmp_OilTemp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp_OilTemp_TransAuxPmp_OilTemp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_TransAuxPmp_OilTemp_out);

    /* Merge: '<Root>/Merge_238' incorporates:
     *  SignalConversion generated from: '<S137>/VePMIR_b_TransAuxPmp_OilTempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp_OilTemp_VePMIR_b_TransAuxPmp_OilTempFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp_OilTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_TransAuxPmp_OilTemp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_T_TransAuxPmp_Temp(VAR(float32, AUTOMATIC)
    LePMIR_T_TransAuxPmp_Temp, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_TempFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp_TempFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_T_TransAuxPmp_Temp' */
    /* Chart: '<S138>/PokePMIR_T_TransAuxPmp_TempChrt' incorporates:
     *  SignalConversion generated from: '<S138>/LePMIR_T_TransAuxPmp_Temp'
     *  SignalConversion generated from: '<S138>/LePMIR_b_TransAuxPmp_TempFA'
     */
    /* Gateway: PokePMIR_T_TransAuxPmp_Temp/PokePMIR_T_TransAuxPmp_TempChrt */
    /* During: PokePMIR_T_TransAuxPmp_Temp/PokePMIR_T_TransAuxPmp_TempChrt */
    /* Entry Internal: PokePMIR_T_TransAuxPmp_Temp/PokePMIR_T_TransAuxPmp_TempChrt */
    /* Transition: '<S1503>:2' */
    if (!LePMIR_b_TransAuxPmp_TempFA)
    {
        /* Transition: '<S1503>:3' */
        /* Transition: '<S1503>:15' */
        PMIR_ac_B.LePMIR_T_TransAuxPmp_Temp_out = LePMIR_T_TransAuxPmp_Temp;
        rtb_LePMIR_b_TransAuxPmp_TempFA_out_a = false;

        /* Transition: '<S1503>:18' */
    }
    else
    {
        /* Transition: '<S1503>:4' */
        rtb_LePMIR_b_TransAuxPmp_TempFA_out_a = true;
    }

    /* End of Chart: '<S138>/PokePMIR_T_TransAuxPmp_TempChrt' */

    /* Merge: '<Root>/Merge_249' incorporates:
     *  SignalConversion generated from: '<S138>/VePMIR_T_TransAuxPmp_Temp_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp_Temp_TransAuxPmp_Temp_INIT_write_IRV
        (PMIR_ac_B.LePMIR_T_TransAuxPmp_Temp_out);

    /* Merge: '<Root>/Merge_250' incorporates:
     *  SignalConversion generated from: '<S138>/VePMIR_b_TransAuxPmp_TempFA_write'
     * */
    Rte_IrvWrite_PokePMIR_T_TransAuxPmp_Temp_VePMIR_b_TransAuxPmp_TempFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp_TempFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_T_TransAuxPmp_Temp' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_U_FCCPmpActVlt(VAR(float32, AUTOMATIC)
    LePMIR_U_FCCPmpActVlt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_U_FCCPmpActVlt' */
    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S139>/LePMIR_U_FCCPmpActVlt'
     *  SignalConversion generated from: '<S139>/VePMIR_U_FCCPmpActVlt_write'
     */
    /* Gateway: PokePMIR_U_FCCPmpActVlt/PokePMIR_U_FCCPmpActVltChrt */
    /* During: PokePMIR_U_FCCPmpActVlt/PokePMIR_U_FCCPmpActVltChrt */
    /* Entry Internal: PokePMIR_U_FCCPmpActVlt/PokePMIR_U_FCCPmpActVltChrt */
    /* Transition: '<S1504>:2' */
    Rte_IrvWrite_PokePMIR_U_FCCPmpActVlt_FCCPmpActVlt_INIT_write_IRV
        (LePMIR_U_FCCPmpActVlt);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_U_FCCPmpActVlt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_U_HT_AuxPmpVltg(VAR(float32, AUTOMATIC)
    LePMIR_U_HT_AuxPmpVltg, VAR(boolean, AUTOMATIC) LePMIR_b_HT_AuxPmpVltgFA)
{
    boolean rtb_LePMIR_b_HT_AuxPmpVltgFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_U_HT_AuxPmpVltg' */
    /* Chart: '<S140>/PokePMIR_U_HT_AuxPmpVltgChrt' incorporates:
     *  SignalConversion generated from: '<S140>/LePMIR_U_HT_AuxPmpVltg'
     *  SignalConversion generated from: '<S140>/LePMIR_b_HT_AuxPmpVltgFA'
     */
    /* Gateway: PokePMIR_U_HT_AuxPmpVltg/PokePMIR_U_HT_AuxPmpVltgChrt */
    /* During: PokePMIR_U_HT_AuxPmpVltg/PokePMIR_U_HT_AuxPmpVltgChrt */
    /* Entry Internal: PokePMIR_U_HT_AuxPmpVltg/PokePMIR_U_HT_AuxPmpVltgChrt */
    /* Transition: '<S1505>:2' */
    if (!LePMIR_b_HT_AuxPmpVltgFA)
    {
        /* Transition: '<S1505>:3' */
        /* Transition: '<S1505>:15' */
        PMIR_ac_B.LePMIR_U_HT_AuxPmpVltg_out = LePMIR_U_HT_AuxPmpVltg;
        rtb_LePMIR_b_HT_AuxPmpVltgFA_out = false;

        /* Transition: '<S1505>:18' */
    }
    else
    {
        /* Transition: '<S1505>:4' */
        rtb_LePMIR_b_HT_AuxPmpVltgFA_out = true;
    }

    /* End of Chart: '<S140>/PokePMIR_U_HT_AuxPmpVltgChrt' */

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S140>/VePMIR_U_HT_AuxPmpVltg_write'
     * */
    Rte_IrvWrite_PokePMIR_U_HT_AuxPmpVltg_HTAuxPumpVlt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_U_HT_AuxPmpVltg_out);

    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S140>/VePMIR_b_HT_AuxPmpVltgFA_write'
     * */
    Rte_IrvWrite_PokePMIR_U_HT_AuxPmpVltg_VePMIR_b_HT_AuxPmpVltgFA_write_IRV
        (rtb_LePMIR_b_HT_AuxPmpVltgFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_U_HT_AuxPmpVltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_U_LTActPumpVlt(VAR(float32, AUTOMATIC)
    LePMIR_U_LTActPumpVlt, VAR(boolean, AUTOMATIC) LePMIR_b_LTActPumpVltFA)
{
    boolean rtb_LePMIR_b_LTActPumpVltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_U_LTActPumpVlt' */
    /* Chart: '<S141>/PokePMIR_U_LTActPumpVltChrt' incorporates:
     *  SignalConversion generated from: '<S141>/LePMIR_U_LTActPumpVlt'
     *  SignalConversion generated from: '<S141>/LePMIR_b_LTActPumpVltFA'
     */
    /* Gateway: PokePMIR_U_LTActPumpVlt/PokePMIR_U_LTActPumpVltChrt */
    /* During: PokePMIR_U_LTActPumpVlt/PokePMIR_U_LTActPumpVltChrt */
    /* Entry Internal: PokePMIR_U_LTActPumpVlt/PokePMIR_U_LTActPumpVltChrt */
    /* Transition: '<S1506>:2' */
    if (!LePMIR_b_LTActPumpVltFA)
    {
        /* Transition: '<S1506>:3' */
        /* Transition: '<S1506>:15' */
        PMIR_ac_B.LePMIR_U_LTActPumpVlt_out = LePMIR_U_LTActPumpVlt;
        rtb_LePMIR_b_LTActPumpVltFA_out = false;

        /* Transition: '<S1506>:18' */
    }
    else
    {
        /* Transition: '<S1506>:4' */
        rtb_LePMIR_b_LTActPumpVltFA_out = true;
    }

    /* End of Chart: '<S141>/PokePMIR_U_LTActPumpVltChrt' */

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S141>/VePMIR_U_LTActPumpVlt_write'
     * */
    Rte_IrvWrite_PokePMIR_U_LTActPumpVlt_LTActPumpVlt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_U_LTActPumpVlt_out);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S141>/VePMIR_b_LTActPumpVltFA_write'
     * */
    Rte_IrvWrite_PokePMIR_U_LTActPumpVlt_VePMIR_b_LTActPumpVltFA_write_IRV
        (rtb_LePMIR_b_LTActPumpVltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_U_LTActPumpVlt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_U_LT_PsvPmp2Vltg(VAR(float32, AUTOMATIC)
    LePMIR_U_LT_PsvPmp2Vltg, VAR(boolean, AUTOMATIC) LePMIR_b_LT_PsvPmp2VltgFA)
{
    boolean rtb_LePMIR_b_LT_PsvPmp2VltgFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_U_LT_PsvPmp2Vltg' */
    /* Chart: '<S142>/PokePMIR_U_LT_PsvPmp2VltgChrt' incorporates:
     *  SignalConversion generated from: '<S142>/LePMIR_U_LT_PsvPmp2Vltg'
     *  SignalConversion generated from: '<S142>/LePMIR_b_LT_PsvPmp2VltgFA'
     */
    /* Gateway: PokePMIR_U_LT_PsvPmp2Vltg/PokePMIR_U_LT_PsvPmp2VltgChrt */
    /* During: PokePMIR_U_LT_PsvPmp2Vltg/PokePMIR_U_LT_PsvPmp2VltgChrt */
    /* Entry Internal: PokePMIR_U_LT_PsvPmp2Vltg/PokePMIR_U_LT_PsvPmp2VltgChrt */
    /* Transition: '<S1507>:2' */
    if (!LePMIR_b_LT_PsvPmp2VltgFA)
    {
        /* Transition: '<S1507>:3' */
        /* Transition: '<S1507>:15' */
        PMIR_ac_B.LePMIR_U_LT_PsvPmp2Vltg_out = LePMIR_U_LT_PsvPmp2Vltg;
        rtb_LePMIR_b_LT_PsvPmp2VltgFA_out = false;

        /* Transition: '<S1507>:18' */
    }
    else
    {
        /* Transition: '<S1507>:4' */
        rtb_LePMIR_b_LT_PsvPmp2VltgFA_out = true;
    }

    /* End of Chart: '<S142>/PokePMIR_U_LT_PsvPmp2VltgChrt' */

    /* Merge: '<Root>/Merge_143' incorporates:
     *  SignalConversion generated from: '<S142>/VePMIR_U_LT_PsvPmp2Vltg_write'
     * */
    Rte_IrvWrite_PokePMIR_U_LT_PsvPmp2Vltg_LTPsvPump2Vlt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_U_LT_PsvPmp2Vltg_out);

    /* Merge: '<Root>/Merge_142' incorporates:
     *  SignalConversion generated from: '<S142>/VePMIR_b_LT_PsvPmp2VltgFA_write'
     * */
    Rte_IrvWrite_PokePMIR_U_LT_PsvPmp2Vltg_VePMIR_b_LT_PsvPmp2VltgFA_write_IRV
        (rtb_LePMIR_b_LT_PsvPmp2VltgFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_U_LT_PsvPmp2Vltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_U_LT_PsvPmpVltg(VAR(float32, AUTOMATIC)
    LePMIR_U_LT_PsvPmpVltg, VAR(boolean, AUTOMATIC) LePMIR_b_LT_PsvPmpVltgFA)
{
    boolean rtb_LePMIR_b_LT_PsvPmpVltgFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_U_LT_PsvPmpVltg' */
    /* Chart: '<S143>/PokePMIR_U_LT_PsvPmpVltgChrt' incorporates:
     *  SignalConversion generated from: '<S143>/LePMIR_U_LT_PsvPmpVltg'
     *  SignalConversion generated from: '<S143>/LePMIR_b_LT_PsvPmpVltgFA'
     */
    /* Gateway: PokePMIR_U_LT_PsvPmpVltg/PokePMIR_U_LT_PsvPmpVltgChrt */
    /* During: PokePMIR_U_LT_PsvPmpVltg/PokePMIR_U_LT_PsvPmpVltgChrt */
    /* Entry Internal: PokePMIR_U_LT_PsvPmpVltg/PokePMIR_U_LT_PsvPmpVltgChrt */
    /* Transition: '<S1508>:2' */
    if (!LePMIR_b_LT_PsvPmpVltgFA)
    {
        /* Transition: '<S1508>:3' */
        /* Transition: '<S1508>:15' */
        PMIR_ac_B.LePMIR_U_LT_PsvPmpVltg_out = LePMIR_U_LT_PsvPmpVltg;
        rtb_LePMIR_b_LT_PsvPmpVltgFA_out = false;

        /* Transition: '<S1508>:18' */
    }
    else
    {
        /* Transition: '<S1508>:4' */
        rtb_LePMIR_b_LT_PsvPmpVltgFA_out = true;
    }

    /* End of Chart: '<S143>/PokePMIR_U_LT_PsvPmpVltgChrt' */

    /* Merge: '<Root>/Merge_189' incorporates:
     *  SignalConversion generated from: '<S143>/VePMIR_U_LT_PsvPmpVltg_write'
     * */
    Rte_IrvWrite_PokePMIR_U_LT_PsvPmpVltg_LTPsvPumpVlt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_U_LT_PsvPmpVltg_out);

    /* Merge: '<Root>/Merge_188' incorporates:
     *  SignalConversion generated from: '<S143>/VePMIR_b_LT_PsvPmpVltgFA_write'
     * */
    Rte_IrvWrite_PokePMIR_U_LT_PsvPmpVltg_VePMIR_b_LT_PsvPmpVltgFA_write_IRV
        (rtb_LePMIR_b_LT_PsvPmpVltgFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_U_LT_PsvPmpVltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_U_TransAuxPmp2_Vltg(VAR(float32, AUTOMATIC)
    LePMIR_U_TransAuxPmp2_Vltg, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_VltgFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_VltgFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_U_TransAuxPmp2_Vltg' */
    /* Chart: '<S144>/PokePMIR_U_TransAuxPmp2_VltgChrt' incorporates:
     *  SignalConversion generated from: '<S144>/LePMIR_U_TransAuxPmp2_Vltg'
     *  SignalConversion generated from: '<S144>/LePMIR_b_TransAuxPmp2_VltgFA'
     */
    /* Gateway: PokePMIR_U_TransAuxPmp2_Vltg/PokePMIR_U_TransAuxPmp2_VltgChrt */
    /* During: PokePMIR_U_TransAuxPmp2_Vltg/PokePMIR_U_TransAuxPmp2_VltgChrt */
    /* Entry Internal: PokePMIR_U_TransAuxPmp2_Vltg/PokePMIR_U_TransAuxPmp2_VltgChrt */
    /* Transition: '<S1509>:2' */
    if (!LePMIR_b_TransAuxPmp2_VltgFA)
    {
        /* Transition: '<S1509>:3' */
        /* Transition: '<S1509>:15' */
        PMIR_ac_B.LePMIR_U_TransAuxPmp2_Vltg_out = LePMIR_U_TransAuxPmp2_Vltg;
        rtb_LePMIR_b_TransAuxPmp2_VltgFA_out = false;

        /* Transition: '<S1509>:18' */
    }
    else
    {
        /* Transition: '<S1509>:4' */
        rtb_LePMIR_b_TransAuxPmp2_VltgFA_out = true;
    }

    /* End of Chart: '<S144>/PokePMIR_U_TransAuxPmp2_VltgChrt' */

    /* Merge: '<Root>/Merge_225' incorporates:
     *  SignalConversion generated from: '<S144>/VePMIR_U_TransAuxPmp2_Vltg_write'
     * */
    Rte_IrvWrite_PokePMIR_U_TransAuxPmp2_Vltg_TransAuxPmp2_Vltg_INIT_write_IRV
        (PMIR_ac_B.LePMIR_U_TransAuxPmp2_Vltg_out);

    /* Merge: '<Root>/Merge_224' incorporates:
     *  SignalConversion generated from: '<S144>/VePMIR_b_TransAuxPmp2_VltgFA_write'
     * */
    Rte_IrvWrite_PokePMIR_U_TransAuxPmp2_Vltg_VePMIR_b_TransAuxPmp2_VltgFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_VltgFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_U_TransAuxPmp2_Vltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_U_TransAuxPmp_Vltg(VAR(float32, AUTOMATIC)
    LePMIR_U_TransAuxPmp_Vltg, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_VltgFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_U_TransAuxPmp_Vltg' */
    /* Chart: '<S145>/PokePMIR_U_TransAuxPmp_VltgChrt' incorporates:
     *  SignalConversion generated from: '<S145>/LePMIR_U_TransAuxPmp_Vltg'
     *  SignalConversion generated from: '<S145>/LePMIR_b_TransAuxPmp_VltgFA'
     */
    /* Gateway: PokePMIR_U_TransAuxPmp_Vltg/PokePMIR_U_TransAuxPmp_VltgChrt */
    /* During: PokePMIR_U_TransAuxPmp_Vltg/PokePMIR_U_TransAuxPmp_VltgChrt */
    /* Entry Internal: PokePMIR_U_TransAuxPmp_Vltg/PokePMIR_U_TransAuxPmp_VltgChrt */
    /* Transition: '<S1510>:2' */
    if (!LePMIR_b_TransAuxPmp_VltgFA)
    {
        /* Transition: '<S1510>:3' */
        /* Transition: '<S1510>:15' */
        PMIR_ac_B.LePMIR_U_TransAuxPmp_Vltg_out = LePMIR_U_TransAuxPmp_Vltg;

        /* Transition: '<S1510>:18' */
    }
    else
    {
        /* Transition: '<S1510>:4' */
    }

    /* End of Chart: '<S145>/PokePMIR_U_TransAuxPmp_VltgChrt' */

    /* Merge: '<Root>/Merge_252' incorporates:
     *  SignalConversion generated from: '<S145>/VePMIR_U_TransAuxPmp_Vltg_write'
     * */
    Rte_IrvWrite_PokePMIR_U_TransAuxPmp_Vltg_TransAuxPmp_Vltg_INIT_write_IRV
        (PMIR_ac_B.LePMIR_U_TransAuxPmp_Vltg_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_U_TransAuxPmp_Vltg' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrLIN(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrLIN)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrLIN' */
    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S146>/LePMIR_b_FCCPmpErrLIN'
     *  SignalConversion generated from: '<S146>/VePMIR_b_FCCPmpErrLIN_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrLIN/PokePMIR_b_FCCPmpErrLINChrt */
    /* During: PokePMIR_b_FCCPmpErrLIN/PokePMIR_b_FCCPmpErrLINChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrLIN/PokePMIR_b_FCCPmpErrLINChrt */
    /* Transition: '<S1511>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrLIN_FCCPmpErrLIN_INIT_write_IRV
        (LePMIR_b_FCCPmpErrLIN);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrLIN' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrLLO(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrLLO)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrLLO' */
    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S147>/LePMIR_b_FCCPmpErrLLO'
     *  SignalConversion generated from: '<S147>/VePMIR_b_FCCPmpErrLLO_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrLLO/PokePMIR_b_FCCPmpErrLLOChrt */
    /* During: PokePMIR_b_FCCPmpErrLLO/PokePMIR_b_FCCPmpErrLLOChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrLLO/PokePMIR_b_FCCPmpErrLLOChrt */
    /* Transition: '<S1512>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrLLO_FCCPmpErrLLO_INIT_write_IRV
        (LePMIR_b_FCCPmpErrLLO);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrLLO' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrOC(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrOC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOC' */
    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S148>/LePMIR_b_FCCPmpErrOC'
     *  SignalConversion generated from: '<S148>/VePMIR_b_FCCPmpErrOC_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrOC/PokePMIR_b_FCCPmpErrOCChrt */
    /* During: PokePMIR_b_FCCPmpErrOC/PokePMIR_b_FCCPmpErrOCChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrOC/PokePMIR_b_FCCPmpErrOCChrt */
    /* Transition: '<S1513>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrOC_FCCPmpErrOC_INIT_write_IRV
        (LePMIR_b_FCCPmpErrOC);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOC' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrOT(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrOT)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOT' */
    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S149>/LePMIR_b_FCCPmpErrOT'
     *  SignalConversion generated from: '<S149>/VePMIR_b_FCCPmpErrOT_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrOT/PokePMIR_b_FCCPmpErrOTChrt */
    /* During: PokePMIR_b_FCCPmpErrOT/PokePMIR_b_FCCPmpErrOTChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrOT/PokePMIR_b_FCCPmpErrOTChrt */
    /* Transition: '<S1514>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrOT_FCCPmpErrOT_INIT_write_IRV
        (LePMIR_b_FCCPmpErrOT);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOT' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrOTD(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrOTD)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOTD' */
    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S150>/LePMIR_b_FCCPmpErrOTD'
     *  SignalConversion generated from: '<S150>/VePMIR_b_FCCPmpErrOTD_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrOTD/PokePMIR_b_FCCPmpErrOTDChrt */
    /* During: PokePMIR_b_FCCPmpErrOTD/PokePMIR_b_FCCPmpErrOTDChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrOTD/PokePMIR_b_FCCPmpErrOTDChrt */
    /* Transition: '<S1515>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrOTD_FCCPmpErrOTD_INIT_write_IRV
        (LePMIR_b_FCCPmpErrOTD);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOTD' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrOV(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrOV)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOV' */
    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S151>/LePMIR_b_FCCPmpErrOV'
     *  SignalConversion generated from: '<S151>/VePMIR_b_FCCPmpErrOV_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrOV/PokePMIR_b_FCCPmpErrOVChrt */
    /* During: PokePMIR_b_FCCPmpErrOV/PokePMIR_b_FCCPmpErrOVChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrOV/PokePMIR_b_FCCPmpErrOVChrt */
    /* Transition: '<S1516>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrOV_FCCPmpErrOV_INIT_write_IRV
        (LePMIR_b_FCCPmpErrOV);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrOV' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrSC(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrSC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrSC' */
    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S152>/LePMIR_b_FCCPmpErrSC'
     *  SignalConversion generated from: '<S152>/VePMIR_b_FCCPmpErrSC_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrSC/PokePMIR_b_FCCPmpErrSCChrt */
    /* During: PokePMIR_b_FCCPmpErrSC/PokePMIR_b_FCCPmpErrSCChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrSC/PokePMIR_b_FCCPmpErrSCChrt */
    /* Transition: '<S1517>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrSC_FCCPmpErrSC_INIT_write_IRV
        (LePMIR_b_FCCPmpErrSC);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrSC' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrUV(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrUV)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrUV' */
    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S153>/LePMIR_b_FCCPmpErrUV'
     *  SignalConversion generated from: '<S153>/VePMIR_b_FCCPmpErrUV_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrUV/PokePMIR_b_FCCPmpErrUVChrt */
    /* During: PokePMIR_b_FCCPmpErrUV/PokePMIR_b_FCCPmpErrUVChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrUV/PokePMIR_b_FCCPmpErrUVChrt */
    /* Transition: '<S1518>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrUV_FCCPmpErrUV_INIT_write_IRV
        (LePMIR_b_FCCPmpErrUV);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrUV' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpErrVD(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpErrVD)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpErrVD' */
    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S154>/LePMIR_b_FCCPmpErrVD'
     *  SignalConversion generated from: '<S154>/VePMIR_b_FCCPmpErrVD_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpErrVD/PokePMIR_b_FCCPmpErrVDChrt */
    /* During: PokePMIR_b_FCCPmpErrVD/PokePMIR_b_FCCPmpErrVDChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpErrVD/PokePMIR_b_FCCPmpErrVDChrt */
    /* Transition: '<S1519>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpErrVD_FCCPmpErrVD_INIT_write_IRV
        (LePMIR_b_FCCPmpErrVD);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpErrVD' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpIntFlt(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpIntFlt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpIntFlt' */
    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S155>/LePMIR_b_FCCPmpIntFlt'
     *  SignalConversion generated from: '<S155>/VePMIR_b_FCCPmpIntFlt_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpIntFlt/PokePMIR_b_FCCPmpIntFltChrt */
    /* During: PokePMIR_b_FCCPmpIntFlt/PokePMIR_b_FCCPmpIntFltChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpIntFlt/PokePMIR_b_FCCPmpIntFltChrt */
    /* Transition: '<S1520>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpIntFlt_FCCPmpIntFlt_INIT_write_IRV
        (LePMIR_b_FCCPmpIntFlt);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpIntFlt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_FCCPmpStlFlt(VAR(boolean, AUTOMATIC)
    LePMIR_b_FCCPmpStlFlt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_FCCPmpStlFlt' */
    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S156>/LePMIR_b_FCCPmpStlFlt'
     *  SignalConversion generated from: '<S156>/VePMIR_b_FCCPmpStlFlt_write'
     */
    /* Gateway: PokePMIR_b_FCCPmpStlFlt/PokePMIR_b_FCCPmpStlFltChrt */
    /* During: PokePMIR_b_FCCPmpStlFlt/PokePMIR_b_FCCPmpStlFltChrt */
    /* Entry Internal: PokePMIR_b_FCCPmpStlFlt/PokePMIR_b_FCCPmpStlFltChrt */
    /* Transition: '<S1521>:2' */
    Rte_IrvWrite_PokePMIR_b_FCCPmpStlFlt_FCCPmpStlFlt_INIT_write_IRV
        (LePMIR_b_FCCPmpStlFlt);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_FCCPmpStlFlt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_HTAuxPumpRespErr(VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpRespErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_HTAuxPumpRespErr' */
    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S157>/LePMIR_b_HTAuxPumpRespErr'
     *  SignalConversion generated from: '<S157>/VePMIR_b_HTAuxPumpRespErr_write'
     */
    /* Gateway: PokePMIR_b_HTAuxPumpRespErr/PokePMIR_b_HTAuxPumpRespErrChrt */
    /* During: PokePMIR_b_HTAuxPumpRespErr/PokePMIR_b_HTAuxPumpRespErrChrt */
    /* Entry Internal: PokePMIR_b_HTAuxPumpRespErr/PokePMIR_b_HTAuxPumpRespErrChrt */
    /* Transition: '<S1522>:2' */
    Rte_IrvWrite_PokePMIR_b_HTAuxPumpRespErr_HTAuxPumpRespErr_INIT_write_IRV
        (LePMIR_b_HTAuxPumpRespErr);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_HTAuxPumpRespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_LTActPumpRespErr(VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpRespErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_LTActPumpRespErr' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S158>/LePMIR_b_LTActPumpRespErr'
     *  SignalConversion generated from: '<S158>/VePMIR_b_LTActPumpRespErr_write'
     */
    /* Gateway: PokePMIR_b_LTActPumpRespErr/PokePMIR_b_LTActPumpRespErrChrt */
    /* During: PokePMIR_b_LTActPumpRespErr/PokePMIR_b_LTActPumpRespErrChrt */
    /* Entry Internal: PokePMIR_b_LTActPumpRespErr/PokePMIR_b_LTActPumpRespErrChrt */
    /* Transition: '<S1523>:2' */
    Rte_IrvWrite_PokePMIR_b_LTActPumpRespErr_LTActPumpRespErr_INIT_write_IRV
        (LePMIR_b_LTActPumpRespErr);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_LTActPumpRespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_LTPsvPump2RespErr(VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2RespErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_LTPsvPump2RespErr' */
    /* Merge: '<Root>/Merge_135' incorporates:
     *  SignalConversion generated from: '<S159>/LePMIR_b_LTPsvPump2RespErr'
     *  SignalConversion generated from: '<S159>/VePMIR_b_LTPsvPump2RespErr_write'
     */
    /* Gateway: PokePMIR_b_LTPsvPump2RespErr/PokePMIR_b_LTPsvPump2RespErrChrt */
    /* During: PokePMIR_b_LTPsvPump2RespErr/PokePMIR_b_LTPsvPump2RespErrChrt */
    /* Entry Internal: PokePMIR_b_LTPsvPump2RespErr/PokePMIR_b_LTPsvPump2RespErrChrt */
    /* Transition: '<S1524>:2' */
    Rte_IrvWrite_PokePMIR_b_LTPsvPump2RespErr_LTPsvPump2RespErr_INIT_write_IRV
        (LePMIR_b_LTPsvPump2RespErr);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_LTPsvPump2RespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_LTPsvPumpRespErr(VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpRespErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_LTPsvPumpRespErr' */
    /* Merge: '<Root>/Merge_181' incorporates:
     *  SignalConversion generated from: '<S160>/LePMIR_b_LTPsvPumpRespErr'
     *  SignalConversion generated from: '<S160>/VePMIR_b_LTPsvPumpRespErr_write'
     */
    /* Gateway: PokePMIR_b_LTPsvPumpRespErr/PokePMIR_b_LTPsvPumpRespErrChrt */
    /* During: PokePMIR_b_LTPsvPumpRespErr/PokePMIR_b_LTPsvPumpRespErrChrt */
    /* Entry Internal: PokePMIR_b_LTPsvPumpRespErr/PokePMIR_b_LTPsvPumpRespErrChrt */
    /* Transition: '<S1525>:2' */
    Rte_IrvWrite_PokePMIR_b_LTPsvPumpRespErr_LTPsvPumpRespErr_INIT_write_IRV
        (LePMIR_b_LTPsvPumpRespErr);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_LTPsvPumpRespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_TransAuxPmp2_RespErr(VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_RespErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_TransAuxPmp2_RespErr' */
    /* Merge: '<Root>/Merge_211' incorporates:
     *  SignalConversion generated from: '<S161>/LePMIR_b_TransAuxPmp2_RespErr'
     *  SignalConversion generated from: '<S161>/VePMIR_b_TransAuxPmp2_RespErr_write'
     */
    /* Gateway: PokePMIR_b_TransAuxPmp2_RespErr/PokePMIR_b_TransAuxPmp2_RespErrChrt */
    /* During: PokePMIR_b_TransAuxPmp2_RespErr/PokePMIR_b_TransAuxPmp2_RespErrChrt */
    /* Entry Internal: PokePMIR_b_TransAuxPmp2_RespErr/PokePMIR_b_TransAuxPmp2_RespErrChrt */
    /* Transition: '<S1526>:2' */
    Rte_IrvWrite_PokePMIR_b_TransAuxPmp2_RespErr_VePMIR_b_TransAuxPmp2_RespErrFA_write_IRV
        (LePMIR_b_TransAuxPmp2_RespErr);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_TransAuxPmp2_RespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_TransAuxPmp_RespErr(VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_RespErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_TransAuxPmp_RespErr' */
    /* Merge: '<Root>/Merge_244' incorporates:
     *  SignalConversion generated from: '<S162>/LePMIR_b_TransAuxPmp_RespErr'
     *  SignalConversion generated from: '<S162>/VePMIR_b_TransAuxPmp_RespErr_write'
     */
    /* Gateway: PokePMIR_b_TransAuxPmp_RespErr/PokePMIR_b_TransAuxPmp_RespErrChrt */
    /* During: PokePMIR_b_TransAuxPmp_RespErr/PokePMIR_b_TransAuxPmp_RespErrChrt */
    /* Entry Internal: PokePMIR_b_TransAuxPmp_RespErr/PokePMIR_b_TransAuxPmp_RespErrChrt */
    /* Transition: '<S1527>:2' */
    Rte_IrvWrite_PokePMIR_b_TransAuxPmp_RespErr_VePMIR_b_TransAuxPmp_RespErr_write_IRV
        (LePMIR_b_TransAuxPmp_RespErr);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_TransAuxPmp_RespErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_b_TransAuxPmp_TCM_Req(VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_TCM_Req)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_b_TransAuxPmp_TCM_Req' */
    /* Merge: '<Root>/Merge_248' incorporates:
     *  SignalConversion generated from: '<S163>/LePMIR_b_TransAuxPmp_TCM_Req'
     *  SignalConversion generated from: '<S163>/VePMIR_b_TransAuxPmp_TCM_Req_write'
     */
    /* Gateway: PokePMIR_b_TransAuxPmp_TCM_Req/PokePMIR_b_TransAuxPmp_TCM_ReqChrt */
    /* During: PokePMIR_b_TransAuxPmp_TCM_Req/PokePMIR_b_TransAuxPmp_TCM_ReqChrt */
    /* Entry Internal: PokePMIR_b_TransAuxPmp_TCM_Req/PokePMIR_b_TransAuxPmp_TCM_ReqChrt */
    /* Transition: '<S1528>:2' */
    Rte_IrvWrite_PokePMIR_b_TransAuxPmp_TCM_Req_TransAuxPmp_TCM_Req_INIT_write_IRV
        (LePMIR_b_TransAuxPmp_TCM_Req);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_b_TransAuxPmp_TCM_Req' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPmpAirPrsntErr(VAR(TePMPR_e_FTSNA,
    AUTOMATIC) LePMIR_e_HTAuxPmpAirPrsntErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPmpAirPrsntErrFA)
{
    boolean rtb_LePMIR_b_HTAuxPmpAirPrsntErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPmpAirPrsntErr' */
    /* Chart: '<S164>/PokePMIR_e_HTAuxPmpAirPrsntErrChrt' incorporates:
     *  SignalConversion generated from: '<S164>/LePMIR_b_HTAuxPmpAirPrsntErrFA'
     *  SignalConversion generated from: '<S164>/LePMIR_e_HTAuxPmpAirPrsntErr'
     */
    /* Gateway: PokePMIR_e_HTAuxPmpAirPrsntErr/PokePMIR_e_HTAuxPmpAirPrsntErrChrt */
    /* During: PokePMIR_e_HTAuxPmpAirPrsntErr/PokePMIR_e_HTAuxPmpAirPrsntErrChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPmpAirPrsntErr/PokePMIR_e_HTAuxPmpAirPrsntErrChrt */
    /* Transition: '<S1529>:2' */
    if (!LePMIR_b_HTAuxPmpAirPrsntErrFA)
    {
        /* Transition: '<S1529>:3' */
        /* Transition: '<S1529>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPmpAirPrsntErr_out =
            LePMIR_e_HTAuxPmpAirPrsntErr;
        rtb_LePMIR_b_HTAuxPmpAirPrsntErrFA_out = false;

        /* Transition: '<S1529>:18' */
    }
    else
    {
        /* Transition: '<S1529>:4' */
        rtb_LePMIR_b_HTAuxPmpAirPrsntErrFA_out = true;
    }

    /* End of Chart: '<S164>/PokePMIR_e_HTAuxPmpAirPrsntErrChrt' */

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S164>/VePMIR_b_HTAuxPmpAirPrsntErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPmpAirPrsntErr_VePMIR_b_HTAuxPmpAirPrsntErrFA_write_IRV
        (rtb_LePMIR_b_HTAuxPmpAirPrsntErrFA_out);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S164>/VePMIR_e_HTAuxPmpAirPrsntErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPmpAirPrsntErr_HTAuxPumpAirPresntErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPmpAirPrsntErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPmpAirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPmpProdSuplr_ID(VAR(uint8, AUTOMATIC)
    LePMIR_y_HTAuxPmpProdSuplr_ID)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPmpProdSuplr_ID' */
    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S165>/LePMIR_y_HTAuxPmpProdSuplr_ID'
     *  SignalConversion generated from: '<S165>/VePMIR_y_HTAuxPmpProdSuplr_ID_write'
     */
    /* Gateway: PokePMIR_e_HTAuxPmpProdSuplr_ID/PokePMIR_e_HTAuxPmpProdSuplr_IDChrt */
    /* During: PokePMIR_e_HTAuxPmpProdSuplr_ID/PokePMIR_e_HTAuxPmpProdSuplr_IDChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPmpProdSuplr_ID/PokePMIR_e_HTAuxPmpProdSuplr_IDChrt */
    /* Transition: '<S1530>:2' */
    Rte_IrvWrite_PokePMIR_e_HTAuxPmpProdSuplr_ID_HTAuxPumpProdSuplrID_INIT_write_IRV
        (LePMIR_y_HTAuxPmpProdSuplr_ID);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPmpProdSuplr_ID' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPumpDeblock(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_HTAuxPumpDeblock, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpDeblockFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpDeblockFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPumpDeblock' */
    /* Chart: '<S166>/PokePMIR_e_HTAuxPumpDeblockChrt' incorporates:
     *  SignalConversion generated from: '<S166>/LePMIR_b_HTAuxPumpDeblockFA'
     *  SignalConversion generated from: '<S166>/LePMIR_e_HTAuxPumpDeblock'
     */
    /* Gateway: PokePMIR_e_HTAuxPumpDeblock/PokePMIR_e_HTAuxPumpDeblockChrt */
    /* During: PokePMIR_e_HTAuxPumpDeblock/PokePMIR_e_HTAuxPumpDeblockChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPumpDeblock/PokePMIR_e_HTAuxPumpDeblockChrt */
    /* Transition: '<S1531>:2' */
    if (!LePMIR_b_HTAuxPumpDeblockFA)
    {
        /* Transition: '<S1531>:3' */
        /* Transition: '<S1531>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPumpDeblock_out = LePMIR_e_HTAuxPumpDeblock;
        rtb_LePMIR_b_HTAuxPumpDeblockFA_out = false;

        /* Transition: '<S1531>:18' */
    }
    else
    {
        /* Transition: '<S1531>:4' */
        rtb_LePMIR_b_HTAuxPumpDeblockFA_out = true;
    }

    /* End of Chart: '<S166>/PokePMIR_e_HTAuxPumpDeblockChrt' */

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S166>/VePMIR_b_HTAuxPumpDeblockFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpDeblock_VePMIR_b_HTAuxPumpDeblockFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpDeblockFA_out);

    /* Merge: '<Root>/Merge_79' incorporates:
     *  SignalConversion generated from: '<S166>/VePMIR_e_HTAuxPumpDeblock_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpDeblock_HTAuxPumpDeblock_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPumpDeblock_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPumpDeblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPumpDryRun(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_HTAuxPumpDryRun, VAR(boolean, AUTOMATIC) LePMIR_b_HTAuxPumpDryRunFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpDryRunFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPumpDryRun' */
    /* Chart: '<S167>/PokePMIR_e_HTAuxPumpDryRunChrt' incorporates:
     *  SignalConversion generated from: '<S167>/LePMIR_b_HTAuxPumpDryRunFA'
     *  SignalConversion generated from: '<S167>/LePMIR_e_HTAuxPumpDryRun'
     */
    /* Gateway: PokePMIR_e_HTAuxPumpDryRun/PokePMIR_e_HTAuxPumpDryRunChrt */
    /* During: PokePMIR_e_HTAuxPumpDryRun/PokePMIR_e_HTAuxPumpDryRunChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPumpDryRun/PokePMIR_e_HTAuxPumpDryRunChrt */
    /* Transition: '<S1532>:2' */
    if (!LePMIR_b_HTAuxPumpDryRunFA)
    {
        /* Transition: '<S1532>:3' */
        /* Transition: '<S1532>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPumpDryRun_out = LePMIR_e_HTAuxPumpDryRun;
        rtb_LePMIR_b_HTAuxPumpDryRunFA_out = false;

        /* Transition: '<S1532>:18' */
    }
    else
    {
        /* Transition: '<S1532>:4' */
        rtb_LePMIR_b_HTAuxPumpDryRunFA_out = true;
    }

    /* End of Chart: '<S167>/PokePMIR_e_HTAuxPumpDryRunChrt' */

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S167>/VePMIR_b_HTAuxPumpDryRunFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpDryRun_VePMIR_b_HTAuxPumpDryRunFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpDryRunFA_out);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  SignalConversion generated from: '<S167>/VePMIR_e_HTAuxPumpDryRun_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpDryRun_HTAuxPumpDryRun_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPumpDryRun_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPumpDryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPumpFailsafe(VAR(TePMPR_e_TFSNA, AUTOMATIC)
    LePMIR_e_HTAuxPumpFailsafe, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpFailsafeFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPumpFailsafe' */
    /* Chart: '<S168>/PokePMIR_e_HTAuxPumpFailsafeChrt' incorporates:
     *  SignalConversion generated from: '<S168>/LePMIR_b_HTAuxPumpFailsafeFA'
     *  SignalConversion generated from: '<S168>/LePMIR_e_HTAuxPumpFailsafe'
     */
    /* Gateway: PokePMIR_e_HTAuxPumpFailsafe/PokePMIR_e_HTAuxPumpFailsafeChrt */
    /* During: PokePMIR_e_HTAuxPumpFailsafe/PokePMIR_e_HTAuxPumpFailsafeChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPumpFailsafe/PokePMIR_e_HTAuxPumpFailsafeChrt */
    /* Transition: '<S1533>:2' */
    if (!LePMIR_b_HTAuxPumpFailsafeFA)
    {
        /* Transition: '<S1533>:3' */
        /* Transition: '<S1533>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPumpFailsafe_out = LePMIR_e_HTAuxPumpFailsafe;

        /* Transition: '<S1533>:18' */
    }
    else
    {
        /* Transition: '<S1533>:4' */
    }

    /* End of Chart: '<S168>/PokePMIR_e_HTAuxPumpFailsafeChrt' */

    /* Merge: '<Root>/Merge_82' incorporates:
     *  SignalConversion generated from: '<S168>/VePMIR_e_HTAuxPumpFailsafe_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpFailsafe_HTAuxPumpFailsafe_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPumpFailsafe_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPumpFailsafe' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPumpNodeErr(VAR(TePMPR_e_NodeError,
    AUTOMATIC) LePMIR_e_HTAuxPumpNodeErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpNodeErrFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpNodeErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPumpNodeErr' */
    /* Chart: '<S169>/PokePMIR_e_HTAuxPumpNodeErrChrt' incorporates:
     *  SignalConversion generated from: '<S169>/LePMIR_b_HTAuxPumpNodeErrFA'
     *  SignalConversion generated from: '<S169>/LePMIR_e_HTAuxPumpNodeErr'
     */
    /* Gateway: PokePMIR_e_HTAuxPumpNodeErr/PokePMIR_e_HTAuxPumpNodeErrChrt */
    /* During: PokePMIR_e_HTAuxPumpNodeErr/PokePMIR_e_HTAuxPumpNodeErrChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPumpNodeErr/PokePMIR_e_HTAuxPumpNodeErrChrt */
    /* Transition: '<S1534>:2' */
    if (!LePMIR_b_HTAuxPumpNodeErrFA)
    {
        /* Transition: '<S1534>:3' */
        /* Transition: '<S1534>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPumpNodeErr_out = LePMIR_e_HTAuxPumpNodeErr;
        rtb_LePMIR_b_HTAuxPumpNodeErrFA_out = false;

        /* Transition: '<S1534>:18' */
    }
    else
    {
        /* Transition: '<S1534>:4' */
        rtb_LePMIR_b_HTAuxPumpNodeErrFA_out = true;
    }

    /* End of Chart: '<S169>/PokePMIR_e_HTAuxPumpNodeErrChrt' */

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S169>/VePMIR_b_HTAuxPumpNodeErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpNodeErr_VePMIR_b_HTAuxPumpNodeErrFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpNodeErrFA_out);

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S169>/VePMIR_e_HTAuxPumpNodeErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpNodeErr_HTAuxPumpNodeErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPumpNodeErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPumpNodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPumpOvrCrnt(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_HTAuxPumpOvrCrnt, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpOvrCrntFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpOvrCrntFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPumpOvrCrnt' */
    /* Chart: '<S170>/PokePMIR_e_HTAuxPumpOvrCrntChrt' incorporates:
     *  SignalConversion generated from: '<S170>/LePMIR_b_HTAuxPumpOvrCrntFA'
     *  SignalConversion generated from: '<S170>/LePMIR_e_HTAuxPumpOvrCrnt'
     */
    /* Gateway: PokePMIR_e_HTAuxPumpOvrCrnt/PokePMIR_e_HTAuxPumpOvrCrntChrt */
    /* During: PokePMIR_e_HTAuxPumpOvrCrnt/PokePMIR_e_HTAuxPumpOvrCrntChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPumpOvrCrnt/PokePMIR_e_HTAuxPumpOvrCrntChrt */
    /* Transition: '<S1535>:2' */
    if (!LePMIR_b_HTAuxPumpOvrCrntFA)
    {
        /* Transition: '<S1535>:3' */
        /* Transition: '<S1535>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPumpOvrCrnt_out = LePMIR_e_HTAuxPumpOvrCrnt;
        rtb_LePMIR_b_HTAuxPumpOvrCrntFA_out = false;

        /* Transition: '<S1535>:18' */
    }
    else
    {
        /* Transition: '<S1535>:4' */
        rtb_LePMIR_b_HTAuxPumpOvrCrntFA_out = true;
    }

    /* End of Chart: '<S170>/PokePMIR_e_HTAuxPumpOvrCrntChrt' */

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S170>/VePMIR_b_HTAuxPumpOvrCrntFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpOvrCrnt_VePMIR_b_HTAuxPumpOvrCrntFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpOvrCrntFA_out);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  SignalConversion generated from: '<S170>/VePMIR_e_HTAuxPumpOvrCrnt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpOvrCrnt_HTAuxPumpOvrCrnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPumpOvrCrnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPumpOvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPumpSuppVltErr(VAR(TePMPR_e_FTSNA,
    AUTOMATIC) LePMIR_e_HTAuxPumpSuppVltErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpSuppVltErrFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpSuppVltErrFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPumpSuppVltErr' */
    /* Chart: '<S171>/PokePMIR_e_HTAuxPumpSuppVltErrChrt' incorporates:
     *  SignalConversion generated from: '<S171>/LePMIR_b_HTAuxPumpSuppVltErrFA'
     *  SignalConversion generated from: '<S171>/LePMIR_e_HTAuxPumpSuppVltErr'
     */
    /* Gateway: PokePMIR_e_HTAuxPumpSuppVltErr/PokePMIR_e_HTAuxPumpSuppVltErrChrt */
    /* During: PokePMIR_e_HTAuxPumpSuppVltErr/PokePMIR_e_HTAuxPumpSuppVltErrChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPumpSuppVltErr/PokePMIR_e_HTAuxPumpSuppVltErrChrt */
    /* Transition: '<S1536>:2' */
    if (!LePMIR_b_HTAuxPumpSuppVltErrFA)
    {
        /* Transition: '<S1536>:3' */
        /* Transition: '<S1536>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPumpSuppVltErr_out =
            LePMIR_e_HTAuxPumpSuppVltErr;
        rtb_LePMIR_b_HTAuxPumpSuppVltErrFA_out_a = false;

        /* Transition: '<S1536>:18' */
    }
    else
    {
        /* Transition: '<S1536>:4' */
        rtb_LePMIR_b_HTAuxPumpSuppVltErrFA_out_a = true;
    }

    /* End of Chart: '<S171>/PokePMIR_e_HTAuxPumpSuppVltErrChrt' */

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S171>/VePMIR_b_HTAuxPumpSuppVltErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpSuppVltErr_VePMIR_b_HTAuxPumpSuppVltErrFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpSuppVltErrFA_out_a);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S171>/VePMIR_e_HTAuxPumpSuppVltErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPumpSuppVltErr_HTAuxPumpSuppVltErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPumpSuppVltErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPumpSuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HTAuxPump_LmpHM(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_HTAuxPump_LmpHM, VAR(boolean, AUTOMATIC) LePMIR_b_HTAuxPump_LmpHMFA)
{
    boolean rtb_LePMIR_b_HTAuxPump_LmpHMFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HTAuxPump_LmpHM' */
    /* Chart: '<S172>/PokePMIR_e_HTAuxPump_LmpHMChrt' incorporates:
     *  SignalConversion generated from: '<S172>/LePMIR_b_HTAuxPump_LmpHMFA'
     *  SignalConversion generated from: '<S172>/LePMIR_e_HTAuxPump_LmpHM'
     */
    /* Gateway: PokePMIR_e_HTAuxPump_LmpHM/PokePMIR_e_HTAuxPump_LmpHMChrt */
    /* During: PokePMIR_e_HTAuxPump_LmpHM/PokePMIR_e_HTAuxPump_LmpHMChrt */
    /* Entry Internal: PokePMIR_e_HTAuxPump_LmpHM/PokePMIR_e_HTAuxPump_LmpHMChrt */
    /* Transition: '<S1537>:2' */
    if (!LePMIR_b_HTAuxPump_LmpHMFA)
    {
        /* Transition: '<S1537>:3' */
        /* Transition: '<S1537>:15' */
        PMIR_ac_B.LePMIR_e_HTAuxPump_LmpHM_out = LePMIR_e_HTAuxPump_LmpHM;
        rtb_LePMIR_b_HTAuxPump_LmpHMFA_out_i = false;

        /* Transition: '<S1537>:18' */
    }
    else
    {
        /* Transition: '<S1537>:4' */
        rtb_LePMIR_b_HTAuxPump_LmpHMFA_out_i = true;
    }

    /* End of Chart: '<S172>/PokePMIR_e_HTAuxPump_LmpHMChrt' */

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S172>/VePMIR_b_HTAuxPump_LmpHMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPump_LmpHM_VePMIR_b_HTAuxPump_LmpHMFA_write_IRV
        (rtb_LePMIR_b_HTAuxPump_LmpHMFA_out_i);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S172>/VePMIR_e_HTAuxPump_LmpHM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HTAuxPump_LmpHM_HTAuxPump_LmpHM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HTAuxPump_LmpHM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HTAuxPump_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HT_AuxPmpMntrRPM(VAR(TePMPR_e_TFSNA, AUTOMATIC)
    LePMIR_e_HT_AuxPmpMntrRPM, VAR(boolean, AUTOMATIC)
    LePMIR_b_HT_AuxPmpMntrRPMFA)
{
    boolean rtb_LePMIR_b_HT_AuxPmpMntrRPMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HT_AuxPmpMntrRPM' */
    /* Chart: '<S173>/PokePMIR_e_HT_AuxPmpMntrRPMChrt' incorporates:
     *  SignalConversion generated from: '<S173>/LePMIR_b_HT_AuxPmpMntrRPMFA'
     *  SignalConversion generated from: '<S173>/LePMIR_e_HT_AuxPmpMntrRPM'
     */
    /* Gateway: PokePMIR_e_HT_AuxPmpMntrRPM/PokePMIR_e_HT_AuxPmpMntrRPMChrt */
    /* During: PokePMIR_e_HT_AuxPmpMntrRPM/PokePMIR_e_HT_AuxPmpMntrRPMChrt */
    /* Entry Internal: PokePMIR_e_HT_AuxPmpMntrRPM/PokePMIR_e_HT_AuxPmpMntrRPMChrt */
    /* Transition: '<S1538>:2' */
    if (!LePMIR_b_HT_AuxPmpMntrRPMFA)
    {
        /* Transition: '<S1538>:3' */
        /* Transition: '<S1538>:15' */
        PMIR_ac_B.LePMIR_e_HT_AuxPmpMntrRPM_out = LePMIR_e_HT_AuxPmpMntrRPM;
        rtb_LePMIR_b_HT_AuxPmpMntrRPMFA_out = false;

        /* Transition: '<S1538>:18' */
    }
    else
    {
        /* Transition: '<S1538>:4' */
        rtb_LePMIR_b_HT_AuxPmpMntrRPMFA_out = true;
    }

    /* End of Chart: '<S173>/PokePMIR_e_HT_AuxPmpMntrRPMChrt' */

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S173>/VePMIR_b_HT_AuxPmpMntrRPMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HT_AuxPmpMntrRPM_VePMIR_b_HT_AuxPmpMntrRPMFA_write_IRV
        (rtb_LePMIR_b_HT_AuxPmpMntrRPMFA_out);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S173>/VePMIR_e_HT_AuxPmpMntrRPM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HT_AuxPmpMntrRPM_HT_AuxPmpMntrRPM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HT_AuxPmpMntrRPM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HT_AuxPmpMntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HT_AuxPmpOT(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_HT_AuxPmpOT, VAR(boolean, AUTOMATIC) LePMIR_b_HT_AuxPmpOTFA)
{
    boolean rtb_LePMIR_b_HT_AuxPmpOTFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HT_AuxPmpOT' */
    /* Chart: '<S174>/PokePMIR_e_HT_AuxPmpOTChrt' incorporates:
     *  SignalConversion generated from: '<S174>/LePMIR_b_HT_AuxPmpOTFA'
     *  SignalConversion generated from: '<S174>/LePMIR_e_HT_AuxPmpOT'
     */
    /* Gateway: PokePMIR_e_HT_AuxPmpOT/PokePMIR_e_HT_AuxPmpOTChrt */
    /* During: PokePMIR_e_HT_AuxPmpOT/PokePMIR_e_HT_AuxPmpOTChrt */
    /* Entry Internal: PokePMIR_e_HT_AuxPmpOT/PokePMIR_e_HT_AuxPmpOTChrt */
    /* Transition: '<S1539>:2' */
    if (!LePMIR_b_HT_AuxPmpOTFA)
    {
        /* Transition: '<S1539>:3' */
        /* Transition: '<S1539>:15' */
        PMIR_ac_B.LePMIR_e_HT_AuxPmpOT_out = LePMIR_e_HT_AuxPmpOT;
        rtb_LePMIR_b_HT_AuxPmpOTFA_out = false;

        /* Transition: '<S1539>:18' */
    }
    else
    {
        /* Transition: '<S1539>:4' */
        rtb_LePMIR_b_HT_AuxPmpOTFA_out = true;
    }

    /* End of Chart: '<S174>/PokePMIR_e_HT_AuxPmpOTChrt' */

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S174>/VePMIR_b_HT_AuxPmpOTFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HT_AuxPmpOT_VePMIR_b_HT_AuxPmpOTFA_write_IRV
        (rtb_LePMIR_b_HT_AuxPmpOTFA_out);

    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S174>/VePMIR_e_HT_AuxPmpOT_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HT_AuxPmpOT_HTAuxPmpOT_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HT_AuxPmpOT_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HT_AuxPmpOT' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_HT_AuxPmp_PstRnSt(VAR
    (TeTMIR_e_ECM_LTP_FanAftRunRq, AUTOMATIC) LePMIR_e_HT_AuxPmp_PstRnSt, VAR
    (boolean, AUTOMATIC) LePMIR_b_HT_AuxPmp_PstRnStFA)
{
    boolean rtb_LePMIR_b_HT_AuxPmp_PstRnStFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_HT_AuxPmp_PstRnSt' */
    /* Chart: '<S175>/PokePMIR_e_HT_AuxPmp_PstRnStChrt' incorporates:
     *  SignalConversion generated from: '<S175>/LePMIR_b_HT_AuxPmp_PstRnStFA'
     *  SignalConversion generated from: '<S175>/LePMIR_e_HT_AuxPmp_PstRnSt'
     */
    /* Gateway: PokePMIR_e_HT_AuxPmp_PstRnSt/PokePMIR_e_HT_AuxPmp_PstRnStChrt */
    /* During: PokePMIR_e_HT_AuxPmp_PstRnSt/PokePMIR_e_HT_AuxPmp_PstRnStChrt */
    /* Entry Internal: PokePMIR_e_HT_AuxPmp_PstRnSt/PokePMIR_e_HT_AuxPmp_PstRnStChrt */
    /* Transition: '<S1540>:2' */
    if (!LePMIR_b_HT_AuxPmp_PstRnStFA)
    {
        /* Transition: '<S1540>:3' */
        /* Transition: '<S1540>:15' */
        PMIR_ac_B.LePMIR_e_HT_AuxPmp_PstRnSt_out = LePMIR_e_HT_AuxPmp_PstRnSt;
        rtb_LePMIR_b_HT_AuxPmp_PstRnStFA_out = false;

        /* Transition: '<S1540>:18' */
    }
    else
    {
        /* Transition: '<S1540>:4' */
        rtb_LePMIR_b_HT_AuxPmp_PstRnStFA_out = true;
    }

    /* End of Chart: '<S175>/PokePMIR_e_HT_AuxPmp_PstRnStChrt' */

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S175>/VePMIR_b_HT_AuxPmp_PstRnStFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HT_AuxPmp_PstRnSt_VePMIR_b_HT_AuxPmp_PstRnStFA_write_IRV
        (rtb_LePMIR_b_HT_AuxPmp_PstRnStFA_out);

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S175>/VePMIR_e_HT_AuxPmp_PstRnSt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_HT_AuxPmp_PstRnSt_HT_AuxPmp_PstRnSt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_HT_AuxPmp_PstRnSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_HT_AuxPmp_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpAirPrsntErr(VAR(TePMPR_e_FTSNA,
    AUTOMATIC) LePMIR_e_LTActPumpAirPrsntErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpAirPrsntErrFA)
{
    boolean rtb_LePMIR_b_LTActPumpAirPrsntErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpAirPrsntErr' */
    /* Chart: '<S176>/PokePMIR_e_LTActPumpAirPrsntErrChrt' incorporates:
     *  SignalConversion generated from: '<S176>/LePMIR_b_LTActPumpAirPrsntErrFA'
     *  SignalConversion generated from: '<S176>/LePMIR_e_LTActPumpAirPrsntErr'
     */
    /* Gateway: PokePMIR_e_LTActPumpAirPrsntErr/PokePMIR_e_LTActPumpAirPrsntErrChrt */
    /* During: PokePMIR_e_LTActPumpAirPrsntErr/PokePMIR_e_LTActPumpAirPrsntErrChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpAirPrsntErr/PokePMIR_e_LTActPumpAirPrsntErrChrt */
    /* Transition: '<S1541>:2' */
    if (!LePMIR_b_LTActPumpAirPrsntErrFA)
    {
        /* Transition: '<S1541>:3' */
        /* Transition: '<S1541>:15' */
        PMIR_ac_B.LePMIR_e_LTActPumpAirPrsntErr_out =
            LePMIR_e_LTActPumpAirPrsntErr;
        rtb_LePMIR_b_LTActPumpAirPrsntErrFA_out = false;

        /* Transition: '<S1541>:18' */
    }
    else
    {
        /* Transition: '<S1541>:4' */
        rtb_LePMIR_b_LTActPumpAirPrsntErrFA_out = true;
    }

    /* End of Chart: '<S176>/PokePMIR_e_LTActPumpAirPrsntErrChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S176>/VePMIR_b_LTActPumpAirPrsntErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpAirPrsntErr_VePMIR_b_LTActPumpAirPrsntErrFA_write_IRV
        (rtb_LePMIR_b_LTActPumpAirPrsntErrFA_out);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S176>/VePMIR_e_LTActPumpAirPrsntErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpAirPrsntErr_LTActPumpAirPrsntErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpAirPrsntErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpAirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpDeblock(VAR(uint8, AUTOMATIC)
    LePMIR_e_LTActPumpDeblock, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpDeblockFA)
{
    boolean rtb_LePMIR_b_LTActPumpDeblockFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpDeblock' */
    /* Chart: '<S177>/PokePMIR_e_LTActPumpDeblockChrt' incorporates:
     *  Constant: '<S1542>/Calib'
     *  SignalConversion generated from: '<S177>/LePMIR_b_LTActPumpDeblockFA'
     *  SignalConversion generated from: '<S177>/LePMIR_e_LTActPumpDeblock'
     */
    /* Gateway: PokePMIR_e_LTActPumpDeblock/PokePMIR_e_LTActPumpDeblockChrt */
    /* During: PokePMIR_e_LTActPumpDeblock/PokePMIR_e_LTActPumpDeblockChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpDeblock/PokePMIR_e_LTActPumpDeblockChrt */
    /* Transition: '<S1543>:39' */
    if (!LePMIR_b_LTActPumpDeblockFA)
    {
        /* Transition: '<S1543>:40' */
        /* Transition: '<S1543>:42' */
        PMIR_ac_B.LePMIR_e_LTActPumpDeblock_out =
            KaPMIR_e_LTActvPumpDeblock_Map[(LePMIR_e_LTActPumpDeblock)];
        rtb_LePMIR_b_LTActPumpDeblockFA_out = false;

        /* Transition: '<S1543>:43' */
    }
    else
    {
        /* Transition: '<S1543>:41' */
        rtb_LePMIR_b_LTActPumpDeblockFA_out = true;
    }

    /* End of Chart: '<S177>/PokePMIR_e_LTActPumpDeblockChrt' */

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S177>/VePMIR_b_LTActPumpDeblockFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpDeblock_VePMIR_b_LTActPumpDeblockFA_write_IRV
        (rtb_LePMIR_b_LTActPumpDeblockFA_out);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S177>/VePMIR_e_LTActPumpDeblock_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpDeblock_LTActPumpDeblock_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpDeblock_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpDeblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpDryRun(VAR(uint8, AUTOMATIC)
    LePMIR_e_LTActPumpDryRun, VAR(boolean, AUTOMATIC) LePMIR_b_LTActPumpDryRunFA)
{
    boolean rtb_LePMIR_b_LTActPumpDryRunFA_out;
    boolean rtb_LePMIR_b_LTActPumpDryRunSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpDryRun' */
    /* Chart: '<S178>/PokePMIR_e_LTActPumpDryRunChrt' incorporates:
     *  Constant: '<S1544>/Calib'
     *  SignalConversion generated from: '<S178>/LePMIR_b_LTActPumpDryRunFA'
     *  SignalConversion generated from: '<S178>/LePMIR_e_LTActPumpDryRun'
     */
    /* Gateway: PokePMIR_e_LTActPumpDryRun/PokePMIR_e_LTActPumpDryRunChrt */
    /* During: PokePMIR_e_LTActPumpDryRun/PokePMIR_e_LTActPumpDryRunChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpDryRun/PokePMIR_e_LTActPumpDryRunChrt */
    /* Transition: '<S1545>:39' */
    if (!LePMIR_b_LTActPumpDryRunFA)
    {
        /* Transition: '<S1545>:40' */
        /* Transition: '<S1545>:42' */
        PMIR_ac_B.LePMIR_e_LTActPumpDryRun_out = KaPMIR_e_LTActvPumpDryRun_Map
            [(LePMIR_e_LTActPumpDryRun)];
        rtb_LePMIR_b_LTActPumpDryRunFA_out = false;
        rtb_LePMIR_b_LTActPumpDryRunSNA_out = false;

        /* Transition: '<S1545>:43' */
    }
    else
    {
        /* Transition: '<S1545>:41' */
        rtb_LePMIR_b_LTActPumpDryRunFA_out = true;
        rtb_LePMIR_b_LTActPumpDryRunSNA_out = true;
    }

    /* End of Chart: '<S178>/PokePMIR_e_LTActPumpDryRunChrt' */

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S178>/VePMIR_b_LTActPumpDryRunFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpDryRun_VePMIR_b_LTActPumpDryRunFA_write_IRV
        (rtb_LePMIR_b_LTActPumpDryRunFA_out);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S178>/VePMIR_b_LTActPumpDryRunSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpDryRun_VePMIR_b_LTActPumpDryRunSNA_write_IRV
        (rtb_LePMIR_b_LTActPumpDryRunSNA_out);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S178>/VePMIR_e_LTActPumpDryRun_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpDryRun_LTActPumpDryRun_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpDryRun_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpDryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpFailsafe(VAR(uint8, AUTOMATIC)
    LePMIR_e_LTActPumpFailsafe, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpFailsafeFA)
{
    boolean rtb_LePMIR_b_LTActPumpFailsafeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpFailsafe' */
    /* Chart: '<S179>/PokePMIR_e_LTActPumpFailsafeChrt' incorporates:
     *  Constant: '<S1546>/Calib'
     *  SignalConversion generated from: '<S179>/LePMIR_b_LTActPumpFailsafeFA'
     *  SignalConversion generated from: '<S179>/LePMIR_e_LTActPumpFailsafe'
     */
    /* Gateway: PokePMIR_e_LTActPumpFailsafe/PokePMIR_e_LTActPumpFailsafeChrt */
    /* During: PokePMIR_e_LTActPumpFailsafe/PokePMIR_e_LTActPumpFailsafeChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpFailsafe/PokePMIR_e_LTActPumpFailsafeChrt */
    /* Transition: '<S1547>:20' */
    if (!LePMIR_b_LTActPumpFailsafeFA)
    {
        /* Transition: '<S1547>:25' */
        /* Transition: '<S1547>:27' */
        PMIR_ac_B.LePMIR_e_LTActPumpFailsafe_out =
            KaPMIR_e_LTActvPumpFailsafe_Map[(LePMIR_e_LTActPumpFailsafe)];
        rtb_LePMIR_b_LTActPumpFailsafeFA_out = false;

        /* Transition: '<S1547>:28' */
    }
    else
    {
        /* Transition: '<S1547>:26' */
        rtb_LePMIR_b_LTActPumpFailsafeFA_out = true;
    }

    /* End of Chart: '<S179>/PokePMIR_e_LTActPumpFailsafeChrt' */

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S179>/VePMIR_b_LTActPumpFailsafeFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpFailsafe_VePMIR_b_LTActPumpFailsafeFA_write_IRV
        (rtb_LePMIR_b_LTActPumpFailsafeFA_out);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S179>/VePMIR_e_LTActPumpFailsafe_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpFailsafe_LTActPumpFailsafe_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpFailsafe_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpFailsafe' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpLmpHM(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTActPumpLmpHM, VAR(boolean, AUTOMATIC) LePMIR_b_LTActPumpLmpHMFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpLmpHM' */
    /* Chart: '<S180>/PokePMIR_e_LTActPumpLmpHMChrt' incorporates:
     *  SignalConversion generated from: '<S180>/LePMIR_b_LTActPumpLmpHMFA'
     *  SignalConversion generated from: '<S180>/LePMIR_e_LTActPumpLmpHM'
     */
    /* Gateway: PokePMIR_e_LTActPumpLmpHM/PokePMIR_e_LTActPumpLmpHMChrt */
    /* During: PokePMIR_e_LTActPumpLmpHM/PokePMIR_e_LTActPumpLmpHMChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpLmpHM/PokePMIR_e_LTActPumpLmpHMChrt */
    /* Transition: '<S1548>:2' */
    if (!LePMIR_b_LTActPumpLmpHMFA)
    {
        /* Transition: '<S1548>:3' */
        /* Transition: '<S1548>:15' */
        PMIR_ac_B.LePMIR_e_LTActPumpLmpHM_out = LePMIR_e_LTActPumpLmpHM;

        /* Transition: '<S1548>:18' */
    }
    else
    {
        /* Transition: '<S1548>:4' */
    }

    /* End of Chart: '<S180>/PokePMIR_e_LTActPumpLmpHMChrt' */

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S180>/VePMIR_e_LTActPumpLmpHM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpLmpHM_LTActPumpLmpHM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpLmpHM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpLmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpMntrRPM(VAR(uint8, AUTOMATIC)
    LePMIR_e_LTActPumpMntrRPM, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpMntrRPMFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpMntrRPM' */
    /* Chart: '<S181>/PokePMIR_e_LTActPumpMntrRPMChrt' incorporates:
     *  Constant: '<S1549>/Calib'
     *  SignalConversion generated from: '<S181>/LePMIR_b_LTActPumpMntrRPMFA'
     *  SignalConversion generated from: '<S181>/LePMIR_e_LTActPumpMntrRPM'
     */
    /* Gateway: PokePMIR_e_LTActPumpMntrRPM/PokePMIR_e_LTActPumpMntrRPMChrt */
    /* During: PokePMIR_e_LTActPumpMntrRPM/PokePMIR_e_LTActPumpMntrRPMChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpMntrRPM/PokePMIR_e_LTActPumpMntrRPMChrt */
    /* Transition: '<S1550>:2' */
    if (!LePMIR_b_LTActPumpMntrRPMFA)
    {
        /* Transition: '<S1550>:3' */
        /* Transition: '<S1550>:15' */
        PMIR_ac_B.LePMIR_e_LTActPumpMntrRPM_out = KaPMIR_e_LTActPumpMntrRPM_Map
            [(LePMIR_e_LTActPumpMntrRPM)];

        /* Transition: '<S1550>:18' */
    }
    else
    {
        /* Transition: '<S1550>:4' */
    }

    /* End of Chart: '<S181>/PokePMIR_e_LTActPumpMntrRPMChrt' */

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S181>/VePMIR_e_LTActPumpMntrRPM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpMntrRPM_LTActPumpMntrRPM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpMntrRPM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpMntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpNodeErr(VAR(uint8, AUTOMATIC)
    LePMIR_e_LTActPumpNodeErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpNodeErrFA)
{
    boolean rtb_LePMIR_b_LTActPumpNodeErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpNodeErr' */
    /* Chart: '<S182>/PokePMIR_e_LTActPumpNodeErrChrt' incorporates:
     *  Constant: '<S1551>/Calib'
     *  SignalConversion generated from: '<S182>/LePMIR_b_LTActPumpNodeErrFA'
     *  SignalConversion generated from: '<S182>/LePMIR_e_LTActPumpNodeErr'
     */
    /* Gateway: PokePMIR_e_LTActPumpNodeErr/PokePMIR_e_LTActPumpNodeErrChrt */
    /* During: PokePMIR_e_LTActPumpNodeErr/PokePMIR_e_LTActPumpNodeErrChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpNodeErr/PokePMIR_e_LTActPumpNodeErrChrt */
    /* Transition: '<S1552>:19' */
    if (!LePMIR_b_LTActPumpNodeErrFA)
    {
        /* Transition: '<S1552>:26' */
        /* Transition: '<S1552>:27' */
        PMIR_ac_B.LePMIR_e_LTActPumpNodeErr_out =
            KaPMIR_e_LTActvPumpNodeErr_Map[(LePMIR_e_LTActPumpNodeErr)];
        rtb_LePMIR_b_LTActPumpNodeErrFA_out = false;

        /* Transition: '<S1552>:28' */
    }
    else
    {
        /* Transition: '<S1552>:31' */
        rtb_LePMIR_b_LTActPumpNodeErrFA_out = true;
    }

    /* End of Chart: '<S182>/PokePMIR_e_LTActPumpNodeErrChrt' */

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S182>/VePMIR_b_LTActPumpNodeErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpNodeErr_VePMIR_b_LTActPumpNodeErrFA_write_IRV
        (rtb_LePMIR_b_LTActPumpNodeErrFA_out);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S182>/VePMIR_e_LTActPumpNodeErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpNodeErr_LTActPumpNodeErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpNodeErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpNodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpOvrCrnt(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTActPumpOvrCrnt, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpOvrCrntFA)
{
    boolean rtb_LePMIR_b_LTActPumpOvrCrntFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpOvrCrnt' */
    /* Chart: '<S183>/PokePMIR_e_LTActPumpOvrCrntChrt' incorporates:
     *  SignalConversion generated from: '<S183>/LePMIR_b_LTActPumpOvrCrntFA'
     *  SignalConversion generated from: '<S183>/LePMIR_e_LTActPumpOvrCrnt'
     */
    /* Gateway: PokePMIR_e_LTActPumpOvrCrnt/PokePMIR_e_LTActPumpOvrCrntChrt */
    /* During: PokePMIR_e_LTActPumpOvrCrnt/PokePMIR_e_LTActPumpOvrCrntChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpOvrCrnt/PokePMIR_e_LTActPumpOvrCrntChrt */
    /* Transition: '<S1553>:2' */
    if (!LePMIR_b_LTActPumpOvrCrntFA)
    {
        /* Transition: '<S1553>:3' */
        /* Transition: '<S1553>:15' */
        PMIR_ac_B.LePMIR_e_LTActPumpOvrCrnt_out = LePMIR_e_LTActPumpOvrCrnt;
        rtb_LePMIR_b_LTActPumpOvrCrntFA_out = false;

        /* Transition: '<S1553>:18' */
    }
    else
    {
        /* Transition: '<S1553>:4' */
        rtb_LePMIR_b_LTActPumpOvrCrntFA_out = true;
    }

    /* End of Chart: '<S183>/PokePMIR_e_LTActPumpOvrCrntChrt' */

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S183>/VePMIR_b_LTActPumpOvrCrntFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpOvrCrnt_VePMIR_b_LTActPumpOvrCrntFA_write_IRV
        (rtb_LePMIR_b_LTActPumpOvrCrntFA_out);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S183>/VePMIR_e_LTActPumpOvrCrnt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpOvrCrnt_LTActPumpOvrCrnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpOvrCrnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpOvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpProdSuplr(VAR(uint8, AUTOMATIC)
    LePMIR_y_LTActPumpProdSuplr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpProdSuplr' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S184>/LePMIR_y_LTActPumpProdSuplr'
     *  SignalConversion generated from: '<S184>/VePMIR_y_LTActPumpProdSuplr_write'
     */
    /* Gateway: PokePMIR_e_LTActPumpProdSuplr/PokePMIR_e_LTActPumpProdSuplrChrt */
    /* During: PokePMIR_e_LTActPumpProdSuplr/PokePMIR_e_LTActPumpProdSuplrChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpProdSuplr/PokePMIR_e_LTActPumpProdSuplrChrt */
    /* Transition: '<S1554>:2' */
    Rte_IrvWrite_PokePMIR_e_LTActPumpProdSuplr_LTActPumpProdSuplr_INIT_write_IRV
        (LePMIR_y_LTActPumpProdSuplr);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpProdSuplr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpPstRnSt(VAR
    (TeTMIR_e_ECM_LTP_FanAftRunRq, AUTOMATIC) LePMIR_e_LTActPumpPstRnSt, VAR
    (boolean, AUTOMATIC) LePMIR_b_LTActPumpPstRnStFA)
{
    boolean rtb_LePMIR_b_LTActPumpPstRnStFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpPstRnSt' */
    /* Chart: '<S185>/PokePMIR_e_LTActPumpPstRnStChrt' incorporates:
     *  SignalConversion generated from: '<S185>/LePMIR_b_LTActPumpPstRnStFA'
     *  SignalConversion generated from: '<S185>/LePMIR_e_LTActPumpPstRnSt'
     */
    /* Gateway: PokePMIR_e_LTActPumpPstRnSt/PokePMIR_e_LTActPumpPstRnStChrt */
    /* During: PokePMIR_e_LTActPumpPstRnSt/PokePMIR_e_LTActPumpPstRnStChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpPstRnSt/PokePMIR_e_LTActPumpPstRnStChrt */
    /* Transition: '<S1555>:2' */
    if (!LePMIR_b_LTActPumpPstRnStFA)
    {
        /* Transition: '<S1555>:3' */
        /* Transition: '<S1555>:15' */
        PMIR_ac_B.LePMIR_e_LTActPumpPstRnSt_out = LePMIR_e_LTActPumpPstRnSt;
        rtb_LePMIR_b_LTActPumpPstRnStFA_out = false;

        /* Transition: '<S1555>:18' */
    }
    else
    {
        /* Transition: '<S1555>:4' */
        rtb_LePMIR_b_LTActPumpPstRnStFA_out = true;
    }

    /* End of Chart: '<S185>/PokePMIR_e_LTActPumpPstRnStChrt' */

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S185>/VePMIR_b_LTActPumpPstRnStFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpPstRnSt_VePMIR_b_LTActPumpPstRnStFA_write_IRV
        (rtb_LePMIR_b_LTActPumpPstRnStFA_out);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S185>/VePMIR_e_LTActPumpPstRnSt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpPstRnSt_LTActPumpPstRnSt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpPstRnSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpPstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTActPumpSuppVltErr(VAR(uint8, AUTOMATIC)
    LePMIR_e_LTActPumpSuppVltErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTActPumpSuppVltErrFA)
{
    boolean rtb_LePMIR_b_LTActPumpSuppVltErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTActPumpSuppVltErr' */
    /* Chart: '<S186>/PokePMIR_e_LTActPumpSuppVltErrChrt' incorporates:
     *  Constant: '<S1556>/Calib'
     *  SignalConversion generated from: '<S186>/LePMIR_b_LTActPumpSuppVltErrFA'
     *  SignalConversion generated from: '<S186>/LePMIR_e_LTActPumpSuppVltErr'
     */
    /* Gateway: PokePMIR_e_LTActPumpSuppVltErr/PokePMIR_e_LTActPumpSuppVltErrChrt */
    /* During: PokePMIR_e_LTActPumpSuppVltErr/PokePMIR_e_LTActPumpSuppVltErrChrt */
    /* Entry Internal: PokePMIR_e_LTActPumpSuppVltErr/PokePMIR_e_LTActPumpSuppVltErrChrt */
    /* Transition: '<S1557>:39' */
    if (!LePMIR_b_LTActPumpSuppVltErrFA)
    {
        /* Transition: '<S1557>:40' */
        /* Transition: '<S1557>:42' */
        PMIR_ac_B.LePMIR_e_LTActPumpSuppVltErr_out =
            KaPMIR_e_LTActvPumpSuppVltErr_Map[(LePMIR_e_LTActPumpSuppVltErr)];
        rtb_LePMIR_b_LTActPumpSuppVltErrFA_out = false;

        /* Transition: '<S1557>:43' */
    }
    else
    {
        /* Transition: '<S1557>:41' */
        rtb_LePMIR_b_LTActPumpSuppVltErrFA_out = true;
    }

    /* End of Chart: '<S186>/PokePMIR_e_LTActPumpSuppVltErrChrt' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S186>/VePMIR_b_LTActPumpSuppVltErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpSuppVltErr_VePMIR_b_LTActPumpSuppVltErrFA_write_IRV
        (rtb_LePMIR_b_LTActPumpSuppVltErrFA_out);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S186>/VePMIR_e_LTActPumpSuppVltErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTActPumpSuppVltErr_LTActPumpSuppVltErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTActPumpSuppVltErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTActPumpSuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPmp2AirPrsntErr(VAR(TePMPR_e_FTSNA,
    AUTOMATIC) LePMIR_e_LTPsvPmp2AirPrsntErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPmp2AirPrsntErrFA)
{
    boolean rtb_LePMIR_b_LTPsvPmp2AirPrsntErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPmp2AirPrsntErr' */
    /* Chart: '<S187>/PokePMIR_e_LTPsvPmp2AirPrsntErrChrt' incorporates:
     *  SignalConversion generated from: '<S187>/LePMIR_b_LTPsvPmp2AirPrsntErrFA'
     *  SignalConversion generated from: '<S187>/LePMIR_e_LTPsvPmp2AirPrsntErr'
     */
    /* Gateway: PokePMIR_e_LTPsvPmp2AirPrsntErr/PokePMIR_e_LTPsvPmp2AirPrsntErrChrt */
    /* During: PokePMIR_e_LTPsvPmp2AirPrsntErr/PokePMIR_e_LTPsvPmp2AirPrsntErrChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPmp2AirPrsntErr/PokePMIR_e_LTPsvPmp2AirPrsntErrChrt */
    /* Transition: '<S1558>:2' */
    if (!LePMIR_b_LTPsvPmp2AirPrsntErrFA)
    {
        /* Transition: '<S1558>:3' */
        /* Transition: '<S1558>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPmp2AirPrsntErr_out =
            LePMIR_e_LTPsvPmp2AirPrsntErr;
        rtb_LePMIR_b_LTPsvPmp2AirPrsntErrFA_out = false;

        /* Transition: '<S1558>:18' */
    }
    else
    {
        /* Transition: '<S1558>:4' */
        rtb_LePMIR_b_LTPsvPmp2AirPrsntErrFA_out = true;
    }

    /* End of Chart: '<S187>/PokePMIR_e_LTPsvPmp2AirPrsntErrChrt' */

    /* Merge: '<Root>/Merge_108' incorporates:
     *  SignalConversion generated from: '<S187>/VePMIR_b_LTPsvPmp2AirPrsntErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPmp2AirPrsntErr_VePMIR_b_LTPsvPmp2AirPrsntErrFA_write_IRV
        (rtb_LePMIR_b_LTPsvPmp2AirPrsntErrFA_out);

    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S187>/VePMIR_e_LTPsvPmp2AirPrsntErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPmp2AirPrsntErr_LTPsvPump2AirPresntErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPmp2AirPrsntErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPmp2AirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPmp2ProdSuplr_ID(VAR(uint8, AUTOMATIC)
    LePMIR_y_LTPsvPmp2ProdSuplr_ID)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPmp2ProdSuplr_ID' */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S188>/LePMIR_y_LTPsvPmp2ProdSuplr_ID'
     *  SignalConversion generated from: '<S188>/VePMIR_y_LTPsvPmp2ProdSuplr_ID_write'
     */
    /* Gateway: PokePMIR_e_LTPsvPmp2ProdSuplr_ID/PokePMIR_e_LTPsvPmp2ProdSuplr_IDChrt */
    /* During: PokePMIR_e_LTPsvPmp2ProdSuplr_ID/PokePMIR_e_LTPsvPmp2ProdSuplr_IDChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPmp2ProdSuplr_ID/PokePMIR_e_LTPsvPmp2ProdSuplr_IDChrt */
    /* Transition: '<S1559>:2' */
    Rte_IrvWrite_PokePMIR_e_LTPsvPmp2ProdSuplr_ID_LTPsvPmp2ProdSuplrID_INIT_write_IRV
        (LePMIR_y_LTPsvPmp2ProdSuplr_ID);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPmp2ProdSuplr_ID' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPmpAirPrsntErr(VAR(TePMPR_e_FTSNA,
    AUTOMATIC) LePMIR_e_LTPsvPmpAirPrsntErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPmpAirPrsntErrFA)
{
    boolean rtb_LePMIR_b_LTPsvPmpAirPrsntErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPmpAirPrsntErr' */
    /* Chart: '<S189>/PokePMIR_e_LTPsvPmpAirPrsntErrChrt' incorporates:
     *  SignalConversion generated from: '<S189>/LePMIR_b_LTPsvPmpAirPrsntErrFA'
     *  SignalConversion generated from: '<S189>/LePMIR_e_LTPsvPmpAirPrsntErr'
     */
    /* Gateway: PokePMIR_e_LTPsvPmpAirPrsntErr/PokePMIR_e_LTPsvPmpAirPrsntErrChrt */
    /* During: PokePMIR_e_LTPsvPmpAirPrsntErr/PokePMIR_e_LTPsvPmpAirPrsntErrChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPmpAirPrsntErr/PokePMIR_e_LTPsvPmpAirPrsntErrChrt */
    /* Transition: '<S1560>:2' */
    if (!LePMIR_b_LTPsvPmpAirPrsntErrFA)
    {
        /* Transition: '<S1560>:3' */
        /* Transition: '<S1560>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPmpAirPrsntErr_out =
            LePMIR_e_LTPsvPmpAirPrsntErr;
        rtb_LePMIR_b_LTPsvPmpAirPrsntErrFA_out = false;

        /* Transition: '<S1560>:18' */
    }
    else
    {
        /* Transition: '<S1560>:4' */
        rtb_LePMIR_b_LTPsvPmpAirPrsntErrFA_out = true;
    }

    /* End of Chart: '<S189>/PokePMIR_e_LTPsvPmpAirPrsntErrChrt' */

    /* Merge: '<Root>/Merge_146' incorporates:
     *  SignalConversion generated from: '<S189>/VePMIR_b_LTPsvPmpAirPrsntErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPmpAirPrsntErr_VePMIR_b_LTPsvPmpAirPrsntErrFA_write_IRV
        (rtb_LePMIR_b_LTPsvPmpAirPrsntErrFA_out);

    /* Merge: '<Root>/Merge_147' incorporates:
     *  SignalConversion generated from: '<S189>/VePMIR_e_LTPsvPmpAirPrsntErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPmpAirPrsntErr_LTPsvPmpAirPrsntErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPmpAirPrsntErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPmpAirPrsntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPmpProdSuplr_ID(VAR(uint8, AUTOMATIC)
    LePMIR_y_LTPsvPmpProdSuplr_ID)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPmpProdSuplr_ID' */
    /* Merge: '<Root>/Merge_148' incorporates:
     *  SignalConversion generated from: '<S190>/LePMIR_y_LTPsvPmpProdSuplr_ID'
     *  SignalConversion generated from: '<S190>/VePMIR_y_LTPsvPmpProdSuplr_ID_write'
     */
    /* Gateway: PokePMIR_e_LTPsvPmpProdSuplr_ID/PokePMIR_e_LTPsvPmpProdSuplr_IDChrt */
    /* During: PokePMIR_e_LTPsvPmpProdSuplr_ID/PokePMIR_e_LTPsvPmpProdSuplr_IDChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPmpProdSuplr_ID/PokePMIR_e_LTPsvPmpProdSuplr_IDChrt */
    /* Transition: '<S1561>:2' */
    Rte_IrvWrite_PokePMIR_e_LTPsvPmpProdSuplr_ID_LTPsvPmpProdSuplr_ID_INIT_write_IRV
        (LePMIR_y_LTPsvPmpProdSuplr_ID);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPmpProdSuplr_ID' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2Deblock(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPump2Deblock, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2DeblockFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2DeblockFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2Deblock' */
    /* Chart: '<S191>/PokePMIR_e_LTPsvPump2DeblockChrt' incorporates:
     *  SignalConversion generated from: '<S191>/LePMIR_b_LTPsvPump2DeblockFA'
     *  SignalConversion generated from: '<S191>/LePMIR_e_LTPsvPump2Deblock'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2Deblock/PokePMIR_e_LTPsvPump2DeblockChrt */
    /* During: PokePMIR_e_LTPsvPump2Deblock/PokePMIR_e_LTPsvPump2DeblockChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2Deblock/PokePMIR_e_LTPsvPump2DeblockChrt */
    /* Transition: '<S1562>:2' */
    if (!LePMIR_b_LTPsvPump2DeblockFA)
    {
        /* Transition: '<S1562>:3' */
        /* Transition: '<S1562>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2Deblock_out = LePMIR_e_LTPsvPump2Deblock;
        rtb_LePMIR_b_LTPsvPump2DeblockFA_out = false;

        /* Transition: '<S1562>:18' */
    }
    else
    {
        /* Transition: '<S1562>:4' */
        rtb_LePMIR_b_LTPsvPump2DeblockFA_out = true;
    }

    /* End of Chart: '<S191>/PokePMIR_e_LTPsvPump2DeblockChrt' */

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S191>/VePMIR_b_LTPsvPump2DeblockFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2Deblock_VePMIR_b_LTPsvPump2DeblockFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2DeblockFA_out);

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S191>/VePMIR_e_LTPsvPump2Deblock_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2Deblock_LTPsvPump2Deblock_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2Deblock_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2Deblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2DryRun(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPump2DryRun, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2DryRunFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2DryRunFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2DryRun' */
    /* Chart: '<S192>/PokePMIR_e_LTPsvPump2DryRunChrt' incorporates:
     *  SignalConversion generated from: '<S192>/LePMIR_b_LTPsvPump2DryRunFA'
     *  SignalConversion generated from: '<S192>/LePMIR_e_LTPsvPump2DryRun'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2DryRun/PokePMIR_e_LTPsvPump2DryRunChrt */
    /* During: PokePMIR_e_LTPsvPump2DryRun/PokePMIR_e_LTPsvPump2DryRunChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2DryRun/PokePMIR_e_LTPsvPump2DryRunChrt */
    /* Transition: '<S1563>:2' */
    if (!LePMIR_b_LTPsvPump2DryRunFA)
    {
        /* Transition: '<S1563>:3' */
        /* Transition: '<S1563>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2DryRun_out = LePMIR_e_LTPsvPump2DryRun;
        rtb_LePMIR_b_LTPsvPump2DryRunFA_out = false;

        /* Transition: '<S1563>:18' */
    }
    else
    {
        /* Transition: '<S1563>:4' */
        rtb_LePMIR_b_LTPsvPump2DryRunFA_out = true;
    }

    /* End of Chart: '<S192>/PokePMIR_e_LTPsvPump2DryRunChrt' */

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S192>/VePMIR_b_LTPsvPump2DryRunFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2DryRun_VePMIR_b_LTPsvPump2DryRunFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2DryRunFA_out);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S192>/VePMIR_e_LTPsvPump2DryRun_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2DryRun_LTPsvPump2DryRun_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2DryRun_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2DryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2Failsafe(VAR(TePMPR_e_TFSNA,
    AUTOMATIC) LePMIR_e_LTPsvPump2Failsafe, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2FailsafeFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2Failsafe' */
    /* Chart: '<S193>/PokePMIR_e_LTPsvPump2FailsafeChrt' incorporates:
     *  SignalConversion generated from: '<S193>/LePMIR_b_LTPsvPump2FailsafeFA'
     *  SignalConversion generated from: '<S193>/LePMIR_e_LTPsvPump2Failsafe'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2Failsafe/PokePMIR_e_LTPsvPump2FailsafeChrt */
    /* During: PokePMIR_e_LTPsvPump2Failsafe/PokePMIR_e_LTPsvPump2FailsafeChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2Failsafe/PokePMIR_e_LTPsvPump2FailsafeChrt */
    /* Transition: '<S1564>:2' */
    if (!LePMIR_b_LTPsvPump2FailsafeFA)
    {
        /* Transition: '<S1564>:3' */
        /* Transition: '<S1564>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2Failsafe_out = LePMIR_e_LTPsvPump2Failsafe;

        /* Transition: '<S1564>:18' */
    }
    else
    {
        /* Transition: '<S1564>:4' */
    }

    /* End of Chart: '<S193>/PokePMIR_e_LTPsvPump2FailsafeChrt' */

    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S193>/VePMIR_e_LTPsvPump2Failsafe_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2Failsafe_LTPsvPump2Failsafe_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2Failsafe_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2Failsafe' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2MntrRPM(VAR(TePMPR_e_TFSNA, AUTOMATIC)
    LePMIR_e_LTPsvPump2MntrRPM, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2MntrRPMFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2MntrRPMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2MntrRPM' */
    /* Chart: '<S194>/PokePMIR_e_LTPsvPump2MntrRPMChrt' incorporates:
     *  SignalConversion generated from: '<S194>/LePMIR_b_LTPsvPump2MntrRPMFA'
     *  SignalConversion generated from: '<S194>/LePMIR_e_LTPsvPump2MntrRPM'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2MntrRPM/PokePMIR_e_LTPsvPump2MntrRPMChrt */
    /* During: PokePMIR_e_LTPsvPump2MntrRPM/PokePMIR_e_LTPsvPump2MntrRPMChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2MntrRPM/PokePMIR_e_LTPsvPump2MntrRPMChrt */
    /* Transition: '<S1565>:2' */
    if (!LePMIR_b_LTPsvPump2MntrRPMFA)
    {
        /* Transition: '<S1565>:3' */
        /* Transition: '<S1565>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2MntrRPM_out = LePMIR_e_LTPsvPump2MntrRPM;
        rtb_LePMIR_b_LTPsvPump2MntrRPMFA_out = false;

        /* Transition: '<S1565>:18' */
    }
    else
    {
        /* Transition: '<S1565>:4' */
        rtb_LePMIR_b_LTPsvPump2MntrRPMFA_out = true;
    }

    /* End of Chart: '<S194>/PokePMIR_e_LTPsvPump2MntrRPMChrt' */

    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S194>/VePMIR_b_LTPsvPump2MntrRPMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2MntrRPM_VePMIR_b_LTPsvPump2MntrRPMFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2MntrRPMFA_out);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S194>/VePMIR_e_LTPsvPump2MntrRPM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2MntrRPM_LTPsvPump2MntrRPM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2MntrRPM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2MntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2NodeErr(VAR(TePMPR_e_NodeError,
    AUTOMATIC) LePMIR_e_LTPsvPump2NodeErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2NodeErrFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2NodeErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2NodeErr' */
    /* Chart: '<S195>/PokePMIR_e_LTPsvPump2NodeErrChrt' incorporates:
     *  SignalConversion generated from: '<S195>/LePMIR_b_LTPsvPump2NodeErrFA'
     *  SignalConversion generated from: '<S195>/LePMIR_e_LTPsvPump2NodeErr'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2NodeErr/PokePMIR_e_LTPsvPump2NodeErrChrt */
    /* During: PokePMIR_e_LTPsvPump2NodeErr/PokePMIR_e_LTPsvPump2NodeErrChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2NodeErr/PokePMIR_e_LTPsvPump2NodeErrChrt */
    /* Transition: '<S1566>:2' */
    if (!LePMIR_b_LTPsvPump2NodeErrFA)
    {
        /* Transition: '<S1566>:3' */
        /* Transition: '<S1566>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2NodeErr_out = LePMIR_e_LTPsvPump2NodeErr;
        rtb_LePMIR_b_LTPsvPump2NodeErrFA_out = false;

        /* Transition: '<S1566>:18' */
    }
    else
    {
        /* Transition: '<S1566>:4' */
        rtb_LePMIR_b_LTPsvPump2NodeErrFA_out = true;
    }

    /* End of Chart: '<S195>/PokePMIR_e_LTPsvPump2NodeErrChrt' */

    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S195>/VePMIR_b_LTPsvPump2NodeErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2NodeErr_VePMIR_b_LTPsvPump2NodeErrFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2NodeErrFA_out);

    /* Merge: '<Root>/Merge_127' incorporates:
     *  SignalConversion generated from: '<S195>/VePMIR_e_LTPsvPump2NodeErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2NodeErr_LTPsvPump2NodeErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2NodeErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2NodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2OvrCrnt(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPump2OvrCrnt, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2OvrCrntFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2OvrCrntFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2OvrCrnt' */
    /* Chart: '<S196>/PokePMIR_e_LTPsvPump2OvrCrntChrt' incorporates:
     *  SignalConversion generated from: '<S196>/LePMIR_b_LTPsvPump2OvrCrntFA'
     *  SignalConversion generated from: '<S196>/LePMIR_e_LTPsvPump2OvrCrnt'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2OvrCrnt/PokePMIR_e_LTPsvPump2OvrCrntChrt */
    /* During: PokePMIR_e_LTPsvPump2OvrCrnt/PokePMIR_e_LTPsvPump2OvrCrntChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2OvrCrnt/PokePMIR_e_LTPsvPump2OvrCrntChrt */
    /* Transition: '<S1567>:2' */
    if (!LePMIR_b_LTPsvPump2OvrCrntFA)
    {
        /* Transition: '<S1567>:3' */
        /* Transition: '<S1567>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2OvrCrnt_out = LePMIR_e_LTPsvPump2OvrCrnt;
        rtb_LePMIR_b_LTPsvPump2OvrCrntFA_out = false;

        /* Transition: '<S1567>:18' */
    }
    else
    {
        /* Transition: '<S1567>:4' */
        rtb_LePMIR_b_LTPsvPump2OvrCrntFA_out = true;
    }

    /* End of Chart: '<S196>/PokePMIR_e_LTPsvPump2OvrCrntChrt' */

    /* Merge: '<Root>/Merge_130' incorporates:
     *  SignalConversion generated from: '<S196>/VePMIR_b_LTPsvPump2OvrCrntFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2OvrCrnt_VePMIR_b_LTPsvPump2OvrCrntFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2OvrCrntFA_out);

    /* Merge: '<Root>/Merge_131' incorporates:
     *  SignalConversion generated from: '<S196>/VePMIR_e_LTPsvPump2OvrCrnt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2OvrCrnt_LTPsvPump2OvrCrnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2OvrCrnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2OvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2SuppVltErr(VAR(TePMPR_e_FTSNA,
    AUTOMATIC) LePMIR_e_LTPsvPump2SuppVltErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2SuppVltErrFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2SuppVltErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2SuppVltErr' */
    /* Chart: '<S197>/PokePMIR_e_LTPsvPump2SuppVltErrChrt' incorporates:
     *  SignalConversion generated from: '<S197>/LePMIR_b_LTPsvPump2SuppVltErrFA'
     *  SignalConversion generated from: '<S197>/LePMIR_e_LTPsvPump2SuppVltErr'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2SuppVltErr/PokePMIR_e_LTPsvPump2SuppVltErrChrt */
    /* During: PokePMIR_e_LTPsvPump2SuppVltErr/PokePMIR_e_LTPsvPump2SuppVltErrChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2SuppVltErr/PokePMIR_e_LTPsvPump2SuppVltErrChrt */
    /* Transition: '<S1568>:2' */
    if (!LePMIR_b_LTPsvPump2SuppVltErrFA)
    {
        /* Transition: '<S1568>:3' */
        /* Transition: '<S1568>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2SuppVltErr_out =
            LePMIR_e_LTPsvPump2SuppVltErr;
        rtb_LePMIR_b_LTPsvPump2SuppVltErrFA_out = false;

        /* Transition: '<S1568>:18' */
    }
    else
    {
        /* Transition: '<S1568>:4' */
        rtb_LePMIR_b_LTPsvPump2SuppVltErrFA_out = true;
    }

    /* End of Chart: '<S197>/PokePMIR_e_LTPsvPump2SuppVltErrChrt' */

    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S197>/VePMIR_b_LTPsvPump2SuppVltErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2SuppVltErr_VePMIR_b_LTPsvPump2SuppVltErrFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2SuppVltErrFA_out);

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S197>/VePMIR_e_LTPsvPump2SuppVltErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2SuppVltErr_LTPsvPump2SuppVltErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2SuppVltErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2SuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump2_LmpHM(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPump2_LmpHM, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2_LmpHMFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2_LmpHMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump2_LmpHM' */
    /* Chart: '<S198>/PokePMIR_e_LTPsvPump2_LmpHMChrt' incorporates:
     *  SignalConversion generated from: '<S198>/LePMIR_b_LTPsvPump2_LmpHMFA'
     *  SignalConversion generated from: '<S198>/LePMIR_e_LTPsvPump2_LmpHM'
     */
    /* Gateway: PokePMIR_e_LTPsvPump2_LmpHM/PokePMIR_e_LTPsvPump2_LmpHMChrt */
    /* During: PokePMIR_e_LTPsvPump2_LmpHM/PokePMIR_e_LTPsvPump2_LmpHMChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump2_LmpHM/PokePMIR_e_LTPsvPump2_LmpHMChrt */
    /* Transition: '<S1569>:2' */
    if (!LePMIR_b_LTPsvPump2_LmpHMFA)
    {
        /* Transition: '<S1569>:3' */
        /* Transition: '<S1569>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump2_LmpHM_out = LePMIR_e_LTPsvPump2_LmpHM;
        rtb_LePMIR_b_LTPsvPump2_LmpHMFA_out = false;

        /* Transition: '<S1569>:18' */
    }
    else
    {
        /* Transition: '<S1569>:4' */
        rtb_LePMIR_b_LTPsvPump2_LmpHMFA_out = true;
    }

    /* End of Chart: '<S198>/PokePMIR_e_LTPsvPump2_LmpHMChrt' */

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S198>/VePMIR_b_LTPsvPump2_LmpHMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2_LmpHM_VePMIR_b_LTPsvPump2_LmpHMFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2_LmpHMFA_out);

    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S198>/VePMIR_e_LTPsvPump2_LmpHM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump2_LmpHM_LTPsvPump2_LmpHM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump2_LmpHM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump2_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPumpDeblock(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPumpDeblock, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpDeblockFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpDeblockFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPumpDeblock' */
    /* Chart: '<S199>/PokePMIR_e_LTPsvPumpDeblockChrt' incorporates:
     *  SignalConversion generated from: '<S199>/LePMIR_b_LTPsvPumpDeblockFA'
     *  SignalConversion generated from: '<S199>/LePMIR_e_LTPsvPumpDeblock'
     */
    /* Gateway: PokePMIR_e_LTPsvPumpDeblock/PokePMIR_e_LTPsvPumpDeblockChrt */
    /* During: PokePMIR_e_LTPsvPumpDeblock/PokePMIR_e_LTPsvPumpDeblockChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPumpDeblock/PokePMIR_e_LTPsvPumpDeblockChrt */
    /* Transition: '<S1570>:2' */
    if (!LePMIR_b_LTPsvPumpDeblockFA)
    {
        /* Transition: '<S1570>:3' */
        /* Transition: '<S1570>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPumpDeblock_out = LePMIR_e_LTPsvPumpDeblock;
        rtb_LePMIR_b_LTPsvPumpDeblockFA_out = false;

        /* Transition: '<S1570>:18' */
    }
    else
    {
        /* Transition: '<S1570>:4' */
        rtb_LePMIR_b_LTPsvPumpDeblockFA_out = true;
    }

    /* End of Chart: '<S199>/PokePMIR_e_LTPsvPumpDeblockChrt' */

    /* Merge: '<Root>/Merge_159' incorporates:
     *  SignalConversion generated from: '<S199>/VePMIR_b_LTPsvPumpDeblockFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpDeblock_VePMIR_b_LTPsvPumpDeblockFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpDeblockFA_out);

    /* Merge: '<Root>/Merge_160' incorporates:
     *  SignalConversion generated from: '<S199>/VePMIR_e_LTPsvPumpDeblock_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpDeblock_LTPsvPumpDeblock_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPumpDeblock_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPumpDeblock' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPumpDryRun(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPumpDryRun, VAR(boolean, AUTOMATIC) LePMIR_b_LTPsvPumpDryRunFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpDryRunFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPumpDryRun' */
    /* Chart: '<S200>/PokePMIR_e_LTPsvPumpDryRunChrt' incorporates:
     *  SignalConversion generated from: '<S200>/LePMIR_b_LTPsvPumpDryRunFA'
     *  SignalConversion generated from: '<S200>/LePMIR_e_LTPsvPumpDryRun'
     */
    /* Gateway: PokePMIR_e_LTPsvPumpDryRun/PokePMIR_e_LTPsvPumpDryRunChrt */
    /* During: PokePMIR_e_LTPsvPumpDryRun/PokePMIR_e_LTPsvPumpDryRunChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPumpDryRun/PokePMIR_e_LTPsvPumpDryRunChrt */
    /* Transition: '<S1571>:2' */
    if (!LePMIR_b_LTPsvPumpDryRunFA)
    {
        /* Transition: '<S1571>:3' */
        /* Transition: '<S1571>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPumpDryRun_out = LePMIR_e_LTPsvPumpDryRun;
        rtb_LePMIR_b_LTPsvPumpDryRunFA_out = false;

        /* Transition: '<S1571>:18' */
    }
    else
    {
        /* Transition: '<S1571>:4' */
        rtb_LePMIR_b_LTPsvPumpDryRunFA_out = true;
    }

    /* End of Chart: '<S200>/PokePMIR_e_LTPsvPumpDryRunChrt' */

    /* Merge: '<Root>/Merge_161' incorporates:
     *  SignalConversion generated from: '<S200>/VePMIR_b_LTPsvPumpDryRunFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpDryRun_VePMIR_b_LTPsvPumpDryRunFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpDryRunFA_out);

    /* Merge: '<Root>/Merge_162' incorporates:
     *  SignalConversion generated from: '<S200>/VePMIR_e_LTPsvPumpDryRun_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpDryRun_LTPsvPumpDryRun_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPumpDryRun_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPumpDryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPumpFailsafe(VAR(TePMPR_e_TFSNA, AUTOMATIC)
    LePMIR_e_LTPsvPumpFailsafe, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpFailsafeFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPumpFailsafe' */
    /* Chart: '<S201>/PokePMIR_e_LTPsvPumpFailsafeChrt' incorporates:
     *  SignalConversion generated from: '<S201>/LePMIR_b_LTPsvPumpFailsafeFA'
     *  SignalConversion generated from: '<S201>/LePMIR_e_LTPsvPumpFailsafe'
     */
    /* Gateway: PokePMIR_e_LTPsvPumpFailsafe/PokePMIR_e_LTPsvPumpFailsafeChrt */
    /* During: PokePMIR_e_LTPsvPumpFailsafe/PokePMIR_e_LTPsvPumpFailsafeChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPumpFailsafe/PokePMIR_e_LTPsvPumpFailsafeChrt */
    /* Transition: '<S1572>:2' */
    if (!LePMIR_b_LTPsvPumpFailsafeFA)
    {
        /* Transition: '<S1572>:3' */
        /* Transition: '<S1572>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPumpFailsafe_out = LePMIR_e_LTPsvPumpFailsafe;

        /* Transition: '<S1572>:18' */
    }
    else
    {
        /* Transition: '<S1572>:4' */
    }

    /* End of Chart: '<S201>/PokePMIR_e_LTPsvPumpFailsafeChrt' */

    /* Merge: '<Root>/Merge_165' incorporates:
     *  SignalConversion generated from: '<S201>/VePMIR_e_LTPsvPumpFailsafe_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpFailsafe_LTPsvPumpFailsafe_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPumpFailsafe_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPumpFailsafe' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPumpMntrRPM(VAR(TePMPR_e_TFSNA, AUTOMATIC)
    LePMIR_e_LTPsvPumpMntrRPM, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpMntrRPMFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpMntrRPMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPumpMntrRPM' */
    /* Chart: '<S202>/PokePMIR_e_LTPsvPumpMntrRPMChrt' incorporates:
     *  SignalConversion generated from: '<S202>/LePMIR_b_LTPsvPumpMntrRPMFA'
     *  SignalConversion generated from: '<S202>/LePMIR_e_LTPsvPumpMntrRPM'
     */
    /* Gateway: PokePMIR_e_LTPsvPumpMntrRPM/PokePMIR_e_LTPsvPumpMntrRPMChrt */
    /* During: PokePMIR_e_LTPsvPumpMntrRPM/PokePMIR_e_LTPsvPumpMntrRPMChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPumpMntrRPM/PokePMIR_e_LTPsvPumpMntrRPMChrt */
    /* Transition: '<S1573>:2' */
    if (!LePMIR_b_LTPsvPumpMntrRPMFA)
    {
        /* Transition: '<S1573>:3' */
        /* Transition: '<S1573>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPumpMntrRPM_out = LePMIR_e_LTPsvPumpMntrRPM;
        rtb_LePMIR_b_LTPsvPumpMntrRPMFA_out = false;

        /* Transition: '<S1573>:18' */
    }
    else
    {
        /* Transition: '<S1573>:4' */
        rtb_LePMIR_b_LTPsvPumpMntrRPMFA_out = true;
    }

    /* End of Chart: '<S202>/PokePMIR_e_LTPsvPumpMntrRPMChrt' */

    /* Merge: '<Root>/Merge_168' incorporates:
     *  SignalConversion generated from: '<S202>/VePMIR_b_LTPsvPumpMntrRPMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpMntrRPM_VePMIR_b_LTPsvPumpMntrRPMFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpMntrRPMFA_out);

    /* Merge: '<Root>/Merge_169' incorporates:
     *  SignalConversion generated from: '<S202>/VePMIR_e_LTPsvPumpMntrRPM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpMntrRPM_LTPsvPumpMntrRPM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPumpMntrRPM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPumpMntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPumpNodeErr(VAR(TePMPR_e_NodeError,
    AUTOMATIC) LePMIR_e_LTPsvPumpNodeErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpNodeErrFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpNodeErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPumpNodeErr' */
    /* Chart: '<S203>/PokePMIR_e_LTPsvPumpNodeErrChrt' incorporates:
     *  SignalConversion generated from: '<S203>/LePMIR_b_LTPsvPumpNodeErrFA'
     *  SignalConversion generated from: '<S203>/LePMIR_e_LTPsvPumpNodeErr'
     */
    /* Gateway: PokePMIR_e_LTPsvPumpNodeErr/PokePMIR_e_LTPsvPumpNodeErrChrt */
    /* During: PokePMIR_e_LTPsvPumpNodeErr/PokePMIR_e_LTPsvPumpNodeErrChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPumpNodeErr/PokePMIR_e_LTPsvPumpNodeErrChrt */
    /* Transition: '<S1574>:2' */
    if (!LePMIR_b_LTPsvPumpNodeErrFA)
    {
        /* Transition: '<S1574>:3' */
        /* Transition: '<S1574>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPumpNodeErr_out = LePMIR_e_LTPsvPumpNodeErr;
        rtb_LePMIR_b_LTPsvPumpNodeErrFA_out = false;

        /* Transition: '<S1574>:18' */
    }
    else
    {
        /* Transition: '<S1574>:4' */
        rtb_LePMIR_b_LTPsvPumpNodeErrFA_out = true;
    }

    /* End of Chart: '<S203>/PokePMIR_e_LTPsvPumpNodeErrChrt' */

    /* Merge: '<Root>/Merge_170' incorporates:
     *  SignalConversion generated from: '<S203>/VePMIR_b_LTPsvPumpNodeErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpNodeErr_VePMIR_b_LTPsvPumpNodeErrFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpNodeErrFA_out);

    /* Merge: '<Root>/Merge_171' incorporates:
     *  SignalConversion generated from: '<S203>/VePMIR_e_LTPsvPumpNodeErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpNodeErr_LTPsvPumpNodeErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPumpNodeErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPumpNodeErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPumpOvrCrnt(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPumpOvrCrnt, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpOvrCrntFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpOvrCrntFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPumpOvrCrnt' */
    /* Chart: '<S204>/PokePMIR_e_LTPsvPumpOvrCrntChrt' incorporates:
     *  SignalConversion generated from: '<S204>/LePMIR_b_LTPsvPumpOvrCrntFA'
     *  SignalConversion generated from: '<S204>/LePMIR_e_LTPsvPumpOvrCrnt'
     */
    /* Gateway: PokePMIR_e_LTPsvPumpOvrCrnt/PokePMIR_e_LTPsvPumpOvrCrntChrt */
    /* During: PokePMIR_e_LTPsvPumpOvrCrnt/PokePMIR_e_LTPsvPumpOvrCrntChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPumpOvrCrnt/PokePMIR_e_LTPsvPumpOvrCrntChrt */
    /* Transition: '<S1575>:2' */
    if (!LePMIR_b_LTPsvPumpOvrCrntFA)
    {
        /* Transition: '<S1575>:3' */
        /* Transition: '<S1575>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPumpOvrCrnt_out = LePMIR_e_LTPsvPumpOvrCrnt;
        rtb_LePMIR_b_LTPsvPumpOvrCrntFA_out = false;

        /* Transition: '<S1575>:18' */
    }
    else
    {
        /* Transition: '<S1575>:4' */
        rtb_LePMIR_b_LTPsvPumpOvrCrntFA_out = true;
    }

    /* End of Chart: '<S204>/PokePMIR_e_LTPsvPumpOvrCrntChrt' */

    /* Merge: '<Root>/Merge_174' incorporates:
     *  SignalConversion generated from: '<S204>/VePMIR_b_LTPsvPumpOvrCrntFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpOvrCrnt_VePMIR_b_LTPsvPumpOvrCrntFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpOvrCrntFA_out);

    /* Merge: '<Root>/Merge_175' incorporates:
     *  SignalConversion generated from: '<S204>/VePMIR_e_LTPsvPumpOvrCrnt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpOvrCrnt_LTPsvPumpOvrCrnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPumpOvrCrnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPumpOvrCrnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPumpSuppVltErr(VAR(TePMPR_e_FTSNA,
    AUTOMATIC) LePMIR_e_LTPsvPumpSuppVltErr, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPumpSuppVltErrFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpSuppVltErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPumpSuppVltErr' */
    /* Chart: '<S205>/PokePMIR_e_LTPsvPumpSuppVltErrChrt' incorporates:
     *  SignalConversion generated from: '<S205>/LePMIR_b_LTPsvPumpSuppVltErrFA'
     *  SignalConversion generated from: '<S205>/LePMIR_e_LTPsvPumpSuppVltErr'
     */
    /* Gateway: PokePMIR_e_LTPsvPumpSuppVltErr/PokePMIR_e_LTPsvPumpSuppVltErrChrt */
    /* During: PokePMIR_e_LTPsvPumpSuppVltErr/PokePMIR_e_LTPsvPumpSuppVltErrChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPumpSuppVltErr/PokePMIR_e_LTPsvPumpSuppVltErrChrt */
    /* Transition: '<S1576>:2' */
    if (!LePMIR_b_LTPsvPumpSuppVltErrFA)
    {
        /* Transition: '<S1576>:3' */
        /* Transition: '<S1576>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPumpSuppVltErr_out =
            LePMIR_e_LTPsvPumpSuppVltErr;
        rtb_LePMIR_b_LTPsvPumpSuppVltErrFA_out = false;

        /* Transition: '<S1576>:18' */
    }
    else
    {
        /* Transition: '<S1576>:4' */
        rtb_LePMIR_b_LTPsvPumpSuppVltErrFA_out = true;
    }

    /* End of Chart: '<S205>/PokePMIR_e_LTPsvPumpSuppVltErrChrt' */

    /* Merge: '<Root>/Merge_149' incorporates:
     *  SignalConversion generated from: '<S205>/VePMIR_b_LTPsvPumpSuppVltErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpSuppVltErr_VePMIR_b_LTPsvPumpSuppVltErrFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpSuppVltErrFA_out);

    /* Merge: '<Root>/Merge_150' incorporates:
     *  SignalConversion generated from: '<S205>/VePMIR_e_LTPsvPumpSuppVltErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPumpSuppVltErr_LTPsvPumpSuppVltErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPumpSuppVltErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPumpSuppVltErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LTPsvPump_LmpHM(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LTPsvPump_LmpHM, VAR(boolean, AUTOMATIC) LePMIR_b_LTPsvPump_LmpHMFA)
{
    boolean rtb_LePMIR_b_LTPsvPump_LmpHMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LTPsvPump_LmpHM' */
    /* Chart: '<S206>/PokePMIR_e_LTPsvPump_LmpHMChrt' incorporates:
     *  SignalConversion generated from: '<S206>/LePMIR_b_LTPsvPump_LmpHMFA'
     *  SignalConversion generated from: '<S206>/LePMIR_e_LTPsvPump_LmpHM'
     */
    /* Gateway: PokePMIR_e_LTPsvPump_LmpHM/PokePMIR_e_LTPsvPump_LmpHMChrt */
    /* During: PokePMIR_e_LTPsvPump_LmpHM/PokePMIR_e_LTPsvPump_LmpHMChrt */
    /* Entry Internal: PokePMIR_e_LTPsvPump_LmpHM/PokePMIR_e_LTPsvPump_LmpHMChrt */
    /* Transition: '<S1577>:2' */
    if (!LePMIR_b_LTPsvPump_LmpHMFA)
    {
        /* Transition: '<S1577>:3' */
        /* Transition: '<S1577>:15' */
        PMIR_ac_B.LePMIR_e_LTPsvPump_LmpHM_out = LePMIR_e_LTPsvPump_LmpHM;
        rtb_LePMIR_b_LTPsvPump_LmpHMFA_out = false;

        /* Transition: '<S1577>:18' */
    }
    else
    {
        /* Transition: '<S1577>:4' */
        rtb_LePMIR_b_LTPsvPump_LmpHMFA_out = true;
    }

    /* End of Chart: '<S206>/PokePMIR_e_LTPsvPump_LmpHMChrt' */

    /* Merge: '<Root>/Merge_166' incorporates:
     *  SignalConversion generated from: '<S206>/VePMIR_b_LTPsvPump_LmpHMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump_LmpHM_VePMIR_b_LTPsvPump_LmpHMFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump_LmpHMFA_out);

    /* Merge: '<Root>/Merge_167' incorporates:
     *  SignalConversion generated from: '<S206>/VePMIR_e_LTPsvPump_LmpHM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LTPsvPump_LmpHM_LTPsvPump_LmpHM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LTPsvPump_LmpHM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LTPsvPump_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LT_ActvPmpOT(VAR(uint8, AUTOMATIC)
    LePMIR_e_LT_ActvPmpOT, VAR(boolean, AUTOMATIC) LePMIR_b_LT_ActvPmpOTFA)
{
    boolean rtb_LePMIR_b_LT_ActvPmpOTFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LT_ActvPmpOT' */
    /* Chart: '<S207>/PokePMIR_e_LT_ActvPmpOTChrt' incorporates:
     *  Constant: '<S1578>/Calib'
     *  SignalConversion generated from: '<S207>/LePMIR_b_LT_ActvPmpOTFA'
     *  SignalConversion generated from: '<S207>/LePMIR_e_LT_ActvPmpOT'
     */
    /* Gateway: PokePMIR_e_LT_ActvPmpOT/PokePMIR_e_LT_ActvPmpOTChrt */
    /* During: PokePMIR_e_LT_ActvPmpOT/PokePMIR_e_LT_ActvPmpOTChrt */
    /* Entry Internal: PokePMIR_e_LT_ActvPmpOT/PokePMIR_e_LT_ActvPmpOTChrt */
    /* Transition: '<S1579>:39' */
    if (!LePMIR_b_LT_ActvPmpOTFA)
    {
        /* Transition: '<S1579>:40' */
        /* Transition: '<S1579>:42' */
        PMIR_ac_B.LePMIR_e_LT_ActvPmpOT_out = KaPMIR_e_LTActvPumpOT_Map
            [(LePMIR_e_LT_ActvPmpOT)];
        rtb_LePMIR_b_LT_ActvPmpOTFA_out = false;

        /* Transition: '<S1579>:43' */
    }
    else
    {
        /* Transition: '<S1579>:41' */
        rtb_LePMIR_b_LT_ActvPmpOTFA_out = true;
    }

    /* End of Chart: '<S207>/PokePMIR_e_LT_ActvPmpOTChrt' */

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S207>/VePMIR_b_LT_ActvPmpOTFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LT_ActvPmpOT_VePMIR_b_LT_ActvPmpOTFA_write_IRV
        (rtb_LePMIR_b_LT_ActvPmpOTFA_out);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S207>/VePMIR_e_LT_ActvPmpOT_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LT_ActvPmpOT_LT_ActvPmpOT_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LT_ActvPmpOT_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LT_ActvPmpOT' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LT_PsvPmp2OT(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LT_PsvPmp2OT, VAR(boolean, AUTOMATIC) LePMIR_b_LT_PsvPmp2OTFA)
{
    boolean rtb_LePMIR_b_LT_PsvPmp2OTFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LT_PsvPmp2OT' */
    /* Chart: '<S208>/PokePMIR_e_LT_PsvPmp2OTChrt' incorporates:
     *  SignalConversion generated from: '<S208>/LePMIR_b_LT_PsvPmp2OTFA'
     *  SignalConversion generated from: '<S208>/LePMIR_e_LT_PsvPmp2OT'
     */
    /* Gateway: PokePMIR_e_LT_PsvPmp2OT/PokePMIR_e_LT_PsvPmp2OTChrt */
    /* During: PokePMIR_e_LT_PsvPmp2OT/PokePMIR_e_LT_PsvPmp2OTChrt */
    /* Entry Internal: PokePMIR_e_LT_PsvPmp2OT/PokePMIR_e_LT_PsvPmp2OTChrt */
    /* Transition: '<S1580>:2' */
    if (!LePMIR_b_LT_PsvPmp2OTFA)
    {
        /* Transition: '<S1580>:3' */
        /* Transition: '<S1580>:15' */
        PMIR_ac_B.LePMIR_e_LT_PsvPmp2OT_out = LePMIR_e_LT_PsvPmp2OT;
        rtb_LePMIR_b_LT_PsvPmp2OTFA_out = false;

        /* Transition: '<S1580>:18' */
    }
    else
    {
        /* Transition: '<S1580>:4' */
        rtb_LePMIR_b_LT_PsvPmp2OTFA_out = true;
    }

    /* End of Chart: '<S208>/PokePMIR_e_LT_PsvPmp2OTChrt' */

    /* Merge: '<Root>/Merge_128' incorporates:
     *  SignalConversion generated from: '<S208>/VePMIR_b_LT_PsvPmp2OTFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LT_PsvPmp2OT_VePMIR_b_LT_PsvPmp2OTFA_write_IRV
        (rtb_LePMIR_b_LT_PsvPmp2OTFA_out);

    /* Merge: '<Root>/Merge_129' incorporates:
     *  SignalConversion generated from: '<S208>/VePMIR_e_LT_PsvPmp2OT_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LT_PsvPmp2OT_LT_PsvPmp2OT_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LT_PsvPmp2OT_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LT_PsvPmp2OT' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_LT_PsvPmpOT(VAR(TePMPR_e_FTSNA, AUTOMATIC)
    LePMIR_e_LT_PsvPmpOT, VAR(boolean, AUTOMATIC) LePMIR_b_LT_PsvPmpOTFA)
{
    boolean rtb_LePMIR_b_LT_PsvPmpOTFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_LT_PsvPmpOT' */
    /* Chart: '<S209>/PokePMIR_e_LT_PsvPmpOTChrt' incorporates:
     *  SignalConversion generated from: '<S209>/LePMIR_b_LT_PsvPmpOTFA'
     *  SignalConversion generated from: '<S209>/LePMIR_e_LT_PsvPmpOT'
     */
    /* Gateway: PokePMIR_e_LT_PsvPmpOT/PokePMIR_e_LT_PsvPmpOTChrt */
    /* During: PokePMIR_e_LT_PsvPmpOT/PokePMIR_e_LT_PsvPmpOTChrt */
    /* Entry Internal: PokePMIR_e_LT_PsvPmpOT/PokePMIR_e_LT_PsvPmpOTChrt */
    /* Transition: '<S1581>:2' */
    if (!LePMIR_b_LT_PsvPmpOTFA)
    {
        /* Transition: '<S1581>:3' */
        /* Transition: '<S1581>:15' */
        PMIR_ac_B.LePMIR_e_LT_PsvPmpOT_out = LePMIR_e_LT_PsvPmpOT;
        rtb_LePMIR_b_LT_PsvPmpOTFA_out = false;

        /* Transition: '<S1581>:18' */
    }
    else
    {
        /* Transition: '<S1581>:4' */
        rtb_LePMIR_b_LT_PsvPmpOTFA_out = true;
    }

    /* End of Chart: '<S209>/PokePMIR_e_LT_PsvPmpOTChrt' */

    /* Merge: '<Root>/Merge_172' incorporates:
     *  SignalConversion generated from: '<S209>/VePMIR_b_LT_PsvPmpOTFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LT_PsvPmpOT_VePMIR_b_LT_PsvPmpOTFA_write_IRV
        (rtb_LePMIR_b_LT_PsvPmpOTFA_out);

    /* Merge: '<Root>/Merge_173' incorporates:
     *  SignalConversion generated from: '<S209>/VePMIR_e_LT_PsvPmpOT_write'
     * */
    Rte_IrvWrite_PokePMIR_e_LT_PsvPmpOT_LT_PsvPmpOT_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_LT_PsvPmpOT_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_LT_PsvPmpOT' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_ColdBiasSts(VAR
    (TeTAPR_e_TransAuxPmp_FalseTrueSNA, AUTOMATIC)
    LePMIR_e_TransAuxPmp2_ColdBiasSts, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_ColdBiasStsFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_ColdBiasStsFA_;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_ColdBiasSts' */
    /* Chart: '<S210>/PokePMIR_e_TransAuxPmp2_ColdBiasStsChrt' incorporates:
     *  SignalConversion generated from: '<S210>/LePMIR_b_TransAuxPmp2_ColdBiasStsFA'
     *  SignalConversion generated from: '<S210>/LePMIR_e_TransAuxPmp2_ColdBiasSts'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_ColdBiasSts/PokePMIR_e_TransAuxPmp2_ColdBiasStsChrt */
    /* During: PokePMIR_e_TransAuxPmp2_ColdBiasSts/PokePMIR_e_TransAuxPmp2_ColdBiasStsChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_ColdBiasSts/PokePMIR_e_TransAuxPmp2_ColdBiasStsChrt */
    /* Transition: '<S1582>:2' */
    if (!LePMIR_b_TransAuxPmp2_ColdBiasStsFA)
    {
        /* Transition: '<S1582>:3' */
        /* Transition: '<S1582>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_ColdBiasSts_out =
            LePMIR_e_TransAuxPmp2_ColdBiasSts;
        rtb_LePMIR_b_TransAuxPmp2_ColdBiasStsFA_ = false;

        /* Transition: '<S1582>:18' */
    }
    else
    {
        /* Transition: '<S1582>:4' */
        rtb_LePMIR_b_TransAuxPmp2_ColdBiasStsFA_ = true;
    }

    /* End of Chart: '<S210>/PokePMIR_e_TransAuxPmp2_ColdBiasStsChrt' */

    /* Merge: '<Root>/Merge_190' incorporates:
     *  SignalConversion generated from: '<S210>/VePMIR_b_TransAuxPmp2_ColdBiasStsFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_ColdBiasSts_VePMIR_b_TransAuxPmp2_ColdBiasStsFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_ColdBiasStsFA_);

    /* Merge: '<Root>/Merge_191' incorporates:
     *  SignalConversion generated from: '<S210>/VePMIR_e_TransAuxPmp2_ColdBiasSts_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_ColdBiasSts_TransAuxPmp2_ColdBiasSts_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_ColdBiasSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_ColdBiasSts' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_CrntErr(VAR
    (TeTAPR_e_TransAuxPmp_CrntErr, AUTOMATIC) LePMIR_e_TransAuxPmp2_CrntErr, VAR
    (boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_CrntErrFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_CrntErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_CrntErr' */
    /* Chart: '<S211>/PokePMIR_e_TransAuxPmp2_CrntErrChrt' incorporates:
     *  SignalConversion generated from: '<S211>/LePMIR_b_TransAuxPmp2_CrntErrFA'
     *  SignalConversion generated from: '<S211>/LePMIR_e_TransAuxPmp2_CrntErr'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_CrntErr/PokePMIR_e_TransAuxPmp2_CrntErrChrt */
    /* During: PokePMIR_e_TransAuxPmp2_CrntErr/PokePMIR_e_TransAuxPmp2_CrntErrChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_CrntErr/PokePMIR_e_TransAuxPmp2_CrntErrChrt */
    /* Transition: '<S1583>:2' */
    if (!LePMIR_b_TransAuxPmp2_CrntErrFA)
    {
        /* Transition: '<S1583>:3' */
        /* Transition: '<S1583>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_CrntErr_out =
            LePMIR_e_TransAuxPmp2_CrntErr;
        rtb_LePMIR_b_TransAuxPmp2_CrntErrFA_out = false;

        /* Transition: '<S1583>:18' */
    }
    else
    {
        /* Transition: '<S1583>:4' */
        rtb_LePMIR_b_TransAuxPmp2_CrntErrFA_out = true;
    }

    /* End of Chart: '<S211>/PokePMIR_e_TransAuxPmp2_CrntErrChrt' */

    /* Merge: '<Root>/Merge_192' incorporates:
     *  SignalConversion generated from: '<S211>/VePMIR_b_TransAuxPmp2_CrntErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_CrntErr_VePMIR_b_TransAuxPmp2_CrntErrFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_CrntErrFA_out);

    /* Merge: '<Root>/Merge_193' incorporates:
     *  SignalConversion generated from: '<S211>/VePMIR_e_TransAuxPmp2_CrntErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_CrntErr_TransAuxPmp2_CrntErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_CrntErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_CrntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_DryRun(VAR
    (TeTAPR_e_TransAuxPmp_FalseTrueSNA, AUTOMATIC) LePMIR_e_TransAuxPmp2_DryRun,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_DryRunFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_DryRunFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_DryRun' */
    /* Chart: '<S212>/PokePMIR_e_TransAuxPmp2_DryRunChrt' incorporates:
     *  SignalConversion generated from: '<S212>/LePMIR_b_TransAuxPmp2_DryRunFA'
     *  SignalConversion generated from: '<S212>/LePMIR_e_TransAuxPmp2_DryRun'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_DryRun/PokePMIR_e_TransAuxPmp2_DryRunChrt */
    /* During: PokePMIR_e_TransAuxPmp2_DryRun/PokePMIR_e_TransAuxPmp2_DryRunChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_DryRun/PokePMIR_e_TransAuxPmp2_DryRunChrt */
    /* Transition: '<S1584>:2' */
    if (!LePMIR_b_TransAuxPmp2_DryRunFA)
    {
        /* Transition: '<S1584>:3' */
        /* Transition: '<S1584>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_DryRun_out =
            LePMIR_e_TransAuxPmp2_DryRun;
        rtb_LePMIR_b_TransAuxPmp2_DryRunFA_out = false;

        /* Transition: '<S1584>:18' */
    }
    else
    {
        /* Transition: '<S1584>:4' */
        rtb_LePMIR_b_TransAuxPmp2_DryRunFA_out = true;
    }

    /* End of Chart: '<S212>/PokePMIR_e_TransAuxPmp2_DryRunChrt' */

    /* Merge: '<Root>/Merge_196' incorporates:
     *  SignalConversion generated from: '<S212>/VePMIR_b_TransAuxPmp2_DryRunFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_DryRun_VePMIR_b_TransAuxPmp2_DryRunFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_DryRunFA_out);

    /* Merge: '<Root>/Merge_197' incorporates:
     *  SignalConversion generated from: '<S212>/VePMIR_e_TransAuxPmp2_DryRun_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_DryRun_TransAuxPmp2_DryRun_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_DryRun_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_DryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_LmpHM(VAR
    (TeTAPR_e_TransAuxPmp_FalseTrueSNA, AUTOMATIC) LePMIR_e_TransAuxPmp2_LmpHM,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_LmpHMFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_LmpHMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_LmpHM' */
    /* Chart: '<S213>/PokePMIR_e_TransAuxPmp2_LmpHMChrt' incorporates:
     *  SignalConversion generated from: '<S213>/LePMIR_b_TransAuxPmp2_LmpHMFA'
     *  SignalConversion generated from: '<S213>/LePMIR_e_TransAuxPmp2_LmpHM'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_LmpHM/PokePMIR_e_TransAuxPmp2_LmpHMChrt */
    /* During: PokePMIR_e_TransAuxPmp2_LmpHM/PokePMIR_e_TransAuxPmp2_LmpHMChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_LmpHM/PokePMIR_e_TransAuxPmp2_LmpHMChrt */
    /* Transition: '<S1585>:2' */
    if (!LePMIR_b_TransAuxPmp2_LmpHMFA)
    {
        /* Transition: '<S1585>:3' */
        /* Transition: '<S1585>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_LmpHM_out = LePMIR_e_TransAuxPmp2_LmpHM;
        rtb_LePMIR_b_TransAuxPmp2_LmpHMFA_out = false;

        /* Transition: '<S1585>:18' */
    }
    else
    {
        /* Transition: '<S1585>:4' */
        rtb_LePMIR_b_TransAuxPmp2_LmpHMFA_out = true;
    }

    /* End of Chart: '<S213>/PokePMIR_e_TransAuxPmp2_LmpHMChrt' */

    /* Merge: '<Root>/Merge_198' incorporates:
     *  SignalConversion generated from: '<S213>/VePMIR_b_TransAuxPmp2_LmpHMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_LmpHM_VePMIR_b_TransAuxPmp2_LmpHMFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_LmpHMFA_out);

    /* Merge: '<Root>/Merge_199' incorporates:
     *  SignalConversion generated from: '<S213>/VePMIR_e_TransAuxPmp2_LmpHM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_LmpHM_TransAuxPmp2_LmpHM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_LmpHM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_MntrRPM(VAR
    (TeTAPR_e_TransAuxPmp_FalseTrueSNA, AUTOMATIC) LePMIR_e_TransAuxPmp2_MntrRPM,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_MntrRPMFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_MntrRPMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_MntrRPM' */
    /* Chart: '<S214>/PokePMIR_e_TransAuxPmp2_MntrRPMChrt' incorporates:
     *  Constant: '<S1586>/Calib'
     *  SignalConversion generated from: '<S214>/LePMIR_b_TransAuxPmp2_MntrRPMFA'
     *  SignalConversion generated from: '<S214>/LePMIR_e_TransAuxPmp2_MntrRPM'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_MntrRPM/PokePMIR_e_TransAuxPmp2_MntrRPMChrt */
    /* During: PokePMIR_e_TransAuxPmp2_MntrRPM/PokePMIR_e_TransAuxPmp2_MntrRPMChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_MntrRPM/PokePMIR_e_TransAuxPmp2_MntrRPMChrt */
    /* Transition: '<S1587>:2' */
    if (!LePMIR_b_TransAuxPmp2_MntrRPMFA)
    {
        /* Transition: '<S1587>:3' */
        /* Transition: '<S1587>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_MntrRPM_out =
            KaPMIR_e_TransAuxPmp2_MntrRPM_Map[(LePMIR_e_TransAuxPmp2_MntrRPM)];
        rtb_LePMIR_b_TransAuxPmp2_MntrRPMFA_out = false;

        /* Transition: '<S1587>:18' */
    }
    else
    {
        /* Transition: '<S1587>:4' */
        rtb_LePMIR_b_TransAuxPmp2_MntrRPMFA_out = true;
    }

    /* End of Chart: '<S214>/PokePMIR_e_TransAuxPmp2_MntrRPMChrt' */

    /* Merge: '<Root>/Merge_200' incorporates:
     *  SignalConversion generated from: '<S214>/VePMIR_b_TransAuxPmp2_MntrRPMFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_MntrRPM_VePMIR_b_TransAuxPmp2_MntrRPMFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_MntrRPMFA_out);

    /* Merge: '<Root>/Merge_201' incorporates:
     *  SignalConversion generated from: '<S214>/VePMIR_e_TransAuxPmp2_MntrRPM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_MntrRPM_TransAuxPmp2_MntrRPM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_MntrRPM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_MntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_PstRnSt(VAR
    (TeTAPR_e_TransAuxPmp_PostRunCmd, AUTOMATIC) LePMIR_e_TransAuxPmp2_PstRnSt,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_PstRnStFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_PstRnStFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_PstRnSt' */
    /* Chart: '<S215>/PokePMIR_e_TransAuxPmp2_PstRnStChrt' incorporates:
     *  SignalConversion generated from: '<S215>/LePMIR_b_TransAuxPmp2_PstRnStFA'
     *  SignalConversion generated from: '<S215>/LePMIR_e_TransAuxPmp2_PstRnSt'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_PstRnSt/PokePMIR_e_TransAuxPmp2_PstRnStChrt */
    /* During: PokePMIR_e_TransAuxPmp2_PstRnSt/PokePMIR_e_TransAuxPmp2_PstRnStChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_PstRnSt/PokePMIR_e_TransAuxPmp2_PstRnStChrt */
    /* Transition: '<S1588>:2' */
    if (!LePMIR_b_TransAuxPmp2_PstRnStFA)
    {
        /* Transition: '<S1588>:3' */
        /* Transition: '<S1588>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_PstRnSt_out =
            LePMIR_e_TransAuxPmp2_PstRnSt;
        rtb_LePMIR_b_TransAuxPmp2_PstRnStFA_out = false;

        /* Transition: '<S1588>:18' */
    }
    else
    {
        /* Transition: '<S1588>:4' */
        rtb_LePMIR_b_TransAuxPmp2_PstRnStFA_out = true;
    }

    /* End of Chart: '<S215>/PokePMIR_e_TransAuxPmp2_PstRnStChrt' */

    /* Merge: '<Root>/Merge_204' incorporates:
     *  SignalConversion generated from: '<S215>/VePMIR_b_TransAuxPmp2_PstRnStFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_PstRnSt_VePMIR_b_TransAuxPmp2_PstRnStFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_PstRnStFA_out);

    /* Merge: '<Root>/Merge_205' incorporates:
     *  SignalConversion generated from: '<S215>/VePMIR_e_TransAuxPmp2_PstRnSt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_PstRnSt_TransAuxPmp2_PstRnSt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_PstRnSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_StallEvnt(VAR
    (TeTAPR_e_TransAuxPmp_StallEvnt, AUTOMATIC) LePMIR_e_TransAuxPmp2_StallEvnt,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_StallEvntFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_StallEvntFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_StallEvnt' */
    /* Chart: '<S216>/PokePMIR_e_TransAuxPmp2_StallEvntChrt' incorporates:
     *  SignalConversion generated from: '<S216>/LePMIR_b_TransAuxPmp2_StallEvntFA'
     *  SignalConversion generated from: '<S216>/LePMIR_e_TransAuxPmp2_StallEvnt'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_StallEvnt/PokePMIR_e_TransAuxPmp2_StallEvntChrt */
    /* During: PokePMIR_e_TransAuxPmp2_StallEvnt/PokePMIR_e_TransAuxPmp2_StallEvntChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_StallEvnt/PokePMIR_e_TransAuxPmp2_StallEvntChrt */
    /* Transition: '<S1589>:2' */
    if (!LePMIR_b_TransAuxPmp2_StallEvntFA)
    {
        /* Transition: '<S1589>:3' */
        /* Transition: '<S1589>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_StallEvnt_out =
            LePMIR_e_TransAuxPmp2_StallEvnt;
        rtb_LePMIR_b_TransAuxPmp2_StallEvntFA_ou = false;

        /* Transition: '<S1589>:18' */
    }
    else
    {
        /* Transition: '<S1589>:4' */
        rtb_LePMIR_b_TransAuxPmp2_StallEvntFA_ou = true;
    }

    /* End of Chart: '<S216>/PokePMIR_e_TransAuxPmp2_StallEvntChrt' */

    /* Merge: '<Root>/Merge_212' incorporates:
     *  SignalConversion generated from: '<S216>/VePMIR_b_TransAuxPmp2_StallEvntFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_StallEvnt_VePMIR_b_TransAuxPmp2_StallEvntFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_StallEvntFA_ou);

    /* Merge: '<Root>/Merge_213' incorporates:
     *  SignalConversion generated from: '<S216>/VePMIR_e_TransAuxPmp2_StallEvnt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_StallEvnt_TransAuxPmp2_StallEvnt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_StallEvnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_StallEvnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_TempErr(VAR
    (TeTAPR_e_TransAuxPmp_TmpErr, AUTOMATIC) LePMIR_e_TransAuxPmp2_TempErr, VAR
    (boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_TempErrFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_TempErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_TempErr' */
    /* Chart: '<S217>/PokePMIR_e_TransAuxPmp2_TempErrChrt' incorporates:
     *  SignalConversion generated from: '<S217>/LePMIR_b_TransAuxPmp2_TempErrFA'
     *  SignalConversion generated from: '<S217>/LePMIR_e_TransAuxPmp2_TempErr'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_TempErr/PokePMIR_e_TransAuxPmp2_TempErrChrt */
    /* During: PokePMIR_e_TransAuxPmp2_TempErr/PokePMIR_e_TransAuxPmp2_TempErrChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_TempErr/PokePMIR_e_TransAuxPmp2_TempErrChrt */
    /* Transition: '<S1590>:2' */
    if (!LePMIR_b_TransAuxPmp2_TempErrFA)
    {
        /* Transition: '<S1590>:3' */
        /* Transition: '<S1590>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_TempErr_out =
            LePMIR_e_TransAuxPmp2_TempErr;
        rtb_LePMIR_b_TransAuxPmp2_TempErrFA_out = false;

        /* Transition: '<S1590>:18' */
    }
    else
    {
        /* Transition: '<S1590>:4' */
        rtb_LePMIR_b_TransAuxPmp2_TempErrFA_out = true;
    }

    /* End of Chart: '<S217>/PokePMIR_e_TransAuxPmp2_TempErrChrt' */

    /* Merge: '<Root>/Merge_214' incorporates:
     *  SignalConversion generated from: '<S217>/VePMIR_b_TransAuxPmp2_TempErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_TempErr_VePMIR_b_TransAuxPmp2_TempErrFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_TempErrFA_out);

    /* Merge: '<Root>/Merge_215' incorporates:
     *  SignalConversion generated from: '<S217>/VePMIR_e_TransAuxPmp2_TempErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_TempErr_TransAuxPmp2_TempErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_TempErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_TempErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp2_VltgErr(VAR
    (TeTAPR_e_TransAuxPmp_VltgtErr, AUTOMATIC) LePMIR_e_TransAuxPmp2_VltgErr,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp2_VltgErrFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_VltgErrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_VltgErr' */
    /* Chart: '<S218>/PokePMIR_e_TransAuxPmp2_VltgErrChrt' incorporates:
     *  SignalConversion generated from: '<S218>/LePMIR_b_TransAuxPmp2_VltgErrFA'
     *  SignalConversion generated from: '<S218>/LePMIR_e_TransAuxPmp2_VltgErr'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp2_VltgErr/PokePMIR_e_TransAuxPmp2_VltgErrChrt */
    /* During: PokePMIR_e_TransAuxPmp2_VltgErr/PokePMIR_e_TransAuxPmp2_VltgErrChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp2_VltgErr/PokePMIR_e_TransAuxPmp2_VltgErrChrt */
    /* Transition: '<S1591>:2' */
    if (!LePMIR_b_TransAuxPmp2_VltgErrFA)
    {
        /* Transition: '<S1591>:3' */
        /* Transition: '<S1591>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp2_VltgErr_out =
            LePMIR_e_TransAuxPmp2_VltgErr;
        rtb_LePMIR_b_TransAuxPmp2_VltgErrFA_out = false;

        /* Transition: '<S1591>:18' */
    }
    else
    {
        /* Transition: '<S1591>:4' */
        rtb_LePMIR_b_TransAuxPmp2_VltgErrFA_out = true;
    }

    /* End of Chart: '<S218>/PokePMIR_e_TransAuxPmp2_VltgErrChrt' */

    /* Merge: '<Root>/Merge_222' incorporates:
     *  SignalConversion generated from: '<S218>/VePMIR_b_TransAuxPmp2_VltgErrFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_VltgErr_VePMIR_b_TransAuxPmp2_VltgErrFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_VltgErrFA_out);

    /* Merge: '<Root>/Merge_223' incorporates:
     *  SignalConversion generated from: '<S218>/VePMIR_e_TransAuxPmp2_VltgErr_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp2_VltgErr_TransAuxPmp2_VltgErr_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp2_VltgErr_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp2_VltgErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_ColdBiasSts(VAR
    (TeTAPR_e_TransAuxPmp_FalseTrueSNA, AUTOMATIC)
    LePMIR_e_TransAuxPmp_ColdBiasSts, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_ColdBiasStsFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_ColdBiasSts' */
    /* Chart: '<S219>/PokePMIR_e_TransAuxPmp_ColdBiasStsChrt' incorporates:
     *  SignalConversion generated from: '<S219>/LePMIR_b_TransAuxPmp_ColdBiasStsFA'
     *  SignalConversion generated from: '<S219>/LePMIR_e_TransAuxPmp_ColdBiasSts'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_ColdBiasSts/PokePMIR_e_TransAuxPmp_ColdBiasStsChrt */
    /* During: PokePMIR_e_TransAuxPmp_ColdBiasSts/PokePMIR_e_TransAuxPmp_ColdBiasStsChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_ColdBiasSts/PokePMIR_e_TransAuxPmp_ColdBiasStsChrt */
    /* Transition: '<S1592>:2' */
    if (!LePMIR_b_TransAuxPmp_ColdBiasStsFA)
    {
        /* Transition: '<S1592>:3' */
        /* Transition: '<S1592>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp_ColdBiasSts_out =
            LePMIR_e_TransAuxPmp_ColdBiasSts;

        /* Transition: '<S1592>:18' */
    }
    else
    {
        /* Transition: '<S1592>:4' */
    }

    /* End of Chart: '<S219>/PokePMIR_e_TransAuxPmp_ColdBiasStsChrt' */

    /* Merge: '<Root>/Merge_230' incorporates:
     *  SignalConversion generated from: '<S219>/VePMIR_e_TransAuxPmp_ColdBiasSts_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp_ColdBiasSts_TransAuxPmp_ColdBiasSts_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp_ColdBiasSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_ColdBiasSts' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_CrntErr(VAR
    (TeTAPR_e_TransAuxPmp_CrntErr, AUTOMATIC) LePMIR_e_TransAuxPmp_CrntErr, VAR
    (boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_CrntErrFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_CrntErr' */
    /* Chart: '<S220>/PokePMIR_e_TransAuxPmp_CrntErrChrt' incorporates:
     *  SignalConversion generated from: '<S220>/LePMIR_b_TransAuxPmp_CrntErrFA'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_CrntErr/PokePMIR_e_TransAuxPmp_CrntErrChrt */
    /* During: PokePMIR_e_TransAuxPmp_CrntErr/PokePMIR_e_TransAuxPmp_CrntErrChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_CrntErr/PokePMIR_e_TransAuxPmp_CrntErrChrt */
    /* Transition: '<S1594>:2' */
    if (!LePMIR_b_TransAuxPmp_CrntErrFA)
    {
        /* SignalConversion generated from: '<S220>/VePMIR_e_TransAuxPmp_CrntErr_write' incorporates:
         *  Merge: '<Root>/Merge_232'
         *  SignalConversion generated from: '<S220>/LePMIR_e_TransAuxPmp_CrntErr'
         */
        /* Transition: '<S1594>:3' */
        /* Transition: '<S1594>:15' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_CrntErr_TransAuxPmp_CrntErr_INIT_write_IRV
            (LePMIR_e_TransAuxPmp_CrntErr);

        /* Transition: '<S1594>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S220>/VePMIR_e_TransAuxPmp_CrntErr_write' incorporates:
         *  Constant: '<S1593>/Calib'
         *  Merge: '<Root>/Merge_232'
         */
        /* Transition: '<S1594>:4' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_CrntErr_TransAuxPmp_CrntErr_INIT_write_IRV
            (KePMIR_e_TransAuxPmp_CrntErrDflt);
    }

    /* End of Chart: '<S220>/PokePMIR_e_TransAuxPmp_CrntErrChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_CrntErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_DryRun(VAR
    (TeTAPR_e_TransAuxPmp_FalseTrueSNA, AUTOMATIC) LePMIR_e_TransAuxPmp_DryRun,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_DryRunFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp_DryRunFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_DryRun' */
    /* Chart: '<S221>/PokePMIR_e_TransAuxPmp_DryRunChrt' incorporates:
     *  SignalConversion generated from: '<S221>/LePMIR_b_TransAuxPmp_DryRunFA'
     *  SignalConversion generated from: '<S221>/LePMIR_e_TransAuxPmp_DryRun'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_DryRun/PokePMIR_e_TransAuxPmp_DryRunChrt */
    /* During: PokePMIR_e_TransAuxPmp_DryRun/PokePMIR_e_TransAuxPmp_DryRunChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_DryRun/PokePMIR_e_TransAuxPmp_DryRunChrt */
    /* Transition: '<S1595>:2' */
    if (!LePMIR_b_TransAuxPmp_DryRunFA)
    {
        /* Transition: '<S1595>:3' */
        /* Transition: '<S1595>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp_DryRun_out = LePMIR_e_TransAuxPmp_DryRun;
        rtb_LePMIR_b_TransAuxPmp_DryRunFA_out = false;

        /* Transition: '<S1595>:18' */
    }
    else
    {
        /* Transition: '<S1595>:4' */
        rtb_LePMIR_b_TransAuxPmp_DryRunFA_out = true;
    }

    /* End of Chart: '<S221>/PokePMIR_e_TransAuxPmp_DryRunChrt' */

    /* Merge: '<Root>/Merge_234' incorporates:
     *  SignalConversion generated from: '<S221>/VePMIR_b_TransAuxPmp_DryRunFA_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp_DryRun_VePMIR_b_TransAuxPmp_DryRunFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp_DryRunFA_out);

    /* Merge: '<Root>/Merge_233' incorporates:
     *  SignalConversion generated from: '<S221>/VePMIR_e_TransAuxPmp_DryRun_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp_DryRun_TransAuxPmp_DryRun_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp_DryRun_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_DryRun' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_LmpHM(VAR
    (TeTAPR_e_TransAuxPmp_FalseTrueSNA, AUTOMATIC) LePMIR_e_TransAuxPmp_LmpHM,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_LmpHMFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_LmpHM' */
    /* Chart: '<S222>/PokePMIR_e_TransAuxPmp_LmpHMChrt' incorporates:
     *  SignalConversion generated from: '<S222>/LePMIR_b_TransAuxPmp_LmpHMFA'
     *  SignalConversion generated from: '<S222>/LePMIR_e_TransAuxPmp_LmpHM'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_LmpHM/PokePMIR_e_TransAuxPmp_LmpHMChrt */
    /* During: PokePMIR_e_TransAuxPmp_LmpHM/PokePMIR_e_TransAuxPmp_LmpHMChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_LmpHM/PokePMIR_e_TransAuxPmp_LmpHMChrt */
    /* Transition: '<S1596>:2' */
    if (!LePMIR_b_TransAuxPmp_LmpHMFA)
    {
        /* Transition: '<S1596>:3' */
        /* Transition: '<S1596>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp_LmpHM_out = LePMIR_e_TransAuxPmp_LmpHM;

        /* Transition: '<S1596>:18' */
    }
    else
    {
        /* Transition: '<S1596>:4' */
    }

    /* End of Chart: '<S222>/PokePMIR_e_TransAuxPmp_LmpHMChrt' */

    /* Merge: '<Root>/Merge_235' incorporates:
     *  SignalConversion generated from: '<S222>/VePMIR_e_TransAuxPmp_LmpHM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp_LmpHM_TransAuxPmp_LmpHM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp_LmpHM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_LmpHM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_MntrRPM(VAR
    (TeTAPR_e_TransAuxPmp_TrueFalseSNA, AUTOMATIC) LePMIR_e_TransAuxPmp_MntrRPM,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_MntrRPMFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_MntrRPM' */
    /* Chart: '<S223>/PokePMIR_e_TransAuxPmp_MntrRPMChrt' incorporates:
     *  Constant: '<S1597>/Calib'
     *  SignalConversion generated from: '<S223>/LePMIR_b_TransAuxPmp_MntrRPMFA'
     *  SignalConversion generated from: '<S223>/LePMIR_e_TransAuxPmp_MntrRPM'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_MntrRPM/PokePMIR_e_TransAuxPmp_MntrRPMChrt */
    /* During: PokePMIR_e_TransAuxPmp_MntrRPM/PokePMIR_e_TransAuxPmp_MntrRPMChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_MntrRPM/PokePMIR_e_TransAuxPmp_MntrRPMChrt */
    /* Transition: '<S1598>:2' */
    if (!LePMIR_b_TransAuxPmp_MntrRPMFA)
    {
        /* Transition: '<S1598>:3' */
        /* Transition: '<S1598>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp_MntrRPM_out =
            KaPMIR_e_TransAuxPmp_MntrRPM_Map[(LePMIR_e_TransAuxPmp_MntrRPM)];

        /* Transition: '<S1598>:18' */
    }
    else
    {
        /* Transition: '<S1598>:4' */
    }

    /* End of Chart: '<S223>/PokePMIR_e_TransAuxPmp_MntrRPMChrt' */

    /* Merge: '<Root>/Merge_236' incorporates:
     *  SignalConversion generated from: '<S223>/VePMIR_e_TransAuxPmp_MntrRPM_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp_MntrRPM_TransAuxPmp_MntrRPM_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp_MntrRPM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_MntrRPM' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_PstRnSt(VAR
    (TeTAPR_e_TransAuxPmp_PostRunCmd, AUTOMATIC) LePMIR_e_TransAuxPmp_PstRnSt,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_PstRnStFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_PstRnSt' */
    /* Chart: '<S224>/PokePMIR_e_TransAuxPmp_PstRnStChrt' incorporates:
     *  SignalConversion generated from: '<S224>/LePMIR_b_TransAuxPmp_PstRnStFA'
     *  SignalConversion generated from: '<S224>/LePMIR_e_TransAuxPmp_PstRnSt'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_PstRnSt/PokePMIR_e_TransAuxPmp_PstRnStChrt */
    /* During: PokePMIR_e_TransAuxPmp_PstRnSt/PokePMIR_e_TransAuxPmp_PstRnStChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_PstRnSt/PokePMIR_e_TransAuxPmp_PstRnStChrt */
    /* Transition: '<S1599>:2' */
    if (!LePMIR_b_TransAuxPmp_PstRnStFA)
    {
        /* Transition: '<S1599>:3' */
        /* Transition: '<S1599>:15' */
        PMIR_ac_B.LePMIR_e_TransAuxPmp_PstRnSt_out =
            LePMIR_e_TransAuxPmp_PstRnSt;

        /* Transition: '<S1599>:18' */
    }
    else
    {
        /* Transition: '<S1599>:4' */
    }

    /* End of Chart: '<S224>/PokePMIR_e_TransAuxPmp_PstRnStChrt' */

    /* Merge: '<Root>/Merge_239' incorporates:
     *  SignalConversion generated from: '<S224>/VePMIR_e_TransAuxPmp_PstRnSt_write'
     * */
    Rte_IrvWrite_PokePMIR_e_TransAuxPmp_PstRnSt_TransAuxPmp_PstRnSt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_e_TransAuxPmp_PstRnSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_StallEvnt(VAR
    (TeTAPR_e_TransAuxPmp_StallEvnt, AUTOMATIC) LePMIR_e_TransAuxPmp_StallEvnt,
    VAR(boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_StallEvntFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_StallEvnt' */
    /* Chart: '<S225>/PokePMIR_e_TransAuxPmp_StallEvntChrt' incorporates:
     *  SignalConversion generated from: '<S225>/LePMIR_b_TransAuxPmp_StallEvntFA'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_StallEvnt/PokePMIR_e_TransAuxPmp_StallEvntChrt */
    /* During: PokePMIR_e_TransAuxPmp_StallEvnt/PokePMIR_e_TransAuxPmp_StallEvntChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_StallEvnt/PokePMIR_e_TransAuxPmp_StallEvntChrt */
    /* Transition: '<S1601>:2' */
    if (!LePMIR_b_TransAuxPmp_StallEvntFA)
    {
        /* SignalConversion generated from: '<S225>/VePMIR_e_TransAuxPmp_StallEvnt_write' incorporates:
         *  Merge: '<Root>/Merge_245'
         *  SignalConversion generated from: '<S225>/LePMIR_e_TransAuxPmp_StallEvnt'
         */
        /* Transition: '<S1601>:3' */
        /* Transition: '<S1601>:15' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_StallEvnt_TransAuxPmp_StallEvnt_INIT_write_IRV
            (LePMIR_e_TransAuxPmp_StallEvnt);

        /* Transition: '<S1601>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S225>/VePMIR_e_TransAuxPmp_StallEvnt_write' incorporates:
         *  Constant: '<S1600>/Calib'
         *  Merge: '<Root>/Merge_245'
         */
        /* Transition: '<S1601>:4' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_StallEvnt_TransAuxPmp_StallEvnt_INIT_write_IRV
            (KePMIR_e_TransAuxPmp_StallEvntDflt);
    }

    /* End of Chart: '<S225>/PokePMIR_e_TransAuxPmp_StallEvntChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_StallEvnt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_TempErr(VAR
    (TeTAPR_e_TransAuxPmp_TmpErr, AUTOMATIC) LePMIR_e_TransAuxPmp_TempErr, VAR
    (boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_TempErrFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_TempErr' */
    /* Chart: '<S226>/PokePMIR_e_TransAuxPmp_TempErrChrt' incorporates:
     *  SignalConversion generated from: '<S226>/LePMIR_b_TransAuxPmp_TempErrFA'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_TempErr/PokePMIR_e_TransAuxPmp_TempErrChrt */
    /* During: PokePMIR_e_TransAuxPmp_TempErr/PokePMIR_e_TransAuxPmp_TempErrChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_TempErr/PokePMIR_e_TransAuxPmp_TempErrChrt */
    /* Transition: '<S1603>:2' */
    if (!LePMIR_b_TransAuxPmp_TempErrFA)
    {
        /* SignalConversion generated from: '<S226>/VePMIR_e_TransAuxPmp_TempErr_write' incorporates:
         *  Merge: '<Root>/Merge_251'
         *  SignalConversion generated from: '<S226>/LePMIR_e_TransAuxPmp_TempErr'
         */
        /* Transition: '<S1603>:3' */
        /* Transition: '<S1603>:15' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_TempErr_TransAuxPmp_TempErr_INIT_write_IRV
            (LePMIR_e_TransAuxPmp_TempErr);

        /* Transition: '<S1603>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S226>/VePMIR_e_TransAuxPmp_TempErr_write' incorporates:
         *  Constant: '<S1602>/Calib'
         *  Merge: '<Root>/Merge_251'
         */
        /* Transition: '<S1603>:4' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_TempErr_TransAuxPmp_TempErr_INIT_write_IRV
            (KePMIR_e_TransAuxPmp_TempErrDflt);
    }

    /* End of Chart: '<S226>/PokePMIR_e_TransAuxPmp_TempErrChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_TempErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_e_TransAuxPmp_VltgErr(VAR
    (TeTAPR_e_TransAuxPmp_VltgtErr, AUTOMATIC) LePMIR_e_TransAuxPmp_VltgErr, VAR
    (boolean, AUTOMATIC) LePMIR_b_TransAuxPmp_VltgErrFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_VltgErr' */
    /* Chart: '<S227>/PokePMIR_e_TransAuxPmp_VltgErrChrt' incorporates:
     *  SignalConversion generated from: '<S227>/LePMIR_b_TransAuxPmp_VltgErrFA'
     */
    /* Gateway: PokePMIR_e_TransAuxPmp_VltgErr/PokePMIR_e_TransAuxPmp_VltgErrChrt */
    /* During: PokePMIR_e_TransAuxPmp_VltgErr/PokePMIR_e_TransAuxPmp_VltgErrChrt */
    /* Entry Internal: PokePMIR_e_TransAuxPmp_VltgErr/PokePMIR_e_TransAuxPmp_VltgErrChrt */
    /* Transition: '<S1605>:2' */
    if (!LePMIR_b_TransAuxPmp_VltgErrFA)
    {
        /* SignalConversion generated from: '<S227>/VePMIR_e_TransAuxPmp_VltgErr_write' incorporates:
         *  Merge: '<Root>/Merge_253'
         *  SignalConversion generated from: '<S227>/LePMIR_e_TransAuxPmp_VltgErr'
         */
        /* Transition: '<S1605>:3' */
        /* Transition: '<S1605>:15' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_VltgErr_TransAuxPmp_VltgErr_INIT_write_IRV
            (LePMIR_e_TransAuxPmp_VltgErr);

        /* Transition: '<S1605>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S227>/VePMIR_e_TransAuxPmp_VltgErr_write' incorporates:
         *  Constant: '<S1604>/Calib'
         *  Merge: '<Root>/Merge_253'
         */
        /* Transition: '<S1605>:4' */
        Rte_IrvWrite_PokePMIR_e_TransAuxPmp_VltgErr_TransAuxPmp_VltgErr_INIT_write_IRV
            (KePMIR_e_TransAuxPmp_VltgErrDflt);
    }

    /* End of Chart: '<S227>/PokePMIR_e_TransAuxPmp_VltgErrChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_VltgErr' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_FCCPmpActSpd(VAR(float32, AUTOMATIC)
    LePMIR_n_FCCPmpActSpd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_FCCPmpActSpd' */
    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S228>/LePMIR_n_FCCPmpActSpd'
     *  SignalConversion generated from: '<S228>/VePMIR_n_FCCPmpActSpd_write'
     */
    /* Gateway: PokePMIR_n_FCCPmpActSpd/PokePMIR_n_FCCPmpActSpdChrt */
    /* During: PokePMIR_n_FCCPmpActSpd/PokePMIR_n_FCCPmpActSpdChrt */
    /* Entry Internal: PokePMIR_n_FCCPmpActSpd/PokePMIR_n_FCCPmpActSpdChrt */
    /* Transition: '<S1606>:2' */
    Rte_IrvWrite_PokePMIR_n_FCCPmpActSpd_FCCPmpActSpd_INIT_write_IRV
        (LePMIR_n_FCCPmpActSpd);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_FCCPmpActSpd' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_HTAuxPumpPmpRPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_n_HTAuxPumpPmpRPMTgt, VAR(boolean, AUTOMATIC)
    LePMIR_b_HTAuxPumpPmpRPMTgtFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpPmpRPMTgtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_HTAuxPumpPmpRPMTgt' */
    /* Chart: '<S229>/PokePMIR_n_HTAuxPumpPmpRPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S229>/LePMIR_b_HTAuxPumpPmpRPMTgtFA'
     *  SignalConversion generated from: '<S229>/LePMIR_n_HTAuxPumpPmpRPMTgt'
     */
    /* Gateway: PokePMIR_n_HTAuxPumpPmpRPMTgt/PokePMIR_n_HTAuxPumpPmpRPMTgtChrt */
    /* During: PokePMIR_n_HTAuxPumpPmpRPMTgt/PokePMIR_n_HTAuxPumpPmpRPMTgtChrt */
    /* Entry Internal: PokePMIR_n_HTAuxPumpPmpRPMTgt/PokePMIR_n_HTAuxPumpPmpRPMTgtChrt */
    /* Transition: '<S1607>:2' */
    if (!LePMIR_b_HTAuxPumpPmpRPMTgtFA)
    {
        /* Transition: '<S1607>:3' */
        /* Transition: '<S1607>:15' */
        PMIR_ac_B.LePMIR_n_HTAuxPumpPmpRPMTgt_out = LePMIR_n_HTAuxPumpPmpRPMTgt;
        rtb_LePMIR_b_HTAuxPumpPmpRPMTgtFA_out = false;

        /* Transition: '<S1607>:18' */
    }
    else
    {
        /* Transition: '<S1607>:4' */
        rtb_LePMIR_b_HTAuxPumpPmpRPMTgtFA_out = true;
    }

    /* End of Chart: '<S229>/PokePMIR_n_HTAuxPumpPmpRPMTgtChrt' */

    /* Merge: '<Root>/Merge_97' incorporates:
     *  SignalConversion generated from: '<S229>/VePMIR_b_HTAuxPumpPmpRPMTgtFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_HTAuxPumpPmpRPMTgt_VePMIR_b_HTAuxPumpRPMTgtFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpPmpRPMTgtFA_out);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S229>/VePMIR_n_HTAuxPumpPmpRPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_n_HTAuxPumpPmpRPMTgt_HTAuxPmpRPMTgt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_HTAuxPumpPmpRPMTgt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_HTAuxPumpPmpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_HTAuxPumpRPMAct(VAR(float32, AUTOMATIC)
    LePMIR_n_HTAuxPumpRPMAct, VAR(boolean, AUTOMATIC) LePMIR_b_HTAuxPumpRPMActFA)
{
    boolean rtb_LePMIR_b_HTAuxPumpRPMActnFA_out;
    boolean rtb_LePMIR_b_HTAuxPumpRPMActnSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_HTAuxPumpRPMAct' */
    /* Chart: '<S230>/PokePMIR_n_HTAuxPumpRPMActChrt' incorporates:
     *  SignalConversion generated from: '<S230>/LePMIR_b_HTAuxPumpRPMActFA'
     *  SignalConversion generated from: '<S230>/LePMIR_n_HTAuxPumpRPMAct'
     */
    /* Gateway: PokePMIR_n_HTAuxPumpRPMAct/PokePMIR_n_HTAuxPumpRPMActChrt */
    /* During: PokePMIR_n_HTAuxPumpRPMAct/PokePMIR_n_HTAuxPumpRPMActChrt */
    /* Entry Internal: PokePMIR_n_HTAuxPumpRPMAct/PokePMIR_n_HTAuxPumpRPMActChrt */
    /* Transition: '<S1608>:2' */
    if (!LePMIR_b_HTAuxPumpRPMActFA)
    {
        /* Transition: '<S1608>:3' */
        /* Transition: '<S1608>:15' */
        PMIR_ac_B.LePMIR_n_HTAuxPumpRPMAct_out = LePMIR_n_HTAuxPumpRPMAct;
        rtb_LePMIR_b_HTAuxPumpRPMActnFA_out = false;
        rtb_LePMIR_b_HTAuxPumpRPMActnSNA_out = false;

        /* Transition: '<S1608>:18' */
    }
    else
    {
        /* Transition: '<S1608>:4' */
        rtb_LePMIR_b_HTAuxPumpRPMActnFA_out = true;
        rtb_LePMIR_b_HTAuxPumpRPMActnSNA_out = true;
    }

    /* End of Chart: '<S230>/PokePMIR_n_HTAuxPumpRPMActChrt' */

    /* Merge: '<Root>/Merge_94' incorporates:
     *  SignalConversion generated from: '<S230>/VePMIR_b_HTAuxPumpRPMActnFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_HTAuxPumpRPMAct_VePMIR_b_HTAuxPumpRPMActFA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpRPMActnFA_out);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  SignalConversion generated from: '<S230>/VePMIR_b_HTAuxPumpRPMActnSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_HTAuxPumpRPMAct_VePMIR_b_HTAuxPumpRPMActSNA_write_IRV
        (rtb_LePMIR_b_HTAuxPumpRPMActnSNA_out);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S230>/VePMIR_n_HTAuxPumpRPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_n_HTAuxPumpRPMAct_HTAuxPumpRPMAct_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_HTAuxPumpRPMAct_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_HTAuxPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_LTActPumpRPMAct(VAR(float32, AUTOMATIC)
    LePMIR_n_LTActPumpRPMAct, VAR(boolean, AUTOMATIC) LePMIR_b_LTActPumpRPMActFA)
{
    boolean rtb_LePMIR_b_LTActPumpRPMActnFA_out;
    boolean rtb_LePMIR_b_LTActPumpRPMActnSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_LTActPumpRPMAct' */
    /* Chart: '<S231>/PokePMIR_n_LTActPumpRPMActChrt' incorporates:
     *  SignalConversion generated from: '<S231>/LePMIR_b_LTActPumpRPMActFA'
     *  SignalConversion generated from: '<S231>/LePMIR_n_LTActPumpRPMAct'
     */
    /* Gateway: PokePMIR_n_LTActPumpRPMAct/PokePMIR_n_LTActPumpRPMActChrt */
    /* During: PokePMIR_n_LTActPumpRPMAct/PokePMIR_n_LTActPumpRPMActChrt */
    /* Entry Internal: PokePMIR_n_LTActPumpRPMAct/PokePMIR_n_LTActPumpRPMActChrt */
    /* Transition: '<S1609>:2' */
    if (!LePMIR_b_LTActPumpRPMActFA)
    {
        /* Transition: '<S1609>:3' */
        /* Transition: '<S1609>:15' */
        PMIR_ac_B.LePMIR_n_LTActPumpRPMAct_out = LePMIR_n_LTActPumpRPMAct;
        rtb_LePMIR_b_LTActPumpRPMActnFA_out = false;
        rtb_LePMIR_b_LTActPumpRPMActnSNA_out = false;

        /* Transition: '<S1609>:18' */
    }
    else
    {
        /* Transition: '<S1609>:4' */
        rtb_LePMIR_b_LTActPumpRPMActnFA_out = true;
        rtb_LePMIR_b_LTActPumpRPMActnSNA_out = true;
    }

    /* End of Chart: '<S231>/PokePMIR_n_LTActPumpRPMActChrt' */

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S231>/VePMIR_b_LTActPumpRPMActnFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTActPumpRPMAct_VePMIR_b_LTActPumpRPMActFA_write_IRV
        (rtb_LePMIR_b_LTActPumpRPMActnFA_out);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S231>/VePMIR_b_LTActPumpRPMActnSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTActPumpRPMAct_VePMIR_b_LTActPumpRPMActSNA_write_IRV
        (rtb_LePMIR_b_LTActPumpRPMActnSNA_out);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S231>/VePMIR_n_LTActPumpRPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTActPumpRPMAct_LTActPumpRPMAct_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_LTActPumpRPMAct_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_LTActPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_LTActPumpRPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_n_LTActPumpRPMTgt, VAR(boolean, AUTOMATIC) LePMIR_b_LTActPumpRPMTgtFA)
{
    boolean rtb_LePMIR_b_LTActPumpRPMTgtnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_LTActPumpRPMTgt' */
    /* Chart: '<S232>/PokePMIR_n_LTActPumpRPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S232>/LePMIR_b_LTActPumpRPMTgtFA'
     *  SignalConversion generated from: '<S232>/LePMIR_n_LTActPumpRPMTgt'
     */
    /* Gateway: PokePMIR_n_LTActPumpRPMTgt/PokePMIR_n_LTActPumpRPMTgtChrt */
    /* During: PokePMIR_n_LTActPumpRPMTgt/PokePMIR_n_LTActPumpRPMTgtChrt */
    /* Entry Internal: PokePMIR_n_LTActPumpRPMTgt/PokePMIR_n_LTActPumpRPMTgtChrt */
    /* Transition: '<S1610>:2' */
    if (!LePMIR_b_LTActPumpRPMTgtFA)
    {
        /* Transition: '<S1610>:3' */
        /* Transition: '<S1610>:15' */
        PMIR_ac_B.LePMIR_n_LTActPumpRPMTgt_out = LePMIR_n_LTActPumpRPMTgt;
        rtb_LePMIR_b_LTActPumpRPMTgtnFA_out = false;

        /* Transition: '<S1610>:18' */
    }
    else
    {
        /* Transition: '<S1610>:4' */
        rtb_LePMIR_b_LTActPumpRPMTgtnFA_out = true;
    }

    /* End of Chart: '<S232>/PokePMIR_n_LTActPumpRPMTgtChrt' */

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S232>/VePMIR_b_LTActPumpRPMTgtnFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTActPumpRPMTgt_VePMIR_b_LTActPumpRPMTgtFA_write_IRV
        (rtb_LePMIR_b_LTActPumpRPMTgtnFA_out);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S232>/VePMIR_n_LTActPumpRPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTActPumpRPMTgt_LTActPumpPmpRPMTgt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_LTActPumpRPMTgt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_LTActPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_LTPsvPump2RPMAct(VAR(float32, AUTOMATIC)
    LePMIR_n_LTPsvPump2RPMAct, VAR(boolean, AUTOMATIC)
    LePMIR_b_LTPsvPump2RPMActFA)
{
    boolean rtb_LePMIR_b_LTPsvPump2RPMActnFA_out;
    boolean rtb_LePMIR_b_LTPsvPump2RPMActnSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_LTPsvPump2RPMAct' */
    /* Chart: '<S233>/PokePMIR_n_LTPsvPump2RPMActChrt' incorporates:
     *  SignalConversion generated from: '<S233>/LePMIR_b_LTPsvPump2RPMActFA'
     *  SignalConversion generated from: '<S233>/LePMIR_n_LTPsvPump2RPMAct'
     */
    /* Gateway: PokePMIR_n_LTPsvPump2RPMAct/PokePMIR_n_LTPsvPump2RPMActChrt */
    /* During: PokePMIR_n_LTPsvPump2RPMAct/PokePMIR_n_LTPsvPump2RPMActChrt */
    /* Entry Internal: PokePMIR_n_LTPsvPump2RPMAct/PokePMIR_n_LTPsvPump2RPMActChrt */
    /* Transition: '<S1611>:2' */
    if (!LePMIR_b_LTPsvPump2RPMActFA)
    {
        /* Transition: '<S1611>:3' */
        /* Transition: '<S1611>:15' */
        PMIR_ac_B.LePMIR_n_LTPsvPump2RPMAct_out = LePMIR_n_LTPsvPump2RPMAct;
        rtb_LePMIR_b_LTPsvPump2RPMActnFA_out = false;
        rtb_LePMIR_b_LTPsvPump2RPMActnSNA_out = false;

        /* Transition: '<S1611>:18' */
    }
    else
    {
        /* Transition: '<S1611>:4' */
        rtb_LePMIR_b_LTPsvPump2RPMActnFA_out = true;
        rtb_LePMIR_b_LTPsvPump2RPMActnSNA_out = true;
    }

    /* End of Chart: '<S233>/PokePMIR_n_LTPsvPump2RPMActChrt' */

    /* Merge: '<Root>/Merge_133' incorporates:
     *  SignalConversion generated from: '<S233>/VePMIR_b_LTPsvPump2RPMActnFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPump2RPMAct_VePMIR_b_LTPsvPump2RPMActFA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2RPMActnFA_out);

    /* Merge: '<Root>/Merge_132' incorporates:
     *  SignalConversion generated from: '<S233>/VePMIR_b_LTPsvPump2RPMActnSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPump2RPMAct_VePMIR_b_LTPsvPump2RPMActSNA_write_IRV
        (rtb_LePMIR_b_LTPsvPump2RPMActnSNA_out);

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S233>/VePMIR_n_LTPsvPump2RPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPump2RPMAct_LTPsvPump2RPMAct_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_LTPsvPump2RPMAct_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_LTPsvPump2RPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_LTPsvPumpRPMAct(VAR(float32, AUTOMATIC)
    LePMIR_n_LTPsvPumpRPMAct, VAR(boolean, AUTOMATIC) LePMIR_b_LTPsvPumpRPMActFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpRPMActnFA_out;
    boolean rtb_LePMIR_b_LTPsvPumpRPMActnSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_LTPsvPumpRPMAct' */
    /* Chart: '<S234>/PokePMIR_n_LTPsvPumpRPMActChrt' incorporates:
     *  SignalConversion generated from: '<S234>/LePMIR_b_LTPsvPumpRPMActFA'
     *  SignalConversion generated from: '<S234>/LePMIR_n_LTPsvPumpRPMAct'
     */
    /* Gateway: PokePMIR_n_LTPsvPumpRPMAct/PokePMIR_n_LTPsvPumpRPMActChrt */
    /* During: PokePMIR_n_LTPsvPumpRPMAct/PokePMIR_n_LTPsvPumpRPMActChrt */
    /* Entry Internal: PokePMIR_n_LTPsvPumpRPMAct/PokePMIR_n_LTPsvPumpRPMActChrt */
    /* Transition: '<S1612>:2' */
    if (!LePMIR_b_LTPsvPumpRPMActFA)
    {
        /* Transition: '<S1612>:3' */
        /* Transition: '<S1612>:15' */
        PMIR_ac_B.LePMIR_n_LTPsvPumpRPMAct_out = LePMIR_n_LTPsvPumpRPMAct;
        rtb_LePMIR_b_LTPsvPumpRPMActnFA_out = false;
        rtb_LePMIR_b_LTPsvPumpRPMActnSNA_out = false;

        /* Transition: '<S1612>:18' */
    }
    else
    {
        /* Transition: '<S1612>:4' */
        rtb_LePMIR_b_LTPsvPumpRPMActnFA_out = true;
        rtb_LePMIR_b_LTPsvPumpRPMActnSNA_out = true;
    }

    /* End of Chart: '<S234>/PokePMIR_n_LTPsvPumpRPMActChrt' */

    /* Merge: '<Root>/Merge_177' incorporates:
     *  SignalConversion generated from: '<S234>/VePMIR_b_LTPsvPumpRPMActnFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPumpRPMAct_VePMIR_b_LTPsvPumpRPMActFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpRPMActnFA_out);

    /* Merge: '<Root>/Merge_176' incorporates:
     *  SignalConversion generated from: '<S234>/VePMIR_b_LTPsvPumpRPMActnSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPumpRPMAct_VePMIR_b_LTPsvPumpRPMActSNA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpRPMActnSNA_out);

    /* Merge: '<Root>/Merge_178' incorporates:
     *  SignalConversion generated from: '<S234>/VePMIR_n_LTPsvPumpRPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPumpRPMAct_LTPsvPumpRPMAct_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_LTPsvPumpRPMAct_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_LTPsvPumpRPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_LTPsvPumpRPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_n_LTPsvPumpRPMTgt, VAR(boolean, AUTOMATIC) LePMIR_b_LTPsvPumpRPMTgtFA)
{
    boolean rtb_LePMIR_b_LTPsvPumpRPMTgtnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_LTPsvPumpRPMTgt' */
    /* Chart: '<S235>/PokePMIR_n_LTPsvPumpRPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S235>/LePMIR_b_LTPsvPumpRPMTgtFA'
     *  SignalConversion generated from: '<S235>/LePMIR_n_LTPsvPumpRPMTgt'
     */
    /* Gateway: PokePMIR_n_LTPsvPumpRPMTgt/PokePMIR_n_LTPsvPumpRPMTgtChrt */
    /* During: PokePMIR_n_LTPsvPumpRPMTgt/PokePMIR_n_LTPsvPumpRPMTgtChrt */
    /* Entry Internal: PokePMIR_n_LTPsvPumpRPMTgt/PokePMIR_n_LTPsvPumpRPMTgtChrt */
    /* Transition: '<S1613>:2' */
    if (!LePMIR_b_LTPsvPumpRPMTgtFA)
    {
        /* Transition: '<S1613>:3' */
        /* Transition: '<S1613>:15' */
        PMIR_ac_B.LePMIR_n_LTPsvPumpRPMTgt_out = LePMIR_n_LTPsvPumpRPMTgt;
        rtb_LePMIR_b_LTPsvPumpRPMTgtnFA_out = false;

        /* Transition: '<S1613>:18' */
    }
    else
    {
        /* Transition: '<S1613>:4' */
        rtb_LePMIR_b_LTPsvPumpRPMTgtnFA_out = true;
    }

    /* End of Chart: '<S235>/PokePMIR_n_LTPsvPumpRPMTgtChrt' */

    /* Merge: '<Root>/Merge_179' incorporates:
     *  SignalConversion generated from: '<S235>/VePMIR_b_LTPsvPumpRPMTgtnFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPumpRPMTgt_VePMIR_b_LTPsvPumpRPMTgtFA_write_IRV
        (rtb_LePMIR_b_LTPsvPumpRPMTgtnFA_out);

    /* Merge: '<Root>/Merge_180' incorporates:
     *  SignalConversion generated from: '<S235>/VePMIR_n_LTPsvPumpRPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_n_LTPsvPumpRPMTgt_LTPsvPmpRPMTgt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_LTPsvPumpRPMTgt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_LTPsvPumpRPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_TransAuxPmp2_RPMAct(VAR(float32, AUTOMATIC)
    LePMIR_n_TransAuxPmp2_RPMAct, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_RPMActFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_RPMActFA_out;
    boolean rtb_LePMIR_b_TransAuxPmp2_RPMActSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_TransAuxPmp2_RPMAct' */
    /* Chart: '<S236>/PokePMIR_n_TransAuxPmp2_RPMActChrt' incorporates:
     *  SignalConversion generated from: '<S236>/LePMIR_b_TransAuxPmp2_RPMActFA'
     *  SignalConversion generated from: '<S236>/LePMIR_n_TransAuxPmp2_RPMAct'
     */
    /* Gateway: PokePMIR_n_TransAuxPmp2_RPMAct/PokePMIR_n_TransAuxPmp2_RPMActChrt */
    /* During: PokePMIR_n_TransAuxPmp2_RPMAct/PokePMIR_n_TransAuxPmp2_RPMActChrt */
    /* Entry Internal: PokePMIR_n_TransAuxPmp2_RPMAct/PokePMIR_n_TransAuxPmp2_RPMActChrt */
    /* Transition: '<S1614>:2' */
    if (!LePMIR_b_TransAuxPmp2_RPMActFA)
    {
        /* Transition: '<S1614>:3' */
        /* Transition: '<S1614>:15' */
        PMIR_ac_B.LePMIR_n_TransAuxPmp2_RPMAct_out =
            LePMIR_n_TransAuxPmp2_RPMAct;
        rtb_LePMIR_b_TransAuxPmp2_RPMActFA_out = false;
        rtb_LePMIR_b_TransAuxPmp2_RPMActSNA_out = false;

        /* Transition: '<S1614>:18' */
    }
    else
    {
        /* Transition: '<S1614>:4' */
        rtb_LePMIR_b_TransAuxPmp2_RPMActFA_out = true;
        rtb_LePMIR_b_TransAuxPmp2_RPMActSNA_out = true;
    }

    /* End of Chart: '<S236>/PokePMIR_n_TransAuxPmp2_RPMActChrt' */

    /* Merge: '<Root>/Merge_206' incorporates:
     *  SignalConversion generated from: '<S236>/VePMIR_b_TransAuxPmp2_RPMActFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp2_RPMAct_VePMIR_b_TransAuxPmp2_RPMActFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_RPMActFA_out);

    /* Merge: '<Root>/Merge_208' incorporates:
     *  SignalConversion generated from: '<S236>/VePMIR_b_TransAuxPmp2_RPMActSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp2_RPMAct_VePMIR_b_TransAuxPmp2_RPMActSNA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_RPMActSNA_out);

    /* Merge: '<Root>/Merge_207' incorporates:
     *  SignalConversion generated from: '<S236>/VePMIR_n_TransAuxPmp2_RPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp2_RPMAct_TransAuxPmp2_RPMAct_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_TransAuxPmp2_RPMAct_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_TransAuxPmp2_RPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_TransAuxPmp2_RPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_n_TransAuxPmp2_RPMTgt, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp2_RPMTgtFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp2_RPMTgtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_TransAuxPmp2_RPMTgt' */
    /* Chart: '<S237>/PokePMIR_n_TransAuxPmp2_RPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S237>/LePMIR_b_TransAuxPmp2_RPMTgtFA'
     *  SignalConversion generated from: '<S237>/LePMIR_n_TransAuxPmp2_RPMTgt'
     */
    /* Gateway: PokePMIR_n_TransAuxPmp2_RPMTgt/PokePMIR_n_TransAuxPmp2_RPMTgtChrt */
    /* During: PokePMIR_n_TransAuxPmp2_RPMTgt/PokePMIR_n_TransAuxPmp2_RPMTgtChrt */
    /* Entry Internal: PokePMIR_n_TransAuxPmp2_RPMTgt/PokePMIR_n_TransAuxPmp2_RPMTgtChrt */
    /* Transition: '<S1615>:2' */
    if (!LePMIR_b_TransAuxPmp2_RPMTgtFA)
    {
        /* Transition: '<S1615>:3' */
        /* Transition: '<S1615>:15' */
        PMIR_ac_B.LePMIR_n_TransAuxPmp2_RPMTgt_out =
            LePMIR_n_TransAuxPmp2_RPMTgt;
        rtb_LePMIR_b_TransAuxPmp2_RPMTgtFA_out = false;

        /* Transition: '<S1615>:18' */
    }
    else
    {
        /* Transition: '<S1615>:4' */
        rtb_LePMIR_b_TransAuxPmp2_RPMTgtFA_out = true;
    }

    /* End of Chart: '<S237>/PokePMIR_n_TransAuxPmp2_RPMTgtChrt' */

    /* Merge: '<Root>/Merge_209' incorporates:
     *  SignalConversion generated from: '<S237>/VePMIR_b_TransAuxPmp2_RPMTgtFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp2_RPMTgt_VePMIR_b_TransAuxPmp2_RPMTgtFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp2_RPMTgtFA_out);

    /* Merge: '<Root>/Merge_210' incorporates:
     *  SignalConversion generated from: '<S237>/VePMIR_n_TransAuxPmp2_RPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp2_RPMTgt_TransAuxPmp2_RPMTgt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_TransAuxPmp2_RPMTgt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_TransAuxPmp2_RPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_TransAuxPmp_RPMAct(VAR(float32, AUTOMATIC)
    LePMIR_n_TransAuxPmp_RPMAct, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_RPMActFA)
{
    boolean rtb_LePMIR_b_TransAuxPmp_RPMActFA_out;
    boolean rtb_LePMIR_b_TransAuxPmp_RPMActSNA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_TransAuxPmp_RPMAct' */
    /* Chart: '<S238>/PokePMIR_n_TransAuxPmp_RPMActChrt' incorporates:
     *  SignalConversion generated from: '<S238>/LePMIR_b_TransAuxPmp_RPMActFA'
     *  SignalConversion generated from: '<S238>/LePMIR_n_TransAuxPmp_RPMAct'
     */
    /* Gateway: PokePMIR_n_TransAuxPmp_RPMAct/PokePMIR_n_TransAuxPmp_RPMActChrt */
    /* During: PokePMIR_n_TransAuxPmp_RPMAct/PokePMIR_n_TransAuxPmp_RPMActChrt */
    /* Entry Internal: PokePMIR_n_TransAuxPmp_RPMAct/PokePMIR_n_TransAuxPmp_RPMActChrt */
    /* Transition: '<S1616>:2' */
    if (!LePMIR_b_TransAuxPmp_RPMActFA)
    {
        /* Transition: '<S1616>:3' */
        /* Transition: '<S1616>:15' */
        PMIR_ac_B.LePMIR_n_TransAuxPmp_RPMAct_out = LePMIR_n_TransAuxPmp_RPMAct;
        rtb_LePMIR_b_TransAuxPmp_RPMActFA_out = false;
        rtb_LePMIR_b_TransAuxPmp_RPMActSNA_out = false;

        /* Transition: '<S1616>:18' */
    }
    else
    {
        /* Transition: '<S1616>:4' */
        rtb_LePMIR_b_TransAuxPmp_RPMActFA_out = true;
        rtb_LePMIR_b_TransAuxPmp_RPMActSNA_out = true;
    }

    /* End of Chart: '<S238>/PokePMIR_n_TransAuxPmp_RPMActChrt' */

    /* Merge: '<Root>/Merge_242' incorporates:
     *  SignalConversion generated from: '<S238>/VePMIR_b_TransAuxPmp_RPMActFA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp_RPMAct_VePMIR_b_TransAuxPmp_RPMActFA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp_RPMActFA_out);

    /* Merge: '<Root>/Merge_241' incorporates:
     *  SignalConversion generated from: '<S238>/VePMIR_b_TransAuxPmp_RPMActSNA_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp_RPMAct_VePMIR_b_TransAuxPmp_RPMActSNA_write_IRV
        (rtb_LePMIR_b_TransAuxPmp_RPMActSNA_out);

    /* Merge: '<Root>/Merge_240' incorporates:
     *  SignalConversion generated from: '<S238>/VePMIR_n_TransAuxPmp_RPMAct_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp_RPMAct_TransAuxPmp_RPMAct_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_TransAuxPmp_RPMAct_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_TransAuxPmp_RPMAct' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_n_TransAuxPmp_RPMTgt(VAR(float32, AUTOMATIC)
    LePMIR_n_TransAuxPmp_RPMTgt, VAR(boolean, AUTOMATIC)
    LePMIR_b_TransAuxPmp_RPMTgtFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_n_TransAuxPmp_RPMTgt' */
    /* Chart: '<S239>/PokePMIR_n_TransAuxPmp_RPMTgtChrt' incorporates:
     *  SignalConversion generated from: '<S239>/LePMIR_b_TransAuxPmp_RPMTgtFA'
     *  SignalConversion generated from: '<S239>/LePMIR_n_TransAuxPmp_RPMTgt'
     */
    /* Gateway: PokePMIR_n_TransAuxPmp_RPMTgt/PokePMIR_n_TransAuxPmp_RPMTgtChrt */
    /* During: PokePMIR_n_TransAuxPmp_RPMTgt/PokePMIR_n_TransAuxPmp_RPMTgtChrt */
    /* Entry Internal: PokePMIR_n_TransAuxPmp_RPMTgt/PokePMIR_n_TransAuxPmp_RPMTgtChrt */
    /* Transition: '<S1617>:2' */
    if (!LePMIR_b_TransAuxPmp_RPMTgtFA)
    {
        /* Transition: '<S1617>:3' */
        /* Transition: '<S1617>:15' */
        PMIR_ac_B.LePMIR_n_TransAuxPmp_RPMTgt_out = LePMIR_n_TransAuxPmp_RPMTgt;

        /* Transition: '<S1617>:18' */
    }
    else
    {
        /* Transition: '<S1617>:4' */
    }

    /* End of Chart: '<S239>/PokePMIR_n_TransAuxPmp_RPMTgtChrt' */

    /* Merge: '<Root>/Merge_243' incorporates:
     *  SignalConversion generated from: '<S239>/VePMIR_n_TransAuxPmp_RPMTgt_write'
     * */
    Rte_IrvWrite_PokePMIR_n_TransAuxPmp_RPMTgt_TransAuxPmp_RPMTgt_INIT_write_IRV
        (PMIR_ac_B.LePMIR_n_TransAuxPmp_RPMTgt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_n_TransAuxPmp_RPMTgt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_HT_AuxPmp_Ver(VAR(uint8, AUTOMATIC)
    LePMIR_y_HT_AuxPmp_Ver)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_HT_AuxPmp_Ver' */
    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S240>/LePMIR_y_HT_AuxPmp_Ver'
     *  SignalConversion generated from: '<S240>/VePMIR_y_HT_AuxPmp_Ver_write'
     */
    /* Gateway: PokePMIR_y_HT_AuxPmp_Ver/PokePMIR_y_HT_AuxPmp_VerChrt */
    /* During: PokePMIR_y_HT_AuxPmp_Ver/PokePMIR_y_HT_AuxPmp_VerChrt */
    /* Entry Internal: PokePMIR_y_HT_AuxPmp_Ver/PokePMIR_y_HT_AuxPmp_VerChrt */
    /* Transition: '<S1618>:2' */
    Rte_IrvWrite_PokePMIR_y_HT_AuxPmp_Ver_HT_AuxPmp_Ver_INIT_write_IRV
        (LePMIR_y_HT_AuxPmp_Ver);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_HT_AuxPmp_Ver' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_LTActPump_Ver(VAR(uint8, AUTOMATIC)
    LePMIR_y_LTActPump_Ver)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_LTActPump_Ver' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S241>/LePMIR_y_LTActPump_Ver'
     *  SignalConversion generated from: '<S241>/VePMIR_y_LTActPump_Ver_write'
     */
    /* Gateway: PokePMIR_y_LTActPump_Ver/PokePMIR_y_LTActPump_VerChrt */
    /* During: PokePMIR_y_LTActPump_Ver/PokePMIR_y_LTActPump_VerChrt */
    /* Entry Internal: PokePMIR_y_LTActPump_Ver/PokePMIR_y_LTActPump_VerChrt */
    /* Transition: '<S1619>:2' */
    Rte_IrvWrite_PokePMIR_y_LTActPump_Ver_LTActPump_Ver_INIT_write_IRV
        (LePMIR_y_LTActPump_Ver);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_LTActPump_Ver' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_LTPsvPump2_Ver(VAR(uint8, AUTOMATIC)
    LePMIR_y_LTPsvPump2_Ver)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_LTPsvPump2_Ver' */
    /* Merge: '<Root>/Merge_141' incorporates:
     *  SignalConversion generated from: '<S242>/LePMIR_y_LTPsvPump2_Ver'
     *  SignalConversion generated from: '<S242>/VePMIR_y_LTPsvPump2_Ver_write'
     */
    /* Gateway: PokePMIR_y_LTPsvPump2_Ver/PokePMIR_y_LTPsvPump2_VerChrt */
    /* During: PokePMIR_y_LTPsvPump2_Ver/PokePMIR_y_LTPsvPump2_VerChrt */
    /* Entry Internal: PokePMIR_y_LTPsvPump2_Ver/PokePMIR_y_LTPsvPump2_VerChrt */
    /* Transition: '<S1620>:2' */
    Rte_IrvWrite_PokePMIR_y_LTPsvPump2_Ver_LTPsvPump2_Ver_INIT_write_IRV
        (LePMIR_y_LTPsvPump2_Ver);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_LTPsvPump2_Ver' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_LTPsvPump_Ver(VAR(uint8, AUTOMATIC)
    LePMIR_y_LTPsvPump_Ver)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_LTPsvPump_Ver' */
    /* Merge: '<Root>/Merge_187' incorporates:
     *  SignalConversion generated from: '<S243>/LePMIR_y_LTPsvPump_Ver'
     *  SignalConversion generated from: '<S243>/VePMIR_y_LTPsvPump_Ver_write'
     */
    /* Gateway: PokePMIR_y_LTPsvPump_Ver/PokePMIR_y_LTPsvPump_VerChrt */
    /* During: PokePMIR_y_LTPsvPump_Ver/PokePMIR_y_LTPsvPump_VerChrt */
    /* Entry Internal: PokePMIR_y_LTPsvPump_Ver/PokePMIR_y_LTPsvPump_VerChrt */
    /* Transition: '<S1621>:2' */
    Rte_IrvWrite_PokePMIR_y_LTPsvPump_Ver_LTPsvPump_Ver_INIT_write_IRV
        (LePMIR_y_LTPsvPump_Ver);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_LTPsvPump_Ver' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_TransAuxPmp2_TAP_HW_VER(VAR(uint8, AUTOMATIC)
    LePMIR_y_TransAuxPmp2_TAP_HW_VER)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_TransAuxPmp2_TAP_HW_VER' */
    /* Merge: '<Root>/Merge_220' incorporates:
     *  SignalConversion generated from: '<S244>/LePMIR_y_TransAuxPmp2_TAP_HW_VER'
     *  SignalConversion generated from: '<S244>/VePMIR_y_TransAuxPmp2_TAP_HW_VER_write'
     */
    /* Gateway: PokePMIR_y_TransAuxPmp2_TAP_HW_VER/PokePMIR_y_TransAuxPmp2_TAP_HW_VERChrt */
    /* During: PokePMIR_y_TransAuxPmp2_TAP_HW_VER/PokePMIR_y_TransAuxPmp2_TAP_HW_VERChrt */
    /* Entry Internal: PokePMIR_y_TransAuxPmp2_TAP_HW_VER/PokePMIR_y_TransAuxPmp2_TAP_HW_VERChrt */
    /* Transition: '<S1622>:2' */
    Rte_IrvWrite_PokePMIR_y_TransAuxPmp2_TAP_HW_VER_TransAuxPmp2_TAP_HW_VER_INIT_write_IRV
        (LePMIR_y_TransAuxPmp2_TAP_HW_VER);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_TransAuxPmp2_TAP_HW_VER' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_TransAuxPmp2_TAP_SW_VER(VAR(uint8, AUTOMATIC)
    LePMIR_y_TransAuxPmp2_TAP_SW_VER)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_TransAuxPmp2_TAP_SW_VER' */
    /* Merge: '<Root>/Merge_221' incorporates:
     *  SignalConversion generated from: '<S245>/LePMIR_y_TransAuxPmp2_TAP_SW_VER'
     *  SignalConversion generated from: '<S245>/VePMIR_y_TransAuxPmp2_TAP_SW_VER_write'
     */
    /* Gateway: PokePMIR_y_TransAuxPmp2_TAP_SW_VER/PokePMIR_y_TransAuxPmp2_TAP_SW_VERChrt */
    /* During: PokePMIR_y_TransAuxPmp2_TAP_SW_VER/PokePMIR_y_TransAuxPmp2_TAP_SW_VERChrt */
    /* Entry Internal: PokePMIR_y_TransAuxPmp2_TAP_SW_VER/PokePMIR_y_TransAuxPmp2_TAP_SW_VERChrt */
    /* Transition: '<S1623>:2' */
    Rte_IrvWrite_PokePMIR_y_TransAuxPmp2_TAP_SW_VER_TransAuxPmp2_TAP_SW_VER_INIT_write_IRV
        (LePMIR_y_TransAuxPmp2_TAP_SW_VER);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_TransAuxPmp2_TAP_SW_VER' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_TransAuxPmp_TAP_HW_VER(VAR(uint8, AUTOMATIC)
    LePMIR_y_TransAuxPmp_TAP_HW_VER)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_TransAuxPmp_TAP_HW_VER' */
    /* Merge: '<Root>/Merge_246' incorporates:
     *  SignalConversion generated from: '<S246>/LePMIR_y_TransAuxPmp_TAP_HW_VER'
     *  SignalConversion generated from: '<S246>/VePMIR_y_TransAuxPmp_TAP_HW_VER_write'
     */
    /* Gateway: PokePMIR_y_TransAuxPmp_TAP_HW_VER/PokePMIR_y_TransAuxPmp_TAP_HW_VERChrt */
    /* During: PokePMIR_y_TransAuxPmp_TAP_HW_VER/PokePMIR_y_TransAuxPmp_TAP_HW_VERChrt */
    /* Entry Internal: PokePMIR_y_TransAuxPmp_TAP_HW_VER/PokePMIR_y_TransAuxPmp_TAP_HW_VERChrt */
    /* Transition: '<S1624>:2' */
    Rte_IrvWrite_PokePMIR_y_TransAuxPmp_TAP_HW_VER_TransAuxPmp_TAP_HW_VER_INIT_write_IRV
        (LePMIR_y_TransAuxPmp_TAP_HW_VER);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_TransAuxPmp_TAP_HW_VER' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMIR_y_TransAuxPmp_TAP_SW_VER(VAR(uint8, AUTOMATIC)
    LePMIR_y_TransAuxPmp_TAP_SW_VER)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMIR_y_TransAuxPmp_TAP_SW_VER' */
    /* Merge: '<Root>/Merge_247' incorporates:
     *  SignalConversion generated from: '<S247>/LePMIR_y_TransAuxPmp_TAP_SW_VER'
     *  SignalConversion generated from: '<S247>/VePMIR_y_TransAuxPmp_TAP_SW_VER_write'
     */
    /* Gateway: PokePMIR_y_TransAuxPmp_TAP_SW_VER/PokePMIR_y_TransAuxPmp_TAP_SW_VERChrt */
    /* During: PokePMIR_y_TransAuxPmp_TAP_SW_VER/PokePMIR_y_TransAuxPmp_TAP_SW_VERChrt */
    /* Entry Internal: PokePMIR_y_TransAuxPmp_TAP_SW_VER/PokePMIR_y_TransAuxPmp_TAP_SW_VERChrt */
    /* Transition: '<S1625>:2' */
    Rte_IrvWrite_PokePMIR_y_TransAuxPmp_TAP_SW_VER_TransAuxPmp_TAP_SW_VER_INIT_write_IRV
        (LePMIR_y_TransAuxPmp_TAP_SW_VER);

    /* End of Outputs for SubSystem: '<Root>/PokePMIR_y_TransAuxPmp_TAP_SW_VER' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMPR_e_LTPsvPump2_PstRnSt(VAR
    (TeTMIR_e_ECM_LTP_FanAftRunRq, AUTOMATIC) LePMPR_e_LTPsvPump2_PstRnSt, VAR
    (boolean, AUTOMATIC) LePMPR_b_LTPsvPump2_PstRnStFA)
{
    boolean rtb_LePMPR_b_LTPsvPump2_PstRnStFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMPR_e_LTPsvPump2_PstRnSt' */
    /* Chart: '<S248>/PokePMPR_e_LTPsvPump2_PstRnStChrt' incorporates:
     *  SignalConversion generated from: '<S248>/LePMPR_b_LTPsvPump2_PstRnStFA'
     *  SignalConversion generated from: '<S248>/LePMPR_e_LTPsvPump2_PstRnSt'
     */
    /* Gateway: PokePMPR_e_LTPsvPump2_PstRnSt/PokePMPR_e_LTPsvPump2_PstRnStChrt */
    /* During: PokePMPR_e_LTPsvPump2_PstRnSt/PokePMPR_e_LTPsvPump2_PstRnStChrt */
    /* Entry Internal: PokePMPR_e_LTPsvPump2_PstRnSt/PokePMPR_e_LTPsvPump2_PstRnStChrt */
    /* Transition: '<S1626>:2' */
    if (!LePMPR_b_LTPsvPump2_PstRnStFA)
    {
        /* Transition: '<S1626>:3' */
        /* Transition: '<S1626>:15' */
        PMIR_ac_B.LePMPR_e_LTPsvPump2_PstRnSt_out = LePMPR_e_LTPsvPump2_PstRnSt;
        rtb_LePMPR_b_LTPsvPump2_PstRnStFA_out_o = false;

        /* Transition: '<S1626>:18' */
    }
    else
    {
        /* Transition: '<S1626>:4' */
        rtb_LePMPR_b_LTPsvPump2_PstRnStFA_out_o = true;
    }

    /* End of Chart: '<S248>/PokePMPR_e_LTPsvPump2_PstRnStChrt' */

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2_PstRnStFA' incorporates:
     *  SignalConversion generated from: '<S248>/VePMPR_b_LTPsvPump2_PstRnStFA'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2_PstRnStFA_Value
        (rtb_LePMPR_b_LTPsvPump2_PstRnStFA_out_o);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2_PstRnSt' incorporates:
     *  SignalConversion generated from: '<S248>/VePMPR_e_LTPsvPump2_PstRnSt'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2_PstRnSt_Value
        (PMIR_ac_B.LePMPR_e_LTPsvPump2_PstRnSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMPR_e_LTPsvPump2_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PokePMPR_e_LTPsvPump_PstRnSt(VAR
    (TeTMIR_e_ECM_LTP_FanAftRunRq, AUTOMATIC) LePMPR_e_LTPsvPump_PstRnSt, VAR
    (boolean, AUTOMATIC) LePMPR_b_LTPsvPump_PstRnStFA)
{
    boolean rtb_LePMPR_b_LTPsvPump_PstRnStFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMPR_e_LTPsvPump_PstRnSt' */
    /* Chart: '<S249>/PokePMPR_e_LTPsvPump_PstRnStChrt' incorporates:
     *  SignalConversion generated from: '<S249>/LePMPR_b_LTPsvPump_PstRnStFA'
     *  SignalConversion generated from: '<S249>/LePMPR_e_LTPsvPump_PstRnSt'
     */
    /* Gateway: PokePMPR_e_LTPsvPump_PstRnSt/PokePMPR_e_LTPsvPump_PstRnStChrt */
    /* During: PokePMPR_e_LTPsvPump_PstRnSt/PokePMPR_e_LTPsvPump_PstRnStChrt */
    /* Entry Internal: PokePMPR_e_LTPsvPump_PstRnSt/PokePMPR_e_LTPsvPump_PstRnStChrt */
    /* Transition: '<S1627>:2' */
    if (!LePMPR_b_LTPsvPump_PstRnStFA)
    {
        /* Transition: '<S1627>:3' */
        /* Transition: '<S1627>:15' */
        PMIR_ac_B.LePMPR_e_LTPsvPump_PstRnSt_out = LePMPR_e_LTPsvPump_PstRnSt;
        rtb_LePMPR_b_LTPsvPump_PstRnStFA_out_o = false;

        /* Transition: '<S1627>:18' */
    }
    else
    {
        /* Transition: '<S1627>:4' */
        rtb_LePMPR_b_LTPsvPump_PstRnStFA_out_o = true;
    }

    /* End of Chart: '<S249>/PokePMPR_e_LTPsvPump_PstRnStChrt' */

    /* Outport: '<Root>/VePMIR_b_LTPsvPump_PstRnStFA' incorporates:
     *  SignalConversion generated from: '<S249>/VePMPR_b_LTPsvPump_PstRnStFA'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump_PstRnStFA_Value
        (rtb_LePMPR_b_LTPsvPump_PstRnStFA_out_o);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump_PstRnSt' incorporates:
     *  SignalConversion generated from: '<S249>/VePMPR_e_LTPsvPump_PstRnSt'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump_PstRnSt_Value
        (PMIR_ac_B.LePMPR_e_LTPsvPump_PstRnSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMPR_e_LTPsvPump_PstRnSt' */
}

/* Output function */
FUNC(void, PMIR_CODE) PMIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PMIR_PwrOn'
     */
    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* SignalConversion generated from: '<S1177>/ECM_LTPsvPmpRq_FA_INIT_write' incorporates:
     *  Constant: '<S1363>/Calib'
     */
    PMIR_ac_B.OutportBufferForECM_LTPsvPmpRq_FA_INIT_w =
        KePMIR_b_ECM_LTPsvPumpRq_FA_INIT;

    /* SignalConversion generated from: '<S1177>/ECM_LTPsvPmpRq_INIT_write' incorporates:
     *  Constant: '<S1357>/Calib'
     */
    PMIR_ac_B.OutportBufferForECM_LTPsvPmpRq_INIT_writ =
        KePMIR_Pct_ECM_LTPsvPumpRq_INIT;

    /* SignalConversion generated from: '<S1177>/LTPP_DVC_FlwRt_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1354>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_FlwRt_IO_Cntl_I =
        PMIR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S1177>/LTPP_DVC_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1355>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_IO_Cntl_INIT_wr =
        PMIR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S1177>/LTPP_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1358>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_Pct_INIT_write =
        KePMIR_Pct_LTPP_DVC_Cmd_INIT;

    /* SignalConversion generated from: '<S1177>/LTPP_DVC_RPM_PEClFlwRt_INIT_write' incorporates:
     *  Constant: '<S1392>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_RPM_PEClFlwRt_I =
        KePMIR_n_LTPP_DVC_RPM_PEClFlwRt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPSVPumpCrnt_INIT_write' incorporates:
     *  Constant: '<S1356>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPSVPumpCrnt_INIT_write =
        KePMIR_I_LTPsvPumpCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmpAirPrsntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1364>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpAirPrsntErr_FA_I =
        KePMIR_b_LTPsvPumpAirPrsntErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmpAirPrsntErr_INIT_write' incorporates:
     *  Constant: '<S1382>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpAirPrsntErr_INIT =
        KePMIR_e_LTPsvPumpAirPrsntErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmpProdSuplr_ID_INIT_write' incorporates:
     *  Constant: '<S1395>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpProdSuplr_ID_INI =
        KePMIR_y_LTPsvPumpProdSuplr_ID_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmpRPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1374>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpRPMTgt_FA_INIT_w =
        KePMIR_b_LTPsvPumpRPMTgt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmpRPMTgt_INIT_write' incorporates:
     *  Constant: '<S1394>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpRPMTgt_INIT_writ =
        KePMIR_n_LTPsvPumpRPMTgt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmp_ActSpd_INIT_write' incorporates:
     *  Constant: '<S1359>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp_ActSpd_INIT_wri =
        KePMIR_Pct_LTPsvPump_ActSpd_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmp_TgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1381>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp_TgtSpd_FA_INIT_ =
        KePMIR_b_LTPsvPump_TgtSpd_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmp_TgtSpd_INIT_write' incorporates:
     *  Constant: '<S1360>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp_TgtSpd_INIT_wri =
        KePMIR_Pct_LTPsvPump_TgtSpd_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpDeblock_FA_INIT_write' incorporates:
     *  Constant: '<S1366>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDeblock_FA_INIT =
        KePMIR_b_LTPsvPumpDeblock_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpDeblock_INIT_write' incorporates:
     *  Constant: '<S1383>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDeblock_INIT_wr =
        KePMIR_e_LTPsvPumpDeblock_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpDryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1367>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDryRun_FA_INIT_ =
        KePMIR_b_LTPsvPumpDryRun_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpDryRun_INIT_write' incorporates:
     *  Constant: '<S1384>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDryRun_INIT_wri =
        KePMIR_e_LTPsvPumpDryRun_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpFailsafe_INIT_write' incorporates:
     *  Constant: '<S1385>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpFailsafe_INIT_w =
        KePMIR_e_LTPsvPumpFailsafe_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpMntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1369>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpMntrRPM_FA_INIT =
        KePMIR_b_LTPsvPumpMntrRPM_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpMntrRPM_INIT_write' incorporates:
     *  Constant: '<S1386>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpMntrRPM_INIT_wr =
        KePMIR_e_LTPsvPumpMntrRPM_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpNodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1370>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpNodeErr_FA_INIT =
        KePMIR_b_LTPsvPumpNodeErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpNodeErr_INIT_write' incorporates:
     *  Constant: '<S1387>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpNodeErr_INIT_wr =
        KePMIR_e_LTPsvPumpNodeErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpOvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1372>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpOvrCrnt_FA_INIT =
        KePMIR_b_LTPsvPumpOvrCrnt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpOvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1389>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpOvrCrnt_INIT_wr =
        KePMIR_e_LTPsvPumpOvrCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpRPMAct_INIT_write' incorporates:
     *  Constant: '<S1393>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpRPMAct_INIT_wri =
        KePMIR_n_LTPsvPumpRPMAct_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpRespErr_INIT_write' incorporates:
     *  Constant: '<S1375>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpRespErr_INIT_wr =
        KePMIR_b_LTPsvPumpRespErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpSuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1376>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpSuppVltErr_FA_I =
        KePMIR_b_LTPsvPumpSuppVltErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpSuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1390>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpSuppVltErr_INIT =
        KePMIR_e_LTPsvPumpSuppVltErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpTemp_INIT_write' incorporates:
     *  Constant: '<S1361>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpTemp_INIT_write =
        KePMIR_T_LTPsvPumpTemp_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1378>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpVlt_FA_INIT_wri =
        KePMIR_b_LTPsvPumpVlt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPumpVlt_INIT_write' incorporates:
     *  Constant: '<S1362>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpVlt_INIT_write =
        KePMIR_U_LTPsvPumpVlt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1380>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_LmpHM_FA_INIT_ =
        KePMIR_b_LTPsvPump_LmpHM_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1391>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_LmpHM_INIT_wri =
        KePMIR_e_LTPsvPump_LmpHM_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump_Ver_INIT_write' incorporates:
     *  Constant: '<S1396>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_Ver_INIT_write =
        KePMIR_y_LTPsvPump_Ver_INIT;

    /* SignalConversion generated from: '<S1177>/LT_PsvPmpOT_FA_INIT_write' incorporates:
     *  Constant: '<S1371>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmpOT_FA_INIT_writ =
        KePMIR_b_LTPsvPumpOT_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LT_PsvPmpOT_INIT_write' incorporates:
     *  Constant: '<S1388>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmpOT_INIT_write = KePMIR_e_LTPsvPumpOT_INIT;

    /* SignalConversion generated from: '<S1177>/LTPP2_DVC_IO_Pct_INIT_write' incorporates:
     *  Constant: '<S1311>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTPP2_DVC_IO_Pct_INIT_wr =
        PMIR_ac_ConstB.Constant_gf;

    /* SignalConversion generated from: '<S1177>/LTPP2_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1313>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPP2_DVC_Pct_INIT_write =
        KePMIR_Pct_LTPP2_DVC_Cmd_INIT;

    /* SignalConversion generated from: '<S1177>/LTPSVPump2Crnt_INIT_write' incorporates:
     *  Constant: '<S1312>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPSVPump2Crnt_INIT_writ =
        KePMIR_I_LTPsvPump2Crnt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmp2ProdSuplrID_INIT_write' incorporates:
     *  Constant: '<S1346>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2ProdSuplrID_INI =
        KePMIR_y_LTPsvPump2ProdSuplr_ID_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmp2_ActSpd_INIT_write' incorporates:
     *  Constant: '<S1314>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2_ActSpd_INIT_wr =
        KePMIR_Pct_LTPsvPump2_ActSpd_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmp2_TgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1334>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2_TgtSpd_FA_INIT =
        KePMIR_b_LTPsvPump2_TgtSpd_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPmp2_TgtSpd_INIT_write' incorporates:
     *  Constant: '<S1315>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2_TgtSpd_INIT_wr =
        KePMIR_Pct_LTPsvPump2_TgtSpd_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2AirPresntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1318>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2AirPresntErr_F =
        KePMIR_b_LTPsvPump2AirPrsntErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2AirPresntErr_INIT_write' incorporates:
     *  Constant: '<S1335>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2AirPresntErr_I =
        KePMIR_e_LTPsvPump2AirPrsntErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2Deblock_FA_INIT_write' incorporates:
     *  Constant: '<S1320>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Deblock_FA_INI =
        KePMIR_b_LTPsvPump2Deblock_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2Deblock_INIT_write' incorporates:
     *  Constant: '<S1336>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Deblock_INIT_w =
        KePMIR_e_LTPsvPump2Deblock_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2DryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1321>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2DryRun_FA_INIT =
        KePMIR_b_LTPsvPump2DryRun_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2DryRun_INIT_write' incorporates:
     *  Constant: '<S1337>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2DryRun_INIT_wr =
        KePMIR_e_LTPsvPump2DryRun_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2Failsafe_INIT_write' incorporates:
     *  Constant: '<S1338>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Failsafe_INIT_ =
        KePMIR_e_LTPsvPump2Failsafe_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2MntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1323>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2MntrRPM_FA_INI =
        KePMIR_b_LTPsvPump2MntrRPM_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2MntrRPM_INIT_write' incorporates:
     *  Constant: '<S1339>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2MntrRPM_INIT_w =
        KePMIR_e_LTPsvPump2MntrRPM_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2NodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1324>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2NodeErr_FA_INI =
        KePMIR_b_LTPsvPump2NodeErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2NodeErr_INIT_write' incorporates:
     *  Constant: '<S1340>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2NodeErr_INIT_w =
        KePMIR_e_LTPsvPump2NodeErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2OvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1326>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2OvrCrnt_FA_INI =
        KePMIR_b_LTPsvPump2OvrCrnt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2OvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1342>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2OvrCrnt_INIT_w =
        KePMIR_e_LTPsvPump2OvrCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2RPMAct_INIT_write' incorporates:
     *  Constant: '<S1345>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2RPMAct_INIT_wr =
        KePMIR_n_LTPsvPump2RPMAct_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2RespErr_INIT_write' incorporates:
     *  Constant: '<S1328>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2RespErr_INIT_w =
        KePMIR_b_LTPsvPump2RespErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2SuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1329>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2SuppVltErr_FA_ =
        KePMIR_b_LTPsvPump2SuppVltErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2SuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1343>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2SuppVltErr_INI =
        KePMIR_e_LTPsvPump2SuppVltErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2Temp_INIT_write' incorporates:
     *  Constant: '<S1316>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Temp_INIT_writ =
        KePMIR_T_LTPsvPump2Temp_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2Vlt_FA_INIT_write' incorporates:
     *  Constant: '<S1331>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Vlt_FA_INIT_wr =
        KePMIR_b_LTPsvPump2Vlt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2Vlt_INIT_write' incorporates:
     *  Constant: '<S1317>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Vlt_INIT_write =
        KePMIR_U_LTPsvPump2Vlt_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1333>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_LmpHM_FA_INIT =
        KePMIR_b_LTPsvPump2_LmpHM_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1344>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_LmpHM_INIT_wr =
        KePMIR_e_LTPsvPump2_LmpHM_INIT;

    /* SignalConversion generated from: '<S1177>/LTPsvPump2_Ver_INIT_write' incorporates:
     *  Constant: '<S1347>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_Ver_INIT_writ =
        KePMIR_y_LTPsvPump2_Ver_INIT;

    /* SignalConversion generated from: '<S1177>/LT_PsvPmp2OT_FA_INIT_write' incorporates:
     *  Constant: '<S1325>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmp2OT_FA_INIT_wri =
        KePMIR_b_LTPsvPump2OT_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LT_PsvPmp2OT_INIT_write' incorporates:
     *  Constant: '<S1341>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmp2OT_INIT_write =
        KePMIR_e_LTPsvPump2OT_INIT;

    /* SignalConversion generated from: '<S1177>/LTAP_DVC_FlwRt_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1263>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_FlwRt_IO_Cntl_I =
        PMIR_ac_ConstB.Constant_l3;

    /* SignalConversion generated from: '<S1177>/LTAP_DVC_IO_Pct_INIT_write' incorporates:
     *  Constant: '<S1262>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_IO_Pct_INIT_wri =
        PMIR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S1177>/LTAP_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1265>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_Pct_INIT_write =
        KePMIR_Pct_LTAP_DVC_Cmd_INIT;

    /* SignalConversion generated from: '<S1177>/LTAP_DVC_RPM_BatClFlwRt_INIT_write' incorporates:
     *  Constant: '<S1300>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_RPM_BatClFlwRt_ =
        KePMIR_n_LTAP_DVC_RPM_BatClFlwRt_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpActSpd_INIT_write' incorporates:
     *  Constant: '<S1266>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpActSpd_INIT_wri =
        KePMIR_Pct_LTActPumpActSpd_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpAirPrsntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1271>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpAirPrsntErr_FA_ =
        KePMIR_b_LTActPumpAirPrsntErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpAirPrsntErr_INIT_write' incorporates:
     *  Constant: '<S1289>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpAirPrsntErr_INI =
        KePMIR_e_LTActPumpAirPrsntErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1272>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpCrnt_FA_INIT_wr =
        KePMIR_b_LTActPumpCrnt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpCrnt_INIT_write' incorporates:
     *  Constant: '<S1264>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpCrnt_INIT_write =
        KePMIR_I_LTActPumpCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpDeblock_FA_INIT_write' incorporates:
     *  Constant: '<S1273>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpDeblock_FA_INIT =
        KePMIR_b_LTActPumpDeblock_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpDeblock_INIT_write' incorporates:
     *  Constant: '<S1290>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpDeblock_INIT_wr =
        KePMIR_e_LTActPumpDeblock_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpDryRun_INIT_write' incorporates:
     *  Constant: '<S1291>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpDryRun_INIT_wri =
        KePMIR_e_LTActPumpDryRun_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpFailsafe_FA_INIT_write' incorporates:
     *  Constant: '<S1275>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpFailsafe_FA_INI =
        KePMIR_b_LTActPumpFailsafe_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpFailsafe_INIT_write' incorporates:
     *  Constant: '<S1292>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpFailsafe_INIT_w =
        KePMIR_e_LTActPumpFailsafe_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpLmpHM_INIT_write' incorporates:
     *  Constant: '<S1293>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpLmpHM_INIT_writ =
        KePMIR_e_LTActPumpLmpHM_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpMntrRPM_INIT_write' incorporates:
     *  Constant: '<S1294>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpMntrRPM_INIT_wr =
        KePMIR_e_LTActPumpMntrRPM_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpNodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1278>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpNodeErr_FA_INIT =
        KePMIR_b_LTActPumpNodeErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpNodeErr_INIT_write' incorporates:
     *  Constant: '<S1295>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpNodeErr_INIT_wr =
        KePMIR_e_LTActPumpNodeErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpOvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1279>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpOvrCrnt_FA_INIT =
        KePMIR_b_LTActPumpOvrCrnt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpOvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1296>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpOvrCrnt_INIT_wr =
        KePMIR_e_LTActPumpOvrCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpPmpRPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1282>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPmpRPMTgt_FA_IN =
        KePMIR_b_LTActPumpRPMTgt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpPmpRPMTgt_INIT_write' incorporates:
     *  Constant: '<S1302>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPmpRPMTgt_INIT_ =
        KePMIR_n_LTActPumpRPMTgt_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpProdSuplr_INIT_write' incorporates:
     *  Constant: '<S1303>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpProdSuplr_INIT_ =
        KePMIR_y_LTActPumpProdSuplr;

    /* SignalConversion generated from: '<S1177>/LTActPumpPstRnSt_FA_INIT_write' incorporates:
     *  Constant: '<S1280>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPstRnSt_FA_INIT =
        KePMIR_b_LTActPumpPstRnSt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpPstRnSt_INIT_write' incorporates:
     *  Constant: '<S1297>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPstRnSt_INIT_wr =
        KePMIR_e_LTActPumpPstRnSt_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpRPMAct_INIT_write' incorporates:
     *  Constant: '<S1301>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpRPMAct_INIT_wri =
        KePMIR_n_LTActPumpRPMAct_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpRespErr_INIT_write' incorporates:
     *  Constant: '<S1283>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpRespErr_INIT_wr =
        KePMIR_b_LTActPumpRespErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpSuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1284>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpSuppVltErr_FA_I =
        KePMIR_b_LTActPumpSuppVltErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpSuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1298>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpSuppVltErr_INIT =
        KePMIR_e_LTActPumpSuppVltErr_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpTemp_INIT_write' incorporates:
     *  Constant: '<S1268>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpTemp_INIT_write =
        KePMIR_T_LTActPumpTemp_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpTgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1287>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpTgtSpd_FA_INIT_ =
        KePMIR_b_LTActPump_TgtSpd_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpTgtSpd_INIT_write' incorporates:
     *  Constant: '<S1267>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpTgtSpd_INIT_wri =
        KePMIR_Pct_LTActPump_TgtSpd_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1286>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpVlt_FA_INIT_wri =
        KePMIR_b_LTActPumpVlt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPumpVlt_INIT_write' incorporates:
     *  Constant: '<S1269>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpVlt_INIT_write =
        KePMIR_U_LTActPumpVlt_INIT;

    /* SignalConversion generated from: '<S1177>/LTActPump_Ver_INIT_write' incorporates:
     *  Constant: '<S1304>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPump_Ver_INIT_write =
        KePMIR_y_LTActPump_Ver_INIT;

    /* SignalConversion generated from: '<S1177>/LT_ActvPmpOT_FA_INIT_write' incorporates:
     *  Constant: '<S1288>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_ActvPmpOT_FA_INIT_wri =
        KePMIR_b_LTActvPumpOT_FA_INIT;

    /* SignalConversion generated from: '<S1177>/LT_ActvPmpOT_INIT_write' incorporates:
     *  Constant: '<S1299>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_ActvPmpOT_INIT_write =
        KePMIR_e_LTActvPumpOT_INIT;

    /* SignalConversion generated from: '<S1177>/HTAP_DVC_FlwRt_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1211>/Constant'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_FlwRt_IO_Cntl_I =
        PMIR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S1177>/HTAP_DVC_IO_Pct_INIT_write' incorporates:
     *  Constant: '<S1212>/Constant'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_IO_Pct_INIT_wri =
        PMIR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S1177>/HTAP_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1214>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_Pct_INIT_write = KePMIR_Pct_HTAP_DVC_INIT;

    /* SignalConversion generated from: '<S1177>/HTAP_DVC_RPM_BatClFlwRt_INIT_write' incorporates:
     *  Constant: '<S1249>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_RPM_BatClFlwRt_ =
        KePMIR_n_HTAP_DVC_RPM_BatClFlwRt_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPmpOT_FA_INIT_write' incorporates:
     *  Constant: '<S1228>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpOT_FA_INIT_write =
        KePMIR_b_HTAuxPumpOT_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPmpOT_INIT_write' incorporates:
     *  Constant: '<S1245>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpOT_INIT_write = KePMIR_e_HTAuxPumpOT_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPmpRPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1232>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpRPMTgt_FA_INIT_w =
        KePMIR_b_HTAuxPumpRPMTgt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPmpRPMTgt_INIT_write' incorporates:
     *  Constant: '<S1251>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpRPMTgt_INIT_writ =
        KePMIR_n_HTAuxPumpRPMTgt_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpAirPresntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1220>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpAirPresntErr_FA =
        KePMIR_b_HTAuxPumpAirPresntErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpAirPresntErr_INIT_write' incorporates:
     *  Constant: '<S1238>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpAirPresntErr_IN =
        KePMIR_e_HTAuxPumpAirPresntErr_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpCrnt_INIT_write' incorporates:
     *  Constant: '<S1213>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpCrnt_INIT_write =
        KePMIR_I_HTAuxPumpCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpDeblock_FA_INIT_write' incorporates:
     *  Constant: '<S1222>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDeblock_FA_INIT =
        KePMIR_b_HTAuxPumpDeblock_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpDeblock_INIT_write' incorporates:
     *  Constant: '<S1239>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDeblock_INIT_wr =
        KePMIR_e_HTAuxPumpDeblock_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpDryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1223>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDryRun_FA_INIT_ =
        KePMIR_b_HTAuxPumpDryRun_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpDryRun_INIT_write' incorporates:
     *  Constant: '<S1240>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDryRun_INIT_wri =
        KePMIR_e_HTAuxPumpDryRun_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpFailsafe_INIT_write' incorporates:
     *  Constant: '<S1241>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpFailsafe_INIT_w =
        KePMIR_e_HTAuxPumpFailsafe_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpNodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1227>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpNodeErr_FA_INIT =
        KePMIR_b_HTAuxPumpNodeErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpNodeErr_INIT_write' incorporates:
     *  Constant: '<S1244>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpNodeErr_INIT_wr =
        KePMIR_e_HTAuxPumpNodeErr_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpOvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1229>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpOvrCrnt_FA_INIT =
        KePMIR_b_HTAuxPumpOvrCrnt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpOvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1246>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpOvrCrnt_INIT_wr =
        KePMIR_e_HTAuxPumpOvrCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpProdSuplrID_INIT_write' incorporates:
     *  Constant: '<S1252>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpProdSuplrID_INI =
        KePMIR_y_HTAuxPumpProdSuplrID_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpRPMAct_INIT_write' incorporates:
     *  Constant: '<S1250>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpRPMAct_INIT_wri =
        KePMIR_n_HTAuxPumpRPMAct_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpRespErr_INIT_write' incorporates:
     *  Constant: '<S1233>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpRespErr_INIT_wr =
        KePMIR_b_HTAuxPumpRespErr_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpSuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1234>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpSuppVltErr_FA_I =
        KePMIR_b_HTAuxPumpSuppVltErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpSuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1248>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpSuppVltErr_INIT =
        KePMIR_e_HTAuxPumpSuppVltErr_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1237>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpVlt_FA_INIT_wri =
        KePMIR_b_HTAuxPumpVlt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPumpVlt_INIT_write' incorporates:
     *  Constant: '<S1218>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpVlt_INIT_write =
        KePMIR_U_HTAuxPumpVlt_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPump_ActSpd_INIT_write' incorporates:
     *  Constant: '<S1215>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_ActSpd_INIT_wr =
        KePMIR_Pct_HTAuxPumpActSpd_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPump_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1225>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_LmpHM_FA_INIT_ =
        KePMIR_b_HTAuxPumpLmpHM_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPump_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1242>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_LmpHM_INIT_wri =
        KePMIR_e_HTAuxPumpLmpHM_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPump_TgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1236>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_TgtSpd_FA_INIT =
        KePMIR_b_HTAuxPumpTgtSpd_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HTAuxPump_TgtSpd_INIT_write' incorporates:
     *  Constant: '<S1216>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_TgtSpd_INIT_wr =
        KePMIR_Pct_HTAuxPumpTgtSpd_INIT;

    /* SignalConversion generated from: '<S1177>/HT_AuxPmpMntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1226>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmpMntrRPM_FA_INIT =
        KePMIR_b_HTAuxPumpMntrRPM_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HT_AuxPmpMntrRPM_INIT_write' incorporates:
     *  Constant: '<S1243>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmpMntrRPM_INIT_wr =
        KePMIR_e_HTAuxPumpMntrRPM_INIT;

    /* SignalConversion generated from: '<S1177>/HT_AuxPmpTemp_INIT_write' incorporates:
     *  Constant: '<S1217>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmpTemp_INIT_write =
        KePMIR_T_HTAuxPumpTemp_INIT;

    /* SignalConversion generated from: '<S1177>/HT_AuxPmp_PstRnSt_FA_INIT_write' incorporates:
     *  Constant: '<S1230>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmp_PstRnSt_FA_INI =
        KePMIR_b_HTAuxPumpPstRnSt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/HT_AuxPmp_PstRnSt_INIT_write' incorporates:
     *  Constant: '<S1247>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmp_PstRnSt_INIT_w =
        KePMIR_e_HTAuxPumpPstRnSt_INIT;

    /* SignalConversion generated from: '<S1177>/HT_AuxPmp_Ver_INIT_write' incorporates:
     *  Constant: '<S1253>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmp_Ver_INIT_write =
        KePMIR_y_HTAuxPumpVer_INIT;

    /* SignalConversion generated from: '<S1177>/DVC_AuxPmpSpdDsrd_INIT_write' incorporates:
     *  Constant: '<S1468>/Calib'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmpSpdDsrd_INIT_w =
        KePMIR_n_DVC_AuxPmpSpdDsrd_INIT;

    /* SignalConversion generated from: '<S1177>/DVC_AuxPmpSpdEnbl_INIT_write' incorporates:
     *  Constant: '<S1443>/Constant'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmpSpdEnbl_INIT_w =
        PMIR_ac_ConstB.Constant_ll;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_ColdBiasSts_INIT_write' incorporates:
     *  Constant: '<S1442>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_ColdBiasSts_ =
        PMIR_ac_ConstB.Constant_l4;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_CrntErr_INIT_write' incorporates:
     *  Constant: '<S1440>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_CrntErr_INIT =
        PMIR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_Crnt_INIT_write' incorporates:
     *  Constant: '<S1444>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_Crnt_INIT_wr =
        KePMIR_I_TransAuxPmp_Crnt_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_DryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1451>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_DryRun_FA_IN =
        KePMIR_b_TransAuxPmp_DryRun_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_DryRun_INIT_write' incorporates:
     *  Constant: '<S1464>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_DryRun_INIT_ =
        KePMIR_e_TransAuxPmp_DryRun_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1465>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_LmpHM_INIT_w =
        KePMIR_e_TransAuxPmp_LmpHM_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_MntrRPM_INIT_write' incorporates:
     *  Constant: '<S1466>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_MntrRPM_INIT =
        KePMIR_e_TransAuxPmp_MntrRPM_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_OilTemp_FA_INIT_write' incorporates:
     *  Constant: '<S1454>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_OilTemp_FA_I =
        KePMIR_b_TransAuxPmp_OilTemp_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_OilTemp_INIT_write' incorporates:
     *  Constant: '<S1445>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_OilTemp_INIT =
        KePMIR_T_TransAuxPmp_OilTemp_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_PstRnSt_INIT_write' incorporates:
     *  Constant: '<S1467>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_PstRnSt_INIT =
        KePMIR_e_TransAuxPmp_PstRnSt_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_RPMAct_INIT_write' incorporates:
     *  Constant: '<S1470>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_RPMAct_INIT_ =
        KePMIR_n_TransAuxPmp_RPMAct_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_RPMTgt_INIT_write' incorporates:
     *  Constant: '<S1471>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_RPMTgt_INIT_ =
        KePMIR_n_TransAuxPmp_RPMTgt_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_RespErr_INIT_write' incorporates:
     *  Constant: '<S1457>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_RespErr_INIT =
        KePMIR_b_TransAuxPmp_RespErr_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_StallEvnt_INIT_write' incorporates:
     *  Constant: '<S1441>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_StallEvnt_IN =
        PMIR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_TAP_HW_VER_INIT_write' incorporates:
     *  Constant: '<S1472>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TAP_HW_VER_I =
        KePMIR_y_TransAuxPmp_TAP_HW_VER_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_TAP_SW_VER_INIT_write' incorporates:
     *  Constant: '<S1473>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TAP_SW_VER_I =
        KePMIR_y_TransAuxPmp_TAP_SW_VER_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_TCM_Req_INIT_write' incorporates:
     *  Constant: '<S1459>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TCM_Req_INIT =
        KePMIR_b_TransAuxPmp_TCM_Req_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_TempErr_INIT_write' incorporates:
     *  Constant: '<S1438>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TempErr_INIT =
        PMIR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_TempFA_INIT_write' incorporates:
     *  Constant: '<S1460>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TempFA_INIT_ =
        KePMIR_b_TransAuxPmp_TempFA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_Temp_INIT_write' incorporates:
     *  Constant: '<S1446>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_Temp_INIT_wr =
        KePMIR_T_TransAuxPmp_Temp_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_VltgErr_INIT_write' incorporates:
     *  Constant: '<S1439>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_VltgErr_INIT = PMIR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp_Vltg_INIT_write' incorporates:
     *  Constant: '<S1447>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_Vltg_INIT_wr =
        KePMIR_U_TransAuxPmp_Vltg_INIT;

    /* SignalConversion generated from: '<S1177>/DVC_AuxPmp2SpdDsrd_INIT_write' incorporates:
     *  Constant: '<S1431>/Calib'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmp2SpdDsrd_INIT_ =
        KePMIR_n_DVC_AuxPmp2SpdDsrd_INIT;

    /* SignalConversion generated from: '<S1177>/DVC_AuxPmp2SpdEnbl_INIT_write' incorporates:
     *  Constant: '<S1401>/Constant'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmp2SpdEnbl_INIT_ =
        PMIR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_ColdBiasSts_FA_INIT_write' incorporates:
     *  Constant: '<S1406>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_ColdBiasSts =
        KePMIR_b_TransAuxPmp2_ColdBiasSts_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_ColdBiasSts_INIT_write' incorporates:
     *  Constant: '<S1422>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_ColdBiasS_i =
        KePMIR_e_TransAuxPmp2_ColdBiasSts_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_CrntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1407>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_CrntErr_FA_ =
        KePMIR_b_TransAuxPmp2_CrntErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_CrntErr_INIT_write' incorporates:
     *  Constant: '<S1423>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_CrntErr_INI =
        KePMIR_e_TransAuxPmp2_CrntErr_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_Crnt_FA_INIT_write' incorporates:
     *  Constant: '<S1408>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Crnt_FA_INI =
        KePMIR_b_TransAuxPmp2_Crnt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_Crnt_INIT_write' incorporates:
     *  Constant: '<S1402>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Crnt_INIT_w =
        KePMIR_I_TransAuxPmp2_Crnt_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_DryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1409>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_DryRun_FA_I =
        KePMIR_b_TransAuxPmp2_DryRun_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_DryRun_INIT_write' incorporates:
     *  Constant: '<S1424>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_DryRun_INIT =
        KePMIR_e_TransAuxPmp2_DryRun_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1410>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_LmpHM_FA_IN =
        KePMIR_b_TransAuxPmp2_LmpHM_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1425>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_LmpHM_INIT_ =
        KePMIR_e_TransAuxPmp2_LmpHM_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_MntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1411>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_MntrRPM_FA_ =
        KePMIR_b_TransAuxPmp2_MntrRPM_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_MntrRPM_INIT_write' incorporates:
     *  Constant: '<S1426>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_MntrRPM_INI =
        KePMIR_e_TransAuxPmp2_MntrRPM_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_OilTemp_FA_INIT_write' incorporates:
     *  Constant: '<S1412>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_OilTemp_FA_ =
        KePMIR_b_TransAuxPmp2_OilTemp_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_OilTemp_INIT_write' incorporates:
     *  Constant: '<S1403>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_OilTemp_INI =
        KePMIR_T_TransAuxPmp2_OilTemp_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_PstRnSt_FA_INIT_write' incorporates:
     *  Constant: '<S1413>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_PstRnSt_FA_ =
        KePMIR_b_TransAuxPmp2_PstRnSt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_PstRnSt_INIT_write' incorporates:
     *  Constant: '<S1427>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_PstRnSt_INI =
        KePMIR_e_TransAuxPmp2_PstRnSt_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_RPMAct_INIT_write' incorporates:
     *  Constant: '<S1432>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMAct_INIT =
        KePMIR_n_TransAuxPmp2_RPMAct_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_RPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1415>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMTgt_FA_I =
        KePMIR_b_TransAuxPmp2_RPMTgt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_RPMTgt_INIT_write' incorporates:
     *  Constant: '<S1433>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMTgt_INIT =
        KePMIR_n_TransAuxPmp2_RPMTgt_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_RespErr_INIT_write' incorporates:
     *  Constant: '<S1416>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RespErr_INI =
        KePMIR_b_TransAuxPmp2_RespErr_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_StallEvnt_FA_INIT_write' incorporates:
     *  Constant: '<S1417>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_StallEvnt_F =
        KePMIR_b_TransAuxPmp2_StallEvnt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_StallEvnt_INIT_write' incorporates:
     *  Constant: '<S1428>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_StallEvnt_I =
        KePMIR_e_TransAuxPmp2_StallEvnt_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_TAP_HW_VER_INIT_write' incorporates:
     *  Constant: '<S1434>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TAP_HW_VER_ =
        KePMIR_y_TransAuxPmp2_TAP_HW_VER_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_TAP_SW_VER_INIT_write' incorporates:
     *  Constant: '<S1435>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TAP_SW_VER_ =
        KePMIR_y_TransAuxPmp2_TAP_SW_VER_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_TempErr_FA_INIT_write' incorporates:
     *  Constant: '<S1418>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TempErr_FA_ =
        KePMIR_b_TransAuxPmp2_TempErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_TempErr_INIT_write' incorporates:
     *  Constant: '<S1429>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TempErr_INI =
        KePMIR_e_TransAuxPmp2_TempErr_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_Temp_FA_INIT_write' incorporates:
     *  Constant: '<S1419>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Temp_FA_INI =
        KePMIR_b_TransAuxPmp2_Temp_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_Temp_INIT_write' incorporates:
     *  Constant: '<S1404>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Temp_INIT_w =
        KePMIR_T_TransAuxPmp2_Temp_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_VltgErr_FA_INIT_write' incorporates:
     *  Constant: '<S1420>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_VltgErr_FA_ =
        KePMIR_b_TransAuxPmp2_VltgErr_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_VltgErr_INIT_write' incorporates:
     *  Constant: '<S1430>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_VltgErr_INI =
        KePMIR_e_TransAuxPmp2_VltgErr_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_Vltg_FA_INIT_write' incorporates:
     *  Constant: '<S1421>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Vltg_FA_INI =
        KePMIR_b_TransAuxPmp2_Vltg_FA_INIT;

    /* SignalConversion generated from: '<S1177>/TransAuxPmp2_Vltg_INIT_write' incorporates:
     *  Constant: '<S1405>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Vltg_INIT_w =
        KePMIR_U_TransAuxPmp2_Vltg_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpActSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1190>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActSpd_FA_INIT_wri =
        KePMIR_b_FCCPmpActSpd_FA_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpActSpd_INIT_write' incorporates:
     *  Constant: '<S1204>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActSpd_INIT_write =
        KePMIR_n_FCCPmpActSpd_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpActTemp_FA_INIT_write' incorporates:
     *  Constant: '<S1191>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActTemp_FA_INIT_wr =
        KePMIR_b_FCCPmpActTemp_FA_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpActTemp_INIT_write' incorporates:
     *  Constant: '<S1188>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActTemp_INIT_write =
        KePMIR_T_FCCPmpActTemp_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpActVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1192>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActVlt_FA_INIT_wri =
        KePMIR_b_FCCPmpActVlt_FA_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpActVlt_INIT_write' incorporates:
     *  Constant: '<S1189>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActVlt_INIT_write =
        KePMIR_U_FCCPmpActVlt_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrLIN_INIT_write' incorporates:
     *  Constant: '<S1193>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrLIN_INIT_write =
        KePMIR_b_FCCPmpErrLIN_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrLLO_INIT_write' incorporates:
     *  Constant: '<S1194>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrLLO_INIT_write =
        KePMIR_b_FCCPmpErrLLO_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrOC_INIT_write' incorporates:
     *  Constant: '<S1195>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOC_INIT_write = KePMIR_b_FCCPmpErrOC_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrOTD_INIT_write' incorporates:
     *  Constant: '<S1196>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOTD_INIT_write =
        KePMIR_b_FCCPmpErrOTD_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrOT_INIT_write' incorporates:
     *  Constant: '<S1197>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOT_INIT_write = KePMIR_b_FCCPmpErrOT_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrOV_INIT_write' incorporates:
     *  Constant: '<S1198>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOV_INIT_write = KePMIR_b_FCCPmpErrOV_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrSC_INIT_write' incorporates:
     *  Constant: '<S1199>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrSC_INIT_write = KePMIR_b_FCCPmpErrSC_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrUV_INIT_write' incorporates:
     *  Constant: '<S1200>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrUV_INIT_write = KePMIR_b_FCCPmpErrUV_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpErrVD_INIT_write' incorporates:
     *  Constant: '<S1201>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrVD_INIT_write = KePMIR_b_FCCPmpErrVD_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpIntFlt_INIT_write' incorporates:
     *  Constant: '<S1202>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpIntFlt_INIT_write =
        KePMIR_b_FCCPmpIntFlt_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpStlFlt_INIT_write' incorporates:
     *  Constant: '<S1203>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpStlFlt_INIT_write =
        KePMIR_b_FCCPmpStlFlt_INIT;

    /* SignalConversion generated from: '<S1177>/FCCPmpSuppCrnt_INIT_write' incorporates:
     *  Constant: '<S1187>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpSuppCrnt_INIT_writ =
        KePMIR_I_FCCPmpSuppCrnt_INIT;

    /* SignalConversion generated from: '<S1177>/PWM_EOP_IOCtrlMode_INIT' incorporates:
     *  Constant: '<S1397>/Constant'
     */
    PMIR_ac_B.OutportBufferForPWM_EOP_IOCtrlMode_INIT =
        PMIR_ac_ConstB.Constant_jw;

    /* SignalConversion generated from: '<S1177>/PWM_EOP_IOCtrlSpd_INIT' incorporates:
     *  Constant: '<S1398>/Calib'
     */
    PMIR_ac_B.OutportBufferForPWM_EOP_IOCtrlSpd_INIT =
        KePMIR_Pct_PWM_EOP_IOCtrlSpd_INIT;

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/Out_Init'
     */
    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPPMaxSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPPMaxSpd_Ou = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPPMinSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPPMinSpd_Ou = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPPMaxSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPPMaxSpd_Out_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPPMinSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPPMinSpd_Out_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpOT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const5'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpOT_Out = PMIR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPumpRespErr_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpRespEr = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpNodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const7'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpNodeEr = PMIR_ac_ConstB.Const7;

    /* SignalConversion generated from: '<S1178>/VePMIR_U_LTPsvPumpVltg_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_U_LTPsvPumpVltg_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPumpVltg_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpVltg_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const10'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpDryRun = PMIR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPumpDryRun_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpDryRun = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPsvPumpTgtSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPumpTgtS = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPsvPumpTgtSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPumpTgtSpd = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpFailsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const14'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpFailsa = PMIR_ac_ConstB.Const14;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpSuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const15'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpSuppVl = PMIR_ac_ConstB.Const15;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPsvPumpActSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPumpActS = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPsvPumpActSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPumpActSpd = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPsvPump_RPMAct_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPump_RPMAc = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump_RPMAct_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump_RPMAc = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump_RPMAct_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump_RPM_e = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpOverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const21'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpOverCu = PMIR_ac_ConstB.Const21;

    /* SignalConversion generated from: '<S1178>/VePMIR_I_LTPsvPumpCurrent_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_I_LTPsvPumpCurren = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpDeblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const23'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpDebloc = PMIR_ac_ConstB.Const23;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const24'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpLmpHM_ = PMIR_ac_ConstB.Const24;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const25'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpMntrRP = PMIR_ac_ConstB.Const25;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_LTPsvPumpTemp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_LTPsvPumpTemp_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPumpTemp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpTemp_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPumpTemp_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpTemp_S = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_ECM_LTPsvPumpRq_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_ECM_LTPsvPump = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_ECM_LTPsvPumpRq_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_ECM_LTPsvPumpRq = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpAirPresntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const31'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpAirPre = PMIR_ac_ConstB.Const31;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const32'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPP_DVC_FlwRt_ = PMIR_ac_ConstB.Const32;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPP_DVC_RPM_PEClFlwRt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPP_DVC_RPM_PE = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2OT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const34'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2OT_Ou = PMIR_ac_ConstB.Const34;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump2RespErr_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2RespE = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2NodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const36'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2NodeE = PMIR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S1178>/VePMIR_U_LTPsvPump2Vltg_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_U_LTPsvPump2Vltg_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump2Vltg_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2Vltg_ = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2DryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const39'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2DryRu = PMIR_ac_ConstB.Const39;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump2DryRun_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2DryRu = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2Failsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const41'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2Fails = PMIR_ac_ConstB.Const41;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2SuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const42'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2SuppV = PMIR_ac_ConstB.Const42;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2OverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const43'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2OverC = PMIR_ac_ConstB.Const43;

    /* SignalConversion generated from: '<S1178>/VePMIR_I_LTPsvPump2Current_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_I_LTPsvPump2Curre = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2Deblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const45'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2Deblo = PMIR_ac_ConstB.Const45;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2LmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const46'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2LmpHM = PMIR_ac_ConstB.Const46;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2MntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const47'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2MntrR = PMIR_ac_ConstB.Const47;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_LTPsvPump2Temp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_LTPsvPump2Temp_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump2Temp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2Temp_ = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump2Temp_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2Tem_h = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2AirPresntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const51'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2AirPr = PMIR_ac_ConstB.Const51;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPsvPump2TgtSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPump2Tgt = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPsvPump2ActSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPump2Act = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPsvPump2ActSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPump2ActSp = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPsvPump2RPMAct_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPump2RPMAc = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump2RPMAct_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2RPMAc = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTPsvPump2RPMAct_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2RPM_i = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const58'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPP2_DVC_FlwRt = PMIR_ac_ConstB.Const58;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPP2_DVC_RPM_P = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPP2MaxSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPP2MaxSpd_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTPP2MinSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPP2MinSpd_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPP2MaxSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPP2MaxSpd_Out = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTPP2MinSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTPP2MinSpd_Out = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpOT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const64'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpOT_Ou = PMIR_ac_ConstB.Const64;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpRespErr_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpRespE = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpNodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const66'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpNodeE = PMIR_ac_ConstB.Const66;

    /* SignalConversion generated from: '<S1178>/VePMIR_U_LTActvPumpVlt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_U_LTActvPumpVlt_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpVlt_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpVlt_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const69'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpDryRu = PMIR_ac_ConstB.Const69;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpDryRun_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpDryRu = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpDryRun_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpDry_m = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpFailsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const72'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpFails = PMIR_ac_ConstB.Const72;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpSuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const73'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpSuppV = PMIR_ac_ConstB.Const73;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpOverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const74'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpOverC = PMIR_ac_ConstB.Const74;

    /* SignalConversion generated from: '<S1178>/VePMIR_I_LTActvPumpCurrent_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_I_LTActvPumpCurre = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpDeblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const76'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpDeblo = PMIR_ac_ConstB.Const76;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_LTActvPumpTemp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_LTActvPumpTemp_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpTemp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpTemp_ = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpTemp_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpTem_o = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const80'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpMntrR = PMIR_ac_ConstB.Const80;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const81'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpLmpHM = PMIR_ac_ConstB.Const81;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpPstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const82'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpPstRn = PMIR_ac_ConstB.Const82;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTAP_AirPrsntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const83'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTAP_AirPrsntEr = PMIR_ac_ConstB.Const83;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTActvPumpTgtSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTActvPumpTgt = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTActvPumpRPMTgt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTActvPumpRPMTg = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_LTActvPumpActSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_LTActvPumpAct = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTActvPumpRPMAct_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTActvPumpRPMAc = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpRPMAct_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpRPMAc = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_LTActvPumpRPMAct_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpRPM_g = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const90'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTAP_DVC_FlwRt_ = PMIR_ac_ConstB.Const90;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_LTAP_DVC_RPM_PEClFlwRt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_LTAP_DVC_RPM_PE = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpOT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const92'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpOT_Out = PMIR_ac_ConstB.Const92;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpRespErr_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpRespEr = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpNodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const94'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpNodeEr = PMIR_ac_ConstB.Const94;

    /* SignalConversion generated from: '<S1178>/VePMIR_U_HTAuxPumpVltg_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_U_HTAuxPumpVltg_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpVltg_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpVltg_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const97'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpDryRun = PMIR_ac_ConstB.Const97;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpDryRun_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpDryRun = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpFailsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const99'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpFailsa = PMIR_ac_ConstB.Const99;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpSuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const100'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpSuppVl = PMIR_ac_ConstB.Const100;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpOverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const101'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpOverCu = PMIR_ac_ConstB.Const101;

    /* SignalConversion generated from: '<S1178>/VePMIR_I_HTAuxPumpCurrent_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_I_HTAuxPumpCurren = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpDeblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const103'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpDebloc = PMIR_ac_ConstB.Const103;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const104'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpMntrRP = PMIR_ac_ConstB.Const104;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpMntrRPM_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpMntrRP = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const106'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpLmpHM_ = PMIR_ac_ConstB.Const106;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpPstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const107'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpPstRnS = PMIR_ac_ConstB.Const107;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_HTAuxPumpTemp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_HTAuxPumpTemp_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpTemp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpTemp_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpTemp_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpTemp_S = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpAirPresntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const111'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpAirPre = PMIR_ac_ConstB.Const111;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_HTAuxPumpTgtSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAuxPumpTgtS = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_HTAuxPumpRPMTgt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_HTAuxPumpRPMTgt = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_HTAuxPumpActSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAuxPumpActS = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_HTAuxPumpRPMAct_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_HTAuxPumpRPMAct = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpRPMAct_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpRPMAct = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_HTAuxPumpRPMAct_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpRPMA_o = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const118'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAP_DVC_FlwRt_ = PMIR_ac_ConstB.Const118;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_HTAP_DVC_RPM_PEClFlwRt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_HTAP_DVC_RPM_PE = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_HTAPMaxSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAPMaxSpd_Ou = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_HTAPMinSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAPMinSpd_Ou = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_HTAPMaxSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_HTAPMaxSpd_Out_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_HTAPMinSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_HTAPMinSpd_Out_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_FCCPmpActSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_FCCPmpActSpd_Ou = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpActSpd_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpActSpd_FA = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_I_FCCPmpSuppCrnt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_I_FCCPmpSuppCrnt_ = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_FCCPmpActTemp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_FCCPmpActTemp_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpActTemp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpActTemp_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_U_FCCPmpActVlt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_U_FCCPmpActVlt_Ou = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpActVlt_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpActVlt_FA = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrSC_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrSC_Out = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpIntFlt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpIntFlt_Ou = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrLIN_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrLIN_Ou = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrLLO_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrLLO_Ou = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrOC_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOC_Out = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrOT_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOT_Out = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrOTD_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOTD_Ou = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrOV_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOV_Out = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpStlFlt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpStlFlt_Ou = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrUV_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrUV_Out = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_FCCPmpErrVD_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrVD_Out = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_AuxPumpSpdAct_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_AuxPumpSpdAct_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_AuxPumpSpdAct_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_AuxPumpSpdAct_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_AuxPumpSpdAct_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_AuxPumpSpdAct_S = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_TransAuxPumpTemp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPumpTem = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPumpTemp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpTem = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_I_TransAuxPumpCurrent_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_I_TransAuxPumpCur = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_U_TransAuxPumpVoltage_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_U_TransAuxPumpVol = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPumpRespError_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpRes = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_TransAuxPump_RPMTgt_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_TransAuxPump_RP = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_y_TransAuxPmp_TAP_HW_VER_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp_TAP = 0U;

    /* SignalConversion generated from: '<S1178>/VePMIR_y_TransAuxPmp_TAP_SW_VER_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp_T_h = 0U;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_TransAuxPumpOilTemp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPumpOil = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPumpOilTemp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpOil = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpPstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const155'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpPst = PMIR_ac_ConstB.Const155;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const156'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpLmp = PMIR_ac_ConstB.Const156;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const157'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpDry = PMIR_ac_ConstB.Const157;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPumpDryRun_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpDry = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TAP_ColdBiasSts_Out_Init' incorporates:
     *  Constant: '<S1178>/Const159'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TAP_ColdBiasSts = PMIR_ac_ConstB.Const159;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const160'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpMnt = PMIR_ac_ConstB.Const160;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpTempError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const161'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpTem = PMIR_ac_ConstB.Const161;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpCurrentError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const162'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpCur = PMIR_ac_ConstB.Const162;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpStallEvent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const163'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpSta = PMIR_ac_ConstB.Const163;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpVoltageError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const164'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpVol = PMIR_ac_ConstB.Const164;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPumpTCMReq_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpTCM = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const166'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TAP_SpdDsrd_IO_ = PMIR_ac_ConstB.Const166;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_DVC_AuxPumpSpdDsrd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_DVC_AuxPumpSpdD = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_EOP_SpeedFdbk_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_EOP_SpeedFdbk_O = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_EOP_SpeedFdbk_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_EOP_SpeedFdbk_F = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_PWM_TAP_Sel_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_PWM_TAP_Sel_Out = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_TransAuxPump2SpdAct_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_TransAuxPump2Sp = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2SpdAct_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Sp = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2SpdAct_SNA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_f = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_TransAuxPump2Temp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPump2Te = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2Temp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Te = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_I_TransAuxPump2Current_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_I_TransAuxPump2Cu = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2Current_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Cu = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_U_TransAuxPump2Voltage_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_U_TransAuxPump2Vo = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2Voltage_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Vo = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2RespError_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Re = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_TransAuxPump2TgtSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_TransAuxPump2Tg = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2TgtSpd_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Tg = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_y_TransAuxPmp2_TAP_HW_VER_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp2_TA = 0U;

    /* SignalConversion generated from: '<S1178>/VePMIR_y_TransAuxPmp2_TAP_SW_VER_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp2__i = 0U;

    /* SignalConversion generated from: '<S1178>/VePMIR_T_TransAuxPump2OilTemp_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPump2Oi = 0.0F;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2OilTemp_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Oi = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2PstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const187'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Ps = PMIR_ac_ConstB.Const187;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2PstRnSt_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Ps = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPmp2LmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const189'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPmp2Lmp = PMIR_ac_ConstB.Const189;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPmp2LmpHM_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPmp2Lmp = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2DryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const191'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Dr = PMIR_ac_ConstB.Const191;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2DryRun_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Dr = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPmp2ColdBiasSts_Out_Init' incorporates:
     *  Constant: '<S1178>/Const193'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPmp2Col = PMIR_ac_ConstB.Const193;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPmp2ColdBiasSts_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPmp2Col = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2MntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const195'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Mn = PMIR_ac_ConstB.Const195;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2MntrRPM_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Mn = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2TempError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const197'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Te = PMIR_ac_ConstB.Const197;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2TempError_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_n = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2CurrentError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const199'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Cu = PMIR_ac_ConstB.Const199;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2CurrentError_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_e = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2StallEvent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const201'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2St = PMIR_ac_ConstB.Const201;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2StallEvent_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2St = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2VoltageError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const203'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Vo = PMIR_ac_ConstB.Const203;

    /* SignalConversion generated from: '<S1178>/VePMIR_b_TransAuxPump2VoltageError_FA_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_o = false;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const205'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TAP2_SpdDsrd_IO = PMIR_ac_ConstB.Const205;

    /* SignalConversion generated from: '<S1178>/VePMIR_n_DVC_AuxPump2SpdDsrd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_n_DVC_AuxPump2Spd = 0.0F;

    /* SignalConversion generated from: '<S1178>/LTPsvPump_PstRnSt_INIT' incorporates:
     *  Constant: '<S1178>/Const207'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_PstRnSt_INIT = PMIR_ac_ConstB.Const207;

    /* SignalConversion generated from: '<S1178>/LTPsvPump_PstRnSt_FA_INIT' incorporates:
     *  Constant: '<S1475>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_PstRnSt_FA_INI =
        KePMIR_b_LTPsvPump_PstRnSt_FA_INIT;

    /* SignalConversion generated from: '<S1178>/LTPsvPump2_PstRnSt_INIT' incorporates:
     *  Constant: '<S1178>/Const208'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_PstRnSt_INIT = PMIR_ac_ConstB.Const208;

    /* SignalConversion generated from: '<S1178>/LTPsvPump2_PstRnSt_FA_INIT' incorporates:
     *  Constant: '<S1474>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_PstRnSt_FA_IN =
        KePMIR_b_LTPsvPump2_PstRnSt_FA_INIT;

    /* SignalConversion generated from: '<S1178>/VePMIR_e_PWM_EOP_IOCtrlMode_Out_Init' incorporates:
     *  Constant: '<S1178>/Const209'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_PWM_EOP_IOCtrlM = PMIR_ac_ConstB.Const209;

    /* SignalConversion generated from: '<S1178>/VePMIR_Pct_PWM_EOP_IOCtrlSpd_Out_Init' */
    PMIR_ac_B.OutportBufferForVePMIR_Pct_PWM_EOP_IOCtr = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2_PstRnStFA' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2_PstRnSt_FA_INIT'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2_PstRnStFA_Value
        (PMIR_ac_B.OutportBufferForLTPsvPump2_PstRnSt_FA_IN);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2_PstRnSt' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2_PstRnSt_INIT'
     *  SignalConversion generated from: '<S1178>/LTPsvPump2_PstRnSt_INIT'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2_PstRnSt_Value
        (PMIR_ac_B.OutportBufferForLTPsvPump2_PstRnSt_INIT);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump_PstRnStFA' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump_PstRnSt_FA_INIT'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump_PstRnStFA_Value
        (PMIR_ac_B.OutportBufferForLTPsvPump_PstRnSt_FA_INI);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump_PstRnSt' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump_PstRnSt_INIT'
     *  SignalConversion generated from: '<S1178>/LTPsvPump_PstRnSt_INIT'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump_PstRnSt_Value
        (PMIR_ac_B.OutportBufferForLTPsvPump_PstRnSt_INIT);

    /* Outport: '<Root>/VePMIR_I_FCCPmpSuppCrnt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_I_FCCPmpSuppCrnt_Out_Init'
     */
    (void)Rte_Write_VePMIR_I_FCCPmpSuppCrnt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_I_FCCPmpSuppCrnt_);

    /* Outport: '<Root>/VePMIR_I_HTAuxPumpCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_I_HTAuxPumpCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_I_HTAuxPumpCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_I_HTAuxPumpCurren);

    /* Outport: '<Root>/VePMIR_I_LTActvPumpCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_I_LTActvPumpCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_I_LTActvPumpCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_I_LTActvPumpCurre);

    /* Outport: '<Root>/VePMIR_I_LTPsvPump2Current' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_I_LTPsvPump2Current_Out_Init'
     */
    (void)Rte_Write_VePMIR_I_LTPsvPump2Current_Value
        (PMIR_ac_B.OutportBufferForVePMIR_I_LTPsvPump2Curre);

    /* Outport: '<Root>/VePMIR_I_LTPsvPumpCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_I_LTPsvPumpCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_I_LTPsvPumpCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_I_LTPsvPumpCurren);

    /* Outport: '<Root>/VePMIR_I_TransAuxPump2Current' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_I_TransAuxPump2Current_Out_Init'
     */
    (void)Rte_Write_VePMIR_I_TransAuxPump2Current_Value
        (PMIR_ac_B.OutportBufferForVePMIR_I_TransAuxPump2Cu);

    /* Outport: '<Root>/VePMIR_I_TransAuxPumpCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_I_TransAuxPumpCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_I_TransAuxPumpCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_I_TransAuxPumpCur);

    /* Outport: '<Root>/VePMIR_Pct_ECM_LTPsvPumpRq' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_ECM_LTPsvPumpRq_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_ECM_LTPsvPumpRq_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_ECM_LTPsvPump);

    /* Outport: '<Root>/VePMIR_Pct_HTAPMaxSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_HTAPMaxSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_HTAPMaxSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAPMaxSpd_Ou);

    /* Outport: '<Root>/VePMIR_Pct_HTAPMinSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_HTAPMinSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_HTAPMinSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAPMinSpd_Ou);

    /* Outport: '<Root>/VePMIR_Pct_HTAuxPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_HTAuxPumpActSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_HTAuxPumpActSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAuxPumpActS);

    /* Outport: '<Root>/VePMIR_Pct_HTAuxPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_HTAuxPumpTgtSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_HTAuxPumpTgtSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_HTAuxPumpTgtS);

    /* Outport: '<Root>/VePMIR_Pct_LTActvPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTActvPumpActSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTActvPumpActSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTActvPumpAct);

    /* Outport: '<Root>/VePMIR_Pct_LTActvPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTActvPumpTgtSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTActvPumpTgtSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTActvPumpTgt);

    /* Outport: '<Root>/VePMIR_Pct_LTPP2MaxSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPP2MaxSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPP2MaxSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPP2MaxSpd_O);

    /* Outport: '<Root>/VePMIR_Pct_LTPP2MinSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPP2MinSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPP2MinSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPP2MinSpd_O);

    /* Outport: '<Root>/VePMIR_Pct_LTPPMaxSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPPMaxSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPPMaxSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPPMaxSpd_Ou);

    /* Outport: '<Root>/VePMIR_Pct_LTPPMinSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPPMinSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPPMinSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPPMinSpd_Ou);

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPump2ActSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPsvPump2ActSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPump2ActSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPump2Act);

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPump2TgtSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPsvPump2TgtSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPump2TgtSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPump2Tgt);

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPsvPumpActSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPumpActSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPumpActS);

    /* Outport: '<Root>/VePMIR_Pct_LTPsvPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_LTPsvPumpTgtSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_LTPsvPumpTgtSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_LTPsvPumpTgtS);

    /* Outport: '<Root>/VePMIR_Pct_PWM_EOP_IOCtrlSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_Pct_PWM_EOP_IOCtrlSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_Pct_PWM_EOP_IOCtrlSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_Pct_PWM_EOP_IOCtr);

    /* Outport: '<Root>/VePMIR_T_FCCPmpActTemp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_FCCPmpActTemp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_FCCPmpActTemp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_FCCPmpActTemp_O);

    /* Outport: '<Root>/VePMIR_T_HTAuxPumpTemp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_HTAuxPumpTemp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_HTAuxPumpTemp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_HTAuxPumpTemp_O);

    /* Outport: '<Root>/VePMIR_T_LTActvPumpTemp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_LTActvPumpTemp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_LTActvPumpTemp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_LTActvPumpTemp_);

    /* Outport: '<Root>/VePMIR_T_LTPsvPump2Temp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_LTPsvPump2Temp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_LTPsvPump2Temp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_LTPsvPump2Temp_);

    /* Outport: '<Root>/VePMIR_T_LTPsvPumpTemp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_LTPsvPumpTemp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_LTPsvPumpTemp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_LTPsvPumpTemp_O);

    /* Outport: '<Root>/VePMIR_T_TransAuxPump2OilTemp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_TransAuxPump2OilTemp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPump2OilTemp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPump2Oi);

    /* Outport: '<Root>/VePMIR_T_TransAuxPump2Temp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_TransAuxPump2Temp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPump2Temp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPump2Te);

    /* Outport: '<Root>/VePMIR_T_TransAuxPumpOilTemp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_TransAuxPumpOilTemp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPumpOilTemp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPumpOil);

    /* Outport: '<Root>/VePMIR_T_TransAuxPumpTemp' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_T_TransAuxPumpTemp_Out_Init'
     */
    (void)Rte_Write_VePMIR_T_TransAuxPumpTemp_Value
        (PMIR_ac_B.OutportBufferForVePMIR_T_TransAuxPumpTem);

    /* Outport: '<Root>/VePMIR_U_FCCPmpActVlt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_U_FCCPmpActVlt_Out_Init'
     */
    (void)Rte_Write_VePMIR_U_FCCPmpActVlt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_U_FCCPmpActVlt_Ou);

    /* Outport: '<Root>/VePMIR_U_HTAuxPumpVltg' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_U_HTAuxPumpVltg_Out_Init'
     */
    (void)Rte_Write_VePMIR_U_HTAuxPumpVltg_Value
        (PMIR_ac_B.OutportBufferForVePMIR_U_HTAuxPumpVltg_O);

    /* Outport: '<Root>/VePMIR_U_LTActvPumpVlt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_U_LTActvPumpVlt_Out_Init'
     */
    (void)Rte_Write_VePMIR_U_LTActvPumpVlt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_U_LTActvPumpVlt_O);

    /* Outport: '<Root>/VePMIR_U_LTPsvPump2Vltg' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_U_LTPsvPump2Vltg_Out_Init'
     */
    (void)Rte_Write_VePMIR_U_LTPsvPump2Vltg_Value
        (PMIR_ac_B.OutportBufferForVePMIR_U_LTPsvPump2Vltg_);

    /* Outport: '<Root>/VePMIR_U_LTPsvPumpVltg' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_U_LTPsvPumpVltg_Out_Init'
     */
    (void)Rte_Write_VePMIR_U_LTPsvPumpVltg_Value
        (PMIR_ac_B.OutportBufferForVePMIR_U_LTPsvPumpVltg_O);

    /* Outport: '<Root>/VePMIR_U_TransAuxPump2Voltage' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_U_TransAuxPump2Voltage_Out_Init'
     */
    (void)Rte_Write_VePMIR_U_TransAuxPump2Voltage_Value
        (PMIR_ac_B.OutportBufferForVePMIR_U_TransAuxPump2Vo);

    /* Outport: '<Root>/VePMIR_U_TransAuxPumpVoltage' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_U_TransAuxPumpVoltage_Out_Init'
     */
    (void)Rte_Write_VePMIR_U_TransAuxPumpVoltage_Value
        (PMIR_ac_B.OutportBufferForVePMIR_U_TransAuxPumpVol);

    /* Outport: '<Root>/VePMIR_b_AuxPumpSpdAct_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_AuxPumpSpdAct_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_AuxPumpSpdAct_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_AuxPumpSpdAct_F);

    /* Outport: '<Root>/VePMIR_b_AuxPumpSpdAct_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_AuxPumpSpdAct_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_AuxPumpSpdAct_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_AuxPumpSpdAct_S);

    /* Outport: '<Root>/VePMIR_b_ECM_LTPsvPumpRq_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_ECM_LTPsvPumpRq_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_ECM_LTPsvPumpRq_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_ECM_LTPsvPumpRq);

    /* Outport: '<Root>/VePMIR_b_EOP_SpeedFdbk_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_EOP_SpeedFdbk_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_EOP_SpeedFdbk_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_EOP_SpeedFdbk_F);

    /* Outport: '<Root>/VePMIR_b_FCCPmpActSpd_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpActSpd_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpActSpd_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpActSpd_FA);

    /* Outport: '<Root>/VePMIR_b_FCCPmpActTemp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpActTemp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpActTemp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpActTemp_F);

    /* Outport: '<Root>/VePMIR_b_FCCPmpActVlt_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpActVlt_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpActVlt_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpActVlt_FA);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrLIN' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrLIN_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrLIN_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrLIN_Ou);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrLLO' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrLLO_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrLLO_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrLLO_Ou);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOC' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrOC_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOC_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOC_Out);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOTD' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrOTD_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOTD_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOTD_Ou);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOT' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrOT_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOT_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOT_Out);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrOV' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrOV_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrOV_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrOV_Out);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrSC' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrSC_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrSC_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrSC_Out);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrUV' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrUV_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrUV_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrUV_Out);

    /* Outport: '<Root>/VePMIR_b_FCCPmpErrVD' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpErrVD_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpErrVD_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpErrVD_Out);

    /* Outport: '<Root>/VePMIR_b_FCCPmpIntFlt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpIntFlt_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpIntFlt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpIntFlt_Ou);

    /* Outport: '<Root>/VePMIR_b_FCCPmpStlFlt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_FCCPmpStlFlt_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_FCCPmpStlFlt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_FCCPmpStlFlt_Ou);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpDryRun_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpDryRun_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpDryRun_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpDryRun);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpMntrRPM_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpMntrRPM_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpMntrRPM_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpMntrRP);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpRPMAct_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpRPMAct_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpRPMAct);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpRPMAct_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpRPMAct_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpRPMA_o);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpRespErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpRespErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpRespErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpRespEr);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpTemp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpTemp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpTemp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpTemp_F);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpTemp_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpTemp_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpTemp_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpTemp_S);

    /* Outport: '<Root>/VePMIR_b_HTAuxPumpVltg_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_HTAuxPumpVltg_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_HTAuxPumpVltg_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_HTAuxPumpVltg_F);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpDryRun_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpDryRun_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpDryRu);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpDryRun_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpDryRun_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpDryRun_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpDry_m);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpRPMAct_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpRPMAct_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpRPMAct_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpRPMAc);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpRPMAct_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpRPMAct_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpRPMAct_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpRPM_g);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpRespErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpRespErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpRespErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpRespE);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpTemp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpTemp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpTemp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpTemp_);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpTemp_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpTemp_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpTemp_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpTem_o);

    /* Outport: '<Root>/VePMIR_b_LTActvPumpVlt_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTActvPumpVlt_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTActvPumpVlt_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTActvPumpVlt_F);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2DryRun_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump2DryRun_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2DryRun_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2DryRu);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump2RPMAct_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2RPMAct_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2RPMAc);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump2RPMAct_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2RPMAct_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2RPM_i);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2RespErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump2RespErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2RespErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2RespE);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2Temp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump2Temp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2Temp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2Temp_);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2Temp_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump2Temp_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2Temp_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2Tem_h);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump2Vltg_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump2Vltg_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump2Vltg_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump2Vltg_);

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpDryRun_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPumpDryRun_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpDryRun_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpDryRun);

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpRespErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPumpRespErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpRespErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpRespEr);

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPumpTemp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpTemp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpTemp_F);

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpTemp_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPumpTemp_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpTemp_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpTemp_S);

    /* Outport: '<Root>/VePMIR_b_LTPsvPumpVltg_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPumpVltg_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPumpVltg_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPumpVltg_F);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump_RPMAct_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump_RPMAct_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump_RPMAc);

    /* Outport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_LTPsvPump_RPMAct_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_LTPsvPump_RPMAct_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_LTPsvPump_RPM_e);

    /* Outport: '<Root>/VePMIR_b_PWM_TAP_Sel' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_PWM_TAP_Sel_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_PWM_TAP_Sel_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_PWM_TAP_Sel_Out);

    /* Outport: '<Root>/VePMIR_b_TransAuxPmp2ColdBiasSts_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPmp2ColdBiasSts_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPmp2ColdBiasSts_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPmp2Col);

    /* Outport: '<Root>/VePMIR_b_TransAuxPmp2LmpHM_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPmp2LmpHM_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPmp2LmpHM_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPmp2Lmp);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2CurrentError_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2CurrentError_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2CurrentError_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_e);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2Current_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2Current_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2Current_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Cu);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2DryRun_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2DryRun_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2DryRun_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Dr);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2MntrRPM_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2MntrRPM_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2MntrRPM_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Mn);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2OilTemp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2OilTemp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2OilTemp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Oi);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2PstRnSt_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2PstRnSt_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2PstRnSt_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Ps);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2RespError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2RespError_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2RespError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Re);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2SpdAct_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2SpdAct_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Sp);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_SNA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2SpdAct_SNA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2SpdAct_SNA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_f);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2StallEvent_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2StallEvent_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2StallEvent_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2St);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2TempError_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2TempError_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2TempError_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_n);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2Temp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2Temp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2Temp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Te);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2TgtSpd_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2TgtSpd_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2TgtSpd_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Tg);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2VoltageError_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2VoltageError_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2VoltageError_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2_o);

    /* Outport: '<Root>/VePMIR_b_TransAuxPump2Voltage_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPump2Voltage_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPump2Voltage_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPump2Vo);

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpDryRun_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPumpDryRun_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpDryRun_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpDry);

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpOilTemp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPumpOilTemp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpOilTemp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpOil);

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpRespError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPumpRespError_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpRespError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpRes);

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpTCMReq' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPumpTCMReq_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpTCMReq_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpTCM);

    /* Outport: '<Root>/VePMIR_b_TransAuxPumpTemp_FA' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_b_TransAuxPumpTemp_FA_Out_Init'
     */
    (void)Rte_Write_VePMIR_b_TransAuxPumpTemp_FA_Value
        (PMIR_ac_B.OutportBufferForVePMIR_b_TransAuxPumpTem);

    /* Outport: '<Root>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAP_DVC_FlwRt_);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpAirPresntErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpAirPresntErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpAirPresntErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpAirPresntErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpAirPre);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpDeblock' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpDeblock_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpDeblock_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpDeblock_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpDebloc);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpDryRun' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpDryRun_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpDryRun_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpDryRun_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpDryRun);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpFailsafe' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpFailsafe_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpFailsafe_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpFailsafe_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpFailsa);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpLmpHM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpLmpHM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpLmpHM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpLmpHM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpLmpHM_);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpMntrRPM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpMntrRPM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpMntrRPM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpMntrRP);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpNodeErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpNodeErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpNodeErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpNodeErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpNodeEr);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpOT' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpOT_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpOT_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpOT_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpOT_Out);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpOverCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpOverCurrent_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpOverCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpOverCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpOverCu);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpPstRnSt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpPstRnSt_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpPstRnSt_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpPstRnSt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpPstRnS);

    /* Outport: '<Root>/VePMIR_e_HTAuxPumpSuppVltErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_HTAuxPumpSuppVltErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpSuppVltErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpSuppVltErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpSuppVl);

    /* Outport: '<Root>/VePMIR_e_LTAP_AirPrsntErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTAP_AirPrsntErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTAP_AirPrsntErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTAP_AirPrsntErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTAP_AirPrsntEr);

    /* Outport: '<Root>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTAP_DVC_FlwRt_);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpDeblock' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpDeblock_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpDeblock_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpDeblock_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpDeblo);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpDryRun' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpDryRun_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpDryRun_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpDryRun_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpDryRu);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpFailsafe' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpFailsafe_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpFailsafe_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpFailsafe_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpFails);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpLmpHM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpLmpHM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpLmpHM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpLmpHM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpLmpHM);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpMntrRPM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpMntrRPM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpMntrRPM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpMntrRPM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpMntrR);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpNodeErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpNodeErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpNodeErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpNodeErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpNodeE);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpOT' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpOT_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpOT_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpOT_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpOT_Ou);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpOverCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpOverCurrent_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpOverCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpOverCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpOverC);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpPstRnSt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpPstRnSt_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpPstRnSt_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpPstRnSt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpPstRn);

    /* Outport: '<Root>/VePMIR_e_LTActvPumpSuppVltErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTActvPumpSuppVltErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpSuppVltErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpSuppVltErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpSuppV);

    /* Outport: '<Root>/VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPP2_DVC_FlwRt);

    /* Outport: '<Root>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPP_DVC_FlwRt_);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2AirPresntErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2AirPresntErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2AirPresntErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2AirPresntErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2AirPr);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2Deblock' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2Deblock_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2Deblock_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2Deblock_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2Deblo);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2DryRun' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2DryRun_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2DryRun_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2DryRun_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2DryRu);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2Failsafe' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2Failsafe_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2Failsafe_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2Failsafe_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2Fails);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2LmpHM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2LmpHM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2LmpHM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2LmpHM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2LmpHM);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2MntrRPM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2MntrRPM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2MntrRPM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2MntrRPM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2MntrR);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2NodeErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2NodeErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2NodeErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2NodeErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2NodeE);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2OT' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2OT_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2OT_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2OT_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2OT_Ou);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2OverCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2OverCurrent_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2OverCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2OverCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2OverC);

    /* Outport: '<Root>/VePMIR_e_LTPsvPump2SuppVltErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPump2SuppVltErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2SuppVltErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2SuppVltErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2SuppV);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpAirPresntErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpAirPresntErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpAirPresntErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpAirPresntErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpAirPre);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpDeblock' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpDeblock_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpDeblock_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpDeblock_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpDebloc);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpDryRun' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpDryRun_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpDryRun_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpDryRun_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpDryRun);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpFailsafe' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpFailsafe_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpFailsafe_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpFailsafe_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpFailsa);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpLmpHM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpLmpHM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpLmpHM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpLmpHM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpLmpHM_);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpMntrRPM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpMntrRPM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpMntrRPM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpMntrRPM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpMntrRP);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpNodeErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpNodeErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpNodeErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpNodeErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpNodeEr);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpOT' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpOT_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpOT_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpOT_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpOT_Out);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpOverCurrent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpOverCurrent_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpOverCurrent_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpOverCurrent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpOverCu);

    /* Outport: '<Root>/VePMIR_e_LTPsvPumpSuppVltErr' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_LTPsvPumpSuppVltErr_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpSuppVltErr_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpSuppVltErr_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpSuppVl);

    /* Outport: '<Root>/VePMIR_e_PWM_EOP_IOCtrlMode' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_PWM_EOP_IOCtrlMode_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_PWM_EOP_IOCtrlMode_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_PWM_EOP_IOCtrlMode_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_PWM_EOP_IOCtrlM);

    /* Outport: '<Root>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TAP2_SpdDsrd_IO);

    /* Outport: '<Root>/VePMIR_e_TAP_ColdBiasSts' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TAP_ColdBiasSts_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TAP_ColdBiasSts_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TAP_ColdBiasSts_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TAP_ColdBiasSts);

    /* Outport: '<Root>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TAP_SpdDsrd_IO_);

    /* Outport: '<Root>/VePMIR_e_TransAuxPmp2ColdBiasSts' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPmp2ColdBiasSts_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPmp2ColdBiasSts_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPmp2ColdBiasSts_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPmp2Col);

    /* Outport: '<Root>/VePMIR_e_TransAuxPmp2LmpHM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPmp2LmpHM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPmp2LmpHM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPmp2LmpHM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPmp2Lmp);

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2CurrentError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPump2CurrentError_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2CurrentError_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2CurrentError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Cu);

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2DryRun' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPump2DryRun_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2DryRun_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2DryRun_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Dr);

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2MntrRPM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPump2MntrRPM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2MntrRPM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2MntrRPM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Mn);

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2PstRnSt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPump2PstRnSt_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2PstRnSt_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2PstRnSt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Ps);

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2StallEvent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPump2StallEvent_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2StallEvent_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2StallEvent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2St);

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2TempError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPump2TempError_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2TempError_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2TempError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Te);

    /* Outport: '<Root>/VePMIR_e_TransAuxPump2VoltageError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPump2VoltageError_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2VoltageError_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2VoltageError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Vo);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpCurrentError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpCurrentError_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpCurrentError_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpCurrentError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpCur);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpDryRun' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpDryRun_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpDryRun_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpDryRun_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpDry);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpLmpHM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpLmpHM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpLmpHM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpLmpHM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpLmp);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpMntrRPM' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpMntrRPM_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpMntrRPM_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpMntrRPM_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpMnt);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpPstRnSt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpPstRnSt_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpPstRnSt_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpPstRnSt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpPst);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpStallEvent' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpStallEvent_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpStallEvent_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpStallEvent_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpSta);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpTempError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpTempError_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpTempError_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpTempError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpTem);

    /* Outport: '<Root>/VePMIR_e_TransAuxPumpVoltageError' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_e_TransAuxPumpVoltageError_Out_Init'
     *  SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpVoltageError_Out_Init'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpVoltageError_Value
        (PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpVol);

    /* Outport: '<Root>/VePMIR_n_AuxPumpSpdAct' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_AuxPumpSpdAct_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_AuxPumpSpdAct_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_AuxPumpSpdAct_O);

    /* Outport: '<Root>/VePMIR_n_DVC_AuxPump2SpdDsrd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_DVC_AuxPump2SpdDsrd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_DVC_AuxPump2SpdDsrd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_DVC_AuxPump2Spd);

    /* Outport: '<Root>/VePMIR_n_DVC_AuxPumpSpdDsrd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_DVC_AuxPumpSpdDsrd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_DVC_AuxPumpSpdDsrd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_DVC_AuxPumpSpdD);

    /* Outport: '<Root>/VePMIR_n_EOP_SpeedFdbk' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_EOP_SpeedFdbk_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_EOP_SpeedFdbk_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_EOP_SpeedFdbk_O);

    /* Outport: '<Root>/VePMIR_n_FCCPmpActSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_FCCPmpActSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_FCCPmpActSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_FCCPmpActSpd_Ou);

    /* Outport: '<Root>/VePMIR_n_HTAPMaxSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_HTAPMaxSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_HTAPMaxSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_HTAPMaxSpd_Out_);

    /* Outport: '<Root>/VePMIR_n_HTAPMinSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_HTAPMinSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_HTAPMinSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_HTAPMinSpd_Out_);

    /* Outport: '<Root>/VePMIR_n_HTAP_DVC_RPM_PEClFlwRt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_HTAP_DVC_RPM_PEClFlwRt_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_HTAP_DVC_RPM_PEClFlwRt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_HTAP_DVC_RPM_PE);

    /* Outport: '<Root>/VePMIR_n_HTAuxPumpRPMAct' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_HTAuxPumpRPMAct_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_HTAuxPumpRPMAct_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_HTAuxPumpRPMAct);

    /* Outport: '<Root>/VePMIR_n_HTAuxPumpRPMTgt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_HTAuxPumpRPMTgt_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_HTAuxPumpRPMTgt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_HTAuxPumpRPMTgt);

    /* Outport: '<Root>/VePMIR_n_LTAP_DVC_RPM_PEClFlwRt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTAP_DVC_RPM_PEClFlwRt_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTAP_DVC_RPM_PEClFlwRt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTAP_DVC_RPM_PE);

    /* Outport: '<Root>/VePMIR_n_LTActvPumpRPMAct' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTActvPumpRPMAct_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTActvPumpRPMAct_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTActvPumpRPMAc);

    /* Outport: '<Root>/VePMIR_n_LTActvPumpRPMTgt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTActvPumpRPMTgt_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTActvPumpRPMTgt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTActvPumpRPMTg);

    /* Outport: '<Root>/VePMIR_n_LTPP2MaxSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPP2MaxSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPP2MaxSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPP2MaxSpd_Out);

    /* Outport: '<Root>/VePMIR_n_LTPP2MinSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPP2MinSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPP2MinSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPP2MinSpd_Out);

    /* Outport: '<Root>/VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPP2_DVC_RPM_PEClFlwRt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPP2_DVC_RPM_P);

    /* Outport: '<Root>/VePMIR_n_LTPPMaxSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPPMaxSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPPMaxSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPPMaxSpd_Out_);

    /* Outport: '<Root>/VePMIR_n_LTPPMinSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPPMinSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPPMinSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPPMinSpd_Out_);

    /* Outport: '<Root>/VePMIR_n_LTPP_DVC_RPM_PEClFlwRt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPP_DVC_RPM_PEClFlwRt_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPP_DVC_RPM_PEClFlwRt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPP_DVC_RPM_PE);

    /* Outport: '<Root>/VePMIR_n_LTPsvPump2ActSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPsvPump2ActSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPump2ActSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPump2ActSp);

    /* Outport: '<Root>/VePMIR_n_LTPsvPump2RPMAct' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPsvPump2RPMAct_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPump2RPMAct_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPump2RPMAc);

    /* Outport: '<Root>/VePMIR_n_LTPsvPumpActSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPsvPumpActSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPumpActSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPumpActSpd);

    /* Outport: '<Root>/VePMIR_n_LTPsvPumpTgtSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPsvPumpTgtSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPumpTgtSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPumpTgtSpd);

    /* Outport: '<Root>/VePMIR_n_LTPsvPump_RPMAct' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_LTPsvPump_RPMAct_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_LTPsvPump_RPMAct_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_LTPsvPump_RPMAc);

    /* Outport: '<Root>/VePMIR_n_TransAuxPump2SpdAct' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_TransAuxPump2SpdAct_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_TransAuxPump2SpdAct_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_TransAuxPump2Sp);

    /* Outport: '<Root>/VePMIR_n_TransAuxPump2TgtSpd' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_TransAuxPump2TgtSpd_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_TransAuxPump2TgtSpd_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_TransAuxPump2Tg);

    /* Outport: '<Root>/VePMIR_n_TransAuxPump_RPMTgt' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_n_TransAuxPump_RPMTgt_Out_Init'
     */
    (void)Rte_Write_VePMIR_n_TransAuxPump_RPMTgt_Value
        (PMIR_ac_B.OutportBufferForVePMIR_n_TransAuxPump_RP);

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp2_TAP_HW_VER' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_y_TransAuxPmp2_TAP_HW_VER_Out_Init'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp2_TAP_HW_VER_Value
        (PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp2_TA);

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp2_TAP_SW_VER' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_y_TransAuxPmp2_TAP_SW_VER_Out_Init'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp2_TAP_SW_VER_Value
        (PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp2__i);

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp_TAP_HW_VER' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_y_TransAuxPmp_TAP_HW_VER_Out_Init'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp_TAP_HW_VER_Value
        (PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp_TAP);

    /* Outport: '<Root>/VePMIR_y_TransAuxPmp_TAP_SW_VER' incorporates:
     *  SignalConversion generated from: '<S110>/VePMIR_y_TransAuxPmp_TAP_SW_VER_Out_Init'
     */
    (void)Rte_Write_VePMIR_y_TransAuxPmp_TAP_SW_VER_Value
        (PMIR_ac_B.OutportBufferForVePMIR_y_TransAuxPmp_T_h);

    /* Merge: '<Root>/Merge_219' incorporates:
     *  SignalConversion generated from: '<S110>/DVC_AuxPmp2SpdDsrd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_DVC_AuxPmp2SpdDsrd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForDVC_AuxPmp2SpdDsrd_INIT_);

    /* Merge: '<Root>/Merge_218' incorporates:
     *  SignalConversion generated from: '<S110>/DVC_AuxPmp2SpdEnbl_INIT_write'
     *  SignalConversion generated from: '<S1177>/DVC_AuxPmp2SpdEnbl_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_DVC_AuxPmp2SpdEnbl_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForDVC_AuxPmp2SpdEnbl_INIT_);

    /* Merge: '<Root>/Merge_229' incorporates:
     *  SignalConversion generated from: '<S110>/DVC_AuxPmpSpdDsrd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_DVC_AuxPmpSpdDsrd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForDVC_AuxPmpSpdDsrd_INIT_w);

    /* Merge: '<Root>/Merge_228' incorporates:
     *  SignalConversion generated from: '<S110>/DVC_AuxPmpSpdEnbl_INIT_write'
     *  SignalConversion generated from: '<S1177>/DVC_AuxPmpSpdEnbl_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_DVC_AuxPmpSpdEnbl_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForDVC_AuxPmpSpdEnbl_INIT_w);

    /* Merge: '<Root>/Merge_163' incorporates:
     *  SignalConversion generated from: '<S110>/ECM_LTPsvPmpRq_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_ECM_LTPsvPmpRqFA_write_IRV
        (PMIR_ac_B.OutportBufferForECM_LTPsvPmpRq_FA_INIT_w);

    /* Merge: '<Root>/Merge_164' incorporates:
     *  SignalConversion generated from: '<S110>/ECM_LTPsvPmpRq_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_ECM_LTPsvPmpRq_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForECM_LTPsvPmpRq_INIT_writ);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpActSpd_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_FCCPmpActSpdFA_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpActSpd_FA_INIT_wri);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpActSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpActSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpActSpd_INIT_write);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpActTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_FCCPmpActTempFA_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpActTemp_FA_INIT_wr);

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpActTemp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpActTemp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpActTemp_INIT_write);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpActVlt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_FCCPmpActVltFA_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpActVlt_FA_INIT_wri);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpActVlt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpActVlt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpActVlt_INIT_write);

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrLIN_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrLIN_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrLIN_INIT_write);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrLLO_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrLLO_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrLLO_INIT_write);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrOC_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrOC_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrOC_INIT_write);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrOTD_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrOTD_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrOTD_INIT_write);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrOT_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrOT_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrOT_INIT_write);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrOV_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrOV_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrOV_INIT_write);

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrSC_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrSC_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrSC_INIT_write);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrUV_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrUV_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrUV_INIT_write);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpErrVD_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpErrVD_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpErrVD_INIT_write);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpIntFlt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpIntFlt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpIntFlt_INIT_write);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpStlFlt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpStlFlt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpStlFlt_INIT_write);

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S110>/FCCPmpSuppCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_FCCPmpSuppCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForFCCPmpSuppCrnt_INIT_writ);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S110>/HTAP_DVC_FlwRt_IO_Cntl_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAP_DVC_FlwRt_IO_Cntl_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAP_DVC_FlwRt_IO_Cntl_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAP_DVC_FlwRt_IO_Cntl_I);

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S110>/HTAP_DVC_IO_Pct_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAP_DVC_IO_Pct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAP_DVC_IO_Pct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAP_DVC_IO_Pct_INIT_wri);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S110>/HTAP_DVC_Pct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAP_DVC_Pct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAP_DVC_Pct_INIT_write);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S110>/HTAP_DVC_RPM_BatClFlwRt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAP_DVC_RPM_BatClFlwRt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAP_DVC_RPM_BatClFlwRt_);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPmpOT_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HT_AuxPmpOTFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPmpOT_FA_INIT_write);

    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPmpOT_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPmpOT_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPmpOT_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPmpOT_INIT_write);

    /* Merge: '<Root>/Merge_97' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPmpRPMTgt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpRPMTgtFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPmpRPMTgt_FA_INIT_w);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPmpRPMTgt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPmpRPMTgt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPmpRPMTgt_INIT_writ);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpAirPresntErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPmpAirPrsntErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpAirPresntErr_FA);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpAirPresntErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPumpAirPresntErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpAirPresntErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpAirPresntErr_IN);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpCrnt_INIT_write);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpDeblock_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpDeblockFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpDeblock_FA_INIT);

    /* Merge: '<Root>/Merge_79' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpDeblock_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPumpDeblock_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpDeblock_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpDeblock_INIT_wr);

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpDryRun_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpDryRunFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpDryRun_FA_INIT_);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpDryRun_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPumpDryRun_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpDryRun_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpDryRun_INIT_wri);

    /* Merge: '<Root>/Merge_82' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpFailsafe_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPumpFailsafe_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpFailsafe_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpFailsafe_INIT_w);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpNodeErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpNodeErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpNodeErr_FA_INIT);

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpNodeErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPumpNodeErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpNodeErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpNodeErr_INIT_wr);

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpOvrCrnt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpOvrCrntFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpOvrCrnt_FA_INIT);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpOvrCrnt_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPumpOvrCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpOvrCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpOvrCrnt_INIT_wr);

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpProdSuplrID_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpProdSuplrID_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpProdSuplrID_INI);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_94' incorporates:
     *  Constant: '<S1231>/Calib'
     *  Logic: '<S1208>/AND'
     *  SignalConversion generated from: '<S110>/HTAuxPumpRPMAct_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpRPMActFA_write_IRV
        (KePMIR_b_HTAuxPumpRPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpRPMAct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpRPMAct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpRPMAct_INIT_wri);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_96' incorporates:
     *  Constant: '<S1231>/Calib'
     *  Logic: '<S1207>/AND'
     *  SignalConversion generated from: '<S110>/HTAuxPumpRPMAct_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpRPMActSNA_write_IRV
        (KePMIR_b_HTAuxPumpRPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpRespErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpRespErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpRespErr_INIT_wr);

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpSuppVltErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpSuppVltErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpSuppVltErr_FA_I);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpSuppVltErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPumpSuppVltErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpSuppVltErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpSuppVltErr_INIT);

    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpVlt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HT_AuxPmpVltgFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpVlt_FA_INIT_wri);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPumpVlt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPumpVlt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPumpVlt_INIT_write);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_75' incorporates:
     *  Constant: '<S1219>/Calib'
     *  Logic: '<S1206>/AND'
     *  SignalConversion generated from: '<S110>/HTAuxPump_ActSpd_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpRPMActPctFA_write_IRV
        (KePMIR_b_HTAuxPumpActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPump_ActSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPump_ActSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPump_ActSpd_INIT_wr);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_74' incorporates:
     *  Constant: '<S1219>/Calib'
     *  Logic: '<S1205>/AND'
     *  SignalConversion generated from: '<S110>/HTAuxPump_ActSpd_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpRPMActPctSNA_write_IRV
        (KePMIR_b_HTAuxPumpActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPump_LmpHM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPump_LmpHMFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPump_LmpHM_FA_INIT_);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPump_LmpHM_INIT_write'
     *  SignalConversion generated from: '<S1177>/HTAuxPump_LmpHM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPump_LmpHM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPump_LmpHM_INIT_wri);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPump_TgtSpd_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HTAuxPumpRPMTgtPctFA_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPump_TgtSpd_FA_INIT);

    /* Merge: '<Root>/Merge_104' incorporates:
     *  SignalConversion generated from: '<S110>/HTAuxPump_TgtSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HTAuxPump_TgtSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHTAuxPump_TgtSpd_INIT_wr);

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S110>/HT_AuxPmpMntrRPM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HT_AuxPmpMntrRPMFA_write_IRV
        (PMIR_ac_B.OutportBufferForHT_AuxPmpMntrRPM_FA_INIT);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S110>/HT_AuxPmpMntrRPM_INIT_write'
     *  SignalConversion generated from: '<S1177>/HT_AuxPmpMntrRPM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HT_AuxPmpMntrRPM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHT_AuxPmpMntrRPM_INIT_wr);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_100' incorporates:
     *  Constant: '<S1235>/Calib'
     *  Logic: '<S1210>/AND'
     *  SignalConversion generated from: '<S110>/HT_AuxPmpTemp_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HT_AuxPmpTempFA_write_IRV
        (KePMIR_b_HTAuxPumpTemp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S110>/HT_AuxPmpTemp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HT_AuxPmpTemp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHT_AuxPmpTemp_INIT_write);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_102' incorporates:
     *  Constant: '<S1235>/Calib'
     *  Logic: '<S1209>/AND'
     *  SignalConversion generated from: '<S110>/HT_AuxPmpTemp_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HT_AuxPmpTempSNA_write_IRV
        (KePMIR_b_HTAuxPumpTemp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S110>/HT_AuxPmp_PstRnSt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_HT_AuxPmp_PstRnStFA_write_IRV
        (PMIR_ac_B.OutportBufferForHT_AuxPmp_PstRnSt_FA_INI);

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S110>/HT_AuxPmp_PstRnSt_INIT_write'
     *  SignalConversion generated from: '<S1177>/HT_AuxPmp_PstRnSt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HT_AuxPmp_PstRnSt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHT_AuxPmp_PstRnSt_INIT_w);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S110>/HT_AuxPmp_Ver_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_HT_AuxPmp_Ver_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForHT_AuxPmp_Ver_INIT_write);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S110>/LTAP_DVC_FlwRt_IO_Cntl_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTAP_DVC_FlwRt_IO_Cntl_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTAP_DVC_FlwRt_IO_Cntl_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTAP_DVC_FlwRt_IO_Cntl_I);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S110>/LTAP_DVC_IO_Pct_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTAP_DVC_IO_Pct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTAP_DVC_IO_Pct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTAP_DVC_IO_Pct_INIT_wri);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S110>/LTAP_DVC_Pct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTAP_DVC_Pct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTAP_DVC_Pct_INIT_write);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S110>/LTAP_DVC_RPM_BatClFlwRt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTAP_DVC_RPM_BatClFlwRt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTAP_DVC_RPM_BatClFlwRt_);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  Constant: '<S1270>/Calib'
     *  Logic: '<S1255>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpActSpd_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpRPMActPctFA_write_IRV
        (KePMIR_b_LTActPumpActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpActSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpActSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpActSpd_INIT_wri);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Constant: '<S1270>/Calib'
     *  Logic: '<S1254>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpActSpd_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpRPMActPctSNA_write_IRV
        (KePMIR_b_LTActPumpActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpAirPrsntErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpAirPrsntErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpAirPrsntErr_FA_);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpAirPrsntErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpAirPrsntErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpAirPrsntErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpAirPrsntErr_INI);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpCrnt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpCrntFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpCrnt_FA_INIT_wr);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpCrnt_INIT_write);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpDeblock_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpDeblockFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpDeblock_FA_INIT);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpDeblock_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpDeblock_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpDeblock_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpDeblock_INIT_wr);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Constant: '<S1274>/Calib'
     *  Logic: '<S1259>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpDryRun_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpDryRunFA_write_IRV
        (KePMIR_b_LTActPumpDryRun_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpDryRun_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpDryRun_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpDryRun_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpDryRun_INIT_wri);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  Constant: '<S1274>/Calib'
     *  Logic: '<S1258>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpDryRun_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpDryRunSNA_write_IRV
        (KePMIR_b_LTActPumpDryRun_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpFailsafe_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpFailsafeFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpFailsafe_FA_INI);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpFailsafe_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpFailsafe_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpFailsafe_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpFailsafe_INIT_w);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpLmpHM_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpLmpHM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpLmpHM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpLmpHM_INIT_writ);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpMntrRPM_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpMntrRPM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpMntrRPM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpMntrRPM_INIT_wr);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpNodeErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpNodeErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpNodeErr_FA_INIT);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpNodeErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpNodeErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpNodeErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpNodeErr_INIT_wr);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpOvrCrnt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpOvrCrntFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpOvrCrnt_FA_INIT);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpOvrCrnt_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpOvrCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpOvrCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpOvrCrnt_INIT_wr);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpPmpRPMTgt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpRPMTgtFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpPmpRPMTgt_FA_IN);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpPmpRPMTgt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpPmpRPMTgt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpPmpRPMTgt_INIT_);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpProdSuplr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpProdSuplr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpProdSuplr_INIT_);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpPstRnSt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpPstRnStFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpPstRnSt_FA_INIT);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpPstRnSt_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpPstRnSt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpPstRnSt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpPstRnSt_INIT_wr);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Constant: '<S1281>/Calib'
     *  Logic: '<S1257>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpRPMAct_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpRPMActFA_write_IRV
        (KePMIR_b_LTActPumpRPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpRPMAct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpRPMAct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpRPMAct_INIT_wri);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_34' incorporates:
     *  Constant: '<S1281>/Calib'
     *  Logic: '<S1256>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpRPMAct_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpRPMActSNA_write_IRV
        (KePMIR_b_LTActPumpRPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpRespErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpRespErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpRespErr_INIT_wr);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpSuppVltErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpSuppVltErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpSuppVltErr_FA_I);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpSuppVltErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTActPumpSuppVltErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpSuppVltErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpSuppVltErr_INIT);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  Constant: '<S1285>/Calib'
     *  Logic: '<S1261>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpTemp_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpTempFA_write_IRV
        (KePMIR_b_LTActPumpTemp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpTemp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpTemp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpTemp_INIT_write);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_40' incorporates:
     *  Constant: '<S1285>/Calib'
     *  Logic: '<S1260>/AND'
     *  SignalConversion generated from: '<S110>/LTActPumpTemp_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpTempSNA_write_IRV
        (KePMIR_b_LTActPumpTemp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpTgtSpd_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpRPMTgtPctFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpTgtSpd_FA_INIT_);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpTgtSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpTgtSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpTgtSpd_INIT_wri);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpVlt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTActPumpVltFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpVlt_FA_INIT_wri);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPumpVlt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPumpVlt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPumpVlt_INIT_write);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S110>/LTActPump_Ver_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTActPump_Ver_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTActPump_Ver_INIT_write);

    /* Merge: '<Root>/Merge_145' incorporates:
     *  SignalConversion generated from: '<S110>/LTPP2_DVC_IO_Pct_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPP2_DVC_IO_Pct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPP2_DVC_IO_Pct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPP2_DVC_IO_Pct_INIT_wr);

    /* Merge: '<Root>/Merge_144' incorporates:
     *  SignalConversion generated from: '<S110>/LTPP2_DVC_Pct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPP2_DVC_Pct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPP2_DVC_Pct_INIT_write);

    /* Merge: '<Root>/Merge_156' incorporates:
     *  SignalConversion generated from: '<S110>/LTPP_DVC_FlwRt_IO_Cntl_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPP_DVC_FlwRt_IO_Cntl_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPP_DVC_FlwRt_IO_Cntl_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPP_DVC_FlwRt_IO_Cntl_I);

    /* Merge: '<Root>/Merge_158' incorporates:
     *  SignalConversion generated from: '<S110>/LTPP_DVC_IO_Cntl_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPP_DVC_IO_Cntl_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPP_DVC_IO_Cntl_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPP_DVC_IO_Cntl_INIT_wr);

    /* Merge: '<Root>/Merge_157' incorporates:
     *  SignalConversion generated from: '<S110>/LTPP_DVC_Pct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPP_DVC_Pct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPP_DVC_Pct_INIT_write);

    /* Merge: '<Root>/Merge_155' incorporates:
     *  SignalConversion generated from: '<S110>/LTPP_DVC_RPM_PEClFlwRt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPP_DVC_RPM_PEClFlwRt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPP_DVC_RPM_PEClFlwRt_I);

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S110>/LTPSVPump2Crnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPSVPump2Crnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPSVPump2Crnt_INIT_writ);

    /* Merge: '<Root>/Merge_154' incorporates:
     *  SignalConversion generated from: '<S110>/LTPSVPumpCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPSVPumpCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPSVPumpCrnt_INIT_write);

    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmp2ProdSuplrID_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmp2ProdSuplrID_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmp2ProdSuplrID_INI);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_114' incorporates:
     *  Constant: '<S1332>/Calib'
     *  Logic: '<S1306>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPmp2_ActSpd_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2RPMActPctFA_write_IRV
        (KePMIR_b_LTPsvPump2_ActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmp2_ActSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmp2_ActSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmp2_ActSpd_INIT_wr);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_113' incorporates:
     *  Constant: '<S1332>/Calib'
     *  Logic: '<S1305>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPmp2_ActSpd_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2RPMActPctSNA_write_IRV
        (KePMIR_b_LTPsvPump2_ActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_139' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmp2_TgtSpd_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2RPMTgtPctFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmp2_TgtSpd_FA_INIT);

    /* Merge: '<Root>/Merge_140' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmp2_TgtSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmp2_TgtSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmp2_TgtSpd_INIT_wr);

    /* Merge: '<Root>/Merge_146' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmpAirPrsntErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPmpAirPrsntErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmpAirPrsntErr_FA_I);

    /* Merge: '<Root>/Merge_147' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmpAirPrsntErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPmpAirPrsntErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmpAirPrsntErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmpAirPrsntErr_INIT);

    /* Merge: '<Root>/Merge_148' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmpProdSuplr_ID_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmpProdSuplr_ID_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmpProdSuplr_ID_INI);

    /* Merge: '<Root>/Merge_179' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmpRPMTgt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpRPMTgtFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmpRPMTgt_FA_INIT_w);

    /* Merge: '<Root>/Merge_180' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmpRPMTgt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmpRPMTgt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmpRPMTgt_INIT_writ);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_152' incorporates:
     *  Constant: '<S1379>/Calib'
     *  Logic: '<S1353>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPmp_ActSpd_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpRPMActPctFA_write_IRV
        (KePMIR_b_LTPsvPump_ActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_153' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmp_ActSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmp_ActSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmp_ActSpd_INIT_wri);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_151' incorporates:
     *  Constant: '<S1379>/Calib'
     *  Logic: '<S1352>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPmp_ActSpd_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpRPMActPctSNA_write_IRV
        (KePMIR_b_LTPsvPump_ActSpd_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_185' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmp_TgtSpd_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpRPMTgtPctFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmp_TgtSpd_FA_INIT_);

    /* Merge: '<Root>/Merge_186' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPmp_TgtSpd_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPmp_TgtSpd_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPmp_TgtSpd_INIT_wri);

    /* Merge: '<Root>/Merge_108' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2AirPresntErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPmp2AirPrsntErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2AirPresntErr_F);

    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2AirPresntErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2AirPresntErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2AirPresntErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2AirPresntErr_I);

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2Deblock_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2DeblockFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2Deblock_FA_INI);

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2Deblock_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2Deblock_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2Deblock_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2Deblock_INIT_w);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2DryRun_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2DryRunFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2DryRun_FA_INIT);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2DryRun_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2DryRun_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2DryRun_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2DryRun_INIT_wr);

    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2Failsafe_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2Failsafe_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2Failsafe_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2Failsafe_INIT_);

    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2MntrRPM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2MntrRPMFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2MntrRPM_FA_INI);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2MntrRPM_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2MntrRPM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2MntrRPM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2MntrRPM_INIT_w);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2NodeErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2NodeErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2NodeErr_FA_INI);

    /* Merge: '<Root>/Merge_127' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2NodeErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2NodeErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2NodeErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2NodeErr_INIT_w);

    /* Merge: '<Root>/Merge_130' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2OvrCrnt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2OvrCrntFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2OvrCrnt_FA_INI);

    /* Merge: '<Root>/Merge_131' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2OvrCrnt_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2OvrCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2OvrCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2OvrCrnt_INIT_w);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_133' incorporates:
     *  Constant: '<S1327>/Calib'
     *  Logic: '<S1308>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPump2RPMAct_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2RPMActFA_write_IRV
        (KePMIR_b_LTPsvPump2RPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2RPMAct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2RPMAct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2RPMAct_INIT_wr);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_132' incorporates:
     *  Constant: '<S1327>/Calib'
     *  Logic: '<S1307>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPump2RPMAct_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2RPMActSNA_write_IRV
        (KePMIR_b_LTPsvPump2RPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_135' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2RespErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2RespErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2RespErr_INIT_w);

    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2SuppVltErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2SuppVltErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2SuppVltErr_FA_);

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2SuppVltErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2SuppVltErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2SuppVltErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2SuppVltErr_INI);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_137' incorporates:
     *  Constant: '<S1330>/Calib'
     *  Logic: '<S1310>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPump2Temp_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2TempFA_write_IRV
        (KePMIR_b_LTPsvPump2Temp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_138' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2Temp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2Temp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2Temp_INIT_writ);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_136' incorporates:
     *  Constant: '<S1330>/Calib'
     *  Logic: '<S1309>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPump2Temp_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2TempSNA_write_IRV
        (KePMIR_b_LTPsvPump2Temp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_142' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2Vlt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LT_PsvPmp2VltgFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2Vlt_FA_INIT_wr);

    /* Merge: '<Root>/Merge_143' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2Vlt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2Vlt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2Vlt_INIT_write);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2_LmpHM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump2_LmpHMFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2_LmpHM_FA_INIT);

    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2_LmpHM_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump2_LmpHM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2_LmpHM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2_LmpHM_INIT_wr);

    /* Merge: '<Root>/Merge_141' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump2_Ver_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump2_Ver_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump2_Ver_INIT_writ);

    /* Merge: '<Root>/Merge_159' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpDeblock_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpDeblockFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpDeblock_FA_INIT);

    /* Merge: '<Root>/Merge_160' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpDeblock_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPumpDeblock_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpDeblock_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpDeblock_INIT_wr);

    /* Merge: '<Root>/Merge_161' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpDryRun_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpDryRunFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpDryRun_FA_INIT_);

    /* Merge: '<Root>/Merge_162' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpDryRun_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPumpDryRun_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpDryRun_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpDryRun_INIT_wri);

    /* Merge: '<Root>/Merge_165' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpFailsafe_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPumpFailsafe_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpFailsafe_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpFailsafe_INIT_w);

    /* Merge: '<Root>/Merge_168' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpMntrRPM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpMntrRPMFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpMntrRPM_FA_INIT);

    /* Merge: '<Root>/Merge_169' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpMntrRPM_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPumpMntrRPM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpMntrRPM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpMntrRPM_INIT_wr);

    /* Merge: '<Root>/Merge_170' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpNodeErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpNodeErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpNodeErr_FA_INIT);

    /* Merge: '<Root>/Merge_171' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpNodeErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPumpNodeErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpNodeErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpNodeErr_INIT_wr);

    /* Merge: '<Root>/Merge_174' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpOvrCrnt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpOvrCrntFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpOvrCrnt_FA_INIT);

    /* Merge: '<Root>/Merge_175' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpOvrCrnt_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPumpOvrCrnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpOvrCrnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpOvrCrnt_INIT_wr);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_177' incorporates:
     *  Constant: '<S1373>/Calib'
     *  Logic: '<S1349>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPumpRPMAct_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpRPMActFA_write_IRV
        (KePMIR_b_LTPsvPumpRPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_178' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpRPMAct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpRPMAct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpRPMAct_INIT_wri);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_176' incorporates:
     *  Constant: '<S1373>/Calib'
     *  Logic: '<S1348>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPumpRPMAct_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpRPMActSNA_write_IRV
        (KePMIR_b_LTPsvPumpRPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_181' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpRespErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpRespErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpRespErr_INIT_wr);

    /* Merge: '<Root>/Merge_149' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpSuppVltErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpSuppVltErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpSuppVltErr_FA_I);

    /* Merge: '<Root>/Merge_150' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpSuppVltErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPumpSuppVltErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpSuppVltErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpSuppVltErr_INIT);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_183' incorporates:
     *  Constant: '<S1377>/Calib'
     *  Logic: '<S1351>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPumpTemp_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpTempFA_write_IRV
        (KePMIR_b_LTPsvPumpTemp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_184' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpTemp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpTemp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpTemp_INIT_write);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_182' incorporates:
     *  Constant: '<S1377>/Calib'
     *  Logic: '<S1350>/AND'
     *  SignalConversion generated from: '<S110>/LTPsvPumpTemp_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPumpTempSNA_write_IRV
        (KePMIR_b_LTPsvPumpTemp_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_188' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpVlt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LT_PsvPmpVltgFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpVlt_FA_INIT_wri);

    /* Merge: '<Root>/Merge_189' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPumpVlt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPumpVlt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPumpVlt_INIT_write);

    /* Merge: '<Root>/Merge_166' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump_LmpHM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LTPsvPump_LmpHMFA_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump_LmpHM_FA_INIT_);

    /* Merge: '<Root>/Merge_167' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump_LmpHM_INIT_write'
     *  SignalConversion generated from: '<S1177>/LTPsvPump_LmpHM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump_LmpHM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump_LmpHM_INIT_wri);

    /* Merge: '<Root>/Merge_187' incorporates:
     *  SignalConversion generated from: '<S110>/LTPsvPump_Ver_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LTPsvPump_Ver_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLTPsvPump_Ver_INIT_write);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S110>/LT_ActvPmpOT_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LT_ActvPmpOTFA_write_IRV
        (PMIR_ac_B.OutportBufferForLT_ActvPmpOT_FA_INIT_wri);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S110>/LT_ActvPmpOT_INIT_write'
     *  SignalConversion generated from: '<S1177>/LT_ActvPmpOT_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LT_ActvPmpOT_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLT_ActvPmpOT_INIT_write);

    /* Merge: '<Root>/Merge_128' incorporates:
     *  SignalConversion generated from: '<S110>/LT_PsvPmp2OT_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LT_PsvPmp2OTFA_write_IRV
        (PMIR_ac_B.OutportBufferForLT_PsvPmp2OT_FA_INIT_wri);

    /* Merge: '<Root>/Merge_129' incorporates:
     *  SignalConversion generated from: '<S110>/LT_PsvPmp2OT_INIT_write'
     *  SignalConversion generated from: '<S1177>/LT_PsvPmp2OT_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LT_PsvPmp2OT_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLT_PsvPmp2OT_INIT_write);

    /* Merge: '<Root>/Merge_172' incorporates:
     *  SignalConversion generated from: '<S110>/LT_PsvPmpOT_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_LT_PsvPmpOTFA_write_IRV
        (PMIR_ac_B.OutportBufferForLT_PsvPmpOT_FA_INIT_writ);

    /* Merge: '<Root>/Merge_173' incorporates:
     *  SignalConversion generated from: '<S110>/LT_PsvPmpOT_INIT_write'
     *  SignalConversion generated from: '<S1177>/LT_PsvPmpOT_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_LT_PsvPmpOT_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForLT_PsvPmpOT_INIT_write);

    /* Merge: '<Root>/Merge_226' incorporates:
     *  SignalConversion generated from: '<S110>/PWM_EOP_IOCtrlMode_INIT'
     *  SignalConversion generated from: '<S1177>/PWM_EOP_IOCtrlMode_INIT'
     * */
    Rte_IrvWrite_PMIR_PwrOn_PWM_EOP_IOCtrlMode_INIT_IRV
        (PMIR_ac_B.OutportBufferForPWM_EOP_IOCtrlMode_INIT);

    /* Merge: '<Root>/Merge_227' incorporates:
     *  SignalConversion generated from: '<S110>/PWM_EOP_IOCtrlSpd_INIT'
     * */
    Rte_IrvWrite_PMIR_PwrOn_PWM_EOP_IOCtrlSpd_INIT_IRV
        (PMIR_ac_B.OutportBufferForPWM_EOP_IOCtrlSpd_INIT);

    /* Merge: '<Root>/Merge_190' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_ColdBiasSts_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_ColdBiasStsFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_ColdBiasSts);

    /* Merge: '<Root>/Merge_191' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_ColdBiasSts_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_ColdBiasSts_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_ColdBiasSts_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_ColdBiasS_i);

    /* Merge: '<Root>/Merge_192' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_CrntErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_CrntErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_CrntErr_FA_);

    /* Merge: '<Root>/Merge_193' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_CrntErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_CrntErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_CrntErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_CrntErr_INI);

    /* Merge: '<Root>/Merge_194' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_Crnt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_CrntFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_Crnt_FA_INI);

    /* Merge: '<Root>/Merge_195' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_Crnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_Crnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_Crnt_INIT_w);

    /* Merge: '<Root>/Merge_196' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_DryRun_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_DryRunFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_DryRun_FA_I);

    /* Merge: '<Root>/Merge_197' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_DryRun_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_DryRun_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_DryRun_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_DryRun_INIT);

    /* Merge: '<Root>/Merge_198' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_LmpHM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_LmpHMFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_LmpHM_FA_IN);

    /* Merge: '<Root>/Merge_199' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_LmpHM_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_LmpHM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_LmpHM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_LmpHM_INIT_);

    /* Merge: '<Root>/Merge_200' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_MntrRPM_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_MntrRPMFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_MntrRPM_FA_);

    /* Merge: '<Root>/Merge_201' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_MntrRPM_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_MntrRPM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_MntrRPM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_MntrRPM_INI);

    /* Merge: '<Root>/Merge_202' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_OilTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_OilTempFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_OilTemp_FA_);

    /* Merge: '<Root>/Merge_203' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_OilTemp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_OilTemp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_OilTemp_INI);

    /* Merge: '<Root>/Merge_204' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_PstRnSt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_PstRnStFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_PstRnSt_FA_);

    /* Merge: '<Root>/Merge_205' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_PstRnSt_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_PstRnSt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_PstRnSt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_PstRnSt_INI);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_206' incorporates:
     *  Constant: '<S1414>/Calib'
     *  Logic: '<S1399>/AND'
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_RPMAct_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_RPMActFA_write_IRV
        (KePMIR_b_TransAuxPmp2_RPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_207' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_RPMAct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_RPMAct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMAct_INIT);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_208' incorporates:
     *  Constant: '<S1414>/Calib'
     *  Logic: '<S1400>/AND'
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_RPMAct_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_RPMActSNA_write_IRV
        (KePMIR_b_TransAuxPmp2_RPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_209' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_RPMTgt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_RPMTgtFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMTgt_FA_I);

    /* Merge: '<Root>/Merge_210' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_RPMTgt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_RPMTgt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMTgt_INIT);

    /* Merge: '<Root>/Merge_211' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_RespErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_RespErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_RespErr_INI);

    /* Merge: '<Root>/Merge_212' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_StallEvnt_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_StallEvntFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_StallEvnt_F);

    /* Merge: '<Root>/Merge_213' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_StallEvnt_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_StallEvnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_StallEvnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_StallEvnt_I);

    /* Merge: '<Root>/Merge_220' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_TAP_HW_VER_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_TAP_HW_VER_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_TAP_HW_VER_);

    /* Merge: '<Root>/Merge_221' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_TAP_SW_VER_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_TAP_SW_VER_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_TAP_SW_VER_);

    /* Merge: '<Root>/Merge_214' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_TempErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_TempErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_TempErr_FA_);

    /* Merge: '<Root>/Merge_215' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_TempErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_TempErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_TempErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_TempErr_INI);

    /* Merge: '<Root>/Merge_216' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_Temp_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_TempFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_Temp_FA_INI);

    /* Merge: '<Root>/Merge_217' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_Temp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_Temp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_Temp_INIT_w);

    /* Merge: '<Root>/Merge_222' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_VltgErr_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_VltgErrFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_VltgErr_FA_);

    /* Merge: '<Root>/Merge_223' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_VltgErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp2_VltgErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_VltgErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_VltgErr_INI);

    /* Merge: '<Root>/Merge_224' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_Vltg_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp2_VltgFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_Vltg_FA_INI);

    /* Merge: '<Root>/Merge_225' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp2_Vltg_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp2_Vltg_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp2_Vltg_INIT_w);

    /* Merge: '<Root>/Merge_230' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_ColdBiasSts_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_ColdBiasSts_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_ColdBiasSts_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_ColdBiasSts_);

    /* Merge: '<Root>/Merge_232' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_CrntErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_CrntErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_CrntErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_CrntErr_INIT);

    /* Merge: '<Root>/Merge_231' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_Crnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_Crnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_Crnt_INIT_wr);

    /* Merge: '<Root>/Merge_234' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_DryRun_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp_DryRunFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_DryRun_FA_IN);

    /* Merge: '<Root>/Merge_233' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_DryRun_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_DryRun_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_DryRun_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_DryRun_INIT_);

    /* Merge: '<Root>/Merge_235' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_LmpHM_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_LmpHM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_LmpHM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_LmpHM_INIT_w);

    /* Merge: '<Root>/Merge_236' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_MntrRPM_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_MntrRPM_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_MntrRPM_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_MntrRPM_INIT);

    /* Merge: '<Root>/Merge_238' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_OilTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp_OilTempFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_OilTemp_FA_I);

    /* Merge: '<Root>/Merge_237' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_OilTemp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_OilTemp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_OilTemp_INIT);

    /* Merge: '<Root>/Merge_239' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_PstRnSt_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_PstRnSt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_PstRnSt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_PstRnSt_INIT);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_242' incorporates:
     *  Constant: '<S1469>/Calib'
     *  Logic: '<S1436>/AND'
     *  SignalConversion generated from: '<S110>/TransAuxPmp_RPMAct_FA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp_RPMActFA_write_IRV
        (KePMIR_n_TransAuxPmp_RPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_240' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_RPMAct_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_RPMAct_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_RPMAct_INIT_);

    /* S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* Merge: '<Root>/Merge_241' incorporates:
     *  Constant: '<S1469>/Calib'
     *  Logic: '<S1437>/AND'
     *  SignalConversion generated from: '<S110>/TransAuxPmp_RPMAct_SNA_INIT_write'
     */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp_RPMActSNA_write_IRV
        (KePMIR_n_TransAuxPmp_RPMAct_FA_INIT);

    /* End of Outputs for S-Function (fcgen): '<S110>/FcnCallGen' */

    /* Merge: '<Root>/Merge_243' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_RPMTgt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_RPMTgt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_RPMTgt_INIT_);

    /* Merge: '<Root>/Merge_244' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_RespErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp_RespErr_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_RespErr_INIT);

    /* Merge: '<Root>/Merge_245' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_StallEvnt_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_StallEvnt_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_StallEvnt_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_StallEvnt_IN);

    /* Merge: '<Root>/Merge_246' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_TAP_HW_VER_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_TAP_HW_VER_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_TAP_HW_VER_I);

    /* Merge: '<Root>/Merge_247' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_TAP_SW_VER_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_TAP_SW_VER_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_TAP_SW_VER_I);

    /* Merge: '<Root>/Merge_248' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_TCM_Req_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_TCM_Req_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_TCM_Req_INIT);

    /* Merge: '<Root>/Merge_251' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_TempErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_TempErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_TempErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_TempErr_INIT);

    /* Merge: '<Root>/Merge_250' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_TempFA_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_VePMIR_b_TransAuxPmp_TempFA_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_TempFA_INIT_);

    /* Merge: '<Root>/Merge_249' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_Temp_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_Temp_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_Temp_INIT_wr);

    /* Merge: '<Root>/Merge_253' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_VltgErr_INIT_write'
     *  SignalConversion generated from: '<S1177>/TransAuxPmp_VltgErr_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_VltgErr_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_VltgErr_INIT);

    /* Merge: '<Root>/Merge_252' incorporates:
     *  SignalConversion generated from: '<S110>/TransAuxPmp_Vltg_INIT_write'
     * */
    Rte_IrvWrite_PMIR_PwrOn_TransAuxPmp_Vltg_INIT_write_IRV
        (PMIR_ac_B.OutportBufferForTransAuxPmp_Vltg_INIT_wr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, PMIR_CODE) PMIR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        PMIR_ac_B.LePMIR_e_TransAuxPmp_MntrRPM_out =
            CeTAPR_e_TAP_TrueFalseSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpMnt =
            CeTAPR_e_TAP_TrueFalseSNA_False;
        PMIR_ac_B.OutportBufferForTransAuxPmp_MntrRPM_INIT =
            CeTAPR_e_TAP_TrueFalseSNA_False;
        PMIR_ac_B.LePMIR_e_LTPsvPumpMntrRPM_out = CePMPR_e_TFSNA_False;
        PMIR_ac_B.LePMIR_e_LTPsvPumpFailsafe_out = CePMPR_e_TFSNA_False;
        PMIR_ac_B.LePMIR_e_LTPsvPump2MntrRPM_out = CePMPR_e_TFSNA_False;
        PMIR_ac_B.LePMIR_e_LTPsvPump2Failsafe_out = CePMPR_e_TFSNA_False;
        PMIR_ac_B.LePMIR_e_LTActPumpFailsafe_out = CePMPR_e_TFSNA_False;
        PMIR_ac_B.LePMIR_e_HT_AuxPmpMntrRPM_out = CePMPR_e_TFSNA_False;
        PMIR_ac_B.LePMIR_e_HTAuxPumpFailsafe_out = CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpFailsa =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpMntrRP =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2Fails =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2MntrR =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpFails =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpFailsa =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpMntrRP =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForLTPsvPumpFailsafe_INIT_w =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForLTPsvPumpMntrRPM_INIT_wr =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForLTPsvPump2Failsafe_INIT_ =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForLTPsvPump2MntrRPM_INIT_w =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForLTActPumpFailsafe_INIT_w =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForHTAuxPumpFailsafe_INIT_w =
            CePMPR_e_TFSNA_False;
        PMIR_ac_B.OutportBufferForHT_AuxPmpMntrRPM_INIT_wr =
            CePMPR_e_TFSNA_False;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PMIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/IRV_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1177>/ECM_LTPsvPmpRq_FA_INIT_write' incorporates:
     *  Constant: '<S1363>/Calib'
     */
    PMIR_ac_B.OutportBufferForECM_LTPsvPmpRq_FA_INIT_w =
        KePMIR_b_ECM_LTPsvPumpRq_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/ECM_LTPsvPmpRq_INIT_write' incorporates:
     *  Constant: '<S1357>/Calib'
     */
    PMIR_ac_B.OutportBufferForECM_LTPsvPmpRq_INIT_writ =
        KePMIR_Pct_ECM_LTPsvPumpRq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPP_DVC_FlwRt_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1354>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_FlwRt_IO_Cntl_I =
        PMIR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPP_DVC_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1355>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_IO_Cntl_INIT_wr =
        PMIR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPP_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1358>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_Pct_INIT_write =
        KePMIR_Pct_LTPP_DVC_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPP_DVC_RPM_PEClFlwRt_INIT_write' incorporates:
     *  Constant: '<S1392>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPP_DVC_RPM_PEClFlwRt_I =
        KePMIR_n_LTPP_DVC_RPM_PEClFlwRt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPSVPumpCrnt_INIT_write' incorporates:
     *  Constant: '<S1356>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPSVPumpCrnt_INIT_write =
        KePMIR_I_LTPsvPumpCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmpAirPrsntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1364>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpAirPrsntErr_FA_I =
        KePMIR_b_LTPsvPumpAirPrsntErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmpAirPrsntErr_INIT_write' incorporates:
     *  Constant: '<S1382>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpAirPrsntErr_INIT =
        KePMIR_e_LTPsvPumpAirPrsntErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmpProdSuplr_ID_INIT_write' incorporates:
     *  Constant: '<S1395>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpProdSuplr_ID_INI =
        KePMIR_y_LTPsvPumpProdSuplr_ID_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmpRPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1374>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpRPMTgt_FA_INIT_w =
        KePMIR_b_LTPsvPumpRPMTgt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmpRPMTgt_INIT_write' incorporates:
     *  Constant: '<S1394>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmpRPMTgt_INIT_writ =
        KePMIR_n_LTPsvPumpRPMTgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmp_ActSpd_INIT_write' incorporates:
     *  Constant: '<S1359>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp_ActSpd_INIT_wri =
        KePMIR_Pct_LTPsvPump_ActSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmp_TgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1381>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp_TgtSpd_FA_INIT_ =
        KePMIR_b_LTPsvPump_TgtSpd_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmp_TgtSpd_INIT_write' incorporates:
     *  Constant: '<S1360>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp_TgtSpd_INIT_wri =
        KePMIR_Pct_LTPsvPump_TgtSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpDeblock_FA_INIT_write' incorporates:
     *  Constant: '<S1366>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDeblock_FA_INIT =
        KePMIR_b_LTPsvPumpDeblock_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpDeblock_INIT_write' incorporates:
     *  Constant: '<S1383>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDeblock_INIT_wr =
        KePMIR_e_LTPsvPumpDeblock_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpDryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1367>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDryRun_FA_INIT_ =
        KePMIR_b_LTPsvPumpDryRun_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpDryRun_INIT_write' incorporates:
     *  Constant: '<S1384>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpDryRun_INIT_wri =
        KePMIR_e_LTPsvPumpDryRun_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpFailsafe_INIT_write' incorporates:
     *  Constant: '<S1385>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpFailsafe_INIT_w =
        KePMIR_e_LTPsvPumpFailsafe_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpMntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1369>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpMntrRPM_FA_INIT =
        KePMIR_b_LTPsvPumpMntrRPM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpMntrRPM_INIT_write' incorporates:
     *  Constant: '<S1386>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpMntrRPM_INIT_wr =
        KePMIR_e_LTPsvPumpMntrRPM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpNodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1370>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpNodeErr_FA_INIT =
        KePMIR_b_LTPsvPumpNodeErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpNodeErr_INIT_write' incorporates:
     *  Constant: '<S1387>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpNodeErr_INIT_wr =
        KePMIR_e_LTPsvPumpNodeErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpOvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1372>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpOvrCrnt_FA_INIT =
        KePMIR_b_LTPsvPumpOvrCrnt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpOvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1389>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpOvrCrnt_INIT_wr =
        KePMIR_e_LTPsvPumpOvrCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpRPMAct_INIT_write' incorporates:
     *  Constant: '<S1393>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpRPMAct_INIT_wri =
        KePMIR_n_LTPsvPumpRPMAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpRespErr_INIT_write' incorporates:
     *  Constant: '<S1375>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpRespErr_INIT_wr =
        KePMIR_b_LTPsvPumpRespErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpSuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1376>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpSuppVltErr_FA_I =
        KePMIR_b_LTPsvPumpSuppVltErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpSuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1390>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpSuppVltErr_INIT =
        KePMIR_e_LTPsvPumpSuppVltErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpTemp_INIT_write' incorporates:
     *  Constant: '<S1361>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpTemp_INIT_write =
        KePMIR_T_LTPsvPumpTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1378>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpVlt_FA_INIT_wri =
        KePMIR_b_LTPsvPumpVlt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPumpVlt_INIT_write' incorporates:
     *  Constant: '<S1362>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPumpVlt_INIT_write =
        KePMIR_U_LTPsvPumpVlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1380>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_LmpHM_FA_INIT_ =
        KePMIR_b_LTPsvPump_LmpHM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1391>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_LmpHM_INIT_wri =
        KePMIR_e_LTPsvPump_LmpHM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump_Ver_INIT_write' incorporates:
     *  Constant: '<S1396>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_Ver_INIT_write =
        KePMIR_y_LTPsvPump_Ver_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LT_PsvPmpOT_FA_INIT_write' incorporates:
     *  Constant: '<S1371>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmpOT_FA_INIT_writ =
        KePMIR_b_LTPsvPumpOT_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LT_PsvPmpOT_INIT_write' incorporates:
     *  Constant: '<S1388>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmpOT_INIT_write = KePMIR_e_LTPsvPumpOT_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPP2_DVC_IO_Pct_INIT_write' incorporates:
     *  Constant: '<S1311>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTPP2_DVC_IO_Pct_INIT_wr =
        PMIR_ac_ConstB.Constant_gf;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPP2_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1313>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPP2_DVC_Pct_INIT_write =
        KePMIR_Pct_LTPP2_DVC_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPSVPump2Crnt_INIT_write' incorporates:
     *  Constant: '<S1312>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPSVPump2Crnt_INIT_writ =
        KePMIR_I_LTPsvPump2Crnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmp2ProdSuplrID_INIT_write' incorporates:
     *  Constant: '<S1346>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2ProdSuplrID_INI =
        KePMIR_y_LTPsvPump2ProdSuplr_ID_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmp2_ActSpd_INIT_write' incorporates:
     *  Constant: '<S1314>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2_ActSpd_INIT_wr =
        KePMIR_Pct_LTPsvPump2_ActSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmp2_TgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1334>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2_TgtSpd_FA_INIT =
        KePMIR_b_LTPsvPump2_TgtSpd_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPmp2_TgtSpd_INIT_write' incorporates:
     *  Constant: '<S1315>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPmp2_TgtSpd_INIT_wr =
        KePMIR_Pct_LTPsvPump2_TgtSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2AirPresntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1318>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2AirPresntErr_F =
        KePMIR_b_LTPsvPump2AirPrsntErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2AirPresntErr_INIT_write' incorporates:
     *  Constant: '<S1335>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2AirPresntErr_I =
        KePMIR_e_LTPsvPump2AirPrsntErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2Deblock_FA_INIT_write' incorporates:
     *  Constant: '<S1320>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Deblock_FA_INI =
        KePMIR_b_LTPsvPump2Deblock_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2Deblock_INIT_write' incorporates:
     *  Constant: '<S1336>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Deblock_INIT_w =
        KePMIR_e_LTPsvPump2Deblock_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2DryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1321>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2DryRun_FA_INIT =
        KePMIR_b_LTPsvPump2DryRun_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2DryRun_INIT_write' incorporates:
     *  Constant: '<S1337>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2DryRun_INIT_wr =
        KePMIR_e_LTPsvPump2DryRun_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2Failsafe_INIT_write' incorporates:
     *  Constant: '<S1338>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Failsafe_INIT_ =
        KePMIR_e_LTPsvPump2Failsafe_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2MntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1323>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2MntrRPM_FA_INI =
        KePMIR_b_LTPsvPump2MntrRPM_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2MntrRPM_INIT_write' incorporates:
     *  Constant: '<S1339>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2MntrRPM_INIT_w =
        KePMIR_e_LTPsvPump2MntrRPM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2NodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1324>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2NodeErr_FA_INI =
        KePMIR_b_LTPsvPump2NodeErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2NodeErr_INIT_write' incorporates:
     *  Constant: '<S1340>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2NodeErr_INIT_w =
        KePMIR_e_LTPsvPump2NodeErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2OvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1326>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2OvrCrnt_FA_INI =
        KePMIR_b_LTPsvPump2OvrCrnt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2OvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1342>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2OvrCrnt_INIT_w =
        KePMIR_e_LTPsvPump2OvrCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2RPMAct_INIT_write' incorporates:
     *  Constant: '<S1345>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2RPMAct_INIT_wr =
        KePMIR_n_LTPsvPump2RPMAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2RespErr_INIT_write' incorporates:
     *  Constant: '<S1328>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2RespErr_INIT_w =
        KePMIR_b_LTPsvPump2RespErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2SuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1329>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2SuppVltErr_FA_ =
        KePMIR_b_LTPsvPump2SuppVltErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2SuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1343>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2SuppVltErr_INI =
        KePMIR_e_LTPsvPump2SuppVltErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2Temp_INIT_write' incorporates:
     *  Constant: '<S1316>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Temp_INIT_writ =
        KePMIR_T_LTPsvPump2Temp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2Vlt_FA_INIT_write' incorporates:
     *  Constant: '<S1331>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Vlt_FA_INIT_wr =
        KePMIR_b_LTPsvPump2Vlt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2Vlt_INIT_write' incorporates:
     *  Constant: '<S1317>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2Vlt_INIT_write =
        KePMIR_U_LTPsvPump2Vlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1333>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_LmpHM_FA_INIT =
        KePMIR_b_LTPsvPump2_LmpHM_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1344>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_LmpHM_INIT_wr =
        KePMIR_e_LTPsvPump2_LmpHM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTPsvPump2_Ver_INIT_write' incorporates:
     *  Constant: '<S1347>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_Ver_INIT_writ =
        KePMIR_y_LTPsvPump2_Ver_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LT_PsvPmp2OT_FA_INIT_write' incorporates:
     *  Constant: '<S1325>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmp2OT_FA_INIT_wri =
        KePMIR_b_LTPsvPump2OT_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LT_PsvPmp2OT_INIT_write' incorporates:
     *  Constant: '<S1341>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_PsvPmp2OT_INIT_write =
        KePMIR_e_LTPsvPump2OT_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTAP_DVC_FlwRt_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1263>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_FlwRt_IO_Cntl_I =
        PMIR_ac_ConstB.Constant_l3;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTAP_DVC_IO_Pct_INIT_write' incorporates:
     *  Constant: '<S1262>/Constant'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_IO_Pct_INIT_wri =
        PMIR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTAP_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1265>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_Pct_INIT_write =
        KePMIR_Pct_LTAP_DVC_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTAP_DVC_RPM_BatClFlwRt_INIT_write' incorporates:
     *  Constant: '<S1300>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTAP_DVC_RPM_BatClFlwRt_ =
        KePMIR_n_LTAP_DVC_RPM_BatClFlwRt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpActSpd_INIT_write' incorporates:
     *  Constant: '<S1266>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpActSpd_INIT_wri =
        KePMIR_Pct_LTActPumpActSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpAirPrsntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1271>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpAirPrsntErr_FA_ =
        KePMIR_b_LTActPumpAirPrsntErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpAirPrsntErr_INIT_write' incorporates:
     *  Constant: '<S1289>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpAirPrsntErr_INI =
        KePMIR_e_LTActPumpAirPrsntErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1272>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpCrnt_FA_INIT_wr =
        KePMIR_b_LTActPumpCrnt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpCrnt_INIT_write' incorporates:
     *  Constant: '<S1264>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpCrnt_INIT_write =
        KePMIR_I_LTActPumpCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpDeblock_FA_INIT_write' incorporates:
     *  Constant: '<S1273>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpDeblock_FA_INIT =
        KePMIR_b_LTActPumpDeblock_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpDeblock_INIT_write' incorporates:
     *  Constant: '<S1290>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpDeblock_INIT_wr =
        KePMIR_e_LTActPumpDeblock_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpDryRun_INIT_write' incorporates:
     *  Constant: '<S1291>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpDryRun_INIT_wri =
        KePMIR_e_LTActPumpDryRun_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpFailsafe_FA_INIT_write' incorporates:
     *  Constant: '<S1275>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpFailsafe_FA_INI =
        KePMIR_b_LTActPumpFailsafe_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpFailsafe_INIT_write' incorporates:
     *  Constant: '<S1292>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpFailsafe_INIT_w =
        KePMIR_e_LTActPumpFailsafe_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpLmpHM_INIT_write' incorporates:
     *  Constant: '<S1293>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpLmpHM_INIT_writ =
        KePMIR_e_LTActPumpLmpHM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpMntrRPM_INIT_write' incorporates:
     *  Constant: '<S1294>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpMntrRPM_INIT_wr =
        KePMIR_e_LTActPumpMntrRPM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpNodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1278>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpNodeErr_FA_INIT =
        KePMIR_b_LTActPumpNodeErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpNodeErr_INIT_write' incorporates:
     *  Constant: '<S1295>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpNodeErr_INIT_wr =
        KePMIR_e_LTActPumpNodeErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpOvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1279>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpOvrCrnt_FA_INIT =
        KePMIR_b_LTActPumpOvrCrnt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpOvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1296>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpOvrCrnt_INIT_wr =
        KePMIR_e_LTActPumpOvrCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpPmpRPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1282>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPmpRPMTgt_FA_IN =
        KePMIR_b_LTActPumpRPMTgt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpPmpRPMTgt_INIT_write' incorporates:
     *  Constant: '<S1302>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPmpRPMTgt_INIT_ =
        KePMIR_n_LTActPumpRPMTgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpProdSuplr_INIT_write' incorporates:
     *  Constant: '<S1303>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpProdSuplr_INIT_ =
        KePMIR_y_LTActPumpProdSuplr;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpPstRnSt_FA_INIT_write' incorporates:
     *  Constant: '<S1280>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPstRnSt_FA_INIT =
        KePMIR_b_LTActPumpPstRnSt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpPstRnSt_INIT_write' incorporates:
     *  Constant: '<S1297>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpPstRnSt_INIT_wr =
        KePMIR_e_LTActPumpPstRnSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpRPMAct_INIT_write' incorporates:
     *  Constant: '<S1301>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpRPMAct_INIT_wri =
        KePMIR_n_LTActPumpRPMAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpRespErr_INIT_write' incorporates:
     *  Constant: '<S1283>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpRespErr_INIT_wr =
        KePMIR_b_LTActPumpRespErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpSuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1284>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpSuppVltErr_FA_I =
        KePMIR_b_LTActPumpSuppVltErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpSuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1298>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpSuppVltErr_INIT =
        KePMIR_e_LTActPumpSuppVltErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpTemp_INIT_write' incorporates:
     *  Constant: '<S1268>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpTemp_INIT_write =
        KePMIR_T_LTActPumpTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpTgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1287>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpTgtSpd_FA_INIT_ =
        KePMIR_b_LTActPump_TgtSpd_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpTgtSpd_INIT_write' incorporates:
     *  Constant: '<S1267>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpTgtSpd_INIT_wri =
        KePMIR_Pct_LTActPump_TgtSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1286>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpVlt_FA_INIT_wri =
        KePMIR_b_LTActPumpVlt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPumpVlt_INIT_write' incorporates:
     *  Constant: '<S1269>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPumpVlt_INIT_write =
        KePMIR_U_LTActPumpVlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LTActPump_Ver_INIT_write' incorporates:
     *  Constant: '<S1304>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTActPump_Ver_INIT_write =
        KePMIR_y_LTActPump_Ver_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LT_ActvPmpOT_FA_INIT_write' incorporates:
     *  Constant: '<S1288>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_ActvPmpOT_FA_INIT_wri =
        KePMIR_b_LTActvPumpOT_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/LT_ActvPmpOT_INIT_write' incorporates:
     *  Constant: '<S1299>/Calib'
     */
    PMIR_ac_B.OutportBufferForLT_ActvPmpOT_INIT_write =
        KePMIR_e_LTActvPumpOT_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAP_DVC_FlwRt_IO_Cntl_INIT_write' incorporates:
     *  Constant: '<S1211>/Constant'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_FlwRt_IO_Cntl_I =
        PMIR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAP_DVC_IO_Pct_INIT_write' incorporates:
     *  Constant: '<S1212>/Constant'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_IO_Pct_INIT_wri =
        PMIR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAP_DVC_Pct_INIT_write' incorporates:
     *  Constant: '<S1214>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_Pct_INIT_write = KePMIR_Pct_HTAP_DVC_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAP_DVC_RPM_BatClFlwRt_INIT_write' incorporates:
     *  Constant: '<S1249>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAP_DVC_RPM_BatClFlwRt_ =
        KePMIR_n_HTAP_DVC_RPM_BatClFlwRt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPmpOT_FA_INIT_write' incorporates:
     *  Constant: '<S1228>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpOT_FA_INIT_write =
        KePMIR_b_HTAuxPumpOT_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPmpOT_INIT_write' incorporates:
     *  Constant: '<S1245>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpOT_INIT_write = KePMIR_e_HTAuxPumpOT_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPmpRPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1232>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpRPMTgt_FA_INIT_w =
        KePMIR_b_HTAuxPumpRPMTgt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPmpRPMTgt_INIT_write' incorporates:
     *  Constant: '<S1251>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPmpRPMTgt_INIT_writ =
        KePMIR_n_HTAuxPumpRPMTgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpAirPresntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1220>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpAirPresntErr_FA =
        KePMIR_b_HTAuxPumpAirPresntErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpAirPresntErr_INIT_write' incorporates:
     *  Constant: '<S1238>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpAirPresntErr_IN =
        KePMIR_e_HTAuxPumpAirPresntErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpCrnt_INIT_write' incorporates:
     *  Constant: '<S1213>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpCrnt_INIT_write =
        KePMIR_I_HTAuxPumpCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpDeblock_FA_INIT_write' incorporates:
     *  Constant: '<S1222>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDeblock_FA_INIT =
        KePMIR_b_HTAuxPumpDeblock_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpDeblock_INIT_write' incorporates:
     *  Constant: '<S1239>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDeblock_INIT_wr =
        KePMIR_e_HTAuxPumpDeblock_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpDryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1223>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDryRun_FA_INIT_ =
        KePMIR_b_HTAuxPumpDryRun_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpDryRun_INIT_write' incorporates:
     *  Constant: '<S1240>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpDryRun_INIT_wri =
        KePMIR_e_HTAuxPumpDryRun_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpFailsafe_INIT_write' incorporates:
     *  Constant: '<S1241>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpFailsafe_INIT_w =
        KePMIR_e_HTAuxPumpFailsafe_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpNodeErr_FA_INIT_write' incorporates:
     *  Constant: '<S1227>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpNodeErr_FA_INIT =
        KePMIR_b_HTAuxPumpNodeErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpNodeErr_INIT_write' incorporates:
     *  Constant: '<S1244>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpNodeErr_INIT_wr =
        KePMIR_e_HTAuxPumpNodeErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpOvrCrnt_FA_INIT_write' incorporates:
     *  Constant: '<S1229>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpOvrCrnt_FA_INIT =
        KePMIR_b_HTAuxPumpOvrCrnt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpOvrCrnt_INIT_write' incorporates:
     *  Constant: '<S1246>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpOvrCrnt_INIT_wr =
        KePMIR_e_HTAuxPumpOvrCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpProdSuplrID_INIT_write' incorporates:
     *  Constant: '<S1252>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpProdSuplrID_INI =
        KePMIR_y_HTAuxPumpProdSuplrID_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpRPMAct_INIT_write' incorporates:
     *  Constant: '<S1250>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpRPMAct_INIT_wri =
        KePMIR_n_HTAuxPumpRPMAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpRespErr_INIT_write' incorporates:
     *  Constant: '<S1233>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpRespErr_INIT_wr =
        KePMIR_b_HTAuxPumpRespErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpSuppVltErr_FA_INIT_write' incorporates:
     *  Constant: '<S1234>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpSuppVltErr_FA_I =
        KePMIR_b_HTAuxPumpSuppVltErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpSuppVltErr_INIT_write' incorporates:
     *  Constant: '<S1248>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpSuppVltErr_INIT =
        KePMIR_e_HTAuxPumpSuppVltErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1237>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpVlt_FA_INIT_wri =
        KePMIR_b_HTAuxPumpVlt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPumpVlt_INIT_write' incorporates:
     *  Constant: '<S1218>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPumpVlt_INIT_write =
        KePMIR_U_HTAuxPumpVlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPump_ActSpd_INIT_write' incorporates:
     *  Constant: '<S1215>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_ActSpd_INIT_wr =
        KePMIR_Pct_HTAuxPumpActSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPump_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1225>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_LmpHM_FA_INIT_ =
        KePMIR_b_HTAuxPumpLmpHM_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPump_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1242>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_LmpHM_INIT_wri =
        KePMIR_e_HTAuxPumpLmpHM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPump_TgtSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1236>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_TgtSpd_FA_INIT =
        KePMIR_b_HTAuxPumpTgtSpd_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HTAuxPump_TgtSpd_INIT_write' incorporates:
     *  Constant: '<S1216>/Calib'
     */
    PMIR_ac_B.OutportBufferForHTAuxPump_TgtSpd_INIT_wr =
        KePMIR_Pct_HTAuxPumpTgtSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HT_AuxPmpMntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1226>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmpMntrRPM_FA_INIT =
        KePMIR_b_HTAuxPumpMntrRPM_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HT_AuxPmpMntrRPM_INIT_write' incorporates:
     *  Constant: '<S1243>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmpMntrRPM_INIT_wr =
        KePMIR_e_HTAuxPumpMntrRPM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HT_AuxPmpTemp_INIT_write' incorporates:
     *  Constant: '<S1217>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmpTemp_INIT_write =
        KePMIR_T_HTAuxPumpTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HT_AuxPmp_PstRnSt_FA_INIT_write' incorporates:
     *  Constant: '<S1230>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmp_PstRnSt_FA_INI =
        KePMIR_b_HTAuxPumpPstRnSt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HT_AuxPmp_PstRnSt_INIT_write' incorporates:
     *  Constant: '<S1247>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmp_PstRnSt_INIT_w =
        KePMIR_e_HTAuxPumpPstRnSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/HT_AuxPmp_Ver_INIT_write' incorporates:
     *  Constant: '<S1253>/Calib'
     */
    PMIR_ac_B.OutportBufferForHT_AuxPmp_Ver_INIT_write =
        KePMIR_y_HTAuxPumpVer_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/DVC_AuxPmpSpdDsrd_INIT_write' incorporates:
     *  Constant: '<S1468>/Calib'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmpSpdDsrd_INIT_w =
        KePMIR_n_DVC_AuxPmpSpdDsrd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/DVC_AuxPmpSpdEnbl_INIT_write' incorporates:
     *  Constant: '<S1443>/Constant'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmpSpdEnbl_INIT_w =
        PMIR_ac_ConstB.Constant_ll;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_ColdBiasSts_INIT_write' incorporates:
     *  Constant: '<S1442>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_ColdBiasSts_ =
        PMIR_ac_ConstB.Constant_l4;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_CrntErr_INIT_write' incorporates:
     *  Constant: '<S1440>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_CrntErr_INIT =
        PMIR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_Crnt_INIT_write' incorporates:
     *  Constant: '<S1444>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_Crnt_INIT_wr =
        KePMIR_I_TransAuxPmp_Crnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_DryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1451>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_DryRun_FA_IN =
        KePMIR_b_TransAuxPmp_DryRun_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_DryRun_INIT_write' incorporates:
     *  Constant: '<S1464>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_DryRun_INIT_ =
        KePMIR_e_TransAuxPmp_DryRun_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1465>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_LmpHM_INIT_w =
        KePMIR_e_TransAuxPmp_LmpHM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_MntrRPM_INIT_write' incorporates:
     *  Constant: '<S1466>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_MntrRPM_INIT =
        KePMIR_e_TransAuxPmp_MntrRPM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_OilTemp_FA_INIT_write' incorporates:
     *  Constant: '<S1454>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_OilTemp_FA_I =
        KePMIR_b_TransAuxPmp_OilTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_OilTemp_INIT_write' incorporates:
     *  Constant: '<S1445>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_OilTemp_INIT =
        KePMIR_T_TransAuxPmp_OilTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_PstRnSt_INIT_write' incorporates:
     *  Constant: '<S1467>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_PstRnSt_INIT =
        KePMIR_e_TransAuxPmp_PstRnSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_RPMAct_INIT_write' incorporates:
     *  Constant: '<S1470>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_RPMAct_INIT_ =
        KePMIR_n_TransAuxPmp_RPMAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_RPMTgt_INIT_write' incorporates:
     *  Constant: '<S1471>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_RPMTgt_INIT_ =
        KePMIR_n_TransAuxPmp_RPMTgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_RespErr_INIT_write' incorporates:
     *  Constant: '<S1457>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_RespErr_INIT =
        KePMIR_b_TransAuxPmp_RespErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_StallEvnt_INIT_write' incorporates:
     *  Constant: '<S1441>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_StallEvnt_IN =
        PMIR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_TAP_HW_VER_INIT_write' incorporates:
     *  Constant: '<S1472>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TAP_HW_VER_I =
        KePMIR_y_TransAuxPmp_TAP_HW_VER_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_TAP_SW_VER_INIT_write' incorporates:
     *  Constant: '<S1473>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TAP_SW_VER_I =
        KePMIR_y_TransAuxPmp_TAP_SW_VER_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_TCM_Req_INIT_write' incorporates:
     *  Constant: '<S1459>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TCM_Req_INIT =
        KePMIR_b_TransAuxPmp_TCM_Req_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_TempErr_INIT_write' incorporates:
     *  Constant: '<S1438>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TempErr_INIT =
        PMIR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_TempFA_INIT_write' incorporates:
     *  Constant: '<S1460>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_TempFA_INIT_ =
        KePMIR_b_TransAuxPmp_TempFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_Temp_INIT_write' incorporates:
     *  Constant: '<S1446>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_Temp_INIT_wr =
        KePMIR_T_TransAuxPmp_Temp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_VltgErr_INIT_write' incorporates:
     *  Constant: '<S1439>/Constant'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_VltgErr_INIT = PMIR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp_Vltg_INIT_write' incorporates:
     *  Constant: '<S1447>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp_Vltg_INIT_wr =
        KePMIR_U_TransAuxPmp_Vltg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/DVC_AuxPmp2SpdDsrd_INIT_write' incorporates:
     *  Constant: '<S1431>/Calib'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmp2SpdDsrd_INIT_ =
        KePMIR_n_DVC_AuxPmp2SpdDsrd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/DVC_AuxPmp2SpdEnbl_INIT_write' incorporates:
     *  Constant: '<S1401>/Constant'
     */
    PMIR_ac_B.OutportBufferForDVC_AuxPmp2SpdEnbl_INIT_ =
        PMIR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_ColdBiasSts_FA_INIT_write' incorporates:
     *  Constant: '<S1406>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_ColdBiasSts =
        KePMIR_b_TransAuxPmp2_ColdBiasSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_ColdBiasSts_INIT_write' incorporates:
     *  Constant: '<S1422>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_ColdBiasS_i =
        KePMIR_e_TransAuxPmp2_ColdBiasSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_CrntErr_FA_INIT_write' incorporates:
     *  Constant: '<S1407>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_CrntErr_FA_ =
        KePMIR_b_TransAuxPmp2_CrntErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_CrntErr_INIT_write' incorporates:
     *  Constant: '<S1423>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_CrntErr_INI =
        KePMIR_e_TransAuxPmp2_CrntErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_Crnt_FA_INIT_write' incorporates:
     *  Constant: '<S1408>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Crnt_FA_INI =
        KePMIR_b_TransAuxPmp2_Crnt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_Crnt_INIT_write' incorporates:
     *  Constant: '<S1402>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Crnt_INIT_w =
        KePMIR_I_TransAuxPmp2_Crnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_DryRun_FA_INIT_write' incorporates:
     *  Constant: '<S1409>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_DryRun_FA_I =
        KePMIR_b_TransAuxPmp2_DryRun_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_DryRun_INIT_write' incorporates:
     *  Constant: '<S1424>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_DryRun_INIT =
        KePMIR_e_TransAuxPmp2_DryRun_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_LmpHM_FA_INIT_write' incorporates:
     *  Constant: '<S1410>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_LmpHM_FA_IN =
        KePMIR_b_TransAuxPmp2_LmpHM_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_LmpHM_INIT_write' incorporates:
     *  Constant: '<S1425>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_LmpHM_INIT_ =
        KePMIR_e_TransAuxPmp2_LmpHM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_MntrRPM_FA_INIT_write' incorporates:
     *  Constant: '<S1411>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_MntrRPM_FA_ =
        KePMIR_b_TransAuxPmp2_MntrRPM_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_MntrRPM_INIT_write' incorporates:
     *  Constant: '<S1426>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_MntrRPM_INI =
        KePMIR_e_TransAuxPmp2_MntrRPM_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_OilTemp_FA_INIT_write' incorporates:
     *  Constant: '<S1412>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_OilTemp_FA_ =
        KePMIR_b_TransAuxPmp2_OilTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_OilTemp_INIT_write' incorporates:
     *  Constant: '<S1403>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_OilTemp_INI =
        KePMIR_T_TransAuxPmp2_OilTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_PstRnSt_FA_INIT_write' incorporates:
     *  Constant: '<S1413>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_PstRnSt_FA_ =
        KePMIR_b_TransAuxPmp2_PstRnSt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_PstRnSt_INIT_write' incorporates:
     *  Constant: '<S1427>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_PstRnSt_INI =
        KePMIR_e_TransAuxPmp2_PstRnSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_RPMAct_INIT_write' incorporates:
     *  Constant: '<S1432>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMAct_INIT =
        KePMIR_n_TransAuxPmp2_RPMAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_RPMTgt_FA_INIT_write' incorporates:
     *  Constant: '<S1415>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMTgt_FA_I =
        KePMIR_b_TransAuxPmp2_RPMTgt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_RPMTgt_INIT_write' incorporates:
     *  Constant: '<S1433>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RPMTgt_INIT =
        KePMIR_n_TransAuxPmp2_RPMTgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_RespErr_INIT_write' incorporates:
     *  Constant: '<S1416>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_RespErr_INI =
        KePMIR_b_TransAuxPmp2_RespErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_StallEvnt_FA_INIT_write' incorporates:
     *  Constant: '<S1417>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_StallEvnt_F =
        KePMIR_b_TransAuxPmp2_StallEvnt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_StallEvnt_INIT_write' incorporates:
     *  Constant: '<S1428>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_StallEvnt_I =
        KePMIR_e_TransAuxPmp2_StallEvnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_TAP_HW_VER_INIT_write' incorporates:
     *  Constant: '<S1434>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TAP_HW_VER_ =
        KePMIR_y_TransAuxPmp2_TAP_HW_VER_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_TAP_SW_VER_INIT_write' incorporates:
     *  Constant: '<S1435>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TAP_SW_VER_ =
        KePMIR_y_TransAuxPmp2_TAP_SW_VER_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_TempErr_FA_INIT_write' incorporates:
     *  Constant: '<S1418>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TempErr_FA_ =
        KePMIR_b_TransAuxPmp2_TempErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_TempErr_INIT_write' incorporates:
     *  Constant: '<S1429>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_TempErr_INI =
        KePMIR_e_TransAuxPmp2_TempErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_Temp_FA_INIT_write' incorporates:
     *  Constant: '<S1419>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Temp_FA_INI =
        KePMIR_b_TransAuxPmp2_Temp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_Temp_INIT_write' incorporates:
     *  Constant: '<S1404>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Temp_INIT_w =
        KePMIR_T_TransAuxPmp2_Temp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_VltgErr_FA_INIT_write' incorporates:
     *  Constant: '<S1420>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_VltgErr_FA_ =
        KePMIR_b_TransAuxPmp2_VltgErr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_VltgErr_INIT_write' incorporates:
     *  Constant: '<S1430>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_VltgErr_INI =
        KePMIR_e_TransAuxPmp2_VltgErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_Vltg_FA_INIT_write' incorporates:
     *  Constant: '<S1421>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Vltg_FA_INI =
        KePMIR_b_TransAuxPmp2_Vltg_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/TransAuxPmp2_Vltg_INIT_write' incorporates:
     *  Constant: '<S1405>/Calib'
     */
    PMIR_ac_B.OutportBufferForTransAuxPmp2_Vltg_INIT_w =
        KePMIR_U_TransAuxPmp2_Vltg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpActSpd_FA_INIT_write' incorporates:
     *  Constant: '<S1190>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActSpd_FA_INIT_wri =
        KePMIR_b_FCCPmpActSpd_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpActSpd_INIT_write' incorporates:
     *  Constant: '<S1204>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActSpd_INIT_write =
        KePMIR_n_FCCPmpActSpd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpActTemp_FA_INIT_write' incorporates:
     *  Constant: '<S1191>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActTemp_FA_INIT_wr =
        KePMIR_b_FCCPmpActTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpActTemp_INIT_write' incorporates:
     *  Constant: '<S1188>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActTemp_INIT_write =
        KePMIR_T_FCCPmpActTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpActVlt_FA_INIT_write' incorporates:
     *  Constant: '<S1192>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActVlt_FA_INIT_wri =
        KePMIR_b_FCCPmpActVlt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpActVlt_INIT_write' incorporates:
     *  Constant: '<S1189>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpActVlt_INIT_write =
        KePMIR_U_FCCPmpActVlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrLIN_INIT_write' incorporates:
     *  Constant: '<S1193>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrLIN_INIT_write =
        KePMIR_b_FCCPmpErrLIN_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrLLO_INIT_write' incorporates:
     *  Constant: '<S1194>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrLLO_INIT_write =
        KePMIR_b_FCCPmpErrLLO_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrOC_INIT_write' incorporates:
     *  Constant: '<S1195>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOC_INIT_write = KePMIR_b_FCCPmpErrOC_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrOTD_INIT_write' incorporates:
     *  Constant: '<S1196>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOTD_INIT_write =
        KePMIR_b_FCCPmpErrOTD_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrOT_INIT_write' incorporates:
     *  Constant: '<S1197>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOT_INIT_write = KePMIR_b_FCCPmpErrOT_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrOV_INIT_write' incorporates:
     *  Constant: '<S1198>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrOV_INIT_write = KePMIR_b_FCCPmpErrOV_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrSC_INIT_write' incorporates:
     *  Constant: '<S1199>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrSC_INIT_write = KePMIR_b_FCCPmpErrSC_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrUV_INIT_write' incorporates:
     *  Constant: '<S1200>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrUV_INIT_write = KePMIR_b_FCCPmpErrUV_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpErrVD_INIT_write' incorporates:
     *  Constant: '<S1201>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpErrVD_INIT_write = KePMIR_b_FCCPmpErrVD_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpIntFlt_INIT_write' incorporates:
     *  Constant: '<S1202>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpIntFlt_INIT_write =
        KePMIR_b_FCCPmpIntFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpStlFlt_INIT_write' incorporates:
     *  Constant: '<S1203>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpStlFlt_INIT_write =
        KePMIR_b_FCCPmpStlFlt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/FCCPmpSuppCrnt_INIT_write' incorporates:
     *  Constant: '<S1187>/Calib'
     */
    PMIR_ac_B.OutportBufferForFCCPmpSuppCrnt_INIT_writ =
        KePMIR_I_FCCPmpSuppCrnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/PWM_EOP_IOCtrlMode_INIT' incorporates:
     *  Constant: '<S1397>/Constant'
     */
    PMIR_ac_B.OutportBufferForPWM_EOP_IOCtrlMode_INIT =
        PMIR_ac_ConstB.Constant_jw;

    /* SystemInitialize for SignalConversion generated from: '<S1177>/PWM_EOP_IOCtrlSpd_INIT' incorporates:
     *  Constant: '<S1398>/Calib'
     */
    PMIR_ac_B.OutportBufferForPWM_EOP_IOCtrlSpd_INIT =
        KePMIR_Pct_PWM_EOP_IOCtrlSpd_INIT;

    /* SystemInitialize for S-Function (fcgen): '<S110>/FcnCallGen' incorporates:
     *  SubSystem: '<S110>/Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpOT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const5'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpOT_Out = PMIR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpNodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const7'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpNodeEr = PMIR_ac_ConstB.Const7;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const10'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpDryRun = PMIR_ac_ConstB.Const10;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpFailsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const14'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpFailsa = PMIR_ac_ConstB.Const14;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpSuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const15'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpSuppVl = PMIR_ac_ConstB.Const15;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpOverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const21'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpOverCu = PMIR_ac_ConstB.Const21;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpDeblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const23'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpDebloc = PMIR_ac_ConstB.Const23;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const24'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpLmpHM_ = PMIR_ac_ConstB.Const24;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const25'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpMntrRP = PMIR_ac_ConstB.Const25;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPumpAirPresntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const31'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPumpAirPre = PMIR_ac_ConstB.Const31;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const32'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPP_DVC_FlwRt_ = PMIR_ac_ConstB.Const32;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2OT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const34'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2OT_Ou = PMIR_ac_ConstB.Const34;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2NodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const36'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2NodeE = PMIR_ac_ConstB.Const36;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2DryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const39'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2DryRu = PMIR_ac_ConstB.Const39;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2Failsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const41'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2Fails = PMIR_ac_ConstB.Const41;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2SuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const42'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2SuppV = PMIR_ac_ConstB.Const42;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2OverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const43'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2OverC = PMIR_ac_ConstB.Const43;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2Deblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const45'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2Deblo = PMIR_ac_ConstB.Const45;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2LmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const46'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2LmpHM = PMIR_ac_ConstB.Const46;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2MntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const47'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2MntrR = PMIR_ac_ConstB.Const47;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPsvPump2AirPresntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const51'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPsvPump2AirPr = PMIR_ac_ConstB.Const51;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const58'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTPP2_DVC_FlwRt = PMIR_ac_ConstB.Const58;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpOT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const64'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpOT_Ou = PMIR_ac_ConstB.Const64;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpNodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const66'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpNodeE = PMIR_ac_ConstB.Const66;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const69'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpDryRu = PMIR_ac_ConstB.Const69;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpFailsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const72'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpFails = PMIR_ac_ConstB.Const72;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpSuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const73'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpSuppV = PMIR_ac_ConstB.Const73;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpOverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const74'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpOverC = PMIR_ac_ConstB.Const74;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpDeblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const76'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpDeblo = PMIR_ac_ConstB.Const76;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const80'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpMntrR = PMIR_ac_ConstB.Const80;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const81'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpLmpHM = PMIR_ac_ConstB.Const81;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTActvPumpPstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const82'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTActvPumpPstRn = PMIR_ac_ConstB.Const82;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTAP_AirPrsntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const83'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTAP_AirPrsntEr = PMIR_ac_ConstB.Const83;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const90'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_LTAP_DVC_FlwRt_ = PMIR_ac_ConstB.Const90;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpOT_Out_Init' incorporates:
     *  Constant: '<S1178>/Const92'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpOT_Out = PMIR_ac_ConstB.Const92;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpNodeErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const94'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpNodeEr = PMIR_ac_ConstB.Const94;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const97'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpDryRun = PMIR_ac_ConstB.Const97;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpFailsafe_Out_Init' incorporates:
     *  Constant: '<S1178>/Const99'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpFailsa = PMIR_ac_ConstB.Const99;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpSuppVltErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const100'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpSuppVl = PMIR_ac_ConstB.Const100;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpOverCurrent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const101'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpOverCu = PMIR_ac_ConstB.Const101;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpDeblock_Out_Init' incorporates:
     *  Constant: '<S1178>/Const103'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpDebloc = PMIR_ac_ConstB.Const103;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const104'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpMntrRP = PMIR_ac_ConstB.Const104;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const106'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpLmpHM_ = PMIR_ac_ConstB.Const106;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpPstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const107'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpPstRnS = PMIR_ac_ConstB.Const107;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAuxPumpAirPresntErr_Out_Init' incorporates:
     *  Constant: '<S1178>/Const111'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAuxPumpAirPre = PMIR_ac_ConstB.Const111;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Out_Init' incorporates:
     *  Constant: '<S1178>/Const118'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_HTAP_DVC_FlwRt_ = PMIR_ac_ConstB.Const118;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpPstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const155'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpPst = PMIR_ac_ConstB.Const155;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpLmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const156'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpLmp = PMIR_ac_ConstB.Const156;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpDryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const157'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpDry = PMIR_ac_ConstB.Const157;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TAP_ColdBiasSts_Out_Init' incorporates:
     *  Constant: '<S1178>/Const159'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TAP_ColdBiasSts = PMIR_ac_ConstB.Const159;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpMntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const160'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpMnt = PMIR_ac_ConstB.Const160;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpTempError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const161'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpTem = PMIR_ac_ConstB.Const161;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpCurrentError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const162'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpCur = PMIR_ac_ConstB.Const162;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpStallEvent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const163'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpSta = PMIR_ac_ConstB.Const163;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPumpVoltageError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const164'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPumpVol = PMIR_ac_ConstB.Const164;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const166'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TAP_SpdDsrd_IO_ = PMIR_ac_ConstB.Const166;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2PstRnSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const187'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Ps = PMIR_ac_ConstB.Const187;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPmp2LmpHM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const189'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPmp2Lmp = PMIR_ac_ConstB.Const189;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2DryRun_Out_Init' incorporates:
     *  Constant: '<S1178>/Const191'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Dr = PMIR_ac_ConstB.Const191;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPmp2ColdBiasSts_Out_Init' incorporates:
     *  Constant: '<S1178>/Const193'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPmp2Col = PMIR_ac_ConstB.Const193;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2MntrRPM_Out_Init' incorporates:
     *  Constant: '<S1178>/Const195'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Mn = PMIR_ac_ConstB.Const195;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2TempError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const197'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Te = PMIR_ac_ConstB.Const197;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2CurrentError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const199'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Cu = PMIR_ac_ConstB.Const199;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2StallEvent_Out_Init' incorporates:
     *  Constant: '<S1178>/Const201'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2St = PMIR_ac_ConstB.Const201;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TransAuxPump2VoltageError_Out_Init' incorporates:
     *  Constant: '<S1178>/Const203'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TransAuxPump2Vo = PMIR_ac_ConstB.Const203;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1178>/Const205'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_TAP2_SpdDsrd_IO = PMIR_ac_ConstB.Const205;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/LTPsvPump_PstRnSt_INIT' incorporates:
     *  Constant: '<S1178>/Const207'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_PstRnSt_INIT = PMIR_ac_ConstB.Const207;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/LTPsvPump_PstRnSt_FA_INIT' incorporates:
     *  Constant: '<S1475>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump_PstRnSt_FA_INI =
        KePMIR_b_LTPsvPump_PstRnSt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/LTPsvPump2_PstRnSt_INIT' incorporates:
     *  Constant: '<S1178>/Const208'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_PstRnSt_INIT = PMIR_ac_ConstB.Const208;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/LTPsvPump2_PstRnSt_FA_INIT' incorporates:
     *  Constant: '<S1474>/Calib'
     */
    PMIR_ac_B.OutportBufferForLTPsvPump2_PstRnSt_FA_IN =
        KePMIR_b_LTPsvPump2_PstRnSt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1178>/VePMIR_e_PWM_EOP_IOCtrlMode_Out_Init' incorporates:
     *  Constant: '<S1178>/Const209'
     */
    PMIR_ac_B.OutportBufferForVePMIR_e_PWM_EOP_IOCtrlM = PMIR_ac_ConstB.Const209;

    /* End of SystemInitialize for S-Function (fcgen): '<S110>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPump2Failsafe' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_LTPsvPump2Failsafe'
     */
    /* SystemInitialize for Chart: '<S193>/PokePMIR_e_LTPsvPump2FailsafeChrt' */
    PMIR_ac_B.LePMIR_e_LTPsvPump2Failsafe_out = CePMPR_e_TFSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPump2Failsafe' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPump2MntrRPM' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_LTPsvPump2MntrRPM'
     */
    /* SystemInitialize for Chart: '<S194>/PokePMIR_e_LTPsvPump2MntrRPMChrt' */
    PMIR_ac_B.LePMIR_e_LTPsvPump2MntrRPM_out = CePMPR_e_TFSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPump2MntrRPM' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPumpFailsafe' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_LTPsvPumpFailsafe'
     */
    /* SystemInitialize for Chart: '<S201>/PokePMIR_e_LTPsvPumpFailsafeChrt' */
    PMIR_ac_B.LePMIR_e_LTPsvPumpFailsafe_out = CePMPR_e_TFSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPumpFailsafe' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPumpMntrRPM' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_LTPsvPumpMntrRPM'
     */
    /* SystemInitialize for Chart: '<S202>/PokePMIR_e_LTPsvPumpMntrRPMChrt' */
    PMIR_ac_B.LePMIR_e_LTPsvPumpMntrRPM_out = CePMPR_e_TFSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTPsvPumpMntrRPM' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTActPumpFailsafe' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_LTActPumpFailsafe'
     */
    /* SystemInitialize for Chart: '<S179>/PokePMIR_e_LTActPumpFailsafeChrt' */
    PMIR_ac_B.LePMIR_e_LTActPumpFailsafe_out = CePMPR_e_TFSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_LTActPumpFailsafe' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_HTAuxPumpFailsafe' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_HTAuxPumpFailsafe'
     */
    /* SystemInitialize for Chart: '<S168>/PokePMIR_e_HTAuxPumpFailsafeChrt' */
    PMIR_ac_B.LePMIR_e_HTAuxPumpFailsafe_out = CePMPR_e_TFSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_HTAuxPumpFailsafe' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_HT_AuxPmpMntrRPM' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_HT_AuxPmpMntrRPM'
     */
    /* SystemInitialize for Chart: '<S173>/PokePMIR_e_HT_AuxPmpMntrRPMChrt' */
    PMIR_ac_B.LePMIR_e_HT_AuxPmpMntrRPM_out = CePMPR_e_TFSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_HT_AuxPmpMntrRPM' */

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpOT' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpOT_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpNodeErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_7'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpNodeErr_Value(CePMPR_e_NodeError_NoError);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpDryRun' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpDryRun_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpFailsafe' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpFailsafe_Value(CePMPR_e_TFSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpSuppVltErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_15'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpSuppVltErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpOverCurrent' incorporates:
     *  Merge: '<Root>/Merge_Outport_21'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpOverCurrent_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpDeblock' incorporates:
     *  Merge: '<Root>/Merge_Outport_23'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpDeblock_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpLmpHM' incorporates:
     *  Merge: '<Root>/Merge_Outport_24'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpLmpHM_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpMntrRPM' incorporates:
     *  Merge: '<Root>/Merge_Outport_25'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpMntrRPM_Value(CePMPR_e_TFSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPumpAirPresntErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_31'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPumpAirPresntErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl' incorporates:
     *  Merge: '<Root>/Merge_Outport_32'
     */
    (void)Rte_Write_VePMIR_e_LTPP_DVC_FlwRt_IO_Cntl_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2OT' incorporates:
     *  Merge: '<Root>/Merge_Outport_34'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2OT_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2NodeErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_36'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2NodeErr_Value(CePMPR_e_NodeError_NoError);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2DryRun' incorporates:
     *  Merge: '<Root>/Merge_Outport_39'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2DryRun_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2Failsafe' incorporates:
     *  Merge: '<Root>/Merge_Outport_41'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2Failsafe_Value(CePMPR_e_TFSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2SuppVltErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_42'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2SuppVltErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2OverCurrent' incorporates:
     *  Merge: '<Root>/Merge_Outport_43'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2OverCurrent_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2Deblock' incorporates:
     *  Merge: '<Root>/Merge_Outport_45'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2Deblock_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2LmpHM' incorporates:
     *  Merge: '<Root>/Merge_Outport_46'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2LmpHM_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2MntrRPM' incorporates:
     *  Merge: '<Root>/Merge_Outport_47'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2MntrRPM_Value(CePMPR_e_TFSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2AirPresntErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_51'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2AirPresntErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl' incorporates:
     *  Merge: '<Root>/Merge_Outport_58'
     */
    (void)Rte_Write_VePMIR_e_LTPP2_DVC_FlwRt_IO_Cntl_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpOT' incorporates:
     *  Merge: '<Root>/Merge_Outport_64'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpOT_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpNodeErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_66'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpNodeErr_Value(CePMPR_e_NodeError_NoError);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpDryRun' incorporates:
     *  Merge: '<Root>/Merge_Outport_69'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpDryRun_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpFailsafe' incorporates:
     *  Merge: '<Root>/Merge_Outport_72'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpFailsafe_Value(CePMPR_e_TFSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpSuppVltErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_73'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpSuppVltErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpOverCurrent' incorporates:
     *  Merge: '<Root>/Merge_Outport_74'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpOverCurrent_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpDeblock' incorporates:
     *  Merge: '<Root>/Merge_Outport_76'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpDeblock_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpMntrRPM' incorporates:
     *  Merge: '<Root>/Merge_Outport_80'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpMntrRPM_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpLmpHM' incorporates:
     *  Merge: '<Root>/Merge_Outport_81'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpLmpHM_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTActvPumpPstRnSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_82'
     */
    (void)Rte_Write_VePMIR_e_LTActvPumpPstRnSt_Value(CeTMIR_e_No_AftRunRequest);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTAP_AirPrsntErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_83'
     */
    (void)Rte_Write_VePMIR_e_LTAP_AirPrsntErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl' incorporates:
     *  Merge: '<Root>/Merge_Outport_90'
     */
    (void)Rte_Write_VePMIR_e_LTAP_DVC_FlwRt_IO_Cntl_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpOT' incorporates:
     *  Merge: '<Root>/Merge_Outport_92'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpOT_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpNodeErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_94'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpNodeErr_Value(CePMPR_e_NodeError_NoError);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpDryRun' incorporates:
     *  Merge: '<Root>/Merge_Outport_97'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpDryRun_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpFailsafe' incorporates:
     *  Merge: '<Root>/Merge_Outport_99'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpFailsafe_Value(CePMPR_e_TFSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpSuppVltErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_100'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpSuppVltErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpOverCurrent' incorporates:
     *  Merge: '<Root>/Merge_Outport_101'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpOverCurrent_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpDeblock' incorporates:
     *  Merge: '<Root>/Merge_Outport_103'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpDeblock_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM' incorporates:
     *  Merge: '<Root>/Merge_Outport_104'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpMntrRPM_Value(CePMPR_e_TFSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpLmpHM' incorporates:
     *  Merge: '<Root>/Merge_Outport_106'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpLmpHM_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpPstRnSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_107'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpPstRnSt_Value(CeTMIR_e_No_AftRunRequest);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAuxPumpAirPresntErr' incorporates:
     *  Merge: '<Root>/Merge_Outport_111'
     */
    (void)Rte_Write_VePMIR_e_HTAuxPumpAirPresntErr_Value(CePMPR_e_FTSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl' incorporates:
     *  Merge: '<Root>/Merge_Outport_118'
     */
    (void)Rte_Write_VePMIR_e_HTAP_DVC_FlwRt_IO_Cntl_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_TransAuxPmp_MntrRPM' incorporates:
     *  SubSystem: '<Root>/PokePMIR_e_TransAuxPmp_MntrRPM'
     */
    /* SystemInitialize for Chart: '<S223>/PokePMIR_e_TransAuxPmp_MntrRPMChrt' */
    PMIR_ac_B.LePMIR_e_TransAuxPmp_MntrRPM_out = CeTAPR_e_TAP_TrueFalseSNA_False;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokePMIR_e_TransAuxPmp_MntrRPM' */

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpPstRnSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_155'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpPstRnSt_Value
        (CeTAPR_e_TAP_PostRunCmd_NoPostRun);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpLmpHM' incorporates:
     *  Merge: '<Root>/Merge_Outport_156'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpLmpHM_Value
        (CeTAPR_e_TAP_FalseTrueSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpDryRun' incorporates:
     *  Merge: '<Root>/Merge_Outport_157'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpDryRun_Value
        (CeTAPR_e_TAP_FalseTrueSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TAP_ColdBiasSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_159'
     */
    (void)Rte_Write_VePMIR_e_TAP_ColdBiasSts_Value
        (CeTAPR_e_TAP_FalseTrueSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpMntrRPM' incorporates:
     *  Merge: '<Root>/Merge_Outport_160'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpMntrRPM_Value
        (CeTAPR_e_TAP_TrueFalseSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpTempError' incorporates:
     *  Merge: '<Root>/Merge_Outport_161'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpTempError_Value
        (CeTAPR_e_TmpErr_NO_FAULT);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpCurrentError' incorporates:
     *  Merge: '<Root>/Merge_Outport_162'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpCurrentError_Value
        (CeTAPR_e_CrntErr_NO_FAULT);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpStallEvent' incorporates:
     *  Merge: '<Root>/Merge_Outport_163'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpStallEvent_Value
        (CeTAPR_e_StallEvnt_FALSE);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPumpVoltageError' incorporates:
     *  Merge: '<Root>/Merge_Outport_164'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPumpVoltageError_Value
        (CeTAPR_e_VltgtErr_NO_FAULT);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_166'
     */
    (void)Rte_Write_VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPump2PstRnSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_187'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2PstRnSt_Value
        (CeTAPR_e_TAP_PostRunCmd_NoPostRun);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPmp2LmpHM' incorporates:
     *  Merge: '<Root>/Merge_Outport_189'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPmp2LmpHM_Value
        (CeTAPR_e_TAP_FalseTrueSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPump2DryRun' incorporates:
     *  Merge: '<Root>/Merge_Outport_191'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2DryRun_Value
        (CeTAPR_e_TAP_FalseTrueSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPmp2ColdBiasSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_193'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPmp2ColdBiasSts_Value
        (CeTAPR_e_TAP_FalseTrueSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPump2MntrRPM' incorporates:
     *  Merge: '<Root>/Merge_Outport_195'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2MntrRPM_Value
        (CeTAPR_e_TAP_FalseTrueSNA_False);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPump2TempError' incorporates:
     *  Merge: '<Root>/Merge_Outport_197'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2TempError_Value
        (CeTAPR_e_TmpErr_NO_FAULT);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPump2CurrentError' incorporates:
     *  Merge: '<Root>/Merge_Outport_199'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2CurrentError_Value
        (CeTAPR_e_CrntErr_NO_FAULT);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPump2StallEvent' incorporates:
     *  Merge: '<Root>/Merge_Outport_201'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2StallEvent_Value
        (CeTAPR_e_StallEvnt_FALSE);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TransAuxPump2VoltageError' incorporates:
     *  Merge: '<Root>/Merge_Outport_203'
     */
    (void)Rte_Write_VePMIR_e_TransAuxPump2VoltageError_Value
        (CeTAPR_e_VltgtErr_NO_FAULT);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_205'
     */
    (void)Rte_Write_VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_PWM_EOP_IOCtrlMode' incorporates:
     *  Merge: '<Root>/Merge_Outport_207'
     */
    (void)Rte_Write_VePMIR_e_PWM_EOP_IOCtrlMode_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump2_PstRnSt' incorporates:
     *  Merge: '<Root>/Merge_255'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump2_PstRnSt_Value(CeTMIR_e_No_AftRunRequest);

    /* SystemInitialize for Outport: '<Root>/VePMIR_e_LTPsvPump_PstRnSt' incorporates:
     *  Merge: '<Root>/Merge_257'
     */
    (void)Rte_Write_VePMIR_e_LTPsvPump_PstRnSt_Value(CeTMIR_e_No_AftRunRequest);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
