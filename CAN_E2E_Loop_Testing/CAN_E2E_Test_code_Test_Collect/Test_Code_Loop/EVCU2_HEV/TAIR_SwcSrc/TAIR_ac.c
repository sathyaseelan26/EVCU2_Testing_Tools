/*
 * File: TAIR_ac.c
 *
 * Code generated for Simulink model 'TAIR_ac'.
 *
 * Model version                  : 9.179
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:22:32 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TAIR_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TAIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, TAIR_VAR_INIT) HeTAIR_Cf_PresToBar = 0.01F;/* Referenced by: '<S912>/Calib' */

#if Rte_SysCon_Variant_TAIR_5

static volatile CONST(float32, TAIR_VAR_INIT) KaTAIR_Pct_AGS2_CurrPos[16] =
{
    100.0F, 50.0F, 35.0F, 30.0F, 25.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                /* Referenced by: '<S146>/PokeTAIR_e_AGS2_CurrPos_LINChrt' */

#endif

#if Rte_SysCon_Variant_TAIR_5

static volatile CONST(float32, TAIR_VAR_INIT) KaTAIR_Pct_AGS_CurrPos[16] =
{
    100.0F, 50.0F, 35.0F, 30.0F, 25.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                 /* Referenced by: '<S149>/PokeTAIR_e_AGS_CurrPos_LINChrt' */

#endif

#if Rte_SysCon_Variant_TAIR_5

static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT) KaTAIR_e_AGS2_CurrPos
    [16] =
{
    CeFSCR_e_Open100, CeFSCR_e_Open50, CeFSCR_e_Open35, CeFSCR_e_Open30,
    CeFSCR_e_Open25, CeFSCR_e_Open20, CeFSCR_e_Open15, CeFSCR_e_Open10,
    CeFSCR_e_Open5, CeFSCR_e_Open0, CeFSCR_e_Unused1, CeFSCR_e_Unused2,
    CeFSCR_e_Unused3, CeFSCR_e_Unused4, CeFSCR_e_Unused5, CeFSCR_e_SNA
};                 /* Referenced by: '<S146>/PokeTAIR_e_AGS2_CurrPos_LINChrt' */

#endif

#if Rte_SysCon_Variant_TAIR_5

static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT) KaTAIR_e_AGS_CurrPos[16]
    =
{
    CeFSCR_e_Open100, CeFSCR_e_Open50, CeFSCR_e_Open35, CeFSCR_e_Open30,
    CeFSCR_e_Open25, CeFSCR_e_Open20, CeFSCR_e_Open15, CeFSCR_e_Open10,
    CeFSCR_e_Open5, CeFSCR_e_Open0, CeFSCR_e_Unused1, CeFSCR_e_Unused2,
    CeFSCR_e_Unused3, CeFSCR_e_Unused4, CeFSCR_e_Unused5, CeFSCR_e_SNA
};                  /* Referenced by: '<S149>/PokeTAIR_e_AGS_CurrPos_LINChrt' */

#endif

#if Rte_SysCon_Variant_TAIR_2

static volatile CONST(TeTAIR_e_CompFltSts, TAIR_VAR_INIT)
    KaTAIR_e_CompFltStat_Map[16] =
{
    CeTAIR_e_CompFltSts_NoFault, CeTAIR_e_CompFltSts_UdrVltg,
    CeTAIR_e_CompFltSts_OvrVltg, CeTAIR_e_CompFltSts_OvrTmp,
    CeTAIR_e_CompFltSts_InputCtlr, CeTAIR_e_CompFltSts_CrntFlty,
    CeTAIR_e_CompFltSts_InternFlt, CeTAIR_e_CompFltSts_MemoryFlty,
    CeTAIR_e_CompFltSts_Rotor_Lock, CeTAIR_e_CompFltSts_LOC_with_HCP,
    CeTAIR_e_CompFltSts_LOC_with_ORC, CeTAIR_e_CompFltSts_NoFault,
    CeTAIR_e_CompFltSts_NoFault, CeTAIR_e_CompFltSts_NoFault,
    CeTAIR_e_CompFltSts_NoFault, CeTAIR_e_CompFltSts_SNA
};                                     /* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_TAIR_2

static volatile CONST(TeTAIR_e_CompStat, TAIR_VAR_INIT) KaTAIR_e_CompStat_Map[3]
    =
{
    CeTAIR_e_NormalOp, CeTAIR_e_Degraded, CeTAIR_e_Inoperative
};                                     /* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_TAIR_4

static volatile CONST(TeTAIR_e_ECM_AC_ClutchSts, TAIR_VAR_INIT)
    KaTAIR_e_ECM_AC_ClutchSts_Map[4] =
{
    CeTAIR_e_ClutchSts_Default, CeTAIR_e_ClutchSts_ECMDsblsClutch,
    CeTAIR_e_ClutchSts_ACnotSlctd, CeTAIR_e_ClutchSts_ClutchEngd
};                                     /* Referenced by: '<S365>/Calib' */

#endif

static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_I_ACCElecCurr_D = 0.0F;/* Referenced by: '<S890>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_I_ACCElecCurr_INIT = 2.0F;/* Referenced by: '<S1049>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_I_HVAC_Cabin_CurrentReq_D =
    0.0F;                              /* Referenced by: '<S974>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT)
    KeTAIR_I_HVAC_Cabin_CurrentReq_INIT = 0.0F;/* Referenced by: '<S1070>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_I_HVAC_ECVD_CurrentAct_D =
    0.0F;                              /* Referenced by: '<S975>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_I_HVAC_ECVD_CurrentAct_INIT
    = 0.0F;                            /* Referenced by: '<S1071>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_P_ACCompElec_Pwr_D = 0.0F;/* Referenced by: '<S892>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_P_ACCompElec_Pwr_INIT =
    1000.0F;                           /* Referenced by: '<S1050>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_AGS2_CurrPos_D = 0.0F;/* Referenced by: '<S795>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_AGS2_CurrPos_Dflt =
    100.0F;                            /* Referenced by: '<S796>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_AGS2_CurrPos_Init =
    0.0F;                              /* Referenced by: '<S1015>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_AGS_CurrPos_D = 0.0F;/* Referenced by: '<S824>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_AGS_CurrPos_Dflt =
    100.0F;                            /* Referenced by: '<S825>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_AGS_CurrPos_Init = 0.0F;/* Referenced by: '<S1019>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_CPV2_ActlPstn_INIT =
    0.0F;                              /* Referenced by: '<S1110>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_CPV2_PstnAct_D = 0.0F;/* Referenced by: '<S526>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_CPV_Cmd_D = 0.0F;/* Referenced by: '<S583>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_CPV_Cmd_INIT = 0.0F;/* Referenced by: '<S1131>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_CabVlvCmd_D = 0.0F;/* Referenced by: '<S587>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_DVC_RadFanCmd_D = 0.0F;/* Referenced by: '<S986>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_DVC_RadFan_Cmd_INIT =
    0.0F;                              /* Referenced by: '<S1025>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_ECM_AirflowRequest_D =
    0.0F;                              /* Referenced by: '<S987>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_ECM_RadFanReq_D = 0.0F;/* Referenced by: '<S988>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_ECM_RadFanReq_FailSafe =
    100.0F;                            /* Referenced by: '<S989>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_ECM_RadFanReq_INIT =
    0.0F;                              /* Referenced by: '<S1026>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EEXV_Cmd_D = 0.0F;/* Referenced by: '<S595>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EEXV_Cmd_INIT = 0.0F;/* Referenced by: '<S1132>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EEXV_PosAct_D = 0.0F;/* Referenced by: '<S718>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EEXV_PosAct_INIT = 0.0F;/* Referenced by: '<S1157>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EXV_Cmd_D = 0.0F;/* Referenced by: '<S601>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EXV_Cmd_INIT = 0.0F;/* Referenced by: '<S1133>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EXV_PosAct_D = 0.0F;/* Referenced by: '<S681>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_EXV_PosAct_INIT = 0.0F;/* Referenced by: '<S1086>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_FrWyVlv_ActlPstn_INIT =
    0.0F;                              /* Referenced by: '<S1170>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_FrWyVlv_PstnAct_D =
    0.0F;                              /* Referenced by: '<S639>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_FtBlwrCmd_D = 0.0F;/* Referenced by: '<S931>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_FtBlwrCmd_INIT = 0.0F;/* Referenced by: '<S1051>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_HTL_BypsVlv_ActlPstn_D =
    0.0F;                              /* Referenced by: '<S550>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT)
    KeTAIR_Pct_HTL_BypsVlv_ActlPstn_INIT = 0.0F;/* Referenced by: '<S1118>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_HTL_BypsVlv_Cmd_D =
    0.0F;                              /* Referenced by: '<S609>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_HTL_BypsVlv_Cmd_INIT =
    0.0F;                              /* Referenced by: '<S1134>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_HTRBV_ActuatorPosAct_D =
    0.0F;                              /* Referenced by: '<S655>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT)
    KeTAIR_Pct_HTRBV_ActuatorPosAct_INIT = 0.0F;/* Referenced by: '<S1178>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_HTRBV_ActuatorPosTrgt_D
    = 0.0F;                            /* Referenced by: '<S656>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT)
    KeTAIR_Pct_HTRBV_ActuatorPosTrgt_INIT = 0.0F;/* Referenced by: '<S1179>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_HT_CabVlvCmd_INIT =
    50.0F;                             /* Referenced by: '<S1135>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_LTR_BypsVlv_ActlPstn_D =
    0.0F;                              /* Referenced by: '<S496>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT)
    KeTAIR_Pct_LTR_BypsVlv_ActlPstn_INIT = 0.0F;/* Referenced by: '<S1099>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_LTR_BypsVlv_Cmd_D =
    0.0F;                              /* Referenced by: '<S617>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_LTR_BypsVlv_Cmd_INIT =
    0.0F;                              /* Referenced by: '<S1136>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_OEXV_Cmd_D = 0.0F;/* Referenced by: '<S625>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_OEXV_Cmd_INIT = 0.0F;/* Referenced by: '<S1137>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_OEXV_PosAct_D = 0.0F;/* Referenced by: '<S744>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_OEXV_PosAct_INIT = 0.0F;/* Referenced by: '<S1191>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_RadFanSts_D = 0.0F;/* Referenced by: '<S990>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_RrBlwrCmd_D = 0.0F;/* Referenced by: '<S937>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_Pct_RrBlwrCmd_INIT = 0.0F;/* Referenced by: '<S1052>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_CEXV_OutTempSens_D = 0.0F;/* Referenced by: '<S682>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_CompBoardTemp_D = 0.0F;/* Referenced by: '<S947>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_CompBoardTemp_INIT =
    25.0F;                             /* Referenced by: '<S1034>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_CompIGBTTemp_D = 0.0F;/* Referenced by: '<S951>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_CompIGBTTemp_INIT = 25.0F;/* Referenced by: '<S1035>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EEXV_BoardTemp_D = 0.0F;/* Referenced by: '<S719>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EEXV_BoardTemp_INIT =
    0.0F;                              /* Referenced by: '<S1158>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EEXV_RefTemp_D = 0.0F;/* Referenced by: '<S720>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EEXV_RefTemp_INIT = 0.0F;/* Referenced by: '<S1159>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EXV_BoardTemp_D = 0.0F;/* Referenced by: '<S683>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EXV_BoardTemp_INIT = 0.0F;/* Referenced by: '<S1087>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EXV_RefTemp_D = 0.0F;/* Referenced by: '<S684>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_EXV_RefTemp_INIT = 0.0F;/* Referenced by: '<S1088>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_D = 0.0F;/* Referenced by: '<S964>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_FailSafe =
    25.0F;                             /* Referenced by: '<S965>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_INIT = 25.0F;/* Referenced by: '<S1036>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_P1C_D = 0.0F;/* Referenced by: '<S969>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_P1C_FailSafe =
    25.0F;                             /* Referenced by: '<S970>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_P1C_INIT =
    25.0F;                             /* Referenced by: '<S1037>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_Tgt_D = 0.0F;/* Referenced by: '<S955>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_Tgt_FailSafe =
    25.0F;                             /* Referenced by: '<S956>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_FtEvapTmp_Tgt_INIT =
    25.0F;                             /* Referenced by: '<S1038>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_HTRBV_EcuTemp_D = 0.0F;/* Referenced by: '<S657>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_HTRBV_EcuTemp_INIT = 0.0F;/* Referenced by: '<S1180>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_HtrCoreTmp_Tgt_D = 0.0F;/* Referenced by: '<S935>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_HtrCoreTmp_Tgt_INIT =
    25.0F;                             /* Referenced by: '<S1039>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_OEXV_BoardTemp_D = 0.0F;/* Referenced by: '<S745>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_OEXV_BoardTemp_INIT =
    0.0F;                              /* Referenced by: '<S1192>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_OEXV_InTempSens_D = 0.0F;/* Referenced by: '<S746>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_OEXV_OutTempSens_D = 0.0F;/* Referenced by: '<S747>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_OEXV_RefTemp_D = 0.0F;/* Referenced by: '<S748>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_OEXV_RefTemp_INIT = 0.0F;/* Referenced by: '<S1193>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_VhIntTmp_D = 0.0F;/* Referenced by: '<S939>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_T_VhIntTmp_INIT = 25.0F;/* Referenced by: '<S1040>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_CPV2_MtrVltg_D = 0.0F;/* Referenced by: '<S527>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_CPV2_MtrVltg_INIT = 0.0F;/* Referenced by: '<S1111>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_CompHVInp_D = 0.0F;/* Referenced by: '<S900>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_CompHVInput_INIT = 250.0F;/* Referenced by: '<S1053>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_EEXV_SupplyVolt_D = 0.0F;/* Referenced by: '<S721>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_EEXV_SupplyVolt_INIT =
    0.0F;                              /* Referenced by: '<S1160>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_EXV_SupplyVolt_D = 0.0F;/* Referenced by: '<S685>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_EXV_SupplyVolt_INIT =
    0.0F;                              /* Referenced by: '<S1089>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_FrWyVlv_MtrVltg_D = 0.0F;/* Referenced by: '<S640>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_FrWyVlv_MtrVltg_INIT =
    0.0F;                              /* Referenced by: '<S1171>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_HTL_BypsVlv_MtrVltg_D =
    0.0F;                              /* Referenced by: '<S551>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_HTL_BypsVlv_MtrVltg_INIT =
    0.0F;                              /* Referenced by: '<S1119>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_HTRBV_EcuVoltage_D = 0.0F;/* Referenced by: '<S658>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_HTRBV_EcuVoltage_INIT =
    0.0F;                              /* Referenced by: '<S1181>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_HT_CabVlvSts_D = 0.0F;/* Referenced by: '<S783>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_HT_CabVlvSts_INIT = 0.0F;/* Referenced by: '<S1129>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_LTR_BypsVlv_MtrVltg_D =
    0.0F;                              /* Referenced by: '<S497>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_LTR_BypsVlv_MtrVltg_INIT =
    0.0F;                              /* Referenced by: '<S1100>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_OEXV_SupplyVolt_D = 0.0F;/* Referenced by: '<S749>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_U_OEXV_SupplyVolt_INIT =
    0.0F;                              /* Referenced by: '<S1194>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCElecCurr_SD = 0;/* Referenced by: '<S891>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCompElec_Pwr_FA_D = 0;/* Referenced by: '<S893>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCompElec_Pwr_FA_INIT =
    0;                                 /* Referenced by: '<S1054>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCompElec_Pwr_FA_SD = 0;/* Referenced by: '<S894>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCompElec_Pwr_SD = 0;/* Referenced by: '<S895>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCompReq_D = 0;/* Referenced by: '<S896>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCompReq_INIT = 0;/* Referenced by: '<S1055>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ACCompReq_SD = 0;/* Referenced by: '<S897>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_BoostSts_D = 0;/* Referenced by: '<S797>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_BoostSts_SD = 0;/* Referenced by: '<S798>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_CalibrationActv_D =
    0;                                 /* Referenced by: '<S799>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_CalibrationActv_SD =
    0;                                 /* Referenced by: '<S800>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_CalibrationSts_SD =
    0;                                 /* Referenced by: '<S801>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_CurrPosFA_D = 0;/* Referenced by: '<S802>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_CurrPosFA_SD = 0;/* Referenced by: '<S803>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_CurrPos_SD = 0;/* Referenced by: '<S804>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_EnumCurrPos_SD = 0;/* Referenced by: '<S805>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrFdbFA_D = 0;/* Referenced by: '<S806>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrFdbFA_SD = 0;/* Referenced by: '<S807>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrFdb_SD = 0;/* Referenced by: '<S808>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrMechBreak_D = 0;/* Referenced by: '<S809>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrMechBreak_SD = 0;/* Referenced by: '<S810>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrMechStuck_D = 0;/* Referenced by: '<S811>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrMechStuck_SD = 0;/* Referenced by: '<S812>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrOverTemp_D = 0;/* Referenced by: '<S813>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrOverTemp_SD = 0;/* Referenced by: '<S814>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrOverVolt_D = 0;/* Referenced by: '<S815>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrOverVolt_SD = 0;/* Referenced by: '<S816>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrUnderVolt_D = 0;/* Referenced by: '<S817>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ErrUnderVolt_SD = 0;/* Referenced by: '<S818>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_IO_CntrlSt_SD = 0;/* Referenced by: '<S855>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_PstnCmnd_SD = 0;/* Referenced by: '<S856>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ResErr_D = 0;/* Referenced by: '<S819>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS2_ResErr_SD = 0;/* Referenced by: '<S820>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_BoostSts_D = 0;/* Referenced by: '<S826>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_BoostSts_SD = 0;/* Referenced by: '<S827>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_CalibrationActv_D = 0;/* Referenced by: '<S828>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_CalibrationActv_SD =
    0;                                 /* Referenced by: '<S829>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_CalibrationSts_SD = 0;/* Referenced by: '<S830>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_CurrPosFA_D = 0;/* Referenced by: '<S831>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_CurrPosFA_SD = 0;/* Referenced by: '<S832>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_CurrPos_SD = 0;/* Referenced by: '<S833>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_EnumCurrPos_SD = 0;/* Referenced by: '<S834>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrFdbFA_D = 0;/* Referenced by: '<S835>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrFdbFA_SD = 0;/* Referenced by: '<S836>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrFdb_SD = 0;/* Referenced by: '<S837>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrMechBreak_D = 0;/* Referenced by: '<S838>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrMechBreak_SD = 0;/* Referenced by: '<S839>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrMechStuck_D = 0;/* Referenced by: '<S840>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrMechStuck_SD = 0;/* Referenced by: '<S841>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrOverTemp_D = 0;/* Referenced by: '<S842>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrOverTemp_SD = 0;/* Referenced by: '<S843>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrOverVolt_D = 0;/* Referenced by: '<S844>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrOverVolt_SD = 0;/* Referenced by: '<S845>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrUnderVolt_D = 0;/* Referenced by: '<S846>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ErrUnderVolt_SD = 0;/* Referenced by: '<S847>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_IO_CntrlSt_SD = 0;/* Referenced by: '<S861>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_PstnCmnd_SD = 0;/* Referenced by: '<S862>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ResErr_D = 0;/* Referenced by: '<S848>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_AGS_ResErr_SD = 0;/* Referenced by: '<S849>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CEXV_OutPressSens_FA_D =
    0;                                 /* Referenced by: '<S686>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CEXV_OutPressSens_FA_SD =
    0;                                 /* Referenced by: '<S687>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CEXV_OutPressSens_SD = 0;/* Referenced by: '<S688>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CEXV_OutTempSens_FA_D = 0;/* Referenced by: '<S689>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CEXV_OutTempSens_FA_SD =
    0;                                 /* Referenced by: '<S690>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CEXV_OutTempSens_SD = 0;/* Referenced by: '<S691>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_ActlPstn_FA_INIT = 0;/* Referenced by: '<S1112>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_CalSts_SD = 0;/* Referenced by: '<S528>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_ErrMsgs_FA_D = 0;/* Referenced by: '<S529>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_ErrMsgs_FA_INIT = 0;/* Referenced by: '<S1113>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_ErrMsgs_FA_SD = 0;/* Referenced by: '<S530>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_ErrMsgs_SD = 0;/* Referenced by: '<S531>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_ErrSts_SD = 0;/* Referenced by: '<S532>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_MtrVltg_SD = 0;/* Referenced by: '<S533>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_PstnAct_FA_D = 0;/* Referenced by: '<S534>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_PstnAct_FA_SD = 0;/* Referenced by: '<S535>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_PstnAct_SD = 0;/* Referenced by: '<S536>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_RsErr_D = 0;/* Referenced by: '<S537>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_RsErr_INIT = 0;/* Referenced by: '<S1114>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV2_RsErr_SD = 0;/* Referenced by: '<S538>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV_Cmd_SD = 0;/* Referenced by: '<S584>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CPV_IO_CntrlSt_SD = 0;/* Referenced by: '<S585>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CabVlvCmd_IO_Cnt_SD = 0;/* Referenced by: '<S588>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CabVlvCmd_SD = 0;/* Referenced by: '<S589>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ChilRgtVlvCmd_INIT = 0;/* Referenced by: '<S1138>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ChlrRfgtVlv_Cmd_D = 0;/* Referenced by: '<S591>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ChlrfgtVlv_Cmd_IO_Cnt_SD =
    0;                                 /* Referenced by: '<S592>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ChlrfgtVlv_Cmd_SD = 0;/* Referenced by: '<S593>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompBoardTemp_FA_D = 0;/* Referenced by: '<S948>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompBoardTemp_FA_INIT = 0;/* Referenced by: '<S1041>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompBoardTemp_FA_SD = 0;/* Referenced by: '<S949>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompBoardTemp_SD = 0;/* Referenced by: '<S950>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompFltStat_SD = 0;/* Referenced by: '<S898>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompHVInp_FA_D = 0;/* Referenced by: '<S901>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompHVInp_FA_SD = 0;/* Referenced by: '<S902>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompHVInp_SD = 0;/* Referenced by: '<S903>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompHVInput_FA_INIT = 0;/* Referenced by: '<S1056>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompIGBTTemp_FA_D = 0;/* Referenced by: '<S952>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompIGBTTemp_FA_INIT = 0;/* Referenced by: '<S1042>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompIGBTTemp_FA_SD = 0;/* Referenced by: '<S953>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompIGBTTemp_SD = 0;/* Referenced by: '<S954>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdFdb_FA_D = 0;/* Referenced by: '<S904>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdFdb_FA_INIT = 0;/* Referenced by: '<S1057>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdFdb_FA_SD = 0;/* Referenced by: '<S905>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdFdb_SD = 0;/* Referenced by: '<S906>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdIncrReq_D = 0;/* Referenced by: '<S908>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdIncrReq_INIT = 0;/* Referenced by: '<S1058>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdIncrReq_SD = 0;/* Referenced by: '<S909>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompSpdTgt_IO_Cnt_SD = 0;/* Referenced by: '<S874>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_CompStat_SD = 0;/* Referenced by: '<S910>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_AGS2_Calibration_Start_D = 0;/* Referenced by: '<S857>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_AGS2_Calibration_Start_SD = 0;/* Referenced by: '<S858>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_AGS_Calibration_Start_D = 0;/* Referenced by: '<S863>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_AGS_Calibration_Start_SD = 0;/* Referenced by: '<S864>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_DVC_CompSpdTgt_SD = 0;/* Referenced by: '<S875>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_EEXV_Calibration_Start_D = 0;/* Referenced by: '<S596>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_EEXV_Calibration_Start_SD = 0;/* Referenced by: '<S597>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_EXV_Calibration_Start_D = 0;/* Referenced by: '<S692>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_EXV_Calibration_Start_SD = 0;/* Referenced by: '<S693>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_DVC_HTCV_CalibStrt_SD = 0;/* Referenced by: '<S784>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_OEXV_Calibration_Start_D = 0;/* Referenced by: '<S626>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_OEXV_Calibration_Start_SD = 0;/* Referenced by: '<S627>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_DVC_RadFanCmd_SD = 0;/* Referenced by: '<S991>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_DVC_RadFanHandshake_disbld_D = 0;/* Referenced by: '<S992>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_AC_ClutchStsFA_D = 0;/* Referenced by: '<S976>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_AC_ClutchStsFA_INIT =
    0;                                 /* Referenced by: '<S1072>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_AC_ClutchStsFA_SD = 0;/* Referenced by: '<S977>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_AC_ClutchSts_SD = 0;/* Referenced by: '<S978>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_AirflowRequestFA_D =
    0;                                 /* Referenced by: '<S993>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_AirflowRequestFA_SD =
    0;                                 /* Referenced by: '<S994>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_AirflowRequest_SD = 0;/* Referenced by: '<S995>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_RadFanReq_FA_D = 0;/* Referenced by: '<S996>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_RadFanReq_FA_INIT = 0;/* Referenced by: '<S1027>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_RadFanReq_FA_SD = 0;/* Referenced by: '<S997>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_ECM_RadFanReq_SD = 0;/* Referenced by: '<S998>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_BoardTemp_SD = 0;/* Referenced by: '<S722>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_CalRq_D = 0;/* Referenced by: '<S723>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_CalRq_INIT = 0;/* Referenced by: '<S1161>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_CalRq_SD = 0;/* Referenced by: '<S724>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_CalStat_SD = 0;/* Referenced by: '<S725>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_CalibStrt_INIT = 0;/* Referenced by: '<S1139>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_Cmd_SD = 0;/* Referenced by: '<S598>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_Err_SD = 0;/* Referenced by: '<S726>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_IO_CntrlSt_SD = 0;/* Referenced by: '<S599>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_PosAct_FA_D = 0;/* Referenced by: '<S727>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_PosAct_FA_INIT = 0;/* Referenced by: '<S1162>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_PosAct_FA_SD = 0;/* Referenced by: '<S728>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_PosAct_SD = 0;/* Referenced by: '<S729>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefPress_FA_D = 0;/* Referenced by: '<S730>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefPress_FA_INIT = 0;/* Referenced by: '<S1163>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefPress_FA_SD = 0;/* Referenced by: '<S731>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefPress_SD = 0;/* Referenced by: '<S732>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefTemp_FA_D = 0;/* Referenced by: '<S733>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefTemp_FA_INIT = 0;/* Referenced by: '<S1164>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefTemp_FA_SD = 0;/* Referenced by: '<S734>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RefTemp_SD = 0;/* Referenced by: '<S735>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RspErr_D = 0;/* Referenced by: '<S736>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RspErr_INIT = 0;/* Referenced by: '<S1165>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_RspErr_SD = 0;/* Referenced by: '<S737>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_Sts_SD = 0;/* Referenced by: '<S738>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EEXV_SupplyVolt_SD = 0;/* Referenced by: '<S739>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_BoardTemp_SD = 0;/* Referenced by: '<S694>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_CalRq_D = 0;/* Referenced by: '<S695>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_CalRq_INIT = 0;/* Referenced by: '<S1090>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_CalRq_SD = 0;/* Referenced by: '<S696>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_CalStat_SD = 0;/* Referenced by: '<S697>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_CalibStrt_INIT = 0;/* Referenced by: '<S1140>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_Cmd_SD = 0;/* Referenced by: '<S602>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_Err_SD = 0;/* Referenced by: '<S698>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_IO_CntrlSt_SD = 0;/* Referenced by: '<S603>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_PosAct_FA_D = 0;/* Referenced by: '<S699>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_PosAct_FA_INIT = 0;/* Referenced by: '<S1091>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_PosAct_FA_SD = 0;/* Referenced by: '<S700>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_PosAct_SD = 0;/* Referenced by: '<S701>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefPress_FA_D = 0;/* Referenced by: '<S702>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefPress_FA_INIT = 0;/* Referenced by: '<S1092>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefPress_FA_SD = 0;/* Referenced by: '<S703>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefPress_SD = 0;/* Referenced by: '<S704>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefTemp_FA_D = 0;/* Referenced by: '<S705>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefTemp_FA_INIT = 0;/* Referenced by: '<S1093>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefTemp_FA_SD = 0;/* Referenced by: '<S706>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RefTemp_SD = 0;/* Referenced by: '<S707>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RspErr_D = 0;/* Referenced by: '<S708>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RspErr_INIT = 0;/* Referenced by: '<S1094>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_RspErr_SD = 0;/* Referenced by: '<S709>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_Sts_SD = 0;/* Referenced by: '<S710>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_EXV_SupplyVolt_SD = 0;/* Referenced by: '<S711>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_ActlPstn_FA_INIT =
    0;                                 /* Referenced by: '<S1172>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_CalSts_SD = 0;/* Referenced by: '<S641>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_ErrMsgs_FA_D = 0;/* Referenced by: '<S642>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_ErrMsgs_FA_INIT =
    0;                                 /* Referenced by: '<S1173>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_ErrMsgs_FA_SD = 0;/* Referenced by: '<S643>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_ErrMsgs_SD = 0;/* Referenced by: '<S644>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_ErrSts_SD = 0;/* Referenced by: '<S645>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_MtrVltg_SD = 0;/* Referenced by: '<S646>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_PstnAct_FA_D = 0;/* Referenced by: '<S647>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_PstnAct_FA_SD = 0;/* Referenced by: '<S648>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_PstnAct_SD = 0;/* Referenced by: '<S649>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_RsErr_D = 0;/* Referenced by: '<S650>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_RsErr_INIT = 0;/* Referenced by: '<S1174>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrWyVlv_RsErr_SD = 0;/* Referenced by: '<S651>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FrtRgtVlvCmd_INIT = 0;/* Referenced by: '<S1141>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtBlwrCmd_FA_D = 0;/* Referenced by: '<S932>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtBlwrCmd_FA_INIT = 0;/* Referenced by: '<S1059>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtBlwrCmd_FA_SD = 0;/* Referenced by: '<S933>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtBlwrCmd_SD = 0;/* Referenced by: '<S934>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_FA_D = 0;/* Referenced by: '<S966>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_FA_INIT = 0;/* Referenced by: '<S1043>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_FA_SD = 0;/* Referenced by: '<S967>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_P1C_FA_D = 0;/* Referenced by: '<S971>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_P1C_FA_INIT = 0;/* Referenced by: '<S1044>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_P1C_FA_SD = 0;/* Referenced by: '<S972>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_P1C_SD = 0;/* Referenced by: '<S973>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_SD = 0;/* Referenced by: '<S968>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_Slct = 0;/* Referenced by: '<S963>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_Tgt_FA_D = 0;/* Referenced by: '<S957>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_Tgt_FA_INIT = 0;/* Referenced by: '<S1045>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_Tgt_FA_SD = 0;/* Referenced by: '<S958>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtEvapTmp_Tgt_SD = 0;/* Referenced by: '<S959>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtRfgtVlv_Cmd_D = 0;/* Referenced by: '<S605>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtRfgtVlv_Cmd_IO_Cnt_SD =
    0;                                 /* Referenced by: '<S606>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_FtRfgtVlv_Cmd_SD = 0;/* Referenced by: '<S607>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ActlPstn_FA_D
    = 0;                               /* Referenced by: '<S552>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTL_BypsVlv_ActlPstn_FA_INIT = 0;/* Referenced by: '<S1120>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTL_BypsVlv_ActlPstn_FA_SD = 0;/* Referenced by: '<S553>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ActlPstn_SD =
    0;                                 /* Referenced by: '<S554>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_CalSts_FA_D =
    0;                                 /* Referenced by: '<S555>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTL_BypsVlv_CalSts_FA_INIT = 0;/* Referenced by: '<S1121>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_CalSts_FA_SD =
    0;                                 /* Referenced by: '<S556>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_CalSts_SD = 0;/* Referenced by: '<S557>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_Cmd_SD = 0;/* Referenced by: '<S610>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ErrMsgs_FA_D =
    0;                                 /* Referenced by: '<S558>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTL_BypsVlv_ErrMsgs_FA_INIT = 0;/* Referenced by: '<S1122>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ErrMsgs_FA_SD
    = 0;                               /* Referenced by: '<S559>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ErrMsgs_SD =
    0;                                 /* Referenced by: '<S560>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ErrSts_FA_D =
    0;                                 /* Referenced by: '<S561>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTL_BypsVlv_ErrSts_FA_INIT = 0;/* Referenced by: '<S1123>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ErrSts_FA_SD =
    0;                                 /* Referenced by: '<S562>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_ErrSts_SD = 0;/* Referenced by: '<S563>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_IO_CntrlSt_SD
    = 0;                               /* Referenced by: '<S611>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_MtrVltg_FA_D =
    0;                                 /* Referenced by: '<S564>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTL_BypsVlv_MtrVltg_FA_INIT = 0;/* Referenced by: '<S1124>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_MtrVltg_FA_SD
    = 0;                               /* Referenced by: '<S565>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_MtrVltg_SD =
    0;                                 /* Referenced by: '<S566>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_RsErr_D = 0;/* Referenced by: '<S567>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_RsErr_INIT =
    0;                                 /* Referenced by: '<S1125>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTL_BypsVlv_RsErr_SD = 0;/* Referenced by: '<S568>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ActuatorPosAct_FA_D
    = 0;                               /* Referenced by: '<S659>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTRBV_ActuatorPosAct_FA_INIT = 0;/* Referenced by: '<S1182>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HTRBV_ActuatorPosAct_FA_SD = 0;/* Referenced by: '<S660>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ActuatorPosAct_SD =
    0;                                 /* Referenced by: '<S661>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ActuatorPosTrgt_SD =
    0;                                 /* Referenced by: '<S662>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_EcuTemp_SD = 0;/* Referenced by: '<S663>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_EcuVoltage_SD = 0;/* Referenced by: '<S664>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ErrLinCom_SD = 0;/* Referenced by: '<S665>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ErrPosition_SD = 0;/* Referenced by: '<S666>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_Err_Ecu_SD = 0;/* Referenced by: '<S667>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_Err_Motor_SD = 0;/* Referenced by: '<S668>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_Err_Voltage_SD = 0;/* Referenced by: '<S669>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ResponseError_D = 0;/* Referenced by: '<S670>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ResponseError_INIT =
    0;                                 /* Referenced by: '<S1183>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_ResponseError_SD =
    0;                                 /* Referenced by: '<S671>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_SelfCalReq_D = 0;/* Referenced by: '<S672>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_SelfCalReq_INIT = 0;/* Referenced by: '<S1184>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_SelfCalReq_SD = 0;/* Referenced by: '<S673>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HTRBV_SystemState_SD = 0;/* Referenced by: '<S674>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HT_CabVlvSts_FA_D = 0;/* Referenced by: '<S785>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HT_CabVlvSts_FA_INIT = 0;/* Referenced by: '<S1130>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HT_CabVlvSts_FA_SD = 0;/* Referenced by: '<S786>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HT_CabVlvSts_SD = 0;/* Referenced by: '<S787>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HT_Shtoff_VlvCmd_D = 0;/* Referenced by: '<S613>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HT_Shtoff_VlvCmd_INIT = 0;/* Referenced by: '<S1142>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HT_Shtoff_VlvCmd_IO_CntrlSt_SD = 0;/* Referenced by: '<S614>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HT_Shtoff_VlvCmd_SD = 0;/* Referenced by: '<S615>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HVAC_Cabin_CurrentReq_FA_D = 0;/* Referenced by: '<S979>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HVAC_Cabin_CurrentReq_FA_INIT = 0;/* Referenced by: '<S1073>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HVAC_Cabin_CurrentReq_FA_SD = 0;/* Referenced by: '<S980>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HVAC_Cabin_CurrentReq_SD =
    0;                                 /* Referenced by: '<S981>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HVAC_ECVD_CurrentAct_FA_D
    = 0;                               /* Referenced by: '<S982>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HVAC_ECVD_CurrentAct_FA_INIT = 0;/* Referenced by: '<S1074>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_HVAC_ECVD_CurrentAct_FA_SD = 0;/* Referenced by: '<S983>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HVAC_ECVD_CurrentAct_SD =
    0;                                 /* Referenced by: '<S984>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HWIOSrcInfo_Enbl = 0;/* Referenced by:
                                                                      * '<S712>/Calib'
                                                                      * '<S750>/Calib'
                                                                      */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HghRfrgtPresFailSts_D = 0;/* Referenced by: '<S913>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HghRfrgtPresFailSts_INIT =
    0;                                 /* Referenced by: '<S1060>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HghRfrgtPresFailSts_SD =
    0;                                 /* Referenced by: '<S914>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HghRfrgtPres_FA_D = 0;/* Referenced by: '<S915>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HghRfrgtPres_FA_SD = 0;/* Referenced by: '<S916>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HghRfrgtPres_SD = 0;/* Referenced by: '<S917>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_HtrCoreTmp_Tgt_SD = 0;/* Referenced by: '<S936>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ActlPstn_FA_D
    = 0;                               /* Referenced by: '<S498>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_LTR_BypsVlv_ActlPstn_FA_INIT = 0;/* Referenced by: '<S1101>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_LTR_BypsVlv_ActlPstn_FA_SD = 0;/* Referenced by: '<S499>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ActlPstn_SD =
    0;                                 /* Referenced by: '<S500>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_CalSts_FA_D =
    0;                                 /* Referenced by: '<S501>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_LTR_BypsVlv_CalSts_FA_INIT = 0;/* Referenced by: '<S1102>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_CalSts_FA_SD =
    0;                                 /* Referenced by: '<S502>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_CalSts_SD = 0;/* Referenced by: '<S503>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_Cmd_SD = 0;/* Referenced by: '<S618>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ErrMsgs_FA_D =
    0;                                 /* Referenced by: '<S504>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_LTR_BypsVlv_ErrMsgs_FA_INIT = 0;/* Referenced by: '<S1103>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ErrMsgs_FA_SD
    = 0;                               /* Referenced by: '<S505>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ErrMsgs_SD =
    0;                                 /* Referenced by: '<S506>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ErrSts_FA_D =
    0;                                 /* Referenced by: '<S507>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_LTR_BypsVlv_ErrSts_FA_INIT = 0;/* Referenced by: '<S1104>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ErrSts_FA_SD =
    0;                                 /* Referenced by: '<S508>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_ErrSts_SD = 0;/* Referenced by: '<S509>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_IO_CntrlSt_SD
    = 0;                               /* Referenced by: '<S619>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_MtrVltg_FA_D =
    0;                                 /* Referenced by: '<S510>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_LTR_BypsVlv_MtrVltg_FA_INIT = 0;/* Referenced by: '<S1105>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_MtrVltg_FA_SD
    = 0;                               /* Referenced by: '<S511>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_MtrVltg_SD =
    0;                                 /* Referenced by: '<S512>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_RsErr_D = 0;/* Referenced by: '<S513>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_RsErr_INIT =
    0;                                 /* Referenced by: '<S1106>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LTR_BypsVlv_RsErr_SD = 0;/* Referenced by: '<S514>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LT_Shtoff_VlvCmd_D = 0;/* Referenced by: '<S621>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LT_Shtoff_VlvCmd_INIT = 0;/* Referenced by: '<S1143>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT)
    KeTAIR_b_LT_Shtoff_VlvCmd_IO_CntrlSt_SD = 0;/* Referenced by: '<S622>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_LT_Shtoff_VlvCmd_SD = 0;/* Referenced by: '<S623>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_BoardTemp_SD = 0;/* Referenced by: '<S751>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_CalRq_D = 0;/* Referenced by: '<S752>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_CalRq_INIT = 0;/* Referenced by: '<S1195>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_CalRq_SD = 0;/* Referenced by: '<S753>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_CalStat_SD = 0;/* Referenced by: '<S754>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_CalibStrt_INIT = 0;/* Referenced by: '<S1144>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_Cmd_SD = 0;/* Referenced by: '<S628>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_Err_SD = 0;/* Referenced by: '<S755>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_IO_CntrlSt_SD = 0;/* Referenced by: '<S629>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_InTempSens_FA_D = 0;/* Referenced by: '<S756>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_InTempSens_FA_SD = 0;/* Referenced by: '<S757>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_InTempSens_SD = 0;/* Referenced by: '<S758>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_OutPressSens_FA_D =
    0;                                 /* Referenced by: '<S759>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_OutPressSens_FA_SD =
    0;                                 /* Referenced by: '<S760>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_OutPressSens_SD = 0;/* Referenced by: '<S761>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_OutTempSens_FA_D = 0;/* Referenced by: '<S762>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_OutTempSens_FA_SD =
    0;                                 /* Referenced by: '<S763>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_OutTempSens_SD = 0;/* Referenced by: '<S764>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_PosAct_FA_D = 0;/* Referenced by: '<S765>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_PosAct_FA_INIT = 0;/* Referenced by: '<S1196>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_PosAct_FA_SD = 0;/* Referenced by: '<S766>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_PosAct_SD = 0;/* Referenced by: '<S767>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefPress_FA_D = 0;/* Referenced by: '<S768>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefPress_FA_INIT = 0;/* Referenced by: '<S1197>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefPress_FA_SD = 0;/* Referenced by: '<S769>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefPress_SD = 0;/* Referenced by: '<S770>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefTemp_FA_D = 0;/* Referenced by: '<S771>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefTemp_FA_INIT = 0;/* Referenced by: '<S1198>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefTemp_FA_SD = 0;/* Referenced by: '<S772>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RefTemp_SD = 0;/* Referenced by: '<S773>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RspErr_D = 0;/* Referenced by: '<S774>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RspErr_INIT = 0;/* Referenced by: '<S1199>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_RspErr_SD = 0;/* Referenced by: '<S775>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_Sts_SD = 0;/* Referenced by: '<S776>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_OEXV_SupplyVolt_SD = 0;/* Referenced by: '<S777>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RadFanHandshake_disbld_SD
    = 0;                               /* Referenced by: '<S999>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RadFanStsFA_D = 0;/* Referenced by: '<S1000>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RadFanStsFA_SD = 0;/* Referenced by: '<S1001>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RadFanSts_SD = 0;/* Referenced by: '<S1002>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RadFan_IO_Cnt_SD = 0;/* Referenced by: '<S1003>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearCabinFanStsFA_D = 0;/* Referenced by: '<S919>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearCabinFanStsFA_SD = 0;/* Referenced by: '<S920>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearCabinFanSts_FA_INIT =
    0;                                 /* Referenced by: '<S1066>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearCabinFanSts_SD = 0;/* Referenced by: '<S921>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearDefrostStsFA_D = 0;/* Referenced by: '<S922>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearDefrostStsFA_INIT = 0;/* Referenced by: '<S1067>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearDefrostStsFA_SD = 0;/* Referenced by: '<S923>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RearDefrostSts_SD = 0;/* Referenced by: '<S924>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RespErr_EAC_INIT = 0;/* Referenced by: '<S1061>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_RrBlwrCmd_SD = 0;/* Referenced by: '<S938>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_VhIntTmp_FA_D = 0;/* Referenced by: '<S940>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_VhIntTmp_FA_INIT = 0;/* Referenced by: '<S1046>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_VhIntTmp_FA_SD = 0;/* Referenced by: '<S941>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_VhIntTmp_SD = 0;/* Referenced by: '<S942>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_WinshldDfrst_D = 0;/* Referenced by: '<S878>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_WinshldDfrst_INIT = 0;/* Referenced by: '<S1062>/Calib' */
static volatile CONST(boolean, TAIR_VAR_INIT) KeTAIR_b_WinshldDfrst_SD = 0;/* Referenced by: '<S879>/Calib' */
static volatile CONST(TeTAIR_e_AGS_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_AGS2_CalibrationSts_D = CeTAIR_e_AGS_NotCalibrated;/* Referenced by: '<S821>/Calib' */
static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT) KeTAIR_e_AGS2_CurrPos_D
    = CeFSCR_e_Open100;                /* Referenced by: '<S822>/Calib' */
static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT)
    KeTAIR_e_AGS2_CurrPos_Init = CeFSCR_e_Open100;/* Referenced by: '<S1016>/Calib' */
static volatile CONST(TeTAIR_e_AGS_ErrLIN, TAIR_VAR_INIT) KeTAIR_e_AGS2_ErrFdb_D
    = CeTAIR_e_AGS_NO_ERROR;           /* Referenced by: '<S823>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_AGS2_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S859>/Calib' */
static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT)
    KeTAIR_e_AGS2_PstnCmnd_D = CeFSCR_e_Open100;/* Referenced by: '<S860>/Calib' */
static volatile CONST(TeTAIR_e_AGS_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_AGS_CalibrationSts_D = CeTAIR_e_AGS_NotCalibrated;/* Referenced by: '<S850>/Calib' */
static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT) KeTAIR_e_AGS_CurrPos_D =
    CeFSCR_e_Open100;                  /* Referenced by: '<S851>/Calib' */
static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT)
    KeTAIR_e_AGS_CurrPos_Init = CeFSCR_e_Open100;/* Referenced by: '<S1020>/Calib' */
static volatile CONST(TeTAIR_e_AGS_ErrLIN, TAIR_VAR_INIT) KeTAIR_e_AGS_ErrFdb_D =
    CeTAIR_e_AGS_NO_ERROR;             /* Referenced by: '<S852>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_AGS_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S865>/Calib' */
static volatile CONST(TeFSCR_e_AGS_PosRq, TAIR_VAR_INIT) KeTAIR_e_AGS_PstnCmnd_D
    = CeFSCR_e_Open100;                /* Referenced by: '<S866>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_CPV2_CalSts_D = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S539>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_CPV2_CalSts_INIT = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S1115>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT) KeTAIR_e_CPV2_ErrSts_D
    = CeTAIR_e_CPV_Status_OK;          /* Referenced by: '<S540>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT)
    KeTAIR_e_CPV2_ErrSts_INIT = CeTAIR_e_CPV_Status_OK;/* Referenced by: '<S1116>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_CPV_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S586>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_CPV_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1145>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_CabVlv_IO_Cnt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S590>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_ChilRgtVlvCmd_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1146>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_ChlrRfgtVlv_IO_Cnt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S594>/Calib' */
static volatile CONST(TeTAIR_e_CompFltSts, TAIR_VAR_INIT) KeTAIR_e_CompFltStat_D
    = CeTAIR_e_CompFltSts_NoFault;     /* Referenced by: '<S899>/Calib' */
static volatile CONST(TeTAIR_e_CompFltSts, TAIR_VAR_INIT)
    KeTAIR_e_CompFltStat_INIT = CeTAIR_e_CompFltSts_NoFault;/* Referenced by: '<S1063>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_CompSpdTgt_IO_Cnt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S876>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_CompSpdTgt_IO_Cnt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1047>/Calib' */
static volatile CONST(TeTAIR_e_CompStat, TAIR_VAR_INIT) KeTAIR_e_CompStat_D =
    CeTAIR_e_NormalOp;                 /* Referenced by: '<S911>/Calib' */
static volatile CONST(TeTAIR_e_CompStat, TAIR_VAR_INIT) KeTAIR_e_CompStat_INIT =
    CeTAIR_e_NormalOp;                 /* Referenced by: '<S1064>/Calib' */
static volatile CONST(TeTAIR_e_DVC_HTCV_Calibration, TAIR_VAR_INIT)
    KeTAIR_e_DVC_HTCV_CalibStrt_D = CeTAIR_e_DVC_HTCV_Calibration_Stop;/* Referenced by: '<S788>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_DVC_RadFan_IO_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1028>/Calib' */
static volatile CONST(TeTAIR_e_ECM_AC_ClutchSts, TAIR_VAR_INIT)
    KeTAIR_e_ECM_AC_ClutchSts_D = CeTAIR_e_ClutchSts_Default;/* Referenced by: '<S985>/Calib' */
static volatile CONST(TeTAIR_e_ECM_AC_ClutchSts, TAIR_VAR_INIT)
    KeTAIR_e_ECM_AC_ClutchSts_INIT = CeTAIR_e_ClutchSts_Default;/* Referenced by: '<S1075>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_EEXV_CalStat_D = CeTAIR_e_EXV_Calibration_Complete;/* Referenced by: '<S740>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_EEXV_CalStat_INIT = CeTAIR_e_EXV_Calibration_Complete;/* Referenced by: '<S1166>/Calib' */
static volatile CONST(TeTAIR_e_EXV_ErrorMsg, TAIR_VAR_INIT) KeTAIR_e_EEXV_Err_D =
    CeTAIR_e_EXV_ErrorMsg_OK;          /* Referenced by: '<S741>/Calib' */
static volatile CONST(TeTAIR_e_EXV_ErrorMsg, TAIR_VAR_INIT)
    KeTAIR_e_EEXV_Err_INIT = CeTAIR_e_EXV_ErrorMsg_OK;/* Referenced by: '<S1167>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_EEXV_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S600>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_EEXV_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1147>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Status, TAIR_VAR_INIT) KeTAIR_e_EEXV_Sts_D =
    CeTAIR_e_EXV_Status_OK;            /* Referenced by: '<S742>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Status, TAIR_VAR_INIT) KeTAIR_e_EEXV_Sts_INIT
    = CeTAIR_e_EXV_Status_OK;          /* Referenced by: '<S1168>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_EXV_CalStat_D = CeTAIR_e_EXV_Calibration_Complete;/* Referenced by: '<S713>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_EXV_CalStat_INIT = CeTAIR_e_EXV_Calibration_Complete;/* Referenced by: '<S1095>/Calib' */
static volatile CONST(TeTAIR_e_EXV_ErrorMsg, TAIR_VAR_INIT) KeTAIR_e_EXV_Err_D =
    CeTAIR_e_EXV_ErrorMsg_OK;          /* Referenced by: '<S714>/Calib' */
static volatile CONST(TeTAIR_e_EXV_ErrorMsg, TAIR_VAR_INIT)
    KeTAIR_e_EXV_Err_INIT = CeTAIR_e_EXV_ErrorMsg_OK;/* Referenced by: '<S1096>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_EXV_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S604>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_EXV_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1148>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Status, TAIR_VAR_INIT) KeTAIR_e_EXV_Sts_D =
    CeTAIR_e_EXV_Status_OK;            /* Referenced by: '<S715>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Status, TAIR_VAR_INIT) KeTAIR_e_EXV_Sts_INIT =
    CeTAIR_e_EXV_Status_OK;            /* Referenced by: '<S1097>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_FrWyVlv_CalSts_D = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S652>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_FrWyVlv_CalSts_INIT = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S1175>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT)
    KeTAIR_e_FrWyVlv_ErrSts_D = CeTAIR_e_CPV_Status_OK;/* Referenced by: '<S653>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT)
    KeTAIR_e_FrWyVlv_ErrSts_INIT = CeTAIR_e_CPV_Status_OK;/* Referenced by: '<S1176>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_FrtRgtVlvCmd_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1149>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_FtRfgtVlv_IO_Cnt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S608>/Calib' */
static volatile CONST(TeTAIR_e_DVC_HTCV_Calibration, TAIR_VAR_INIT)
    KeTAIR_e_HTCV_CalibStrt_INIT = CeTAIR_e_DVC_HTCV_Calibration_Stop;/* Referenced by: '<S1150>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_HTL_BypsVlv_CalSts_D = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S569>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_HTL_BypsVlv_CalSts_INIT = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S1126>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT)
    KeTAIR_e_HTL_BypsVlv_ErrSts_D = CeTAIR_e_CPV_Status_OK;/* Referenced by: '<S570>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT)
    KeTAIR_e_HTL_BypsVlv_ErrSts_INIT = CeTAIR_e_CPV_Status_OK;/* Referenced by: '<S1127>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_HTL_BypsVlv_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S612>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_HTL_BypsVlv_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1151>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_ErrLinCom, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_ErrLinCom_D = CeTAIR_e_LINComNoErrors;/* Referenced by: '<S675>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_ErrLinCom, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_ErrLinCom_INIT = CeTAIR_e_LINComNoErrors;/* Referenced by: '<S1185>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_ErrPosition, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_ErrPosition_D = CeTAIR_e_NoPosError;/* Referenced by: '<S676>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_ErrPosition, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_ErrPosition_INIT = CeTAIR_e_NoPosError;/* Referenced by: '<S1186>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_Err_Ecu, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_Err_Ecu_D = CeTAIR_e_NoEcuError;/* Referenced by: '<S677>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_Err_Ecu, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_Err_Ecu_INIT = CeTAIR_e_NoEcuError;/* Referenced by: '<S1187>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_Err_Motor, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_Err_Motor_D = CeTAIR_e_NoMotorError;/* Referenced by: '<S678>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_Err_Motor, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_Err_Motor_INIT = CeTAIR_e_NoMotorError;/* Referenced by: '<S1188>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_Err_Voltage, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_Err_Voltage_D = CeTAIR_e_NoVoltError;/* Referenced by: '<S679>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_Err_Voltage, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_Err_Voltage_INIT = CeTAIR_e_NoVoltError;/* Referenced by: '<S1189>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_SystemState, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_SystemState_D = CeTAIR_e_Normal;/* Referenced by: '<S680>/Calib' */
static volatile CONST(TeTAIR_e_HTRBV_SystemState, TAIR_VAR_INIT)
    KeTAIR_e_HTRBV_SystemState_INIT = CeTAIR_e_Normal;/* Referenced by: '<S1190>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_HT_CabVlvCmd_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1152>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S616>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1153>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_LTR_BypsVlv_CalSts_D = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S515>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_LTR_BypsVlv_CalSts_INIT = CeTAIR_e_CPV_Calibration_Complete;/* Referenced by: '<S1107>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT)
    KeTAIR_e_LTR_BypsVlv_ErrSts_D = CeTAIR_e_CPV_Status_OK;/* Referenced by: '<S516>/Calib' */
static volatile CONST(TeTAIR_e_CPV_Status, TAIR_VAR_INIT)
    KeTAIR_e_LTR_BypsVlv_ErrSts_INIT = CeTAIR_e_CPV_Status_OK;/* Referenced by: '<S1108>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_LTR_BypsVlv_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S620>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_LTR_BypsVlv_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1154>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S624>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1155>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_OEXV_CalStat_D = CeTAIR_e_EXV_Calibration_Complete;/* Referenced by: '<S778>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Calibration_Sts, TAIR_VAR_INIT)
    KeTAIR_e_OEXV_CalStat_INIT = CeTAIR_e_EXV_Calibration_Complete;/* Referenced by: '<S1200>/Calib' */
static volatile CONST(TeTAIR_e_EXV_ErrorMsg, TAIR_VAR_INIT) KeTAIR_e_OEXV_Err_D =
    CeTAIR_e_EXV_ErrorMsg_OK;          /* Referenced by: '<S779>/Calib' */
static volatile CONST(TeTAIR_e_EXV_ErrorMsg, TAIR_VAR_INIT)
    KeTAIR_e_OEXV_Err_INIT = CeTAIR_e_EXV_ErrorMsg_OK;/* Referenced by: '<S1201>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_OEXV_IO_CntrlSt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S630>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_OEXV_IO_CntrlSt_INIT = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1156>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Status, TAIR_VAR_INIT) KeTAIR_e_OEXV_Sts_D =
    CeTAIR_e_EXV_Status_OK;            /* Referenced by: '<S780>/Calib' */
static volatile CONST(TeTAIR_e_EXV_Status, TAIR_VAR_INIT) KeTAIR_e_OEXV_Sts_INIT
    = CeTAIR_e_EXV_Status_OK;          /* Referenced by: '<S1202>/Calib' */
static volatile CONST(TeTAIR_e_IO_CntrlSt, TAIR_VAR_INIT)
    KeTAIR_e_RadFan_IO_Cnt_D = CeTAIR_e_Return_Control_to_ECU;/* Referenced by: '<S1004>/Calib' */
static volatile CONST(TeTAIR_e_RearDefrostSts, TAIR_VAR_INIT)
    KeTAIR_e_RearDefrostSts_D = CeTAIR_e_RearDefrostSts_OFF;/* Referenced by: '<S925>/Calib' */
static volatile CONST(TeTAIR_e_RearDefrostSts, TAIR_VAR_INIT)
    KeTAIR_e_RearDefrostSts_INIT = CeTAIR_e_RearDefrostSts_OFF;/* Referenced by: '<S1068>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_n_CompSpdFdb_D = 0.0F;/* Referenced by: '<S907>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_n_CompSpdFdb_INIT = 2500.0F;/* Referenced by: '<S1065>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_n_DVC_CompSpdTgt_D = 0.0F;/* Referenced by: '<S877>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_n_DVC_CompSpdTgt_INIT =
    0.0F;                              /* Referenced by: '<S1048>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_CEXV_OutPressSens_D =
    0.0F;                              /* Referenced by: '<S716>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_EEXV_RefPress_D = 0.0F;/* Referenced by: '<S743>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_EEXV_RefPress_INIT = 0.0F;/* Referenced by: '<S1169>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_EXV_RefPress_D = 0.0F;/* Referenced by: '<S717>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_EXV_RefPress_INIT = 0.0F;/* Referenced by: '<S1098>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_HghRfrgtPres_D = 0.0F;/* Referenced by: '<S918>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_OEXV_OutPressSens_D =
    0.0F;                              /* Referenced by: '<S781>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_OEXV_RefPress_D = 0.0F;/* Referenced by: '<S782>/Calib' */
static volatile CONST(float32, TAIR_VAR_INIT) KeTAIR_p_OEXV_RefPress_INIT = 0.0F;/* Referenced by: '<S1203>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_CPV2_ErrMsgs_D = 0U;/* Referenced by: '<S541>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_CPV2_ErrMsgs_INIT = 0U;/* Referenced by: '<S1117>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_FrWyVlv_ErrMsgs_D = 0U;/* Referenced by: '<S654>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_FrWyVlv_ErrMsgs_INIT = 0U;/* Referenced by: '<S1177>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_HTL_BypsVlv_ErrMsgs_D = 0U;/* Referenced by: '<S571>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_HTL_BypsVlv_ErrMsgs_INIT =
    0U;                                /* Referenced by: '<S1128>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_LTR_BypsVlv_ErrMsgs_D = 0U;/* Referenced by: '<S517>/Calib' */
static volatile CONST(uint16, TAIR_VAR_INIT) KeTAIR_y_LTR_BypsVlv_ErrMsgs_INIT =
    0U;                                /* Referenced by: '<S1109>/Calib' */
static volatile CONST(uint8, TAIR_VAR_INIT) KeTAIR_y_RearCabinFanSts_D = 0U;/* Referenced by: '<S926>/Calib' */
static volatile CONST(uint8, TAIR_VAR_INIT) KeTAIR_y_RearCabinFanSts_INIT = 0U;/* Referenced by: '<S1069>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_TAIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, TAIR_VAR_INIT) VeTAIR_T_FtEvapTmpB4Sel;/* '<S961>/Switch' */
static VAR(float32, TAIR_VAR_INIT) VeTAIR_T_FtEvapTmp_P1C;/* '<S962>/Switch' */
static VAR(boolean, TAIR_VAR_INIT) VeTAIR_b_ErrMsg_SNA_B4LO;/* '<S638>/Greater  Than' */
static VAR(boolean, TAIR_VAR_INIT) VeTAIR_b_FrWyVlv_ErrMsgs_FA;/* '<S482>/Switch8' */
static VAR(boolean, TAIR_VAR_INIT) VeTAIR_b_FtEvapTmpB4Sel_FA;/* '<S961>/Switch1' */
static VAR(boolean, TAIR_VAR_INIT) VeTAIR_b_FtEvapTmp_P1C_FA;/* '<S962>/Switch1' */
static VAR(boolean, TAIR_VAR_INIT) VeTAIR_b_HTL_BypsVlv_ErrMsgs_FA;/* '<S479>/Switch19' */
static VAR(boolean, TAIR_VAR_INIT) VeTAIR_b_LTR_BypsVlv_ErrMsgs_FA;/* '<S475>/Switch8' */
static VAR(float32, TAIR_VAR_INIT) VeTAIR_p_HghRfrgtPres_AD;/* '<S888>/Switch1' */
static VAR(uint16, TAIR_VAR_INIT) VeTAIR_y_HTL_BypsVlv_ErrMsgs;/* '<S479>/Switch18' */
static VAR(uint16, TAIR_VAR_INIT) VeTAIR_y_LTR_BypsVlv_ErrMsgs;/* '<S475>/Switch7' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TAIR
#include "MemMap.h"

CONST(ConstB_TAIR_ac_T, TAIR_VAR_INIT) TAIR_ac_ConstB =
{
    CeTAIR_e_RearDefrostSts_OFF,       /* '<S1008>/Const232' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const4' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const34' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const47' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const49' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const51' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const53' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const61' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const102' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const105' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const108' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const110' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const189' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const192' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const199' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1008>/Const202' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1022>/Constant' */
    CeTAIR_e_Return_Control_to_ECU,    /* '<S1023>/Constant' */
    CeTAIR_e_Normal,                   /* '<S1008>/Const228' */
    CeTAIR_e_NoVoltError,              /* '<S1008>/Const225' */
    CeTAIR_e_NoMotorError,             /* '<S1008>/Const224' */
    CeTAIR_e_NoEcuError,               /* '<S1008>/Const223' */
    CeTAIR_e_NoPosError,               /* '<S1008>/Const227' */
    CeTAIR_e_LINComNoErrors,           /* '<S1008>/Const226' */
    CeTAIR_e_EXV_Status_OK,            /* '<S1008>/Const68' */
    CeTAIR_e_EXV_Status_OK,            /* '<S1008>/Const132' */
    CeTAIR_e_EXV_Status_OK,            /* '<S1008>/Const145' */
    CeTAIR_e_EXV_ErrorMsg_OK,          /* '<S1008>/Const69' */
    CeTAIR_e_EXV_ErrorMsg_OK,          /* '<S1008>/Const133' */
    CeTAIR_e_EXV_ErrorMsg_OK,          /* '<S1008>/Const146' */
    CeTAIR_e_EXV_Calibration_Complete, /* '<S1008>/Const65' */
    CeTAIR_e_EXV_Calibration_Complete, /* '<S1008>/Const129' */
    CeTAIR_e_EXV_Calibration_Complete, /* '<S1008>/Const142' */
    CeTAIR_e_ClutchSts_Default,        /* '<S1008>/Const41' */
    CeTAIR_e_DVC_HTCV_Calibration_Start,/* '<S1008>/Const46' */
    CeTAIR_e_NormalOp,                 /* '<S1008>/Const13' */
    CeTAIR_e_CompFltSts_NoFault,       /* '<S1008>/Const14' */
    CeTAIR_e_CPV_Status_OK,            /* '<S1008>/Const59' */
    CeTAIR_e_CPV_Status_OK,            /* '<S1008>/Const89' */
    CeTAIR_e_CPV_Status_OK,            /* '<S1008>/Const98' */
    CeTAIR_e_CPV_Status_OK,            /* '<S1008>/Const229' */
    CeTAIR_e_CPV_Calibration_Complete, /* '<S1008>/Const57' */
    CeTAIR_e_CPV_Calibration_Complete, /* '<S1008>/Const86' */
    CeTAIR_e_CPV_Calibration_Complete, /* '<S1008>/Const95' */
    CeTAIR_e_CPV_Calibration_Complete, /* '<S1008>/Const231' */
    CeTAIR_e_AGS_NO_ERROR,             /* '<S1008>/Const166' */
    CeTAIR_e_AGS_NO_ERROR,             /* '<S1008>/Const179' */
    CeTAIR_e_AGS_NO_ERROR,             /* '<S1017>/Constant' */
    CeTAIR_e_AGS_NO_ERROR,             /* '<S1014>/Constant' */
    CeTAIR_e_AGS_NotCalibrated,        /* '<S1008>/Const171' */
    CeTAIR_e_AGS_NotCalibrated,        /* '<S1008>/Const184' */
    CeTAIR_e_AGS_NotCalibrated,        /* '<S1018>/Constant' */
    CeTAIR_e_AGS_NotCalibrated,        /* '<S1013>/Constant' */
    CeFSCR_e_Open100,                  /* '<S1008>/Const187' */
    CeFSCR_e_Open100,                  /* '<S1008>/Const188' */
    CeFSCR_e_Open100,                  /* '<S1008>/Const190' */
    CeFSCR_e_Open100,                  /* '<S1008>/Const193' */
    CeFSCR_e_Open100,                  /* '<S1021>/Constant' */
    CeFSCR_e_Open100                   /* '<S1024>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TAIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAIR
#include "MemMap.h"

VAR(B_TAIR_ac_T, TAIR_VAR_INIT) TAIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAIR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, TAIR_CODE) TAIR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 Switch20;
    float32 Switch21;
    float32 Switch22;
    float32 VeTAIR_T_CEXV_OutTempSens;
    float32 VeTAIR_T_OEXV_RefTemp;
    float32 VeTAIR_p_CEXV_OutPressSens;
    float32 VeTAIR_p_OEXV_RefPress;
    float32 tmpRead;
    uint16 rtb_Switch7;
    uint16 rtb_Switch7_f;
    TeTAIR_e_CPV_Calibration_Sts tmp;
    TeTAIR_e_CPV_Status tmp_0;
    TeTAIR_e_DVC_HTCV_Calibration tmp_5;
    TeTAIR_e_EXV_Calibration_Sts tmp_2;
    TeTAIR_e_EXV_ErrorMsg tmp_3;
    TeTAIR_e_EXV_Status tmp_4;
    TeTAIR_e_HTRBV_ErrLinCom tmp_6;
    TeTAIR_e_HTRBV_ErrPosition tmp_7;
    TeTAIR_e_HTRBV_Err_Ecu tmp_8;
    TeTAIR_e_HTRBV_Err_Motor tmp_9;
    TeTAIR_e_HTRBV_Err_Voltage tmp_a;
    TeTAIR_e_HTRBV_SystemState tmp_b;
    TeTAIR_e_IO_CntrlSt tmp_1;
    boolean Switch21_e;
    boolean Switch22_e;
    boolean Switch23;
    boolean VeTAIR_b_CEXV_OutPressSens_FA;
    boolean VeTAIR_b_CEXV_OutTempSens_FA;
    boolean VeTAIR_b_OEXV_RefPress_FA;
    boolean VeTAIR_b_OEXV_RefTemp_FA;
    boolean tmpRead_0;

    /* Inport: '<Root>/VeTAIB_T_CEXV_OutTempSnsr' */
    (void)Rte_Read_VeTAIB_T_CEXV_OutTempSnsr_Value(&VeTAIR_T_CEXV_OutTempSens);

    /* Inport: '<Root>/VeTAIB_b_CEXV_OutPresSnsr_FA' */
    (void)Rte_Read_VeTAIB_b_CEXV_OutPresSnsr_FA_Value
        (&VeTAIR_b_CEXV_OutPressSens_FA);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TAIR_MedTED'
     */
    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S482>/Switch7' incorporates:
     *  Constant: '<S644>/Calib'
     */
    if (KeTAIR_b_FrWyVlv_ErrMsgs_SD)
    {
        /* Switch: '<S482>/Switch7' incorporates:
         *  Constant: '<S654>/Calib'
         */
        rtb_Switch7 = KeTAIR_y_FrWyVlv_ErrMsgs_D;
    }
    else
    {
        /* Switch: '<S482>/Switch7' incorporates:
         *  Merge: '<Root>/Merge_198'
         *  SignalConversion generated from: '<S206>/VeTAIR_y_FrWyVlv_ErrMsgs_read'
         */
        rtb_Switch7 = Rte_IrvRead_TAIR_MedTED_VeTAIR_y_FrWyVlv_ErrMsgs_write_IRV
            ();
    }

    /* End of Switch: '<S482>/Switch7' */

    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector7' */
    /* RelationalOperator: '<S638>/Greater  Than' incorporates:
     *  Constant: '<S638>/Constant Value'
     *  S-Function (sfix_bitop): '<S638>/Bitwise Logical Operator'
     */
    VeTAIR_b_ErrMsg_SNA_B4LO = ((((sint32)rtb_Switch7) & 128) > 0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector7' */

    /* Switch: '<S482>/Switch8' incorporates:
     *  Constant: '<S643>/Calib'
     */
    if (KeTAIR_b_FrWyVlv_ErrMsgs_FA_SD)
    {
        /* Switch: '<S482>/Switch8' incorporates:
         *  Constant: '<S642>/Calib'
         */
        VeTAIR_b_FrWyVlv_ErrMsgs_FA = KeTAIR_b_FrWyVlv_ErrMsgs_FA_D;
    }
    else
    {
        /* Switch: '<S482>/Switch8' incorporates:
         *  Merge: '<Root>/Merge_199'
         *  SignalConversion generated from: '<S206>/VeTAIR_b_FrWyVlv_ErrMsgsFA_read'
         */
        VeTAIR_b_FrWyVlv_ErrMsgs_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_FrWyVlv_ErrMsgsFA_write_IRV();
    }

    /* End of Switch: '<S482>/Switch8' */

    /* Switch: '<S484>/Switch1' incorporates:
     *  Constant: '<S691>/Calib'
     */
    if (KeTAIR_b_CEXV_OutTempSens_SD)
    {
        /* Switch: '<S484>/Switch1' incorporates:
         *  Constant: '<S682>/Calib'
         */
        VeTAIR_T_CEXV_OutTempSens = KeTAIR_T_CEXV_OutTempSens_D;
    }

    /* End of Switch: '<S484>/Switch1' */

    /* Switch: '<S484>/Switch11' incorporates:
     *  Constant: '<S687>/Calib'
     */
    if (KeTAIR_b_CEXV_OutPressSens_FA_SD)
    {
        /* Switch: '<S484>/Switch11' incorporates:
         *  Constant: '<S686>/Calib'
         */
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_CEXV_OutPressSens_FA_D;
    }

    /* End of Switch: '<S484>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTAIB_b_CEXV_OutTempSnsr_FA' */
    (void)Rte_Read_VeTAIB_b_CEXV_OutTempSnsr_FA_Value
        (&VeTAIR_b_CEXV_OutTempSens_FA);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TAIR_MedTED'
     */
    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch5' incorporates:
     *  Constant: '<S690>/Calib'
     */
    if (KeTAIR_b_CEXV_OutTempSens_FA_SD)
    {
        /* Switch: '<S484>/Switch5' incorporates:
         *  Constant: '<S689>/Calib'
         */
        VeTAIR_b_CEXV_OutTempSens_FA = KeTAIR_b_CEXV_OutTempSens_FA_D;
    }

    /* End of Switch: '<S484>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTAIB_p_CEXV_OutPresSnsr' */
    (void)Rte_Read_VeTAIB_p_CEXV_OutPresSnsr_Value(&VeTAIR_p_CEXV_OutPressSens);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TAIR_MedTED'
     */
    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch9' incorporates:
     *  Constant: '<S688>/Calib'
     */
    if (KeTAIR_b_CEXV_OutPressSens_SD)
    {
        /* Switch: '<S484>/Switch9' incorporates:
         *  Constant: '<S716>/Calib'
         */
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_p_CEXV_OutPressSens_D;
    }

    /* End of Switch: '<S484>/Switch9' */

    /* Switch: '<S484>/Switch21' incorporates:
     *  Constant: '<S704>/Calib'
     *  Constant: '<S712>/Calib'
     *  Switch: '<S484>/Switch14'
     *  Switch: '<S484>/Switch22'
     */
    if (KeTAIR_b_HWIOSrcInfo_Enbl)
    {
        /* Switch: '<S484>/Switch21' */
        Switch21 = VeTAIR_p_CEXV_OutPressSens;

        /* Switch: '<S484>/Switch22' */
        Switch22_e = VeTAIR_b_CEXV_OutPressSens_FA;
    }
    else
    {
        if (KeTAIR_b_EXV_RefPress_SD)
        {
            /* Switch: '<S484>/Switch14' incorporates:
             *  Constant: '<S717>/Calib'
             *  Switch: '<S484>/Switch21'
             */
            Switch21 = KeTAIR_p_EXV_RefPress_D;
        }
        else
        {
            /* Switch: '<S484>/Switch21' incorporates:
             *  Merge: '<Root>/Merge_180'
             *  SignalConversion generated from: '<S206>/VeTAIR_kp_EXV_RefPress_read'
             */
            Switch21 = Rte_IrvRead_TAIR_MedTED_VeTAIR_kp_EXV_RefPress_write_IRV();
        }

        /* Switch: '<S484>/Switch15' incorporates:
         *  Constant: '<S703>/Calib'
         */
        if (KeTAIR_b_EXV_RefPress_FA_SD)
        {
            /* Switch: '<S484>/Switch22' incorporates:
             *  Constant: '<S702>/Calib'
             */
            Switch22_e = KeTAIR_b_EXV_RefPress_FA_D;
        }
        else
        {
            /* Switch: '<S484>/Switch22' incorporates:
             *  Merge: '<Root>/Merge_181'
             *  SignalConversion generated from: '<S206>/VeTAIR_b_EXV_RefPressFA_read'
             */
            Switch22_e =
                Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EXV_RefPressFA_write_IRV();
        }

        /* End of Switch: '<S484>/Switch15' */
    }

    /* End of Switch: '<S484>/Switch21' */

    /* Switch: '<S475>/Switch7' incorporates:
     *  Constant: '<S506>/Calib'
     */
    if (KeTAIR_b_LTR_BypsVlv_ErrMsgs_SD)
    {
        /* Switch: '<S475>/Switch7' incorporates:
         *  Constant: '<S517>/Calib'
         */
        VeTAIR_y_LTR_BypsVlv_ErrMsgs = KeTAIR_y_LTR_BypsVlv_ErrMsgs_D;
    }
    else
    {
        /* Switch: '<S475>/Switch7' incorporates:
         *  Merge: '<Root>/Merge_91'
         *  SignalConversion generated from: '<S206>/VeTAIR_y_LTR_BypsVlv_ErrMsgs_read'
         */
        VeTAIR_y_LTR_BypsVlv_ErrMsgs =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_y_LTR_BypsVlv_ErrMsgs_write_IRV();
    }

    /* End of Switch: '<S475>/Switch7' */

    /* Switch: '<S475>/Switch8' incorporates:
     *  Constant: '<S505>/Calib'
     */
    if (KeTAIR_b_LTR_BypsVlv_ErrMsgs_FA_SD)
    {
        /* Switch: '<S475>/Switch8' incorporates:
         *  Constant: '<S504>/Calib'
         */
        VeTAIR_b_LTR_BypsVlv_ErrMsgs_FA = KeTAIR_b_LTR_BypsVlv_ErrMsgs_FA_D;
    }
    else
    {
        /* Switch: '<S475>/Switch8' incorporates:
         *  Merge: '<Root>/Merge_92'
         *  SignalConversion generated from: '<S206>/VeTAIR_b_LTR_BypsVlv_ErrMsgsFA_read'
         */
        VeTAIR_b_LTR_BypsVlv_ErrMsgs_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_LTR_BypsVlv_ErrMsgsFA_write_IRV();
    }

    /* End of Switch: '<S475>/Switch8' */

    /* Switch: '<S479>/Switch18' incorporates:
     *  Constant: '<S560>/Calib'
     */
    if (KeTAIR_b_HTL_BypsVlv_ErrMsgs_SD)
    {
        /* Switch: '<S479>/Switch18' incorporates:
         *  Constant: '<S571>/Calib'
         */
        VeTAIR_y_HTL_BypsVlv_ErrMsgs = KeTAIR_y_HTL_BypsVlv_ErrMsgs_D;
    }
    else
    {
        /* Switch: '<S479>/Switch18' incorporates:
         *  Merge: '<Root>/Merge_101'
         *  SignalConversion generated from: '<S206>/VeTAIR_y_HTL_BypsVlv_ErrMsgs_read'
         */
        VeTAIR_y_HTL_BypsVlv_ErrMsgs =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_y_HTL_BypsVlv_ErrMsgs_write_IRV();
    }

    /* End of Switch: '<S479>/Switch18' */

    /* Switch: '<S479>/Switch19' incorporates:
     *  Constant: '<S559>/Calib'
     */
    if (KeTAIR_b_HTL_BypsVlv_ErrMsgs_FA_SD)
    {
        /* Switch: '<S479>/Switch19' incorporates:
         *  Constant: '<S558>/Calib'
         */
        VeTAIR_b_HTL_BypsVlv_ErrMsgs_FA = KeTAIR_b_HTL_BypsVlv_ErrMsgs_FA_D;
    }
    else
    {
        /* Switch: '<S479>/Switch19' incorporates:
         *  Merge: '<Root>/Merge_103'
         *  SignalConversion generated from: '<S206>/VeTAIR_b_HTL_BypsVlv_ErrMsgsFA_read'
         */
        VeTAIR_b_HTL_BypsVlv_ErrMsgs_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTL_BypsVlv_ErrMsgsFA_write_IRV();
    }

    /* End of Switch: '<S479>/Switch19' */

    /* Switch: '<S486>/Switch11' incorporates:
     *  Constant: '<S769>/Calib'
     */
    if (KeTAIR_b_OEXV_RefPress_FA_SD)
    {
        /* Switch: '<S486>/Switch11' incorporates:
         *  Constant: '<S768>/Calib'
         */
        VeTAIR_b_OEXV_RefPress_FA = KeTAIR_b_OEXV_RefPress_FA_D;
    }
    else
    {
        /* Switch: '<S486>/Switch11' incorporates:
         *  Merge: '<Root>/Merge_159'
         *  SignalConversion generated from: '<S206>/VeTAIR_b_OEXV_RefPressFA_read'
         */
        VeTAIR_b_OEXV_RefPress_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_OEXV_RefPressFA_write_IRV();
    }

    /* End of Switch: '<S486>/Switch11' */

    /* Switch: '<S486>/Switch13' incorporates:
     *  Constant: '<S773>/Calib'
     */
    if (KeTAIR_b_OEXV_RefTemp_SD)
    {
        /* Switch: '<S486>/Switch13' incorporates:
         *  Constant: '<S748>/Calib'
         */
        VeTAIR_T_OEXV_RefTemp = KeTAIR_T_OEXV_RefTemp_D;
    }
    else
    {
        /* Switch: '<S486>/Switch13' incorporates:
         *  Merge: '<Root>/Merge_161'
         *  SignalConversion generated from: '<S206>/VeTAIR_T_OEXV_RefTemp_read'
         */
        VeTAIR_T_OEXV_RefTemp =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_T_OEXV_RefTemp_write_IRV();
    }

    /* End of Switch: '<S486>/Switch13' */

    /* Switch: '<S486>/Switch17' incorporates:
     *  Constant: '<S772>/Calib'
     */
    if (KeTAIR_b_OEXV_RefTemp_FA_SD)
    {
        /* Switch: '<S486>/Switch17' incorporates:
         *  Constant: '<S771>/Calib'
         */
        VeTAIR_b_OEXV_RefTemp_FA = KeTAIR_b_OEXV_RefTemp_FA_D;
    }
    else
    {
        /* Switch: '<S486>/Switch17' incorporates:
         *  Merge: '<Root>/Merge_162'
         *  SignalConversion generated from: '<S206>/VeTAIR_b_OEXV_RefTempFA_read'
         */
        VeTAIR_b_OEXV_RefTemp_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_OEXV_RefTempFA_write_IRV();
    }

    /* End of Switch: '<S486>/Switch17' */

    /* Switch: '<S486>/Switch9' incorporates:
     *  Constant: '<S770>/Calib'
     */
    if (KeTAIR_b_OEXV_RefPress_SD)
    {
        /* Switch: '<S486>/Switch9' incorporates:
         *  Constant: '<S782>/Calib'
         */
        VeTAIR_p_OEXV_RefPress = KeTAIR_p_OEXV_RefPress_D;
    }
    else
    {
        /* Switch: '<S486>/Switch9' incorporates:
         *  Merge: '<Root>/Merge_175'
         *  SignalConversion generated from: '<S206>/VeTAIR_p_OEXV_RefPress_read'
         */
        VeTAIR_p_OEXV_RefPress =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_p_OEXV_RefPress_write_IRV();
    }

    /* End of Switch: '<S486>/Switch9' */

    /* Switch: '<S486>/Switch20' incorporates:
     *  Constant: '<S750>/Calib'
     *  Inport: '<Root>/VeTAIB_T_OEXV_OutTempSnsr'
     *  Inport: '<Root>/VeTAIB_b_OEXV_OutPresSnsr_FA'
     *  Inport: '<Root>/VeTAIB_b_OEXV_OutTempSnsr_FA'
     *  Inport: '<Root>/VeTAIB_p_OEXV_OutPresSnsr'
     *  Switch: '<S486>/Switch21'
     *  Switch: '<S486>/Switch22'
     *  Switch: '<S486>/Switch23'
     */
    if (KeTAIR_b_HWIOSrcInfo_Enbl)
    {
        (void)Rte_Read_VeTAIB_p_OEXV_OutPresSnsr_Value(&Switch20);

        /* Switch: '<S486>/Switch14' incorporates:
         *  Constant: '<S761>/Calib'
         *  Inport: '<Root>/VeTAIB_p_OEXV_OutPresSnsr'
         */
        if (KeTAIR_b_OEXV_OutPressSens_SD)
        {
            /* Switch: '<S486>/Switch20' incorporates:
             *  Constant: '<S781>/Calib'
             */
            Switch20 = KeTAIR_p_OEXV_OutPressSens_D;
        }

        /* End of Switch: '<S486>/Switch14' */
        (void)Rte_Read_VeTAIB_b_OEXV_OutPresSnsr_FA_Value(&Switch21_e);

        /* Switch: '<S486>/Switch15' incorporates:
         *  Constant: '<S760>/Calib'
         *  Inport: '<Root>/VeTAIB_b_OEXV_OutPresSnsr_FA'
         */
        if (KeTAIR_b_OEXV_OutPressSens_FA_SD)
        {
            /* Switch: '<S486>/Switch21' incorporates:
             *  Constant: '<S759>/Calib'
             */
            Switch21_e = KeTAIR_b_OEXV_OutPressSens_FA_D;
        }

        /* End of Switch: '<S486>/Switch15' */
        (void)Rte_Read_VeTAIB_T_OEXV_OutTempSnsr_Value(&Switch22);

        /* Switch: '<S486>/Switch18' incorporates:
         *  Constant: '<S764>/Calib'
         *  Inport: '<Root>/VeTAIB_T_OEXV_OutTempSnsr'
         */
        if (KeTAIR_b_OEXV_OutTempSens_SD)
        {
            /* Switch: '<S486>/Switch22' incorporates:
             *  Constant: '<S747>/Calib'
             */
            Switch22 = KeTAIR_T_OEXV_OutTempSens_D;
        }

        /* End of Switch: '<S486>/Switch18' */
        (void)Rte_Read_VeTAIB_b_OEXV_OutTempSnsr_FA_Value(&Switch23);

        /* Switch: '<S486>/Switch19' incorporates:
         *  Constant: '<S763>/Calib'
         *  Inport: '<Root>/VeTAIB_b_OEXV_OutTempSnsr_FA'
         */
        if (KeTAIR_b_OEXV_OutTempSens_FA_SD)
        {
            /* Switch: '<S486>/Switch23' incorporates:
             *  Constant: '<S762>/Calib'
             */
            Switch23 = KeTAIR_b_OEXV_OutTempSens_FA_D;
        }

        /* End of Switch: '<S486>/Switch19' */
    }
    else
    {
        /* Switch: '<S486>/Switch20' */
        Switch20 = VeTAIR_p_OEXV_RefPress;

        /* Switch: '<S486>/Switch21' */
        Switch21_e = VeTAIR_b_OEXV_RefPress_FA;

        /* Switch: '<S486>/Switch22' */
        Switch22 = VeTAIR_T_OEXV_RefTemp;

        /* Switch: '<S486>/Switch23' */
        Switch23 = VeTAIR_b_OEXV_RefTemp_FA;
    }

    /* End of Switch: '<S486>/Switch20' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTAIB_b_OEXV_InTempSnsr_FA' */
    (void)Rte_Read_VeTAIB_b_OEXV_InTempSnsr_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIB_T_OEXV_InTempSnsr' */
    (void)Rte_Read_VeTAIB_T_OEXV_InTempSnsr_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TAIR_MedTED'
     */
    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S477>/Switch7' incorporates:
     *  Constant: '<S531>/Calib'
     */
    if (KeTAIR_b_CPV2_ErrMsgs_SD)
    {
        /* Switch: '<S477>/Switch7' incorporates:
         *  Constant: '<S541>/Calib'
         */
        rtb_Switch7_f = KeTAIR_y_CPV2_ErrMsgs_D;
    }
    else
    {
        /* Switch: '<S477>/Switch7' incorporates:
         *  Merge: '<Root>/Merge_148'
         *  SignalConversion generated from: '<S206>/CPV2_ErrMsgs_AM'
         */
        rtb_Switch7_f = Rte_IrvRead_TAIR_MedTED_VeTAIR_y_CPV2_ErrMsgs_write_IRV();
    }

    /* End of Switch: '<S477>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_p_CEXV_OutPressSens' incorporates:
     *  SignalConversion generated from: '<S206>/CEXV_OutPressSens_AftDial'
     */
    (void)Rte_Write_VeTAIR_p_CEXV_OutPressSens_Value(VeTAIR_p_CEXV_OutPressSens);

    /* Outport: '<Root>/VeTAIR_b_CEXV_OutPressSens_FA' incorporates:
     *  SignalConversion generated from: '<S206>/CEXV_OutPressSens_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_CEXV_OutPressSens_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* Outport: '<Root>/VeTAIR_T_CEXV_OutTempSens' incorporates:
     *  SignalConversion generated from: '<S206>/CEXV_OutTempSens_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_CEXV_OutTempSens_Value(VeTAIR_T_CEXV_OutTempSens);

    /* Outport: '<Root>/VeTAIR_b_CEXV_OutTempSens_FA' incorporates:
     *  SignalConversion generated from: '<S206>/CEXV_OutTempSens_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_CEXV_OutTempSens_FA_Value
        (VeTAIR_b_CEXV_OutTempSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector6' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_BlckPnt' incorporates:
     *  Constant: '<S524>/Constant Value'
     *  RelationalOperator: '<S524>/Greater  Than'
     *  S-Function (sfix_bitop): '<S524>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_Blck'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_BlckPnt_Value((((sint32)rtb_Switch7_f) & 64) >
        0);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector6' */

    /* Switch: '<S477>/Switch2' incorporates:
     *  Constant: '<S528>/Calib'
     *  Constant: '<S539>/Calib'
     *  Merge: '<Root>/Merge_153'
     *  SignalConversion generated from: '<S206>/CPV2_CalSts_AM'
     */
    if (KeTAIR_b_CPV2_CalSts_SD)
    {
        tmp = KeTAIR_e_CPV2_CalSts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_CPV2_CalSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_CPV2_CalSts' incorporates:
     *  SignalConversion generated from: '<S206>/CPV2_CalSts_AD'
     *  Switch: '<S477>/Switch2'
     */
    (void)Rte_Write_VeTAIR_e_CPV2_CalSts_Value(tmp);

    /* Switch: '<S477>/Switch5' incorporates:
     *  Constant: '<S532>/Calib'
     *  Constant: '<S540>/Calib'
     *  Merge: '<Root>/Merge_151'
     *  SignalConversion generated from: '<S206>/CPV2_ErrSts_AM'
     */
    if (KeTAIR_b_CPV2_ErrSts_SD)
    {
        tmp_0 = KeTAIR_e_CPV2_ErrSts_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_CPV2_ErrSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_CPV2_ErrSts' incorporates:
     *  SignalConversion generated from: '<S206>/CPV2_ErrSts_AD'
     *  Switch: '<S477>/Switch5'
     */
    (void)Rte_Write_VeTAIR_e_CPV2_ErrSts_Value(tmp_0);

    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector5' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_MechBrk' incorporates:
     *  Constant: '<S523>/Constant Value'
     *  RelationalOperator: '<S523>/Greater  Than'
     *  S-Function (sfix_bitop): '<S523>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_MB'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_MechBrk_Value((((sint32)rtb_Switch7_f) & 32) >
        0);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector5' */

    /* Switch: '<S477>/Switch13' incorporates:
     *  Constant: '<S527>/Calib'
     *  Constant: '<S533>/Calib'
     *  Merge: '<Root>/Merge_149'
     *  SignalConversion generated from: '<S206>/CPV2_MtrVltg_AM'
     */
    if (KeTAIR_b_CPV2_MtrVltg_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_CPV2_MtrVltg_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_CPV2_MtrVltg_write_IRV();
    }

    /* End of Switch: '<S477>/Switch13' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_CPV2_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S206>/CPV2_MtrVltg_AD'
     */
    (void)Rte_Write_VeTAIR_U_CPV2_MtrVltg_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector4' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_OvrCrnt' incorporates:
     *  Constant: '<S522>/Constant Value'
     *  RelationalOperator: '<S522>/Greater  Than'
     *  S-Function (sfix_bitop): '<S522>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_OC'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_OvrCrnt_Value((((sint32)rtb_Switch7_f) & 16) >
        0);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector4' */

    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector3' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_OpnLd' incorporates:
     *  Constant: '<S521>/Constant Value'
     *  RelationalOperator: '<S521>/Greater  Than'
     *  S-Function (sfix_bitop): '<S521>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_OL'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_OpnLd_Value((((sint32)rtb_Switch7_f) & 8) > 0);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector3' */

    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_OvrVltg' incorporates:
     *  Constant: '<S518>/Constant Value'
     *  RelationalOperator: '<S518>/Greater  Than'
     *  S-Function (sfix_bitop): '<S518>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_OV'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_OvrVltg_Value((((sint32)rtb_Switch7_f) & 1) >
        0);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector' */

    /* Switch: '<S477>/Switch' incorporates:
     *  Constant: '<S526>/Calib'
     *  Constant: '<S536>/Calib'
     *  Merge: '<Root>/Merge_146'
     *  SignalConversion generated from: '<S206>/CPV2_PstnAct_AM'
     */
    if (KeTAIR_b_CPV2_PstnAct_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_CPV2_PstnAct_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_CPV2_ActlPstn_write_IRV();
    }

    /* End of Switch: '<S477>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_CPV2_PstnAct' incorporates:
     *  SignalConversion generated from: '<S206>/CPV2_PstnAct_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_CPV2_PstnAct_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S477>/Switch1' incorporates:
     *  Constant: '<S534>/Calib'
     *  Constant: '<S535>/Calib'
     *  Merge: '<Root>/Merge_147'
     *  SignalConversion generated from: '<S206>/CPV2_PstnAct_FA_AM'
     */
    if (KeTAIR_b_CPV2_PstnAct_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_CPV2_PstnAct_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_CPV2_ActlPstnFA_write_IRV();
    }

    /* End of Switch: '<S477>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_CPV2_PstnAct_FA' incorporates:
     *  SignalConversion generated from: '<S206>/CPV2_PstnAct_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_PstnAct_FA_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S477>/Switch4' incorporates:
     *  Constant: '<S537>/Calib'
     *  Constant: '<S538>/Calib'
     *  Merge: '<Root>/Merge_152'
     *  SignalConversion generated from: '<S206>/CPV2_RsErr_AM'
     */
    if (KeTAIR_b_CPV2_RsErr_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_CPV2_RsErr_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_CPV2_RsErr_write_IRV();
    }

    /* End of Switch: '<S477>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_CPV2_RsErr' incorporates:
     *  SignalConversion generated from: '<S206>/CPV2_RsErr_AD'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_RsErr_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S477>/Switch8' incorporates:
     *  Constant: '<S529>/Calib'
     *  Constant: '<S530>/Calib'
     *  Merge: '<Root>/Merge_150'
     *  SignalConversion generated from: '<S206>/CPV2_ErrMsgs_FA_AM'
     */
    if (KeTAIR_b_CPV2_ErrMsgs_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_CPV2_ErrMsgs_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_CPV2_ErrMsgsFA_write_IRV();
    }

    /* End of Switch: '<S477>/Switch8' */

    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector7' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_Err_SNA' incorporates:
     *  Constant: '<S525>/Constant Value'
     *  Logic: '<S476>/Logical1'
     *  RelationalOperator: '<S525>/Greater  Than'
     *  S-Function (sfix_bitop): '<S525>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_SNA'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_Err_SNA_Value(((((sint32)rtb_Switch7_f) & 128)
        > 0) || VeTAIR_b_CEXV_OutPressSens_FA);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector7' */

    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector2' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_ThrmlWrng' incorporates:
     *  Constant: '<S520>/Constant Value'
     *  RelationalOperator: '<S520>/Greater  Than'
     *  S-Function (sfix_bitop): '<S520>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_TW'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_ThrmlWrng_Value((((sint32)rtb_Switch7_f) & 4) >
        0);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector2' */

    /* Outputs for Atomic SubSystem: '<S476>/Bit Selector1' */
    /* Outport: '<Root>/VeTAIR_b_CPV2_UndrVltg' incorporates:
     *  Constant: '<S519>/Constant Value'
     *  RelationalOperator: '<S519>/Greater  Than'
     *  S-Function (sfix_bitop): '<S519>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/CPV2_UV'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_UndrVltg_Value((((sint32)rtb_Switch7_f) & 2) >
        0);

    /* End of Outputs for SubSystem: '<S476>/Bit Selector1' */

    /* Switch: '<S572>/Switch1' incorporates:
     *  Constant: '<S583>/Calib'
     *  Constant: '<S584>/Calib'
     *  Merge: '<Root>/Merge_107'
     *  SignalConversion generated from: '<S206>/VeTAIF_Pct_CPV_VlvCmd_read'
     */
    if (KeTAIR_b_CPV_Cmd_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_CPV_Cmd_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_Pct_CPV_VlvCmd_write_IRV();
    }

    /* End of Switch: '<S572>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_CPV_Cmd' incorporates:
     *  SignalConversion generated from: '<S206>/CPV_Cmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_CPV_Cmd_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S572>/Switch' incorporates:
     *  Constant: '<S585>/Calib'
     *  Constant: '<S586>/Calib'
     *  Merge: '<Root>/Merge_108'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_CPV_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_CPV_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_CPV_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TAIR_MedTED_VeTAIF_e_CPV_VlvCmd_IO_CntrlSt_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTAIR_e_CPV_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S206>/CPV_IO_CntrlSt_AD'
     *  Switch: '<S572>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_CPV_IO_Cnt_Value(tmp_1);

    /* Switch: '<S573>/Switch1' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S589>/Calib'
     *  Merge: '<Root>/Merge_109'
     *  SignalConversion generated from: '<S206>/VeTAIF_Pct_HT_CabVlvCmd_read'
     */
    if (KeTAIR_b_CabVlvCmd_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_CabVlvCmd_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_Pct_HT_CabVlvCmd_write_IRV();
    }

    /* End of Switch: '<S573>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_HT_CabVlvCmd' incorporates:
     *  SignalConversion generated from: '<S206>/CabVlvCmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_HT_CabVlvCmd_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S573>/Switch' incorporates:
     *  Constant: '<S588>/Calib'
     *  Constant: '<S590>/Calib'
     *  Merge: '<Root>/Merge_110'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_HT_CabVlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_CabVlvCmd_IO_Cnt_SD)
    {
        tmp_1 = KeTAIR_e_CabVlv_IO_Cnt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_HT_CabVlvCmd_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S206>/CabVlv_IO_CntrlSt_AD'
     *  Switch: '<S573>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Value(tmp_1);

    /* Switch: '<S574>/Switch' incorporates:
     *  Constant: '<S592>/Calib'
     *  Constant: '<S594>/Calib'
     *  Merge: '<Root>/Merge_113'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_ChlrRfgtShtoff_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_ChlrfgtVlv_Cmd_IO_Cnt_SD)
    {
        tmp_1 = KeTAIR_e_ChlrRfgtVlv_IO_Cnt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TAIR_MedTED_VeTAIF_e_ChlrRfgtShtoff_VlvCmd_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S206>/ChlRfgVlv_IO_CntrlSt_AD'
     *  Switch: '<S574>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Value(tmp_1);

    /* Switch: '<S574>/Switch1' incorporates:
     *  Constant: '<S591>/Calib'
     *  Constant: '<S593>/Calib'
     *  Merge: '<Root>/Merge_112'
     *  SignalConversion generated from: '<S206>/VeTAIF_b_ChlrRfgtShtoff_VlvCmd_read'
     */
    if (KeTAIR_b_ChlrfgtVlv_Cmd_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_ChlrRfgtVlv_Cmd_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_b_ChlrRfgtShtoff_VlvCmd_IRV();
    }

    /* End of Switch: '<S574>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_Chlr_SO_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S206>/ChlrRfg_VlvCmd_AD'
     */
    (void)Rte_Write_VeTAIR_b_Chlr_SO_VlvCmd_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S575>/Switch20' incorporates:
     *  Constant: '<S596>/Calib'
     *  Constant: '<S597>/Calib'
     *  Merge: '<Root>/Merge_114'
     *  SignalConversion generated from: '<S206>/VeTAIF_b_DVC_EEXV_Calibration_Start_read'
     */
    if (KeTAIR_b_DVC_EEXV_Calibration_Start_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_DVC_EEXV_Calibration_Start_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_b_DVC_EEXV_Calibration_Start_IRV();
    }

    /* End of Switch: '<S575>/Switch20' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_DVC_EEXV_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S206>/DVC_EEXV_Calibration_Start_AD'
     */
    (void)Rte_Write_VeTAIR_b_DVC_EEXV_Calibration_Start_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch20' incorporates:
     *  Constant: '<S692>/Calib'
     *  Constant: '<S693>/Calib'
     *  Merge: '<Root>/Merge_117'
     *  SignalConversion generated from: '<S206>/VeTAIF_b_DVC_EXV_Calibration_Start_read'
     */
    if (KeTAIR_b_DVC_EXV_Calibration_Start_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_DVC_EXV_Calibration_Start_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_b_DVC_EXV_Calibration_Start_IRV();
    }

    /* End of Switch: '<S484>/Switch20' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_DVC_EXV_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S206>/DVC_EXV_Calibration_Start_AD'
     */
    (void)Rte_Write_VeTAIR_b_DVC_EXV_Calibration_Start_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S579>/Switch1' incorporates:
     *  Constant: '<S613>/Calib'
     *  Constant: '<S615>/Calib'
     *  Merge: '<Root>/Merge_124'
     *  SignalConversion generated from: '<S206>/VeTAIF_b_HT_Shtoff_VlvCmd_read'
     */
    if (KeTAIR_b_HT_Shtoff_VlvCmd_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HT_Shtoff_VlvCmd_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_b_HT_Shtoff_VlvCmd_write_IRV();
    }

    /* End of Switch: '<S579>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HT_Shtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S206>/DVC_HT_Shtoff_VlvCmd_AD'
     */
    (void)Rte_Write_VeTAIR_b_HT_Shtoff_VlvCmd_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S582>/Switch20' incorporates:
     *  Constant: '<S626>/Calib'
     *  Constant: '<S627>/Calib'
     *  Merge: '<Root>/Merge_130'
     *  SignalConversion generated from: '<S206>/VeTAIF_b_DVC_OEXV_Calibration_Start_read'
     */
    if (KeTAIR_b_DVC_OEXV_Calibration_Start_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_DVC_OEXV_Calibration_Start_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_b_DVC_OEXV_Calibration_Start_IRV();
    }

    /* End of Switch: '<S582>/Switch20' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_DVC_OEXV_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S206>/DVC_OEXV_Calibration_Start_AD'
     */
    (void)Rte_Write_VeTAIR_b_DVC_OEXV_Calibration_Start_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch16' incorporates:
     *  Constant: '<S719>/Calib'
     *  Constant: '<S722>/Calib'
     *  Merge: '<Root>/Merge_137'
     *  SignalConversion generated from: '<S206>/VeTAIR_T_EEXV_BoardTemp_read'
     */
    if (KeTAIR_b_EEXV_BoardTemp_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_T_EEXV_BoardTemp_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_T_EEXV_BoardTemp_write_IRV();
    }

    /* End of Switch: '<S485>/Switch16' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_EEXV_BoardTemp' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_BoardTemp_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_EEXV_BoardTemp_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch6' incorporates:
     *  Constant: '<S723>/Calib'
     *  Constant: '<S724>/Calib'
     *  Merge: '<Root>/Merge_143'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EEXV_CalRq_read'
     */
    if (KeTAIR_b_EEXV_CalRq_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EEXV_CalRq_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EEXV_CalRq_write_IRV();
    }

    /* End of Switch: '<S485>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EEXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_CalRq_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_CalRq_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch4' incorporates:
     *  Constant: '<S725>/Calib'
     *  Constant: '<S740>/Calib'
     *  Merge: '<Root>/Merge_142'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_EEXV_CalStat_read'
     */
    if (KeTAIR_b_EEXV_CalStat_SD)
    {
        tmp_2 = KeTAIR_e_EEXV_CalStat_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_EEXV_CalStat_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_EEXV_CalStat' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_CalStat_AftDial'
     *  Switch: '<S485>/Switch4'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_CalStat_Value(tmp_2);

    /* Switch: '<S575>/Switch1' incorporates:
     *  Constant: '<S595>/Calib'
     *  Constant: '<S598>/Calib'
     *  Merge: '<Root>/Merge_116'
     *  SignalConversion generated from: '<S206>/VeTAIF_Pct_EEXV_VlvCmd_read'
     */
    if (KeTAIR_b_EEXV_Cmd_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_EEXV_Cmd_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_Pct_EEXV_VlvCmd_write_IRV();
    }

    /* End of Switch: '<S575>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_EEXV_Cmd' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_Cmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_EEXV_Cmd_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch10' incorporates:
     *  Constant: '<S726>/Calib'
     *  Constant: '<S741>/Calib'
     *  Merge: '<Root>/Merge_133'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_EEXV_Err_read'
     */
    if (KeTAIR_b_EEXV_Err_SD)
    {
        tmp_3 = KeTAIR_e_EEXV_Err_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_EEXV_Err_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_EEXV_Err' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_Err_AftDial'
     *  Switch: '<S485>/Switch10'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_Err_Value(tmp_3);

    /* Switch: '<S575>/Switch' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Merge: '<Root>/Merge_115'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_EEXV_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_EEXV_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_EEXV_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_EEXV_VlvCmd_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_EEXV_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_IO_CntrlSt_AD'
     *  Switch: '<S575>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_IO_CntrlSt_Value(tmp_1);

    /* Switch: '<S485>/Switch2' incorporates:
     *  Constant: '<S718>/Calib'
     *  Constant: '<S729>/Calib'
     *  Merge: '<Root>/Merge_139'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_EEXV_PosAct_read'
     */
    if (KeTAIR_b_EEXV_PosAct_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_EEXV_PosAct_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_EEXV_PosAct_write_IRV();
    }

    /* End of Switch: '<S485>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_EEXV_PosAct' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_PosAct_AftDial'
     */
    (void)Rte_Write_VeTAIR_Pct_EEXV_PosAct_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch3' incorporates:
     *  Constant: '<S727>/Calib'
     *  Constant: '<S728>/Calib'
     *  Merge: '<Root>/Merge_141'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EEXV_PosActFA_read'
     */
    if (KeTAIR_b_EEXV_PosAct_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EEXV_PosAct_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EEXV_PosActFA_write_IRV();
    }

    /* End of Switch: '<S485>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EEXV_PosAct_FA' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_PosAct_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_PosAct_FA_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch14' incorporates:
     *  Constant: '<S732>/Calib'
     *  Constant: '<S743>/Calib'
     *  Merge: '<Root>/Merge_135'
     *  SignalConversion generated from: '<S206>/VeTAIR_p_EEXV_RefPress_read'
     */
    if (KeTAIR_b_EEXV_RefPress_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_p_EEXV_RefPress_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_p_EEXV_RefPress_write_IRV();
    }

    /* End of Switch: '<S485>/Switch14' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_p_EEXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_RefPress_AftDial'
     */
    (void)Rte_Write_VeTAIR_p_EEXV_RefPress_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch15' incorporates:
     *  Constant: '<S730>/Calib'
     *  Constant: '<S731>/Calib'
     *  Merge: '<Root>/Merge_136'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EEXV_RefPressFA_read'
     */
    if (KeTAIR_b_EEXV_RefPress_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EEXV_RefPress_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EEXV_RefPressFA_write_IRV();
    }

    /* End of Switch: '<S485>/Switch15' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EEXV_RefPress_FA' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_RefPress_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_RefPress_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch18' incorporates:
     *  Constant: '<S720>/Calib'
     *  Constant: '<S735>/Calib'
     *  Merge: '<Root>/Merge_138'
     *  SignalConversion generated from: '<S206>/VeTAIR_T_EEXV_RefTemp_read'
     */
    if (KeTAIR_b_EEXV_RefTemp_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_T_EEXV_RefTemp_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_T_EEXV_RefTemp_write_IRV();
    }

    /* End of Switch: '<S485>/Switch18' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_EEXV_RefTemp' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_RefTemp_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_EEXV_RefTemp_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch19' incorporates:
     *  Constant: '<S733>/Calib'
     *  Constant: '<S734>/Calib'
     *  Merge: '<Root>/Merge_140'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EEXV_RefTempFA_read'
     */
    if (KeTAIR_b_EEXV_RefTemp_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EEXV_RefTemp_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EEXV_RefTempFA_write_IRV();
    }

    /* End of Switch: '<S485>/Switch19' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EEXV_RefTemp_FA' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_RefTemp_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_RefTemp_FA_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch7' incorporates:
     *  Constant: '<S736>/Calib'
     *  Constant: '<S737>/Calib'
     *  Merge: '<Root>/Merge_144'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EEXV_RspErr_read'
     */
    if (KeTAIR_b_EEXV_RspErr_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EEXV_RspErr_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EEXV_RspErr_write_IRV();
    }

    /* End of Switch: '<S485>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EEXV_RspErr' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_RspErr_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_RspErr_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S485>/Switch8' incorporates:
     *  Constant: '<S738>/Calib'
     *  Constant: '<S742>/Calib'
     *  Merge: '<Root>/Merge_145'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_EEXV_Sts_read'
     */
    if (KeTAIR_b_EEXV_Sts_SD)
    {
        tmp_4 = KeTAIR_e_EEXV_Sts_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_EEXV_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_EEXV_Sts' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_Sts_AftDial'
     *  Switch: '<S485>/Switch8'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_Sts_Value(tmp_4);

    /* Switch: '<S485>/Switch12' incorporates:
     *  Constant: '<S721>/Calib'
     *  Constant: '<S739>/Calib'
     *  Merge: '<Root>/Merge_134'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_EEXV_SupplyVolt_read'
     */
    if (KeTAIR_b_EEXV_SupplyVolt_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_EEXV_SupplyVolt_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_EEXV_SupplyVolt_write_IRV();
    }

    /* End of Switch: '<S485>/Switch12' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_EEXV_SupplyVolt' incorporates:
     *  SignalConversion generated from: '<S206>/EEXV_SupplyVolt_AftDial'
     */
    (void)Rte_Write_VeTAIR_U_EEXV_SupplyVolt_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch16' incorporates:
     *  Constant: '<S683>/Calib'
     *  Constant: '<S694>/Calib'
     *  Merge: '<Root>/Merge_182'
     *  SignalConversion generated from: '<S206>/VeTAIR_T_EXV_BoardTemp_read'
     */
    if (KeTAIR_b_EXV_BoardTemp_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_T_EXV_BoardTemp_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_T_EXV_BoardTemp_write_IRV();
    }

    /* End of Switch: '<S484>/Switch16' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_EXV_BoardTemp' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_BoardTemp_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_EXV_BoardTemp_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch6' incorporates:
     *  Constant: '<S695>/Calib'
     *  Constant: '<S696>/Calib'
     *  Merge: '<Root>/Merge_189'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EXV_CalRq_read'
     */
    if (KeTAIR_b_EXV_CalRq_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EXV_CalRq_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EXV_CalRq_write_IRV();
    }

    /* End of Switch: '<S484>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_CalRq_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EXV_CalRq_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch4' incorporates:
     *  Constant: '<S697>/Calib'
     *  Constant: '<S713>/Calib'
     *  Merge: '<Root>/Merge_187'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_EXV_CalStat_read'
     */
    if (KeTAIR_b_EXV_CalStat_SD)
    {
        tmp_2 = KeTAIR_e_EXV_CalStat_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_EXV_CalStat_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_EXV_CalStat' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_CalStat_AftDial'
     *  Switch: '<S484>/Switch4'
     */
    (void)Rte_Write_VeTAIR_e_EXV_CalStat_Value(tmp_2);

    /* Switch: '<S576>/Switch1' incorporates:
     *  Constant: '<S601>/Calib'
     *  Constant: '<S602>/Calib'
     *  Merge: '<Root>/Merge_119'
     *  SignalConversion generated from: '<S206>/VeTAIF_Pct_EXV_VlvCmd_read'
     */
    if (KeTAIR_b_EXV_Cmd_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_EXV_Cmd_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_Pct_EXV_VlvCmd_write_IRV();
    }

    /* End of Switch: '<S576>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_EXV_Cmd' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_Cmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_EXV_Cmd_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch10' incorporates:
     *  Constant: '<S698>/Calib'
     *  Constant: '<S714>/Calib'
     *  Merge: '<Root>/Merge_177'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_EXV_Err_read'
     */
    if (KeTAIR_b_EXV_Err_SD)
    {
        tmp_3 = KeTAIR_e_EXV_Err_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_EXV_Err_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_EXV_Err' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_Err_AftDial'
     *  Switch: '<S484>/Switch10'
     */
    (void)Rte_Write_VeTAIR_e_EXV_Err_Value(tmp_3);

    /* Switch: '<S576>/Switch' incorporates:
     *  Constant: '<S603>/Calib'
     *  Constant: '<S604>/Calib'
     *  Merge: '<Root>/Merge_118'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_EXV_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_EXV_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_EXV_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TAIR_MedTED_VeTAIF_e_EXV_VlvCmd_IO_CntrlSt_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTAIR_e_EXV_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_IO_CntrlSt_AD'
     *  Switch: '<S576>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_EXV_IO_CntrlSt_Value(tmp_1);

    /* Switch: '<S484>/Switch2' incorporates:
     *  Constant: '<S681>/Calib'
     *  Constant: '<S701>/Calib'
     *  Merge: '<Root>/Merge_184'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_EXV_PosAct_read'
     */
    if (KeTAIR_b_EXV_PosAct_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_EXV_PosAct_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_EXV_PosAct_write_IRV();
    }

    /* End of Switch: '<S484>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_EXV_PosAct' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_PosAct_AftDial'
     */
    (void)Rte_Write_VeTAIR_Pct_EXV_PosAct_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch3' incorporates:
     *  Constant: '<S699>/Calib'
     *  Constant: '<S700>/Calib'
     *  Merge: '<Root>/Merge_186'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EXV_PosActFA_read'
     */
    if (KeTAIR_b_EXV_PosAct_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EXV_PosAct_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EXV_PosActFA_write_IRV();
    }

    /* End of Switch: '<S484>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EXV_PosAct_FA' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_PosAct_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EXV_PosAct_FA_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* Outport: '<Root>/VeTAIR_p_EXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_RefPress_AftDial'
     */
    (void)Rte_Write_VeTAIR_p_EXV_RefPress_Value(Switch21);

    /* Outport: '<Root>/VeTAIR_b_EXV_RefPress_FA' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_RefPress_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EXV_RefPress_FA_Value(Switch22_e);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch13' incorporates:
     *  Constant: '<S712>/Calib'
     */
    if (!KeTAIR_b_HWIOSrcInfo_Enbl)
    {
        /* Switch: '<S484>/Switch18' incorporates:
         *  Constant: '<S684>/Calib'
         *  Constant: '<S707>/Calib'
         *  Merge: '<Root>/Merge_183'
         *  SignalConversion generated from: '<S206>/VeTAIR_T_EXV_RefTemp_read'
         */
        if (KeTAIR_b_EXV_RefTemp_SD)
        {
            VeTAIR_T_CEXV_OutTempSens = KeTAIR_T_EXV_RefTemp_D;
        }
        else
        {
            VeTAIR_T_CEXV_OutTempSens =
                Rte_IrvRead_TAIR_MedTED_VeTAIR_T_EXV_RefTemp_write_IRV();
        }

        /* End of Switch: '<S484>/Switch18' */
    }

    /* End of Switch: '<S484>/Switch13' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_EXV_RefTemp' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_RefTemp_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_EXV_RefTemp_Value(VeTAIR_T_CEXV_OutTempSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch17' incorporates:
     *  Constant: '<S712>/Calib'
     */
    if (!KeTAIR_b_HWIOSrcInfo_Enbl)
    {
        /* Switch: '<S484>/Switch19' incorporates:
         *  Constant: '<S705>/Calib'
         *  Constant: '<S706>/Calib'
         *  Merge: '<Root>/Merge_185'
         *  SignalConversion generated from: '<S206>/VeTAIR_b_EXV_RefTempFA_read'
         */
        if (KeTAIR_b_EXV_RefTemp_FA_SD)
        {
            VeTAIR_b_CEXV_OutTempSens_FA = KeTAIR_b_EXV_RefTemp_FA_D;
        }
        else
        {
            VeTAIR_b_CEXV_OutTempSens_FA =
                Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EXV_RefTempFA_write_IRV();
        }

        /* End of Switch: '<S484>/Switch19' */
    }

    /* End of Switch: '<S484>/Switch17' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EXV_RefTemp_FA' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_RefTemp_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EXV_RefTemp_FA_Value(VeTAIR_b_CEXV_OutTempSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch7' incorporates:
     *  Constant: '<S708>/Calib'
     *  Constant: '<S709>/Calib'
     *  Merge: '<Root>/Merge_190'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_EXV_RspErr_read'
     */
    if (KeTAIR_b_EXV_RspErr_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_EXV_RspErr_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_EXV_RspErr_write_IRV();
    }

    /* End of Switch: '<S484>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_EXV_RspErr' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_RspErr_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_EXV_RspErr_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S484>/Switch8' incorporates:
     *  Constant: '<S710>/Calib'
     *  Constant: '<S715>/Calib'
     *  Merge: '<Root>/Merge_191'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_EXV_Sts_read'
     */
    if (KeTAIR_b_EXV_Sts_SD)
    {
        tmp_4 = KeTAIR_e_EXV_Sts_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_EXV_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_EXV_Sts' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_Sts_AftDial'
     *  Switch: '<S484>/Switch8'
     */
    (void)Rte_Write_VeTAIR_e_EXV_Sts_Value(tmp_4);

    /* Switch: '<S484>/Switch12' incorporates:
     *  Constant: '<S685>/Calib'
     *  Constant: '<S711>/Calib'
     *  Merge: '<Root>/Merge_179'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_EXV_SupplyVolt_read'
     */
    if (KeTAIR_b_EXV_SupplyVolt_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_EXV_SupplyVolt_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_EXV_SupplyVolt_write_IRV();
    }

    /* End of Switch: '<S484>/Switch12' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_EXV_SupplyVolt' incorporates:
     *  SignalConversion generated from: '<S206>/EXV_SupplyVolt_AftDial'
     */
    (void)Rte_Write_VeTAIR_U_EXV_SupplyVolt_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector6' */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_BlckPnt' incorporates:
     *  Constant: '<S637>/Constant Value'
     *  RelationalOperator: '<S637>/Greater  Than'
     *  S-Function (sfix_bitop): '<S637>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/FrWyVlv_Blck'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_BlckPnt_Value((((sint32)rtb_Switch7) & 64) >
        0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector6' */

    /* Switch: '<S482>/Switch2' incorporates:
     *  Constant: '<S641>/Calib'
     *  Constant: '<S652>/Calib'
     *  Merge: '<Root>/Merge_196'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_FrWyVlv_CalSts_read'
     */
    if (KeTAIR_b_FrWyVlv_CalSts_SD)
    {
        tmp = KeTAIR_e_FrWyVlv_CalSts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_FrWyVlv_CalSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_FrWyVlv_CalSts' incorporates:
     *  SignalConversion generated from: '<S206>/FrWyVlv_CalSts_AD'
     *  Switch: '<S482>/Switch2'
     */
    (void)Rte_Write_VeTAIR_e_FrWyVlv_CalSts_Value(tmp);

    /* Switch: '<S482>/Switch5' incorporates:
     *  Constant: '<S645>/Calib'
     *  Constant: '<S653>/Calib'
     *  Merge: '<Root>/Merge_197'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_FrWyVlv_ErrSts_read'
     */
    if (KeTAIR_b_FrWyVlv_ErrSts_SD)
    {
        tmp_0 = KeTAIR_e_FrWyVlv_ErrSts_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_FrWyVlv_ErrSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_FrWyVlv_ErrSts' incorporates:
     *  SignalConversion generated from: '<S206>/FrWyVlv_ErrSts_AD'
     *  Switch: '<S482>/Switch5'
     */
    (void)Rte_Write_VeTAIR_e_FrWyVlv_ErrSts_Value(tmp_0);

    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector5' */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_MechBrk' incorporates:
     *  Constant: '<S636>/Constant Value'
     *  RelationalOperator: '<S636>/Greater  Than'
     *  S-Function (sfix_bitop): '<S636>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/FrWyVlv_MB'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_MechBrk_Value((((sint32)rtb_Switch7) & 32) >
        0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector5' */

    /* Switch: '<S482>/Switch13' incorporates:
     *  Constant: '<S640>/Calib'
     *  Constant: '<S646>/Calib'
     *  Merge: '<Root>/Merge_200'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_FrWyVlv_MtrVltg_read'
     */
    if (KeTAIR_b_FrWyVlv_MtrVltg_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_FrWyVlv_MtrVltg_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_FrWyVlv_MtrVltg_write_IRV();
    }

    /* End of Switch: '<S482>/Switch13' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_FrWyVlv_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S206>/FrWyVlv_MtrVltg_AD'
     */
    (void)Rte_Write_VeTAIR_U_FrWyVlv_MtrVltg_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector4' */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_OvrCrnt' incorporates:
     *  Constant: '<S635>/Constant Value'
     *  RelationalOperator: '<S635>/Greater  Than'
     *  S-Function (sfix_bitop): '<S635>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/FrWyVlv_OC'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_OvrCrnt_Value((((sint32)rtb_Switch7) & 16) >
        0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector4' */

    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector3' */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_OpnLd' incorporates:
     *  Constant: '<S634>/Constant Value'
     *  RelationalOperator: '<S634>/Greater  Than'
     *  S-Function (sfix_bitop): '<S634>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/FrWyVlv_OL'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_OpnLd_Value((((sint32)rtb_Switch7) & 8) > 0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector3' */

    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector' */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_OvrVltg' incorporates:
     *  Constant: '<S631>/Constant Value'
     *  RelationalOperator: '<S631>/Greater  Than'
     *  S-Function (sfix_bitop): '<S631>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/FrWyVlv_OV'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_OvrVltg_Value((((sint32)rtb_Switch7) & 1) >
        0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector' */

    /* Switch: '<S482>/Switch' incorporates:
     *  Constant: '<S639>/Calib'
     *  Constant: '<S649>/Calib'
     *  Merge: '<Root>/Merge_193'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_FrWyVlv_ActlPstn_read'
     */
    if (KeTAIR_b_FrWyVlv_PstnAct_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_FrWyVlv_PstnAct_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_FrWyVlv_ActlPstn_write_IRV();
    }

    /* End of Switch: '<S482>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_FrWyVlv_PstnAct' incorporates:
     *  SignalConversion generated from: '<S206>/FrWyVlv_PstnAct_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_FrWyVlv_PstnAct_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S482>/Switch1' incorporates:
     *  Constant: '<S647>/Calib'
     *  Constant: '<S648>/Calib'
     *  Merge: '<Root>/Merge_194'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_FrWyVlv_ActlPstnFA_read'
     */
    if (KeTAIR_b_FrWyVlv_PstnAct_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_FrWyVlv_PstnAct_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_FrWyVlv_ActlPstnFA_write_IRV();
    }

    /* End of Switch: '<S482>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_PstnAct_FA' incorporates:
     *  SignalConversion generated from: '<S206>/FrWyVlv_PstnActl_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_PstnAct_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S482>/Switch4' incorporates:
     *  Constant: '<S650>/Calib'
     *  Constant: '<S651>/Calib'
     *  Merge: '<Root>/Merge_195'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_FrWyVlv_RsErr_read'
     */
    if (KeTAIR_b_FrWyVlv_RsErr_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_FrWyVlv_RsErr_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_FrWyVlv_RsErr_write_IRV();
    }

    /* End of Switch: '<S482>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_RsErr' incorporates:
     *  SignalConversion generated from: '<S206>/FrWyVlv_RsErr_AD'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_RsErr_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_Err_SNA' incorporates:
     *  Logic: '<S481>/Logical1'
     *  SignalConversion generated from: '<S206>/FrWyVlv_SNA'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_Err_SNA_Value((VeTAIR_b_ErrMsg_SNA_B4LO) ||
        (VeTAIR_b_FrWyVlv_ErrMsgs_FA));

    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector2' */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_ThrmlWrng' incorporates:
     *  Constant: '<S633>/Constant Value'
     *  RelationalOperator: '<S633>/Greater  Than'
     *  S-Function (sfix_bitop): '<S633>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/FrWyVlv_TW'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_ThrmlWrng_Value((((sint32)rtb_Switch7) & 4)
        > 0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector2' */

    /* Outputs for Atomic SubSystem: '<S481>/Bit Selector1' */
    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_UndrVltg' incorporates:
     *  Constant: '<S632>/Constant Value'
     *  RelationalOperator: '<S632>/Greater  Than'
     *  S-Function (sfix_bitop): '<S632>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/FrWyVlv_UV'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_UndrVltg_Value((((sint32)rtb_Switch7) & 2) >
        0);

    /* End of Outputs for SubSystem: '<S481>/Bit Selector1' */

    /* Switch: '<S577>/Switch' incorporates:
     *  Constant: '<S606>/Calib'
     *  Constant: '<S608>/Calib'
     *  Merge: '<Root>/Merge_121'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_FtRfgtShtoff_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_FtRfgtVlv_Cmd_IO_Cnt_SD)
    {
        tmp_1 = KeTAIR_e_FtRfgtVlv_IO_Cnt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_FtRfgtShtoff_VlvCmd_IO_CntrlSt_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S206>/FrtRfgVlv_IO_CntrlSt_AD'
     *  Switch: '<S577>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Value(tmp_1);

    /* Switch: '<S577>/Switch1' incorporates:
     *  Constant: '<S605>/Calib'
     *  Constant: '<S607>/Calib'
     *  Merge: '<Root>/Merge_120'
     *  SignalConversion generated from: '<S206>/VeTAIF_b_FtRfgtShtoff_VlvCmd_read'
     */
    if (KeTAIR_b_FtRfgtVlv_Cmd_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_FtRfgtVlv_Cmd_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_b_FtRfgtShtoff_VlvCmd_write_IRV();
    }

    /* End of Switch: '<S577>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_Ft_SO_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S206>/FrtRfg_VlvCmd_AD'
     */
    (void)Rte_Write_VeTAIR_b_Ft_SO_VlvCmd_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S487>/Switch1' incorporates:
     *  Constant: '<S784>/Calib'
     *  Constant: '<S788>/Calib'
     *  Merge: '<Root>/Merge_111'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_DVC_HTCV_Calibration_Start_read'
     */
    if (KeTAIR_b_DVC_HTCV_CalibStrt_SD)
    {
        tmp_5 = KeTAIR_e_DVC_HTCV_CalibStrt_D;
    }
    else
    {
        tmp_5 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_DVC_HTCV_Calibration_Start_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTAIR_e_DVC_HTCV_CalibStrt' incorporates:
     *  SignalConversion generated from: '<S206>/HTCV_CalibStrt_AD'
     *  Switch: '<S487>/Switch1'
     */
    (void)Rte_Write_VeTAIR_e_DVC_HTCV_CalibStrt_Value(tmp_5);

    /* Switch: '<S479>/Switch11' incorporates:
     *  Constant: '<S550>/Calib'
     *  Constant: '<S554>/Calib'
     *  Merge: '<Root>/Merge_94'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_ActlPstn_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_HTL_BypsVlv_ActlPstn_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_write_IRV();
    }

    /* End of Switch: '<S479>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_ActlPstn_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Value
        (VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S479>/Switch12' incorporates:
     *  Constant: '<S552>/Calib'
     *  Constant: '<S553>/Calib'
     *  Merge: '<Root>/Merge_95'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_HTL_BypsVlv_ActlPstnFA_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_ActlPstn_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTL_BypsVlv_ActlPstn_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTL_BypsVlv_ActlPstnFA_write_IRV();
    }

    /* End of Switch: '<S479>/Switch12' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_ActlPstn_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_ActlPstn_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector6' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_BlckPnt' incorporates:
     *  Constant: '<S548>/Constant Value'
     *  RelationalOperator: '<S548>/Greater  Than'
     *  S-Function (sfix_bitop): '<S548>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_Blck'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_BlckPnt_Value((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 64) > 0);

    /* End of Outputs for SubSystem: '<S478>/Bit Selector6' */

    /* Switch: '<S479>/Switch13' incorporates:
     *  Constant: '<S557>/Calib'
     *  Constant: '<S569>/Calib'
     *  Merge: '<Root>/Merge_96'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_HTL_BypsVlv_CalSts_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_CalSts_SD)
    {
        tmp = KeTAIR_e_HTL_BypsVlv_CalSts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTL_BypsVlv_CalSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_CalSts' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_CalSts_AD'
     *  Switch: '<S479>/Switch13'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_CalSts_Value(tmp);

    /* Switch: '<S479>/Switch14' incorporates:
     *  Constant: '<S555>/Calib'
     *  Constant: '<S556>/Calib'
     *  Merge: '<Root>/Merge_97'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_HTL_BypsVlv_CalStsFA_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_CalSts_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTL_BypsVlv_CalSts_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTL_BypsVlv_CalStsFA_write_IRV();
    }

    /* End of Switch: '<S479>/Switch14' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_CalSts_FA' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_CalSts_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_CalSts_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S578>/Switch1' incorporates:
     *  Constant: '<S609>/Calib'
     *  Constant: '<S610>/Calib'
     *  Merge: '<Root>/Merge_122'
     *  SignalConversion generated from: '<S206>/VeTAIF_Pct_HTL_BypsVlv_Cmd_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_Cmd_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_HTL_BypsVlv_Cmd_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_Pct_HTL_BypsVlv_Cmd_write_IRV();
    }

    /* End of Switch: '<S578>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_Cmd' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_Cmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_HTL_BypsVlv_Cmd_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S479>/Switch16' incorporates:
     *  Constant: '<S563>/Calib'
     *  Constant: '<S570>/Calib'
     *  Merge: '<Root>/Merge_99'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_HTL_BypsVlv_ErrSts_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_ErrSts_SD)
    {
        tmp_0 = KeTAIR_e_HTL_BypsVlv_ErrSts_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTL_BypsVlv_ErrSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_ErrSts' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_ErrSts_AD'
     *  Switch: '<S479>/Switch16'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_ErrSts_Value(tmp_0);

    /* Switch: '<S479>/Switch17' incorporates:
     *  Constant: '<S561>/Calib'
     *  Constant: '<S562>/Calib'
     *  Merge: '<Root>/Merge_100'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_HTL_BypsVlv_ErrStsFA_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_ErrSts_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTL_BypsVlv_ErrSts_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTL_BypsVlv_ErrStsFA_write_IRV();
    }

    /* End of Switch: '<S479>/Switch17' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_ErrSts_FA' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_ErrSts_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_ErrSts_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S578>/Switch2' incorporates:
     *  Constant: '<S611>/Calib'
     *  Constant: '<S612>/Calib'
     *  Merge: '<Root>/Merge_123'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_HTL_BypsVlv_IO_CntrlSt_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_HTL_BypsVlv_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_HTL_BypsVlv_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_IO_CntrlSt_AD'
     *  Switch: '<S578>/Switch2'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Value(tmp_1);

    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector5' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_MechBrk' incorporates:
     *  Constant: '<S547>/Constant Value'
     *  RelationalOperator: '<S547>/Greater  Than'
     *  S-Function (sfix_bitop): '<S547>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_MB'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_MechBrk_Value((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 32) > 0);

    /* End of Outputs for SubSystem: '<S478>/Bit Selector5' */

    /* Switch: '<S479>/Switch20' incorporates:
     *  Constant: '<S551>/Calib'
     *  Constant: '<S566>/Calib'
     *  Merge: '<Root>/Merge_102'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_HTL_BypsVlv_MtrVltg_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_MtrVltg_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_HTL_BypsVlv_MtrVltg_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_HTL_BypsVlv_MtrVltg_write_IRV();
    }

    /* End of Switch: '<S479>/Switch20' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_HTL_BypsVlv_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_MtrVltg_AD'
     */
    (void)Rte_Write_VeTAIR_U_HTL_BypsVlv_MtrVltg_Value
        (VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S479>/Switch21' incorporates:
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Calib'
     *  Merge: '<Root>/Merge_104'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_HTL_BypsVlv_MtrVltgFA_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_MtrVltg_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTL_BypsVlv_MtrVltg_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTL_BypsVlv_MtrVltgFA_write_IRV();
    }

    /* End of Switch: '<S479>/Switch21' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_MtrVltg_FA' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_MtrVltg_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_MtrVltg_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector4' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_OvrCrnt' incorporates:
     *  Constant: '<S546>/Constant Value'
     *  RelationalOperator: '<S546>/Greater  Than'
     *  S-Function (sfix_bitop): '<S546>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_OC'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_OvrCrnt_Value((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 16) > 0);

    /* End of Outputs for SubSystem: '<S478>/Bit Selector4' */

    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector3' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_OpnLd' incorporates:
     *  Constant: '<S545>/Constant Value'
     *  RelationalOperator: '<S545>/Greater  Than'
     *  S-Function (sfix_bitop): '<S545>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_OL'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_OpnLd_Value((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 8) > 0);

    /* End of Outputs for SubSystem: '<S478>/Bit Selector3' */

    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_OvrVltg' incorporates:
     *  Constant: '<S542>/Constant Value'
     *  RelationalOperator: '<S542>/Greater  Than'
     *  S-Function (sfix_bitop): '<S542>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_OV'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_OvrVltg_Value((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 1) > 0);

    /* End of Outputs for SubSystem: '<S478>/Bit Selector' */

    /* Switch: '<S479>/Switch15' incorporates:
     *  Constant: '<S567>/Calib'
     *  Constant: '<S568>/Calib'
     *  Merge: '<Root>/Merge_98'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_HTL_BypsVlv_RsErr_read'
     */
    if (KeTAIR_b_HTL_BypsVlv_RsErr_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTL_BypsVlv_RsErr_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTL_BypsVlv_RsErr_write_IRV();
    }

    /* End of Switch: '<S479>/Switch15' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_RsErr' incorporates:
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_RsErr_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_RsErr_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector7' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_Err_SNA' incorporates:
     *  Constant: '<S549>/Constant Value'
     *  Logic: '<S478>/Logical1'
     *  RelationalOperator: '<S549>/Greater  Than'
     *  S-Function (sfix_bitop): '<S549>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_SNA'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_Err_SNA_Value(((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 128) > 0) ||
        (VeTAIR_b_HTL_BypsVlv_ErrMsgs_FA));

    /* End of Outputs for SubSystem: '<S478>/Bit Selector7' */

    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector2' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_ThrmlWrng' incorporates:
     *  Constant: '<S544>/Constant Value'
     *  RelationalOperator: '<S544>/Greater  Than'
     *  S-Function (sfix_bitop): '<S544>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_TW'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_ThrmlWrng_Value((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 4) > 0);

    /* End of Outputs for SubSystem: '<S478>/Bit Selector2' */

    /* Outputs for Atomic SubSystem: '<S478>/Bit Selector1' */
    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_UndrVltg' incorporates:
     *  Constant: '<S543>/Constant Value'
     *  RelationalOperator: '<S543>/Greater  Than'
     *  S-Function (sfix_bitop): '<S543>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/HTL_BypsVlv_UV'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_UndrVltg_Value((((sint32)
        VeTAIR_y_HTL_BypsVlv_ErrMsgs) & 2) > 0);

    /* End of Outputs for SubSystem: '<S478>/Bit Selector1' */

    /* Switch: '<S483>/Switch6' incorporates:
     *  Constant: '<S655>/Calib'
     *  Constant: '<S661>/Calib'
     *  Merge: '<Root>/Merge_78'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_HTRBV_ActuatorPosAct_AM_read'
     */
    if (KeTAIR_b_HTRBV_ActuatorPosAct_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_HTRBV_ActuatorPosAct_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_PokeTAIR_Pct_HTRBV_ActuatorPosAct_write_IRV();
    }

    /* End of Switch: '<S483>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_HTRBV_ActuatorPosAct' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_ActuatorPosAct_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_HTRBV_ActuatorPosAct_Value
        (VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S483>/Switch2' incorporates:
     *  Constant: '<S659>/Calib'
     *  Constant: '<S660>/Calib'
     *  Merge: '<Root>/Merge_171'
     *  SignalConversion generated from: '<S206>/HTRBV_ActuatorPosAct_FA_AM_read'
     */
    if (KeTAIR_b_HTRBV_ActuatorPosAct_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTRBV_ActuatorPosAct_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_FsftTAIR_Pct_HTRBV_ActuatorPosActFA_write_IRV
            ();
    }

    /* End of Switch: '<S483>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTRBV_ActuatorPosAct_FA' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_ActuatorPosAct_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTRBV_ActuatorPosAct_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S483>/Switch1' incorporates:
     *  Constant: '<S656>/Calib'
     *  Constant: '<S662>/Calib'
     *  Merge: '<Root>/Merge_31'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_HTRBV_ActuatorPosTrgt_read'
     */
    if (KeTAIR_b_HTRBV_ActuatorPosTrgt_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_HTRBV_ActuatorPosTrgt_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_HTRBV_ActuatorPosTrgt_write_IRV();
    }

    /* End of Switch: '<S483>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_HTRBV_ActuatorPosTrgt' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_ActuatorPosTrgt_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_HTRBV_ActuatorPosTrgt_Value
        (VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S483>/Switch3' incorporates:
     *  Constant: '<S657>/Calib'
     *  Constant: '<S663>/Calib'
     *  Merge: '<Root>/Merge_164'
     *  SignalConversion generated from: '<S206>/VeTAIR_T_HTRBV_EcuTemp_AM_read'
     */
    if (KeTAIR_b_HTRBV_EcuTemp_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_T_HTRBV_EcuTemp_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_T_HTRBV_EcuTemp_write_IRV();
    }

    /* End of Switch: '<S483>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_HTRBV_EcuTemp' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_EcuTemp_AD'
     */
    (void)Rte_Write_VeTAIR_T_HTRBV_EcuTemp_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S483>/Switch4' incorporates:
     *  Constant: '<S658>/Calib'
     *  Constant: '<S664>/Calib'
     *  Merge: '<Root>/Merge_166'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_HTRBV_EcuVoltage_AM_read'
     */
    if (KeTAIR_b_HTRBV_EcuVoltage_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_HTRBV_EcuVoltage_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_HTRBV_EcuVoltage_write_IRV();
    }

    /* End of Switch: '<S483>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_HTRBV_EcuVoltage' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_EcuVoltage_AD'
     */
    (void)Rte_Write_VeTAIR_U_HTRBV_EcuVoltage_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S483>/Switch22' incorporates:
     *  Constant: '<S665>/Calib'
     *  Constant: '<S675>/Calib'
     *  Merge: '<Root>/Merge_207'
     *  SignalConversion generated from: '<S206>/HTRBV_ErrLinCom_AM'
     */
    if (KeTAIR_b_HTRBV_ErrLinCom_SD)
    {
        tmp_6 = KeTAIR_e_HTRBV_ErrLinCom_D;
    }
    else
    {
        tmp_6 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTRBV_ErrLinCom_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTRBV_ErrLinCom' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_ErrLinCom_AD'
     *  Switch: '<S483>/Switch22'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_ErrLinCom_Value(tmp_6);

    /* Switch: '<S483>/Switch23' incorporates:
     *  Constant: '<S666>/Calib'
     *  Constant: '<S676>/Calib'
     *  Merge: '<Root>/Merge_209'
     *  SignalConversion generated from: '<S206>/HTRBV_ErrPosition_AM'
     */
    if (KeTAIR_b_HTRBV_ErrPosition_SD)
    {
        tmp_7 = KeTAIR_e_HTRBV_ErrPosition_D;
    }
    else
    {
        tmp_7 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTRBV_ErrPosition_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTRBV_ErrPosition' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_ErrPosition_AD'
     *  Switch: '<S483>/Switch23'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_ErrPosition_Value(tmp_7);

    /* Switch: '<S483>/Switch8' incorporates:
     *  Constant: '<S667>/Calib'
     *  Constant: '<S677>/Calib'
     *  Merge: '<Root>/Merge_201'
     *  SignalConversion generated from: '<S206>/HTRBV_Err_Ecu_AM'
     */
    if (KeTAIR_b_HTRBV_Err_Ecu_SD)
    {
        tmp_8 = KeTAIR_e_HTRBV_Err_Ecu_D;
    }
    else
    {
        tmp_8 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTRBV_Err_Ecu_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTRBV_Err_Ecu' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_Err_Ecu_AD'
     *  Switch: '<S483>/Switch8'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Ecu_Value(tmp_8);

    /* Switch: '<S483>/Switch9' incorporates:
     *  Constant: '<S668>/Calib'
     *  Constant: '<S678>/Calib'
     *  Merge: '<Root>/Merge_203'
     *  SignalConversion generated from: '<S206>/HTRBV_Err_Motor_AM'
     */
    if (KeTAIR_b_HTRBV_Err_Motor_SD)
    {
        tmp_9 = KeTAIR_e_HTRBV_Err_Motor_D;
    }
    else
    {
        tmp_9 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTRBV_Err_Motor_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTRBV_Err_Motor' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_Err_Motor_AD'
     *  Switch: '<S483>/Switch9'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Motor_Value(tmp_9);

    /* Switch: '<S483>/Switch10' incorporates:
     *  Constant: '<S669>/Calib'
     *  Constant: '<S679>/Calib'
     *  Merge: '<Root>/Merge_205'
     *  SignalConversion generated from: '<S206>/HTRBV_Err_Voltage_AM'
     */
    if (KeTAIR_b_HTRBV_Err_Voltage_SD)
    {
        tmp_a = KeTAIR_e_HTRBV_Err_Voltage_D;
    }
    else
    {
        tmp_a = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTRBV_Err_Voltage_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTRBV_Err_Voltage' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_Err_Voltage_AD'
     *  Switch: '<S483>/Switch10'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Voltage_Value(tmp_a);

    /* Switch: '<S483>/Switch5' incorporates:
     *  Constant: '<S670>/Calib'
     *  Constant: '<S671>/Calib'
     *  Merge: '<Root>/Merge_157'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_HTRBV_ResponseError_AM_read'
     */
    if (KeTAIR_b_HTRBV_ResponseError_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTRBV_ResponseError_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTRBV_ResponseError_write_IRV();
    }

    /* End of Switch: '<S483>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTRBV_ResponseError' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_ResponseError_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTRBV_ResponseError_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S483>/Switch7' incorporates:
     *  Constant: '<S672>/Calib'
     *  Constant: '<S673>/Calib'
     *  Merge: '<Root>/Merge_188'
     *  SignalConversion generated from: '<S206>/HTRBV_SelfCalReq_AM'
     */
    if (KeTAIR_b_HTRBV_SelfCalReq_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HTRBV_SelfCalReq_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HTRBV_SelfCalReq_write_IRV();
    }

    /* End of Switch: '<S483>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HTRBV_SelfCalReq' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_SelfCalReq_AD'
     */
    (void)Rte_Write_VeTAIR_b_HTRBV_SelfCalReq_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S483>/Switch24' incorporates:
     *  Constant: '<S674>/Calib'
     *  Constant: '<S680>/Calib'
     *  Merge: '<Root>/Merge_211'
     *  SignalConversion generated from: '<S206>/HTRBV_SystemState_AM'
     */
    if (KeTAIR_b_HTRBV_SystemState_SD)
    {
        tmp_b = KeTAIR_e_HTRBV_SystemState_D;
    }
    else
    {
        tmp_b = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_HTRBV_SystemState_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_HTRBV_SystemState' incorporates:
     *  SignalConversion generated from: '<S206>/HTRBV_SystemState_AD'
     *  Switch: '<S483>/Switch24'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_SystemState_Value(tmp_b);

    /* Switch: '<S487>/Switch' incorporates:
     *  Constant: '<S783>/Calib'
     *  Constant: '<S787>/Calib'
     *  Merge: '<Root>/Merge_106'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_HT_CabVlvSts_read'
     */
    if (KeTAIR_b_HT_CabVlvSts_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_HT_CabVlvSts_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_HT_CabVlvSts_write_IRV();
    }

    /* End of Switch: '<S487>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_HT_CabVlvSts' incorporates:
     *  SignalConversion generated from: '<S206>/HT_CabVlvSts_AftDial'
     */
    (void)Rte_Write_VeTAIR_U_HT_CabVlvSts_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S487>/Switch2' incorporates:
     *  Constant: '<S785>/Calib'
     *  Constant: '<S786>/Calib'
     *  Merge: '<Root>/Merge_105'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_HT_CabVlvStsFA_read'
     */
    if (KeTAIR_b_HT_CabVlvSts_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_HT_CabVlvSts_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_HT_CabVlvStsFA_write_IRV();
    }

    /* End of Switch: '<S487>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HT_CabVlvSts_FA' incorporates:
     *  SignalConversion generated from: '<S206>/HT_CabVlvSts_FA'
     */
    (void)Rte_Write_VeTAIR_b_HT_CabVlvSts_FA_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S475>/Switch' incorporates:
     *  Constant: '<S496>/Calib'
     *  Constant: '<S500>/Calib'
     *  Merge: '<Root>/Merge_83'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_ActlPstn_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_LTR_BypsVlv_ActlPstn_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_write_IRV();
    }

    /* End of Switch: '<S475>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_ActlPstn_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Value
        (VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S475>/Switch1' incorporates:
     *  Constant: '<S498>/Calib'
     *  Constant: '<S499>/Calib'
     *  Merge: '<Root>/Merge_84'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_LTR_BypsVlv_ActlPstnFA_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_ActlPstn_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_LTR_BypsVlv_ActlPstn_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_LTR_BypsVlv_ActlPstnFA_write_IRV();
    }

    /* End of Switch: '<S475>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_ActlPstn_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_ActlPstn_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector6' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_BlckPnt' incorporates:
     *  Constant: '<S494>/Constant Value'
     *  RelationalOperator: '<S494>/Greater  Than'
     *  S-Function (sfix_bitop): '<S494>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_Blck'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_BlckPnt_Value((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 64) > 0);

    /* End of Outputs for SubSystem: '<S474>/Bit Selector6' */

    /* Switch: '<S475>/Switch2' incorporates:
     *  Constant: '<S503>/Calib'
     *  Constant: '<S515>/Calib'
     *  Merge: '<Root>/Merge_86'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_LTR_BypsVlv_CalSts_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_CalSts_SD)
    {
        tmp = KeTAIR_e_LTR_BypsVlv_CalSts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_LTR_BypsVlv_CalSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_CalSts' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_CalSts_AD'
     *  Switch: '<S475>/Switch2'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_CalSts_Value(tmp);

    /* Switch: '<S475>/Switch3' incorporates:
     *  Constant: '<S501>/Calib'
     *  Constant: '<S502>/Calib'
     *  Merge: '<Root>/Merge_87'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_LTR_BypsVlv_CalStsFA_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_CalSts_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_LTR_BypsVlv_CalSts_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_LTR_BypsVlv_CalStsFA_write_IRV();
    }

    /* End of Switch: '<S475>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_CalSts_FA' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_CalSts_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_CalSts_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S580>/Switch11' incorporates:
     *  Constant: '<S617>/Calib'
     *  Constant: '<S618>/Calib'
     *  Merge: '<Root>/Merge_126'
     *  SignalConversion generated from: '<S206>/VeTAIF_Pct_LTR_BypsVlv_Cmd_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_Cmd_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_LTR_BypsVlv_Cmd_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_Pct_LTR_BypsVlv_Cmd_write_IRV();
    }

    /* End of Switch: '<S580>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_Cmd' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_Cmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_LTR_BypsVlv_Cmd_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S475>/Switch5' incorporates:
     *  Constant: '<S509>/Calib'
     *  Constant: '<S516>/Calib'
     *  Merge: '<Root>/Merge_90'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_LTR_BypsVlv_ErrSts_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_ErrSts_SD)
    {
        tmp_0 = KeTAIR_e_LTR_BypsVlv_ErrSts_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_LTR_BypsVlv_ErrSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_ErrSts' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_ErrSts_AD'
     *  Switch: '<S475>/Switch5'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_ErrSts_Value(tmp_0);

    /* Switch: '<S475>/Switch6' incorporates:
     *  Constant: '<S507>/Calib'
     *  Constant: '<S508>/Calib'
     *  Merge: '<Root>/Merge_89'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_LTR_BypsVlv_ErrStsFA_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_ErrSts_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_LTR_BypsVlv_ErrSts_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_LTR_BypsVlv_ErrStsFA_write_IRV();
    }

    /* End of Switch: '<S475>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_ErrSts_FA' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_ErrSts_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_ErrSts_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S580>/Switch12' incorporates:
     *  Constant: '<S619>/Calib'
     *  Constant: '<S620>/Calib'
     *  Merge: '<Root>/Merge_127'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_LTR_BypsVlv_IO_CntrlSt_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_LTR_BypsVlv_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_LTR_BypsVlv_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_IO_CntrlSt_AD'
     *  Switch: '<S580>/Switch12'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Value(tmp_1);

    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector5' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_MechBrk' incorporates:
     *  Constant: '<S493>/Constant Value'
     *  RelationalOperator: '<S493>/Greater  Than'
     *  S-Function (sfix_bitop): '<S493>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_MB'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_MechBrk_Value((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 32) > 0);

    /* End of Outputs for SubSystem: '<S474>/Bit Selector5' */

    /* Switch: '<S475>/Switch9' incorporates:
     *  Constant: '<S497>/Calib'
     *  Constant: '<S512>/Calib'
     *  Merge: '<Root>/Merge_93'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_LTR_BypsVlv_MtrVltg_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_MtrVltg_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_LTR_BypsVlv_MtrVltg_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_LTR_BypsVlv_MtrVltg_write_IRV();
    }

    /* End of Switch: '<S475>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_LTR_BypsVlv_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_MtrVltg_AD'
     */
    (void)Rte_Write_VeTAIR_U_LTR_BypsVlv_MtrVltg_Value
        (VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S475>/Switch10' incorporates:
     *  Constant: '<S510>/Calib'
     *  Constant: '<S511>/Calib'
     *  Merge: '<Root>/Merge_85'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_LTR_BypsVlv_MtrVltgFA_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_MtrVltg_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_LTR_BypsVlv_MtrVltg_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_LTR_BypsVlv_MtrVltgFA_write_IRV();
    }

    /* End of Switch: '<S475>/Switch10' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_MtrVltg_FA' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_MtrVltg_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_MtrVltg_FA_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector4' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_OvrCrnt' incorporates:
     *  Constant: '<S492>/Constant Value'
     *  RelationalOperator: '<S492>/Greater  Than'
     *  S-Function (sfix_bitop): '<S492>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_OC'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_OvrCrnt_Value((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 16) > 0);

    /* End of Outputs for SubSystem: '<S474>/Bit Selector4' */

    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector3' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_OpnLd' incorporates:
     *  Constant: '<S491>/Constant Value'
     *  RelationalOperator: '<S491>/Greater  Than'
     *  S-Function (sfix_bitop): '<S491>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_OL'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_OpnLd_Value((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 8) > 0);

    /* End of Outputs for SubSystem: '<S474>/Bit Selector3' */

    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_OvrVltg' incorporates:
     *  Constant: '<S488>/Constant Value'
     *  RelationalOperator: '<S488>/Greater  Than'
     *  S-Function (sfix_bitop): '<S488>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_OV'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_OvrVltg_Value((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 1) > 0);

    /* End of Outputs for SubSystem: '<S474>/Bit Selector' */

    /* Switch: '<S475>/Switch4' incorporates:
     *  Constant: '<S513>/Calib'
     *  Constant: '<S514>/Calib'
     *  Merge: '<Root>/Merge_88'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_LTR_BypsVlv_RsErr_read'
     */
    if (KeTAIR_b_LTR_BypsVlv_RsErr_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_LTR_BypsVlv_RsErr_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_LTR_BypsVlv_RsErr_write_IRV();
    }

    /* End of Switch: '<S475>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_RsErr' incorporates:
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_RsErr_AD'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_RsErr_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector7' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_Err_SNA' incorporates:
     *  Constant: '<S495>/Constant Value'
     *  Logic: '<S474>/Logical1'
     *  RelationalOperator: '<S495>/Greater  Than'
     *  S-Function (sfix_bitop): '<S495>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_SNA'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_Err_SNA_Value(((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 128) > 0) ||
        (VeTAIR_b_LTR_BypsVlv_ErrMsgs_FA));

    /* End of Outputs for SubSystem: '<S474>/Bit Selector7' */

    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector2' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_ThrmlWrng' incorporates:
     *  Constant: '<S490>/Constant Value'
     *  RelationalOperator: '<S490>/Greater  Than'
     *  S-Function (sfix_bitop): '<S490>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_TW'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_ThrmlWrng_Value((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 4) > 0);

    /* End of Outputs for SubSystem: '<S474>/Bit Selector2' */

    /* Outputs for Atomic SubSystem: '<S474>/Bit Selector1' */
    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_UndrVltg' incorporates:
     *  Constant: '<S489>/Constant Value'
     *  RelationalOperator: '<S489>/Greater  Than'
     *  S-Function (sfix_bitop): '<S489>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S206>/LTR_BypsVlv_UV'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_UndrVltg_Value((((sint32)
        VeTAIR_y_LTR_BypsVlv_ErrMsgs) & 2) > 0);

    /* End of Outputs for SubSystem: '<S474>/Bit Selector1' */

    /* Switch: '<S581>/Switch1' incorporates:
     *  Constant: '<S621>/Calib'
     *  Constant: '<S623>/Calib'
     *  Merge: '<Root>/Merge_128'
     *  SignalConversion generated from: '<S206>/VeTAIF_b_LT_Shtoff_VlvCmd_read'
     */
    if (KeTAIR_b_LT_Shtoff_VlvCmd_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_LT_Shtoff_VlvCmd_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_b_LT_Shtoff_VlvCmd_write_IRV();
    }

    /* End of Switch: '<S581>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_LT_Shtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S206>/LT_Shtoff_VlvCmd'
     */
    (void)Rte_Write_VeTAIR_b_LT_Shtoff_VlvCmd_Value
        (VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S581>/Switch' incorporates:
     *  Constant: '<S622>/Calib'
     *  Constant: '<S624>/Calib'
     *  Merge: '<Root>/Merge_129'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_LT_Shtoff_VlvCmd_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S206>/LT_Shtoff_VlvCmd_IO_CntrlSt'
     *  Switch: '<S581>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Value(tmp_1);

    /* Switch: '<S486>/Switch16' incorporates:
     *  Constant: '<S745>/Calib'
     *  Constant: '<S751>/Calib'
     *  Merge: '<Root>/Merge_165'
     *  SignalConversion generated from: '<S206>/VeTAIR_T_OEXV_BoardTemp_read'
     */
    if (KeTAIR_b_OEXV_BoardTemp_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_T_OEXV_BoardTemp_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_T_OEXV_BoardTemp_write_IRV();
    }

    /* End of Switch: '<S486>/Switch16' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_OEXV_BoardTemp' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_BoardTemp_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_OEXV_BoardTemp_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S486>/Switch6' incorporates:
     *  Constant: '<S752>/Calib'
     *  Constant: '<S753>/Calib'
     *  Merge: '<Root>/Merge_172'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_OEXV_CalRq_read'
     */
    if (KeTAIR_b_OEXV_CalRq_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_OEXV_CalRq_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_OEXV_CalRq_write_IRV();
    }

    /* End of Switch: '<S486>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_OEXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_CalRq_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_CalRq_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S486>/Switch4' incorporates:
     *  Constant: '<S754>/Calib'
     *  Constant: '<S778>/Calib'
     *  Merge: '<Root>/Merge_170'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_OEXV_CalStat_read'
     */
    if (KeTAIR_b_OEXV_CalStat_SD)
    {
        tmp_2 = KeTAIR_e_OEXV_CalStat_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_OEXV_CalStat_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_OEXV_CalStat' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_CalStat_AftDial'
     *  Switch: '<S486>/Switch4'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_CalStat_Value(tmp_2);

    /* Switch: '<S582>/Switch1' incorporates:
     *  Constant: '<S625>/Calib'
     *  Constant: '<S628>/Calib'
     *  Merge: '<Root>/Merge_132'
     *  SignalConversion generated from: '<S206>/VeTAIF_Pct_OEXV_VlvCmd_read'
     */
    if (KeTAIR_b_OEXV_Cmd_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_OEXV_Cmd_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_Pct_OEXV_VlvCmd_write_IRV();
    }

    /* End of Switch: '<S582>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_OEXV_Cmd' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_Cmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_OEXV_Cmd_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S486>/Switch10' incorporates:
     *  Constant: '<S755>/Calib'
     *  Constant: '<S779>/Calib'
     *  Merge: '<Root>/Merge_158'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_OEXV_Err_read'
     */
    if (KeTAIR_b_OEXV_Err_SD)
    {
        tmp_3 = KeTAIR_e_OEXV_Err_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_OEXV_Err_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_OEXV_Err' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_Err_AftDial'
     *  Switch: '<S486>/Switch10'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_Err_Value(tmp_3);

    /* Switch: '<S582>/Switch' incorporates:
     *  Constant: '<S629>/Calib'
     *  Constant: '<S630>/Calib'
     *  Merge: '<Root>/Merge_131'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_OEXV_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_OEXV_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_OEXV_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_OEXV_VlvCmd_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_OEXV_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_IO_CntrlSt_AD'
     *  Switch: '<S582>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_IO_CntrlSt_Value(tmp_1);

    /* Switch: '<S486>/Switch1' incorporates:
     *  Constant: '<S758>/Calib'
     */
    if (KeTAIR_b_OEXV_InTempSens_SD)
    {
        /* Outport: '<Root>/VeTAIR_T_OEXV_InTempSens' incorporates:
         *  Constant: '<S746>/Calib'
         *  SignalConversion generated from: '<S206>/OEXV_InTempSens_AftDial'
         */
        (void)Rte_Write_VeTAIR_T_OEXV_InTempSens_Value
            (KeTAIR_T_OEXV_InTempSens_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_T_OEXV_InTempSens' incorporates:
         *  SignalConversion generated from: '<S206>/OEXV_InTempSens_AftDial'
         */
        (void)Rte_Write_VeTAIR_T_OEXV_InTempSens_Value(tmpRead);
    }

    /* End of Switch: '<S486>/Switch1' */

    /* Switch: '<S486>/Switch5' incorporates:
     *  Constant: '<S757>/Calib'
     */
    if (KeTAIR_b_OEXV_InTempSens_FA_SD)
    {
        /* Outport: '<Root>/VeTAIR_b_OEXV_InTempSens_FA' incorporates:
         *  Constant: '<S756>/Calib'
         *  SignalConversion generated from: '<S206>/OEXV_InTempSens_FA_AftDial'
         */
        (void)Rte_Write_VeTAIR_b_OEXV_InTempSens_FA_Value
            (KeTAIR_b_OEXV_InTempSens_FA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_b_OEXV_InTempSens_FA' incorporates:
         *  SignalConversion generated from: '<S206>/OEXV_InTempSens_FA_AftDial'
         */
        (void)Rte_Write_VeTAIR_b_OEXV_InTempSens_FA_Value(tmpRead_0);
    }

    /* End of Switch: '<S486>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_p_OEXV_OutPressSens' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_OutPressSens_AftDial'
     */
    (void)Rte_Write_VeTAIR_p_OEXV_OutPressSens_Value(Switch20);

    /* Outport: '<Root>/VeTAIR_b_OEXV_OutPressSens_FA' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_OutPressSens_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_OutPressSens_FA_Value(Switch21_e);

    /* Outport: '<Root>/VeTAIR_T_OEXV_OutTempSens' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_OutTempSens_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_OEXV_OutTempSens_Value(Switch22);

    /* Outport: '<Root>/VeTAIR_b_OEXV_OutTempSens_FA' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_OutTempSens_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_OutTempSens_FA_Value(Switch23);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S486>/Switch2' incorporates:
     *  Constant: '<S744>/Calib'
     *  Constant: '<S767>/Calib'
     *  Merge: '<Root>/Merge_167'
     *  SignalConversion generated from: '<S206>/VeTAIR_Pct_OEXV_PosAct_read'
     */
    if (KeTAIR_b_OEXV_PosAct_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_Pct_OEXV_PosAct_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_Pct_OEXV_PosAct_write_IRV();
    }

    /* End of Switch: '<S486>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_OEXV_PosAct' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_PosAct_AftDial'
     */
    (void)Rte_Write_VeTAIR_Pct_OEXV_PosAct_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S486>/Switch3' incorporates:
     *  Constant: '<S765>/Calib'
     *  Constant: '<S766>/Calib'
     *  Merge: '<Root>/Merge_169'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_OEXV_PosActFA_read'
     */
    if (KeTAIR_b_OEXV_PosAct_FA_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_OEXV_PosAct_FA_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_OEXV_PosActFA_write_IRV();
    }

    /* End of Switch: '<S486>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_OEXV_PosAct_FA' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_PosAct_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_PosAct_FA_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* Outport: '<Root>/VeTAIR_p_OEXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_RefPress_AftDial'
     */
    (void)Rte_Write_VeTAIR_p_OEXV_RefPress_Value(VeTAIR_p_OEXV_RefPress);

    /* Outport: '<Root>/VeTAIR_b_OEXV_RefPress_FA' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_RefPress_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_RefPress_FA_Value(VeTAIR_b_OEXV_RefPress_FA);

    /* Outport: '<Root>/VeTAIR_T_OEXV_RefTemp' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_RefTemp_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_OEXV_RefTemp_Value(VeTAIR_T_OEXV_RefTemp);

    /* Outport: '<Root>/VeTAIR_b_OEXV_RefTemp_FA' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_RefTemp_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_RefTemp_FA_Value(VeTAIR_b_OEXV_RefTemp_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S486>/Switch7' incorporates:
     *  Constant: '<S774>/Calib'
     *  Constant: '<S775>/Calib'
     *  Merge: '<Root>/Merge_173'
     *  SignalConversion generated from: '<S206>/VeTAIR_b_OEXV_RspErr_read'
     */
    if (KeTAIR_b_OEXV_RspErr_SD)
    {
        VeTAIR_b_CEXV_OutPressSens_FA = KeTAIR_b_OEXV_RspErr_D;
    }
    else
    {
        VeTAIR_b_CEXV_OutPressSens_FA =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_b_OEXV_RspErr_write_IRV();
    }

    /* End of Switch: '<S486>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_OEXV_RspErr' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_RspErr_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_RspErr_Value(VeTAIR_b_CEXV_OutPressSens_FA);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S486>/Switch8' incorporates:
     *  Constant: '<S776>/Calib'
     *  Constant: '<S780>/Calib'
     *  Merge: '<Root>/Merge_174'
     *  SignalConversion generated from: '<S206>/VeTAIR_e_OEXV_Sts_read'
     */
    if (KeTAIR_b_OEXV_Sts_SD)
    {
        tmp_4 = KeTAIR_e_OEXV_Sts_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_TAIR_MedTED_VeTAIR_e_OEXV_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_OEXV_Sts' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_Sts_AftDial'
     *  Switch: '<S486>/Switch8'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_Sts_Value(tmp_4);

    /* Switch: '<S486>/Switch12' incorporates:
     *  Constant: '<S749>/Calib'
     *  Constant: '<S777>/Calib'
     *  Merge: '<Root>/Merge_160'
     *  SignalConversion generated from: '<S206>/VeTAIR_U_OEXV_SupplyVolt_read'
     */
    if (KeTAIR_b_OEXV_SupplyVolt_SD)
    {
        VeTAIR_p_CEXV_OutPressSens = KeTAIR_U_OEXV_SupplyVolt_D;
    }
    else
    {
        VeTAIR_p_CEXV_OutPressSens =
            Rte_IrvRead_TAIR_MedTED_VeTAIR_U_OEXV_SupplyVolt_write_IRV();
    }

    /* End of Switch: '<S486>/Switch12' */
    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_OEXV_SupplyVolt' incorporates:
     *  SignalConversion generated from: '<S206>/OEXV_SupplyVolt_AftDial'
     */
    (void)Rte_Write_VeTAIR_U_OEXV_SupplyVolt_Value(VeTAIR_p_CEXV_OutPressSens);

    /* S-Function (fcgen): '<S206>/FcnCallGen' incorporates:
     *  SubSystem: '<S206>/OverrideSubsystem'
     */
    /* Switch: '<S579>/Switch' incorporates:
     *  Constant: '<S614>/Calib'
     *  Constant: '<S616>/Calib'
     *  Merge: '<Root>/Merge_125'
     *  SignalConversion generated from: '<S206>/VeTAIF_e_HT_Shtoff_VlvCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_HT_Shtoff_VlvCmd_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 =
            Rte_IrvRead_TAIR_MedTED_VeTAIF_e_HT_Shtoff_VlvCmd_IO_CntrlSt_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S206>/SO_Vlv_IO_CntrlSt_AD'
     *  Switch: '<S579>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Value(tmp_1);

    /* End of Outputs for S-Function (fcgen): '<S206>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID2 */
FUNC(void, TAIR_CODE) TAIR_MedTEH(void) /* Explicit Task: MedTEH */
{
    float32 VeTAIR_Pct_ECM_RadFanReq;
    float32 VeTAIR_T_FtEvapTmp_Tgt;
    float32 tmpRead_1;
    TeFSCR_e_AGS_PosRq tmp_7;
    TeTAIR_e_AGS_Calibration_Sts tmp_6;
    TeTAIR_e_AGS_ErrLIN tmp_8;
    TeTAIR_e_CompFltSts tmp_0;
    TeTAIR_e_CompStat tmp_2;
    TeTAIR_e_ECM_AC_ClutchSts tmp_3;
    TeTAIR_e_IO_CntrlSt tmp_1;
    TeTAIR_e_RearDefrostSts tmp_5;
    uint8 tmp_4;
    boolean VeTAIR_b_FtEvapTmp_TgtFA;
    boolean rtb_TmpSignalConversionAtVeT_pn;
    boolean rtb_TmpSignalConversionAtVe_ibo;
    boolean tmp;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_2;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TAIR_MedTEH'
     */
    /* SignalConversion generated from: '<S207>/VeTAIR_b_AGS_CurrPosFA_read' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    rtb_TmpSignalConversionAtVe_ibo =
        Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_CurrPosFA_write_IRV();

    /* SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_CurrPosFA_read' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    rtb_TmpSignalConversionAtVeT_pn =
        Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_CurrPosFA_write_IRV();

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/SignalOverrides'
     */
    /* Switch: '<S791>/Switch' incorporates:
     *  Constant: '<S997>/Calib'
     *  Constant: '<S998>/Calib'
     *  Switch: '<S791>/Switch2'
     */
    if (KeTAIR_b_ECM_RadFanReq_SD)
    {
        /* Switch: '<S791>/Switch' incorporates:
         *  Constant: '<S988>/Calib'
         */
        VeTAIR_Pct_ECM_RadFanReq = KeTAIR_Pct_ECM_RadFanReq_D;
    }
    else
    {
        if (KeTAIR_b_ECM_RadFanReq_FA_SD)
        {
            /* Switch: '<S791>/Switch2' incorporates:
             *  Constant: '<S996>/Calib'
             */
            tmp = KeTAIR_b_ECM_RadFanReq_FA_D;
        }
        else
        {
            /* Switch: '<S791>/Switch2' incorporates:
             *  Merge: '<Root>/Merge_77'
             *  SignalConversion generated from: '<S207>/VeTAIR_b_ECM_RadFanReqFA_read'
             */
            tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_ECM_RadFanReqFA_write_IRV();
        }

        /* Switch: '<S791>/Switch1' */
        if (tmp)
        {
            /* Switch: '<S791>/Switch' incorporates:
             *  Constant: '<S989>/Calib'
             */
            VeTAIR_Pct_ECM_RadFanReq = KeTAIR_Pct_ECM_RadFanReq_FailSafe;
        }
        else
        {
            /* Switch: '<S791>/Switch' incorporates:
             *  Merge: '<Root>/Merge_80'
             *  SignalConversion generated from: '<S207>/VeTAIR_Pct_ECM_RadFanReq_read'
             */
            VeTAIR_Pct_ECM_RadFanReq =
                Rte_IrvRead_TAIR_MedTEH_VeTAIR_Pct_ECM_RadFanReq_write_IRV();
        }

        /* End of Switch: '<S791>/Switch1' */
    }

    /* End of Switch: '<S791>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTAIB_b_RadFan_FA' */
    (void)Rte_Read_VeTAIB_b_RadFan_FA_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAIB_Pct_RadFanSts_DC' */
    (void)Rte_Read_VeTAIB_Pct_RadFanSts_DC_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAIB_b_HghRfrgtPresSnsr_FA' */
    (void)Rte_Read_VeTAIB_b_HghRfrgtPresSnsr_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTAIB_p_HghRfrgtPresSnsr' */
    (void)Rte_Read_VeTAIB_p_HghRfrgtPresSnsr_Value(&VeTAIR_T_FtEvapTmp_Tgt);

    /* Inport: '<Root>/VePLTR_b_RadFanHndShk_dsbld' */
    (void)Rte_Read_VePLTR_b_RadFanHndShk_dsbld_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TAIR_MedTEH'
     */
    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S888>/Switch1' incorporates:
     *  Constant: '<S917>/Calib'
     */
    if (KeTAIR_b_HghRfrgtPres_SD)
    {
        /* Switch: '<S888>/Switch1' incorporates:
         *  Constant: '<S918>/Calib'
         */
        VeTAIR_p_HghRfrgtPres_AD = KeTAIR_p_HghRfrgtPres_D;
    }
    else
    {
        /* Switch: '<S888>/Switch1' */
        VeTAIR_p_HghRfrgtPres_AD = VeTAIR_T_FtEvapTmp_Tgt;
    }

    /* End of Switch: '<S888>/Switch1' */

    /* Switch: '<S961>/Switch1' incorporates:
     *  Constant: '<S967>/Calib'
     */
    if (KeTAIR_b_FtEvapTmp_FA_SD)
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S966>/Calib'
         */
        VeTAIR_b_FtEvapTmpB4Sel_FA = KeTAIR_b_FtEvapTmp_FA_D;
    }
    else
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S207>/VeTAIR_b_FtEvapTmpFA_read'
         */
        VeTAIR_b_FtEvapTmpB4Sel_FA =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_FtEvapTmpFA_write_IRV();
    }

    /* End of Switch: '<S961>/Switch1' */

    /* Switch: '<S961>/Switch' incorporates:
     *  Constant: '<S968>/Calib'
     *  Switch: '<S961>/Switch2'
     */
    if (KeTAIR_b_FtEvapTmp_SD)
    {
        /* Switch: '<S961>/Switch' incorporates:
         *  Constant: '<S964>/Calib'
         */
        VeTAIR_T_FtEvapTmpB4Sel = KeTAIR_T_FtEvapTmp_D;
    }
    else if (VeTAIR_b_FtEvapTmpB4Sel_FA)
    {
        /* Switch: '<S961>/Switch2' incorporates:
         *  Constant: '<S965>/Calib'
         *  Switch: '<S961>/Switch'
         */
        VeTAIR_T_FtEvapTmpB4Sel = KeTAIR_T_FtEvapTmp_FailSafe;
    }
    else
    {
        /* Switch: '<S961>/Switch' incorporates:
         *  Merge: '<Root>/Merge_7'
         *  SignalConversion generated from: '<S207>/VeTAIR_T_FtEvapTmp_read'
         */
        VeTAIR_T_FtEvapTmpB4Sel =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_T_FtEvapTmp_write_IRV();
    }

    /* End of Switch: '<S961>/Switch' */

    /* Switch: '<S962>/Switch1' incorporates:
     *  Constant: '<S972>/Calib'
     */
    if (KeTAIR_b_FtEvapTmp_P1C_FA_SD)
    {
        /* Switch: '<S962>/Switch1' incorporates:
         *  Constant: '<S971>/Calib'
         */
        VeTAIR_b_FtEvapTmp_P1C_FA = KeTAIR_b_FtEvapTmp_P1C_FA_D;
    }
    else
    {
        /* Switch: '<S962>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_10'
         *  SignalConversion generated from: '<S207>/VeTAIR_b_FtEvapTmp_P1CFA_read'
         */
        VeTAIR_b_FtEvapTmp_P1C_FA =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_FtEvapTmp_P1CFA_write_IRV();
    }

    /* End of Switch: '<S962>/Switch1' */

    /* Switch: '<S962>/Switch' incorporates:
     *  Constant: '<S973>/Calib'
     *  Switch: '<S962>/Switch2'
     */
    if (KeTAIR_b_FtEvapTmp_P1C_SD)
    {
        /* Switch: '<S962>/Switch' incorporates:
         *  Constant: '<S969>/Calib'
         */
        VeTAIR_T_FtEvapTmp_P1C = KeTAIR_T_FtEvapTmp_P1C_D;
    }
    else if (VeTAIR_b_FtEvapTmp_P1C_FA)
    {
        /* Switch: '<S962>/Switch2' incorporates:
         *  Constant: '<S970>/Calib'
         *  Switch: '<S962>/Switch'
         */
        VeTAIR_T_FtEvapTmp_P1C = KeTAIR_T_FtEvapTmp_P1C_FailSafe;
    }
    else
    {
        /* Switch: '<S962>/Switch' incorporates:
         *  Merge: '<Root>/Merge_9'
         *  SignalConversion generated from: '<S207>/VeTAIR_T_FtEvapTmp_P1C_read'
         */
        VeTAIR_T_FtEvapTmp_P1C =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_T_FtEvapTmp_P1C_write_IRV();
    }

    /* End of Switch: '<S962>/Switch' */

    /* Switch: '<S945>/Switch1' incorporates:
     *  Constant: '<S958>/Calib'
     */
    if (KeTAIR_b_FtEvapTmp_Tgt_FA_SD)
    {
        /* Switch: '<S945>/Switch1' incorporates:
         *  Constant: '<S957>/Calib'
         */
        VeTAIR_b_FtEvapTmp_TgtFA = KeTAIR_b_FtEvapTmp_Tgt_FA_D;
    }
    else
    {
        /* Switch: '<S945>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_6'
         *  SignalConversion generated from: '<S207>/VeTAIR_b_FtEvapTmp_TgtFA_read'
         */
        VeTAIR_b_FtEvapTmp_TgtFA =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_FtEvapTmp_TgtFA_write_IRV();
    }

    /* End of Switch: '<S945>/Switch1' */

    /* Switch: '<S880>/Switch' incorporates:
     *  Constant: '<S890>/Calib'
     *  Constant: '<S891>/Calib'
     *  Merge: '<Root>/Merge_18'
     *  SignalConversion generated from: '<S207>/VeTAIR_I_ACCElecCurr_read'
     */
    if (KeTAIR_b_ACCElecCurr_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_I_ACCElecCurr_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_I_ACCElecCurr_write_IRV();
    }

    /* End of Switch: '<S880>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_I_ACCElecCurr' incorporates:
     *  SignalConversion generated from: '<S207>/ACCElecCurr'
     */
    (void)Rte_Write_VeTAIR_I_ACCElecCurr_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S881>/Switch1' incorporates:
     *  Constant: '<S892>/Calib'
     *  Constant: '<S895>/Calib'
     *  Merge: '<Root>/Merge_20'
     *  SignalConversion generated from: '<S207>/VeTAIR_P_ACCompElec_Pwr_read'
     */
    if (KeTAIR_b_ACCompElec_Pwr_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_P_ACCompElec_Pwr_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_P_ACCompElec_Pwr_write_IRV();
    }

    /* End of Switch: '<S881>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_P_AC_CompElecPwr' incorporates:
     *  SignalConversion generated from: '<S207>/ACCompElec_Pwr_AftDial'
     */
    (void)Rte_Write_VeTAIR_P_AC_CompElecPwr_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S881>/Switch' incorporates:
     *  Constant: '<S893>/Calib'
     *  Constant: '<S894>/Calib'
     *  Merge: '<Root>/Merge_19'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_ACCompElec_PwrFA_read'
     */
    if (KeTAIR_b_ACCompElec_Pwr_FA_SD)
    {
        tmp = KeTAIR_b_ACCompElec_Pwr_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_ACCompElec_PwrFA_write_IRV();
    }

    /* End of Switch: '<S881>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AC_CompElecPwr_FA' incorporates:
     *  SignalConversion generated from: '<S207>/ACCompElec_Pwr_FA'
     */
    (void)Rte_Write_VeTAIR_b_AC_CompElecPwr_FA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S882>/Switch' incorporates:
     *  Constant: '<S896>/Calib'
     *  Constant: '<S897>/Calib'
     *  Merge: '<Root>/Merge_29'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_ACCompReq_read'
     */
    if (KeTAIR_b_ACCompReq_SD)
    {
        tmp = KeTAIR_b_ACCompReq_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_ACCompReq_write_IRV();
    }

    /* End of Switch: '<S882>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_ACCompReq' incorporates:
     *  SignalConversion generated from: '<S207>/ACComp_Req'
     */
    (void)Rte_Write_VeTAIR_b_ACCompReq_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S943>/Switch' incorporates:
     *  Constant: '<S947>/Calib'
     *  Constant: '<S950>/Calib'
     *  Merge: '<Root>/Merge_1'
     *  SignalConversion generated from: '<S207>/VeTAIR_T_CompBoardTemp_read'
     */
    if (KeTAIR_b_CompBoardTemp_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_T_CompBoardTemp_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_T_CompBoardTemp_write_IRV();
    }

    /* End of Switch: '<S943>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_CompBoardTemp' incorporates:
     *  SignalConversion generated from: '<S207>/CompBoardTemp'
     */
    (void)Rte_Write_VeTAIR_T_CompBoardTemp_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S943>/Switch1' incorporates:
     *  Constant: '<S948>/Calib'
     *  Constant: '<S949>/Calib'
     *  Merge: '<Root>/Merge_2'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_CompBoardTempFA_read'
     */
    if (KeTAIR_b_CompBoardTemp_FA_SD)
    {
        tmp = KeTAIR_b_CompBoardTemp_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_CompBoardTempFA_write_IRV();
    }

    /* End of Switch: '<S943>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_CompBoardTemp_FA' incorporates:
     *  SignalConversion generated from: '<S207>/CompBoardTemp_FA'
     */
    (void)Rte_Write_VeTAIR_b_CompBoardTemp_FA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S883>/Switch' incorporates:
     *  Constant: '<S898>/Calib'
     *  Constant: '<S899>/Calib'
     *  Merge: '<Root>/Merge_21'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_CompFltStat_read'
     */
    if (KeTAIR_b_CompFltStat_SD)
    {
        tmp_0 = KeTAIR_e_CompFltStat_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_CompFltStat_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_CompFltStat' incorporates:
     *  SignalConversion generated from: '<S207>/CompFltStat'
     *  Switch: '<S883>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_CompFltStat_Value(tmp_0);

    /* Switch: '<S884>/Switch1' incorporates:
     *  Constant: '<S900>/Calib'
     *  Constant: '<S903>/Calib'
     *  Merge: '<Root>/Merge_22'
     *  SignalConversion generated from: '<S207>/VeTAIR_U_CompHVInput_read'
     */
    if (KeTAIR_b_CompHVInp_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_U_CompHVInp_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_U_CompHVInput_write_IRV();
    }

    /* End of Switch: '<S884>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_U_CompHVInp' incorporates:
     *  SignalConversion generated from: '<S207>/CompHVInput'
     */
    (void)Rte_Write_VeTAIR_U_CompHVInp_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S884>/Switch' incorporates:
     *  Constant: '<S901>/Calib'
     *  Constant: '<S902>/Calib'
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_CompHVInputFA_read'
     */
    if (KeTAIR_b_CompHVInp_FA_SD)
    {
        tmp = KeTAIR_b_CompHVInp_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_CompHVInputFA_write_IRV();
    }

    /* End of Switch: '<S884>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_CompHVInp_FA' incorporates:
     *  SignalConversion generated from: '<S207>/CompHVInput_FA'
     */
    (void)Rte_Write_VeTAIR_b_CompHVInp_FA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S944>/Switch1' incorporates:
     *  Constant: '<S951>/Calib'
     *  Constant: '<S954>/Calib'
     *  Merge: '<Root>/Merge_3'
     *  SignalConversion generated from: '<S207>/VeTAIR_T_CompIGBTTemp_read'
     */
    if (KeTAIR_b_CompIGBTTemp_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_T_CompIGBTTemp_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_T_CompIGBTTemp_write_IRV();
    }

    /* End of Switch: '<S944>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_CompIGBTTemp' incorporates:
     *  SignalConversion generated from: '<S207>/CompIGBTTemp'
     */
    (void)Rte_Write_VeTAIR_T_CompIGBTTemp_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S944>/Switch' incorporates:
     *  Constant: '<S952>/Calib'
     *  Constant: '<S953>/Calib'
     *  Merge: '<Root>/Merge_4'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_CompIGBTTempFA_read'
     */
    if (KeTAIR_b_CompIGBTTemp_FA_SD)
    {
        tmp = KeTAIR_b_CompIGBTTemp_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_CompIGBTTempFA_write_IRV();
    }

    /* End of Switch: '<S944>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_CompIGBTTemp_FA' incorporates:
     *  SignalConversion generated from: '<S207>/CompIGBTTemp_FA'
     */
    (void)Rte_Write_VeTAIR_b_CompIGBTTemp_FA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S885>/Switch' incorporates:
     *  Constant: '<S906>/Calib'
     *  Constant: '<S907>/Calib'
     *  Merge: '<Root>/Merge_24'
     *  SignalConversion generated from: '<S207>/VeTAIR_n_CompSpdFdb_read'
     */
    if (KeTAIR_b_CompSpdFdb_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_n_CompSpdFdb_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_n_CompSpdFdb_write_IRV();
    }

    /* End of Switch: '<S885>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_n_CompSpdFdb' incorporates:
     *  SignalConversion generated from: '<S207>/CompSpdFdb_AftDial'
     */
    (void)Rte_Write_VeTAIR_n_CompSpdFdb_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S885>/Switch1' incorporates:
     *  Constant: '<S904>/Calib'
     *  Constant: '<S905>/Calib'
     *  Merge: '<Root>/Merge_25'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_CompSpdFdbFA_read'
     */
    if (KeTAIR_b_CompSpdFdb_FA_SD)
    {
        tmp = KeTAIR_b_CompSpdFdb_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_CompSpdFdbFA_write_IRV();
    }

    /* End of Switch: '<S885>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_CompSpdFdb_FA' incorporates:
     *  SignalConversion generated from: '<S207>/CompSpdFdb_FA'
     */
    (void)Rte_Write_VeTAIR_b_CompSpdFdb_FA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S886>/Switch' incorporates:
     *  Constant: '<S908>/Calib'
     *  Constant: '<S909>/Calib'
     *  Merge: '<Root>/Merge_26'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_CompSpdIncrReq_read'
     */
    if (KeTAIR_b_CompSpdIncrReq_SD)
    {
        tmp = KeTAIR_b_CompSpdIncrReq_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_CompSpdIncrReq_write_IRV();
    }

    /* End of Switch: '<S886>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_CompSpdIncrReq' incorporates:
     *  SignalConversion generated from: '<S207>/CompSpdIncrReq'
     */
    (void)Rte_Write_VeTAIR_b_CompSpdIncrReq_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S867>/Switch' incorporates:
     *  Constant: '<S874>/Calib'
     *  Constant: '<S876>/Calib'
     *  Merge: '<Root>/Merge_33'
     *  SignalConversion generated from: '<S207>/VeTAIF_e_CompSpdTgt_IO_CntrlSt_read'
     */
    if (KeTAIR_b_CompSpdTgt_IO_Cnt_SD)
    {
        tmp_1 = KeTAIR_e_CompSpdTgt_IO_Cnt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TAIR_MedTEH_VeTAIF_e_CompSpdTgt_IO_CntrlSt_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTAIR_e_CompSpdTgt_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S207>/CompSpdTgt_IO_Cnt_AD'
     *  Switch: '<S867>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_CompSpdTgt_IO_CntrlSt_Value(tmp_1);

    /* Switch: '<S887>/Switch1' incorporates:
     *  Constant: '<S910>/Calib'
     *  Constant: '<S911>/Calib'
     *  Merge: '<Root>/Merge_27'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_CompStat_read'
     */
    if (KeTAIR_b_CompStat_SD)
    {
        tmp_2 = KeTAIR_e_CompStat_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_CompStat_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_CompStat' incorporates:
     *  SignalConversion generated from: '<S207>/CompStat'
     *  Switch: '<S887>/Switch1'
     */
    (void)Rte_Write_VeTAIR_e_CompStat_Value(tmp_2);

    /* Switch: '<S867>/Switch1' incorporates:
     *  Constant: '<S875>/Calib'
     *  Constant: '<S877>/Calib'
     *  Merge: '<Root>/Merge_34'
     *  SignalConversion generated from: '<S207>/VeTAIF_n_CompSpdTgt_read'
     */
    if (KeTAIR_b_DVC_CompSpdTgt_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_n_DVC_CompSpdTgt_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIF_n_CompSpdTgt_write_IRV();
    }

    /* End of Switch: '<S867>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_n_DVC_CompSpdTgt' incorporates:
     *  SignalConversion generated from: '<S207>/DVC_CompSpdTgt_AD'
     */
    (void)Rte_Write_VeTAIR_n_DVC_CompSpdTgt_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/SignalOverrides'
     */
    /* Switch: '<S791>/Switch5' incorporates:
     *  Constant: '<S986>/Calib'
     *  Constant: '<S991>/Calib'
     *  Merge: '<Root>/Merge_75'
     *  SignalConversion generated from: '<S207>/VeTAIF_Pct_RadFanCmd_read'
     */
    if (KeTAIR_b_DVC_RadFanCmd_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_DVC_RadFanCmd_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIF_Pct_RadFanCmd_write_IRV();
    }

    /* End of Switch: '<S791>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_DVC_RadFanCmd' incorporates:
     *  SignalConversion generated from: '<S207>/DVC_RadFan_Cmd_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_DVC_RadFanCmd_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/SignalOverrides'
     */
    /* Switch: '<S791>/Switch4' incorporates:
     *  Constant: '<S1003>/Calib'
     *  Constant: '<S1004>/Calib'
     *  Merge: '<Root>/Merge_76'
     *  SignalConversion generated from: '<S207>/VeTAIF_e_RadFanCmd_IO_CntrlSt_read'
     */
    if (KeTAIR_b_RadFan_IO_Cnt_SD)
    {
        tmp_1 = KeTAIR_e_RadFan_IO_Cnt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TAIR_MedTEH_VeTAIF_e_RadFanCmd_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_RadFab_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S207>/DVC_RadFan_IO_AD'
     *  Switch: '<S791>/Switch4'
     */
    (void)Rte_Write_VeTAIR_e_RadFab_IO_Cnt_Value(tmp_1);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S873>/Switch6' incorporates:
     *  Constant: '<S976>/Calib'
     *  Constant: '<S977>/Calib'
     *  Merge: '<Root>/Merge_40'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_ECM_AC_ClutchStsFA_read'
     */
    if (KeTAIR_b_ECM_AC_ClutchStsFA_SD)
    {
        tmp = KeTAIR_b_ECM_AC_ClutchStsFA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_ECM_AC_ClutchStsFA_write_IRV();
    }

    /* End of Switch: '<S873>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_ECM_AC_ClutchStsFA' incorporates:
     *  SignalConversion generated from: '<S207>/ECM_AC_ClutchStsFA_AD'
     */
    (void)Rte_Write_VeTAIR_b_ECM_AC_ClutchStsFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S873>/Switch5' incorporates:
     *  Constant: '<S978>/Calib'
     *  Constant: '<S985>/Calib'
     *  Merge: '<Root>/Merge_39'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_ECM_AC_ClutchSts_read'
     */
    if (KeTAIR_b_ECM_AC_ClutchSts_SD)
    {
        tmp_3 = KeTAIR_e_ECM_AC_ClutchSts_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_ECM_AC_ClutchSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_ECM_AC_ClutchSts' incorporates:
     *  SignalConversion generated from: '<S207>/ECM_AC_ClutchSts_AD'
     *  Switch: '<S873>/Switch5'
     */
    (void)Rte_Write_VeTAIR_e_ECM_AC_ClutchSts_Value(tmp_3);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/SignalOverrides'
     */
    /* Switch: '<S791>/Switch9' incorporates:
     *  Constant: '<S993>/Calib'
     *  Constant: '<S994>/Calib'
     *  Merge: '<Root>/Merge_81'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_ECM_AirflowRequestFA_read'
     */
    if (KeTAIR_b_ECM_AirflowRequestFA_SD)
    {
        tmp = KeTAIR_b_ECM_AirflowRequestFA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_ECM_AirflowRequestFA_write_IRV();
    }

    /* End of Switch: '<S791>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_ECM_AirflowRequestFA' incorporates:
     *  SignalConversion generated from: '<S207>/ECM_AirflowRequestFA_AD'
     */
    (void)Rte_Write_VeTAIR_b_ECM_AirflowRequestFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/SignalOverrides'
     */
    /* Switch: '<S791>/Switch8' incorporates:
     *  Constant: '<S987>/Calib'
     *  Constant: '<S995>/Calib'
     *  Merge: '<Root>/Merge_82'
     *  SignalConversion generated from: '<S207>/VeTAIR_Pct_ECM_AirflowRequest_read'
     */
    if (KeTAIR_b_ECM_AirflowRequest_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_ECM_AirflowRequest_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_Pct_ECM_AirflowRequest_write_IRV();
    }

    /* End of Switch: '<S791>/Switch8' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_ECM_AirflowRequest' incorporates:
     *  SignalConversion generated from: '<S207>/ECM_AirflowRequest_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_ECM_AirflowRequest_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* Outport: '<Root>/VeTAIR_Pct_ECM_RadFanReq' incorporates:
     *  SignalConversion generated from: '<S207>/ECM_RadFanReq_AD'
     */
    (void)Rte_Write_VeTAIR_Pct_ECM_RadFanReq_Value(VeTAIR_Pct_ECM_RadFanReq);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S927>/Switch1' incorporates:
     *  Constant: '<S931>/Calib'
     *  Constant: '<S934>/Calib'
     *  Merge: '<Root>/Merge_15'
     *  SignalConversion generated from: '<S207>/VeTAIR_Pct_FrtBlwrCmd_read'
     */
    if (KeTAIR_b_FtBlwrCmd_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_FtBlwrCmd_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_Pct_FrtBlwrCmd_write_IRV();
    }

    /* End of Switch: '<S927>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_FrtBlwrCmd' incorporates:
     *  SignalConversion generated from: '<S207>/FtBlwrCmd_AftDial'
     */
    (void)Rte_Write_VeTAIR_Pct_FrtBlwrCmd_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S927>/Switch' incorporates:
     *  Constant: '<S932>/Calib'
     *  Constant: '<S933>/Calib'
     *  Merge: '<Root>/Merge_16'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_FrtBlwrCmdFA_read'
     */
    if (KeTAIR_b_FtBlwrCmd_FA_SD)
    {
        tmp = KeTAIR_b_FtBlwrCmd_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_FrtBlwrCmdFA_write_IRV();
    }

    /* End of Switch: '<S927>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_FrtBlwrCmd_FA' incorporates:
     *  SignalConversion generated from: '<S207>/FtBlwrCmd_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_FrtBlwrCmd_FA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S960>/Switch1' incorporates:
     *  Constant: '<S963>/Calib'
     */
    if (KeTAIR_b_FtEvapTmp_Slct)
    {
        /* Outport: '<Root>/VeTAIR_b_FtEvapTmp_FA' incorporates:
         *  SignalConversion generated from: '<S207>/FtEvapTmp_FA'
         */
        (void)Rte_Write_VeTAIR_b_FtEvapTmp_FA_Value(VeTAIR_b_FtEvapTmpB4Sel_FA);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_b_FtEvapTmp_FA' incorporates:
         *  SignalConversion generated from: '<S207>/FtEvapTmp_FA'
         */
        (void)Rte_Write_VeTAIR_b_FtEvapTmp_FA_Value(VeTAIR_b_FtEvapTmp_P1C_FA);
    }

    /* End of Switch: '<S960>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_FtEvapTmp_TgtFA' incorporates:
     *  SignalConversion generated from: '<S207>/FtEvapTmp_Tgt_FA'
     */
    (void)Rte_Write_VeTAIR_b_FtEvapTmp_TgtFA_Value(VeTAIR_b_FtEvapTmp_TgtFA);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S960>/Switch' incorporates:
     *  Constant: '<S963>/Calib'
     */
    if (KeTAIR_b_FtEvapTmp_Slct)
    {
        /* Outport: '<Root>/VeTAIR_T_FtEvapTmp' incorporates:
         *  SignalConversion generated from: '<S207>/FtEvap_Tmp'
         */
        (void)Rte_Write_VeTAIR_T_FtEvapTmp_Value(VeTAIR_T_FtEvapTmpB4Sel);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_T_FtEvapTmp' incorporates:
         *  SignalConversion generated from: '<S207>/FtEvap_Tmp'
         */
        (void)Rte_Write_VeTAIR_T_FtEvapTmp_Value(VeTAIR_T_FtEvapTmp_P1C);
    }

    /* End of Switch: '<S960>/Switch' */

    /* Switch: '<S945>/Switch' incorporates:
     *  Constant: '<S955>/Calib'
     *  Constant: '<S959>/Calib'
     *  Merge: '<Root>/Merge_5'
     *  SignalConversion generated from: '<S207>/VeTAIR_T_FtEvapTmp_Tgt_read'
     *  Switch: '<S945>/Switch2'
     */
    if (KeTAIR_b_FtEvapTmp_Tgt_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_T_FtEvapTmp_Tgt_D;
    }
    else if (VeTAIR_b_FtEvapTmp_TgtFA)
    {
        /* Switch: '<S945>/Switch2' incorporates:
         *  Constant: '<S956>/Calib'
         */
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_T_FtEvapTmp_Tgt_FailSafe;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_T_FtEvapTmp_Tgt_write_IRV();
    }

    /* End of Switch: '<S945>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_FtEvapTmp_Tgt' incorporates:
     *  SignalConversion generated from: '<S207>/FtEvap_Tmp_Tgt'
     */
    (void)Rte_Write_VeTAIR_T_FtEvapTmp_Tgt_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S873>/Switch1' incorporates:
     *  Constant: '<S974>/Calib'
     *  Constant: '<S981>/Calib'
     *  Merge: '<Root>/Merge_36'
     *  SignalConversion generated from: '<S207>/VeTAIR_I_ECVD_HVACCabinReq_read'
     */
    if (KeTAIR_b_HVAC_Cabin_CurrentReq_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_I_HVAC_Cabin_CurrentReq_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_I_ECVD_HVACCabinReq_write_IRV();
    }

    /* End of Switch: '<S873>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_I_HVAC_Cabin_CurrentReq' incorporates:
     *  SignalConversion generated from: '<S207>/HVAC_Cabin_CurrentReq_AD'
     */
    (void)Rte_Write_VeTAIR_I_HVAC_Cabin_CurrentReq_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S873>/Switch2' incorporates:
     *  Constant: '<S979>/Calib'
     *  Constant: '<S980>/Calib'
     *  Merge: '<Root>/Merge_37'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_ECVD_HVACCabinReqFA_read'
     */
    if (KeTAIR_b_HVAC_Cabin_CurrentReq_FA_SD)
    {
        tmp = KeTAIR_b_HVAC_Cabin_CurrentReq_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_ECVD_HVACCabinReqFA_write_IRV();
    }

    /* End of Switch: '<S873>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HVAC_Cabin_CurrentReqFA' incorporates:
     *  SignalConversion generated from: '<S207>/HVAC_Cabin_CurrentReq_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_HVAC_Cabin_CurrentReqFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S873>/Switch3' incorporates:
     *  Constant: '<S975>/Calib'
     *  Constant: '<S984>/Calib'
     *  Merge: '<Root>/Merge_35'
     *  SignalConversion generated from: '<S207>/VeTAIR_I_ECVD_HVACCurrentAct_read'
     */
    if (KeTAIR_b_HVAC_ECVD_CurrentAct_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_I_HVAC_ECVD_CurrentAct_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_I_ECVD_HVACCurrentAct_write_IRV();
    }

    /* End of Switch: '<S873>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_I_HVAC_ECVD_CurrentAct' incorporates:
     *  SignalConversion generated from: '<S207>/HVAC_ECVD_CurrentAct_AD'
     */
    (void)Rte_Write_VeTAIR_I_HVAC_ECVD_CurrentAct_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S873>/Switch4' incorporates:
     *  Constant: '<S982>/Calib'
     *  Constant: '<S983>/Calib'
     *  Merge: '<Root>/Merge_38'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_ECVD_HVACCurrentActFA_read'
     */
    if (KeTAIR_b_HVAC_ECVD_CurrentAct_FA_SD)
    {
        tmp = KeTAIR_b_HVAC_ECVD_CurrentAct_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_ECVD_HVACCurrentActFA_write_IRV();
    }

    /* End of Switch: '<S873>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HVAC_ECVD_CurrentActFA' incorporates:
     *  SignalConversion generated from: '<S207>/HVAC_ECVD_CurrentAct_FA_AD'
     */
    (void)Rte_Write_VeTAIR_b_HVAC_ECVD_CurrentActFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S888>/Switch2' incorporates:
     *  Constant: '<S913>/Calib'
     *  Constant: '<S914>/Calib'
     *  Merge: '<Root>/Merge_30'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_HghRfrgtPresFailStsFA_read'
     */
    if (KeTAIR_b_HghRfrgtPresFailSts_SD)
    {
        tmp = KeTAIR_b_HghRfrgtPresFailSts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_HghRfrgtPresFailStsFA_write_IRV();
    }

    /* End of Switch: '<S888>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_HghRfrgtPresFailSts' incorporates:
     *  SignalConversion generated from: '<S207>/HghRfrgtPresFailSts_AD'
     */
    (void)Rte_Write_VeTAIR_b_HghRfrgtPresFailSts_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Outport: '<Root>/VeTAIR_p_HghRfrgtPres' incorporates:
     *  Constant: '<S912>/Calib'
     *  Product: '<S888>/Product'
     *  SignalConversion generated from: '<S207>/HghRfrgtPres_AftDial'
     */
    (void)Rte_Write_VeTAIR_p_HghRfrgtPres_Value(HeTAIR_Cf_PresToBar *
        VeTAIR_p_HghRfrgtPres_AD);

    /* Switch: '<S888>/Switch' incorporates:
     *  Constant: '<S916>/Calib'
     */
    if (KeTAIR_b_HghRfrgtPres_FA_SD)
    {
        /* Outport: '<Root>/VeTAIR_b_HghRfrgtPres_FA' incorporates:
         *  Constant: '<S915>/Calib'
         *  SignalConversion generated from: '<S207>/HghRfrgtPres_FA'
         */
        (void)Rte_Write_VeTAIR_b_HghRfrgtPres_FA_Value
            (KeTAIR_b_HghRfrgtPres_FA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_b_HghRfrgtPres_FA' incorporates:
         *  SignalConversion generated from: '<S207>/HghRfrgtPres_FA'
         */
        (void)Rte_Write_VeTAIR_b_HghRfrgtPres_FA_Value(tmpRead_0);
    }

    /* End of Switch: '<S888>/Switch' */

    /* Switch: '<S928>/Switch1' incorporates:
     *  Constant: '<S935>/Calib'
     *  Constant: '<S936>/Calib'
     *  Merge: '<Root>/Merge_14'
     *  SignalConversion generated from: '<S207>/VeTAIR_T_HtrCoreTmp_Tgt_read'
     */
    if (KeTAIR_b_HtrCoreTmp_Tgt_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_T_HtrCoreTmp_Tgt_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_T_HtrCoreTmp_Tgt_write_IRV();
    }

    /* End of Switch: '<S928>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_HtrCoreTmp_Tgt' incorporates:
     *  SignalConversion generated from: '<S207>/HtrCoreTmp_Tgt_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_HtrCoreTmp_Tgt_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/SignalOverrides'
     */
    /* Switch: '<S791>/Switch6' incorporates:
     *  Constant: '<S999>/Calib'
     */
    if (KeTAIR_b_RadFanHandshake_disbld_SD)
    {
        /* Outport: '<Root>/VeTAIR_b_RadFanHndShk_dsbld' incorporates:
         *  Constant: '<S992>/Calib'
         *  SignalConversion generated from: '<S207>/RadFanHandshake_disbld_AD'
         */
        (void)Rte_Write_VeTAIR_b_RadFanHndShk_dsbld_Value
            (KeTAIR_b_DVC_RadFanHandshake_disbld_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_b_RadFanHndShk_dsbld' incorporates:
         *  SignalConversion generated from: '<S207>/RadFanHandshake_disbld_AD'
         */
        (void)Rte_Write_VeTAIR_b_RadFanHndShk_dsbld_Value(tmpRead);
    }

    /* End of Switch: '<S791>/Switch6' */

    /* Switch: '<S791>/Switch3' incorporates:
     *  Constant: '<S1002>/Calib'
     */
    if (KeTAIR_b_RadFanSts_SD)
    {
        /* Outport: '<Root>/VeTAIR_Pct_RadFanSts' incorporates:
         *  Constant: '<S990>/Calib'
         *  SignalConversion generated from: '<S207>/RadFanSts_AD'
         */
        (void)Rte_Write_VeTAIR_Pct_RadFanSts_Value(KeTAIR_Pct_RadFanSts_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_Pct_RadFanSts' incorporates:
         *  SignalConversion generated from: '<S207>/RadFanSts_AD'
         */
        (void)Rte_Write_VeTAIR_Pct_RadFanSts_Value(tmpRead_1);
    }

    /* End of Switch: '<S791>/Switch3' */

    /* Switch: '<S791>/Switch7' incorporates:
     *  Constant: '<S1001>/Calib'
     */
    if (KeTAIR_b_RadFanStsFA_SD)
    {
        /* Outport: '<Root>/VeTAIR_b_RadFanSts_FA' incorporates:
         *  Constant: '<S1000>/Calib'
         *  SignalConversion generated from: '<S207>/RadFanSts_FA_AD'
         */
        (void)Rte_Write_VeTAIR_b_RadFanSts_FA_Value(KeTAIR_b_RadFanStsFA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_b_RadFanSts_FA' incorporates:
         *  SignalConversion generated from: '<S207>/RadFanSts_FA_AD'
         */
        (void)Rte_Write_VeTAIR_b_RadFanSts_FA_Value(tmpRead_2);
    }

    /* End of Switch: '<S791>/Switch7' */

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S870>/Switch1' incorporates:
     *  Constant: '<S919>/Calib'
     *  Constant: '<S920>/Calib'
     *  Merge: '<Root>/Merge_213'
     *  SignalConversion generated from: '<S207>/RearCabinFanStsFA_AM'
     */
    if (KeTAIR_b_RearCabinFanStsFA_SD)
    {
        tmp = KeTAIR_b_RearCabinFanStsFA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_RearCabinFanStsFA_write_IRV();
    }

    /* End of Switch: '<S870>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_RearCabinFanStsFA' incorporates:
     *  SignalConversion generated from: '<S207>/RearCabinFanStsFA_AD'
     */
    (void)Rte_Write_VeTAIR_b_RearCabinFanStsFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S870>/Switch7' incorporates:
     *  Constant: '<S921>/Calib'
     *  Constant: '<S926>/Calib'
     *  Merge: '<Root>/Merge_214'
     *  SignalConversion generated from: '<S207>/RearCabinFanSts_AM'
     */
    if (KeTAIR_b_RearCabinFanSts_SD)
    {
        tmp_4 = KeTAIR_y_RearCabinFanSts_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_y_RearCabinFanSts_write_IRV();
    }

    /* End of Switch: '<S870>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_y_RearCabinFanSts' incorporates:
     *  SignalConversion generated from: '<S207>/RearCabinFanSts_AD'
     */
    (void)Rte_Write_VeTAIR_y_RearCabinFanSts_Value(tmp_4);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S870>/Switch8' incorporates:
     *  Constant: '<S922>/Calib'
     *  Constant: '<S923>/Calib'
     *  Merge: '<Root>/Merge_155'
     *  SignalConversion generated from: '<S207>/RearDefrostStsFA_AM'
     */
    if (KeTAIR_b_RearDefrostStsFA_SD)
    {
        tmp = KeTAIR_b_RearDefrostStsFA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_EBL_StatFA_write_IRV();
    }

    /* End of Switch: '<S870>/Switch8' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_RearDefrostStsFA' incorporates:
     *  SignalConversion generated from: '<S207>/RearDefrostStsFA_AD'
     */
    (void)Rte_Write_VeTAIR_b_RearDefrostStsFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S870>/Switch' incorporates:
     *  Constant: '<S924>/Calib'
     *  Constant: '<S925>/Calib'
     *  Merge: '<Root>/Merge_154'
     *  SignalConversion generated from: '<S207>/RearDefrostSts_AM'
     */
    if (KeTAIR_b_RearDefrostSts_SD)
    {
        tmp_5 = KeTAIR_e_RearDefrostSts_D;
    }
    else
    {
        tmp_5 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_RearDefrostSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_RearDefrostSts' incorporates:
     *  SignalConversion generated from: '<S207>/RearDefrostSts_AD'
     *  Switch: '<S870>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_RearDefrostSts_Value(tmp_5);

    /* Switch: '<S929>/Switch1' incorporates:
     *  Constant: '<S937>/Calib'
     *  Constant: '<S938>/Calib'
     *  Merge: '<Root>/Merge_11'
     *  SignalConversion generated from: '<S207>/VeTAIR_Pct_RrBlwrCmd_read'
     */
    if (KeTAIR_b_RrBlwrCmd_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_RrBlwrCmd_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_Pct_RrBlwrCmd_write_IRV();
    }

    /* End of Switch: '<S929>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_RrBlwrCmd' incorporates:
     *  SignalConversion generated from: '<S207>/RrBlwrCmd_AftDial'
     */
    (void)Rte_Write_VeTAIR_Pct_RrBlwrCmd_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch11' incorporates:
     *  Constant: '<S795>/Calib'
     *  Constant: '<S804>/Calib'
     *  Merge: '<Root>/Merge_44'
     *  SignalConversion generated from: '<S207>/VeTAIR_Pct_AGS2_CurrPos_CAN_read'
     *  Switch: '<S792>/Switch15'
     */
    if (KeTAIR_b_AGS2_CurrPos_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_AGS2_CurrPos_D;
    }
    else if (rtb_TmpSignalConversionAtVeT_pn)
    {
        /* Switch: '<S792>/Switch15' incorporates:
         *  Constant: '<S796>/Calib'
         */
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_AGS2_CurrPos_Dflt;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_Pct_AGS2_CurrPos_CAN_write_IRV();
    }

    /* End of Switch: '<S792>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_AGS2_CurrPos' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_Pct_AGS2_CurrPos'
     */
    (void)Rte_Write_VeTAIR_Pct_AGS2_CurrPos_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch11' incorporates:
     *  Constant: '<S824>/Calib'
     *  Constant: '<S833>/Calib'
     *  Merge: '<Root>/Merge_58'
     *  SignalConversion generated from: '<S207>/VeTAIR_Pct_AGS_CurrPos_CAN_read'
     *  Switch: '<S793>/Switch15'
     */
    if (KeTAIR_b_AGS_CurrPos_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_AGS_CurrPos_D;
    }
    else if (rtb_TmpSignalConversionAtVe_ibo)
    {
        /* Switch: '<S793>/Switch15' incorporates:
         *  Constant: '<S825>/Calib'
         */
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_Pct_AGS_CurrPos_Dflt;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_Pct_AGS_CurrPos_CAN_write_IRV();
    }

    /* End of Switch: '<S793>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_Pct_AGS_CurrPos' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_Pct_AGS_CurrPos'
     */
    (void)Rte_Write_VeTAIR_Pct_AGS_CurrPos_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch3' incorporates:
     *  Constant: '<S797>/Calib'
     *  Constant: '<S798>/Calib'
     *  Merge: '<Root>/Merge_41'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_BoostSts_read'
     */
    if (KeTAIR_b_AGS2_BoostSts_SD)
    {
        tmp = KeTAIR_b_AGS2_BoostSts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_BoostSts_write_IRV();
    }

    /* End of Switch: '<S792>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_BoostSts' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_BoostSts'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_BoostSts_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch1' incorporates:
     *  Constant: '<S799>/Calib'
     *  Constant: '<S800>/Calib'
     *  Merge: '<Root>/Merge_42'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_CalibrationActv_read'
     */
    if (KeTAIR_b_AGS2_CalibrationActv_SD)
    {
        tmp = KeTAIR_b_AGS2_CalibrationActv_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_CalibrationActv_write_IRV();
    }

    /* End of Switch: '<S792>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_CalibrationActv' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_CalibrationActv'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_CalibrationActv_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch9' incorporates:
     *  Constant: '<S803>/Calib'
     */
    if (KeTAIR_b_AGS2_CurrPosFA_SD)
    {
        /* Outport: '<Root>/VeTAIR_b_AGS2_CurrPosFA' incorporates:
         *  Constant: '<S802>/Calib'
         *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_CurrPosFA'
         */
        (void)Rte_Write_VeTAIR_b_AGS2_CurrPosFA_Value(KeTAIR_b_AGS2_CurrPosFA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_b_AGS2_CurrPosFA' incorporates:
         *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_CurrPosFA'
         */
        (void)Rte_Write_VeTAIR_b_AGS2_CurrPosFA_Value
            (rtb_TmpSignalConversionAtVeT_pn);
    }

    /* End of Switch: '<S792>/Switch9' */

    /* Switch: '<S792>/Switch12' incorporates:
     *  Constant: '<S806>/Calib'
     *  Constant: '<S807>/Calib'
     *  Merge: '<Root>/Merge_48'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrFdbFA_read'
     */
    if (KeTAIR_b_AGS2_ErrFdbFA_SD)
    {
        tmp = KeTAIR_b_AGS2_ErrFdbFA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_ErrFdbFA_write_IRV();
    }

    /* End of Switch: '<S792>/Switch12' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrFdbFA' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrFdbFA'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrFdbFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch2' incorporates:
     *  Constant: '<S809>/Calib'
     *  Constant: '<S810>/Calib'
     *  Merge: '<Root>/Merge_49'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrMechBreak_read'
     */
    if (KeTAIR_b_AGS2_ErrMechBreak_SD)
    {
        tmp = KeTAIR_b_AGS2_ErrMechBreak_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_ErrMechBreak_write_IRV();
    }

    /* End of Switch: '<S792>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrMechBreak' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrMechBreak'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrMechBreak_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch4' incorporates:
     *  Constant: '<S811>/Calib'
     *  Constant: '<S812>/Calib'
     *  Merge: '<Root>/Merge_50'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrMechStuck_read'
     */
    if (KeTAIR_b_AGS2_ErrMechStuck_SD)
    {
        tmp = KeTAIR_b_AGS2_ErrMechStuck_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_ErrMechStuck_write_IRV();
    }

    /* End of Switch: '<S792>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrMechStuck' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrMechStuck'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrMechStuck_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch7' incorporates:
     *  Constant: '<S813>/Calib'
     *  Constant: '<S814>/Calib'
     *  Merge: '<Root>/Merge_51'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrOverTemp_read'
     */
    if (KeTAIR_b_AGS2_ErrOverTemp_SD)
    {
        tmp = KeTAIR_b_AGS2_ErrOverTemp_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_ErrOverTemp_write_IRV();
    }

    /* End of Switch: '<S792>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrOverTemp' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrOverTemp'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrOverTemp_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch5' incorporates:
     *  Constant: '<S815>/Calib'
     *  Constant: '<S816>/Calib'
     *  Merge: '<Root>/Merge_52'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrOverVolt_read'
     */
    if (KeTAIR_b_AGS2_ErrOverVolt_SD)
    {
        tmp = KeTAIR_b_AGS2_ErrOverVolt_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_ErrOverVolt_write_IRV();
    }

    /* End of Switch: '<S792>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrOverVolt' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrOverVolt'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrOverVolt_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch6' incorporates:
     *  Constant: '<S817>/Calib'
     *  Constant: '<S818>/Calib'
     *  Merge: '<Root>/Merge_53'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrUnderVolt_read'
     */
    if (KeTAIR_b_AGS2_ErrUnderVolt_SD)
    {
        tmp = KeTAIR_b_AGS2_ErrUnderVolt_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_ErrUnderVolt_write_IRV();
    }

    /* End of Switch: '<S792>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrUnderVolt' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ErrUnderVolt'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrUnderVolt_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch8' incorporates:
     *  Constant: '<S819>/Calib'
     *  Constant: '<S820>/Calib'
     *  Merge: '<Root>/Merge_54'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ResErr_read'
     */
    if (KeTAIR_b_AGS2_ResErr_SD)
    {
        tmp = KeTAIR_b_AGS2_ResErr_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS2_ResErr_write_IRV();
    }

    /* End of Switch: '<S792>/Switch8' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS2_ResErr' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS2_ResErr'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ResErr_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch3' incorporates:
     *  Constant: '<S826>/Calib'
     *  Constant: '<S827>/Calib'
     *  Merge: '<Root>/Merge_55'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_BoostSts_read'
     */
    if (KeTAIR_b_AGS_BoostSts_SD)
    {
        tmp = KeTAIR_b_AGS_BoostSts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_BoostSts_write_IRV();
    }

    /* End of Switch: '<S793>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_BoostSts' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_BoostSts'
     */
    (void)Rte_Write_VeTAIR_b_AGS_BoostSts_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch1' incorporates:
     *  Constant: '<S828>/Calib'
     *  Constant: '<S829>/Calib'
     *  Merge: '<Root>/Merge_56'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_CalibrationActv_read'
     */
    if (KeTAIR_b_AGS_CalibrationActv_SD)
    {
        tmp = KeTAIR_b_AGS_CalibrationActv_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_CalibrationActv_write_IRV();
    }

    /* End of Switch: '<S793>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_CalibrationActv' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_CalibrationActv'
     */
    (void)Rte_Write_VeTAIR_b_AGS_CalibrationActv_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch9' incorporates:
     *  Constant: '<S832>/Calib'
     */
    if (KeTAIR_b_AGS_CurrPosFA_SD)
    {
        /* Outport: '<Root>/VeTAIR_b_AGS_CurrPosFA' incorporates:
         *  Constant: '<S831>/Calib'
         *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_CurrPosFA'
         */
        (void)Rte_Write_VeTAIR_b_AGS_CurrPosFA_Value(KeTAIR_b_AGS_CurrPosFA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTAIR_b_AGS_CurrPosFA' incorporates:
         *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_CurrPosFA'
         */
        (void)Rte_Write_VeTAIR_b_AGS_CurrPosFA_Value
            (rtb_TmpSignalConversionAtVe_ibo);
    }

    /* End of Switch: '<S793>/Switch9' */

    /* Switch: '<S793>/Switch12' incorporates:
     *  Constant: '<S835>/Calib'
     *  Constant: '<S836>/Calib'
     *  Merge: '<Root>/Merge_62'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrFdbFA_read'
     */
    if (KeTAIR_b_AGS_ErrFdbFA_SD)
    {
        tmp = KeTAIR_b_AGS_ErrFdbFA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_ErrFdbFA_write_IRV();
    }

    /* End of Switch: '<S793>/Switch12' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrFdbFA' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrFdbFA'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrFdbFA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch2' incorporates:
     *  Constant: '<S838>/Calib'
     *  Constant: '<S839>/Calib'
     *  Merge: '<Root>/Merge_63'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrMechBreak_read'
     */
    if (KeTAIR_b_AGS_ErrMechBreak_SD)
    {
        tmp = KeTAIR_b_AGS_ErrMechBreak_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_ErrMechBreak_write_IRV();
    }

    /* End of Switch: '<S793>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrMechBreak' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrMechBreak'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrMechBreak_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch4' incorporates:
     *  Constant: '<S840>/Calib'
     *  Constant: '<S841>/Calib'
     *  Merge: '<Root>/Merge_64'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrMechStuck_read'
     */
    if (KeTAIR_b_AGS_ErrMechStuck_SD)
    {
        tmp = KeTAIR_b_AGS_ErrMechStuck_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_ErrMechStuck_write_IRV();
    }

    /* End of Switch: '<S793>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrMechStuck' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrMechStuck'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrMechStuck_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch7' incorporates:
     *  Constant: '<S842>/Calib'
     *  Constant: '<S843>/Calib'
     *  Merge: '<Root>/Merge_65'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrOverTemp_read'
     */
    if (KeTAIR_b_AGS_ErrOverTemp_SD)
    {
        tmp = KeTAIR_b_AGS_ErrOverTemp_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_ErrOverTemp_write_IRV();
    }

    /* End of Switch: '<S793>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrOverTemp' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrOverTemp'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrOverTemp_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch5' incorporates:
     *  Constant: '<S844>/Calib'
     *  Constant: '<S845>/Calib'
     *  Merge: '<Root>/Merge_66'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrOverVolt_read'
     */
    if (KeTAIR_b_AGS_ErrOverVolt_SD)
    {
        tmp = KeTAIR_b_AGS_ErrOverVolt_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_ErrOverVolt_write_IRV();
    }

    /* End of Switch: '<S793>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrOverVolt' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrOverVolt'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrOverVolt_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch6' incorporates:
     *  Constant: '<S846>/Calib'
     *  Constant: '<S847>/Calib'
     *  Merge: '<Root>/Merge_67'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrUnderVolt_read'
     */
    if (KeTAIR_b_AGS_ErrUnderVolt_SD)
    {
        tmp = KeTAIR_b_AGS_ErrUnderVolt_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_ErrUnderVolt_write_IRV();
    }

    /* End of Switch: '<S793>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrUnderVolt' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ErrUnderVolt'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrUnderVolt_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S793>/Switch8' incorporates:
     *  Constant: '<S848>/Calib'
     *  Constant: '<S849>/Calib'
     *  Merge: '<Root>/Merge_68'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ResErr_read'
     */
    if (KeTAIR_b_AGS_ResErr_SD)
    {
        tmp = KeTAIR_b_AGS_ResErr_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_AGS_ResErr_write_IRV();
    }

    /* End of Switch: '<S793>/Switch8' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_AGS_ResErr' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_AGS_ResErr'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ResErr_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S853>/Switch2' incorporates:
     *  Constant: '<S857>/Calib'
     *  Constant: '<S858>/Calib'
     *  Merge: '<Root>/Merge_69'
     *  SignalConversion generated from: '<S207>/VeTAIF_b_DVC_AGS2_Calibration_Start_read'
     */
    if (KeTAIR_b_DVC_AGS2_Calibration_Start_SD)
    {
        tmp = KeTAIR_b_DVC_AGS2_Calibration_Start_D;
    }
    else
    {
        tmp =
            Rte_IrvRead_TAIR_MedTEH_VeTAIF_b_DVC_AGS2_Calibration_Start_write_IRV
            ();
    }

    /* End of Switch: '<S853>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_DVC_AGS2_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_DVC_AGS2_Calibration_Start'
     */
    (void)Rte_Write_VeTAIR_b_DVC_AGS2_Calibration_Start_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S854>/Switch2' incorporates:
     *  Constant: '<S863>/Calib'
     *  Constant: '<S864>/Calib'
     *  Merge: '<Root>/Merge_72'
     *  SignalConversion generated from: '<S207>/VeTAIF_b_DVC_AGS_Calibration_Start_read'
     */
    if (KeTAIR_b_DVC_AGS_Calibration_Start_SD)
    {
        tmp = KeTAIR_b_DVC_AGS_Calibration_Start_D;
    }
    else
    {
        tmp =
            Rte_IrvRead_TAIR_MedTEH_VeTAIF_b_DVC_AGS1_Calibration_Start_write_IRV
            ();
    }

    /* End of Switch: '<S854>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_DVC_AGS_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_b_DVC_AGS_Calibration_Start'
     */
    (void)Rte_Write_VeTAIR_b_DVC_AGS_Calibration_Start_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/AGS_AGS2_Over'
     */
    /* Switch: '<S792>/Switch13' incorporates:
     *  Constant: '<S801>/Calib'
     *  Constant: '<S821>/Calib'
     *  Merge: '<Root>/Merge_43'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_CalibrationSts_read'
     */
    if (KeTAIR_b_AGS2_CalibrationSts_SD)
    {
        tmp_6 = KeTAIR_e_AGS2_CalibrationSts_D;
    }
    else
    {
        tmp_6 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_AGS2_CalibrationSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS2_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_CalibrationSts'
     *  Switch: '<S792>/Switch13'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_CalibrationSts_Value(tmp_6);

    /* Switch: '<S792>/Switch14' incorporates:
     *  Constant: '<S805>/Calib'
     *  Constant: '<S822>/Calib'
     *  Merge: '<Root>/Merge_46'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_CurrPos_read'
     */
    if (KeTAIR_b_AGS2_EnumCurrPos_SD)
    {
        tmp_7 = KeTAIR_e_AGS2_CurrPos_D;
    }
    else
    {
        tmp_7 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_AGS2_CurrPos_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS2_CurrPos' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_CurrPos'
     *  Switch: '<S792>/Switch14'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_CurrPos_Value(tmp_7);

    /* Switch: '<S792>/Switch10' incorporates:
     *  Constant: '<S808>/Calib'
     *  Constant: '<S823>/Calib'
     *  Merge: '<Root>/Merge_47'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_ErrFdb_read'
     */
    if (KeTAIR_b_AGS2_ErrFdb_SD)
    {
        tmp_8 = KeTAIR_e_AGS2_ErrFdb_D;
    }
    else
    {
        tmp_8 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_AGS2_ErrFdb_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS2_ErrFdb' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_ErrFdb'
     *  Switch: '<S792>/Switch10'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_ErrFdb_Value(tmp_8);

    /* Switch: '<S853>/Switch' incorporates:
     *  Constant: '<S855>/Calib'
     *  Constant: '<S859>/Calib'
     *  Merge: '<Root>/Merge_70'
     *  SignalConversion generated from: '<S207>/VeTAIF_e_AGS2_IO_CntrlSt_read'
     */
    if (KeTAIR_b_AGS2_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_AGS2_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TAIR_MedTEH_VeTAIF_e_AGS2_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS2_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_IO_CntrlSt'
     *  Switch: '<S853>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_IO_CntrlSt_Value(tmp_1);

    /* Switch: '<S853>/Switch1' incorporates:
     *  Constant: '<S856>/Calib'
     *  Constant: '<S860>/Calib'
     *  Merge: '<Root>/Merge_71'
     *  SignalConversion generated from: '<S207>/VeTAIF_e_AGS2_PstnCmnd_read'
     */
    if (KeTAIR_b_AGS2_PstnCmnd_SD)
    {
        tmp_7 = KeTAIR_e_AGS2_PstnCmnd_D;
    }
    else
    {
        tmp_7 = Rte_IrvRead_TAIR_MedTEH_VeTAIF_e_AGS2_PstnCmnd_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS2_PstnCmnd' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS2_PstnCmnd'
     *  Switch: '<S853>/Switch1'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_PstnCmnd_Value(tmp_7);

    /* Switch: '<S793>/Switch13' incorporates:
     *  Constant: '<S830>/Calib'
     *  Constant: '<S850>/Calib'
     *  Merge: '<Root>/Merge_57'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_CalibrationSts_read'
     */
    if (KeTAIR_b_AGS_CalibrationSts_SD)
    {
        tmp_6 = KeTAIR_e_AGS_CalibrationSts_D;
    }
    else
    {
        tmp_6 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_AGS_CalibrationSts_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_CalibrationSts'
     *  Switch: '<S793>/Switch13'
     */
    (void)Rte_Write_VeTAIR_e_AGS_CalibrationSts_Value(tmp_6);

    /* Switch: '<S793>/Switch14' incorporates:
     *  Constant: '<S834>/Calib'
     *  Constant: '<S851>/Calib'
     *  Merge: '<Root>/Merge_59'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_CurrPos_read'
     */
    if (KeTAIR_b_AGS_EnumCurrPos_SD)
    {
        tmp_7 = KeTAIR_e_AGS_CurrPos_D;
    }
    else
    {
        tmp_7 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_AGS_CurrPos_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS_CurrPos' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_CurrPos'
     *  Switch: '<S793>/Switch14'
     */
    (void)Rte_Write_VeTAIR_e_AGS_CurrPos_Value(tmp_7);

    /* Switch: '<S793>/Switch10' incorporates:
     *  Constant: '<S837>/Calib'
     *  Constant: '<S852>/Calib'
     *  Merge: '<Root>/Merge_61'
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_ErrFdb_read'
     */
    if (KeTAIR_b_AGS_ErrFdb_SD)
    {
        tmp_8 = KeTAIR_e_AGS_ErrFdb_D;
    }
    else
    {
        tmp_8 = Rte_IrvRead_TAIR_MedTEH_VeTAIR_e_AGS_ErrFdb_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS_ErrFdb' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_ErrFdb'
     *  Switch: '<S793>/Switch10'
     */
    (void)Rte_Write_VeTAIR_e_AGS_ErrFdb_Value(tmp_8);

    /* Switch: '<S854>/Switch' incorporates:
     *  Constant: '<S861>/Calib'
     *  Constant: '<S865>/Calib'
     *  Merge: '<Root>/Merge_73'
     *  SignalConversion generated from: '<S207>/VeTAIF_e_AGS_IO_CntrlSt_read'
     */
    if (KeTAIR_b_AGS_IO_CntrlSt_SD)
    {
        tmp_1 = KeTAIR_e_AGS_IO_CntrlSt_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TAIR_MedTEH_VeTAIF_e_AGS_IO_CntrlSt_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_IO_CntrlSt'
     *  Switch: '<S854>/Switch'
     */
    (void)Rte_Write_VeTAIR_e_AGS_IO_CntrlSt_Value(tmp_1);

    /* Switch: '<S854>/Switch1' incorporates:
     *  Constant: '<S862>/Calib'
     *  Constant: '<S866>/Calib'
     *  Merge: '<Root>/Merge_74'
     *  SignalConversion generated from: '<S207>/VeTAIF_e_AGS_PstnCmnd_read'
     */
    if (KeTAIR_b_AGS_PstnCmnd_SD)
    {
        tmp_7 = KeTAIR_e_AGS_PstnCmnd_D;
    }
    else
    {
        tmp_7 = Rte_IrvRead_TAIR_MedTEH_VeTAIF_e_AGS_PstnCmnd_write_IRV();
    }

    /* Outport: '<Root>/VeTAIR_e_AGS_PstnCmnd' incorporates:
     *  SignalConversion generated from: '<S207>/VeTAIR_e_AGS_PstnCmnd'
     *  Switch: '<S854>/Switch1'
     */
    (void)Rte_Write_VeTAIR_e_AGS_PstnCmnd_Value(tmp_7);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S930>/Switch1' incorporates:
     *  Constant: '<S939>/Calib'
     *  Constant: '<S942>/Calib'
     *  Merge: '<Root>/Merge_12'
     *  SignalConversion generated from: '<S207>/VeTAIR_T_VhIntTmp_read'
     */
    if (KeTAIR_b_VhIntTmp_SD)
    {
        VeTAIR_T_FtEvapTmp_Tgt = KeTAIR_T_VhIntTmp_D;
    }
    else
    {
        VeTAIR_T_FtEvapTmp_Tgt =
            Rte_IrvRead_TAIR_MedTEH_VeTAIR_T_VhIntTmp_write_IRV();
    }

    /* End of Switch: '<S930>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_T_VhIntTmp' incorporates:
     *  SignalConversion generated from: '<S207>/VhIntTmp_AftDial'
     */
    (void)Rte_Write_VeTAIR_T_VhIntTmp_Value(VeTAIR_T_FtEvapTmp_Tgt);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S930>/Switch' incorporates:
     *  Constant: '<S940>/Calib'
     *  Constant: '<S941>/Calib'
     *  Merge: '<Root>/Merge_13'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_VhIntTmpFA_read'
     */
    if (KeTAIR_b_VhIntTmp_FA_SD)
    {
        tmp = KeTAIR_b_VhIntTmp_FA_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_VhIntTmpFA_write_IRV();
    }

    /* End of Switch: '<S930>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_VhIntTmp_FA' incorporates:
     *  SignalConversion generated from: '<S207>/VhIntTmp_FA_AftDial'
     */
    (void)Rte_Write_VeTAIR_b_VhIntTmp_FA_Value(tmp);

    /* S-Function (fcgen): '<S207>/FcnCallGen' incorporates:
     *  SubSystem: '<S207>/Overwrite'
     */
    /* Switch: '<S868>/Switch' incorporates:
     *  Constant: '<S878>/Calib'
     *  Constant: '<S879>/Calib'
     *  Merge: '<Root>/Merge_17'
     *  SignalConversion generated from: '<S207>/VeTAIR_b_WinshldDfrst_read'
     */
    if (KeTAIR_b_WinshldDfrst_SD)
    {
        tmp = KeTAIR_b_WinshldDfrst_D;
    }
    else
    {
        tmp = Rte_IrvRead_TAIR_MedTEH_VeTAIR_b_WinshldDfrst_write_IRV();
    }

    /* End of Switch: '<S868>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S207>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_b_WinshldDfrst' incorporates:
     *  SignalConversion generated from: '<S207>/WinshldDfrst_AD'
     */
    (void)Rte_Write_VeTAIR_b_WinshldDfrst_Value(tmp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_I_ACCElecCurr(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_P_ACCompElec_Pwr(void)
{

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_P_ACCompElec_Pwr' */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S2>/FsftTAIR_P_ACCompElec_PwrChrt'
     *  SignalConversion generated from: '<S2>/VeTAIR_b_ACCompElec_PwrFA_write'
     */
    /* Gateway: FsftTAIR_P_ACCompElec_Pwr/FsftTAIR_P_ACCompElec_PwrChrt */
    /* During: FsftTAIR_P_ACCompElec_Pwr/FsftTAIR_P_ACCompElec_PwrChrt */
    /* Entry Internal: FsftTAIR_P_ACCompElec_Pwr/FsftTAIR_P_ACCompElec_PwrChrt */
    /* Transition: '<S210>:2' */
    Rte_IrvWrite_FsftTAIR_P_ACCompElec_Pwr_VeTAIR_b_ACCompElec_PwrFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_P_ACCompElec_Pwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) FsftTAIR_Pct_CPV2_ActlPstn(void)
{

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_CPV2_ActlPstn' */
    /* Merge: '<Root>/Merge_147' incorporates:
     *  Chart: '<S3>/FsftTAIR_Pct_CPV2_ActlPstnChrt'
     *  SignalConversion generated from: '<S3>/VeTAIR_b_CPV2_ActlPstnFA_write'
     */
    /* Gateway: FsftTAIR_Pct_CPV2_ActlPstn/FsftTAIR_Pct_CPV2_ActlPstnChrt */
    /* During: FsftTAIR_Pct_CPV2_ActlPstn/FsftTAIR_Pct_CPV2_ActlPstnChrt */
    /* Entry Internal: FsftTAIR_Pct_CPV2_ActlPstn/FsftTAIR_Pct_CPV2_ActlPstnChrt */
    /* Transition: '<S211>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_CPV2_ActlPstn_VeTAIR_b_CPV2_ActlPstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_CPV2_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_Pct_DrvTmpDr_Pos(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_7

FUNC(void, TAIR_CODE) FsftTAIR_Pct_ECM_AirflowRequest(void)
{

#if Rte_SysCon_Variant_TAIR_7

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_ECM_AirflowRequest' */
    /* Merge: '<Root>/Merge_81' incorporates:
     *  Chart: '<S5>/FsftTAIR_Pct_ECM_AirflowRequestChrt'
     *  SignalConversion generated from: '<S5>/VeTAIR_b_ECM_AirflowRequestFA_write'
     */
    /* Gateway: FsftTAIR_Pct_ECM_AirflowRequest/FsftTAIR_Pct_ECM_AirflowRequestChrt */
    /* During: FsftTAIR_Pct_ECM_AirflowRequest/FsftTAIR_Pct_ECM_AirflowRequestChrt */
    /* Entry Internal: FsftTAIR_Pct_ECM_AirflowRequest/FsftTAIR_Pct_ECM_AirflowRequestChrt */
    /* Transition: '<S213>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_ECM_AirflowRequest_VeTAIR_b_ECM_AirflowRequestFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_ECM_AirflowRequest' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_7

FUNC(void, TAIR_CODE) FsftTAIR_Pct_ECM_RadFanReq(void)
{

#if Rte_SysCon_Variant_TAIR_7

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_ECM_RadFanReq' */
    /* Merge: '<Root>/Merge_77' incorporates:
     *  Chart: '<S6>/FsftTAIR_Pct_ECM_RadFanReqChrt'
     *  SignalConversion generated from: '<S6>/VeTAIR_b_ECM_RadFanReqFA_write'
     */
    /* Gateway: FsftTAIR_Pct_ECM_RadFanReq/FsftTAIR_Pct_ECM_RadFanReqChrt */
    /* During: FsftTAIR_Pct_ECM_RadFanReq/FsftTAIR_Pct_ECM_RadFanReqChrt */
    /* Entry Internal: FsftTAIR_Pct_ECM_RadFanReq/FsftTAIR_Pct_ECM_RadFanReqChrt */
    /* Transition: '<S214>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_ECM_RadFanReq_VeTAIR_b_ECM_RadFanReqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_ECM_RadFanReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) FsftTAIR_Pct_EEXV_PosAct(void)
{

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_EEXV_PosAct' */
    /* Merge: '<Root>/Merge_141' incorporates:
     *  Chart: '<S7>/FsftTAIR_Pct_EEXV_PosActChrt'
     *  SignalConversion generated from: '<S7>/VeTAIR_b_EEXV_PosActFA_write'
     */
    /* Gateway: FsftTAIR_Pct_EEXV_PosAct/FsftTAIR_Pct_EEXV_PosActChrt */
    /* During: FsftTAIR_Pct_EEXV_PosAct/FsftTAIR_Pct_EEXV_PosActChrt */
    /* Entry Internal: FsftTAIR_Pct_EEXV_PosAct/FsftTAIR_Pct_EEXV_PosActChrt */
    /* Transition: '<S215>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_EEXV_PosAct_VeTAIR_b_EEXV_PosActFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_EEXV_PosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_Pct_EXV_PosAct(void)
{

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_EXV_PosAct' */
    /* Merge: '<Root>/Merge_186' incorporates:
     *  Chart: '<S8>/FsftTAIR_Pct_EXV_PosActChrt'
     *  SignalConversion generated from: '<S8>/VeTAIR_b_EXV_PosActFA_write'
     */
    /* Gateway: FsftTAIR_Pct_EXV_PosAct/FsftTAIR_Pct_EXV_PosActChrt */
    /* During: FsftTAIR_Pct_EXV_PosAct/FsftTAIR_Pct_EXV_PosActChrt */
    /* Entry Internal: FsftTAIR_Pct_EXV_PosAct/FsftTAIR_Pct_EXV_PosActChrt */
    /* Transition: '<S216>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_EXV_PosAct_VeTAIR_b_EXV_PosActFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_EXV_PosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) FsftTAIR_Pct_FrWyVlv_ActlPstn(void)
{

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_FrWyVlv_ActlPstn' */
    /* Merge: '<Root>/Merge_194' incorporates:
     *  Chart: '<S9>/FsftTAIR_Pct_FrWyVlv_ActlPstnChrt'
     *  SignalConversion generated from: '<S9>/VeTAIR_b_FrWyVlv_ActlPstnFA_write'
     */
    /* Gateway: FsftTAIR_Pct_FrWyVlv_ActlPstn/FsftTAIR_Pct_FrWyVlv_ActlPstnChrt */
    /* During: FsftTAIR_Pct_FrWyVlv_ActlPstn/FsftTAIR_Pct_FrWyVlv_ActlPstnChrt */
    /* Entry Internal: FsftTAIR_Pct_FrWyVlv_ActlPstn/FsftTAIR_Pct_FrWyVlv_ActlPstnChrt */
    /* Transition: '<S217>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_FrWyVlv_ActlPstn_VeTAIR_b_FrWyVlv_ActlPstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_FrWyVlv_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_Pct_FrtBlwrCmd(void)
{

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_FrtBlwrCmd' */
    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S10>/FsftTAIR_Pct_FrtBlwrCmdChrt'
     *  SignalConversion generated from: '<S10>/VeTAIR_b_FrtBlwrCmdFA_write'
     */
    /* Gateway: FsftTAIR_Pct_FrtBlwrCmd/FsftTAIR_Pct_FrtBlwrCmdChrt */
    /* During: FsftTAIR_Pct_FrtBlwrCmd/FsftTAIR_Pct_FrtBlwrCmdChrt */
    /* Entry Internal: FsftTAIR_Pct_FrtBlwrCmd/FsftTAIR_Pct_FrtBlwrCmdChrt */
    /* Transition: '<S218>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_FrtBlwrCmd_VeTAIR_b_FrtBlwrCmdFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_FrtBlwrCmd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) FsftTAIR_Pct_HTL_BypsVlv_ActlPstn(void)
{

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_HTL_BypsVlv_ActlPstn' */
    /* Merge: '<Root>/Merge_95' incorporates:
     *  Chart: '<S11>/FsftTAIR_Pct_HTL_BypsVlv_ActlPstnChrt'
     *  SignalConversion generated from: '<S11>/VeTAIR_b_HTL_BypsVlv_ActlPstnFA_write'
     */
    /* Gateway: FsftTAIR_Pct_HTL_BypsVlv_ActlPstn/FsftTAIR_Pct_HTL_BypsVlv_ActlPstnChrt */
    /* During: FsftTAIR_Pct_HTL_BypsVlv_ActlPstn/FsftTAIR_Pct_HTL_BypsVlv_ActlPstnChrt */
    /* Entry Internal: FsftTAIR_Pct_HTL_BypsVlv_ActlPstn/FsftTAIR_Pct_HTL_BypsVlv_ActlPstnChrt */
    /* Transition: '<S219>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_HTL_BypsVlv_ActlPstn_VeTAIR_b_HTL_BypsVlv_ActlPstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_HTL_BypsVlv_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) FsftTAIR_Pct_HTRBV_ActuatorPosAct(void)
{

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_HTRBV_ActuatorPosAct' */
    /* Merge: '<Root>/Merge_171' incorporates:
     *  Chart: '<S12>/FsftTAIR_Pct_HTRBV_ActuatorPosActChart'
     *  SignalConversion generated from: '<S12>/FsftTAIR_Pct_HTRBV_ActuatorPosActFA_write'
     */
    /* Gateway: FsftTAIR_Pct_HTRBV_ActuatorPosAct/FsftTAIR_Pct_HTRBV_ActuatorPosActChart */
    /* During: FsftTAIR_Pct_HTRBV_ActuatorPosAct/FsftTAIR_Pct_HTRBV_ActuatorPosActChart */
    /* Entry Internal: FsftTAIR_Pct_HTRBV_ActuatorPosAct/FsftTAIR_Pct_HTRBV_ActuatorPosActChart */
    /* Transition: '<S220>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_HTRBV_ActuatorPosAct_FsftTAIR_Pct_HTRBV_ActuatorPosActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_HTRBV_ActuatorPosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) FsftTAIR_Pct_LTR_BypsVlv_ActlPstn(void)
{

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_LTR_BypsVlv_ActlPstn' */
    /* Merge: '<Root>/Merge_84' incorporates:
     *  Chart: '<S13>/FsftTAIR_Pct_LTR_BypsVlv_ActlPstnChrt'
     *  SignalConversion generated from: '<S13>/VeTAIR_b_LTR_BypsVlv_ActlPstnFA_write'
     */
    /* Gateway: FsftTAIR_Pct_LTR_BypsVlv_ActlPstn/FsftTAIR_Pct_LTR_BypsVlv_ActlPstnChrt */
    /* During: FsftTAIR_Pct_LTR_BypsVlv_ActlPstn/FsftTAIR_Pct_LTR_BypsVlv_ActlPstnChrt */
    /* Entry Internal: FsftTAIR_Pct_LTR_BypsVlv_ActlPstn/FsftTAIR_Pct_LTR_BypsVlv_ActlPstnChrt */
    /* Transition: '<S221>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_LTR_BypsVlv_ActlPstn_VeTAIR_b_LTR_BypsVlv_ActlPstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_LTR_BypsVlv_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) FsftTAIR_Pct_OEXV_PosAct(void)
{

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_Pct_OEXV_PosAct' */
    /* Merge: '<Root>/Merge_169' incorporates:
     *  Chart: '<S14>/FsftTAIR_Pct_OEXV_PosActChrt'
     *  SignalConversion generated from: '<S14>/VeTAIR_b_OEXV_PosActFA_write'
     */
    /* Gateway: FsftTAIR_Pct_OEXV_PosAct/FsftTAIR_Pct_OEXV_PosActChrt */
    /* During: FsftTAIR_Pct_OEXV_PosAct/FsftTAIR_Pct_OEXV_PosActChrt */
    /* Entry Internal: FsftTAIR_Pct_OEXV_PosAct/FsftTAIR_Pct_OEXV_PosActChrt */
    /* Transition: '<S222>:2' */
    Rte_IrvWrite_FsftTAIR_Pct_OEXV_PosAct_VeTAIR_b_OEXV_PosActFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_Pct_OEXV_PosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_Pct_PasTmpDr_Pos(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_Pct_RrBlwrCmd(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_Pct_RrTmpDr_Cmd(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_T_CompBoardTemp(void)
{

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_CompBoardTemp' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S18>/FsftTAIR_T_CompBoardTempChrt'
     *  SignalConversion generated from: '<S18>/VeTAIR_b_CompBoardTempFA_write'
     */
    /* Gateway: FsftTAIR_T_CompBoardTemp/FsftTAIR_T_CompBoardTempChrt */
    /* During: FsftTAIR_T_CompBoardTemp/FsftTAIR_T_CompBoardTempChrt */
    /* Entry Internal: FsftTAIR_T_CompBoardTemp/FsftTAIR_T_CompBoardTempChrt */
    /* Transition: '<S226>:2' */
    Rte_IrvWrite_FsftTAIR_T_CompBoardTemp_VeTAIR_b_CompBoardTempFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_CompBoardTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_T_CompIGBTTemp(void)
{

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_CompIGBTTemp' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S19>/FsftTAIR_T_CompIGBTTempChrt'
     *  SignalConversion generated from: '<S19>/VeTAIR_b_CompIGBTTempFA_write'
     */
    /* Gateway: FsftTAIR_T_CompIGBTTemp/FsftTAIR_T_CompIGBTTempChrt */
    /* During: FsftTAIR_T_CompIGBTTemp/FsftTAIR_T_CompIGBTTempChrt */
    /* Entry Internal: FsftTAIR_T_CompIGBTTemp/FsftTAIR_T_CompIGBTTempChrt */
    /* Transition: '<S227>:2' */
    Rte_IrvWrite_FsftTAIR_T_CompIGBTTemp_VeTAIR_b_CompIGBTTempFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_CompIGBTTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) FsftTAIR_T_EEXV_RefTemp(void)
{

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_EEXV_RefTemp' */
    /* Merge: '<Root>/Merge_140' incorporates:
     *  Chart: '<S20>/FsftTAIR_T_EEXV_RefTempChrt'
     *  SignalConversion generated from: '<S20>/VeTAIR_b_EEXV_RefTempFA_write'
     */
    /* Gateway: FsftTAIR_T_EEXV_RefTemp/FsftTAIR_T_EEXV_RefTempChrt */
    /* During: FsftTAIR_T_EEXV_RefTemp/FsftTAIR_T_EEXV_RefTempChrt */
    /* Entry Internal: FsftTAIR_T_EEXV_RefTemp/FsftTAIR_T_EEXV_RefTempChrt */
    /* Transition: '<S228>:2' */
    Rte_IrvWrite_FsftTAIR_T_EEXV_RefTemp_VeTAIR_b_EEXV_RefTempFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_EEXV_RefTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_T_EXV_BoardTemp(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_T_EXV_RefTemp(void)
{

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_EXV_RefTemp' */
    /* Merge: '<Root>/Merge_185' incorporates:
     *  Chart: '<S22>/FsftTAIR_T_EXV_RefTempChrt'
     *  SignalConversion generated from: '<S22>/VeTAIR_b_EXV_RefTempFA_write'
     */
    /* Gateway: FsftTAIR_T_EXV_RefTemp/FsftTAIR_T_EXV_RefTempChrt */
    /* During: FsftTAIR_T_EXV_RefTemp/FsftTAIR_T_EXV_RefTempChrt */
    /* Entry Internal: FsftTAIR_T_EXV_RefTemp/FsftTAIR_T_EXV_RefTempChrt */
    /* Transition: '<S230>:2' */
    Rte_IrvWrite_FsftTAIR_T_EXV_RefTemp_VeTAIR_b_EXV_RefTempFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_EXV_RefTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_T_FtEvapTmp(void)
{

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_FtEvapTmp' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S23>/FsftTAIR_T_FtEvapTmpChrt'
     *  SignalConversion generated from: '<S23>/VeTAIR_b_FtEvapTmpFA_write'
     */
    /* Gateway: FsftTAIR_T_FtEvapTmp/FsftTAIR_T_FtEvapTmpChrt */
    /* During: FsftTAIR_T_FtEvapTmp/FsftTAIR_T_FtEvapTmpChrt */
    /* Entry Internal: FsftTAIR_T_FtEvapTmp/FsftTAIR_T_FtEvapTmpChrt */
    /* Transition: '<S231>:2' */
    Rte_IrvWrite_FsftTAIR_T_FtEvapTmp_VeTAIR_b_FtEvapTmpFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_FtEvapTmp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_T_FtEvapTmp_P1C(void)
{

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_FtEvapTmp_P1C' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S24>/FsftTAIR_T_FtEvapTmp_P1CChrt'
     *  SignalConversion generated from: '<S24>/VeTAIR_b_FtEvapTmp_P1CFA_write'
     */
    /* Gateway: FsftTAIR_T_FtEvapTmp_P1C/FsftTAIR_T_FtEvapTmp_P1CChrt */
    /* During: FsftTAIR_T_FtEvapTmp_P1C/FsftTAIR_T_FtEvapTmp_P1CChrt */
    /* Entry Internal: FsftTAIR_T_FtEvapTmp_P1C/FsftTAIR_T_FtEvapTmp_P1CChrt */
    /* Transition: '<S232>:2' */
    Rte_IrvWrite_FsftTAIR_T_FtEvapTmp_P1C_VeTAIR_b_FtEvapTmp_P1CFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_FtEvapTmp_P1C' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_T_FtEvapTmp_Tgt(void)
{

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_FtEvapTmp_Tgt' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S25>/FsftTAIR_T_FtEvapTmp_TgtChrt'
     *  SignalConversion generated from: '<S25>/VeTAIR_b_FtEvapTmp_TgtFA_write'
     */
    /* Gateway: FsftTAIR_T_FtEvapTmp_Tgt/FsftTAIR_T_FtEvapTmp_TgtChrt */
    /* During: FsftTAIR_T_FtEvapTmp_Tgt/FsftTAIR_T_FtEvapTmp_TgtChrt */
    /* Entry Internal: FsftTAIR_T_FtEvapTmp_Tgt/FsftTAIR_T_FtEvapTmp_TgtChrt */
    /* Transition: '<S233>:2' */
    Rte_IrvWrite_FsftTAIR_T_FtEvapTmp_Tgt_VeTAIR_b_FtEvapTmp_TgtFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_FtEvapTmp_Tgt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_T_HtrCoreTmp_Tgt(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) FsftTAIR_T_OEXV_RefTemp(void)
{

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_OEXV_RefTemp' */
    /* Merge: '<Root>/Merge_162' incorporates:
     *  Chart: '<S27>/FsftTAIR_T_OEXV_RefTempChrt'
     *  SignalConversion generated from: '<S27>/VeTAIR_b_OEXV_RefTempFA_write'
     */
    /* Gateway: FsftTAIR_T_OEXV_RefTemp/FsftTAIR_T_OEXV_RefTempChrt */
    /* During: FsftTAIR_T_OEXV_RefTemp/FsftTAIR_T_OEXV_RefTempChrt */
    /* Entry Internal: FsftTAIR_T_OEXV_RefTemp/FsftTAIR_T_OEXV_RefTempChrt */
    /* Transition: '<S235>:2' */
    Rte_IrvWrite_FsftTAIR_T_OEXV_RefTemp_VeTAIR_b_OEXV_RefTempFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_OEXV_RefTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_T_VhIntTmp(void)
{

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_T_VhIntTmp' */
    /* Merge: '<Root>/Merge_13' incorporates:
     *  Chart: '<S28>/FsftTAIR_T_VhIntTmpChrt'
     *  SignalConversion generated from: '<S28>/VeTAIR_b_VhIntTmpFA_write'
     */
    /* Gateway: FsftTAIR_T_VhIntTmp/FsftTAIR_T_VhIntTmpChrt */
    /* During: FsftTAIR_T_VhIntTmp/FsftTAIR_T_VhIntTmpChrt */
    /* Entry Internal: FsftTAIR_T_VhIntTmp/FsftTAIR_T_VhIntTmpChrt */
    /* Transition: '<S236>:2' */
    Rte_IrvWrite_FsftTAIR_T_VhIntTmp_VeTAIR_b_VhIntTmpFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_T_VhIntTmp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_U_CompHVInput(void)
{

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_U_CompHVInput' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S29>/FsftTAIR_U_CompHVInputChrt'
     *  SignalConversion generated from: '<S29>/VeTAIR_b_CompHVInputFA_write'
     */
    /* Gateway: FsftTAIR_U_CompHVInput/FsftTAIR_U_CompHVInputChrt */
    /* During: FsftTAIR_U_CompHVInput/FsftTAIR_U_CompHVInputChrt */
    /* Entry Internal: FsftTAIR_U_CompHVInput/FsftTAIR_U_CompHVInputChrt */
    /* Transition: '<S237>:2' */
    Rte_IrvWrite_FsftTAIR_U_CompHVInput_VeTAIR_b_CompHVInputFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_U_CompHVInput' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_U_EXV_SupplyVolt(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) FsftTAIR_U_FrWyVlv_MtrVltg(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) FsftTAIR_U_HTL_BypsVlv_MtrVltg(void)
{

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_U_HTL_BypsVlv_MtrVltg' */
    /* Merge: '<Root>/Merge_104' incorporates:
     *  Chart: '<S32>/FsftTAIR_U_HTL_BypsVlv_MtrVltgChrt'
     *  SignalConversion generated from: '<S32>/VeTAIR_b_HTL_BypsVlv_MtrVltgFA_write'
     */
    /* Gateway: FsftTAIR_U_HTL_BypsVlv_MtrVltg/FsftTAIR_U_HTL_BypsVlv_MtrVltgChrt */
    /* During: FsftTAIR_U_HTL_BypsVlv_MtrVltg/FsftTAIR_U_HTL_BypsVlv_MtrVltgChrt */
    /* Entry Internal: FsftTAIR_U_HTL_BypsVlv_MtrVltg/FsftTAIR_U_HTL_BypsVlv_MtrVltgChrt */
    /* Transition: '<S240>:2' */
    Rte_IrvWrite_FsftTAIR_U_HTL_BypsVlv_MtrVltg_VeTAIR_b_HTL_BypsVlv_MtrVltgFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_U_HTL_BypsVlv_MtrVltg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) FsftTAIR_U_LTR_BypsVlv_MtrVltg(void)
{

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_U_LTR_BypsVlv_MtrVltg' */
    /* Merge: '<Root>/Merge_85' incorporates:
     *  Chart: '<S33>/FsftTAIR_U_LTR_BypsVlv_MtrVltgChrt'
     *  SignalConversion generated from: '<S33>/VeTAIR_b_LTR_BypsVlv_MtrVltgFA_write'
     */
    /* Gateway: FsftTAIR_U_LTR_BypsVlv_MtrVltg/FsftTAIR_U_LTR_BypsVlv_MtrVltgChrt */
    /* During: FsftTAIR_U_LTR_BypsVlv_MtrVltg/FsftTAIR_U_LTR_BypsVlv_MtrVltgChrt */
    /* Entry Internal: FsftTAIR_U_LTR_BypsVlv_MtrVltg/FsftTAIR_U_LTR_BypsVlv_MtrVltgChrt */
    /* Transition: '<S241>:2' */
    Rte_IrvWrite_FsftTAIR_U_LTR_BypsVlv_MtrVltg_VeTAIR_b_LTR_BypsVlv_MtrVltgFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_U_LTR_BypsVlv_MtrVltg' */
#endif

}

#endif

/* Output function */
FUNC(void, TAIR_CODE) FsftTAIR_b_AGS2_CurrPos(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_AGS2_CurrPos' */
    /* Merge: '<Root>/Merge_45' incorporates:
     *  Chart: '<S34>/FsftTAIR_b_AGS2_CurrPosChrt'
     *  SignalConversion generated from: '<S34>/VeTAIR_b_AGS2_CurrPosFA_write'
     */
    /* Gateway: FsftTAIR_b_AGS2_CurrPos/FsftTAIR_b_AGS2_CurrPosChrt */
    /* During: FsftTAIR_b_AGS2_CurrPos/FsftTAIR_b_AGS2_CurrPosChrt */
    /* Entry Internal: FsftTAIR_b_AGS2_CurrPos/FsftTAIR_b_AGS2_CurrPosChrt */
    /* Transition: '<S242>:2' */
    Rte_IrvWrite_FsftTAIR_b_AGS2_CurrPos_VeTAIR_b_AGS2_CurrPosFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_AGS2_CurrPos' */
}

/* Output function */
FUNC(void, TAIR_CODE) FsftTAIR_b_AGS_CurrPos(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_AGS_CurrPos' */
    /* Merge: '<Root>/Merge_60' incorporates:
     *  Chart: '<S35>/FsftTAIR_b_AGS_CurrPosChrt'
     *  SignalConversion generated from: '<S35>/VeTAIR_b_AGS_CurrPosFA_write'
     */
    /* Gateway: FsftTAIR_b_AGS_CurrPos/FsftTAIR_b_AGS_CurrPosChrt */
    /* During: FsftTAIR_b_AGS_CurrPos/FsftTAIR_b_AGS_CurrPosChrt */
    /* Entry Internal: FsftTAIR_b_AGS_CurrPos/FsftTAIR_b_AGS_CurrPosChrt */
    /* Transition: '<S243>:2' */
    Rte_IrvWrite_FsftTAIR_b_AGS_CurrPos_VeTAIR_b_AGS_CurrPosFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_AGS_CurrPos' */
}

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_b_EBL_Stat(void)
{

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_EBL_Stat' */
    /* Merge: '<Root>/Merge_155' incorporates:
     *  Chart: '<S36>/FsftTAIR_b_EBL_StatChrt'
     *  SignalConversion generated from: '<S36>/VeTAIR_b_EBL_StatFA_write'
     */
    /* Gateway: FsftTAIR_b_EBL_Stat/FsftTAIR_b_EBL_StatChrt */
    /* During: FsftTAIR_b_EBL_Stat/FsftTAIR_b_EBL_StatChrt */
    /* Entry Internal: FsftTAIR_b_EBL_Stat/FsftTAIR_b_EBL_StatChrt */
    /* Transition: '<S244>:2' */
    Rte_IrvWrite_FsftTAIR_b_EBL_Stat_VeTAIR_b_EBL_StatFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_EBL_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_4

FUNC(void, TAIR_CODE) FsftTAIR_b_ECM_AC_ClutchSts(void)
{

#if Rte_SysCon_Variant_TAIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_ECM_AC_ClutchSts' */
    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S37>/FsftTAIR_b_ECM_AC_ClutchStsChrt'
     *  SignalConversion generated from: '<S37>/VeTAIR_b_ECM_AC_ClutchStsFA_write'
     */
    /* Gateway: FsftTAIR_b_ECM_AC_ClutchSts/FsftTAIR_b_ECM_AC_ClutchStsChrt */
    /* During: FsftTAIR_b_ECM_AC_ClutchSts/FsftTAIR_b_ECM_AC_ClutchStsChrt */
    /* Entry Internal: FsftTAIR_b_ECM_AC_ClutchSts/FsftTAIR_b_ECM_AC_ClutchStsChrt */
    /* Transition: '<S245>:2' */
    Rte_IrvWrite_FsftTAIR_b_ECM_AC_ClutchSts_VeTAIR_b_ECM_AC_ClutchStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_ECM_AC_ClutchSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_4

FUNC(void, TAIR_CODE) FsftTAIR_b_ECVD_HVACCabinReq(void)
{

#if Rte_SysCon_Variant_TAIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_ECVD_HVACCabinReq' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S38>/FsftTAIR_b_ECVD_HVACCabinReqChrt'
     *  SignalConversion generated from: '<S38>/VeTAIR_b_ECVD_HVACCabinReqFA_write'
     */
    /* Gateway: FsftTAIR_b_ECVD_HVACCabinReq/FsftTAIR_b_ECVD_HVACCabinReqChrt */
    /* During: FsftTAIR_b_ECVD_HVACCabinReq/FsftTAIR_b_ECVD_HVACCabinReqChrt */
    /* Entry Internal: FsftTAIR_b_ECVD_HVACCabinReq/FsftTAIR_b_ECVD_HVACCabinReqChrt */
    /* Transition: '<S246>:2' */
    Rte_IrvWrite_FsftTAIR_b_ECVD_HVACCabinReq_VeTAIR_b_ECVD_HVACCabinReqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_ECVD_HVACCabinReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_4

FUNC(void, TAIR_CODE) FsftTAIR_b_ECVD_HVACCurrentAct(void)
{

#if Rte_SysCon_Variant_TAIR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_ECVD_HVACCurrentAct' */
    /* Merge: '<Root>/Merge_38' incorporates:
     *  Chart: '<S39>/FsftTAIR_b_ECVD_HVACCurrentActChrt'
     *  SignalConversion generated from: '<S39>/VeTAIR_b_ECVD_HVACCurrentActFA_write'
     */
    /* Gateway: FsftTAIR_b_ECVD_HVACCurrentAct/FsftTAIR_b_ECVD_HVACCurrentActChrt */
    /* During: FsftTAIR_b_ECVD_HVACCurrentAct/FsftTAIR_b_ECVD_HVACCurrentActChrt */
    /* Entry Internal: FsftTAIR_b_ECVD_HVACCurrentAct/FsftTAIR_b_ECVD_HVACCurrentActChrt */
    /* Transition: '<S247>:2' */
    Rte_IrvWrite_FsftTAIR_b_ECVD_HVACCurrentAct_VeTAIR_b_ECVD_HVACCurrentActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_ECVD_HVACCurrentAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_1

FUNC(void, TAIR_CODE) FsftTAIR_b_HghRfrgtPresFailSts(void)
{

#if Rte_SysCon_Variant_TAIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_HghRfrgtPresFailSts' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S40>/FsftTAIR_b_HghRfrgtPresFailStsChrt'
     *  SignalConversion generated from: '<S40>/VeTAIR_b_HghRfrgtPresFailStsFA_write'
     */
    /* Gateway: FsftTAIR_b_HghRfrgtPresFailSts/FsftTAIR_b_HghRfrgtPresFailStsChrt */
    /* During: FsftTAIR_b_HghRfrgtPresFailSts/FsftTAIR_b_HghRfrgtPresFailStsChrt */
    /* Entry Internal: FsftTAIR_b_HghRfrgtPresFailSts/FsftTAIR_b_HghRfrgtPresFailStsChrt */
    /* Transition: '<S248>:2' */
    Rte_IrvWrite_FsftTAIR_b_HghRfrgtPresFailSts_VeTAIR_b_HghRfrgtPresFailStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_HghRfrgtPresFailSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) FsftTAIR_b_RearCabinFanSts(void)
{

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_b_RearCabinFanSts' */
    /* Merge: '<Root>/Merge_213' incorporates:
     *  Chart: '<S41>/FsftTAIR_b_RearCabinFanStsChrt'
     *  SignalConversion generated from: '<S41>/VeTAIR_b_RearCabinFanStsFA_write'
     */
    /* Gateway: FsftTAIR_b_RearCabinFanSts/FsftTAIR_b_RearCabinFanStsChrt */
    /* During: FsftTAIR_b_RearCabinFanSts/FsftTAIR_b_RearCabinFanStsChrt */
    /* Entry Internal: FsftTAIR_b_RearCabinFanSts/FsftTAIR_b_RearCabinFanStsChrt */
    /* Transition: '<S249>:2' */
    Rte_IrvWrite_FsftTAIR_b_RearCabinFanSts_VeTAIR_b_RearCabinFanStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_b_RearCabinFanSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) FsftTAIR_e_AGS2_ErrFdb(void)
{

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_e_AGS2_ErrFdb' */
    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S42>/FsftTAIR_e_AGS2_ErrFdbChrt'
     *  SignalConversion generated from: '<S42>/VeTAIR_b_AGS2_ErrFdbFA_write'
     */
    /* Gateway: FsftTAIR_e_AGS2_ErrFdb/FsftTAIR_e_AGS2_ErrFdbChrt */
    /* During: FsftTAIR_e_AGS2_ErrFdb/FsftTAIR_e_AGS2_ErrFdbChrt */
    /* Entry Internal: FsftTAIR_e_AGS2_ErrFdb/FsftTAIR_e_AGS2_ErrFdbChrt */
    /* Transition: '<S250>:2' */
    Rte_IrvWrite_FsftTAIR_e_AGS2_ErrFdb_VeTAIR_b_AGS2_ErrFdbFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_e_AGS2_ErrFdb' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) FsftTAIR_e_AGS_ErrFdb(void)
{

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_e_AGS_ErrFdb' */
    /* Merge: '<Root>/Merge_62' incorporates:
     *  Chart: '<S43>/FsftTAIR_e_AGS_ErrFdbChrt'
     *  SignalConversion generated from: '<S43>/VeTAIR_b_AGS_ErrFdbFA_write'
     */
    /* Gateway: FsftTAIR_e_AGS_ErrFdb/FsftTAIR_e_AGS_ErrFdbChrt */
    /* During: FsftTAIR_e_AGS_ErrFdb/FsftTAIR_e_AGS_ErrFdbChrt */
    /* Entry Internal: FsftTAIR_e_AGS_ErrFdb/FsftTAIR_e_AGS_ErrFdbChrt */
    /* Transition: '<S251>:2' */
    Rte_IrvWrite_FsftTAIR_e_AGS_ErrFdb_VeTAIR_b_AGS_ErrFdbFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_e_AGS_ErrFdb' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_e_CompFltStat(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_e_CompStat(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_e_EXV_CalStat(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_e_EXV_Err(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_e_EXV_Sts(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) FsftTAIR_e_FrWyVlv_CalSts(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) FsftTAIR_e_FrWyVlv_ErrSts(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) FsftTAIR_e_HTL_BypsVlv_CalSts(void)
{

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_e_HTL_BypsVlv_CalSts' */
    /* Merge: '<Root>/Merge_97' incorporates:
     *  Chart: '<S51>/FsftTAIR_e_HTL_BypsVlv_CalStsChrt'
     *  SignalConversion generated from: '<S51>/VeTAIR_b_HTL_BypsVlv_CalStsFA_write'
     */
    /* Gateway: FsftTAIR_e_HTL_BypsVlv_CalSts/FsftTAIR_e_HTL_BypsVlv_CalStsChrt */
    /* During: FsftTAIR_e_HTL_BypsVlv_CalSts/FsftTAIR_e_HTL_BypsVlv_CalStsChrt */
    /* Entry Internal: FsftTAIR_e_HTL_BypsVlv_CalSts/FsftTAIR_e_HTL_BypsVlv_CalStsChrt */
    /* Transition: '<S259>:2' */
    Rte_IrvWrite_FsftTAIR_e_HTL_BypsVlv_CalSts_VeTAIR_b_HTL_BypsVlv_CalStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_e_HTL_BypsVlv_CalSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) FsftTAIR_e_HTL_BypsVlv_ErrSts(void)
{

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_e_HTL_BypsVlv_ErrSts' */
    /* Merge: '<Root>/Merge_100' incorporates:
     *  Chart: '<S52>/FsftTAIR_e_HTL_BypsVlv_ErrStsChrt'
     *  SignalConversion generated from: '<S52>/VeTAIR_b_HTL_BypsVlv_ErrStsFA_write'
     */
    /* Gateway: FsftTAIR_e_HTL_BypsVlv_ErrSts/FsftTAIR_e_HTL_BypsVlv_ErrStsChrt */
    /* During: FsftTAIR_e_HTL_BypsVlv_ErrSts/FsftTAIR_e_HTL_BypsVlv_ErrStsChrt */
    /* Entry Internal: FsftTAIR_e_HTL_BypsVlv_ErrSts/FsftTAIR_e_HTL_BypsVlv_ErrStsChrt */
    /* Transition: '<S260>:2' */
    Rte_IrvWrite_FsftTAIR_e_HTL_BypsVlv_ErrSts_VeTAIR_b_HTL_BypsVlv_ErrStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_e_HTL_BypsVlv_ErrSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) FsftTAIR_e_LTR_BypsVlv_CalSts(void)
{

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_e_LTR_BypsVlv_CalSts' */
    /* Merge: '<Root>/Merge_87' incorporates:
     *  Chart: '<S53>/FsftTAIR_e_LTR_BypsVlv_CalStsChrt'
     *  SignalConversion generated from: '<S53>/VeTAIR_b_LTR_BypsVlv_CalStsFA_write'
     */
    /* Gateway: FsftTAIR_e_LTR_BypsVlv_CalSts/FsftTAIR_e_LTR_BypsVlv_CalStsChrt */
    /* During: FsftTAIR_e_LTR_BypsVlv_CalSts/FsftTAIR_e_LTR_BypsVlv_CalStsChrt */
    /* Entry Internal: FsftTAIR_e_LTR_BypsVlv_CalSts/FsftTAIR_e_LTR_BypsVlv_CalStsChrt */
    /* Transition: '<S261>:2' */
    Rte_IrvWrite_FsftTAIR_e_LTR_BypsVlv_CalSts_VeTAIR_b_LTR_BypsVlv_CalStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_e_LTR_BypsVlv_CalSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) FsftTAIR_e_LTR_BypsVlv_ErrSts(void)
{

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_e_LTR_BypsVlv_ErrSts' */
    /* Merge: '<Root>/Merge_89' incorporates:
     *  Chart: '<S54>/FsftTAIR_e_LTR_BypsVlv_ErrStsChrt'
     *  SignalConversion generated from: '<S54>/VeTAIR_b_LTR_BypsVlv_ErrStsFA_write'
     */
    /* Gateway: FsftTAIR_e_LTR_BypsVlv_ErrSts/FsftTAIR_e_LTR_BypsVlv_ErrStsChrt */
    /* During: FsftTAIR_e_LTR_BypsVlv_ErrSts/FsftTAIR_e_LTR_BypsVlv_ErrStsChrt */
    /* Entry Internal: FsftTAIR_e_LTR_BypsVlv_ErrSts/FsftTAIR_e_LTR_BypsVlv_ErrStsChrt */
    /* Transition: '<S262>:2' */
    Rte_IrvWrite_FsftTAIR_e_LTR_BypsVlv_ErrSts_VeTAIR_b_LTR_BypsVlv_ErrStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_e_LTR_BypsVlv_ErrSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) FsftTAIR_kp_EXV_RefPress(void)
{

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_kp_EXV_RefPress' */
    /* Merge: '<Root>/Merge_181' incorporates:
     *  Chart: '<S55>/FsftTAIR_kp_EXV_RefPressChrt'
     *  SignalConversion generated from: '<S55>/VeTAIR_b_EXV_RefPressFA_write'
     */
    /* Gateway: FsftTAIR_kp_EXV_RefPress/FsftTAIR_kp_EXV_RefPressChrt */
    /* During: FsftTAIR_kp_EXV_RefPress/FsftTAIR_kp_EXV_RefPressChrt */
    /* Entry Internal: FsftTAIR_kp_EXV_RefPress/FsftTAIR_kp_EXV_RefPressChrt */
    /* Transition: '<S263>:2' */
    Rte_IrvWrite_FsftTAIR_kp_EXV_RefPress_VeTAIR_b_EXV_RefPressFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_kp_EXV_RefPress' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) FsftTAIR_n_CompSpdFdb(void)
{

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_n_CompSpdFdb' */
    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S56>/FsftTAIR_n_CompSpdFdbChrt'
     *  SignalConversion generated from: '<S56>/VeTAIR_b_CompSpdFdbFA_write'
     */
    /* Gateway: FsftTAIR_n_CompSpdFdb/FsftTAIR_n_CompSpdFdbChrt */
    /* During: FsftTAIR_n_CompSpdFdb/FsftTAIR_n_CompSpdFdbChrt */
    /* Entry Internal: FsftTAIR_n_CompSpdFdb/FsftTAIR_n_CompSpdFdbChrt */
    /* Transition: '<S264>:2' */
    Rte_IrvWrite_FsftTAIR_n_CompSpdFdb_VeTAIR_b_CompSpdFdbFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_n_CompSpdFdb' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) FsftTAIR_p_EEXV_RefPress(void)
{

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_p_EEXV_RefPress' */
    /* Merge: '<Root>/Merge_136' incorporates:
     *  Chart: '<S57>/FsftTAIR_p_EEXV_RefPressChrt'
     *  SignalConversion generated from: '<S57>/VeTAIR_b_EEXV_RefPressFA_write'
     */
    /* Gateway: FsftTAIR_p_EEXV_RefPress/FsftTAIR_p_EEXV_RefPressChrt */
    /* During: FsftTAIR_p_EEXV_RefPress/FsftTAIR_p_EEXV_RefPressChrt */
    /* Entry Internal: FsftTAIR_p_EEXV_RefPress/FsftTAIR_p_EEXV_RefPressChrt */
    /* Transition: '<S265>:2' */
    Rte_IrvWrite_FsftTAIR_p_EEXV_RefPress_VeTAIR_b_EEXV_RefPressFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_p_EEXV_RefPress' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) FsftTAIR_p_OEXV_RefPress(void)
{

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_p_OEXV_RefPress' */
    /* Merge: '<Root>/Merge_159' incorporates:
     *  Chart: '<S58>/FsftTAIR_p_OEXV_RefPressChrt'
     *  SignalConversion generated from: '<S58>/VeTAIR_b_OEXV_RefPressFA_write'
     */
    /* Gateway: FsftTAIR_p_OEXV_RefPress/FsftTAIR_p_OEXV_RefPressChrt */
    /* During: FsftTAIR_p_OEXV_RefPress/FsftTAIR_p_OEXV_RefPressChrt */
    /* Entry Internal: FsftTAIR_p_OEXV_RefPress/FsftTAIR_p_OEXV_RefPressChrt */
    /* Transition: '<S266>:2' */
    Rte_IrvWrite_FsftTAIR_p_OEXV_RefPress_VeTAIR_b_OEXV_RefPressFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_p_OEXV_RefPress' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) FsftTAIR_y_CPV2_ErrMsgs(void)
{

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_y_CPV2_ErrMsgs' */
    /* Merge: '<Root>/Merge_150' incorporates:
     *  Chart: '<S59>/FsftTAIR_y_CPV2_ErrMsgsChrt'
     *  SignalConversion generated from: '<S59>/VeTAIR_b_CPV2_ErrMsgsFA_write'
     */
    /* Gateway: FsftTAIR_y_CPV2_ErrMsgs/FsftTAIR_y_CPV2_ErrMsgsChrt */
    /* During: FsftTAIR_y_CPV2_ErrMsgs/FsftTAIR_y_CPV2_ErrMsgsChrt */
    /* Entry Internal: FsftTAIR_y_CPV2_ErrMsgs/FsftTAIR_y_CPV2_ErrMsgsChrt */
    /* Transition: '<S267>:2' */
    Rte_IrvWrite_FsftTAIR_y_CPV2_ErrMsgs_VeTAIR_b_CPV2_ErrMsgsFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_y_CPV2_ErrMsgs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) FsftTAIR_y_FrWyVlv_ErrMsgs(void)
{

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_y_FrWyVlv_ErrMsgs' */
    /* Merge: '<Root>/Merge_199' incorporates:
     *  Chart: '<S60>/FsftTAIR_y_FrWyVlv_ErrMsgsChrt'
     *  SignalConversion generated from: '<S60>/VeTAIR_b_FrWyVlv_ErrMsgsFA_write'
     */
    /* Gateway: FsftTAIR_y_FrWyVlv_ErrMsgs/FsftTAIR_y_FrWyVlv_ErrMsgsChrt */
    /* During: FsftTAIR_y_FrWyVlv_ErrMsgs/FsftTAIR_y_FrWyVlv_ErrMsgsChrt */
    /* Entry Internal: FsftTAIR_y_FrWyVlv_ErrMsgs/FsftTAIR_y_FrWyVlv_ErrMsgsChrt */
    /* Transition: '<S268>:2' */
    Rte_IrvWrite_FsftTAIR_y_FrWyVlv_ErrMsgs_VeTAIR_b_FrWyVlv_ErrMsgsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_y_FrWyVlv_ErrMsgs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) FsftTAIR_y_HTL_BypsVlv_ErrMsgs(void)
{

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_y_HTL_BypsVlv_ErrMsgs' */
    /* Merge: '<Root>/Merge_103' incorporates:
     *  Chart: '<S61>/FsftTAIR_y_HTL_BypsVlv_ErrMsgsChrt'
     *  SignalConversion generated from: '<S61>/VeTAIR_b_HTL_BypsVlv_ErrMsgsFA_write'
     */
    /* Gateway: FsftTAIR_y_HTL_BypsVlv_ErrMsgs/FsftTAIR_y_HTL_BypsVlv_ErrMsgsChrt */
    /* During: FsftTAIR_y_HTL_BypsVlv_ErrMsgs/FsftTAIR_y_HTL_BypsVlv_ErrMsgsChrt */
    /* Entry Internal: FsftTAIR_y_HTL_BypsVlv_ErrMsgs/FsftTAIR_y_HTL_BypsVlv_ErrMsgsChrt */
    /* Transition: '<S269>:2' */
    Rte_IrvWrite_FsftTAIR_y_HTL_BypsVlv_ErrMsgs_VeTAIR_b_HTL_BypsVlv_ErrMsgsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_y_HTL_BypsVlv_ErrMsgs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) FsftTAIR_y_LTR_BypsVlv_ErrMsgs(void)
{

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/FsftTAIR_y_LTR_BypsVlv_ErrMsgs' */
    /* Merge: '<Root>/Merge_92' incorporates:
     *  Chart: '<S62>/FsftTAIR_y_LTR_BypsVlv_ErrMsgsChrt'
     *  SignalConversion generated from: '<S62>/VeTAIR_b_LTR_BypsVlv_ErrMsgsFA_write'
     */
    /* Gateway: FsftTAIR_y_LTR_BypsVlv_ErrMsgs/FsftTAIR_y_LTR_BypsVlv_ErrMsgsChrt */
    /* During: FsftTAIR_y_LTR_BypsVlv_ErrMsgs/FsftTAIR_y_LTR_BypsVlv_ErrMsgsChrt */
    /* Entry Internal: FsftTAIR_y_LTR_BypsVlv_ErrMsgs/FsftTAIR_y_LTR_BypsVlv_ErrMsgsChrt */
    /* Transition: '<S270>:2' */
    Rte_IrvWrite_FsftTAIR_y_LTR_BypsVlv_ErrMsgs_VeTAIR_b_LTR_BypsVlv_ErrMsgsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTAIR_y_LTR_BypsVlv_ErrMsgs' */
#endif

}

#endif

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD001_HigTemShuVal(void)
{
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_j3;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_e3;
    boolean tmpRead;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD001_HigTemShuVal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_HT_Shtoff_VlvCmd'
     */
    /* SignalConversion generated from: '<S201>/VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD001_HigTemShuVal_Op_Value
        (&rtb_TmpSignalConversionAtVeD_j3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD001_HigTemShuVal' */

    /* Inport: '<Root>/VeDCAB_b_IOCD001_HigTemShuVal' */
    (void)Rte_Read_VeDCAB_b_IOCD001_HigTemShuVal_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD001_HigTemShuVal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_HT_Shtoff_VlvCmd'
     */
    /* Switch: '<S201>/Switch' incorporates:
     *  Constant: '<S452>/Constant'
     *  Constant: '<S453>/Constant'
     *  Constant: '<S455>/Constant'
     *  Constant: '<S456>/Constant'
     *  RelationalOperator: '<S201>/Equal'
     *  RelationalOperator: '<S201>/Equal1'
     *  Switch: '<S201>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_j3) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_e3 = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_j3) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S454>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_e3 = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_e3 = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S201>/Switch' */

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S201>/VeTAIF_e_HT_Shtoff_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD001_HigTemShuVal_VeTAIF_e_HT_Shtoff_VlvCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_e3);

    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S201>/VeDCAB_b_IOCD001_HigTemShuVal'
     *  SignalConversion generated from: '<S201>/VeTAIF_b_HT_Shtoff_VlvCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD001_HigTemShuVal_VeTAIF_b_HT_Shtoff_VlvCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD001_HigTemShuVal' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD002_FtRfgtShtoff_VlvCmd(void)
{
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDC_l;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_g5;
    boolean tmpRead;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD002_FtRfgtShtoff_VlvCmd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_FtRfgtShtoff_VlvCmd'
     */
    /* SignalConversion generated from: '<S199>/VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_Op_Value
        (&rtb_TmpSignalConversionAtVeDC_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD002_FtRfgtShtoff_VlvCmd' */

    /* Inport: '<Root>/VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd' */
    (void)Rte_Read_VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD002_FtRfgtShtoff_VlvCmd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_FtRfgtShtoff_VlvCmd'
     */
    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S442>/Constant'
     *  Constant: '<S443>/Constant'
     *  Constant: '<S445>/Constant'
     *  Constant: '<S446>/Constant'
     *  RelationalOperator: '<S199>/Equal'
     *  RelationalOperator: '<S199>/Equal1'
     *  Switch: '<S199>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDC_l) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_g5 = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDC_l) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S444>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_g5 = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_g5 = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S199>/Switch' */

    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S199>/VeTAIF_e_FtRfgtShtoff_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_VeTAIF_e_FtRfgtShtoff_VlvCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_g5);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S199>/VeDCAB_b_IOCD002_FtRfgtShtoff_VlvCmd'
     *  SignalConversion generated from: '<S199>/VeTAIF_b_FtRfgtShtoff_VlvCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD002_FtRfgtShtoff_VlvCmd_VeTAIF_b_FtRfgtShtoff_VlvCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD002_FtRfgtShtoff_VlvCmd' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD004_RadFanDutCycle(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_jf;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_k1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD004_RadFanDutCycle' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_RadFanCmd'
     */
    /* SignalConversion generated from: '<S205>/VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD004_RadFanDutCycle_Op_Value
        (&rtb_TmpSignalConversionAtVeD_jf);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD004_RadFanDutCycle' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD004_RadFanDutCycle' */
    (void)Rte_Read_VeDCAB_Pct_IOCD004_RadFanDutCycle_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD004_RadFanDutCycle' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_RadFanCmd'
     */
    /* Switch: '<S205>/Switch' incorporates:
     *  Constant: '<S468>/Constant'
     *  Constant: '<S469>/Constant'
     *  Constant: '<S471>/Constant'
     *  Constant: '<S472>/Constant'
     *  RelationalOperator: '<S205>/Equal'
     *  RelationalOperator: '<S205>/Equal1'
     *  Switch: '<S205>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_jf) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_k1 = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_jf) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S205>/Switch1' incorporates:
         *  Constant: '<S470>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_k1 = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_k1 = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S205>/Switch' */

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S205>/VeTAIF_e_RadFanCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD004_RadFanDutCycle_VeTAIF_e_RadFanCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_k1);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S205>/VeDCAB_Pct_IOCD004_RadFanDutCycle'
     *  SignalConversion generated from: '<S205>/VeTAIF_Pct_RadFanCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD004_RadFanDutCycle_VeTAIF_Pct_RadFanCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD004_RadFanDutCycle' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd(void)
{
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_ft;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_ex;
    boolean tmpRead;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_ChlrRfgtShtoff_VlvCmd'
     */
    /* SignalConversion generated from: '<S192>/VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_Op_Value
        (&rtb_TmpSignalConversionAtVeD_ft);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd' */

    /* Inport: '<Root>/VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd' */
    (void)Rte_Read_VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_ChlrRfgtShtoff_VlvCmd'
     */
    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S415>/Constant'
     *  Constant: '<S416>/Constant'
     *  Constant: '<S418>/Constant'
     *  Constant: '<S419>/Constant'
     *  RelationalOperator: '<S192>/Equal'
     *  RelationalOperator: '<S192>/Equal1'
     *  Switch: '<S192>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_ft) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_ex = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_ft) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S417>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_ex = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_ex = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S192>/Switch' */

    /* Merge: '<Root>/Merge_113' incorporates:
     *  SignalConversion generated from: '<S192>/VeTAIF_e_ChlrRfgtShtoff_VlvCmd'
     */
    Rte_IrvWrite_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_VeTAIF_e_ChlrRfgtShtoff_VlvCmd_IRV
        (rtb_TmpSignalConversionAtVeD_ex);

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S192>/VeDCAB_b_IOCD007_ChlrRfgtShtoff_VlvCmd'
     *  SignalConversion generated from: '<S192>/VeTAIF_b_ChlrRfgtShtoff_VlvCmd'
     */
    Rte_IrvWrite_IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd_VeTAIF_b_ChlrRfgtShtoff_VlvCmd_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD007_ChlrRfgtShtoff_VlvCmd' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD013_CompSpdTgt(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_pp;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_mc;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD013_CompSpdTgt' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_CompSpdTgt'
     */
    /* SignalConversion generated from: '<S193>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD013_CompSpdTgt_Op_Value
        (&rtb_TmpSignalConversionAtVeD_pp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD013_CompSpdTgt' */

    /* Inport: '<Root>/VeDCAB_n_IOCD013_CompSpdTgt' */
    (void)Rte_Read_VeDCAB_n_IOCD013_CompSpdTgt_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD013_CompSpdTgt' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_CompSpdTgt'
     */
    /* Switch: '<S193>/Switch' incorporates:
     *  Constant: '<S420>/Constant'
     *  Constant: '<S421>/Constant'
     *  Constant: '<S423>/Constant'
     *  Constant: '<S424>/Constant'
     *  RelationalOperator: '<S193>/Equal'
     *  RelationalOperator: '<S193>/Equal1'
     *  Switch: '<S193>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_pp) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_mc = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_pp) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S193>/Switch1' incorporates:
         *  Constant: '<S422>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_mc = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_mc = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S193>/Switch' */

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S193>/VeTAIF_e_CompSpdTgt_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD013_CompSpdTgt_VeTAIF_e_CompSpdTgt_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_mc);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S193>/VeDCAB_n_IOCD013_CompSpdTgt'
     *  SignalConversion generated from: '<S193>/VeTAIF_n_CompSpdTgt_write'
     */
    Rte_IrvWrite_IOControl_IOCD013_CompSpdTgt_VeTAIF_n_CompSpdTgt_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD013_CompSpdTgt' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD01F_ACRefrExpValvActACntrl(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_ec;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_an;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01F_ACRefrExpValvActACntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EXV_PstnCmnd1'
     */
    /* SignalConversion generated from: '<S198>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD01F_ACRefrExpValvActACntrl_Op_Value
        (&rtb_TmpSignalConversionAtVeD_ec);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01F_ACRefrExpValvActACntrl' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl' */
    (void)Rte_Read_VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01F_ACRefrExpValvActACntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EXV_PstnCmnd1'
     */
    /* Switch: '<S198>/Switch' incorporates:
     *  Constant: '<S437>/Constant'
     *  Constant: '<S438>/Constant'
     *  Constant: '<S440>/Constant'
     *  Constant: '<S441>/Constant'
     *  RelationalOperator: '<S198>/Equal'
     *  RelationalOperator: '<S198>/Equal1'
     *  Switch: '<S198>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_ec) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_an = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_ec) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S439>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_an = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_an = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S198>/Switch' */

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S198>/VeTAIF_e_EXV_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD01F_ACRefrExpValvActACntrl_VeTAIF_e_EXV_VlvCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_an);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S198>/VeDCAB_Pct_IOCD01F_ACRefrExpValvActACntrl'
     *  SignalConversion generated from: '<S198>/VeTAIF_Pct_EXV_VlvCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD01F_ACRefrExpValvActACntrl_VeTAIF_Pct_EXV_VlvCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD01F_ACRefrExpValvActACntrl' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD022_PropSysCoolCntrlValvB(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_bn;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_db;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD022_PropSysCoolCntrlValvB' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_LTR_PstnCmnd'
     */
    /* SignalConversion generated from: '<S202>/VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD022_PropSysCoolCntrlValvB_Op_Value
        (&rtb_TmpSignalConversionAtVeD_bn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD022_PropSysCoolCntrlValvB' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB' */
    (void)Rte_Read_VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD022_PropSysCoolCntrlValvB' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_LTR_PstnCmnd'
     */
    /* Switch: '<S202>/Switch' incorporates:
     *  Constant: '<S457>/Constant'
     *  Constant: '<S458>/Constant'
     *  Constant: '<S460>/Constant'
     *  Constant: '<S461>/Constant'
     *  RelationalOperator: '<S202>/Equal'
     *  RelationalOperator: '<S202>/Equal1'
     *  Switch: '<S202>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_bn) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_db = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_bn) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S459>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_db = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_db = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S202>/Switch' */

    /* Merge: '<Root>/Merge_127' incorporates:
     *  SignalConversion generated from: '<S202>/VeTAIF_e_LTR_BypsVlv_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD022_PropSysCoolCntrlValvB_VeTAIF_e_LTR_BypsVlv_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_db);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S202>/VeDCAB_Pct_IOCD022_PropSysCoolCntrlValvB'
     *  SignalConversion generated from: '<S202>/VeTAIF_Pct_LTR_BypsVlv_Cmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD022_PropSysCoolCntrlValvB_VeTAIF_Pct_LTR_BypsVlv_Cmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD022_PropSysCoolCntrlValvB' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD023_PropSysCoolCntrlValvC(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDC_g;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_gx;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD023_PropSysCoolCntrlValvC' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_HTL_PstnCmnd'
     */
    /* SignalConversion generated from: '<S200>/VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD023_PropSysCoolCntrlValvC_Op_Value
        (&rtb_TmpSignalConversionAtVeDC_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD023_PropSysCoolCntrlValvC' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC' */
    (void)Rte_Read_VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD023_PropSysCoolCntrlValvC' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_HTL_PstnCmnd'
     */
    /* Switch: '<S200>/Switch' incorporates:
     *  Constant: '<S447>/Constant'
     *  Constant: '<S448>/Constant'
     *  Constant: '<S450>/Constant'
     *  Constant: '<S451>/Constant'
     *  RelationalOperator: '<S200>/Equal'
     *  RelationalOperator: '<S200>/Equal1'
     *  Switch: '<S200>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDC_g) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_gx = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDC_g) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S449>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_gx = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_gx = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S200>/Switch' */

    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S200>/VeTAIF_e_HTL_BypsVlv_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD023_PropSysCoolCntrlValvC_VeTAIF_e_HTL_BypsVlv_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_gx);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S200>/VeDCAB_Pct_IOCD023_PropSysCoolCntrlValvC'
     *  SignalConversion generated from: '<S200>/VeTAIF_Pct_HTL_BypsVlv_Cmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD023_PropSysCoolCntrlValvC_VeTAIF_Pct_HTL_BypsVlv_Cmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD023_PropSysCoolCntrlValvC' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD025_AGS_PstnCmnd(void)
{
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_ci;
    TeFSCR_e_AGS_PosRq tmpRead;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_a4;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD025_AGS_PstnCmnd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AGS_PstnCmnd'
     */
    /* SignalConversion generated from: '<S190>/VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD025_AGS_PstnCmnd_Op_Value
        (&rtb_TmpSignalConversionAtVeD_ci);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD025_AGS_PstnCmnd' */

    /* Inport: '<Root>/VeDCAB_e_IOCD025_AGS_PstnCmnd' */
    (void)Rte_Read_VeDCAB_e_IOCD025_AGS_PstnCmnd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD025_AGS_PstnCmnd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AGS_PstnCmnd'
     */
    /* Switch: '<S190>/Switch' incorporates:
     *  Constant: '<S405>/Constant'
     *  Constant: '<S406>/Constant'
     *  Constant: '<S408>/Constant'
     *  Constant: '<S409>/Constant'
     *  RelationalOperator: '<S190>/Equal'
     *  RelationalOperator: '<S190>/Equal1'
     *  Switch: '<S190>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_ci) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_a4 = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_ci) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S190>/Switch1' incorporates:
         *  Constant: '<S407>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_a4 = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_a4 = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S190>/Switch' */

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S190>/VeTAIF_e_AGS_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD025_AGS_PstnCmnd_VeTAIF_e_AGS_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_a4);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOCD025_AGS_PstnCmnd'
     *  SignalConversion generated from: '<S190>/VeDCAB_e_IOCD025_AGS_PstnCmnd'
     *  SignalConversion generated from: '<S190>/VeTAIF_e_AGS_PstnCmnd_write'
     */
    Rte_IrvWrite_IOControl_IOCD025_AGS_PstnCmnd_VeTAIF_e_AGS_PstnCmnd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD025_AGS_PstnCmnd' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD026_AGS2_PstnCmnd(void)
{
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_fa;
    TeFSCR_e_AGS_PosRq tmpRead;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDC_g;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD026_AGS2_PstnCmnd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AGS2_PstnCmnd'
     */
    /* SignalConversion generated from: '<S189>/VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD026_AGS2_PstnCmnd_Op_Value
        (&rtb_TmpSignalConversionAtVeD_fa);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD026_AGS2_PstnCmnd' */

    /* Inport: '<Root>/VeDCAB_e_IOCD026_AGS2_PstnCmnd' */
    (void)Rte_Read_VeDCAB_e_IOCD026_AGS2_PstnCmnd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD026_AGS2_PstnCmnd' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AGS2_PstnCmnd'
     */
    /* Switch: '<S189>/Switch' incorporates:
     *  Constant: '<S400>/Constant'
     *  Constant: '<S401>/Constant'
     *  Constant: '<S403>/Constant'
     *  Constant: '<S404>/Constant'
     *  RelationalOperator: '<S189>/Equal'
     *  RelationalOperator: '<S189>/Equal1'
     *  Switch: '<S189>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_fa) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeDC_g = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_fa) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S402>/Constant'
         */
        rtb_TmpSignalConversionAtVeDC_g = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDC_g = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S189>/Switch' */

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S189>/VeTAIF_e_AGS2_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD026_AGS2_PstnCmnd_VeTAIF_e_AGS2_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeDC_g);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOCD026_AGS2_PstnCmnd'
     *  SignalConversion generated from: '<S189>/	VeTAIF_e_AGS2_PstnCmnd_write'
     *  SignalConversion generated from: '<S189>/VeDCAB_e_IOCD026_AGS2_PstnCmnd'
     */
    Rte_IrvWrite_IOControl_IOCD026_AGS2_PstnCmnd_VeTAIF_e_AGS2_PstnCmnd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD026_AGS2_PstnCmnd' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD031_ACRefrExpValvActACntrl(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDC_o;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_j0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD031_ACRefrExpValvActACntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EXV_PstnCmnd'
     */
    /* SignalConversion generated from: '<S197>/VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD031_ACRefrExpValvActACntrl_Op_Value
        (&rtb_TmpSignalConversionAtVeDC_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD031_ACRefrExpValvActACntrl' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl' */
    (void)Rte_Read_VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD031_ACRefrExpValvActACntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EXV_PstnCmnd'
     */
    /* Switch: '<S197>/Switch' incorporates:
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Constant: '<S435>/Constant'
     *  Constant: '<S436>/Constant'
     *  RelationalOperator: '<S197>/Equal'
     *  RelationalOperator: '<S197>/Equal1'
     *  Switch: '<S197>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDC_o) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_j0 = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDC_o) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S434>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_j0 = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_j0 = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S197>/Switch' */

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S197>/VeTAIF_e_EXV_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD031_ACRefrExpValvActACntrl_VeTAIF_e_EXV_VlvCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_j0);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S197>/VeDCAB_Pct_IOCD031_ACRefrExpValvActACntrl'
     *  SignalConversion generated from: '<S197>/VeTAIF_Pct_EXV_VlvCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD031_ACRefrExpValvActACntrl_VeTAIF_Pct_EXV_VlvCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD031_ACRefrExpValvActACntrl' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD032_ACRefrExpValvActCCntrl(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDC_b;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_dy;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD032_ACRefrExpValvActCCntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EEXV_PstnCmnd'
     */
    /* SignalConversion generated from: '<S195>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD032_ACRefrExpValvActCCntrl_Op_Value
        (&rtb_TmpSignalConversionAtVeDC_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD032_ACRefrExpValvActCCntrl' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl' */
    (void)Rte_Read_VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD032_ACRefrExpValvActCCntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EEXV_PstnCmnd'
     */
    /* Switch: '<S195>/Switch' incorporates:
     *  Constant: '<S426>/Constant'
     *  Constant: '<S427>/Constant'
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  RelationalOperator: '<S195>/Equal'
     *  RelationalOperator: '<S195>/Equal1'
     *  Switch: '<S195>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDC_b) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_dy = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDC_b) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S195>/Switch1' incorporates:
         *  Constant: '<S428>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_dy = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_dy = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S195>/Switch' */

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S195>/VeTAIF_e_EEXV_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD032_ACRefrExpValvActCCntrl_VeTAIF_e_EEXV_VlvCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_dy);

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S195>/VeDCAB_Pct_IOCD032_ACRefrExpValvActCCntrl'
     *  SignalConversion generated from: '<S195>/VeTAIF_Pct_EEXV_VlvCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD032_ACRefrExpValvActCCntrl_VeTAIF_Pct_EEXV_VlvCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD032_ACRefrExpValvActCCntrl' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCD033_ACRefrExpValvActDCntrl(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_fx;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_do;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD033_ACRefrExpValvActDCntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_OEXV_PstnCmnd'
     */
    /* SignalConversion generated from: '<S204>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCD033_ACRefrExpValvActDCntrl_Op_Value
        (&rtb_TmpSignalConversionAtVeD_fx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD033_ACRefrExpValvActDCntrl' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl' */
    (void)Rte_Read_VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD033_ACRefrExpValvActDCntrl' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_OEXV_PstnCmnd'
     */
    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S463>/Constant'
     *  Constant: '<S464>/Constant'
     *  Constant: '<S466>/Constant'
     *  Constant: '<S467>/Constant'
     *  RelationalOperator: '<S204>/Equal'
     *  RelationalOperator: '<S204>/Equal1'
     *  Switch: '<S204>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_fx) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_do = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_fx) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S465>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_do = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_do = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S204>/Switch' */

    /* Merge: '<Root>/Merge_131' incorporates:
     *  SignalConversion generated from: '<S204>/VeTAIF_e_OEXV_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCD033_ACRefrExpValvActDCntrl_VeTAIF_e_OEXV_VlvCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_do);

    /* Merge: '<Root>/Merge_132' incorporates:
     *  SignalConversion generated from: '<S204>/VeDCAB_Pct_IOCD033_ACRefrExpValvActDCntrl'
     *  SignalConversion generated from: '<S204>/VeTAIF_Pct_OEXV_VlvCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCD033_ACRefrExpValvActDCntrl_VeTAIF_Pct_OEXV_VlvCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCD033_ACRefrExpValvActDCntrl' */
}

/* Output function */
FUNC(void, TAIR_CODE) IOControl_IOCDOIC_PropSysCoolCntrlValvA(void)
{
    float32 tmpRead;
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeD_jg;
    TeTAIR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeD_nl;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCDOIC_PropSysCoolCntrlValvA' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_CPV_PstnCmnd'
     */
    /* SignalConversion generated from: '<S191>/VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_IOCDOIC_PropSysCoolCntrlValvA_Op_Value
        (&rtb_TmpSignalConversionAtVeD_jg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCDOIC_PropSysCoolCntrlValvA' */

    /* Inport: '<Root>/VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA' */
    (void)Rte_Read_VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCDOIC_PropSysCoolCntrlValvA' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_CPV_PstnCmnd'
     */
    /* Switch: '<S191>/Switch' incorporates:
     *  Constant: '<S410>/Constant'
     *  Constant: '<S411>/Constant'
     *  Constant: '<S413>/Constant'
     *  Constant: '<S414>/Constant'
     *  RelationalOperator: '<S191>/Equal'
     *  RelationalOperator: '<S191>/Equal1'
     *  Switch: '<S191>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeD_jg) == CeDCAB_e_IO_ShortTermAdj)
    {
        rtb_TmpSignalConversionAtVeD_nl = CeTAIR_e_Short_Term_Adjustment;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeD_jg) ==
             CeDCAB_e_IO_ResetToDefault)
    {
        /* Switch: '<S191>/Switch1' incorporates:
         *  Constant: '<S412>/Constant'
         */
        rtb_TmpSignalConversionAtVeD_nl = CeTAIR_e_Reset_to_Default;
    }
    else
    {
        rtb_TmpSignalConversionAtVeD_nl = CeTAIR_e_Return_Control_to_ECU;
    }

    /* End of Switch: '<S191>/Switch' */

    /* Merge: '<Root>/Merge_108' incorporates:
     *  SignalConversion generated from: '<S191>/VeTAIF_e_CPV_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_IOControl_IOCDOIC_PropSysCoolCntrlValvA_VeTAIF_e_CPV_VlvCmd_IO_CntrlSt_write_IRV
        (rtb_TmpSignalConversionAtVeD_nl);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S191>/VeDCAB_Pct_IOCDOIC_PropSysCoolCntrlValvA'
     *  SignalConversion generated from: '<S191>/VeTAIF_Pct_CPV_VlvCmd_write'
     */
    Rte_IrvWrite_IOControl_IOCDOIC_PropSysCoolCntrlValvA_VeTAIF_Pct_CPV_VlvCmd_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_IOCDOIC_PropSysCoolCntrlValvA' */
}

/* Output function */
FUNC(void, TAIR_CODE) PokeTAIF_DVC_HTempCbnVlv(VAR(TeTAIR_e_IO_CntrlSt,
    AUTOMATIC) LeTAIF_e_HT_CabVlvCmd_IO_CntrlSt, VAR(boolean, AUTOMATIC)
    LeTAIF_Pct_HT_CabVlvCmd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIF_DVC_HTempCbnVlv' */
    /* Merge: '<Root>/Merge_109' incorporates:
     *  Chart: '<S63>/PokeTAIF_DVC_HTempCbnVlvChrt'
     *  SignalConversion generated from: '<S63>/LeTAIF_Pct_HT_CabVlvCmd'
     *  SignalConversion generated from: '<S63>/VeTAIF_Pct_HT_CabVlvCmd_write'
     */
    /* Gateway: PokeTAIF_DVC_HTempCbnVlv/PokeTAIF_DVC_HTempCbnVlvChrt */
    /* During: PokeTAIF_DVC_HTempCbnVlv/PokeTAIF_DVC_HTempCbnVlvChrt */
    /* Entry Internal: PokeTAIF_DVC_HTempCbnVlv/PokeTAIF_DVC_HTempCbnVlvChrt */
    /* Transition: '<S271>:2' */
    Rte_IrvWrite_PokeTAIF_DVC_HTempCbnVlv_VeTAIF_Pct_HT_CabVlvCmd_write_IRV
        ((float32)LeTAIF_Pct_HT_CabVlvCmd);

    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S63>/LeTAIF_e_HT_CabVlvCmd_IO_CntrlSt'
     *  SignalConversion generated from: '<S63>/VeTAIF_e_HT_CabVlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_PokeTAIF_DVC_HTempCbnVlv_VeTAIF_e_HT_CabVlvCmd_IO_CntrlSt_write_IRV
        (LeTAIF_e_HT_CabVlvCmd_IO_CntrlSt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIF_DVC_HTempCbnVlv' */
}

/* Output function */
FUNC(void, TAIR_CODE) PokeTAIF_DVC_LT_Shtoff_VlvCmd(VAR(TeTAIR_e_IO_CntrlSt,
    AUTOMATIC) LeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt, VAR(boolean, AUTOMATIC)
    LeTAIF_b_LT_Shtoff_VlvCmd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIF_DVC_LT_Shtoff_VlvCmd' */
    /* Merge: '<Root>/Merge_128' incorporates:
     *  SignalConversion generated from: '<S64>/LeTAIF_b_LT_Shtoff_VlvCmd'
     *  SignalConversion generated from: '<S64>/VeTAIF_b_LT_Shtoff_VlvCmd_write'
     */
    /* Gateway: PokeTAIF_DVC_LT_Shtoff_VlvCmd/PokeTAIF_DVC_LT_Shtoff_VlvCmdChrt */
    /* During: PokeTAIF_DVC_LT_Shtoff_VlvCmd/PokeTAIF_DVC_LT_Shtoff_VlvCmdChrt */
    /* Entry Internal: PokeTAIF_DVC_LT_Shtoff_VlvCmd/PokeTAIF_DVC_LT_Shtoff_VlvCmdChrt */
    /* Transition: '<S272>:2' */
    Rte_IrvWrite_PokeTAIF_DVC_LT_Shtoff_VlvCmd_VeTAIF_b_LT_Shtoff_VlvCmd_write_IRV
        (LeTAIF_b_LT_Shtoff_VlvCmd);

    /* Merge: '<Root>/Merge_129' incorporates:
     *  SignalConversion generated from: '<S64>/LeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt'
     *  SignalConversion generated from: '<S64>/VeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt_write'
     */
    Rte_IrvWrite_PokeTAIF_DVC_LT_Shtoff_VlvCmd_VeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt_write_IRV
        (LeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIF_DVC_LT_Shtoff_VlvCmd' */
}

/* Output function */
FUNC(void, TAIR_CODE) PokeTAIF_e_DVC_HTCV_Calibration_Start(VAR
    (TeTAIR_e_DVC_HTCV_Calibration, AUTOMATIC)
    LeTAIF_e_DVC_HTCV_Calibration_Start)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIF_e_DVC_HTCV_Calibration_Start' */
    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S65>/LeTAIF_e_DVC_HTCV_Calibration_Start'
     *  SignalConversion generated from: '<S65>/VeTAIF_e_DVC_HTCV_Calibration_Start_write'
     */
    /* Gateway: PokeTAIF_e_DVC_HTCV_Calibration_Start/PokeTAIF_e_DVC_HTCV_Calibration_StartChrt */
    /* During: PokeTAIF_e_DVC_HTCV_Calibration_Start/PokeTAIF_e_DVC_HTCV_Calibration_StartChrt */
    /* Entry Internal: PokeTAIF_e_DVC_HTCV_Calibration_Start/PokeTAIF_e_DVC_HTCV_Calibration_StartChrt */
    /* Transition: '<S273>:2' */
    Rte_IrvWrite_PokeTAIF_e_DVC_HTCV_Calibration_Start_VeTAIF_e_DVC_HTCV_Calibration_Start_write_IRV
        (LeTAIF_e_DVC_HTCV_Calibration_Start);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIF_e_DVC_HTCV_Calibration_Start' */
}

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_I_ACCElecCurr(VAR(float32, AUTOMATIC)
    LeTAIR_I_ACCElecCurr, VAR(boolean, AUTOMATIC) LeTAIR_b_ACCElecCurrFA)
{

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_I_ACCElecCurr);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_ACCElecCurrFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_I_ACCElecCurr' */
    /* Chart: '<S66>/PokeTAIR_I_ACCElecCurrChrt' incorporates:
     *  SignalConversion generated from: '<S66>/LeTAIR_I_ACCElecCurr'
     *  SignalConversion generated from: '<S66>/LeTAIR_b_ACCElecCurrFA'
     */
    /* Gateway: PokeTAIR_I_ACCElecCurr/PokeTAIR_I_ACCElecCurrChrt */
    /* During: PokeTAIR_I_ACCElecCurr/PokeTAIR_I_ACCElecCurrChrt */
    /* Entry Internal: PokeTAIR_I_ACCElecCurr/PokeTAIR_I_ACCElecCurrChrt */
    /* Transition: '<S274>:2' */
    if (!LeTAIR_b_ACCElecCurrFA)
    {
        /* Transition: '<S274>:3' */
        /* Transition: '<S274>:15' */
        TAIR_ac_B.LeTAIR_I_ACCElecCurr_out = LeTAIR_I_ACCElecCurr;

        /* Transition: '<S274>:18' */
    }
    else
    {
        /* Transition: '<S274>:4' */
    }

    /* End of Chart: '<S66>/PokeTAIR_I_ACCElecCurrChrt' */

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S66>/VeTAIR_I_ACCElecCurr_write'
     * */
    Rte_IrvWrite_PokeTAIR_I_ACCElecCurr_VeTAIR_I_ACCElecCurr_write_IRV
        (TAIR_ac_B.LeTAIR_I_ACCElecCurr_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_I_ACCElecCurr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_4

FUNC(void, TAIR_CODE) PokeTAIR_I_ECVD_HVACCabinReq(VAR(float32, AUTOMATIC)
    LeTAIR_I_ECVD_HVACCabinReq, VAR(boolean, AUTOMATIC)
    LeTAIR_b_ECVD_HVACCabinReqFA)
{

#if Rte_SysCon_Variant_TAIR_4

    boolean rtb_LeTAIR_b_ECVD_HVACCabinRe_e;

#endif

#if !Rte_SysCon_Variant_TAIR_4

    UNUSED_PARAMETER(LeTAIR_I_ECVD_HVACCabinReq);

#endif

#if !Rte_SysCon_Variant_TAIR_4

    UNUSED_PARAMETER(LeTAIR_b_ECVD_HVACCabinReqFA);

#endif

#if Rte_SysCon_Variant_TAIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_I_ECVD_HVACCabinReq' */
    /* Chart: '<S67>/PokeTAIR_I_ECVD_HVACCabinReqChrt' incorporates:
     *  SignalConversion generated from: '<S67>/LeTAIR_I_ECVD_HVACCabinReq'
     *  SignalConversion generated from: '<S67>/LeTAIR_b_ECVD_HVACCabinReqFA'
     */
    /* Gateway: PokeTAIR_I_ECVD_HVACCabinReq/PokeTAIR_I_ECVD_HVACCabinReqChrt */
    /* During: PokeTAIR_I_ECVD_HVACCabinReq/PokeTAIR_I_ECVD_HVACCabinReqChrt */
    /* Entry Internal: PokeTAIR_I_ECVD_HVACCabinReq/PokeTAIR_I_ECVD_HVACCabinReqChrt */
    /* Transition: '<S275>:2' */
    if (!LeTAIR_b_ECVD_HVACCabinReqFA)
    {
        /* Transition: '<S275>:3' */
        /* Transition: '<S275>:15' */
        TAIR_ac_B.LeTAIR_I_ECVD_HVACCabinReq_out = LeTAIR_I_ECVD_HVACCabinReq;
        rtb_LeTAIR_b_ECVD_HVACCabinRe_e = false;

        /* Transition: '<S275>:18' */
    }
    else
    {
        /* Transition: '<S275>:4' */
        rtb_LeTAIR_b_ECVD_HVACCabinRe_e = true;
    }

    /* End of Chart: '<S67>/PokeTAIR_I_ECVD_HVACCabinReqChrt' */

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S67>/VeTAIR_I_ECVD_HVACCabinReq_write'
     * */
    Rte_IrvWrite_PokeTAIR_I_ECVD_HVACCabinReq_VeTAIR_I_ECVD_HVACCabinReq_write_IRV
        (TAIR_ac_B.LeTAIR_I_ECVD_HVACCabinReq_out);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S67>/VeTAIR_b_ECVD_HVACCabinReqFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_I_ECVD_HVACCabinReq_VeTAIR_b_ECVD_HVACCabinReqFA_write_IRV
        (rtb_LeTAIR_b_ECVD_HVACCabinRe_e);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_I_ECVD_HVACCabinReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_4

FUNC(void, TAIR_CODE) PokeTAIR_I_ECVD_HVACCurrentAct(VAR(float32, AUTOMATIC)
    LeTAIR_I_ECVD_HVACCurrentAct, VAR(boolean, AUTOMATIC)
    LeTAIR_b_ECVD_HVACCurrentActFA)
{

#if Rte_SysCon_Variant_TAIR_4

    boolean rtb_LeTAIR_b_ECVD_HVACCurrent_b;

#endif

#if !Rte_SysCon_Variant_TAIR_4

    UNUSED_PARAMETER(LeTAIR_I_ECVD_HVACCurrentAct);

#endif

#if !Rte_SysCon_Variant_TAIR_4

    UNUSED_PARAMETER(LeTAIR_b_ECVD_HVACCurrentActFA);

#endif

#if Rte_SysCon_Variant_TAIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_I_ECVD_HVACCurrentAct' */
    /* Chart: '<S68>/PokeTAIR_I_ECVD_HVACCurrentActChrt' incorporates:
     *  SignalConversion generated from: '<S68>/LeTAIR_I_ECVD_HVACCurrentAct'
     *  SignalConversion generated from: '<S68>/LeTAIR_b_ECVD_HVACCurrentActFA'
     */
    /* Gateway: PokeTAIR_I_ECVD_HVACCurrentAct/PokeTAIR_I_ECVD_HVACCurrentActChrt */
    /* During: PokeTAIR_I_ECVD_HVACCurrentAct/PokeTAIR_I_ECVD_HVACCurrentActChrt */
    /* Entry Internal: PokeTAIR_I_ECVD_HVACCurrentAct/PokeTAIR_I_ECVD_HVACCurrentActChrt */
    /* Transition: '<S276>:2' */
    if (!LeTAIR_b_ECVD_HVACCurrentActFA)
    {
        /* Transition: '<S276>:3' */
        /* Transition: '<S276>:15' */
        TAIR_ac_B.LeTAIR_I_ECVD_HVACCurrentAct_ou = LeTAIR_I_ECVD_HVACCurrentAct;
        rtb_LeTAIR_b_ECVD_HVACCurrent_b = false;

        /* Transition: '<S276>:18' */
    }
    else
    {
        /* Transition: '<S276>:4' */
        rtb_LeTAIR_b_ECVD_HVACCurrent_b = true;
    }

    /* End of Chart: '<S68>/PokeTAIR_I_ECVD_HVACCurrentActChrt' */

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S68>/VeTAIR_I_ECVD_HVACCurrentAct_write'
     * */
    Rte_IrvWrite_PokeTAIR_I_ECVD_HVACCurrentAct_VeTAIR_I_ECVD_HVACCurrentAct_write_IRV
        (TAIR_ac_B.LeTAIR_I_ECVD_HVACCurrentAct_ou);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S68>/VeTAIR_b_ECVD_HVACCurrentActFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_I_ECVD_HVACCurrentAct_VeTAIR_b_ECVD_HVACCurrentActFA_write_IRV
        (rtb_LeTAIR_b_ECVD_HVACCurrent_b);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_I_ECVD_HVACCurrentAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_P_ACCompElec_Pwr(VAR(float32, AUTOMATIC)
    LeTAIR_P_ACCompElec_Pwr, VAR(boolean, AUTOMATIC) LeTAIR_b_ACCompElec_PwrFA)
{

#if Rte_SysCon_Variant_TAIR_2

    boolean rtb_LeTAIR_b_ACCompElec_PwrFA_g;

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_P_ACCompElec_Pwr);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_ACCompElec_PwrFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_P_ACCompElec_Pwr' */
    /* Chart: '<S69>/PokeTAIR_P_ACCompElec_PwrChrt' incorporates:
     *  SignalConversion generated from: '<S69>/LeTAIR_P_ACCompElec_Pwr'
     *  SignalConversion generated from: '<S69>/LeTAIR_b_ACCompElec_PwrFA'
     */
    /* Gateway: PokeTAIR_P_ACCompElec_Pwr/PokeTAIR_P_ACCompElec_PwrChrt */
    /* During: PokeTAIR_P_ACCompElec_Pwr/PokeTAIR_P_ACCompElec_PwrChrt */
    /* Entry Internal: PokeTAIR_P_ACCompElec_Pwr/PokeTAIR_P_ACCompElec_PwrChrt */
    /* Transition: '<S277>:2' */
    if (!LeTAIR_b_ACCompElec_PwrFA)
    {
        /* Transition: '<S277>:3' */
        /* Transition: '<S277>:15' */
        TAIR_ac_B.LeTAIR_P_ACCompElec_Pwr_out = LeTAIR_P_ACCompElec_Pwr;
        rtb_LeTAIR_b_ACCompElec_PwrFA_g = false;

        /* Transition: '<S277>:18' */
    }
    else
    {
        /* Transition: '<S277>:4' */
        rtb_LeTAIR_b_ACCompElec_PwrFA_g = true;
    }

    /* End of Chart: '<S69>/PokeTAIR_P_ACCompElec_PwrChrt' */

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S69>/VeTAIR_P_ACCompElec_Pwr_write'
     * */
    Rte_IrvWrite_PokeTAIR_P_ACCompElec_Pwr_VeTAIR_P_ACCompElec_Pwr_write_IRV
        (TAIR_ac_B.LeTAIR_P_ACCompElec_Pwr_out);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S69>/VeTAIR_b_ACCompElec_PwrFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_P_ACCompElec_Pwr_VeTAIR_b_ACCompElec_PwrFA_write_IRV
        (rtb_LeTAIR_b_ACCompElec_PwrFA_g);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_P_ACCompElec_Pwr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_6

FUNC(void, TAIR_CODE) PokeTAIR_Pct_AGS2_CurrPos_CAN(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_AGS2_CurrPos_CAN, VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_CurrPos_CANFA)
{

#if Rte_SysCon_Variant_TAIR_6

    boolean rtb_LeTAIR_b_AGS2_CurrPos_CAN_m;

#endif

#if !Rte_SysCon_Variant_TAIR_6

    UNUSED_PARAMETER(LeTAIR_Pct_AGS2_CurrPos_CAN);

#endif

#if !Rte_SysCon_Variant_TAIR_6

    UNUSED_PARAMETER(LeTAIR_b_AGS2_CurrPos_CANFA);

#endif

#if Rte_SysCon_Variant_TAIR_6

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_AGS2_CurrPos_CAN' */
    /* Chart: '<S70>/PokeTAIR_Pct_AGS2_CurrPos_CANChrt' incorporates:
     *  SignalConversion generated from: '<S70>/LeTAIR_Pct_AGS2_CurrPos_CAN'
     *  SignalConversion generated from: '<S70>/LeTAIR_b_AGS2_CurrPos_CANFA'
     */
    /* Gateway: PokeTAIR_Pct_AGS2_CurrPos_CAN/PokeTAIR_Pct_AGS2_CurrPos_CANChrt */
    /* During: PokeTAIR_Pct_AGS2_CurrPos_CAN/PokeTAIR_Pct_AGS2_CurrPos_CANChrt */
    /* Entry Internal: PokeTAIR_Pct_AGS2_CurrPos_CAN/PokeTAIR_Pct_AGS2_CurrPos_CANChrt */
    /* Transition: '<S278>:2' */
    if (!LeTAIR_b_AGS2_CurrPos_CANFA)
    {
        /* Transition: '<S278>:3' */
        /* Transition: '<S278>:15' */
        TAIR_ac_B.LeTAIR_Pct_AGS2_CurrPos_CAN_out = LeTAIR_Pct_AGS2_CurrPos_CAN;
        rtb_LeTAIR_b_AGS2_CurrPos_CAN_m = false;

        /* Transition: '<S278>:18' */
    }
    else
    {
        /* Transition: '<S278>:4' */
        rtb_LeTAIR_b_AGS2_CurrPos_CAN_m = true;
    }

    /* End of Chart: '<S70>/PokeTAIR_Pct_AGS2_CurrPos_CANChrt' */

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S70>/VeTAIR_Pct_AGS2_CurrPos_CAN_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_AGS2_CurrPos_CAN_VeTAIR_Pct_AGS2_CurrPos_CAN_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_AGS2_CurrPos_CAN_out);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S70>/VeTAIR_b_AGS2_CurrPos_CANFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_AGS2_CurrPos_CAN_VeTAIR_b_AGS2_CurrPosFA_write_IRV
        (rtb_LeTAIR_b_AGS2_CurrPos_CAN_m);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_AGS2_CurrPos_CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_6

FUNC(void, TAIR_CODE) PokeTAIR_Pct_AGS_CurrPos_CAN(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_AGS_CurrPos_CAN, VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_CurrPos_CANFA)
{

#if Rte_SysCon_Variant_TAIR_6

    boolean rtb_LeTAIR_b_AGS_CurrPos_CANFA_;

#endif

#if !Rte_SysCon_Variant_TAIR_6

    UNUSED_PARAMETER(LeTAIR_Pct_AGS_CurrPos_CAN);

#endif

#if !Rte_SysCon_Variant_TAIR_6

    UNUSED_PARAMETER(LeTAIR_b_AGS_CurrPos_CANFA);

#endif

#if Rte_SysCon_Variant_TAIR_6

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_AGS_CurrPos_CAN' */
    /* Chart: '<S71>/PokeTAIR_Pct_AGS_CurrPos_CANChrt' incorporates:
     *  SignalConversion generated from: '<S71>/LeTAIR_Pct_AGS_CurrPos_CAN'
     *  SignalConversion generated from: '<S71>/LeTAIR_b_AGS_CurrPos_CANFA'
     */
    /* Gateway: PokeTAIR_Pct_AGS_CurrPos_CAN/PokeTAIR_Pct_AGS_CurrPos_CANChrt */
    /* During: PokeTAIR_Pct_AGS_CurrPos_CAN/PokeTAIR_Pct_AGS_CurrPos_CANChrt */
    /* Entry Internal: PokeTAIR_Pct_AGS_CurrPos_CAN/PokeTAIR_Pct_AGS_CurrPos_CANChrt */
    /* Transition: '<S279>:2' */
    if (!LeTAIR_b_AGS_CurrPos_CANFA)
    {
        /* Transition: '<S279>:3' */
        /* Transition: '<S279>:15' */
        TAIR_ac_B.LeTAIR_Pct_AGS_CurrPos_CAN_out = LeTAIR_Pct_AGS_CurrPos_CAN;
        rtb_LeTAIR_b_AGS_CurrPos_CANFA_ = false;

        /* Transition: '<S279>:18' */
    }
    else
    {
        /* Transition: '<S279>:4' */
        rtb_LeTAIR_b_AGS_CurrPos_CANFA_ = true;
    }

    /* End of Chart: '<S71>/PokeTAIR_Pct_AGS_CurrPos_CANChrt' */

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S71>/VeTAIR_Pct_AGS_CurrPos_CAN_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_AGS_CurrPos_CAN_VeTAIR_Pct_AGS_CurrPos_CAN_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_AGS_CurrPos_CAN_out);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S71>/VeTAIR_b_AGS_CurrPos_CANFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_AGS_CurrPos_CAN_VeTAIR_b_AGS_CurrPosFA_write_IRV
        (rtb_LeTAIR_b_AGS_CurrPos_CANFA_);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_AGS_CurrPos_CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) PokeTAIR_Pct_CPV2_ActlPstn(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_CPV2_ActlPstn, VAR(boolean, AUTOMATIC) LeTAIR_b_CPV2_ActlPstnFA)
{

#if Rte_SysCon_Variant_TAIR_15

    boolean rtb_LeTAIR_b_CPV2_ActlPstnFA__c;

#endif

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_Pct_CPV2_ActlPstn);

#endif

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_b_CPV2_ActlPstnFA);

#endif

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_CPV2_ActlPstn' */
    /* Chart: '<S72>/PokeTAIR_Pct_CPV2_ActlPstnChrt' incorporates:
     *  SignalConversion generated from: '<S72>/LeTAIR_Pct_CPV2_ActlPstn'
     *  SignalConversion generated from: '<S72>/LeTAIR_b_CPV2_ActlPstnFA'
     */
    /* Gateway: PokeTAIR_Pct_CPV2_ActlPstn/PokeTAIR_Pct_CPV2_ActlPstnChrt */
    /* During: PokeTAIR_Pct_CPV2_ActlPstn/PokeTAIR_Pct_CPV2_ActlPstnChrt */
    /* Entry Internal: PokeTAIR_Pct_CPV2_ActlPstn/PokeTAIR_Pct_CPV2_ActlPstnChrt */
    /* Transition: '<S280>:2' */
    if (!LeTAIR_b_CPV2_ActlPstnFA)
    {
        /* Transition: '<S280>:3' */
        /* Transition: '<S280>:15' */
        TAIR_ac_B.LeTAIR_Pct_CPV2_ActlPstn_out = LeTAIR_Pct_CPV2_ActlPstn;
        rtb_LeTAIR_b_CPV2_ActlPstnFA__c = false;

        /* Transition: '<S280>:18' */
    }
    else
    {
        /* Transition: '<S280>:4' */
        rtb_LeTAIR_b_CPV2_ActlPstnFA__c = true;
    }

    /* End of Chart: '<S72>/PokeTAIR_Pct_CPV2_ActlPstnChrt' */

    /* Merge: '<Root>/Merge_146' incorporates:
     *  SignalConversion generated from: '<S72>/VeTAIR_Pct_CPV2_ActlPstn_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_CPV2_ActlPstn_VeTAIR_Pct_CPV2_ActlPstn_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_CPV2_ActlPstn_out);

    /* Merge: '<Root>/Merge_147' incorporates:
     *  SignalConversion generated from: '<S72>/VeTAIR_b_CPV2_ActlPstnFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_CPV2_ActlPstn_VeTAIR_b_CPV2_ActlPstnFA_write_IRV
        (rtb_LeTAIR_b_CPV2_ActlPstnFA__c);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_CPV2_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_Pct_DrvTmpDr_Pos(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_DrvTmpDr_Pos, VAR(boolean, AUTOMATIC) LeTAIR_b_DrvTmpDr_PosFA)
{
    UNUSED_PARAMETER(LeTAIR_Pct_DrvTmpDr_Pos);
    UNUSED_PARAMETER(LeTAIR_b_DrvTmpDr_PosFA);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_7

FUNC(void, TAIR_CODE) PokeTAIR_Pct_ECM_AirflowRequest(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_ECM_AirflowRequest, VAR(boolean, AUTOMATIC)
    LeTAIR_b_ECM_AirflowRequestFA)
{

#if Rte_SysCon_Variant_TAIR_7

    boolean rtb_LeTAIR_b_ECM_AirflowReque_d;

#endif

#if !Rte_SysCon_Variant_TAIR_7

    UNUSED_PARAMETER(LeTAIR_Pct_ECM_AirflowRequest);

#endif

#if !Rte_SysCon_Variant_TAIR_7

    UNUSED_PARAMETER(LeTAIR_b_ECM_AirflowRequestFA);

#endif

#if Rte_SysCon_Variant_TAIR_7

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_ECM_AirflowRequest' */
    /* Chart: '<S74>/PokeTAIR_Pct_ECM_AirflowRequestChrt' incorporates:
     *  SignalConversion generated from: '<S74>/LeTAIR_Pct_ECM_AirflowRequest'
     *  SignalConversion generated from: '<S74>/LeTAIR_b_ECM_AirflowRequestFA'
     */
    /* Gateway: PokeTAIR_Pct_ECM_AirflowRequest/PokeTAIR_Pct_ECM_AirflowRequestChrt */
    /* During: PokeTAIR_Pct_ECM_AirflowRequest/PokeTAIR_Pct_ECM_AirflowRequestChrt */
    /* Entry Internal: PokeTAIR_Pct_ECM_AirflowRequest/PokeTAIR_Pct_ECM_AirflowRequestChrt */
    /* Transition: '<S282>:2' */
    if (!LeTAIR_b_ECM_AirflowRequestFA)
    {
        /* Transition: '<S282>:3' */
        /* Transition: '<S282>:15' */
        TAIR_ac_B.LeTAIR_Pct_ECM_AirflowRequest_o =
            LeTAIR_Pct_ECM_AirflowRequest;
        rtb_LeTAIR_b_ECM_AirflowReque_d = false;

        /* Transition: '<S282>:18' */
    }
    else
    {
        /* Transition: '<S282>:4' */
        rtb_LeTAIR_b_ECM_AirflowReque_d = true;
    }

    /* End of Chart: '<S74>/PokeTAIR_Pct_ECM_AirflowRequestChrt' */

    /* Merge: '<Root>/Merge_82' incorporates:
     *  SignalConversion generated from: '<S74>/VeTAIR_Pct_ECM_AirflowRequest_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_ECM_AirflowRequest_VeTAIR_Pct_ECM_AirflowRequest_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_ECM_AirflowRequest_o);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  SignalConversion generated from: '<S74>/VeTAIR_b_ECM_AirflowRequestFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_ECM_AirflowRequest_VeTAIR_b_ECM_AirflowRequestFA_write_IRV
        (rtb_LeTAIR_b_ECM_AirflowReque_d);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_ECM_AirflowRequest' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_7

FUNC(void, TAIR_CODE) PokeTAIR_Pct_ECM_RadFanReq(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_ECM_RadFanReq, VAR(boolean, AUTOMATIC) LeTAIR_b_ECM_RadFanReqFA)
{

#if Rte_SysCon_Variant_TAIR_7

    boolean rtb_LeTAIR_b_ECM_RadFanReqFA__o;

#endif

#if !Rte_SysCon_Variant_TAIR_7

    UNUSED_PARAMETER(LeTAIR_Pct_ECM_RadFanReq);

#endif

#if !Rte_SysCon_Variant_TAIR_7

    UNUSED_PARAMETER(LeTAIR_b_ECM_RadFanReqFA);

#endif

#if Rte_SysCon_Variant_TAIR_7

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_ECM_RadFanReq' */
    /* Chart: '<S75>/PokeTAIR_Pct_ECM_RadFanReqChrt' incorporates:
     *  SignalConversion generated from: '<S75>/LeTAIR_Pct_ECM_RadFanReq'
     *  SignalConversion generated from: '<S75>/LeTAIR_b_ECM_RadFanReqFA'
     */
    /* Gateway: PokeTAIR_Pct_ECM_RadFanReq/PokeTAIR_Pct_ECM_RadFanReqChrt */
    /* During: PokeTAIR_Pct_ECM_RadFanReq/PokeTAIR_Pct_ECM_RadFanReqChrt */
    /* Entry Internal: PokeTAIR_Pct_ECM_RadFanReq/PokeTAIR_Pct_ECM_RadFanReqChrt */
    /* Transition: '<S283>:2' */
    if (!LeTAIR_b_ECM_RadFanReqFA)
    {
        /* Transition: '<S283>:3' */
        /* Transition: '<S283>:15' */
        TAIR_ac_B.LeTAIR_Pct_ECM_RadFanReq_out = LeTAIR_Pct_ECM_RadFanReq;
        rtb_LeTAIR_b_ECM_RadFanReqFA__o = false;

        /* Transition: '<S283>:18' */
    }
    else
    {
        /* Transition: '<S283>:4' */
        rtb_LeTAIR_b_ECM_RadFanReqFA__o = true;
    }

    /* End of Chart: '<S75>/PokeTAIR_Pct_ECM_RadFanReqChrt' */

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S75>/VeTAIR_Pct_ECM_RadFanReq_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_ECM_RadFanReq_VeTAIR_Pct_ECM_RadFanReq_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_ECM_RadFanReq_out);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S75>/VeTAIR_b_ECM_RadFanReqFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_ECM_RadFanReq_VeTAIR_b_ECM_RadFanReqFA_write_IRV
        (rtb_LeTAIR_b_ECM_RadFanReqFA__o);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_ECM_RadFanReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_Pct_EEXV_PosAct(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_EEXV_PosAct, VAR(boolean, AUTOMATIC) LeTAIR_b_EEXV_PosActFA)
{

#if Rte_SysCon_Variant_TAIR_11

    boolean rtb_LeTAIR_b_EEXV_PosActFA_ou_m;

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_Pct_EEXV_PosAct);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_PosActFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_EEXV_PosAct' */
    /* Chart: '<S76>/PokeTAIR_Pct_EEXV_PosActChrt' incorporates:
     *  SignalConversion generated from: '<S76>/LeTAIR_Pct_EEXV_PosAct'
     *  SignalConversion generated from: '<S76>/LeTAIR_b_EEXV_PosActFA'
     */
    /* Gateway: PokeTAIR_Pct_EEXV_PosAct/PokeTAIR_Pct_EEXV_PosActChrt */
    /* During: PokeTAIR_Pct_EEXV_PosAct/PokeTAIR_Pct_EEXV_PosActChrt */
    /* Entry Internal: PokeTAIR_Pct_EEXV_PosAct/PokeTAIR_Pct_EEXV_PosActChrt */
    /* Transition: '<S284>:2' */
    if (!LeTAIR_b_EEXV_PosActFA)
    {
        /* Transition: '<S284>:3' */
        /* Transition: '<S284>:15' */
        TAIR_ac_B.LeTAIR_Pct_EEXV_PosAct_out = LeTAIR_Pct_EEXV_PosAct;
        rtb_LeTAIR_b_EEXV_PosActFA_ou_m = false;

        /* Transition: '<S284>:18' */
    }
    else
    {
        /* Transition: '<S284>:4' */
        rtb_LeTAIR_b_EEXV_PosActFA_ou_m = true;
    }

    /* End of Chart: '<S76>/PokeTAIR_Pct_EEXV_PosActChrt' */

    /* Merge: '<Root>/Merge_139' incorporates:
     *  SignalConversion generated from: '<S76>/VeTAIR_Pct_EEXV_PosAct_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_EEXV_PosAct_VeTAIR_Pct_EEXV_PosAct_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_EEXV_PosAct_out);

    /* Merge: '<Root>/Merge_141' incorporates:
     *  SignalConversion generated from: '<S76>/VeTAIR_b_EEXV_PosActFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_EEXV_PosAct_VeTAIR_b_EEXV_PosActFA_write_IRV
        (rtb_LeTAIR_b_EEXV_PosActFA_ou_m);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_EEXV_PosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_Pct_EXV_PosAct(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_EXV_PosAct, VAR(boolean, AUTOMATIC) LeTAIR_b_EXV_PosActFA)
{

#if Rte_SysCon_Variant_TAIR_13

    boolean rtb_LeTAIR_b_EXV_PosActFA_out_m;

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_Pct_EXV_PosAct);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_PosActFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_EXV_PosAct' */
    /* Chart: '<S77>/PokeTAIR_Pct_EXV_PosActChrt' incorporates:
     *  SignalConversion generated from: '<S77>/LeTAIR_Pct_EXV_PosAct'
     *  SignalConversion generated from: '<S77>/LeTAIR_b_EXV_PosActFA'
     */
    /* Gateway: PokeTAIR_Pct_EXV_PosAct/PokeTAIR_Pct_EXV_PosActChrt */
    /* During: PokeTAIR_Pct_EXV_PosAct/PokeTAIR_Pct_EXV_PosActChrt */
    /* Entry Internal: PokeTAIR_Pct_EXV_PosAct/PokeTAIR_Pct_EXV_PosActChrt */
    /* Transition: '<S285>:2' */
    if (!LeTAIR_b_EXV_PosActFA)
    {
        /* Transition: '<S285>:3' */
        /* Transition: '<S285>:15' */
        TAIR_ac_B.LeTAIR_Pct_EXV_PosAct_out = LeTAIR_Pct_EXV_PosAct;
        rtb_LeTAIR_b_EXV_PosActFA_out_m = false;

        /* Transition: '<S285>:18' */
    }
    else
    {
        /* Transition: '<S285>:4' */
        rtb_LeTAIR_b_EXV_PosActFA_out_m = true;
    }

    /* End of Chart: '<S77>/PokeTAIR_Pct_EXV_PosActChrt' */

    /* Merge: '<Root>/Merge_184' incorporates:
     *  SignalConversion generated from: '<S77>/VeTAIR_Pct_EXV_PosAct_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_EXV_PosAct_VeTAIR_Pct_EXV_PosAct_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_EXV_PosAct_out);

    /* Merge: '<Root>/Merge_186' incorporates:
     *  SignalConversion generated from: '<S77>/VeTAIR_b_EXV_PosActFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_EXV_PosAct_VeTAIR_b_EXV_PosActFA_write_IRV
        (rtb_LeTAIR_b_EXV_PosActFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_EXV_PosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) PokeTAIR_Pct_FrWyVlv_ActlPstn(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_FrWyVlv_ActlPstn, VAR(boolean, AUTOMATIC)
    LeTAIR_b_FrWyVlv_ActlPstnFA)
{

#if Rte_SysCon_Variant_TAIR_14

    boolean rtb_LeTAIR_b_FrWyVlv_ActlPstn_e;

#endif

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_Pct_FrWyVlv_ActlPstn);

#endif

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_b_FrWyVlv_ActlPstnFA);

#endif

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_FrWyVlv_ActlPstn' */
    /* Chart: '<S78>/PokeTAIR_Pct_FrWyVlv_ActlPstnChrt' incorporates:
     *  SignalConversion generated from: '<S78>/LeTAIR_Pct_FrWyVlv_ActlPstn'
     *  SignalConversion generated from: '<S78>/LeTAIR_b_FrWyVlv_ActlPstnFA'
     */
    /* Gateway: PokeTAIR_Pct_FrWyVlv_ActlPstn/PokeTAIR_Pct_FrWyVlv_ActlPstnChrt */
    /* During: PokeTAIR_Pct_FrWyVlv_ActlPstn/PokeTAIR_Pct_FrWyVlv_ActlPstnChrt */
    /* Entry Internal: PokeTAIR_Pct_FrWyVlv_ActlPstn/PokeTAIR_Pct_FrWyVlv_ActlPstnChrt */
    /* Transition: '<S286>:2' */
    if (!LeTAIR_b_FrWyVlv_ActlPstnFA)
    {
        /* Transition: '<S286>:3' */
        /* Transition: '<S286>:15' */
        TAIR_ac_B.LeTAIR_Pct_FrWyVlv_ActlPstn_out = LeTAIR_Pct_FrWyVlv_ActlPstn;
        rtb_LeTAIR_b_FrWyVlv_ActlPstn_e = false;

        /* Transition: '<S286>:18' */
    }
    else
    {
        /* Transition: '<S286>:4' */
        rtb_LeTAIR_b_FrWyVlv_ActlPstn_e = true;
    }

    /* End of Chart: '<S78>/PokeTAIR_Pct_FrWyVlv_ActlPstnChrt' */

    /* Merge: '<Root>/Merge_193' incorporates:
     *  SignalConversion generated from: '<S78>/VeTAIR_Pct_FrWyVlv_ActlPstn_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_FrWyVlv_ActlPstn_VeTAIR_Pct_FrWyVlv_ActlPstn_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_FrWyVlv_ActlPstn_out);

    /* Merge: '<Root>/Merge_194' incorporates:
     *  SignalConversion generated from: '<S78>/VeTAIR_b_FrWyVlv_ActlPstnFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_FrWyVlv_ActlPstn_VeTAIR_b_FrWyVlv_ActlPstnFA_write_IRV
        (rtb_LeTAIR_b_FrWyVlv_ActlPstn_e);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_FrWyVlv_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_Pct_FrtBlwrCmd(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_FrtBlwrCmd, VAR(boolean, AUTOMATIC) LeTAIR_b_FrtBlwrCmdFA)
{

#if Rte_SysCon_Variant_TAIR_3

    boolean rtb_LeTAIR_b_FrtBlwrCmdFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_Pct_FrtBlwrCmd);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_FrtBlwrCmdFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_FrtBlwrCmd' */
    /* Chart: '<S79>/PokeTAIR_Pct_FrtBlwrCmdChrt' incorporates:
     *  SignalConversion generated from: '<S79>/LeTAIR_Pct_FrtBlwrCmd'
     *  SignalConversion generated from: '<S79>/LeTAIR_b_FrtBlwrCmdFA'
     */
    /* Gateway: PokeTAIR_Pct_FrtBlwrCmd/PokeTAIR_Pct_FrtBlwrCmdChrt */
    /* During: PokeTAIR_Pct_FrtBlwrCmd/PokeTAIR_Pct_FrtBlwrCmdChrt */
    /* Entry Internal: PokeTAIR_Pct_FrtBlwrCmd/PokeTAIR_Pct_FrtBlwrCmdChrt */
    /* Transition: '<S287>:2' */
    if (!LeTAIR_b_FrtBlwrCmdFA)
    {
        /* Transition: '<S287>:3' */
        /* Transition: '<S287>:15' */
        TAIR_ac_B.LeTAIR_Pct_FrtBlwrCmd_out = LeTAIR_Pct_FrtBlwrCmd;
        rtb_LeTAIR_b_FrtBlwrCmdFA_out = false;

        /* Transition: '<S287>:18' */
    }
    else
    {
        /* Transition: '<S287>:4' */
        rtb_LeTAIR_b_FrtBlwrCmdFA_out = true;
    }

    /* End of Chart: '<S79>/PokeTAIR_Pct_FrtBlwrCmdChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S79>/VeTAIR_Pct_FrtBlwrCmd_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_FrtBlwrCmd_VeTAIR_Pct_FrtBlwrCmd_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_FrtBlwrCmd_out);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S79>/VeTAIR_b_FrtBlwrCmdFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_FrtBlwrCmd_VeTAIR_b_FrtBlwrCmdFA_write_IRV
        (rtb_LeTAIR_b_FrtBlwrCmdFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_FrtBlwrCmd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) PokeTAIR_Pct_HTL_BypsVlv_ActlPstn(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_HTL_BypsVlv_ActlPstn, VAR(boolean, AUTOMATIC)
    LeTAIR_b_HTL_BypsVlv_ActlPstnFA)
{

#if Rte_SysCon_Variant_TAIR_10

    boolean rtb_LeTAIR_b_HTL_BypsVlv_Actl_g;

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_Pct_HTL_BypsVlv_ActlPstn);

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_b_HTL_BypsVlv_ActlPstnFA);

#endif

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_HTL_BypsVlv_ActlPstn' */
    /* Chart: '<S80>/PokeTAIR_Pct_HTL_BypsVlv_ActlPstnChrt' incorporates:
     *  SignalConversion generated from: '<S80>/LeTAIR_Pct_HTL_BypsVlv_ActlPstn'
     *  SignalConversion generated from: '<S80>/LeTAIR_b_HTL_BypsVlv_ActlPstnFA'
     */
    /* Gateway: PokeTAIR_Pct_HTL_BypsVlv_ActlPstn/PokeTAIR_Pct_HTL_BypsVlv_ActlPstnChrt */
    /* During: PokeTAIR_Pct_HTL_BypsVlv_ActlPstn/PokeTAIR_Pct_HTL_BypsVlv_ActlPstnChrt */
    /* Entry Internal: PokeTAIR_Pct_HTL_BypsVlv_ActlPstn/PokeTAIR_Pct_HTL_BypsVlv_ActlPstnChrt */
    /* Transition: '<S288>:2' */
    if (!LeTAIR_b_HTL_BypsVlv_ActlPstnFA)
    {
        /* Transition: '<S288>:3' */
        /* Transition: '<S288>:15' */
        TAIR_ac_B.LeTAIR_Pct_HTL_BypsVlv_ActlPs_b =
            LeTAIR_Pct_HTL_BypsVlv_ActlPstn;
        rtb_LeTAIR_b_HTL_BypsVlv_Actl_g = false;

        /* Transition: '<S288>:18' */
    }
    else
    {
        /* Transition: '<S288>:4' */
        rtb_LeTAIR_b_HTL_BypsVlv_Actl_g = true;
    }

    /* End of Chart: '<S80>/PokeTAIR_Pct_HTL_BypsVlv_ActlPstnChrt' */

    /* Merge: '<Root>/Merge_94' incorporates:
     *  SignalConversion generated from: '<S80>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_HTL_BypsVlv_ActlPstn_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_HTL_BypsVlv_ActlPs_b);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S80>/VeTAIR_b_HTL_BypsVlv_ActlPstnFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_HTL_BypsVlv_ActlPstn_VeTAIR_b_HTL_BypsVlv_ActlPstnFA_write_IRV
        (rtb_LeTAIR_b_HTL_BypsVlv_Actl_g);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_HTL_BypsVlv_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_Pct_HTRBV_ActuatorPosAct(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_HTRBV_ActuatorPosAct)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_Pct_HTRBV_ActuatorPosAct);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_HTRBV_ActuatorPosAct' */
    /* Merge: '<Root>/Merge_171' incorporates:
     *  Chart: '<S81>/PokeTAIR_Pct_HTRBV_ActuatorPosActChart'
     *  SignalConversion generated from: '<S81>/LeTAIR_b_HTRBV_ActuatorPosActFA_out_write'
     */
    /* Gateway: PokeTAIR_Pct_HTRBV_ActuatorPosAct/PokeTAIR_Pct_HTRBV_ActuatorPosActChart */
    /* During: PokeTAIR_Pct_HTRBV_ActuatorPosAct/PokeTAIR_Pct_HTRBV_ActuatorPosActChart */
    /* Entry Internal: PokeTAIR_Pct_HTRBV_ActuatorPosAct/PokeTAIR_Pct_HTRBV_ActuatorPosActChart */
    /* Transition: '<S289>:2' */
    Rte_IrvWrite_PokeTAIR_Pct_HTRBV_ActuatorPosAct_FsftTAIR_Pct_HTRBV_ActuatorPosActFA_write_IRV
        (false);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S81>/LeTAIR_U_EEXV_SupplyVolt'
     *  SignalConversion generated from: '<S81>/PokeTAIR_Pct_HTRBV_ActuatorPosAct_write'
     */
    Rte_IrvWrite_PokeTAIR_Pct_HTRBV_ActuatorPosAct_PokeTAIR_Pct_HTRBV_ActuatorPosAct_write_IRV
        (LeTAIR_Pct_HTRBV_ActuatorPosAct);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_HTRBV_ActuatorPosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_Pct_HTRBV_ActuatorPosTrgt(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_HTRBV_ActuatorPosTrgt)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_Pct_HTRBV_ActuatorPosTrgt);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_HTRBV_ActuatorPosTrgt' */
    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S82>/LeTAIR_Pct_LTR_BypsVlv_ActlPstn'
     *  SignalConversion generated from: '<S82>/VeTAIR_Pct_HTRBV_ActuatorPosTrgt_write'
     */
    /* Gateway: PokeTAIR_Pct_HTRBV_ActuatorPosTrgt/PokeTAIR_Pct_HTRBV_ActuatorPosTrgtChrt */
    /* During: PokeTAIR_Pct_HTRBV_ActuatorPosTrgt/PokeTAIR_Pct_HTRBV_ActuatorPosTrgtChrt */
    /* Entry Internal: PokeTAIR_Pct_HTRBV_ActuatorPosTrgt/PokeTAIR_Pct_HTRBV_ActuatorPosTrgtChrt */
    /* Transition: '<S290>:26' */
    Rte_IrvWrite_PokeTAIR_Pct_HTRBV_ActuatorPosTrgt_VeTAIR_Pct_HTRBV_ActuatorPosTrgt_write_IRV
        (LeTAIR_Pct_HTRBV_ActuatorPosTrgt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_HTRBV_ActuatorPosTrgt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) PokeTAIR_Pct_LTR_BypsVlv_ActlPstn(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_LTR_BypsVlv_ActlPstn, VAR(boolean, AUTOMATIC)
    LeTAIR_b_LTR_BypsVlv_ActlPstnFA)
{

#if Rte_SysCon_Variant_TAIR_9

    boolean rtb_LeTAIR_b_LTR_BypsVlv_Actl_k;

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_Pct_LTR_BypsVlv_ActlPstn);

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_b_LTR_BypsVlv_ActlPstnFA);

#endif

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_LTR_BypsVlv_ActlPstn' */
    /* Chart: '<S83>/PokeTAIR_Pct_LTR_BypsVlv_ActlPstnChrt' incorporates:
     *  SignalConversion generated from: '<S83>/LeTAIR_Pct_LTR_BypsVlv_ActlPstn'
     *  SignalConversion generated from: '<S83>/LeTAIR_b_LTR_BypsVlv_ActlPstnFA'
     */
    /* Gateway: PokeTAIR_Pct_LTR_BypsVlv_ActlPstn/PokeTAIR_Pct_LTR_BypsVlv_ActlPstnChrt */
    /* During: PokeTAIR_Pct_LTR_BypsVlv_ActlPstn/PokeTAIR_Pct_LTR_BypsVlv_ActlPstnChrt */
    /* Entry Internal: PokeTAIR_Pct_LTR_BypsVlv_ActlPstn/PokeTAIR_Pct_LTR_BypsVlv_ActlPstnChrt */
    /* Transition: '<S291>:2' */
    if (!LeTAIR_b_LTR_BypsVlv_ActlPstnFA)
    {
        /* Transition: '<S291>:3' */
        /* Transition: '<S291>:15' */
        TAIR_ac_B.LeTAIR_Pct_LTR_BypsVlv_ActlPs_h =
            LeTAIR_Pct_LTR_BypsVlv_ActlPstn;
        rtb_LeTAIR_b_LTR_BypsVlv_Actl_k = false;

        /* Transition: '<S291>:18' */
    }
    else
    {
        /* Transition: '<S291>:4' */
        rtb_LeTAIR_b_LTR_BypsVlv_Actl_k = true;
    }

    /* End of Chart: '<S83>/PokeTAIR_Pct_LTR_BypsVlv_ActlPstnChrt' */

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S83>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_LTR_BypsVlv_ActlPstn_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_LTR_BypsVlv_ActlPs_h);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S83>/VeTAIR_b_LTR_BypsVlv_ActlPstnFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_LTR_BypsVlv_ActlPstn_VeTAIR_b_LTR_BypsVlv_ActlPstnFA_write_IRV
        (rtb_LeTAIR_b_LTR_BypsVlv_Actl_k);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_LTR_BypsVlv_ActlPstn' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_Pct_OEXV_PosAct(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_OEXV_PosAct, VAR(boolean, AUTOMATIC) LeTAIR_b_OEXV_PosActFA)
{

#if Rte_SysCon_Variant_TAIR_12

    boolean rtb_LeTAIR_b_OEXV_PosActFA_ou_g;

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_Pct_OEXV_PosAct);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_PosActFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_OEXV_PosAct' */
    /* Chart: '<S84>/PokeTAIR_Pct_OEXV_PosActChrt' incorporates:
     *  SignalConversion generated from: '<S84>/LeTAIR_Pct_OEXV_PosAct'
     *  SignalConversion generated from: '<S84>/LeTAIR_b_OEXV_PosActFA'
     */
    /* Gateway: PokeTAIR_Pct_OEXV_PosAct/PokeTAIR_Pct_OEXV_PosActChrt */
    /* During: PokeTAIR_Pct_OEXV_PosAct/PokeTAIR_Pct_OEXV_PosActChrt */
    /* Entry Internal: PokeTAIR_Pct_OEXV_PosAct/PokeTAIR_Pct_OEXV_PosActChrt */
    /* Transition: '<S292>:2' */
    if (!LeTAIR_b_OEXV_PosActFA)
    {
        /* Transition: '<S292>:3' */
        /* Transition: '<S292>:15' */
        TAIR_ac_B.LeTAIR_Pct_OEXV_PosAct_out = LeTAIR_Pct_OEXV_PosAct;
        rtb_LeTAIR_b_OEXV_PosActFA_ou_g = false;

        /* Transition: '<S292>:18' */
    }
    else
    {
        /* Transition: '<S292>:4' */
        rtb_LeTAIR_b_OEXV_PosActFA_ou_g = true;
    }

    /* End of Chart: '<S84>/PokeTAIR_Pct_OEXV_PosActChrt' */

    /* Merge: '<Root>/Merge_167' incorporates:
     *  SignalConversion generated from: '<S84>/VeTAIR_Pct_OEXV_PosAct_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_OEXV_PosAct_VeTAIR_Pct_OEXV_PosAct_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_OEXV_PosAct_out);

    /* Merge: '<Root>/Merge_169' incorporates:
     *  SignalConversion generated from: '<S84>/VeTAIR_b_OEXV_PosActFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_OEXV_PosAct_VeTAIR_b_OEXV_PosActFA_write_IRV
        (rtb_LeTAIR_b_OEXV_PosActFA_ou_g);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_OEXV_PosAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_Pct_PasTmpDr_Pos(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_PasTmpDr_Pos, VAR(boolean, AUTOMATIC) LeTAIR_b_PasTmpDr_PosFA)
{
    UNUSED_PARAMETER(LeTAIR_Pct_PasTmpDr_Pos);
    UNUSED_PARAMETER(LeTAIR_b_PasTmpDr_PosFA);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_Pct_RrBlwrCmd(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_RrBlwrCmd, VAR(boolean, AUTOMATIC) LeTAIR_b_RrBlwrCmdFA)
{

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_Pct_RrBlwrCmd);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_RrBlwrCmdFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_Pct_RrBlwrCmd' */
    /* Chart: '<S86>/PokeTAIR_Pct_RrBlwrCmdChrt' incorporates:
     *  SignalConversion generated from: '<S86>/LeTAIR_Pct_RrBlwrCmd'
     *  SignalConversion generated from: '<S86>/LeTAIR_b_RrBlwrCmdFA'
     */
    /* Gateway: PokeTAIR_Pct_RrBlwrCmd/PokeTAIR_Pct_RrBlwrCmdChrt */
    /* During: PokeTAIR_Pct_RrBlwrCmd/PokeTAIR_Pct_RrBlwrCmdChrt */
    /* Entry Internal: PokeTAIR_Pct_RrBlwrCmd/PokeTAIR_Pct_RrBlwrCmdChrt */
    /* Transition: '<S294>:2' */
    if (!LeTAIR_b_RrBlwrCmdFA)
    {
        /* Transition: '<S294>:3' */
        /* Transition: '<S294>:15' */
        TAIR_ac_B.LeTAIR_Pct_RrBlwrCmd_out = LeTAIR_Pct_RrBlwrCmd;

        /* Transition: '<S294>:18' */
    }
    else
    {
        /* Transition: '<S294>:4' */
    }

    /* End of Chart: '<S86>/PokeTAIR_Pct_RrBlwrCmdChrt' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S86>/VeTAIR_Pct_RrBlwrCmd_write'
     * */
    Rte_IrvWrite_PokeTAIR_Pct_RrBlwrCmd_VeTAIR_Pct_RrBlwrCmd_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_RrBlwrCmd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_Pct_RrBlwrCmd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_Pct_RrTmpDr_Cmd(VAR(float32, AUTOMATIC)
    LeTAIR_Pct_RrTmpDr_Cmd, VAR(boolean, AUTOMATIC) LeTAIR_b_RrTmpDr_CmdFA)
{
    UNUSED_PARAMETER(LeTAIR_Pct_RrTmpDr_Cmd);
    UNUSED_PARAMETER(LeTAIR_b_RrTmpDr_CmdFA);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_T_CompBoardTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_CompBoardTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_CompBoardTempFA)
{

#if Rte_SysCon_Variant_TAIR_2

    boolean rtb_LeTAIR_b_CompBoardTempFA__c;

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_T_CompBoardTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_CompBoardTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_CompBoardTemp' */
    /* Chart: '<S88>/PokeTAIR_T_CompBoardTempChrt' incorporates:
     *  SignalConversion generated from: '<S88>/LeTAIR_T_CompBoardTemp'
     *  SignalConversion generated from: '<S88>/LeTAIR_b_CompBoardTempFA'
     */
    /* Gateway: PokeTAIR_T_CompBoardTemp/PokeTAIR_T_CompBoardTempChrt */
    /* During: PokeTAIR_T_CompBoardTemp/PokeTAIR_T_CompBoardTempChrt */
    /* Entry Internal: PokeTAIR_T_CompBoardTemp/PokeTAIR_T_CompBoardTempChrt */
    /* Transition: '<S296>:2' */
    if (!LeTAIR_b_CompBoardTempFA)
    {
        /* Transition: '<S296>:3' */
        /* Transition: '<S296>:15' */
        TAIR_ac_B.LeTAIR_T_CompBoardTemp_out = LeTAIR_T_CompBoardTemp;
        rtb_LeTAIR_b_CompBoardTempFA__c = false;

        /* Transition: '<S296>:18' */
    }
    else
    {
        /* Transition: '<S296>:4' */
        rtb_LeTAIR_b_CompBoardTempFA__c = true;
    }

    /* End of Chart: '<S88>/PokeTAIR_T_CompBoardTempChrt' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S88>/VeTAIR_T_CompBoardTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_CompBoardTemp_VeTAIR_T_CompBoardTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_CompBoardTemp_out);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S88>/VeTAIR_b_CompBoardTempFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_CompBoardTemp_VeTAIR_b_CompBoardTempFA_write_IRV
        (rtb_LeTAIR_b_CompBoardTempFA__c);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_CompBoardTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_T_CompIGBTTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_CompIGBTTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_CompIGBTTempFA)
{

#if Rte_SysCon_Variant_TAIR_2

    boolean rtb_LeTAIR_b_CompIGBTTempFA_o_e;

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_T_CompIGBTTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_CompIGBTTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_CompIGBTTemp' */
    /* Chart: '<S89>/PokeTAIR_T_CompIGBTTempChrt' incorporates:
     *  SignalConversion generated from: '<S89>/LeTAIR_T_CompIGBTTemp'
     *  SignalConversion generated from: '<S89>/LeTAIR_b_CompIGBTTempFA'
     */
    /* Gateway: PokeTAIR_T_CompIGBTTemp/PokeTAIR_T_CompIGBTTempChrt */
    /* During: PokeTAIR_T_CompIGBTTemp/PokeTAIR_T_CompIGBTTempChrt */
    /* Entry Internal: PokeTAIR_T_CompIGBTTemp/PokeTAIR_T_CompIGBTTempChrt */
    /* Transition: '<S297>:2' */
    if (!LeTAIR_b_CompIGBTTempFA)
    {
        /* Transition: '<S297>:3' */
        /* Transition: '<S297>:15' */
        TAIR_ac_B.LeTAIR_T_CompIGBTTemp_out = LeTAIR_T_CompIGBTTemp;
        rtb_LeTAIR_b_CompIGBTTempFA_o_e = false;

        /* Transition: '<S297>:18' */
    }
    else
    {
        /* Transition: '<S297>:4' */
        rtb_LeTAIR_b_CompIGBTTempFA_o_e = true;
    }

    /* End of Chart: '<S89>/PokeTAIR_T_CompIGBTTempChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S89>/VeTAIR_T_CompIGBTTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_CompIGBTTemp_VeTAIR_T_CompIGBTTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_CompIGBTTemp_out);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S89>/VeTAIR_b_CompIGBTTempFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_CompIGBTTemp_VeTAIR_b_CompIGBTTempFA_write_IRV
        (rtb_LeTAIR_b_CompIGBTTempFA_o_e);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_CompIGBTTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_T_EEXV_BoardTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_EEXV_BoardTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_EEXV_BoardTempFA)
{

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_T_EEXV_BoardTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_BoardTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_EEXV_BoardTemp' */
    /* Chart: '<S90>/PokeTAIR_T_EEXV_BoardTempChrt' incorporates:
     *  SignalConversion generated from: '<S90>/LeTAIR_T_EEXV_BoardTemp'
     *  SignalConversion generated from: '<S90>/LeTAIR_b_EEXV_BoardTempFA'
     */
    /* Gateway: PokeTAIR_T_EEXV_BoardTemp/PokeTAIR_T_EEXV_BoardTempChrt */
    /* During: PokeTAIR_T_EEXV_BoardTemp/PokeTAIR_T_EEXV_BoardTempChrt */
    /* Entry Internal: PokeTAIR_T_EEXV_BoardTemp/PokeTAIR_T_EEXV_BoardTempChrt */
    /* Transition: '<S298>:2' */
    if (!LeTAIR_b_EEXV_BoardTempFA)
    {
        /* Transition: '<S298>:3' */
        /* Transition: '<S298>:15' */
        TAIR_ac_B.LeTAIR_T_EEXV_BoardTemp_out = LeTAIR_T_EEXV_BoardTemp;

        /* Transition: '<S298>:18' */
    }
    else
    {
        /* Transition: '<S298>:4' */
    }

    /* End of Chart: '<S90>/PokeTAIR_T_EEXV_BoardTempChrt' */

    /* Merge: '<Root>/Merge_137' incorporates:
     *  SignalConversion generated from: '<S90>/VeTAIR_T_EEXV_BoardTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_EEXV_BoardTemp_VeTAIR_T_EEXV_BoardTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_EEXV_BoardTemp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_EEXV_BoardTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_T_EEXV_RefTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_EEXV_RefTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_EEXV_RefTempFA)
{

#if Rte_SysCon_Variant_TAIR_11

    boolean rtb_LeTAIR_b_EEXV_RefTempFA_o_e;

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_T_EEXV_RefTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_RefTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_EEXV_RefTemp' */
    /* Chart: '<S91>/PokeTAIR_T_EEXV_RefTempChrt' incorporates:
     *  SignalConversion generated from: '<S91>/LeTAIR_T_EEXV_RefTemp'
     *  SignalConversion generated from: '<S91>/LeTAIR_b_EEXV_RefTempFA'
     */
    /* Gateway: PokeTAIR_T_EEXV_RefTemp/PokeTAIR_T_EEXV_RefTempChrt */
    /* During: PokeTAIR_T_EEXV_RefTemp/PokeTAIR_T_EEXV_RefTempChrt */
    /* Entry Internal: PokeTAIR_T_EEXV_RefTemp/PokeTAIR_T_EEXV_RefTempChrt */
    /* Transition: '<S299>:2' */
    if (!LeTAIR_b_EEXV_RefTempFA)
    {
        /* Transition: '<S299>:3' */
        /* Transition: '<S299>:15' */
        TAIR_ac_B.LeTAIR_T_EEXV_RefTemp_out = LeTAIR_T_EEXV_RefTemp;
        rtb_LeTAIR_b_EEXV_RefTempFA_o_e = false;

        /* Transition: '<S299>:18' */
    }
    else
    {
        /* Transition: '<S299>:4' */
        rtb_LeTAIR_b_EEXV_RefTempFA_o_e = true;
    }

    /* End of Chart: '<S91>/PokeTAIR_T_EEXV_RefTempChrt' */

    /* Merge: '<Root>/Merge_138' incorporates:
     *  SignalConversion generated from: '<S91>/VeTAIR_T_EEXV_RefTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_EEXV_RefTemp_VeTAIR_T_EEXV_RefTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_EEXV_RefTemp_out);

    /* Merge: '<Root>/Merge_140' incorporates:
     *  SignalConversion generated from: '<S91>/VeTAIR_b_EEXV_RefTempFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_EEXV_RefTemp_VeTAIR_b_EEXV_RefTempFA_write_IRV
        (rtb_LeTAIR_b_EEXV_RefTempFA_o_e);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_EEXV_RefTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_T_EXV_BoardTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_EXV_BoardTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_EXV_BoardTempFA)
{

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_T_EXV_BoardTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_BoardTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_EXV_BoardTemp' */
    /* Chart: '<S92>/PokeTAIR_T_EXV_BoardTempChrt' incorporates:
     *  SignalConversion generated from: '<S92>/LeTAIR_T_EXV_BoardTemp'
     *  SignalConversion generated from: '<S92>/LeTAIR_b_EXV_BoardTempFA'
     */
    /* Gateway: PokeTAIR_T_EXV_BoardTemp/PokeTAIR_T_EXV_BoardTempChrt */
    /* During: PokeTAIR_T_EXV_BoardTemp/PokeTAIR_T_EXV_BoardTempChrt */
    /* Entry Internal: PokeTAIR_T_EXV_BoardTemp/PokeTAIR_T_EXV_BoardTempChrt */
    /* Transition: '<S300>:2' */
    if (!LeTAIR_b_EXV_BoardTempFA)
    {
        /* Transition: '<S300>:3' */
        /* Transition: '<S300>:15' */
        TAIR_ac_B.LeTAIR_T_EXV_BoardTemp_out = LeTAIR_T_EXV_BoardTemp;

        /* Transition: '<S300>:18' */
    }
    else
    {
        /* Transition: '<S300>:4' */
    }

    /* End of Chart: '<S92>/PokeTAIR_T_EXV_BoardTempChrt' */

    /* Merge: '<Root>/Merge_182' incorporates:
     *  SignalConversion generated from: '<S92>/VeTAIR_T_EXV_BoardTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_EXV_BoardTemp_VeTAIR_T_EXV_BoardTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_EXV_BoardTemp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_EXV_BoardTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_T_EXV_RefTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_EXV_RefTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_EXV_RefTempFA)
{

#if Rte_SysCon_Variant_TAIR_13

    boolean rtb_LeTAIR_b_EXV_RefTempFA_ou_j;

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_T_EXV_RefTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_RefTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_EXV_RefTemp' */
    /* Chart: '<S93>/PokeTAIR_T_EXV_RefTempChrt' incorporates:
     *  SignalConversion generated from: '<S93>/LeTAIR_T_EXV_RefTemp'
     *  SignalConversion generated from: '<S93>/LeTAIR_b_EXV_RefTempFA'
     */
    /* Gateway: PokeTAIR_T_EXV_RefTemp/PokeTAIR_T_EXV_RefTempChrt */
    /* During: PokeTAIR_T_EXV_RefTemp/PokeTAIR_T_EXV_RefTempChrt */
    /* Entry Internal: PokeTAIR_T_EXV_RefTemp/PokeTAIR_T_EXV_RefTempChrt */
    /* Transition: '<S301>:2' */
    if (!LeTAIR_b_EXV_RefTempFA)
    {
        /* Transition: '<S301>:3' */
        /* Transition: '<S301>:15' */
        TAIR_ac_B.LeTAIR_T_EXV_RefTemp_out = LeTAIR_T_EXV_RefTemp;
        rtb_LeTAIR_b_EXV_RefTempFA_ou_j = false;

        /* Transition: '<S301>:18' */
    }
    else
    {
        /* Transition: '<S301>:4' */
        rtb_LeTAIR_b_EXV_RefTempFA_ou_j = true;
    }

    /* End of Chart: '<S93>/PokeTAIR_T_EXV_RefTempChrt' */

    /* Merge: '<Root>/Merge_183' incorporates:
     *  SignalConversion generated from: '<S93>/VeTAIR_T_EXV_RefTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_EXV_RefTemp_VeTAIR_T_EXV_RefTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_EXV_RefTemp_out);

    /* Merge: '<Root>/Merge_185' incorporates:
     *  SignalConversion generated from: '<S93>/VeTAIR_b_EXV_RefTempFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_EXV_RefTemp_VeTAIR_b_EXV_RefTempFA_write_IRV
        (rtb_LeTAIR_b_EXV_RefTempFA_ou_j);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_EXV_RefTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_T_FtEvapTmp(VAR(float32, AUTOMATIC)
    LeTAIR_T_FtEvapTmp, VAR(boolean, AUTOMATIC) LeTAIR_b_FtEvapTmpFA)
{

#if Rte_SysCon_Variant_TAIR_3

    boolean rtb_LeTAIR_b_FtEvapTmpFA_out_g;

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_T_FtEvapTmp);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_FtEvapTmpFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_FtEvapTmp' */
    /* Chart: '<S94>/PokeTAIR_T_FtEvapTmpChrt' incorporates:
     *  SignalConversion generated from: '<S94>/LeTAIR_T_FtEvapTmp'
     *  SignalConversion generated from: '<S94>/LeTAIR_b_FtEvapTmpFA'
     */
    /* Gateway: PokeTAIR_T_FtEvapTmp/PokeTAIR_T_FtEvapTmpChrt */
    /* During: PokeTAIR_T_FtEvapTmp/PokeTAIR_T_FtEvapTmpChrt */
    /* Entry Internal: PokeTAIR_T_FtEvapTmp/PokeTAIR_T_FtEvapTmpChrt */
    /* Transition: '<S302>:2' */
    if (!LeTAIR_b_FtEvapTmpFA)
    {
        /* Transition: '<S302>:3' */
        /* Transition: '<S302>:15' */
        TAIR_ac_B.LeTAIR_T_FtEvapTmp_out = LeTAIR_T_FtEvapTmp;
        rtb_LeTAIR_b_FtEvapTmpFA_out_g = false;

        /* Transition: '<S302>:18' */
    }
    else
    {
        /* Transition: '<S302>:4' */
        rtb_LeTAIR_b_FtEvapTmpFA_out_g = true;
    }

    /* End of Chart: '<S94>/PokeTAIR_T_FtEvapTmpChrt' */

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S94>/VeTAIR_T_FtEvapTmp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_FtEvapTmp_VeTAIR_T_FtEvapTmp_write_IRV
        (TAIR_ac_B.LeTAIR_T_FtEvapTmp_out);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S94>/VeTAIR_b_FtEvapTmpFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_FtEvapTmp_VeTAIR_b_FtEvapTmpFA_write_IRV
        (rtb_LeTAIR_b_FtEvapTmpFA_out_g);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_FtEvapTmp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_T_FtEvapTmp_P1C(VAR(float32, AUTOMATIC)
    LeTAIR_T_FtEvapTmp_P1C, VAR(boolean, AUTOMATIC) LeTAIR_b_FtEvapTmp_P1CFA)
{

#if Rte_SysCon_Variant_TAIR_3

    boolean rtb_LeTAIR_b_FtEvapTmp_P1CFA__c;

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_T_FtEvapTmp_P1C);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_FtEvapTmp_P1CFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_FtEvapTmp_P1C' */
    /* Chart: '<S95>/PokeTAIR_T_FtEvapTmp_P1CChrt' incorporates:
     *  SignalConversion generated from: '<S95>/LeTAIR_T_FtEvapTmp_P1C'
     *  SignalConversion generated from: '<S95>/LeTAIR_b_FtEvapTmp_P1CFA'
     */
    /* Gateway: PokeTAIR_T_FtEvapTmp_P1C/PokeTAIR_T_FtEvapTmp_P1CChrt */
    /* During: PokeTAIR_T_FtEvapTmp_P1C/PokeTAIR_T_FtEvapTmp_P1CChrt */
    /* Entry Internal: PokeTAIR_T_FtEvapTmp_P1C/PokeTAIR_T_FtEvapTmp_P1CChrt */
    /* Transition: '<S303>:2' */
    if (!LeTAIR_b_FtEvapTmp_P1CFA)
    {
        /* Transition: '<S303>:3' */
        /* Transition: '<S303>:15' */
        TAIR_ac_B.LeTAIR_T_FtEvapTmp_P1C_out = LeTAIR_T_FtEvapTmp_P1C;
        rtb_LeTAIR_b_FtEvapTmp_P1CFA__c = false;

        /* Transition: '<S303>:18' */
    }
    else
    {
        /* Transition: '<S303>:4' */
        rtb_LeTAIR_b_FtEvapTmp_P1CFA__c = true;
    }

    /* End of Chart: '<S95>/PokeTAIR_T_FtEvapTmp_P1CChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S95>/VeTAIR_T_FtEvapTmp_P1C_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_FtEvapTmp_P1C_VeTAIR_T_FtEvapTmp_P1C_write_IRV
        (TAIR_ac_B.LeTAIR_T_FtEvapTmp_P1C_out);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S95>/VeTAIR_b_FtEvapTmp_P1CFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_FtEvapTmp_P1C_VeTAIR_b_FtEvapTmp_P1CFA_write_IRV
        (rtb_LeTAIR_b_FtEvapTmp_P1CFA__c);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_FtEvapTmp_P1C' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_T_FtEvapTmp_Tgt(VAR(float32, AUTOMATIC)
    LeTAIR_T_FtEvapTmp_Tgt, VAR(boolean, AUTOMATIC) LeTAIR_b_FtEvapTmp_TgtFA)
{

#if Rte_SysCon_Variant_TAIR_3

    boolean rtb_LeTAIR_b_FtEvapTmp_TgtFA__i;

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_T_FtEvapTmp_Tgt);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_FtEvapTmp_TgtFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_FtEvapTmp_Tgt' */
    /* Chart: '<S96>/PokeTAIR_T_FtEvapTmp_TgtChrt' incorporates:
     *  SignalConversion generated from: '<S96>/LeTAIR_T_FtEvapTmp_Tgt'
     *  SignalConversion generated from: '<S96>/LeTAIR_b_FtEvapTmp_TgtFA'
     */
    /* Gateway: PokeTAIR_T_FtEvapTmp_Tgt/PokeTAIR_T_FtEvapTmp_TgtChrt */
    /* During: PokeTAIR_T_FtEvapTmp_Tgt/PokeTAIR_T_FtEvapTmp_TgtChrt */
    /* Entry Internal: PokeTAIR_T_FtEvapTmp_Tgt/PokeTAIR_T_FtEvapTmp_TgtChrt */
    /* Transition: '<S304>:2' */
    if (!LeTAIR_b_FtEvapTmp_TgtFA)
    {
        /* Transition: '<S304>:3' */
        /* Transition: '<S304>:15' */
        TAIR_ac_B.LeTAIR_T_FtEvapTmp_Tgt_out = LeTAIR_T_FtEvapTmp_Tgt;
        rtb_LeTAIR_b_FtEvapTmp_TgtFA__i = false;

        /* Transition: '<S304>:18' */
    }
    else
    {
        /* Transition: '<S304>:4' */
        rtb_LeTAIR_b_FtEvapTmp_TgtFA__i = true;
    }

    /* End of Chart: '<S96>/PokeTAIR_T_FtEvapTmp_TgtChrt' */

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S96>/VeTAIR_T_FtEvapTmp_Tgt_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_FtEvapTmp_Tgt_VeTAIR_T_FtEvapTmp_Tgt_write_IRV
        (TAIR_ac_B.LeTAIR_T_FtEvapTmp_Tgt_out);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S96>/VeTAIR_b_FtEvapTmp_TgtFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_FtEvapTmp_Tgt_VeTAIR_b_FtEvapTmp_TgtFA_write_IRV
        (rtb_LeTAIR_b_FtEvapTmp_TgtFA__i);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_FtEvapTmp_Tgt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_T_HTRBV_EcuTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_HTRBV_EcuTemp)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_T_HTRBV_EcuTemp);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_HTRBV_EcuTemp' */
    /* Merge: '<Root>/Merge_164' incorporates:
     *  SignalConversion generated from: '<S97>/LeTAIR_Pct_LTR_BypsVlv_ActlPstn'
     *  SignalConversion generated from: '<S97>/VeTAIR_T_HTRBV_EcuTemp_write'
     */
    /* Gateway: PokeTAIR_T_HTRBV_EcuTemp/PokeTAIR_T_HTRBV_EcuTempChart */
    /* During: PokeTAIR_T_HTRBV_EcuTemp/PokeTAIR_T_HTRBV_EcuTempChart */
    /* Entry Internal: PokeTAIR_T_HTRBV_EcuTemp/PokeTAIR_T_HTRBV_EcuTempChart */
    /* Transition: '<S305>:26' */
    Rte_IrvWrite_PokeTAIR_T_HTRBV_EcuTemp_VeTAIR_T_HTRBV_EcuTemp_write_IRV
        (LeTAIR_T_HTRBV_EcuTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_HTRBV_EcuTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_T_HtrCoreTmp_Tgt(VAR(float32, AUTOMATIC)
    LeTAIR_T_HtrCoreTmp_Tgt, VAR(boolean, AUTOMATIC) LeTAIR_b_HtrCoreTmp_TgtFA)
{

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_T_HtrCoreTmp_Tgt);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_HtrCoreTmp_TgtFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_HtrCoreTmp_Tgt' */
    /* Chart: '<S98>/PokeTAIR_T_HtrCoreTmp_TgtChrt' incorporates:
     *  SignalConversion generated from: '<S98>/LeTAIR_T_HtrCoreTmp_Tgt'
     *  SignalConversion generated from: '<S98>/LeTAIR_b_HtrCoreTmp_TgtFA'
     */
    /* Gateway: PokeTAIR_T_HtrCoreTmp_Tgt/PokeTAIR_T_HtrCoreTmp_TgtChrt */
    /* During: PokeTAIR_T_HtrCoreTmp_Tgt/PokeTAIR_T_HtrCoreTmp_TgtChrt */
    /* Entry Internal: PokeTAIR_T_HtrCoreTmp_Tgt/PokeTAIR_T_HtrCoreTmp_TgtChrt */
    /* Transition: '<S306>:2' */
    if (!LeTAIR_b_HtrCoreTmp_TgtFA)
    {
        /* Transition: '<S306>:3' */
        /* Transition: '<S306>:15' */
        TAIR_ac_B.LeTAIR_T_HtrCoreTmp_Tgt_out = LeTAIR_T_HtrCoreTmp_Tgt;

        /* Transition: '<S306>:18' */
    }
    else
    {
        /* Transition: '<S306>:4' */
    }

    /* End of Chart: '<S98>/PokeTAIR_T_HtrCoreTmp_TgtChrt' */

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S98>/VeTAIR_T_HtrCoreTmp_Tgt_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_HtrCoreTmp_Tgt_VeTAIR_T_HtrCoreTmp_Tgt_write_IRV
        (TAIR_ac_B.LeTAIR_T_HtrCoreTmp_Tgt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_HtrCoreTmp_Tgt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_T_OEXV_BoardTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_OEXV_BoardTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_OEXV_BoardTempFA)
{

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_T_OEXV_BoardTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_BoardTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_OEXV_BoardTemp' */
    /* Chart: '<S99>/PokeTAIR_T_OEXV_BoardTempChrt' incorporates:
     *  SignalConversion generated from: '<S99>/LeTAIR_T_OEXV_BoardTemp'
     *  SignalConversion generated from: '<S99>/LeTAIR_b_OEXV_BoardTempFA'
     */
    /* Gateway: PokeTAIR_T_OEXV_BoardTemp/PokeTAIR_T_OEXV_BoardTempChrt */
    /* During: PokeTAIR_T_OEXV_BoardTemp/PokeTAIR_T_OEXV_BoardTempChrt */
    /* Entry Internal: PokeTAIR_T_OEXV_BoardTemp/PokeTAIR_T_OEXV_BoardTempChrt */
    /* Transition: '<S307>:2' */
    if (!LeTAIR_b_OEXV_BoardTempFA)
    {
        /* Transition: '<S307>:3' */
        /* Transition: '<S307>:15' */
        TAIR_ac_B.LeTAIR_T_OEXV_BoardTemp_out = LeTAIR_T_OEXV_BoardTemp;

        /* Transition: '<S307>:18' */
    }
    else
    {
        /* Transition: '<S307>:4' */
    }

    /* End of Chart: '<S99>/PokeTAIR_T_OEXV_BoardTempChrt' */

    /* Merge: '<Root>/Merge_165' incorporates:
     *  SignalConversion generated from: '<S99>/VeTAIR_T_OEXV_BoardTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_OEXV_BoardTemp_VeTAIR_T_OEXV_BoardTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_OEXV_BoardTemp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_OEXV_BoardTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_T_OEXV_RefTemp(VAR(float32, AUTOMATIC)
    LeTAIR_T_OEXV_RefTemp, VAR(boolean, AUTOMATIC) LeTAIR_b_OEXV_RefTempFA)
{

#if Rte_SysCon_Variant_TAIR_12

    boolean rtb_LeTAIR_b_OEXV_RefTempFA_o_e;

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_T_OEXV_RefTemp);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_RefTempFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_OEXV_RefTemp' */
    /* Chart: '<S100>/PokeTAIR_T_OEXV_RefTempChrt' incorporates:
     *  SignalConversion generated from: '<S100>/LeTAIR_T_OEXV_RefTemp'
     *  SignalConversion generated from: '<S100>/LeTAIR_b_OEXV_RefTempFA'
     */
    /* Gateway: PokeTAIR_T_OEXV_RefTemp/PokeTAIR_T_OEXV_RefTempChrt */
    /* During: PokeTAIR_T_OEXV_RefTemp/PokeTAIR_T_OEXV_RefTempChrt */
    /* Entry Internal: PokeTAIR_T_OEXV_RefTemp/PokeTAIR_T_OEXV_RefTempChrt */
    /* Transition: '<S308>:2' */
    if (!LeTAIR_b_OEXV_RefTempFA)
    {
        /* Transition: '<S308>:3' */
        /* Transition: '<S308>:15' */
        TAIR_ac_B.LeTAIR_T_OEXV_RefTemp_out = LeTAIR_T_OEXV_RefTemp;
        rtb_LeTAIR_b_OEXV_RefTempFA_o_e = false;

        /* Transition: '<S308>:18' */
    }
    else
    {
        /* Transition: '<S308>:4' */
        rtb_LeTAIR_b_OEXV_RefTempFA_o_e = true;
    }

    /* End of Chart: '<S100>/PokeTAIR_T_OEXV_RefTempChrt' */

    /* Merge: '<Root>/Merge_161' incorporates:
     *  SignalConversion generated from: '<S100>/VeTAIR_T_OEXV_RefTemp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_OEXV_RefTemp_VeTAIR_T_OEXV_RefTemp_write_IRV
        (TAIR_ac_B.LeTAIR_T_OEXV_RefTemp_out);

    /* Merge: '<Root>/Merge_162' incorporates:
     *  SignalConversion generated from: '<S100>/VeTAIR_b_OEXV_RefTempFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_OEXV_RefTemp_VeTAIR_b_OEXV_RefTempFA_write_IRV
        (rtb_LeTAIR_b_OEXV_RefTempFA_o_e);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_OEXV_RefTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_T_VhIntTmp(VAR(float32, AUTOMATIC)
    LeTAIR_T_VhIntTmp, VAR(boolean, AUTOMATIC) LeTAIR_b_VhIntTmpFA)
{

#if Rte_SysCon_Variant_TAIR_3

    boolean rtb_LeTAIR_b_VhIntTmpFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_T_VhIntTmp);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_VhIntTmpFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_T_VhIntTmp' */
    /* Chart: '<S101>/PokeTAIR_T_VhIntTmpChrt' incorporates:
     *  SignalConversion generated from: '<S101>/LeTAIR_T_VhIntTmp'
     *  SignalConversion generated from: '<S101>/LeTAIR_b_VhIntTmpFA'
     */
    /* Gateway: PokeTAIR_T_VhIntTmp/PokeTAIR_T_VhIntTmpChrt */
    /* During: PokeTAIR_T_VhIntTmp/PokeTAIR_T_VhIntTmpChrt */
    /* Entry Internal: PokeTAIR_T_VhIntTmp/PokeTAIR_T_VhIntTmpChrt */
    /* Transition: '<S309>:2' */
    if (!LeTAIR_b_VhIntTmpFA)
    {
        /* Transition: '<S309>:3' */
        /* Transition: '<S309>:15' */
        TAIR_ac_B.LeTAIR_T_VhIntTmp_out = LeTAIR_T_VhIntTmp;
        rtb_LeTAIR_b_VhIntTmpFA_out = false;

        /* Transition: '<S309>:18' */
    }
    else
    {
        /* Transition: '<S309>:4' */
        rtb_LeTAIR_b_VhIntTmpFA_out = true;
    }

    /* End of Chart: '<S101>/PokeTAIR_T_VhIntTmpChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S101>/VeTAIR_T_VhIntTmp_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_VhIntTmp_VeTAIR_T_VhIntTmp_write_IRV
        (TAIR_ac_B.LeTAIR_T_VhIntTmp_out);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S101>/VeTAIR_b_VhIntTmpFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_T_VhIntTmp_VeTAIR_b_VhIntTmpFA_write_IRV
        (rtb_LeTAIR_b_VhIntTmpFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_T_VhIntTmp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) PokeTAIR_U_CPV2_MtrVltg(VAR(float32, AUTOMATIC)
    LeTAIR_U_CPV2_MtrVltg, VAR(boolean, AUTOMATIC) LeTAIR_b_CPV2_MtrVltgFA)
{

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_U_CPV2_MtrVltg);

#endif

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_b_CPV2_MtrVltgFA);

#endif

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_CPV2_MtrVltg' */
    /* Chart: '<S102>/PokeTAIR_U_CPV2_MtrVltgChrt' incorporates:
     *  SignalConversion generated from: '<S102>/LeTAIR_U_CPV2_MtrVltg'
     *  SignalConversion generated from: '<S102>/LeTAIR_b_CPV2_MtrVltgFA'
     */
    /* Gateway: PokeTAIR_U_CPV2_MtrVltg/PokeTAIR_U_CPV2_MtrVltgChrt */
    /* During: PokeTAIR_U_CPV2_MtrVltg/PokeTAIR_U_CPV2_MtrVltgChrt */
    /* Entry Internal: PokeTAIR_U_CPV2_MtrVltg/PokeTAIR_U_CPV2_MtrVltgChrt */
    /* Transition: '<S310>:2' */
    if (!LeTAIR_b_CPV2_MtrVltgFA)
    {
        /* Transition: '<S310>:3' */
        /* Transition: '<S310>:15' */
        TAIR_ac_B.LeTAIR_U_CPV2_MtrVltg_out = LeTAIR_U_CPV2_MtrVltg;

        /* Transition: '<S310>:18' */
    }
    else
    {
        /* Transition: '<S310>:4' */
    }

    /* End of Chart: '<S102>/PokeTAIR_U_CPV2_MtrVltgChrt' */

    /* Merge: '<Root>/Merge_149' incorporates:
     *  SignalConversion generated from: '<S102>/VeTAIR_U_CPV2_MtrVltg_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_CPV2_MtrVltg_VeTAIR_U_CPV2_MtrVltg_write_IRV
        (TAIR_ac_B.LeTAIR_U_CPV2_MtrVltg_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_CPV2_MtrVltg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_U_CompHVInput(VAR(float32, AUTOMATIC)
    LeTAIR_U_CompHVInput, VAR(boolean, AUTOMATIC) LeTAIR_b_CompHVInputFA)
{

#if Rte_SysCon_Variant_TAIR_2

    boolean rtb_LeTAIR_b_CompHVInputFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_U_CompHVInput);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_CompHVInputFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_CompHVInput' */
    /* Chart: '<S103>/PokeTAIR_U_CompHVInputChrt' incorporates:
     *  SignalConversion generated from: '<S103>/LeTAIR_U_CompHVInput'
     *  SignalConversion generated from: '<S103>/LeTAIR_b_CompHVInputFA'
     */
    /* Gateway: PokeTAIR_U_CompHVInput/PokeTAIR_U_CompHVInputChrt */
    /* During: PokeTAIR_U_CompHVInput/PokeTAIR_U_CompHVInputChrt */
    /* Entry Internal: PokeTAIR_U_CompHVInput/PokeTAIR_U_CompHVInputChrt */
    /* Transition: '<S311>:2' */
    if (!LeTAIR_b_CompHVInputFA)
    {
        /* Transition: '<S311>:3' */
        /* Transition: '<S311>:15' */
        TAIR_ac_B.LeTAIR_U_CompHVInput_out = LeTAIR_U_CompHVInput;
        rtb_LeTAIR_b_CompHVInputFA_out = false;

        /* Transition: '<S311>:18' */
    }
    else
    {
        /* Transition: '<S311>:4' */
        rtb_LeTAIR_b_CompHVInputFA_out = true;
    }

    /* End of Chart: '<S103>/PokeTAIR_U_CompHVInputChrt' */

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S103>/VeTAIR_U_CompHVInput_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_CompHVInput_VeTAIR_U_CompHVInput_write_IRV
        (TAIR_ac_B.LeTAIR_U_CompHVInput_out);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S103>/VeTAIR_b_CompHVInputFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_CompHVInput_VeTAIR_b_CompHVInputFA_write_IRV
        (rtb_LeTAIR_b_CompHVInputFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_CompHVInput' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_U_EEXV_SupplyVolt(VAR(float32, AUTOMATIC)
    LeTAIR_U_EEXV_SupplyVolt, VAR(boolean, AUTOMATIC) LeTAIR_b_EEXV_SupplyVoltFA)
{

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_U_EEXV_SupplyVolt);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_SupplyVoltFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_EEXV_SupplyVolt' */
    /* Chart: '<S104>/PokeTAIR_U_EEXV_SupplyVoltChrt' incorporates:
     *  SignalConversion generated from: '<S104>/LeTAIR_U_EEXV_SupplyVolt'
     *  SignalConversion generated from: '<S104>/LeTAIR_b_EEXV_SupplyVoltFA'
     */
    /* Gateway: PokeTAIR_U_EEXV_SupplyVolt/PokeTAIR_U_EEXV_SupplyVoltChrt */
    /* During: PokeTAIR_U_EEXV_SupplyVolt/PokeTAIR_U_EEXV_SupplyVoltChrt */
    /* Entry Internal: PokeTAIR_U_EEXV_SupplyVolt/PokeTAIR_U_EEXV_SupplyVoltChrt */
    /* Transition: '<S312>:2' */
    if (!LeTAIR_b_EEXV_SupplyVoltFA)
    {
        /* Transition: '<S312>:3' */
        /* Transition: '<S312>:15' */
        TAIR_ac_B.LeTAIR_U_EEXV_SupplyVolt_out = LeTAIR_U_EEXV_SupplyVolt;

        /* Transition: '<S312>:18' */
    }
    else
    {
        /* Transition: '<S312>:4' */
    }

    /* End of Chart: '<S104>/PokeTAIR_U_EEXV_SupplyVoltChrt' */

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S104>/VeTAIR_U_EEXV_SupplyVolt_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_EEXV_SupplyVolt_VeTAIR_U_EEXV_SupplyVolt_write_IRV
        (TAIR_ac_B.LeTAIR_U_EEXV_SupplyVolt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_EEXV_SupplyVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_U_EXV_SupplyVolt(VAR(float32, AUTOMATIC)
    LeTAIR_U_EXV_SupplyVolt, VAR(boolean, AUTOMATIC) LeTAIR_b_EXV_SupplyVoltFA)
{

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_U_EXV_SupplyVolt);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_SupplyVoltFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_EXV_SupplyVolt' */
    /* Chart: '<S105>/PokeTAIR_U_EXV_SupplyVoltChrt' incorporates:
     *  SignalConversion generated from: '<S105>/LeTAIR_U_EXV_SupplyVolt'
     *  SignalConversion generated from: '<S105>/LeTAIR_b_EXV_SupplyVoltFA'
     */
    /* Gateway: PokeTAIR_U_EXV_SupplyVolt/PokeTAIR_U_EXV_SupplyVoltChrt */
    /* During: PokeTAIR_U_EXV_SupplyVolt/PokeTAIR_U_EXV_SupplyVoltChrt */
    /* Entry Internal: PokeTAIR_U_EXV_SupplyVolt/PokeTAIR_U_EXV_SupplyVoltChrt */
    /* Transition: '<S313>:2' */
    if (!LeTAIR_b_EXV_SupplyVoltFA)
    {
        /* Transition: '<S313>:3' */
        /* Transition: '<S313>:15' */
        TAIR_ac_B.LeTAIR_U_EXV_SupplyVolt_out = LeTAIR_U_EXV_SupplyVolt;

        /* Transition: '<S313>:18' */
    }
    else
    {
        /* Transition: '<S313>:4' */
    }

    /* End of Chart: '<S105>/PokeTAIR_U_EXV_SupplyVoltChrt' */

    /* Merge: '<Root>/Merge_179' incorporates:
     *  SignalConversion generated from: '<S105>/VeTAIR_U_EXV_SupplyVolt_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_EXV_SupplyVolt_VeTAIR_U_EXV_SupplyVolt_write_IRV
        (TAIR_ac_B.LeTAIR_U_EXV_SupplyVolt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_EXV_SupplyVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) PokeTAIR_U_FrWyVlv_MtrVltg(VAR(float32, AUTOMATIC)
    LeTAIR_U_FrWyVlv_MtrVltg, VAR(boolean, AUTOMATIC) LeTAIR_b_FrWyVlv_MtrVltgFA)
{

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_U_FrWyVlv_MtrVltg);

#endif

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_b_FrWyVlv_MtrVltgFA);

#endif

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_FrWyVlv_MtrVltg' */
    /* Chart: '<S106>/PokeTAIR_U_FrWyVlv_MtrVltgChrt' incorporates:
     *  SignalConversion generated from: '<S106>/LeTAIR_U_FrWyVlv_MtrVltg'
     *  SignalConversion generated from: '<S106>/LeTAIR_b_FrWyVlv_MtrVltgFA'
     */
    /* Gateway: PokeTAIR_U_FrWyVlv_MtrVltg/PokeTAIR_U_FrWyVlv_MtrVltgChrt */
    /* During: PokeTAIR_U_FrWyVlv_MtrVltg/PokeTAIR_U_FrWyVlv_MtrVltgChrt */
    /* Entry Internal: PokeTAIR_U_FrWyVlv_MtrVltg/PokeTAIR_U_FrWyVlv_MtrVltgChrt */
    /* Transition: '<S314>:2' */
    if (!LeTAIR_b_FrWyVlv_MtrVltgFA)
    {
        /* Transition: '<S314>:3' */
        /* Transition: '<S314>:15' */
        TAIR_ac_B.LeTAIR_U_FrWyVlv_MtrVltg_out = LeTAIR_U_FrWyVlv_MtrVltg;

        /* Transition: '<S314>:18' */
    }
    else
    {
        /* Transition: '<S314>:4' */
    }

    /* End of Chart: '<S106>/PokeTAIR_U_FrWyVlv_MtrVltgChrt' */

    /* Merge: '<Root>/Merge_200' incorporates:
     *  SignalConversion generated from: '<S106>/VeTAIR_U_FrWyVlv_MtrVltg_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_FrWyVlv_MtrVltg_VeTAIR_U_FrWyVlv_MtrVltg_write_IRV
        (TAIR_ac_B.LeTAIR_U_FrWyVlv_MtrVltg_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_FrWyVlv_MtrVltg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) PokeTAIR_U_HTL_BypsVlv_MtrVltg(VAR(float32, AUTOMATIC)
    LeTAIR_U_HTL_BypsVlv_MtrVltg, VAR(boolean, AUTOMATIC)
    LeTAIR_b_HTL_BypsVlv_MtrVltgFA)
{

#if Rte_SysCon_Variant_TAIR_10

    boolean rtb_LeTAIR_b_HTL_BypsVlv_MtrV_i;

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_U_HTL_BypsVlv_MtrVltg);

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_b_HTL_BypsVlv_MtrVltgFA);

#endif

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_HTL_BypsVlv_MtrVltg' */
    /* Chart: '<S107>/PokeTAIR_U_HTL_BypsVlv_MtrVltgChrt' incorporates:
     *  SignalConversion generated from: '<S107>/LeTAIR_U_HTL_BypsVlv_MtrVltg'
     *  SignalConversion generated from: '<S107>/LeTAIR_b_HTL_BypsVlv_MtrVltgFA'
     */
    /* Gateway: PokeTAIR_U_HTL_BypsVlv_MtrVltg/PokeTAIR_U_HTL_BypsVlv_MtrVltgChrt */
    /* During: PokeTAIR_U_HTL_BypsVlv_MtrVltg/PokeTAIR_U_HTL_BypsVlv_MtrVltgChrt */
    /* Entry Internal: PokeTAIR_U_HTL_BypsVlv_MtrVltg/PokeTAIR_U_HTL_BypsVlv_MtrVltgChrt */
    /* Transition: '<S315>:2' */
    if (!LeTAIR_b_HTL_BypsVlv_MtrVltgFA)
    {
        /* Transition: '<S315>:3' */
        /* Transition: '<S315>:15' */
        TAIR_ac_B.LeTAIR_U_HTL_BypsVlv_MtrVltg_ou = LeTAIR_U_HTL_BypsVlv_MtrVltg;
        rtb_LeTAIR_b_HTL_BypsVlv_MtrV_i = false;

        /* Transition: '<S315>:18' */
    }
    else
    {
        /* Transition: '<S315>:4' */
        rtb_LeTAIR_b_HTL_BypsVlv_MtrV_i = true;
    }

    /* End of Chart: '<S107>/PokeTAIR_U_HTL_BypsVlv_MtrVltgChrt' */

    /* Merge: '<Root>/Merge_102' incorporates:
     *  SignalConversion generated from: '<S107>/VeTAIR_U_HTL_BypsVlv_MtrVltg_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_HTL_BypsVlv_MtrVltg_VeTAIR_U_HTL_BypsVlv_MtrVltg_write_IRV
        (TAIR_ac_B.LeTAIR_U_HTL_BypsVlv_MtrVltg_ou);

    /* Merge: '<Root>/Merge_104' incorporates:
     *  SignalConversion generated from: '<S107>/VeTAIR_b_HTL_BypsVlv_MtrVltgFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_HTL_BypsVlv_MtrVltg_VeTAIR_b_HTL_BypsVlv_MtrVltgFA_write_IRV
        (rtb_LeTAIR_b_HTL_BypsVlv_MtrV_i);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_HTL_BypsVlv_MtrVltg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_U_HTRBV_EcuVoltage(VAR(float32, AUTOMATIC)
    LeTAIR_U_HTRBV_EcuVoltage)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_U_HTRBV_EcuVoltage);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_HTRBV_EcuVoltage' */
    /* Merge: '<Root>/Merge_166' incorporates:
     *  SignalConversion generated from: '<S108>/LeTAIR_U_EEXV_SupplyVolt'
     *  SignalConversion generated from: '<S108>/VeTAIR_U_HTRBV_EcuVoltage_write'
     */
    /* Gateway: PokeTAIR_U_HTRBV_EcuVoltage/PokeTAIR_U_HTRBV_EcuVoltageChrt */
    /* During: PokeTAIR_U_HTRBV_EcuVoltage/PokeTAIR_U_HTRBV_EcuVoltageChrt */
    /* Entry Internal: PokeTAIR_U_HTRBV_EcuVoltage/PokeTAIR_U_HTRBV_EcuVoltageChrt */
    /* Transition: '<S316>:25' */
    Rte_IrvWrite_PokeTAIR_U_HTRBV_EcuVoltage_VeTAIR_U_HTRBV_EcuVoltage_write_IRV
        (LeTAIR_U_HTRBV_EcuVoltage);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_HTRBV_EcuVoltage' */
#endif

}

#endif

/* Output function */
FUNC(void, TAIR_CODE) PokeTAIR_U_HT_CabVlvSts(VAR(float32, AUTOMATIC)
    LeTAIR_U_HT_CabVlvSts, VAR(boolean, AUTOMATIC) LeTAIR_b_HT_CabVlvStsFA)
{
    boolean rtb_LeTAIR_b_HT_CabVlvStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_HT_CabVlvSts' */
    /* Chart: '<S109>/PokeTAIR_U_HT_CabVlvStsChrt' incorporates:
     *  SignalConversion generated from: '<S109>/LeTAIR_U_HT_CabVlvSts'
     *  SignalConversion generated from: '<S109>/LeTAIR_b_HT_CabVlvStsFA'
     */
    /* Gateway: PokeTAIR_U_HT_CabVlvSts/PokeTAIR_U_HT_CabVlvStsChrt */
    /* During: PokeTAIR_U_HT_CabVlvSts/PokeTAIR_U_HT_CabVlvStsChrt */
    /* Entry Internal: PokeTAIR_U_HT_CabVlvSts/PokeTAIR_U_HT_CabVlvStsChrt */
    /* Transition: '<S317>:2' */
    if (!LeTAIR_b_HT_CabVlvStsFA)
    {
        /* Transition: '<S317>:3' */
        /* Transition: '<S317>:15' */
        TAIR_ac_B.LeTAIR_U_HT_CabVlvSts_out = LeTAIR_U_HT_CabVlvSts;
        rtb_LeTAIR_b_HT_CabVlvStsFA_out = false;

        /* Transition: '<S317>:18' */
    }
    else
    {
        /* Transition: '<S317>:4' */
        rtb_LeTAIR_b_HT_CabVlvStsFA_out = true;
    }

    /* End of Chart: '<S109>/PokeTAIR_U_HT_CabVlvStsChrt' */

    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S109>/VeTAIR_U_HT_CabVlvSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_HT_CabVlvSts_VeTAIR_U_HT_CabVlvSts_write_IRV
        (TAIR_ac_B.LeTAIR_U_HT_CabVlvSts_out);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S109>/VeTAIR_b_HT_CabVlvStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_HT_CabVlvSts_VeTAIR_b_HT_CabVlvStsFA_write_IRV
        (rtb_LeTAIR_b_HT_CabVlvStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_HT_CabVlvSts' */
}

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) PokeTAIR_U_LTR_BypsVlv_MtrVltg(VAR(float32, AUTOMATIC)
    LeTAIR_U_LTR_BypsVlv_MtrVltg, VAR(boolean, AUTOMATIC)
    LeTAIR_b_LTR_BypsVlv_MtrVltgFA)
{

#if Rte_SysCon_Variant_TAIR_9

    boolean rtb_LeTAIR_b_LTR_BypsVlv_MtrV_o;

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_U_LTR_BypsVlv_MtrVltg);

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_b_LTR_BypsVlv_MtrVltgFA);

#endif

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_LTR_BypsVlv_MtrVltg' */
    /* Chart: '<S110>/PokeTAIR_U_LTR_BypsVlv_MtrVltgChrt' incorporates:
     *  SignalConversion generated from: '<S110>/LeTAIR_U_LTR_BypsVlv_MtrVltg'
     *  SignalConversion generated from: '<S110>/LeTAIR_b_LTR_BypsVlv_MtrVltgFA'
     */
    /* Gateway: PokeTAIR_U_LTR_BypsVlv_MtrVltg/PokeTAIR_U_LTR_BypsVlv_MtrVltgChrt */
    /* During: PokeTAIR_U_LTR_BypsVlv_MtrVltg/PokeTAIR_U_LTR_BypsVlv_MtrVltgChrt */
    /* Entry Internal: PokeTAIR_U_LTR_BypsVlv_MtrVltg/PokeTAIR_U_LTR_BypsVlv_MtrVltgChrt */
    /* Transition: '<S318>:2' */
    if (!LeTAIR_b_LTR_BypsVlv_MtrVltgFA)
    {
        /* Transition: '<S318>:3' */
        /* Transition: '<S318>:15' */
        TAIR_ac_B.LeTAIR_U_LTR_BypsVlv_MtrVltg_ou = LeTAIR_U_LTR_BypsVlv_MtrVltg;
        rtb_LeTAIR_b_LTR_BypsVlv_MtrV_o = false;

        /* Transition: '<S318>:18' */
    }
    else
    {
        /* Transition: '<S318>:4' */
        rtb_LeTAIR_b_LTR_BypsVlv_MtrV_o = true;
    }

    /* End of Chart: '<S110>/PokeTAIR_U_LTR_BypsVlv_MtrVltgChrt' */

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S110>/VeTAIR_U_LTR_BypsVlv_MtrVltg_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_LTR_BypsVlv_MtrVltg_VeTAIR_U_LTR_BypsVlv_MtrVltg_write_IRV
        (TAIR_ac_B.LeTAIR_U_LTR_BypsVlv_MtrVltg_ou);

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S110>/VeTAIR_b_LTR_BypsVlv_MtrVltgFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_LTR_BypsVlv_MtrVltg_VeTAIR_b_LTR_BypsVlv_MtrVltgFA_write_IRV
        (rtb_LeTAIR_b_LTR_BypsVlv_MtrV_o);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_LTR_BypsVlv_MtrVltg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_U_OEXV_SupplyVolt(VAR(float32, AUTOMATIC)
    LeTAIR_U_OEXV_SupplyVolt, VAR(boolean, AUTOMATIC) LeTAIR_b_OEXV_SupplyVoltFA)
{

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_U_OEXV_SupplyVolt);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_SupplyVoltFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_U_OEXV_SupplyVolt' */
    /* Chart: '<S111>/PokeTAIR_U_OEXV_SupplyVoltChrt' incorporates:
     *  SignalConversion generated from: '<S111>/LeTAIR_U_OEXV_SupplyVolt'
     *  SignalConversion generated from: '<S111>/LeTAIR_b_OEXV_SupplyVoltFA'
     */
    /* Gateway: PokeTAIR_U_OEXV_SupplyVolt/PokeTAIR_U_OEXV_SupplyVoltChrt */
    /* During: PokeTAIR_U_OEXV_SupplyVolt/PokeTAIR_U_OEXV_SupplyVoltChrt */
    /* Entry Internal: PokeTAIR_U_OEXV_SupplyVolt/PokeTAIR_U_OEXV_SupplyVoltChrt */
    /* Transition: '<S319>:2' */
    if (!LeTAIR_b_OEXV_SupplyVoltFA)
    {
        /* Transition: '<S319>:3' */
        /* Transition: '<S319>:15' */
        TAIR_ac_B.LeTAIR_U_OEXV_SupplyVolt_out = LeTAIR_U_OEXV_SupplyVolt;

        /* Transition: '<S319>:18' */
    }
    else
    {
        /* Transition: '<S319>:4' */
    }

    /* End of Chart: '<S111>/PokeTAIR_U_OEXV_SupplyVoltChrt' */

    /* Merge: '<Root>/Merge_160' incorporates:
     *  SignalConversion generated from: '<S111>/VeTAIR_U_OEXV_SupplyVolt_write'
     * */
    Rte_IrvWrite_PokeTAIR_U_OEXV_SupplyVolt_VeTAIR_U_OEXV_SupplyVolt_write_IRV
        (TAIR_ac_B.LeTAIR_U_OEXV_SupplyVolt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_U_OEXV_SupplyVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_b_ACCompReq(VAR(boolean, AUTOMATIC)
    LeTAIR_b_ACCompReq)
{

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_ACCompReq);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_ACCompReq' */
    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S112>/LeTAIR_b_ACCompReq'
     *  SignalConversion generated from: '<S112>/VeTAIR_b_ACCompReq_write'
     */
    /* Gateway: PokeTAIR_b_ACCompReq/PokeTAIR_b_ACCompReqChrt */
    /* During: PokeTAIR_b_ACCompReq/PokeTAIR_b_ACCompReqChrt */
    /* Entry Internal: PokeTAIR_b_ACCompReq/PokeTAIR_b_ACCompReqChrt */
    /* Transition: '<S320>:2' */
    Rte_IrvWrite_PokeTAIR_b_ACCompReq_VeTAIR_b_ACCompReq_write_IRV
        (LeTAIR_b_ACCompReq);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_ACCompReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_BoostSts(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_BoostSts)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_BoostSts);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_BoostSts' */
    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S113>/LeTAIR_b_AGS2_BoostSts'
     *  SignalConversion generated from: '<S113>/VeTAIR_b_AGS2_BoostSts_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_BoostSts/PokeTAIR_b_AGS2_BoostStsChrt */
    /* During: PokeTAIR_b_AGS2_BoostSts/PokeTAIR_b_AGS2_BoostStsChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_BoostSts/PokeTAIR_b_AGS2_BoostStsChrt */
    /* Transition: '<S321>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_BoostSts_VeTAIR_b_AGS2_BoostSts_write_IRV
        (LeTAIR_b_AGS2_BoostSts);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_BoostSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_CalibrationActv(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_CalibrationActv)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_CalibrationActv);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_CalibrationActv' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S114>/LeTAIR_b_AGS2_CalibrationActv'
     *  SignalConversion generated from: '<S114>/VeTAIR_b_AGS2_CalibrationActv_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_CalibrationActv/PokeTAIR_b_AGS2_CalibrationActvChrt */
    /* During: PokeTAIR_b_AGS2_CalibrationActv/PokeTAIR_b_AGS2_CalibrationActvChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_CalibrationActv/PokeTAIR_b_AGS2_CalibrationActvChrt */
    /* Transition: '<S322>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_CalibrationActv_VeTAIR_b_AGS2_CalibrationActv_write_IRV
        (LeTAIR_b_AGS2_CalibrationActv);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_CalibrationActv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_ErrMechBreak(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_ErrMechBreak)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_ErrMechBreak);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrMechBreak' */
    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S115>/LeTAIR_b_AGS2_ErrMechBreak'
     *  SignalConversion generated from: '<S115>/VeTAIR_b_AGS2_ErrMechBreak_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_ErrMechBreak/PokeTAIR_b_AGS2_ErrMechBreakChrt */
    /* During: PokeTAIR_b_AGS2_ErrMechBreak/PokeTAIR_b_AGS2_ErrMechBreakChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_ErrMechBreak/PokeTAIR_b_AGS2_ErrMechBreakChrt */
    /* Transition: '<S323>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_ErrMechBreak_VeTAIR_b_AGS2_ErrMechBreak_write_IRV
        (LeTAIR_b_AGS2_ErrMechBreak);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrMechBreak' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_ErrMechStuck(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_ErrMechStuck)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_ErrMechStuck);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrMechStuck' */
    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S116>/LeTAIR_b_AGS2_ErrMechStuck'
     *  SignalConversion generated from: '<S116>/VeTAIR_b_AGS2_ErrMechStuck_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_ErrMechStuck/PokeTAIR_b_AGS2_ErrMechStuckChrt */
    /* During: PokeTAIR_b_AGS2_ErrMechStuck/PokeTAIR_b_AGS2_ErrMechStuckChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_ErrMechStuck/PokeTAIR_b_AGS2_ErrMechStuckChrt */
    /* Transition: '<S324>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_ErrMechStuck_VeTAIR_b_AGS2_ErrMechStuck_write_IRV
        (LeTAIR_b_AGS2_ErrMechStuck);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrMechStuck' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_ErrOverTemp(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_ErrOverTemp)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_ErrOverTemp);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrOverTemp' */
    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S117>/LeTAIR_b_AGS2_ErrOverTemp'
     *  SignalConversion generated from: '<S117>/VeTAIR_b_AGS2_ErrOverTemp_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_ErrOverTemp/PokeTAIR_b_AGS2_ErrOverTempChrt */
    /* During: PokeTAIR_b_AGS2_ErrOverTemp/PokeTAIR_b_AGS2_ErrOverTempChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_ErrOverTemp/PokeTAIR_b_AGS2_ErrOverTempChrt */
    /* Transition: '<S325>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_ErrOverTemp_VeTAIR_b_AGS2_ErrOverTemp_write_IRV
        (LeTAIR_b_AGS2_ErrOverTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrOverTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_ErrOverVolt(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_ErrOverVolt)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_ErrOverVolt);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrOverVolt' */
    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S118>/LeTAIR_b_AGS2_ErrOverVolt'
     *  SignalConversion generated from: '<S118>/VeTAIR_b_AGS2_ErrOverVolt_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_ErrOverVolt/PokeTAIR_b_AGS2_ErrOverVoltChrt */
    /* During: PokeTAIR_b_AGS2_ErrOverVolt/PokeTAIR_b_AGS2_ErrOverVoltChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_ErrOverVolt/PokeTAIR_b_AGS2_ErrOverVoltChrt */
    /* Transition: '<S326>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_ErrOverVolt_VeTAIR_b_AGS2_ErrOverVolt_write_IRV
        (LeTAIR_b_AGS2_ErrOverVolt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrOverVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_ErrUnderVolt(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_ErrUnderVolt)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_ErrUnderVolt);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrUnderVolt' */
    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S119>/LeTAIR_b_AGS2_ErrUnderVolt'
     *  SignalConversion generated from: '<S119>/VeTAIR_b_AGS2_ErrUnderVolt_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_ErrUnderVolt/PokeTAIR_b_AGS2_ErrUnderVoltChrt */
    /* During: PokeTAIR_b_AGS2_ErrUnderVolt/PokeTAIR_b_AGS2_ErrUnderVoltChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_ErrUnderVolt/PokeTAIR_b_AGS2_ErrUnderVoltChrt */
    /* Transition: '<S327>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_ErrUnderVolt_VeTAIR_b_AGS2_ErrUnderVolt_write_IRV
        (LeTAIR_b_AGS2_ErrUnderVolt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_ErrUnderVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS2_ResErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_ResErr)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_ResErr);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS2_ResErr' */
    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S120>/LeTAIR_b_AGS2_ResErr'
     *  SignalConversion generated from: '<S120>/VeTAIR_b_AGS2_ResErr_write'
     */
    /* Gateway: PokeTAIR_b_AGS2_ResErr/PokeTAIR_b_AGS2_ResErrChrt */
    /* During: PokeTAIR_b_AGS2_ResErr/PokeTAIR_b_AGS2_ResErrChrt */
    /* Entry Internal: PokeTAIR_b_AGS2_ResErr/PokeTAIR_b_AGS2_ResErrChrt */
    /* Transition: '<S328>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS2_ResErr_VeTAIR_b_AGS2_ResErr_write_IRV
        (LeTAIR_b_AGS2_ResErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS2_ResErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_BoostSts(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_BoostSts)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_BoostSts);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_BoostSts' */
    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S121>/LeTAIR_b_AGS_BoostSts'
     *  SignalConversion generated from: '<S121>/VeTAIR_b_AGS_BoostSts_write'
     */
    /* Gateway: PokeTAIR_b_AGS_BoostSts/PokeTAIR_b_AGS_BoostStsChrt */
    /* During: PokeTAIR_b_AGS_BoostSts/PokeTAIR_b_AGS_BoostStsChrt */
    /* Entry Internal: PokeTAIR_b_AGS_BoostSts/PokeTAIR_b_AGS_BoostStsChrt */
    /* Transition: '<S329>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_BoostSts_VeTAIR_b_AGS_BoostSts_write_IRV
        (LeTAIR_b_AGS_BoostSts);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_BoostSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_CalibrationActv(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_CalibrationActv)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_CalibrationActv);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_CalibrationActv' */
    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S122>/LeTAIR_b_AGS_CalibrationActv'
     *  SignalConversion generated from: '<S122>/VeTAIR_b_AGS_CalibrationActv_write'
     */
    /* Gateway: PokeTAIR_b_AGS_CalibrationActv/PokeTAIR_b_AGS_CalibrationActvChrt */
    /* During: PokeTAIR_b_AGS_CalibrationActv/PokeTAIR_b_AGS_CalibrationActvChrt */
    /* Entry Internal: PokeTAIR_b_AGS_CalibrationActv/PokeTAIR_b_AGS_CalibrationActvChrt */
    /* Transition: '<S330>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_CalibrationActv_VeTAIR_b_AGS_CalibrationActv_write_IRV
        (LeTAIR_b_AGS_CalibrationActv);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_CalibrationActv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_ErrMechBreak(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_ErrMechBreak)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_ErrMechBreak);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_ErrMechBreak' */
    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S123>/LeTAIR_b_AGS_ErrMechBreak'
     *  SignalConversion generated from: '<S123>/VeTAIR_b_AGS_ErrMechBreak_write'
     */
    /* Gateway: PokeTAIR_b_AGS_ErrMechBreak/PokeTAIR_b_AGS_ErrMechBreakChrt */
    /* During: PokeTAIR_b_AGS_ErrMechBreak/PokeTAIR_b_AGS_ErrMechBreakChrt */
    /* Entry Internal: PokeTAIR_b_AGS_ErrMechBreak/PokeTAIR_b_AGS_ErrMechBreakChrt */
    /* Transition: '<S331>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_ErrMechBreak_VeTAIR_b_AGS_ErrMechBreak_write_IRV
        (LeTAIR_b_AGS_ErrMechBreak);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_ErrMechBreak' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_ErrMechStuck(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_ErrMechStuck)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_ErrMechStuck);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_ErrMechStuck' */
    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S124>/LeTAIR_b_AGS_ErrMechStuck'
     *  SignalConversion generated from: '<S124>/VeTAIR_b_AGS_ErrMechStuck_write'
     */
    /* Gateway: PokeTAIR_b_AGS_ErrMechStuck/PokeTAIR_b_AGS_ErrMechStuckChrt */
    /* During: PokeTAIR_b_AGS_ErrMechStuck/PokeTAIR_b_AGS_ErrMechStuckChrt */
    /* Entry Internal: PokeTAIR_b_AGS_ErrMechStuck/PokeTAIR_b_AGS_ErrMechStuckChrt */
    /* Transition: '<S332>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_ErrMechStuck_VeTAIR_b_AGS_ErrMechStuck_write_IRV
        (LeTAIR_b_AGS_ErrMechStuck);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_ErrMechStuck' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_ErrOverTemp(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_ErrOverTemp)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_ErrOverTemp);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_ErrOverTemp' */
    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S125>/LeTAIR_b_AGS_ErrOverTemp'
     *  SignalConversion generated from: '<S125>/VeTAIR_b_AGS_ErrOverTemp_write'
     */
    /* Gateway: PokeTAIR_b_AGS_ErrOverTemp/PokeTAIR_b_AGS_ErrOverTempChrt */
    /* During: PokeTAIR_b_AGS_ErrOverTemp/PokeTAIR_b_AGS_ErrOverTempChrt */
    /* Entry Internal: PokeTAIR_b_AGS_ErrOverTemp/PokeTAIR_b_AGS_ErrOverTempChrt */
    /* Transition: '<S333>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_ErrOverTemp_VeTAIR_b_AGS_ErrOverTemp_write_IRV
        (LeTAIR_b_AGS_ErrOverTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_ErrOverTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_ErrOverVolt(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_ErrOverVolt)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_ErrOverVolt);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_ErrOverVolt' */
    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S126>/LeTAIR_b_AGS_ErrOverVolt'
     *  SignalConversion generated from: '<S126>/VeTAIR_b_AGS_ErrOverVolt_write'
     */
    /* Gateway: PokeTAIR_b_AGS_ErrOverVolt/PokeTAIR_b_AGS_ErrOverVoltChrt */
    /* During: PokeTAIR_b_AGS_ErrOverVolt/PokeTAIR_b_AGS_ErrOverVoltChrt */
    /* Entry Internal: PokeTAIR_b_AGS_ErrOverVolt/PokeTAIR_b_AGS_ErrOverVoltChrt */
    /* Transition: '<S334>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_ErrOverVolt_VeTAIR_b_AGS_ErrOverVolt_write_IRV
        (LeTAIR_b_AGS_ErrOverVolt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_ErrOverVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_ErrUnderVolt(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_ErrUnderVolt)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_ErrUnderVolt);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_ErrUnderVolt' */
    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S127>/LeTAIR_b_AGS_ErrUnderVolt'
     *  SignalConversion generated from: '<S127>/VeTAIR_b_AGS_ErrUnderVolt_write'
     */
    /* Gateway: PokeTAIR_b_AGS_ErrUnderVolt/PokeTAIR_b_AGS_ErrUnderVoltChrt */
    /* During: PokeTAIR_b_AGS_ErrUnderVolt/PokeTAIR_b_AGS_ErrUnderVoltChrt */
    /* Entry Internal: PokeTAIR_b_AGS_ErrUnderVolt/PokeTAIR_b_AGS_ErrUnderVoltChrt */
    /* Transition: '<S335>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_ErrUnderVolt_VeTAIR_b_AGS_ErrUnderVolt_write_IRV
        (LeTAIR_b_AGS_ErrUnderVolt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_ErrUnderVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_b_AGS_ResErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_ResErr)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_ResErr);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_AGS_ResErr' */
    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S128>/LeTAIR_b_AGS_ResErr'
     *  SignalConversion generated from: '<S128>/VeTAIR_b_AGS_ResErr_write'
     */
    /* Gateway: PokeTAIR_b_AGS_ResErr/PokeTAIR_b_AGS_ResErrChrt */
    /* During: PokeTAIR_b_AGS_ResErr/PokeTAIR_b_AGS_ResErrChrt */
    /* Entry Internal: PokeTAIR_b_AGS_ResErr/PokeTAIR_b_AGS_ResErrChrt */
    /* Transition: '<S336>:2' */
    Rte_IrvWrite_PokeTAIR_b_AGS_ResErr_VeTAIR_b_AGS_ResErr_write_IRV
        (LeTAIR_b_AGS_ResErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_AGS_ResErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) PokeTAIR_b_CPV2_RsErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_CPV2_RsErr)
{

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_b_CPV2_RsErr);

#endif

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_CPV2_RsErr' */
    /* Merge: '<Root>/Merge_152' incorporates:
     *  SignalConversion generated from: '<S129>/LeTAIR_b_CPV2_RsErr'
     *  SignalConversion generated from: '<S129>/VeTAIR_b_CPV2_RsErr_write'
     */
    /* Gateway: PokeTAIR_b_CPV2_RsErr/PokeTAIR_b_CPV2_RsErrChrt */
    /* During: PokeTAIR_b_CPV2_RsErr/PokeTAIR_b_CPV2_RsErrChrt */
    /* Entry Internal: PokeTAIR_b_CPV2_RsErr/PokeTAIR_b_CPV2_RsErrChrt */
    /* Transition: '<S337>:2' */
    Rte_IrvWrite_PokeTAIR_b_CPV2_RsErr_VeTAIR_b_CPV2_RsErr_write_IRV
        (LeTAIR_b_CPV2_RsErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_CPV2_RsErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_b_CompSpdIncrReq(VAR(boolean, AUTOMATIC)
    LeTAIR_b_CompSpdIncrReq)
{

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_CompSpdIncrReq);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_CompSpdIncrReq' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S130>/LeTAIR_b_CompSpdIncrReq'
     *  SignalConversion generated from: '<S130>/VeTAIR_b_CompSpdIncrReq_write'
     */
    /* Gateway: PokeTAIR_b_CompSpdIncrReq/PokeTAIR_b_CompSpdIncrReqChrt */
    /* During: PokeTAIR_b_CompSpdIncrReq/PokeTAIR_b_CompSpdIncrReqChrt */
    /* Entry Internal: PokeTAIR_b_CompSpdIncrReq/PokeTAIR_b_CompSpdIncrReqChrt */
    /* Transition: '<S338>:2' */
    Rte_IrvWrite_PokeTAIR_b_CompSpdIncrReq_VeTAIR_b_CompSpdIncrReq_write_IRV
        (LeTAIR_b_CompSpdIncrReq);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_CompSpdIncrReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_b_EEXV_CalRq(VAR(boolean, AUTOMATIC)
    LeTAIR_b_EEXV_CalRq)
{

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_CalRq);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_EEXV_CalRq' */
    /* Merge: '<Root>/Merge_143' incorporates:
     *  SignalConversion generated from: '<S131>/LeTAIR_b_EEXV_CalRq'
     *  SignalConversion generated from: '<S131>/VeTAIR_b_EEXV_CalRq_write'
     */
    /* Gateway: PokeTAIR_b_EEXV_CalRq/PokeTAIR_b_EEXV_CalRqChrt */
    /* During: PokeTAIR_b_EEXV_CalRq/PokeTAIR_b_EEXV_CalRqChrt */
    /* Entry Internal: PokeTAIR_b_EEXV_CalRq/PokeTAIR_b_EEXV_CalRqChrt */
    /* Transition: '<S339>:2' */
    Rte_IrvWrite_PokeTAIR_b_EEXV_CalRq_VeTAIR_b_EEXV_CalRq_write_IRV
        (LeTAIR_b_EEXV_CalRq);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_EEXV_CalRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_b_EEXV_RspErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_EEXV_RspErr)
{

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_RspErr);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_EEXV_RspErr' */
    /* Merge: '<Root>/Merge_144' incorporates:
     *  SignalConversion generated from: '<S132>/LeTAIR_b_EEXV_RspErr'
     *  SignalConversion generated from: '<S132>/VeTAIR_b_EEXV_RspErr_write'
     */
    /* Gateway: PokeTAIR_b_EEXV_RspErr/PokeTAIR_b_EEXV_RspErrChrt */
    /* During: PokeTAIR_b_EEXV_RspErr/PokeTAIR_b_EEXV_RspErrChrt */
    /* Entry Internal: PokeTAIR_b_EEXV_RspErr/PokeTAIR_b_EEXV_RspErrChrt */
    /* Transition: '<S340>:2' */
    Rte_IrvWrite_PokeTAIR_b_EEXV_RspErr_VeTAIR_b_EEXV_RspErr_write_IRV
        (LeTAIR_b_EEXV_RspErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_EEXV_RspErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_b_EXV_CalRq(VAR(boolean, AUTOMATIC)
    LeTAIR_b_EXV_CalRq)
{

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_CalRq);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_EXV_CalRq' */
    /* Merge: '<Root>/Merge_189' incorporates:
     *  SignalConversion generated from: '<S133>/LeTAIR_b_EXV_CalRq'
     *  SignalConversion generated from: '<S133>/VeTAIR_b_EXV_CalRq_write'
     */
    /* Gateway: PokeTAIR_b_EXV_CalRq/PokeTAIR_b_EXV_CalRqChrt */
    /* During: PokeTAIR_b_EXV_CalRq/PokeTAIR_b_EXV_CalRqChrt */
    /* Entry Internal: PokeTAIR_b_EXV_CalRq/PokeTAIR_b_EXV_CalRqChrt */
    /* Transition: '<S341>:2' */
    Rte_IrvWrite_PokeTAIR_b_EXV_CalRq_VeTAIR_b_EXV_CalRq_write_IRV
        (LeTAIR_b_EXV_CalRq);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_EXV_CalRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_b_EXV_RspErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_EXV_RspErr)
{

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_RspErr);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_EXV_RspErr' */
    /* Merge: '<Root>/Merge_190' incorporates:
     *  SignalConversion generated from: '<S134>/LeTAIR_b_EXV_RspErr'
     *  SignalConversion generated from: '<S134>/VeTAIR_b_EXV_RspErr_write'
     */
    /* Gateway: PokeTAIR_b_EXV_RspErr/PokeTAIR_b_EXV_RspErrChrt */
    /* During: PokeTAIR_b_EXV_RspErr/PokeTAIR_b_EXV_RspErrChrt */
    /* Entry Internal: PokeTAIR_b_EXV_RspErr/PokeTAIR_b_EXV_RspErrChrt */
    /* Transition: '<S342>:2' */
    Rte_IrvWrite_PokeTAIR_b_EXV_RspErr_VeTAIR_b_EXV_RspErr_write_IRV
        (LeTAIR_b_EXV_RspErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_EXV_RspErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) PokeTAIR_b_FrWyVlv_RsErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_FrWyVlv_RsErr)
{

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_b_FrWyVlv_RsErr);

#endif

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_FrWyVlv_RsErr' */
    /* Merge: '<Root>/Merge_195' incorporates:
     *  SignalConversion generated from: '<S135>/LeTAIR_b_FrWyVlv_RsErr'
     *  SignalConversion generated from: '<S135>/VeTAIR_b_FrWyVlv_RsErr_write'
     */
    /* Gateway: PokeTAIR_b_FrWyVlv_RsErr/PokeTAIR_b_FrWyVlv_RsErrChrt */
    /* During: PokeTAIR_b_FrWyVlv_RsErr/PokeTAIR_b_FrWyVlv_RsErrChrt */
    /* Entry Internal: PokeTAIR_b_FrWyVlv_RsErr/PokeTAIR_b_FrWyVlv_RsErrChrt */
    /* Transition: '<S343>:2' */
    Rte_IrvWrite_PokeTAIR_b_FrWyVlv_RsErr_VeTAIR_b_FrWyVlv_RsErr_write_IRV
        (LeTAIR_b_FrWyVlv_RsErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_FrWyVlv_RsErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) PokeTAIR_b_HTL_BypsVlv_RsErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_HTL_BypsVlv_RsErr)
{

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_b_HTL_BypsVlv_RsErr);

#endif

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_HTL_BypsVlv_RsErr' */
    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S136>/LeTAIR_b_HTL_BypsVlv_RsErr'
     *  SignalConversion generated from: '<S136>/VeTAIR_b_HTL_BypsVlv_RsErr_write'
     */
    /* Gateway: PokeTAIR_b_HTL_BypsVlv_RsErr/PokeTAIR_b_HTL_BypsVlv_RsErrChrt */
    /* During: PokeTAIR_b_HTL_BypsVlv_RsErr/PokeTAIR_b_HTL_BypsVlv_RsErrChrt */
    /* Entry Internal: PokeTAIR_b_HTL_BypsVlv_RsErr/PokeTAIR_b_HTL_BypsVlv_RsErrChrt */
    /* Transition: '<S344>:2' */
    Rte_IrvWrite_PokeTAIR_b_HTL_BypsVlv_RsErr_VeTAIR_b_HTL_BypsVlv_RsErr_write_IRV
        (LeTAIR_b_HTL_BypsVlv_RsErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_HTL_BypsVlv_RsErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_b_HTRBV_ResponseError(VAR(boolean, AUTOMATIC)
    LeTAIR_b_HTRBV_ResponseError)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_b_HTRBV_ResponseError);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_HTRBV_ResponseError' */
    /* Merge: '<Root>/Merge_157' incorporates:
     *  SignalConversion generated from: '<S137>/LeTAIR_b_EEXV_CalRq'
     *  SignalConversion generated from: '<S137>/VeTAIR_b_HTRBV_ResponseError_write'
     */
    /* Gateway: PokeTAIR_b_HTRBV_ResponseError/PokeTAIR_b_HTRBV_ResponseErrorChrt */
    /* During: PokeTAIR_b_HTRBV_ResponseError/PokeTAIR_b_HTRBV_ResponseErrorChrt */
    /* Entry Internal: PokeTAIR_b_HTRBV_ResponseError/PokeTAIR_b_HTRBV_ResponseErrorChrt */
    /* Transition: '<S345>:2' */
    Rte_IrvWrite_PokeTAIR_b_HTRBV_ResponseError_VeTAIR_b_HTRBV_ResponseError_write_IRV
        (LeTAIR_b_HTRBV_ResponseError);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_HTRBV_ResponseError' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_b_HTRBV_SelfCalReq(VAR(boolean, AUTOMATIC)
    LeTAIR_b_HTRBV_SelfCalReq)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_b_HTRBV_SelfCalReq);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_HTRBV_SelfCalReq' */
    /* Merge: '<Root>/Merge_188' incorporates:
     *  SignalConversion generated from: '<S138>/LeTAIR_b_EEXV_CalRq'
     *  SignalConversion generated from: '<S138>/VeTAIR_b_HTRBV_SelfCalReq_write'
     */
    /* Gateway: PokeTAIR_b_HTRBV_SelfCalReq/PokeTAIR_b_HTRBV_SelfCalReqChrt */
    /* During: PokeTAIR_b_HTRBV_SelfCalReq/PokeTAIR_b_HTRBV_SelfCalReqChrt */
    /* Entry Internal: PokeTAIR_b_HTRBV_SelfCalReq/PokeTAIR_b_HTRBV_SelfCalReqChrt */
    /* Transition: '<S346>:2' */
    Rte_IrvWrite_PokeTAIR_b_HTRBV_SelfCalReq_VeTAIR_b_HTRBV_SelfCalReq_write_IRV
        (LeTAIR_b_HTRBV_SelfCalReq);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_HTRBV_SelfCalReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_1

FUNC(void, TAIR_CODE) PokeTAIR_b_HghRfrgtPresFailSts(VAR(boolean, AUTOMATIC)
    LeTAIR_b_HghRfrgtPresFailSts)
{

#if !Rte_SysCon_Variant_TAIR_1

    UNUSED_PARAMETER(LeTAIR_b_HghRfrgtPresFailSts);

#endif

#if Rte_SysCon_Variant_TAIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_HghRfrgtPresFailSts' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S139>/LeTAIR_b_HghRfrgtPresFailSts'
     *  SignalConversion generated from: '<S139>/VeTAIR_b_HghRfrgtPresFailSts_write'
     */
    /* Gateway: PokeTAIR_b_HghRfrgtPresFailSts/PokeTAIR_b_HghRfrgtPresFailStsChrt */
    /* During: PokeTAIR_b_HghRfrgtPresFailSts/PokeTAIR_b_HghRfrgtPresFailStsChrt */
    /* Entry Internal: PokeTAIR_b_HghRfrgtPresFailSts/PokeTAIR_b_HghRfrgtPresFailStsChrt */
    /* Transition: '<S347>:2' */
    Rte_IrvWrite_PokeTAIR_b_HghRfrgtPresFailSts_VeTAIR_b_HghRfrgtPresFailStsFA_write_IRV
        (LeTAIR_b_HghRfrgtPresFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_HghRfrgtPresFailSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) PokeTAIR_b_LTR_BypsVlv_RsErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_LTR_BypsVlv_RsErr)
{

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_b_LTR_BypsVlv_RsErr);

#endif

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_LTR_BypsVlv_RsErr' */
    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S140>/LeTAIR_b_LTR_BypsVlv_RsErr'
     *  SignalConversion generated from: '<S140>/VeTAIR_b_LTR_BypsVlv_RsErr_write'
     */
    /* Gateway: PokeTAIR_b_LTR_BypsVlv_RsErr/PokeTAIR_b_LTR_BypsVlv_RsErrChrt */
    /* During: PokeTAIR_b_LTR_BypsVlv_RsErr/PokeTAIR_b_LTR_BypsVlv_RsErrChrt */
    /* Entry Internal: PokeTAIR_b_LTR_BypsVlv_RsErr/PokeTAIR_b_LTR_BypsVlv_RsErrChrt */
    /* Transition: '<S348>:2' */
    Rte_IrvWrite_PokeTAIR_b_LTR_BypsVlv_RsErr_VeTAIR_b_LTR_BypsVlv_RsErr_write_IRV
        (LeTAIR_b_LTR_BypsVlv_RsErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_LTR_BypsVlv_RsErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_b_OEXV_CalRq(VAR(boolean, AUTOMATIC)
    LeTAIR_b_OEXV_CalRq)
{

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_CalRq);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_OEXV_CalRq' */
    /* Merge: '<Root>/Merge_172' incorporates:
     *  SignalConversion generated from: '<S141>/LeTAIR_b_OEXV_CalRq'
     *  SignalConversion generated from: '<S141>/VeTAIR_b_OEXV_CalRq_write'
     */
    /* Gateway: PokeTAIR_b_OEXV_CalRq/PokeTAIR_b_OEXV_CalRqChrt */
    /* During: PokeTAIR_b_OEXV_CalRq/PokeTAIR_b_OEXV_CalRqChrt */
    /* Entry Internal: PokeTAIR_b_OEXV_CalRq/PokeTAIR_b_OEXV_CalRqChrt */
    /* Transition: '<S349>:2' */
    Rte_IrvWrite_PokeTAIR_b_OEXV_CalRq_VeTAIR_b_OEXV_CalRq_write_IRV
        (LeTAIR_b_OEXV_CalRq);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_OEXV_CalRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_b_OEXV_RspErr(VAR(boolean, AUTOMATIC)
    LeTAIR_b_OEXV_RspErr)
{

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_RspErr);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_OEXV_RspErr' */
    /* Merge: '<Root>/Merge_173' incorporates:
     *  SignalConversion generated from: '<S142>/LeTAIR_b_OEXV_RspErr'
     *  SignalConversion generated from: '<S142>/VeTAIR_b_OEXV_RspErr_write'
     */
    /* Gateway: PokeTAIR_b_OEXV_RspErr/PokeTAIR_b_OEXV_RspErrChrt */
    /* During: PokeTAIR_b_OEXV_RspErr/PokeTAIR_b_OEXV_RspErrChrt */
    /* Entry Internal: PokeTAIR_b_OEXV_RspErr/PokeTAIR_b_OEXV_RspErrChrt */
    /* Transition: '<S350>:2' */
    Rte_IrvWrite_PokeTAIR_b_OEXV_RspErr_VeTAIR_b_OEXV_RspErr_write_IRV
        (LeTAIR_b_OEXV_RspErr);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_OEXV_RspErr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_b_RespErr_EAC(VAR(boolean, AUTOMATIC)
    LeTAIR_b_RespErr_EAC)
{

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_RespErr_EAC);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_RespErr_EAC' */
    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S143>/LeTAIR_b_RespErr_EAC'
     *  SignalConversion generated from: '<S143>/VeTAIR_b_RespErr_EAC_write'
     */
    /* Gateway: PokeTAIR_b_RespErr_EAC/PokeTAIR_b_RespErr_EACChrt */
    /* During: PokeTAIR_b_RespErr_EAC/PokeTAIR_b_RespErr_EACChrt */
    /* Entry Internal: PokeTAIR_b_RespErr_EAC/PokeTAIR_b_RespErr_EACChrt */
    /* Transition: '<S351>:2' */
    Rte_IrvWrite_PokeTAIR_b_RespErr_EAC_VeTAIR_b_RespErr_EAC_write_IRV
        (LeTAIR_b_RespErr_EAC);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_RespErr_EAC' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_b_WinshldDfrst(VAR(boolean, AUTOMATIC)
    LeTAIR_b_WinshldDfrst)
{

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_WinshldDfrst);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_b_WinshldDfrst' */
    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S144>/LeTAIR_b_WinshldDfrst'
     *  SignalConversion generated from: '<S144>/VeTAIR_b_WinshldDfrst_write'
     */
    /* Gateway: PokeTAIR_b_WinshldDfrst/PokeTAIR_b_WinshldDfrstChrt */
    /* During: PokeTAIR_b_WinshldDfrst/PokeTAIR_b_WinshldDfrstChrt */
    /* Entry Internal: PokeTAIR_b_WinshldDfrst/PokeTAIR_b_WinshldDfrstChrt */
    /* Transition: '<S352>:2' */
    Rte_IrvWrite_PokeTAIR_b_WinshldDfrst_VeTAIR_b_WinshldDfrst_write_IRV
        (LeTAIR_b_WinshldDfrst);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_b_WinshldDfrst' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_e_AGS2_CalibrationSts(VAR
    (TeTAIR_e_AGS_Calibration_Sts, AUTOMATIC) LeTAIR_e_AGS2_CalibrationSts)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_e_AGS2_CalibrationSts);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_AGS2_CalibrationSts' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S145>/LeTAIR_e_AGS2_CalibrationSts'
     *  SignalConversion generated from: '<S145>/VeTAIR_e_AGS2_CalibrationSts_write'
     */
    /* Gateway: PokeTAIR_e_AGS2_CalibrationSts/PokeTAIR_e_AGS2_CalibrationStsChrt */
    /* During: PokeTAIR_e_AGS2_CalibrationSts/PokeTAIR_e_AGS2_CalibrationStsChrt */
    /* Entry Internal: PokeTAIR_e_AGS2_CalibrationSts/PokeTAIR_e_AGS2_CalibrationStsChrt */
    /* Transition: '<S353>:2' */
    Rte_IrvWrite_PokeTAIR_e_AGS2_CalibrationSts_VeTAIR_e_AGS2_CalibrationSts_write_IRV
        (LeTAIR_e_AGS2_CalibrationSts);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_AGS2_CalibrationSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_e_AGS2_CurrPos_LIN(VAR(TeFSCR_e_AGS_PosRq,
    AUTOMATIC) LeTAIR_e_AGS2_CurrPos, VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS2_CurrPosFA)
{

#if Rte_SysCon_Variant_TAIR_5

    boolean rtb_LeTAIR_b_AGS2_CurrPosFA_out;

#endif

#if Rte_SysCon_Variant_TAIR_5

    TeFSCR_e_AGS_PosRq rtb_LeTAIR_e_AGS2_CurrPos_out;

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_e_AGS2_CurrPos);

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_CurrPosFA);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_AGS2_CurrPos_LIN' */
    /* Chart: '<S146>/PokeTAIR_e_AGS2_CurrPos_LINChrt' incorporates:
     *  SignalConversion generated from: '<S146>/LeTAIR_b_AGS2_CurrPosFA'
     *  SignalConversion generated from: '<S146>/LeTAIR_e_AGS2_CurrPos'
     */
    /* Gateway: PokeTAIR_e_AGS2_CurrPos_LIN/PokeTAIR_e_AGS2_CurrPos_LINChrt */
    /* During: PokeTAIR_e_AGS2_CurrPos_LIN/PokeTAIR_e_AGS2_CurrPos_LINChrt */
    /* Entry Internal: PokeTAIR_e_AGS2_CurrPos_LIN/PokeTAIR_e_AGS2_CurrPos_LINChrt */
    /* Transition: '<S354>:2' */
    if (!LeTAIR_b_AGS2_CurrPosFA)
    {
        /* Transition: '<S354>:3' */
        /* Transition: '<S354>:15' */
        TAIR_ac_B.LeTAIR_Pct_AGS2_CurrPos_out = KaTAIR_Pct_AGS2_CurrPos
            [(LeTAIR_e_AGS2_CurrPos)];
        rtb_LeTAIR_e_AGS2_CurrPos_out = KaTAIR_e_AGS2_CurrPos
            [(LeTAIR_e_AGS2_CurrPos)];
        rtb_LeTAIR_b_AGS2_CurrPosFA_out = false;

        /* Transition: '<S354>:18' */
    }
    else
    {
        /* Transition: '<S354>:4' */
        rtb_LeTAIR_b_AGS2_CurrPosFA_out = true;
        rtb_LeTAIR_e_AGS2_CurrPos_out = CeFSCR_e_SNA;
    }

    /* End of Chart: '<S146>/PokeTAIR_e_AGS2_CurrPos_LINChrt' */

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S146>/VeTAIR_Pct_AGS2_CurrPos_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS2_CurrPos_LIN_VeTAIR_Pct_AGS2_CurrPos_CAN_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_AGS2_CurrPos_out);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S146>/VeTAIR_b_AGS2_CurrPosFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS2_CurrPos_LIN_VeTAIR_b_AGS2_CurrPosFA_write_IRV
        (rtb_LeTAIR_b_AGS2_CurrPosFA_out);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S146>/VeTAIR_e_AGS2_CurrPos_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS2_CurrPos_LIN_VeTAIR_e_AGS2_CurrPos_write_IRV
        (rtb_LeTAIR_e_AGS2_CurrPos_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_AGS2_CurrPos_LIN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_e_AGS2_ErrFdb(VAR(TeTAIR_e_AGS_ErrLIN, AUTOMATIC)
    LeTAIR_e_AGS2_ErrFdb, VAR(boolean, AUTOMATIC) LeTAIR_b_AGS2_ErrFdbFA)
{

#if Rte_SysCon_Variant_TAIR_5

    boolean rtb_LeTAIR_b_AGS2_ErrFdbFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_e_AGS2_ErrFdb);

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS2_ErrFdbFA);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_AGS2_ErrFdb' */
    /* Chart: '<S147>/PokeTAIR_e_AGS2_ErrFdbChrt' incorporates:
     *  SignalConversion generated from: '<S147>/LeTAIR_b_AGS2_ErrFdbFA'
     *  SignalConversion generated from: '<S147>/LeTAIR_e_AGS2_ErrFdb'
     */
    /* Gateway: PokeTAIR_e_AGS2_ErrFdb/PokeTAIR_e_AGS2_ErrFdbChrt */
    /* During: PokeTAIR_e_AGS2_ErrFdb/PokeTAIR_e_AGS2_ErrFdbChrt */
    /* Entry Internal: PokeTAIR_e_AGS2_ErrFdb/PokeTAIR_e_AGS2_ErrFdbChrt */
    /* Transition: '<S355>:2' */
    if (!LeTAIR_b_AGS2_ErrFdbFA)
    {
        /* Transition: '<S355>:3' */
        /* Transition: '<S355>:15' */
        TAIR_ac_B.LeTAIR_e_AGS2_ErrFdb_out = LeTAIR_e_AGS2_ErrFdb;
        rtb_LeTAIR_b_AGS2_ErrFdbFA_out = false;

        /* Transition: '<S355>:18' */
    }
    else
    {
        /* Transition: '<S355>:4' */
        rtb_LeTAIR_b_AGS2_ErrFdbFA_out = true;
    }

    /* End of Chart: '<S147>/PokeTAIR_e_AGS2_ErrFdbChrt' */

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S147>/VeTAIR_b_AGS2_ErrFdbFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS2_ErrFdb_VeTAIR_b_AGS2_ErrFdbFA_write_IRV
        (rtb_LeTAIR_b_AGS2_ErrFdbFA_out);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S147>/VeTAIR_e_AGS2_ErrFdb_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS2_ErrFdb_VeTAIR_e_AGS2_ErrFdb_write_IRV
        (TAIR_ac_B.LeTAIR_e_AGS2_ErrFdb_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_AGS2_ErrFdb' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_e_AGS_CalibrationSts(VAR
    (TeTAIR_e_AGS_Calibration_Sts, AUTOMATIC) LeTAIR_e_AGS_CalibrationSts)
{

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_e_AGS_CalibrationSts);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_AGS_CalibrationSts' */
    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S148>/LeTAIR_e_AGS_CalibrationSts'
     *  SignalConversion generated from: '<S148>/VeTAIR_e_AGS_CalibrationSts_write'
     */
    /* Gateway: PokeTAIR_e_AGS_CalibrationSts/PokeTAIR_e_AGS_CalibrationStsChrt */
    /* During: PokeTAIR_e_AGS_CalibrationSts/PokeTAIR_e_AGS_CalibrationStsChrt */
    /* Entry Internal: PokeTAIR_e_AGS_CalibrationSts/PokeTAIR_e_AGS_CalibrationStsChrt */
    /* Transition: '<S356>:2' */
    Rte_IrvWrite_PokeTAIR_e_AGS_CalibrationSts_VeTAIR_e_AGS_CalibrationSts_write_IRV
        (LeTAIR_e_AGS_CalibrationSts);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_AGS_CalibrationSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_e_AGS_CurrPos_LIN(VAR(TeFSCR_e_AGS_PosRq,
    AUTOMATIC) LeTAIR_e_AGS_CurrPos, VAR(boolean, AUTOMATIC)
    LeTAIR_b_AGS_CurrPosFA)
{

#if Rte_SysCon_Variant_TAIR_5

    boolean rtb_LeTAIR_b_AGS_CurrPosFA_out;

#endif

#if Rte_SysCon_Variant_TAIR_5

    TeFSCR_e_AGS_PosRq rtb_LeTAIR_e_AGS_CurrPos_out;

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_e_AGS_CurrPos);

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_CurrPosFA);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_AGS_CurrPos_LIN' */
    /* Chart: '<S149>/PokeTAIR_e_AGS_CurrPos_LINChrt' incorporates:
     *  SignalConversion generated from: '<S149>/LeTAIR_b_AGS_CurrPosFA'
     *  SignalConversion generated from: '<S149>/LeTAIR_e_AGS_CurrPos'
     */
    /* Gateway: PokeTAIR_e_AGS_CurrPos_LIN/PokeTAIR_e_AGS_CurrPos_LINChrt */
    /* During: PokeTAIR_e_AGS_CurrPos_LIN/PokeTAIR_e_AGS_CurrPos_LINChrt */
    /* Entry Internal: PokeTAIR_e_AGS_CurrPos_LIN/PokeTAIR_e_AGS_CurrPos_LINChrt */
    /* Transition: '<S357>:2' */
    if (!LeTAIR_b_AGS_CurrPosFA)
    {
        /* Transition: '<S357>:3' */
        /* Transition: '<S357>:15' */
        TAIR_ac_B.LeTAIR_Pct_AGS_CurrPos_out = KaTAIR_Pct_AGS_CurrPos
            [(LeTAIR_e_AGS_CurrPos)];
        rtb_LeTAIR_e_AGS_CurrPos_out = KaTAIR_e_AGS_CurrPos
            [(LeTAIR_e_AGS_CurrPos)];
        rtb_LeTAIR_b_AGS_CurrPosFA_out = false;

        /* Transition: '<S357>:18' */
    }
    else
    {
        /* Transition: '<S357>:4' */
        rtb_LeTAIR_b_AGS_CurrPosFA_out = true;
        rtb_LeTAIR_e_AGS_CurrPos_out = CeFSCR_e_SNA;
    }

    /* End of Chart: '<S149>/PokeTAIR_e_AGS_CurrPos_LINChrt' */

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S149>/VeTAIR_Pct_AGS_CurrPos_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS_CurrPos_LIN_VeTAIR_Pct_AGS_CurrPos_CAN_write_IRV
        (TAIR_ac_B.LeTAIR_Pct_AGS_CurrPos_out);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S149>/VeTAIR_b_AGS_CurrPosFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS_CurrPos_LIN_VeTAIR_b_AGS_CurrPosFA_write_IRV
        (rtb_LeTAIR_b_AGS_CurrPosFA_out);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S149>/VeTAIR_e_AGS_CurrPos_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS_CurrPos_LIN_VeTAIR_e_AGS_CurrPos_write_IRV
        (rtb_LeTAIR_e_AGS_CurrPos_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_AGS_CurrPos_LIN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_5

FUNC(void, TAIR_CODE) PokeTAIR_e_AGS_ErrFdb(VAR(TeTAIR_e_AGS_ErrLIN, AUTOMATIC)
    LeTAIR_e_AGS_ErrFdb, VAR(boolean, AUTOMATIC) LeTAIR_b_AGS_ErrFdbFA)
{

#if Rte_SysCon_Variant_TAIR_5

    boolean rtb_LeTAIR_b_AGS_ErrFdbFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_e_AGS_ErrFdb);

#endif

#if !Rte_SysCon_Variant_TAIR_5

    UNUSED_PARAMETER(LeTAIR_b_AGS_ErrFdbFA);

#endif

#if Rte_SysCon_Variant_TAIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_AGS_ErrFdb' */
    /* Chart: '<S150>/PokeTAIR_e_AGS_ErrFdbChrt' incorporates:
     *  SignalConversion generated from: '<S150>/LeTAIR_b_AGS_ErrFdbFA'
     *  SignalConversion generated from: '<S150>/LeTAIR_e_AGS_ErrFdb'
     */
    /* Gateway: PokeTAIR_e_AGS_ErrFdb/PokeTAIR_e_AGS_ErrFdbChrt */
    /* During: PokeTAIR_e_AGS_ErrFdb/PokeTAIR_e_AGS_ErrFdbChrt */
    /* Entry Internal: PokeTAIR_e_AGS_ErrFdb/PokeTAIR_e_AGS_ErrFdbChrt */
    /* Transition: '<S358>:2' */
    if (!LeTAIR_b_AGS_ErrFdbFA)
    {
        /* Transition: '<S358>:3' */
        /* Transition: '<S358>:15' */
        TAIR_ac_B.LeTAIR_e_AGS_ErrFdb_out = LeTAIR_e_AGS_ErrFdb;
        rtb_LeTAIR_b_AGS_ErrFdbFA_out = false;

        /* Transition: '<S358>:18' */
    }
    else
    {
        /* Transition: '<S358>:4' */
        rtb_LeTAIR_b_AGS_ErrFdbFA_out = true;
    }

    /* End of Chart: '<S150>/PokeTAIR_e_AGS_ErrFdbChrt' */

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S150>/VeTAIR_b_AGS_ErrFdbFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS_ErrFdb_VeTAIR_b_AGS_ErrFdbFA_write_IRV
        (rtb_LeTAIR_b_AGS_ErrFdbFA_out);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S150>/VeTAIR_e_AGS_ErrFdb_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_AGS_ErrFdb_VeTAIR_e_AGS_ErrFdb_write_IRV
        (TAIR_ac_B.LeTAIR_e_AGS_ErrFdb_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_AGS_ErrFdb' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) PokeTAIR_e_CPV2_CalSts(VAR(TeTAIR_e_CPV_Calibration_Sts,
    AUTOMATIC) LeTAIR_e_CPV2_CalSts, VAR(boolean, AUTOMATIC)
    LeTAIR_b_CPV2_CalStsFA)
{

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_e_CPV2_CalSts);

#endif

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_b_CPV2_CalStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_CPV2_CalSts' */
    /* Chart: '<S151>/PokeTAIR_e_CPV2_CalStsChrt' incorporates:
     *  SignalConversion generated from: '<S151>/LeTAIR_b_CPV2_CalStsFA'
     *  SignalConversion generated from: '<S151>/LeTAIR_e_CPV2_CalSts'
     */
    /* Gateway: PokeTAIR_e_CPV2_CalSts/PokeTAIR_e_CPV2_CalStsChrt */
    /* During: PokeTAIR_e_CPV2_CalSts/PokeTAIR_e_CPV2_CalStsChrt */
    /* Entry Internal: PokeTAIR_e_CPV2_CalSts/PokeTAIR_e_CPV2_CalStsChrt */
    /* Transition: '<S359>:2' */
    if (!LeTAIR_b_CPV2_CalStsFA)
    {
        /* Transition: '<S359>:3' */
        /* Transition: '<S359>:15' */
        TAIR_ac_B.LeTAIR_e_CPV2_CalSts_out = LeTAIR_e_CPV2_CalSts;

        /* Transition: '<S359>:18' */
    }
    else
    {
        /* Transition: '<S359>:4' */
    }

    /* End of Chart: '<S151>/PokeTAIR_e_CPV2_CalStsChrt' */

    /* Merge: '<Root>/Merge_153' incorporates:
     *  SignalConversion generated from: '<S151>/VeTAIR_e_CPV2_CalSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_CPV2_CalSts_VeTAIR_e_CPV2_CalSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_CPV2_CalSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_CPV2_CalSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) PokeTAIR_e_CPV2_ErrSts(VAR(TeTAIR_e_CPV_Status, AUTOMATIC)
    LeTAIR_e_CPV2_ErrSts, VAR(boolean, AUTOMATIC) LeTAIR_b_CPV2_ErrStsFA)
{

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_e_CPV2_ErrSts);

#endif

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_b_CPV2_ErrStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_CPV2_ErrSts' */
    /* Chart: '<S152>/PokeTAIR_e_CPV2_ErrStsChrt' incorporates:
     *  SignalConversion generated from: '<S152>/LeTAIR_b_CPV2_ErrStsFA'
     *  SignalConversion generated from: '<S152>/LeTAIR_e_CPV2_ErrSts'
     */
    /* Gateway: PokeTAIR_e_CPV2_ErrSts/PokeTAIR_e_CPV2_ErrStsChrt */
    /* During: PokeTAIR_e_CPV2_ErrSts/PokeTAIR_e_CPV2_ErrStsChrt */
    /* Entry Internal: PokeTAIR_e_CPV2_ErrSts/PokeTAIR_e_CPV2_ErrStsChrt */
    /* Transition: '<S360>:2' */
    if (!LeTAIR_b_CPV2_ErrStsFA)
    {
        /* Transition: '<S360>:3' */
        /* Transition: '<S360>:15' */
        TAIR_ac_B.LeTAIR_e_CPV2_ErrSts_out = LeTAIR_e_CPV2_ErrSts;

        /* Transition: '<S360>:18' */
    }
    else
    {
        /* Transition: '<S360>:4' */
    }

    /* End of Chart: '<S152>/PokeTAIR_e_CPV2_ErrStsChrt' */

    /* Merge: '<Root>/Merge_151' incorporates:
     *  SignalConversion generated from: '<S152>/VeTAIR_e_CPV2_ErrSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_CPV2_ErrSts_VeTAIR_e_CPV2_ErrSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_CPV2_ErrSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_CPV2_ErrSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_e_CompFltStat(VAR(TeTAIR_e_CompFltSts, AUTOMATIC)
    LeTAIR_e_CompFltStat, VAR(boolean, AUTOMATIC) LeTAIR_b_CompFltStatFA)
{

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_e_CompFltStat);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_CompFltStatFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_CompFltStat' */
    /* Chart: '<S153>/PokeTAIR_e_CompFltStatChrt' incorporates:
     *  Constant: '<S361>/Calib'
     *  SignalConversion generated from: '<S153>/LeTAIR_b_CompFltStatFA'
     *  SignalConversion generated from: '<S153>/LeTAIR_e_CompFltStat'
     */
    /* Gateway: PokeTAIR_e_CompFltStat/PokeTAIR_e_CompFltStatChrt */
    /* During: PokeTAIR_e_CompFltStat/PokeTAIR_e_CompFltStatChrt */
    /* Entry Internal: PokeTAIR_e_CompFltStat/PokeTAIR_e_CompFltStatChrt */
    /* Transition: '<S362>:2' */
    if (!LeTAIR_b_CompFltStatFA)
    {
        /* Transition: '<S362>:3' */
        /* Transition: '<S362>:15' */
        TAIR_ac_B.LeTAIR_e_CompFltStat_out = KaTAIR_e_CompFltStat_Map
            [(LeTAIR_e_CompFltStat)];

        /* Transition: '<S362>:18' */
    }
    else
    {
        /* Transition: '<S362>:4' */
    }

    /* End of Chart: '<S153>/PokeTAIR_e_CompFltStatChrt' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S153>/VeTAIR_e_CompFltStat_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_CompFltStat_VeTAIR_e_CompFltStat_write_IRV
        (TAIR_ac_B.LeTAIR_e_CompFltStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_CompFltStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_e_CompStat(VAR(TeTAIR_e_CompStat, AUTOMATIC)
    LeTAIR_e_CompStat, VAR(boolean, AUTOMATIC) LeTAIR_b_CompStatFA)
{

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_e_CompStat);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_CompStatFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_CompStat' */
    /* Chart: '<S154>/PokeTAIR_e_CompStatChrt' incorporates:
     *  Constant: '<S363>/Calib'
     *  SignalConversion generated from: '<S154>/LeTAIR_b_CompStatFA'
     *  SignalConversion generated from: '<S154>/LeTAIR_e_CompStat'
     */
    /* Gateway: PokeTAIR_e_CompStat/PokeTAIR_e_CompStatChrt */
    /* During: PokeTAIR_e_CompStat/PokeTAIR_e_CompStatChrt */
    /* Entry Internal: PokeTAIR_e_CompStat/PokeTAIR_e_CompStatChrt */
    /* Transition: '<S364>:2' */
    if (!LeTAIR_b_CompStatFA)
    {
        /* Transition: '<S364>:3' */
        /* Transition: '<S364>:15' */
        TAIR_ac_B.LeTAIR_e_CompStat_out = KaTAIR_e_CompStat_Map
            [(LeTAIR_e_CompStat)];

        /* Transition: '<S364>:18' */
    }
    else
    {
        /* Transition: '<S364>:4' */
    }

    /* End of Chart: '<S154>/PokeTAIR_e_CompStatChrt' */

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S154>/VeTAIR_e_CompStat_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_CompStat_VeTAIR_e_CompStat_write_IRV
        (TAIR_ac_B.LeTAIR_e_CompStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_CompStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_4

FUNC(void, TAIR_CODE) PokeTAIR_e_ECM_AC_ClutchSts(VAR(TeTAIR_e_ECM_AC_ClutchSts,
    AUTOMATIC) LeTAIR_e_ECM_AC_ClutchSts, VAR(boolean, AUTOMATIC)
    LeTAIR_b_ECM_AC_ClutchStsFA)
{

#if Rte_SysCon_Variant_TAIR_4

    boolean rtb_LeTAIR_b_ECM_AC_ClutchSts_f;

#endif

#if !Rte_SysCon_Variant_TAIR_4

    UNUSED_PARAMETER(LeTAIR_e_ECM_AC_ClutchSts);

#endif

#if !Rte_SysCon_Variant_TAIR_4

    UNUSED_PARAMETER(LeTAIR_b_ECM_AC_ClutchStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_ECM_AC_ClutchSts' */
    /* Chart: '<S155>/PokeTAIR_e_ECM_AC_ClutchStsChrt' incorporates:
     *  Constant: '<S365>/Calib'
     *  SignalConversion generated from: '<S155>/LeTAIR_b_ECM_AC_ClutchStsFA'
     *  SignalConversion generated from: '<S155>/LeTAIR_e_ECM_AC_ClutchSts'
     */
    /* Gateway: PokeTAIR_e_ECM_AC_ClutchSts/PokeTAIR_e_ECM_AC_ClutchStsChrt */
    /* During: PokeTAIR_e_ECM_AC_ClutchSts/PokeTAIR_e_ECM_AC_ClutchStsChrt */
    /* Entry Internal: PokeTAIR_e_ECM_AC_ClutchSts/PokeTAIR_e_ECM_AC_ClutchStsChrt */
    /* Transition: '<S366>:2' */
    if (!LeTAIR_b_ECM_AC_ClutchStsFA)
    {
        /* Transition: '<S366>:3' */
        /* Transition: '<S366>:15' */
        TAIR_ac_B.LeTAIR_e_ECM_AC_ClutchSts_out = KaTAIR_e_ECM_AC_ClutchSts_Map
            [(LeTAIR_e_ECM_AC_ClutchSts)];
        rtb_LeTAIR_b_ECM_AC_ClutchSts_f = false;

        /* Transition: '<S366>:18' */
    }
    else
    {
        /* Transition: '<S366>:4' */
        rtb_LeTAIR_b_ECM_AC_ClutchSts_f = true;
    }

    /* End of Chart: '<S155>/PokeTAIR_e_ECM_AC_ClutchStsChrt' */

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S155>/VeTAIR_b_ECM_AC_ClutchStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_ECM_AC_ClutchSts_VeTAIR_b_ECM_AC_ClutchStsFA_write_IRV
        (rtb_LeTAIR_b_ECM_AC_ClutchSts_f);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S155>/VeTAIR_e_ECM_AC_ClutchSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_ECM_AC_ClutchSts_VeTAIR_e_ECM_AC_ClutchSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_ECM_AC_ClutchSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_ECM_AC_ClutchSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_e_EEXV_CalStat(VAR(TeTAIR_e_EXV_Calibration_Sts,
    AUTOMATIC) LeTAIR_e_EEXV_CalStat, VAR(boolean, AUTOMATIC)
    LeTAIR_b_EEXV_CalStatFA)
{

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_e_EEXV_CalStat);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_CalStatFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_EEXV_CalStat' */
    /* Chart: '<S156>/PokeTAIR_e_EEXV_CalStatChrt' incorporates:
     *  SignalConversion generated from: '<S156>/LeTAIR_b_EEXV_CalStatFA'
     *  SignalConversion generated from: '<S156>/LeTAIR_e_EEXV_CalStat'
     */
    /* Gateway: PokeTAIR_e_EEXV_CalStat/PokeTAIR_e_EEXV_CalStatChrt */
    /* During: PokeTAIR_e_EEXV_CalStat/PokeTAIR_e_EEXV_CalStatChrt */
    /* Entry Internal: PokeTAIR_e_EEXV_CalStat/PokeTAIR_e_EEXV_CalStatChrt */
    /* Transition: '<S367>:2' */
    if (!LeTAIR_b_EEXV_CalStatFA)
    {
        /* Transition: '<S367>:3' */
        /* Transition: '<S367>:15' */
        TAIR_ac_B.LeTAIR_e_EEXV_CalStat_out = LeTAIR_e_EEXV_CalStat;

        /* Transition: '<S367>:18' */
    }
    else
    {
        /* Transition: '<S367>:4' */
    }

    /* End of Chart: '<S156>/PokeTAIR_e_EEXV_CalStatChrt' */

    /* Merge: '<Root>/Merge_142' incorporates:
     *  SignalConversion generated from: '<S156>/VeTAIR_e_EEXV_CalStat_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_EEXV_CalStat_VeTAIR_e_EEXV_CalStat_write_IRV
        (TAIR_ac_B.LeTAIR_e_EEXV_CalStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_EEXV_CalStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_e_EEXV_Err(VAR(TeTAIR_e_EXV_ErrorMsg, AUTOMATIC)
    LeTAIR_e_EEXV_Err, VAR(boolean, AUTOMATIC) LeTAIR_b_EEXV_ErrFA)
{

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_e_EEXV_Err);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_ErrFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_EEXV_Err' */
    /* Chart: '<S157>/PokeTAIR_e_EEXV_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S157>/LeTAIR_b_EEXV_ErrFA'
     *  SignalConversion generated from: '<S157>/LeTAIR_e_EEXV_Err'
     */
    /* Gateway: PokeTAIR_e_EEXV_Err/PokeTAIR_e_EEXV_ErrChrt */
    /* During: PokeTAIR_e_EEXV_Err/PokeTAIR_e_EEXV_ErrChrt */
    /* Entry Internal: PokeTAIR_e_EEXV_Err/PokeTAIR_e_EEXV_ErrChrt */
    /* Transition: '<S368>:2' */
    if (!LeTAIR_b_EEXV_ErrFA)
    {
        /* Transition: '<S368>:3' */
        /* Transition: '<S368>:15' */
        TAIR_ac_B.LeTAIR_e_EEXV_Err_out = LeTAIR_e_EEXV_Err;

        /* Transition: '<S368>:18' */
    }
    else
    {
        /* Transition: '<S368>:4' */
    }

    /* End of Chart: '<S157>/PokeTAIR_e_EEXV_ErrChrt' */

    /* Merge: '<Root>/Merge_133' incorporates:
     *  SignalConversion generated from: '<S157>/VeTAIR_e_EEXV_Err_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_EEXV_Err_VeTAIR_e_EEXV_Err_write_IRV
        (TAIR_ac_B.LeTAIR_e_EEXV_Err_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_EEXV_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_e_EEXV_Sts(VAR(TeTAIR_e_EXV_Status, AUTOMATIC)
    LeTAIR_e_EEXV_Sts, VAR(boolean, AUTOMATIC) LeTAIR_b_EEXV_StsFA)
{

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_e_EEXV_Sts);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_StsFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_EEXV_Sts' */
    /* Chart: '<S158>/PokeTAIR_e_EEXV_StsChrt' incorporates:
     *  SignalConversion generated from: '<S158>/LeTAIR_b_EEXV_StsFA'
     *  SignalConversion generated from: '<S158>/LeTAIR_e_EEXV_Sts'
     */
    /* Gateway: PokeTAIR_e_EEXV_Sts/PokeTAIR_e_EEXV_StsChrt */
    /* During: PokeTAIR_e_EEXV_Sts/PokeTAIR_e_EEXV_StsChrt */
    /* Entry Internal: PokeTAIR_e_EEXV_Sts/PokeTAIR_e_EEXV_StsChrt */
    /* Transition: '<S369>:2' */
    if (!LeTAIR_b_EEXV_StsFA)
    {
        /* Transition: '<S369>:3' */
        /* Transition: '<S369>:15' */
        TAIR_ac_B.LeTAIR_e_EEXV_Sts_out = LeTAIR_e_EEXV_Sts;

        /* Transition: '<S369>:18' */
    }
    else
    {
        /* Transition: '<S369>:4' */
    }

    /* End of Chart: '<S158>/PokeTAIR_e_EEXV_StsChrt' */

    /* Merge: '<Root>/Merge_145' incorporates:
     *  SignalConversion generated from: '<S158>/VeTAIR_e_EEXV_Sts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_EEXV_Sts_VeTAIR_e_EEXV_Sts_write_IRV
        (TAIR_ac_B.LeTAIR_e_EEXV_Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_EEXV_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_e_EXV_CalStat(VAR(TeTAIR_e_EXV_Calibration_Sts,
    AUTOMATIC) LeTAIR_e_EXV_CalStat, VAR(boolean, AUTOMATIC)
    LeTAIR_b_EXV_CalStatFA)
{

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_e_EXV_CalStat);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_CalStatFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_EXV_CalStat' */
    /* Chart: '<S159>/PokeTAIR_e_EXV_CalStatChrt' incorporates:
     *  SignalConversion generated from: '<S159>/LeTAIR_b_EXV_CalStatFA'
     *  SignalConversion generated from: '<S159>/LeTAIR_e_EXV_CalStat'
     */
    /* Gateway: PokeTAIR_e_EXV_CalStat/PokeTAIR_e_EXV_CalStatChrt */
    /* During: PokeTAIR_e_EXV_CalStat/PokeTAIR_e_EXV_CalStatChrt */
    /* Entry Internal: PokeTAIR_e_EXV_CalStat/PokeTAIR_e_EXV_CalStatChrt */
    /* Transition: '<S370>:2' */
    if (!LeTAIR_b_EXV_CalStatFA)
    {
        /* Transition: '<S370>:3' */
        /* Transition: '<S370>:15' */
        TAIR_ac_B.LeTAIR_e_EXV_CalStat_out = LeTAIR_e_EXV_CalStat;

        /* Transition: '<S370>:18' */
    }
    else
    {
        /* Transition: '<S370>:4' */
    }

    /* End of Chart: '<S159>/PokeTAIR_e_EXV_CalStatChrt' */

    /* Merge: '<Root>/Merge_187' incorporates:
     *  SignalConversion generated from: '<S159>/VeTAIR_e_EXV_CalStat_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_EXV_CalStat_VeTAIR_e_EXV_CalStat_write_IRV
        (TAIR_ac_B.LeTAIR_e_EXV_CalStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_EXV_CalStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_e_EXV_Err(VAR(TeTAIR_e_EXV_ErrorMsg, AUTOMATIC)
    LeTAIR_e_EXV_Err, VAR(boolean, AUTOMATIC) LeTAIR_b_EXV_ErrFA)
{

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_e_EXV_Err);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_ErrFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_EXV_Err' */
    /* Chart: '<S160>/PokeTAIR_e_EXV_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S160>/LeTAIR_b_EXV_ErrFA'
     *  SignalConversion generated from: '<S160>/LeTAIR_e_EXV_Err'
     */
    /* Gateway: PokeTAIR_e_EXV_Err/PokeTAIR_e_EXV_ErrChrt */
    /* During: PokeTAIR_e_EXV_Err/PokeTAIR_e_EXV_ErrChrt */
    /* Entry Internal: PokeTAIR_e_EXV_Err/PokeTAIR_e_EXV_ErrChrt */
    /* Transition: '<S371>:2' */
    if (!LeTAIR_b_EXV_ErrFA)
    {
        /* Transition: '<S371>:3' */
        /* Transition: '<S371>:15' */
        TAIR_ac_B.LeTAIR_e_EXV_Err_out = LeTAIR_e_EXV_Err;

        /* Transition: '<S371>:18' */
    }
    else
    {
        /* Transition: '<S371>:4' */
    }

    /* End of Chart: '<S160>/PokeTAIR_e_EXV_ErrChrt' */

    /* Merge: '<Root>/Merge_177' incorporates:
     *  SignalConversion generated from: '<S160>/VeTAIR_e_EXV_Err_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_EXV_Err_VeTAIR_e_EXV_Err_write_IRV
        (TAIR_ac_B.LeTAIR_e_EXV_Err_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_EXV_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_e_EXV_Sts(VAR(TeTAIR_e_EXV_Status, AUTOMATIC)
    LeTAIR_e_EXV_Sts, VAR(boolean, AUTOMATIC) LeTAIR_b_EXV_StsFA)
{

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_e_EXV_Sts);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_StsFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_EXV_Sts' */
    /* Chart: '<S161>/PokeTAIR_e_EXV_StsChrt' incorporates:
     *  SignalConversion generated from: '<S161>/LeTAIR_b_EXV_StsFA'
     *  SignalConversion generated from: '<S161>/LeTAIR_e_EXV_Sts'
     */
    /* Gateway: PokeTAIR_e_EXV_Sts/PokeTAIR_e_EXV_StsChrt */
    /* During: PokeTAIR_e_EXV_Sts/PokeTAIR_e_EXV_StsChrt */
    /* Entry Internal: PokeTAIR_e_EXV_Sts/PokeTAIR_e_EXV_StsChrt */
    /* Transition: '<S372>:2' */
    if (!LeTAIR_b_EXV_StsFA)
    {
        /* Transition: '<S372>:3' */
        /* Transition: '<S372>:15' */
        TAIR_ac_B.LeTAIR_e_EXV_Sts_out = LeTAIR_e_EXV_Sts;

        /* Transition: '<S372>:18' */
    }
    else
    {
        /* Transition: '<S372>:4' */
    }

    /* End of Chart: '<S161>/PokeTAIR_e_EXV_StsChrt' */

    /* Merge: '<Root>/Merge_191' incorporates:
     *  SignalConversion generated from: '<S161>/VeTAIR_e_EXV_Sts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_EXV_Sts_VeTAIR_e_EXV_Sts_write_IRV
        (TAIR_ac_B.LeTAIR_e_EXV_Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_EXV_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) PokeTAIR_e_FrWyVlv_CalSts(VAR(TeTAIR_e_CPV_Calibration_Sts,
    AUTOMATIC) LeTAIR_e_FrWyVlv_CalSts, VAR(boolean, AUTOMATIC)
    LeTAIR_b_FrWyVlv_CalStsFA)
{

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_e_FrWyVlv_CalSts);

#endif

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_b_FrWyVlv_CalStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_FrWyVlv_CalSts' */
    /* Chart: '<S162>/PokeTAIR_e_FrWyVlv_CalStsChrt' incorporates:
     *  SignalConversion generated from: '<S162>/LeTAIR_b_FrWyVlv_CalStsFA'
     *  SignalConversion generated from: '<S162>/LeTAIR_e_FrWyVlv_CalSts'
     */
    /* Gateway: PokeTAIR_e_FrWyVlv_CalSts/PokeTAIR_e_FrWyVlv_CalStsChrt */
    /* During: PokeTAIR_e_FrWyVlv_CalSts/PokeTAIR_e_FrWyVlv_CalStsChrt */
    /* Entry Internal: PokeTAIR_e_FrWyVlv_CalSts/PokeTAIR_e_FrWyVlv_CalStsChrt */
    /* Transition: '<S373>:2' */
    if (!LeTAIR_b_FrWyVlv_CalStsFA)
    {
        /* Transition: '<S373>:3' */
        /* Transition: '<S373>:15' */
        TAIR_ac_B.LeTAIR_e_FrWyVlv_CalSts_out = LeTAIR_e_FrWyVlv_CalSts;

        /* Transition: '<S373>:18' */
    }
    else
    {
        /* Transition: '<S373>:4' */
    }

    /* End of Chart: '<S162>/PokeTAIR_e_FrWyVlv_CalStsChrt' */

    /* Merge: '<Root>/Merge_196' incorporates:
     *  SignalConversion generated from: '<S162>/VeTAIR_e_FrWyVlv_CalSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_FrWyVlv_CalSts_VeTAIR_e_FrWyVlv_CalSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_FrWyVlv_CalSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_FrWyVlv_CalSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) PokeTAIR_e_FrWyVlv_ErrSts(VAR(TeTAIR_e_CPV_Status,
    AUTOMATIC) LeTAIR_e_FrWyVlv_ErrSts, VAR(boolean, AUTOMATIC)
    LeTAIR_b_FrWyVlv_ErrStsFA)
{

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_e_FrWyVlv_ErrSts);

#endif

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_b_FrWyVlv_ErrStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_FrWyVlv_ErrSts' */
    /* Chart: '<S163>/PokeTAIR_e_FrWyVlv_ErrStsChrt' incorporates:
     *  SignalConversion generated from: '<S163>/LeTAIR_b_FrWyVlv_ErrStsFA'
     *  SignalConversion generated from: '<S163>/LeTAIR_e_FrWyVlv_ErrSts'
     */
    /* Gateway: PokeTAIR_e_FrWyVlv_ErrSts/PokeTAIR_e_FrWyVlv_ErrStsChrt */
    /* During: PokeTAIR_e_FrWyVlv_ErrSts/PokeTAIR_e_FrWyVlv_ErrStsChrt */
    /* Entry Internal: PokeTAIR_e_FrWyVlv_ErrSts/PokeTAIR_e_FrWyVlv_ErrStsChrt */
    /* Transition: '<S374>:2' */
    if (!LeTAIR_b_FrWyVlv_ErrStsFA)
    {
        /* Transition: '<S374>:3' */
        /* Transition: '<S374>:15' */
        TAIR_ac_B.LeTAIR_e_FrWyVlv_ErrSts_out = LeTAIR_e_FrWyVlv_ErrSts;

        /* Transition: '<S374>:18' */
    }
    else
    {
        /* Transition: '<S374>:4' */
    }

    /* End of Chart: '<S163>/PokeTAIR_e_FrWyVlv_ErrStsChrt' */

    /* Merge: '<Root>/Merge_197' incorporates:
     *  SignalConversion generated from: '<S163>/VeTAIR_e_FrWyVlv_ErrSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_FrWyVlv_ErrSts_VeTAIR_e_FrWyVlv_ErrSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_FrWyVlv_ErrSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_FrWyVlv_ErrSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) PokeTAIR_e_HTL_BypsVlv_CalSts(VAR
    (TeTAIR_e_CPV_Calibration_Sts, AUTOMATIC) LeTAIR_e_HTL_BypsVlv_CalSts, VAR
    (boolean, AUTOMATIC) LeTAIR_b_HTL_BypsVlv_CalStsFA)
{

#if Rte_SysCon_Variant_TAIR_10

    boolean rtb_LeTAIR_b_HTL_BypsVlv_CalS_j;

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_e_HTL_BypsVlv_CalSts);

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_b_HTL_BypsVlv_CalStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTL_BypsVlv_CalSts' */
    /* Chart: '<S164>/PokeTAIR_e_HTL_BypsVlv_CalStsChrt' incorporates:
     *  SignalConversion generated from: '<S164>/LeTAIR_b_HTL_BypsVlv_CalStsFA'
     *  SignalConversion generated from: '<S164>/LeTAIR_e_HTL_BypsVlv_CalSts'
     */
    /* Gateway: PokeTAIR_e_HTL_BypsVlv_CalSts/PokeTAIR_e_HTL_BypsVlv_CalStsChrt */
    /* During: PokeTAIR_e_HTL_BypsVlv_CalSts/PokeTAIR_e_HTL_BypsVlv_CalStsChrt */
    /* Entry Internal: PokeTAIR_e_HTL_BypsVlv_CalSts/PokeTAIR_e_HTL_BypsVlv_CalStsChrt */
    /* Transition: '<S375>:2' */
    if (!LeTAIR_b_HTL_BypsVlv_CalStsFA)
    {
        /* Transition: '<S375>:3' */
        /* Transition: '<S375>:15' */
        TAIR_ac_B.LeTAIR_e_HTL_BypsVlv_CalSts_out = LeTAIR_e_HTL_BypsVlv_CalSts;
        rtb_LeTAIR_b_HTL_BypsVlv_CalS_j = false;

        /* Transition: '<S375>:18' */
    }
    else
    {
        /* Transition: '<S375>:4' */
        rtb_LeTAIR_b_HTL_BypsVlv_CalS_j = true;
    }

    /* End of Chart: '<S164>/PokeTAIR_e_HTL_BypsVlv_CalStsChrt' */

    /* Merge: '<Root>/Merge_97' incorporates:
     *  SignalConversion generated from: '<S164>/VeTAIR_b_HTL_BypsVlv_CalStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_HTL_BypsVlv_CalSts_VeTAIR_b_HTL_BypsVlv_CalStsFA_write_IRV
        (rtb_LeTAIR_b_HTL_BypsVlv_CalS_j);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  SignalConversion generated from: '<S164>/VeTAIR_e_HTL_BypsVlv_CalSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_HTL_BypsVlv_CalSts_VeTAIR_e_HTL_BypsVlv_CalSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_HTL_BypsVlv_CalSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTL_BypsVlv_CalSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) PokeTAIR_e_HTL_BypsVlv_ErrSts(VAR(TeTAIR_e_CPV_Status,
    AUTOMATIC) LeTAIR_e_HTL_BypsVlv_ErrSts, VAR(boolean, AUTOMATIC)
    LeTAIR_b_HTL_BypsVlv_ErrStsFA)
{

#if Rte_SysCon_Variant_TAIR_10

    boolean rtb_LeTAIR_b_HTL_BypsVlv_ErrS_f;

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_e_HTL_BypsVlv_ErrSts);

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_b_HTL_BypsVlv_ErrStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTL_BypsVlv_ErrSts' */
    /* Chart: '<S165>/PokeTAIR_e_HTL_BypsVlv_ErrStsChrt' incorporates:
     *  SignalConversion generated from: '<S165>/LeTAIR_b_HTL_BypsVlv_ErrStsFA'
     *  SignalConversion generated from: '<S165>/LeTAIR_e_HTL_BypsVlv_ErrSts'
     */
    /* Gateway: PokeTAIR_e_HTL_BypsVlv_ErrSts/PokeTAIR_e_HTL_BypsVlv_ErrStsChrt */
    /* During: PokeTAIR_e_HTL_BypsVlv_ErrSts/PokeTAIR_e_HTL_BypsVlv_ErrStsChrt */
    /* Entry Internal: PokeTAIR_e_HTL_BypsVlv_ErrSts/PokeTAIR_e_HTL_BypsVlv_ErrStsChrt */
    /* Transition: '<S376>:2' */
    if (!LeTAIR_b_HTL_BypsVlv_ErrStsFA)
    {
        /* Transition: '<S376>:3' */
        /* Transition: '<S376>:15' */
        TAIR_ac_B.LeTAIR_e_HTL_BypsVlv_ErrSts_out = LeTAIR_e_HTL_BypsVlv_ErrSts;
        rtb_LeTAIR_b_HTL_BypsVlv_ErrS_f = false;

        /* Transition: '<S376>:18' */
    }
    else
    {
        /* Transition: '<S376>:4' */
        rtb_LeTAIR_b_HTL_BypsVlv_ErrS_f = true;
    }

    /* End of Chart: '<S165>/PokeTAIR_e_HTL_BypsVlv_ErrStsChrt' */

    /* Merge: '<Root>/Merge_100' incorporates:
     *  SignalConversion generated from: '<S165>/VeTAIR_b_HTL_BypsVlv_ErrStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_HTL_BypsVlv_ErrSts_VeTAIR_b_HTL_BypsVlv_ErrStsFA_write_IRV
        (rtb_LeTAIR_b_HTL_BypsVlv_ErrS_f);

    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S165>/VeTAIR_e_HTL_BypsVlv_ErrSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_HTL_BypsVlv_ErrSts_VeTAIR_e_HTL_BypsVlv_ErrSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_HTL_BypsVlv_ErrSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTL_BypsVlv_ErrSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_e_HTRBV_ErrLinCom(VAR(TeTAIR_e_HTRBV_ErrLinCom,
    AUTOMATIC) LeTAIR_e_HTRBV_ErrLinCom)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_e_HTRBV_ErrLinCom);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTRBV_ErrLinCom' */
    /* Merge: '<Root>/Merge_207' incorporates:
     *  SignalConversion generated from: '<S166>/LeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S166>/VeTAIR_e_HTRBV_ErrLinCom_write'
     */
    /* Gateway: PokeTAIR_e_HTRBV_ErrLinCom/PokeTAIR_e_HTRBV_ErrLinComChrt */
    /* During: PokeTAIR_e_HTRBV_ErrLinCom/PokeTAIR_e_HTRBV_ErrLinComChrt */
    /* Entry Internal: PokeTAIR_e_HTRBV_ErrLinCom/PokeTAIR_e_HTRBV_ErrLinComChrt */
    /* Transition: '<S377>:34' */
    Rte_IrvWrite_PokeTAIR_e_HTRBV_ErrLinCom_VeTAIR_e_HTRBV_ErrLinCom_write_IRV
        (LeTAIR_e_HTRBV_ErrLinCom);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTRBV_ErrLinCom' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_e_HTRBV_ErrPosition(VAR
    (TeTAIR_e_HTRBV_ErrPosition, AUTOMATIC) LeTAIR_e_HTRBV_ErrPosition)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_e_HTRBV_ErrPosition);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTRBV_ErrPosition' */
    /* Merge: '<Root>/Merge_209' incorporates:
     *  SignalConversion generated from: '<S167>/LeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S167>/VeTAIR_e_HTRBV_ErrPosition_write'
     */
    /* Gateway: PokeTAIR_e_HTRBV_ErrPosition/PokeTAIR_e_HTRBV_ErrPositionChrt */
    /* During: PokeTAIR_e_HTRBV_ErrPosition/PokeTAIR_e_HTRBV_ErrPositionChrt */
    /* Entry Internal: PokeTAIR_e_HTRBV_ErrPosition/PokeTAIR_e_HTRBV_ErrPositionChrt */
    /* Transition: '<S378>:34' */
    Rte_IrvWrite_PokeTAIR_e_HTRBV_ErrPosition_VeTAIR_e_HTRBV_ErrPosition_write_IRV
        (LeTAIR_e_HTRBV_ErrPosition);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTRBV_ErrPosition' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_e_HTRBV_Err_Ecu(VAR(TeTAIR_e_HTRBV_Err_Ecu,
    AUTOMATIC) LeTAIR_e_HTRBV_Err_Ecu)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_e_HTRBV_Err_Ecu);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTRBV_Err_Ecu' */
    /* Merge: '<Root>/Merge_201' incorporates:
     *  SignalConversion generated from: '<S168>/LeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S168>/VeTAIR_e_HTRBV_Err_Ecu_write'
     */
    /* Gateway: PokeTAIR_e_HTRBV_Err_Ecu/PokeTAIR_e_HTRBV_Err_EcuChrt */
    /* During: PokeTAIR_e_HTRBV_Err_Ecu/PokeTAIR_e_HTRBV_Err_EcuChrt */
    /* Entry Internal: PokeTAIR_e_HTRBV_Err_Ecu/PokeTAIR_e_HTRBV_Err_EcuChrt */
    /* Transition: '<S379>:34' */
    Rte_IrvWrite_PokeTAIR_e_HTRBV_Err_Ecu_VeTAIR_e_HTRBV_Err_Ecu_write_IRV
        (LeTAIR_e_HTRBV_Err_Ecu);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTRBV_Err_Ecu' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_e_HTRBV_Err_Motor(VAR(TeTAIR_e_HTRBV_Err_Motor,
    AUTOMATIC) LeTAIR_e_HTRBV_Err_MotorChrt)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_e_HTRBV_Err_MotorChrt);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTRBV_Err_Motor' */
    /* Merge: '<Root>/Merge_203' incorporates:
     *  SignalConversion generated from: '<S169>/LeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S169>/VeTAIR_e_HTRBV_Err_Motor_write'
     */
    /* Gateway: PokeTAIR_e_HTRBV_Err_Motor/PokeTAIR_e_HTRBV_Err_MotorChrt */
    /* During: PokeTAIR_e_HTRBV_Err_Motor/PokeTAIR_e_HTRBV_Err_MotorChrt */
    /* Entry Internal: PokeTAIR_e_HTRBV_Err_Motor/PokeTAIR_e_HTRBV_Err_MotorChrt */
    /* Transition: '<S380>:34' */
    Rte_IrvWrite_PokeTAIR_e_HTRBV_Err_Motor_VeTAIR_e_HTRBV_Err_Motor_write_IRV
        (LeTAIR_e_HTRBV_Err_MotorChrt);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTRBV_Err_Motor' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_e_HTRBV_Err_Voltage(VAR
    (TeTAIR_e_HTRBV_Err_Voltage, AUTOMATIC) LeTAIR_e_HTRBV_Err_Voltage)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_e_HTRBV_Err_Voltage);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTRBV_Err_Voltage' */
    /* Merge: '<Root>/Merge_205' incorporates:
     *  SignalConversion generated from: '<S170>/LeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S170>/VeTAIR_e_HTRBV_Err_Voltage_write'
     */
    /* Gateway: PokeTAIR_e_HTRBV_Err_Voltage/PokeTAIR_e_HTRBV_Err_VoltageChrt */
    /* During: PokeTAIR_e_HTRBV_Err_Voltage/PokeTAIR_e_HTRBV_Err_VoltageChrt */
    /* Entry Internal: PokeTAIR_e_HTRBV_Err_Voltage/PokeTAIR_e_HTRBV_Err_VoltageChrt */
    /* Transition: '<S381>:34' */
    Rte_IrvWrite_PokeTAIR_e_HTRBV_Err_Voltage_VeTAIR_e_HTRBV_Err_Voltage_write_IRV
        (LeTAIR_e_HTRBV_Err_Voltage);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTRBV_Err_Voltage' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_8

FUNC(void, TAIR_CODE) PokeTAIR_e_HTRBV_SystemState(VAR
    (TeTAIR_e_HTRBV_SystemState, AUTOMATIC) LeTAIR_e_HTRBV_SystemState)
{

#if !Rte_SysCon_Variant_TAIR_8

    UNUSED_PARAMETER(LeTAIR_e_HTRBV_SystemState);

#endif

#if Rte_SysCon_Variant_TAIR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_HTRBV_SystemState' */
    /* Merge: '<Root>/Merge_211' incorporates:
     *  SignalConversion generated from: '<S171>/LeTAIR_e_CompStat'
     *  SignalConversion generated from: '<S171>/VeTAIR_e_HTRBV_SystemState_write'
     */
    /* Gateway: PokeTAIR_e_HTRBV_SystemState/PokeTAIR_e_HTRBV_SystemStateChrt */
    /* During: PokeTAIR_e_HTRBV_SystemState/PokeTAIR_e_HTRBV_SystemStateChrt */
    /* Entry Internal: PokeTAIR_e_HTRBV_SystemState/PokeTAIR_e_HTRBV_SystemStateChrt */
    /* Transition: '<S382>:34' */
    Rte_IrvWrite_PokeTAIR_e_HTRBV_SystemState_VeTAIR_e_HTRBV_SystemState_write_IRV
        (LeTAIR_e_HTRBV_SystemState);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_HTRBV_SystemState' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) PokeTAIR_e_LTR_BypsVlv_CalSts(VAR
    (TeTAIR_e_CPV_Calibration_Sts, AUTOMATIC) LeTAIR_e_LTR_BypsVlv_CalSts, VAR
    (boolean, AUTOMATIC) LeTAIR_b_LTR_BypsVlv_CalStsFA)
{

#if Rte_SysCon_Variant_TAIR_9

    boolean rtb_LeTAIR_b_LTR_BypsVlv_CalS_d;

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_e_LTR_BypsVlv_CalSts);

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_b_LTR_BypsVlv_CalStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_LTR_BypsVlv_CalSts' */
    /* Chart: '<S172>/PokeTAIR_e_LTR_BypsVlv_CalStsChrt' incorporates:
     *  SignalConversion generated from: '<S172>/LeTAIR_b_LTR_BypsVlv_CalStsFA'
     *  SignalConversion generated from: '<S172>/LeTAIR_e_LTR_BypsVlv_CalSts'
     */
    /* Gateway: PokeTAIR_e_LTR_BypsVlv_CalSts/PokeTAIR_e_LTR_BypsVlv_CalStsChrt */
    /* During: PokeTAIR_e_LTR_BypsVlv_CalSts/PokeTAIR_e_LTR_BypsVlv_CalStsChrt */
    /* Entry Internal: PokeTAIR_e_LTR_BypsVlv_CalSts/PokeTAIR_e_LTR_BypsVlv_CalStsChrt */
    /* Transition: '<S383>:2' */
    if (!LeTAIR_b_LTR_BypsVlv_CalStsFA)
    {
        /* Transition: '<S383>:3' */
        /* Transition: '<S383>:15' */
        TAIR_ac_B.LeTAIR_e_LTR_BypsVlv_CalSts_out = LeTAIR_e_LTR_BypsVlv_CalSts;
        rtb_LeTAIR_b_LTR_BypsVlv_CalS_d = false;

        /* Transition: '<S383>:18' */
    }
    else
    {
        /* Transition: '<S383>:4' */
        rtb_LeTAIR_b_LTR_BypsVlv_CalS_d = true;
    }

    /* End of Chart: '<S172>/PokeTAIR_e_LTR_BypsVlv_CalStsChrt' */

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S172>/VeTAIR_b_LTR_BypsVlv_CalStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_LTR_BypsVlv_CalSts_VeTAIR_b_LTR_BypsVlv_CalStsFA_write_IRV
        (rtb_LeTAIR_b_LTR_BypsVlv_CalS_d);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S172>/VeTAIR_e_LTR_BypsVlv_CalSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_LTR_BypsVlv_CalSts_VeTAIR_e_LTR_BypsVlv_CalSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_LTR_BypsVlv_CalSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_LTR_BypsVlv_CalSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) PokeTAIR_e_LTR_BypsVlv_ErrSts(VAR(TeTAIR_e_CPV_Status,
    AUTOMATIC) LeTAIR_e_LTR_BypsVlv_ErrSts, VAR(boolean, AUTOMATIC)
    LeTAIR_b_LTR_BypsVlv_ErrStsFA)
{

#if Rte_SysCon_Variant_TAIR_9

    boolean rtb_LeTAIR_b_LTR_BypsVlv_ErrS_g;

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_e_LTR_BypsVlv_ErrSts);

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_b_LTR_BypsVlv_ErrStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_LTR_BypsVlv_ErrSts' */
    /* Chart: '<S173>/PokeTAIR_e_LTR_BypsVlv_ErrStsChrt' incorporates:
     *  SignalConversion generated from: '<S173>/LeTAIR_b_LTR_BypsVlv_ErrStsFA'
     *  SignalConversion generated from: '<S173>/LeTAIR_e_LTR_BypsVlv_ErrSts'
     */
    /* Gateway: PokeTAIR_e_LTR_BypsVlv_ErrSts/PokeTAIR_e_LTR_BypsVlv_ErrStsChrt */
    /* During: PokeTAIR_e_LTR_BypsVlv_ErrSts/PokeTAIR_e_LTR_BypsVlv_ErrStsChrt */
    /* Entry Internal: PokeTAIR_e_LTR_BypsVlv_ErrSts/PokeTAIR_e_LTR_BypsVlv_ErrStsChrt */
    /* Transition: '<S384>:2' */
    if (!LeTAIR_b_LTR_BypsVlv_ErrStsFA)
    {
        /* Transition: '<S384>:3' */
        /* Transition: '<S384>:15' */
        TAIR_ac_B.LeTAIR_e_LTR_BypsVlv_ErrSts_out = LeTAIR_e_LTR_BypsVlv_ErrSts;
        rtb_LeTAIR_b_LTR_BypsVlv_ErrS_g = false;

        /* Transition: '<S384>:18' */
    }
    else
    {
        /* Transition: '<S384>:4' */
        rtb_LeTAIR_b_LTR_BypsVlv_ErrS_g = true;
    }

    /* End of Chart: '<S173>/PokeTAIR_e_LTR_BypsVlv_ErrStsChrt' */

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S173>/VeTAIR_b_LTR_BypsVlv_ErrStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_LTR_BypsVlv_ErrSts_VeTAIR_b_LTR_BypsVlv_ErrStsFA_write_IRV
        (rtb_LeTAIR_b_LTR_BypsVlv_ErrS_g);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  SignalConversion generated from: '<S173>/VeTAIR_e_LTR_BypsVlv_ErrSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_LTR_BypsVlv_ErrSts_VeTAIR_e_LTR_BypsVlv_ErrSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_LTR_BypsVlv_ErrSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_LTR_BypsVlv_ErrSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_e_OEXV_CalStat(VAR(TeTAIR_e_EXV_Calibration_Sts,
    AUTOMATIC) LeTAIR_e_OEXV_CalStat, VAR(boolean, AUTOMATIC)
    LeTAIR_b_OEXV_CalStatFA)
{

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_e_OEXV_CalStat);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_CalStatFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_OEXV_CalStat' */
    /* Chart: '<S174>/PokeTAIR_e_OEXV_CalStatChrt' incorporates:
     *  SignalConversion generated from: '<S174>/LeTAIR_b_OEXV_CalStatFA'
     *  SignalConversion generated from: '<S174>/LeTAIR_e_OEXV_CalStat'
     */
    /* Gateway: PokeTAIR_e_OEXV_CalStat/PokeTAIR_e_OEXV_CalStatChrt */
    /* During: PokeTAIR_e_OEXV_CalStat/PokeTAIR_e_OEXV_CalStatChrt */
    /* Entry Internal: PokeTAIR_e_OEXV_CalStat/PokeTAIR_e_OEXV_CalStatChrt */
    /* Transition: '<S385>:2' */
    if (!LeTAIR_b_OEXV_CalStatFA)
    {
        /* Transition: '<S385>:3' */
        /* Transition: '<S385>:15' */
        TAIR_ac_B.LeTAIR_e_OEXV_CalStat_out = LeTAIR_e_OEXV_CalStat;

        /* Transition: '<S385>:18' */
    }
    else
    {
        /* Transition: '<S385>:4' */
    }

    /* End of Chart: '<S174>/PokeTAIR_e_OEXV_CalStatChrt' */

    /* Merge: '<Root>/Merge_170' incorporates:
     *  SignalConversion generated from: '<S174>/VeTAIR_e_OEXV_CalStat_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_OEXV_CalStat_VeTAIR_e_OEXV_CalStat_write_IRV
        (TAIR_ac_B.LeTAIR_e_OEXV_CalStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_OEXV_CalStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_e_OEXV_Err(VAR(TeTAIR_e_EXV_ErrorMsg, AUTOMATIC)
    LeTAIR_e_OEXV_Err, VAR(boolean, AUTOMATIC) LeTAIR_b_OEXV_ErrFA)
{

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_e_OEXV_Err);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_ErrFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_OEXV_Err' */
    /* Chart: '<S175>/PokeTAIR_e_OEXV_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S175>/LeTAIR_b_OEXV_ErrFA'
     *  SignalConversion generated from: '<S175>/LeTAIR_e_OEXV_Err'
     */
    /* Gateway: PokeTAIR_e_OEXV_Err/PokeTAIR_e_OEXV_ErrChrt */
    /* During: PokeTAIR_e_OEXV_Err/PokeTAIR_e_OEXV_ErrChrt */
    /* Entry Internal: PokeTAIR_e_OEXV_Err/PokeTAIR_e_OEXV_ErrChrt */
    /* Transition: '<S386>:2' */
    if (!LeTAIR_b_OEXV_ErrFA)
    {
        /* Transition: '<S386>:3' */
        /* Transition: '<S386>:15' */
        TAIR_ac_B.LeTAIR_e_OEXV_Err_out = LeTAIR_e_OEXV_Err;

        /* Transition: '<S386>:18' */
    }
    else
    {
        /* Transition: '<S386>:4' */
    }

    /* End of Chart: '<S175>/PokeTAIR_e_OEXV_ErrChrt' */

    /* Merge: '<Root>/Merge_158' incorporates:
     *  SignalConversion generated from: '<S175>/VeTAIR_e_OEXV_Err_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_OEXV_Err_VeTAIR_e_OEXV_Err_write_IRV
        (TAIR_ac_B.LeTAIR_e_OEXV_Err_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_OEXV_Err' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_e_OEXV_Sts(VAR(TeTAIR_e_EXV_Status, AUTOMATIC)
    LeTAIR_e_OEXV_Sts, VAR(boolean, AUTOMATIC) LeTAIR_b_OEXV_StsFA)
{

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_e_OEXV_Sts);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_StsFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_OEXV_Sts' */
    /* Chart: '<S176>/PokeTAIR_e_OEXV_StsChrt' incorporates:
     *  SignalConversion generated from: '<S176>/LeTAIR_b_OEXV_StsFA'
     *  SignalConversion generated from: '<S176>/LeTAIR_e_OEXV_Sts'
     */
    /* Gateway: PokeTAIR_e_OEXV_Sts/PokeTAIR_e_OEXV_StsChrt */
    /* During: PokeTAIR_e_OEXV_Sts/PokeTAIR_e_OEXV_StsChrt */
    /* Entry Internal: PokeTAIR_e_OEXV_Sts/PokeTAIR_e_OEXV_StsChrt */
    /* Transition: '<S387>:2' */
    if (!LeTAIR_b_OEXV_StsFA)
    {
        /* Transition: '<S387>:3' */
        /* Transition: '<S387>:15' */
        TAIR_ac_B.LeTAIR_e_OEXV_Sts_out = LeTAIR_e_OEXV_Sts;

        /* Transition: '<S387>:18' */
    }
    else
    {
        /* Transition: '<S387>:4' */
    }

    /* End of Chart: '<S176>/PokeTAIR_e_OEXV_StsChrt' */

    /* Merge: '<Root>/Merge_174' incorporates:
     *  SignalConversion generated from: '<S176>/VeTAIR_e_OEXV_Sts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_OEXV_Sts_VeTAIR_e_OEXV_Sts_write_IRV
        (TAIR_ac_B.LeTAIR_e_OEXV_Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_OEXV_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_e_RearDefrostSts(VAR(TeTAIR_e_RearDefrostSts,
    AUTOMATIC) LeTAIR_e_RearDefrostSts, VAR(boolean, AUTOMATIC)
    LeTAIR_b_RearDefrostStsFA)
{

#if Rte_SysCon_Variant_TAIR_3

    boolean rtb_LeTAIR_b_RearDefrostStsFA_o;

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_e_RearDefrostSts);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_RearDefrostStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_e_RearDefrostSts' */
    /* Chart: '<S177>/PokeTAIR_e_RearDefrostStsChrt' incorporates:
     *  SignalConversion generated from: '<S177>/LeTAIR_b_RearDefrostStsFA'
     *  SignalConversion generated from: '<S177>/LeTAIR_e_RearDefrostSts'
     */
    /* Gateway: PokeTAIR_e_RearDefrostSts/PokeTAIR_e_RearDefrostStsChrt */
    /* During: PokeTAIR_e_RearDefrostSts/PokeTAIR_e_RearDefrostStsChrt */
    /* Entry Internal: PokeTAIR_e_RearDefrostSts/PokeTAIR_e_RearDefrostStsChrt */
    /* Transition: '<S388>:2' */
    if (!LeTAIR_b_RearDefrostStsFA)
    {
        /* Transition: '<S388>:3' */
        /* Transition: '<S388>:15' */
        TAIR_ac_B.LeTAIR_e_RearDefrostSts_out = LeTAIR_e_RearDefrostSts;
        rtb_LeTAIR_b_RearDefrostStsFA_o = false;

        /* Transition: '<S388>:18' */
    }
    else
    {
        /* Transition: '<S388>:4' */
        rtb_LeTAIR_b_RearDefrostStsFA_o = true;
    }

    /* End of Chart: '<S177>/PokeTAIR_e_RearDefrostStsChrt' */

    /* Merge: '<Root>/Merge_155' incorporates:
     *  SignalConversion generated from: '<S177>/LeTAIR_b_RearDefrostStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_RearDefrostSts_VeTAIR_b_EBL_StatFA_write_IRV
        (rtb_LeTAIR_b_RearDefrostStsFA_o);

    /* Merge: '<Root>/Merge_154' incorporates:
     *  SignalConversion generated from: '<S177>/VeTAIR_e_RearDefrostSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_e_RearDefrostSts_VeTAIR_e_RearDefrostSts_write_IRV
        (TAIR_ac_B.LeTAIR_e_RearDefrostSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_e_RearDefrostSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_13

FUNC(void, TAIR_CODE) PokeTAIR_kp_EXV_RefPress(VAR(float32, AUTOMATIC)
    LeTAIR_kp_EXV_RefPress, VAR(boolean, AUTOMATIC) LeTAIR_b_EXV_RefPressFA)
{

#if Rte_SysCon_Variant_TAIR_13

    boolean rtb_LeTAIR_b_EXV_RefPressFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_kp_EXV_RefPress);

#endif

#if !Rte_SysCon_Variant_TAIR_13

    UNUSED_PARAMETER(LeTAIR_b_EXV_RefPressFA);

#endif

#if Rte_SysCon_Variant_TAIR_13

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_kp_EXV_RefPress' */
    /* Chart: '<S178>/PokeTAIR_kp_EXV_RefPressChrt' incorporates:
     *  SignalConversion generated from: '<S178>/LeTAIR_b_EXV_RefPressFA'
     *  SignalConversion generated from: '<S178>/LeTAIR_kp_EXV_RefPress'
     */
    /* Gateway: PokeTAIR_kp_EXV_RefPress/PokeTAIR_kp_EXV_RefPressChrt */
    /* During: PokeTAIR_kp_EXV_RefPress/PokeTAIR_kp_EXV_RefPressChrt */
    /* Entry Internal: PokeTAIR_kp_EXV_RefPress/PokeTAIR_kp_EXV_RefPressChrt */
    /* Transition: '<S389>:2' */
    if (!LeTAIR_b_EXV_RefPressFA)
    {
        /* Transition: '<S389>:3' */
        /* Transition: '<S389>:15' */
        TAIR_ac_B.LeTAIR_kp_EXV_RefPress_out = LeTAIR_kp_EXV_RefPress;
        rtb_LeTAIR_b_EXV_RefPressFA_out = false;

        /* Transition: '<S389>:18' */
    }
    else
    {
        /* Transition: '<S389>:4' */
        rtb_LeTAIR_b_EXV_RefPressFA_out = true;
    }

    /* End of Chart: '<S178>/PokeTAIR_kp_EXV_RefPressChrt' */

    /* Merge: '<Root>/Merge_181' incorporates:
     *  SignalConversion generated from: '<S178>/VeTAIR_b_EXV_RefPressFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_kp_EXV_RefPress_VeTAIR_b_EXV_RefPressFA_write_IRV
        (rtb_LeTAIR_b_EXV_RefPressFA_out);

    /* Merge: '<Root>/Merge_180' incorporates:
     *  SignalConversion generated from: '<S178>/VeTAIR_kp_EXV_RefPress_write'
     * */
    Rte_IrvWrite_PokeTAIR_kp_EXV_RefPress_VeTAIR_kp_EXV_RefPress_write_IRV
        (TAIR_ac_B.LeTAIR_kp_EXV_RefPress_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_kp_EXV_RefPress' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_2

FUNC(void, TAIR_CODE) PokeTAIR_n_CompSpdFdb(VAR(float32, AUTOMATIC)
    LeTAIR_n_CompSpdFdb, VAR(boolean, AUTOMATIC) LeTAIR_b_CompSpdFdbFA)
{

#if Rte_SysCon_Variant_TAIR_2

    boolean rtb_LeTAIR_b_CompSpdFdbFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_n_CompSpdFdb);

#endif

#if !Rte_SysCon_Variant_TAIR_2

    UNUSED_PARAMETER(LeTAIR_b_CompSpdFdbFA);

#endif

#if Rte_SysCon_Variant_TAIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_n_CompSpdFdb' */
    /* Chart: '<S179>/PokeTAIR_n_CompSpdFdbChrt' incorporates:
     *  SignalConversion generated from: '<S179>/LeTAIR_b_CompSpdFdbFA'
     *  SignalConversion generated from: '<S179>/LeTAIR_n_CompSpdFdb'
     */
    /* Gateway: PokeTAIR_n_CompSpdFdb/PokeTAIR_n_CompSpdFdbChrt */
    /* During: PokeTAIR_n_CompSpdFdb/PokeTAIR_n_CompSpdFdbChrt */
    /* Entry Internal: PokeTAIR_n_CompSpdFdb/PokeTAIR_n_CompSpdFdbChrt */
    /* Transition: '<S390>:2' */
    if (!LeTAIR_b_CompSpdFdbFA)
    {
        /* Transition: '<S390>:3' */
        /* Transition: '<S390>:15' */
        TAIR_ac_B.LeTAIR_n_CompSpdFdb_out = LeTAIR_n_CompSpdFdb;
        rtb_LeTAIR_b_CompSpdFdbFA_out = false;

        /* Transition: '<S390>:18' */
    }
    else
    {
        /* Transition: '<S390>:4' */
        rtb_LeTAIR_b_CompSpdFdbFA_out = true;
    }

    /* End of Chart: '<S179>/PokeTAIR_n_CompSpdFdbChrt' */

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S179>/VeTAIR_b_CompSpdFdbFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_n_CompSpdFdb_VeTAIR_b_CompSpdFdbFA_write_IRV
        (rtb_LeTAIR_b_CompSpdFdbFA_out);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S179>/VeTAIR_n_CompSpdFdb_write'
     * */
    Rte_IrvWrite_PokeTAIR_n_CompSpdFdb_VeTAIR_n_CompSpdFdb_write_IRV
        (TAIR_ac_B.LeTAIR_n_CompSpdFdb_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_n_CompSpdFdb' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_11

FUNC(void, TAIR_CODE) PokeTAIR_p_EEXV_RefPress(VAR(float32, AUTOMATIC)
    LeTAIR_p_EEXV_RefPress, VAR(boolean, AUTOMATIC) LeTAIR_b_EEXV_RefPressFA)
{

#if Rte_SysCon_Variant_TAIR_11

    boolean rtb_LeTAIR_b_EEXV_RefPressFA_ou;

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_p_EEXV_RefPress);

#endif

#if !Rte_SysCon_Variant_TAIR_11

    UNUSED_PARAMETER(LeTAIR_b_EEXV_RefPressFA);

#endif

#if Rte_SysCon_Variant_TAIR_11

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_p_EEXV_RefPress' */
    /* Chart: '<S180>/PokeTAIR_p_EEXV_RefPressChrt' incorporates:
     *  SignalConversion generated from: '<S180>/LeTAIR_b_EEXV_RefPressFA'
     *  SignalConversion generated from: '<S180>/LeTAIR_p_EEXV_RefPress'
     */
    /* Gateway: PokeTAIR_p_EEXV_RefPress/PokeTAIR_p_EEXV_RefPressChrt */
    /* During: PokeTAIR_p_EEXV_RefPress/PokeTAIR_p_EEXV_RefPressChrt */
    /* Entry Internal: PokeTAIR_p_EEXV_RefPress/PokeTAIR_p_EEXV_RefPressChrt */
    /* Transition: '<S391>:2' */
    if (!LeTAIR_b_EEXV_RefPressFA)
    {
        /* Transition: '<S391>:3' */
        /* Transition: '<S391>:15' */
        TAIR_ac_B.LeTAIR_p_EEXV_RefPress_out = LeTAIR_p_EEXV_RefPress;
        rtb_LeTAIR_b_EEXV_RefPressFA_ou = false;

        /* Transition: '<S391>:18' */
    }
    else
    {
        /* Transition: '<S391>:4' */
        rtb_LeTAIR_b_EEXV_RefPressFA_ou = true;
    }

    /* End of Chart: '<S180>/PokeTAIR_p_EEXV_RefPressChrt' */

    /* Merge: '<Root>/Merge_136' incorporates:
     *  SignalConversion generated from: '<S180>/VeTAIR_b_EEXV_RefPressFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_p_EEXV_RefPress_VeTAIR_b_EEXV_RefPressFA_write_IRV
        (rtb_LeTAIR_b_EEXV_RefPressFA_ou);

    /* Merge: '<Root>/Merge_135' incorporates:
     *  SignalConversion generated from: '<S180>/VeTAIR_p_EEXV_RefPress_write'
     * */
    Rte_IrvWrite_PokeTAIR_p_EEXV_RefPress_VeTAIR_p_EEXV_RefPress_write_IRV
        (TAIR_ac_B.LeTAIR_p_EEXV_RefPress_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_p_EEXV_RefPress' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_12

FUNC(void, TAIR_CODE) PokeTAIR_p_OEXV_RefPress(VAR(float32, AUTOMATIC)
    LeTAIR_p_OEXV_RefPress, VAR(boolean, AUTOMATIC) LeTAIR_b_OEXV_RefPressFA)
{

#if Rte_SysCon_Variant_TAIR_12

    boolean rtb_LeTAIR_b_OEXV_RefPressFA_ou;

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_p_OEXV_RefPress);

#endif

#if !Rte_SysCon_Variant_TAIR_12

    UNUSED_PARAMETER(LeTAIR_b_OEXV_RefPressFA);

#endif

#if Rte_SysCon_Variant_TAIR_12

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_p_OEXV_RefPress' */
    /* Chart: '<S181>/PokeTAIR_p_OEXV_RefPressChrt' incorporates:
     *  SignalConversion generated from: '<S181>/LeTAIR_b_OEXV_RefPressFA'
     *  SignalConversion generated from: '<S181>/LeTAIR_p_OEXV_RefPress'
     */
    /* Gateway: PokeTAIR_p_OEXV_RefPress/PokeTAIR_p_OEXV_RefPressChrt */
    /* During: PokeTAIR_p_OEXV_RefPress/PokeTAIR_p_OEXV_RefPressChrt */
    /* Entry Internal: PokeTAIR_p_OEXV_RefPress/PokeTAIR_p_OEXV_RefPressChrt */
    /* Transition: '<S392>:2' */
    if (!LeTAIR_b_OEXV_RefPressFA)
    {
        /* Transition: '<S392>:3' */
        /* Transition: '<S392>:15' */
        TAIR_ac_B.LeTAIR_p_OEXV_RefPress_out = LeTAIR_p_OEXV_RefPress;
        rtb_LeTAIR_b_OEXV_RefPressFA_ou = false;

        /* Transition: '<S392>:18' */
    }
    else
    {
        /* Transition: '<S392>:4' */
        rtb_LeTAIR_b_OEXV_RefPressFA_ou = true;
    }

    /* End of Chart: '<S181>/PokeTAIR_p_OEXV_RefPressChrt' */

    /* Merge: '<Root>/Merge_159' incorporates:
     *  SignalConversion generated from: '<S181>/VeTAIR_b_OEXV_RefPressFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_p_OEXV_RefPress_VeTAIR_b_OEXV_RefPressFA_write_IRV
        (rtb_LeTAIR_b_OEXV_RefPressFA_ou);

    /* Merge: '<Root>/Merge_175' incorporates:
     *  SignalConversion generated from: '<S181>/VeTAIR_p_OEXV_RefPress_write'
     * */
    Rte_IrvWrite_PokeTAIR_p_OEXV_RefPress_VeTAIR_p_OEXV_RefPress_write_IRV
        (TAIR_ac_B.LeTAIR_p_OEXV_RefPress_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_p_OEXV_RefPress' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_15

FUNC(void, TAIR_CODE) PokeTAIR_y_CPV2_ErrMsgs(VAR(uint8, AUTOMATIC)
    LeTAIR_y_CPV2_ErrMsgs, VAR(boolean, AUTOMATIC) LeTAIR_b_CPV2_ErrMsgsFA)
{

#if Rte_SysCon_Variant_TAIR_15

    boolean rtb_LeTAIR_b_CPV2_ErrMsgsFA_out;

#endif

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_y_CPV2_ErrMsgs);

#endif

#if !Rte_SysCon_Variant_TAIR_15

    UNUSED_PARAMETER(LeTAIR_b_CPV2_ErrMsgsFA);

#endif

#if Rte_SysCon_Variant_TAIR_15

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_y_CPV2_ErrMsgs' */
    /* Chart: '<S182>/PokeTAIR_y_CPV2_ErrMsgsChrt' incorporates:
     *  SignalConversion generated from: '<S182>/LeTAIR_b_CPV2_ErrMsgsFA'
     *  SignalConversion generated from: '<S182>/LeTAIR_y_CPV2_ErrMsgs'
     */
    /* Gateway: PokeTAIR_y_CPV2_ErrMsgs/PokeTAIR_y_CPV2_ErrMsgsChrt */
    /* During: PokeTAIR_y_CPV2_ErrMsgs/PokeTAIR_y_CPV2_ErrMsgsChrt */
    /* Entry Internal: PokeTAIR_y_CPV2_ErrMsgs/PokeTAIR_y_CPV2_ErrMsgsChrt */
    /* Transition: '<S393>:2' */
    if (!LeTAIR_b_CPV2_ErrMsgsFA)
    {
        /* Transition: '<S393>:3' */
        /* Transition: '<S393>:15' */
        TAIR_ac_B.LeTAIR_y_CPV2_ErrMsgs_out = (uint16)LeTAIR_y_CPV2_ErrMsgs;
        rtb_LeTAIR_b_CPV2_ErrMsgsFA_out = false;

        /* Transition: '<S393>:18' */
    }
    else
    {
        /* Transition: '<S393>:4' */
        rtb_LeTAIR_b_CPV2_ErrMsgsFA_out = true;
    }

    /* End of Chart: '<S182>/PokeTAIR_y_CPV2_ErrMsgsChrt' */

    /* Merge: '<Root>/Merge_150' incorporates:
     *  SignalConversion generated from: '<S182>/VeTAIR_b_CPV2_ErrMsgsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_CPV2_ErrMsgs_VeTAIR_b_CPV2_ErrMsgsFA_write_IRV
        (rtb_LeTAIR_b_CPV2_ErrMsgsFA_out);

    /* Merge: '<Root>/Merge_148' incorporates:
     *  SignalConversion generated from: '<S182>/VeTAIR_y_CPV2_ErrMsgs_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_CPV2_ErrMsgs_VeTAIR_y_CPV2_ErrMsgs_write_IRV
        (TAIR_ac_B.LeTAIR_y_CPV2_ErrMsgs_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_y_CPV2_ErrMsgs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_14

FUNC(void, TAIR_CODE) PokeTAIR_y_FrWyVlv_ErrMsgs(VAR(uint8, AUTOMATIC)
    LeTAIR_y_FrWyVlv_ErrMsgs, VAR(boolean, AUTOMATIC) LeTAIR_b_FrWyVlv_ErrMsgsFA)
{

#if Rte_SysCon_Variant_TAIR_14

    boolean rtb_LeTAIR_b_FrWyVlv_ErrMsgsFA_;

#endif

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_y_FrWyVlv_ErrMsgs);

#endif

#if !Rte_SysCon_Variant_TAIR_14

    UNUSED_PARAMETER(LeTAIR_b_FrWyVlv_ErrMsgsFA);

#endif

#if Rte_SysCon_Variant_TAIR_14

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_y_FrWyVlv_ErrMsgs' */
    /* Chart: '<S183>/PokeTAIR_y_FrWyVlv_ErrMsgsChrt' incorporates:
     *  SignalConversion generated from: '<S183>/LeTAIR_b_FrWyVlv_ErrMsgsFA'
     *  SignalConversion generated from: '<S183>/LeTAIR_y_FrWyVlv_ErrMsgs'
     */
    /* Gateway: PokeTAIR_y_FrWyVlv_ErrMsgs/PokeTAIR_y_FrWyVlv_ErrMsgsChrt */
    /* During: PokeTAIR_y_FrWyVlv_ErrMsgs/PokeTAIR_y_FrWyVlv_ErrMsgsChrt */
    /* Entry Internal: PokeTAIR_y_FrWyVlv_ErrMsgs/PokeTAIR_y_FrWyVlv_ErrMsgsChrt */
    /* Transition: '<S394>:2' */
    if (!LeTAIR_b_FrWyVlv_ErrMsgsFA)
    {
        /* Transition: '<S394>:3' */
        /* Transition: '<S394>:15' */
        TAIR_ac_B.LeTAIR_y_FrWyVlv_ErrMsgs_out = (uint16)
            LeTAIR_y_FrWyVlv_ErrMsgs;
        rtb_LeTAIR_b_FrWyVlv_ErrMsgsFA_ = false;

        /* Transition: '<S394>:18' */
    }
    else
    {
        /* Transition: '<S394>:4' */
        rtb_LeTAIR_b_FrWyVlv_ErrMsgsFA_ = true;
    }

    /* End of Chart: '<S183>/PokeTAIR_y_FrWyVlv_ErrMsgsChrt' */

    /* Merge: '<Root>/Merge_199' incorporates:
     *  SignalConversion generated from: '<S183>/VeTAIR_b_FrWyVlv_ErrMsgsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_FrWyVlv_ErrMsgs_VeTAIR_b_FrWyVlv_ErrMsgsFA_write_IRV
        (rtb_LeTAIR_b_FrWyVlv_ErrMsgsFA_);

    /* Merge: '<Root>/Merge_198' incorporates:
     *  SignalConversion generated from: '<S183>/VeTAIR_y_FrWyVlv_ErrMsgs_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_FrWyVlv_ErrMsgs_VeTAIR_y_FrWyVlv_ErrMsgs_write_IRV
        (TAIR_ac_B.LeTAIR_y_FrWyVlv_ErrMsgs_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_y_FrWyVlv_ErrMsgs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_10

FUNC(void, TAIR_CODE) PokeTAIR_y_HTL_BypsVlv_ErrMsgs(VAR(uint8, AUTOMATIC)
    LeTAIR_y_HTL_BypsVlv_ErrMsgs, VAR(boolean, AUTOMATIC)
    LeTAIR_b_HTL_BypsVlv_ErrMsgsFA)
{

#if Rte_SysCon_Variant_TAIR_10

    boolean rtb_LeTAIR_b_HTL_BypsVlv_ErrM_g;

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_y_HTL_BypsVlv_ErrMsgs);

#endif

#if !Rte_SysCon_Variant_TAIR_10

    UNUSED_PARAMETER(LeTAIR_b_HTL_BypsVlv_ErrMsgsFA);

#endif

#if Rte_SysCon_Variant_TAIR_10

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_y_HTL_BypsVlv_ErrMsgs' */
    /* Chart: '<S184>/PokeTAIR_y_HTL_BypsVlv_ErrMsgsChrt' incorporates:
     *  SignalConversion generated from: '<S184>/LeTAIR_b_HTL_BypsVlv_ErrMsgsFA'
     *  SignalConversion generated from: '<S184>/LeTAIR_y_HTL_BypsVlv_ErrMsgs'
     */
    /* Gateway: PokeTAIR_y_HTL_BypsVlv_ErrMsgs/PokeTAIR_y_HTL_BypsVlv_ErrMsgsChrt */
    /* During: PokeTAIR_y_HTL_BypsVlv_ErrMsgs/PokeTAIR_y_HTL_BypsVlv_ErrMsgsChrt */
    /* Entry Internal: PokeTAIR_y_HTL_BypsVlv_ErrMsgs/PokeTAIR_y_HTL_BypsVlv_ErrMsgsChrt */
    /* Transition: '<S395>:2' */
    if (!LeTAIR_b_HTL_BypsVlv_ErrMsgsFA)
    {
        /* Transition: '<S395>:3' */
        /* Transition: '<S395>:15' */
        TAIR_ac_B.LeTAIR_y_HTL_BypsVlv_ErrMsgs_ou = (uint16)
            LeTAIR_y_HTL_BypsVlv_ErrMsgs;
        rtb_LeTAIR_b_HTL_BypsVlv_ErrM_g = false;

        /* Transition: '<S395>:18' */
    }
    else
    {
        /* Transition: '<S395>:4' */
        rtb_LeTAIR_b_HTL_BypsVlv_ErrM_g = true;
    }

    /* End of Chart: '<S184>/PokeTAIR_y_HTL_BypsVlv_ErrMsgsChrt' */

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S184>/VeTAIR_b_HTL_BypsVlv_ErrMsgsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_HTL_BypsVlv_ErrMsgs_VeTAIR_b_HTL_BypsVlv_ErrMsgsFA_write_IRV
        (rtb_LeTAIR_b_HTL_BypsVlv_ErrM_g);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S184>/VeTAIR_y_HTL_BypsVlv_ErrMsgs_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_HTL_BypsVlv_ErrMsgs_VeTAIR_y_HTL_BypsVlv_ErrMsgs_write_IRV
        (TAIR_ac_B.LeTAIR_y_HTL_BypsVlv_ErrMsgs_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_y_HTL_BypsVlv_ErrMsgs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_9

FUNC(void, TAIR_CODE) PokeTAIR_y_LTR_BypsVlv_ErrMsgs(VAR(uint8, AUTOMATIC)
    LeTAIR_y_LTR_BypsVlv_ErrMsgs, VAR(boolean, AUTOMATIC)
    LeTAIR_b_LTR_BypsVlv_ErrMsgsFA)
{

#if Rte_SysCon_Variant_TAIR_9

    boolean rtb_LeTAIR_b_LTR_BypsVlv_ErrM_e;

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_y_LTR_BypsVlv_ErrMsgs);

#endif

#if !Rte_SysCon_Variant_TAIR_9

    UNUSED_PARAMETER(LeTAIR_b_LTR_BypsVlv_ErrMsgsFA);

#endif

#if Rte_SysCon_Variant_TAIR_9

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_y_LTR_BypsVlv_ErrMsgs' */
    /* Chart: '<S185>/PokeTAIR_y_LTR_BypsVlv_ErrMsgsChrt' incorporates:
     *  SignalConversion generated from: '<S185>/LeTAIR_b_LTR_BypsVlv_ErrMsgsFA'
     *  SignalConversion generated from: '<S185>/LeTAIR_y_LTR_BypsVlv_ErrMsgs'
     */
    /* Gateway: PokeTAIR_y_LTR_BypsVlv_ErrMsgs/PokeTAIR_y_LTR_BypsVlv_ErrMsgsChrt */
    /* During: PokeTAIR_y_LTR_BypsVlv_ErrMsgs/PokeTAIR_y_LTR_BypsVlv_ErrMsgsChrt */
    /* Entry Internal: PokeTAIR_y_LTR_BypsVlv_ErrMsgs/PokeTAIR_y_LTR_BypsVlv_ErrMsgsChrt */
    /* Transition: '<S396>:2' */
    if (!LeTAIR_b_LTR_BypsVlv_ErrMsgsFA)
    {
        /* Transition: '<S396>:3' */
        /* Transition: '<S396>:15' */
        TAIR_ac_B.LeTAIR_y_LTR_BypsVlv_ErrMsgs_ou = (uint16)
            LeTAIR_y_LTR_BypsVlv_ErrMsgs;
        rtb_LeTAIR_b_LTR_BypsVlv_ErrM_e = false;

        /* Transition: '<S396>:18' */
    }
    else
    {
        /* Transition: '<S396>:4' */
        rtb_LeTAIR_b_LTR_BypsVlv_ErrM_e = true;
    }

    /* End of Chart: '<S185>/PokeTAIR_y_LTR_BypsVlv_ErrMsgsChrt' */

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S185>/VeTAIR_b_LTR_BypsVlv_ErrMsgsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_LTR_BypsVlv_ErrMsgs_VeTAIR_b_LTR_BypsVlv_ErrMsgsFA_write_IRV
        (rtb_LeTAIR_b_LTR_BypsVlv_ErrM_e);

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S185>/VeTAIR_y_LTR_BypsVlv_ErrMsgs_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_LTR_BypsVlv_ErrMsgs_VeTAIR_y_LTR_BypsVlv_ErrMsgs_write_IRV
        (TAIR_ac_B.LeTAIR_y_LTR_BypsVlv_ErrMsgs_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_y_LTR_BypsVlv_ErrMsgs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TAIR_3

FUNC(void, TAIR_CODE) PokeTAIR_y_RearCabinFanSts(VAR(uint8, AUTOMATIC)
    LeTAIR_y_RearCabinFanSts, VAR(boolean, AUTOMATIC) LeTAIR_b_RearCabinFanStsFA)
{

#if Rte_SysCon_Variant_TAIR_3

    boolean rtb_LeTAIR_b_RearCabinFanStsFA_;

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_y_RearCabinFanSts);

#endif

#if !Rte_SysCon_Variant_TAIR_3

    UNUSED_PARAMETER(LeTAIR_b_RearCabinFanStsFA);

#endif

#if Rte_SysCon_Variant_TAIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTAIR_y_RearCabinFanSts' */
    /* Chart: '<S186>/PokeTAIR_y_RearCabinFanStsChrt' incorporates:
     *  SignalConversion generated from: '<S186>/LeTAIR_b_RearCabinFanStsFA'
     *  SignalConversion generated from: '<S186>/LeTAIR_y_RearCabinFanSts'
     */
    /* Gateway: PokeTAIR_y_RearCabinFanSts/PokeTAIR_y_RearCabinFanStsChrt */
    /* During: PokeTAIR_y_RearCabinFanSts/PokeTAIR_y_RearCabinFanStsChrt */
    /* Entry Internal: PokeTAIR_y_RearCabinFanSts/PokeTAIR_y_RearCabinFanStsChrt */
    /* Transition: '<S397>:2' */
    if (!LeTAIR_b_RearCabinFanStsFA)
    {
        /* Transition: '<S397>:3' */
        /* Transition: '<S397>:15' */
        TAIR_ac_B.LeTAIR_y_RearCabinFanSts_out = LeTAIR_y_RearCabinFanSts;
        rtb_LeTAIR_b_RearCabinFanStsFA_ = false;

        /* Transition: '<S397>:18' */
    }
    else
    {
        /* Transition: '<S397>:4' */
        rtb_LeTAIR_b_RearCabinFanStsFA_ = true;
    }

    /* End of Chart: '<S186>/PokeTAIR_y_RearCabinFanStsChrt' */

    /* Merge: '<Root>/Merge_213' incorporates:
     *  SignalConversion generated from: '<S186>/VeTAIR_b_RearCabinFanStsFA_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_RearCabinFanSts_VeTAIR_b_RearCabinFanStsFA_write_IRV
        (rtb_LeTAIR_b_RearCabinFanStsFA_);

    /* Merge: '<Root>/Merge_214' incorporates:
     *  SignalConversion generated from: '<S186>/VeTAIR_y_RearCabinFanSts_write'
     * */
    Rte_IrvWrite_PokeTAIR_y_RearCabinFanSts_VeTAIR_y_RearCabinFanSts_write_IRV
        (TAIR_ac_B.LeTAIR_y_RearCabinFanSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTAIR_y_RearCabinFanSts' */
#endif

}

#endif

/* Output function */
FUNC(void, TAIR_CODE) TAIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TAIR_PwrOn'
     */
    /* S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Fan_INIT_Cals'
     */
    /* SignalConversion generated from: '<S1006>/ECM_RadFanReq_INIT' incorporates:
     *  Constant: '<S1026>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_RadFanReq_I = KeTAIR_Pct_ECM_RadFanReq_INIT;

    /* SignalConversion generated from: '<S1006>/ECM_RadFanReq_FA_INIT' incorporates:
     *  Constant: '<S1027>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_RadFanReq_F = KeTAIR_b_ECM_RadFanReq_FA_INIT;

    /* SignalConversion generated from: '<S1006>/DVC_RadFan_IO_INIT' incorporates:
     *  Constant: '<S1028>/Calib'
     */
    TAIR_ac_B.OutportBufferForDVC_RadFan_IO_I = KeTAIR_e_DVC_RadFan_IO_INIT;

    /* SignalConversion generated from: '<S1006>/DVC_RadFan_Cmd_INIT' incorporates:
     *  Constant: '<S1025>/Calib'
     */
    TAIR_ac_B.OutportBufferForDVC_RadFan_Cmd_ = KeTAIR_Pct_DVC_RadFan_Cmd_INIT;

    /* SignalConversion generated from: '<S1006>/ECM_AirflowRequest_FA_INIT' */
    TAIR_ac_B.OutportBufferForECM_AirflowRe_h = false;

    /* SignalConversion generated from: '<S1006>/ECM_AirflowRequest_INIT' */
    TAIR_ac_B.OutportBufferForECM_AirflowRequ = 0.0F;

    /* S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Initialize_inputs'
     */
    /* SignalConversion generated from: '<S1007>/ACCElecCurr_INIT' incorporates:
     *  Constant: '<S1049>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCElecCurr_INI = KeTAIR_I_ACCElecCurr_INIT;

    /* SignalConversion generated from: '<S1007>/ACCompElec_Pwr_FA_INIT' incorporates:
     *  Constant: '<S1054>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCompElec_Pw_o = KeTAIR_b_ACCompElec_Pwr_FA_INIT;

    /* SignalConversion generated from: '<S1007>/ACCompElec_Pwr_INIT' incorporates:
     *  Constant: '<S1050>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCompElec_Pwr_ = KeTAIR_P_ACCompElec_Pwr_INIT;

    /* SignalConversion generated from: '<S1007>/ACCompReq_INIT' incorporates:
     *  Constant: '<S1055>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCompReq_INIT = KeTAIR_b_ACCompReq_INIT;

    /* SignalConversion generated from: '<S1007>/CompFltStat_INIT' incorporates:
     *  Constant: '<S1063>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompFltStat_INI = KeTAIR_e_CompFltStat_INIT;

    /* SignalConversion generated from: '<S1007>/CompHVInput_FA_INIT' incorporates:
     *  Constant: '<S1056>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompHVInput_FA_ = KeTAIR_b_CompHVInput_FA_INIT;

    /* SignalConversion generated from: '<S1007>/CompHVInput_INIT' incorporates:
     *  Constant: '<S1053>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompHVInput_INI = KeTAIR_U_CompHVInput_INIT;

    /* SignalConversion generated from: '<S1007>/CompSpdFdb_FA_INIT' incorporates:
     *  Constant: '<S1057>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdFdb_FA_I = KeTAIR_b_CompSpdFdb_FA_INIT;

    /* SignalConversion generated from: '<S1007>/CompSpdFdb_INIT' incorporates:
     *  Constant: '<S1065>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdFdb_INIT = KeTAIR_n_CompSpdFdb_INIT;

    /* SignalConversion generated from: '<S1007>/CompSpdIncrReq_INIT' incorporates:
     *  Constant: '<S1058>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdIncrReq_ = KeTAIR_b_CompSpdIncrReq_INIT;

    /* SignalConversion generated from: '<S1007>/CompStat_INIT' incorporates:
     *  Constant: '<S1064>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompStat_INIT = KeTAIR_e_CompStat_INIT;

    /* SignalConversion generated from: '<S1007>/FtBlwrCmd_FA_INIT' incorporates:
     *  Constant: '<S1059>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtBlwrCmd_FA_IN = KeTAIR_b_FtBlwrCmd_FA_INIT;

    /* SignalConversion generated from: '<S1007>/FtBlwrCmd_INIT' incorporates:
     *  Constant: '<S1051>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtBlwrCmd_INIT = KeTAIR_Pct_FtBlwrCmd_INIT;

    /* SignalConversion generated from: '<S1007>/HghRfrgtPresFailSts_INIT' incorporates:
     *  Constant: '<S1060>/Calib'
     */
    TAIR_ac_B.OutportBufferForHghRfrgtPresFai =
        KeTAIR_b_HghRfrgtPresFailSts_INIT;

    /* SignalConversion generated from: '<S1007>/RespErr_EAC_INIT' incorporates:
     *  Constant: '<S1061>/Calib'
     */
    TAIR_ac_B.OutportBufferForRespErr_EAC_INI = KeTAIR_b_RespErr_EAC_INIT;

    /* SignalConversion generated from: '<S1007>/RrBlwrCmd_INIT' incorporates:
     *  Constant: '<S1052>/Calib'
     */
    TAIR_ac_B.OutportBufferForRrBlwrCmd_INIT = KeTAIR_Pct_RrBlwrCmd_INIT;

    /* SignalConversion generated from: '<S1007>/WinshldDfrst_INIT' incorporates:
     *  Constant: '<S1062>/Calib'
     */
    TAIR_ac_B.OutportBufferForWinshldDfrst_IN = KeTAIR_b_WinshldDfrst_INIT;

    /* SignalConversion generated from: '<S1007>/CompBoardTemp_FA_INIT' incorporates:
     *  Constant: '<S1041>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompBoardTemp_F = KeTAIR_b_CompBoardTemp_FA_INIT;

    /* SignalConversion generated from: '<S1007>/CompBoardTemp_INIT' incorporates:
     *  Constant: '<S1034>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompBoardTemp_I = KeTAIR_T_CompBoardTemp_INIT;

    /* SignalConversion generated from: '<S1007>/CompIGBTTemp_FA_INIT' incorporates:
     *  Constant: '<S1042>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompIGBTTemp_FA = KeTAIR_b_CompIGBTTemp_FA_INIT;

    /* SignalConversion generated from: '<S1007>/CompIGBTTemp_INIT' incorporates:
     *  Constant: '<S1035>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompIGBTTemp_IN = KeTAIR_T_CompIGBTTemp_INIT;

    /* SignalConversion generated from: '<S1007>/FtEvapTmp_FA_INIT' incorporates:
     *  Constant: '<S1043>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_FA_IN = KeTAIR_b_FtEvapTmp_FA_INIT;

    /* SignalConversion generated from: '<S1007>/FtEvapTmp_INIT' incorporates:
     *  Constant: '<S1036>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_INIT = KeTAIR_T_FtEvapTmp_INIT;

    /* SignalConversion generated from: '<S1007>/FtEvapTmp_P1C_FA_INIT' incorporates:
     *  Constant: '<S1044>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_P1C_F = KeTAIR_b_FtEvapTmp_P1C_FA_INIT;

    /* SignalConversion generated from: '<S1007>/FtEvapTmp_P1C_INIT' incorporates:
     *  Constant: '<S1037>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_P1C_I = KeTAIR_T_FtEvapTmp_P1C_INIT;

    /* SignalConversion generated from: '<S1007>/FtEvapTmp_Tgt_FA_INIT' incorporates:
     *  Constant: '<S1045>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_Tgt_F = KeTAIR_b_FtEvapTmp_Tgt_FA_INIT;

    /* SignalConversion generated from: '<S1007>/FtEvapTmp_Tgt_INIT' incorporates:
     *  Constant: '<S1038>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_Tgt_I = KeTAIR_T_FtEvapTmp_Tgt_INIT;

    /* SignalConversion generated from: '<S1007>/HtrCoreTmp_Tgt_INIT' incorporates:
     *  Constant: '<S1039>/Calib'
     */
    TAIR_ac_B.OutportBufferForHtrCoreTmp_Tgt_ = KeTAIR_T_HtrCoreTmp_Tgt_INIT;

    /* SignalConversion generated from: '<S1007>/VhIntTmp_FA_INIT' incorporates:
     *  Constant: '<S1046>/Calib'
     */
    TAIR_ac_B.OutportBufferForVhIntTmp_FA_INI = KeTAIR_b_VhIntTmp_FA_INIT;

    /* SignalConversion generated from: '<S1007>/VhIntTmp_INIT' incorporates:
     *  Constant: '<S1040>/Calib'
     */
    TAIR_ac_B.OutportBufferForVhIntTmp_INIT = KeTAIR_T_VhIntTmp_INIT;

    /* SignalConversion generated from: '<S1007>/CompSpdTgt_INIT' incorporates:
     *  Constant: '<S1048>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdTgt_INIT = KeTAIR_n_DVC_CompSpdTgt_INIT;

    /* SignalConversion generated from: '<S1007>/CompSpdTgt_IO_Cnt_INIT' incorporates:
     *  Constant: '<S1047>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdTgt_IO_C = KeTAIR_e_CompSpdTgt_IO_Cnt_INIT;

    /* SignalConversion generated from: '<S1007>/ECM_AC_ClutchStsFA_INIT' incorporates:
     *  Constant: '<S1072>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_AC_ClutchSt = KeTAIR_b_ECM_AC_ClutchStsFA_INIT;

    /* SignalConversion generated from: '<S1007>/ECM_AC_ClutchSts_INIT' incorporates:
     *  Constant: '<S1075>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_AC_Clutch_f = KeTAIR_e_ECM_AC_ClutchSts_INIT;

    /* SignalConversion generated from: '<S1007>/HVAC_Cabin_CurrentReq_FA_INIT' incorporates:
     *  Constant: '<S1073>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_Cabin_Cu_f =
        KeTAIR_b_HVAC_Cabin_CurrentReq_FA_INIT;

    /* SignalConversion generated from: '<S1007>/HVAC_Cabin_CurrentReq_INIT' incorporates:
     *  Constant: '<S1070>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_Cabin_Curr =
        KeTAIR_I_HVAC_Cabin_CurrentReq_INIT;

    /* SignalConversion generated from: '<S1007>/HVAC_ECVD_CurrentAct_FA_INIT' incorporates:
     *  Constant: '<S1074>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_ECVD_Cur_g =
        KeTAIR_b_HVAC_ECVD_CurrentAct_FA_INIT;

    /* SignalConversion generated from: '<S1007>/HVAC_ECVD_CurrentAct_INIT' incorporates:
     *  Constant: '<S1071>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_ECVD_Curre =
        KeTAIR_I_HVAC_ECVD_CurrentAct_INIT;

    /* SignalConversion generated from: '<S1007>/RearCabinFanSts_FA_INIT' incorporates:
     *  Constant: '<S1066>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearCabinFanS_a = KeTAIR_b_RearCabinFanSts_FA_INIT;

    /* SignalConversion generated from: '<S1007>/RearCabinFanSts_INIT' incorporates:
     *  Constant: '<S1069>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearCabinFanSts = KeTAIR_y_RearCabinFanSts_INIT;

    /* SignalConversion generated from: '<S1007>/RearDefrostStsFA_INIT' incorporates:
     *  Constant: '<S1067>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearDefrostStsF = KeTAIR_b_RearDefrostStsFA_INIT;

    /* SignalConversion generated from: '<S1007>/RearDefrostSts_INIT' incorporates:
     *  Constant: '<S1068>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearDefrostSts_ = KeTAIR_e_RearDefrostSts_INIT;

    /* S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Valve_INIT_Cals'
     */
    /* SignalConversion generated from: '<S1009>/HT_CabVlvSts_FA_INIT' incorporates:
     *  Constant: '<S1130>/Calib'
     */
    TAIR_ac_B.OutportBufferForHT_CabVlvSts_FA = KeTAIR_b_HT_CabVlvSts_FA_INIT;

    /* SignalConversion generated from: '<S1009>/HT_CabVlvSts_INIT' incorporates:
     *  Constant: '<S1129>/Calib'
     */
    TAIR_ac_B.OutportBufferForHT_CabVlvSts_IN = KeTAIR_U_HT_CabVlvSts_INIT;

    /* SignalConversion generated from: '<S1009>/CPV_Cmd_INIT' incorporates:
     *  Constant: '<S1131>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV_Cmd_INIT = KeTAIR_Pct_CPV_Cmd_INIT;

    /* SignalConversion generated from: '<S1009>/CPV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1145>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV_IO_CntrlSt_ = KeTAIR_e_CPV_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/CabVlvCmd_INIT' incorporates:
     *  Constant: '<S1135>/Calib'
     */
    TAIR_ac_B.OutportBufferForCabVlvCmd_INIT = KeTAIR_Pct_HT_CabVlvCmd_INIT;

    /* SignalConversion generated from: '<S1009>/CabVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1152>/Calib'
     */
    TAIR_ac_B.OutportBufferForCabVlv_IO_Cntrl =
        KeTAIR_e_HT_CabVlvCmd_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/ChilRgtVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1146>/Calib'
     */
    TAIR_ac_B.OutportBufferForChilRgtVlv_IO_C =
        KeTAIR_e_ChilRgtVlvCmd_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/ChilRgt_VlvCmd_INIT' incorporates:
     *  Constant: '<S1138>/Calib'
     */
    TAIR_ac_B.OutportBufferForChilRgt_VlvCmd_ = KeTAIR_b_ChilRgtVlvCmd_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1139>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_CalibStrt_ = KeTAIR_b_EEXV_CalibStrt_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_Cmd_INIT' incorporates:
     *  Constant: '<S1132>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_Cmd_INIT = KeTAIR_Pct_EEXV_Cmd_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1147>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_IO_CntrlSt = KeTAIR_e_EEXV_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1140>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_CalibStrt_I = KeTAIR_b_EXV_CalibStrt_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_Cmd_INIT' incorporates:
     *  Constant: '<S1133>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_Cmd_INIT = KeTAIR_Pct_EXV_Cmd_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1148>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_IO_CntrlSt_ = KeTAIR_e_EXV_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/FrtRgtVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1149>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrtRgtVlv_IO_Cn =
        KeTAIR_e_FrtRgtVlvCmd_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/FrtRgt_VlvCmd_INIT' incorporates:
     *  Constant: '<S1141>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrtRgt_VlvCmd_I = KeTAIR_b_FrtRgtVlvCmd_INIT;

    /* SignalConversion generated from: '<S1009>/HTCV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1150>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTCV_CalibStrt_ = KeTAIR_e_HTCV_CalibStrt_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_Cmd_INIT' incorporates:
     *  Constant: '<S1134>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Cmd = KeTAIR_Pct_HTL_BypsVlv_Cmd_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1151>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_IO_ =
        KeTAIR_e_HTL_BypsVlv_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_Cmd_INIT' incorporates:
     *  Constant: '<S1136>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Cmd = KeTAIR_Pct_LTR_BypsVlv_Cmd_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1154>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_IO_ =
        KeTAIR_e_LTR_BypsVlv_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/LT_SO_Vlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1155>/Calib'
     */
    TAIR_ac_B.OutportBufferForLT_SO_Vlv_IO_Cn =
        KeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/LT_Shtoff_VlvCmd_INIT' incorporates:
     *  Constant: '<S1143>/Calib'
     */
    TAIR_ac_B.OutportBufferForLT_Shtoff_VlvCm = KeTAIR_b_LT_Shtoff_VlvCmd_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1144>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_CalibStrt_ = KeTAIR_b_OEXV_CalibStrt_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_Cmd_INIT' incorporates:
     *  Constant: '<S1137>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_Cmd_INIT = KeTAIR_Pct_OEXV_Cmd_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1156>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_IO_CntrlSt = KeTAIR_e_OEXV_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/SO_Vlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1153>/Calib'
     */
    TAIR_ac_B.OutportBufferForSO_Vlv_IO_Cntrl =
        KeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_INIT;

    /* SignalConversion generated from: '<S1009>/Shtoff_VlvCmd_INIT' incorporates:
     *  Constant: '<S1142>/Calib'
     */
    TAIR_ac_B.OutportBufferForShtoff_VlvCmd_I = KeTAIR_b_HT_Shtoff_VlvCmd_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_CalSts_INIT' incorporates:
     *  Constant: '<S1175>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_CalSts_ = KeTAIR_e_FrWyVlv_CalSts_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1173>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_ErrMs_g = KeTAIR_b_FrWyVlv_ErrMsgs_FA_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1177>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_ErrMsgs = KeTAIR_y_FrWyVlv_ErrMsgs_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_ErrSts_INIT' incorporates:
     *  Constant: '<S1176>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_ErrSts_ = KeTAIR_e_FrWyVlv_ErrSts_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_MtrVltg_INIT' incorporates:
     *  Constant: '<S1171>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_MtrVltg = KeTAIR_U_FrWyVlv_MtrVltg_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_Pstn_FA_INIT' incorporates:
     *  Constant: '<S1172>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_Pstn_FA =
        KeTAIR_b_FrWyVlv_ActlPstn_FA_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_Pstn_INIT' incorporates:
     *  Constant: '<S1170>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_Pstn_IN = KeTAIR_Pct_FrWyVlv_ActlPstn_INIT;

    /* SignalConversion generated from: '<S1009>/FrWyVlv_RsErr_INIT' incorporates:
     *  Constant: '<S1174>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_RsErr_I = KeTAIR_b_FrWyVlv_RsErr_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_BoardTemp_INIT' incorporates:
     *  Constant: '<S1087>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_BoardTemp_I = KeTAIR_T_EXV_BoardTemp_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_CalRq_INIT' incorporates:
     *  Constant: '<S1090>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_CalRq_INIT = KeTAIR_b_EXV_CalRq_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_CalStat_INIT' incorporates:
     *  Constant: '<S1095>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_CalStat_INI = KeTAIR_e_EXV_CalStat_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_Err_INIT' incorporates:
     *  Constant: '<S1096>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_Err_INIT = KeTAIR_e_EXV_Err_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_PosAct_FA_INIT' incorporates:
     *  Constant: '<S1091>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_PosAct_FA_I = KeTAIR_b_EXV_PosAct_FA_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_PosAct_INIT' incorporates:
     *  Constant: '<S1086>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_PosAct_INIT = KeTAIR_Pct_EXV_PosAct_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_RefPress_FA_INIT' incorporates:
     *  Constant: '<S1092>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefPress_FA = KeTAIR_b_EXV_RefPress_FA_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_RefPress_INIT' incorporates:
     *  Constant: '<S1098>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefPress_IN = KeTAIR_p_EXV_RefPress_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_RefTemp_FA_INIT' incorporates:
     *  Constant: '<S1093>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefTemp_FA_ = KeTAIR_b_EXV_RefTemp_FA_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_RefTemp_INIT' incorporates:
     *  Constant: '<S1088>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefTemp_INI = KeTAIR_T_EXV_RefTemp_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_RspErr_INIT' incorporates:
     *  Constant: '<S1094>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RspErr_INIT = KeTAIR_b_EXV_RspErr_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_Sts_INIT' incorporates:
     *  Constant: '<S1097>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_Sts_INIT = KeTAIR_e_EXV_Sts_INIT;

    /* SignalConversion generated from: '<S1009>/EXV_SupplyVolt_INIT' incorporates:
     *  Constant: '<S1089>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_SupplyVolt_ = KeTAIR_U_EXV_SupplyVolt_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_ActlPstn_FA_INIT' incorporates:
     *  Constant: '<S1101>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_A_g =
        KeTAIR_b_LTR_BypsVlv_ActlPstn_FA_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_ActlPstn_INIT' incorporates:
     *  Constant: '<S1099>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Act =
        KeTAIR_Pct_LTR_BypsVlv_ActlPstn_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_CalSts_FA_INIT' incorporates:
     *  Constant: '<S1102>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Cal =
        KeTAIR_b_LTR_BypsVlv_CalSts_FA_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_CalSts_INIT' incorporates:
     *  Constant: '<S1107>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_C_b = KeTAIR_e_LTR_BypsVlv_CalSts_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1103>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_g =
        KeTAIR_b_LTR_BypsVlv_ErrMsgs_FA_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1109>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Err =
        KeTAIR_y_LTR_BypsVlv_ErrMsgs_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrSts_FA_INIT' incorporates:
     *  Constant: '<S1104>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_o =
        KeTAIR_b_LTR_BypsVlv_ErrSts_FA_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrSts_INIT' incorporates:
     *  Constant: '<S1108>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_p = KeTAIR_e_LTR_BypsVlv_ErrSts_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_MtrVltg_FA_INIT' incorporates:
     *  Constant: '<S1105>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_M_c =
        KeTAIR_b_LTR_BypsVlv_MtrVltg_FA_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_MtrVltg_INIT' incorporates:
     *  Constant: '<S1100>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Mtr =
        KeTAIR_U_LTR_BypsVlv_MtrVltg_INIT;

    /* SignalConversion generated from: '<S1009>/LTR_BypsVlv_RsErr_INIT' incorporates:
     *  Constant: '<S1106>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_RsE = KeTAIR_b_LTR_BypsVlv_RsErr_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_ActlPstn_FA_INIT' incorporates:
     *  Constant: '<S1120>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_A_f =
        KeTAIR_b_HTL_BypsVlv_ActlPstn_FA_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_ActlPstn_INIT' incorporates:
     *  Constant: '<S1118>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Act =
        KeTAIR_Pct_HTL_BypsVlv_ActlPstn_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_CalSts_FA_INIT' incorporates:
     *  Constant: '<S1121>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Cal =
        KeTAIR_b_HTL_BypsVlv_CalSts_FA_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_CalSts_INIT' incorporates:
     *  Constant: '<S1126>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_C_l = KeTAIR_e_HTL_BypsVlv_CalSts_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1122>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_E_o =
        KeTAIR_b_HTL_BypsVlv_ErrMsgs_FA_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1128>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Err =
        KeTAIR_y_HTL_BypsVlv_ErrMsgs_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrSts_FA_INIT' incorporates:
     *  Constant: '<S1123>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_E_d =
        KeTAIR_b_HTL_BypsVlv_ErrSts_FA_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrSts_INIT' incorporates:
     *  Constant: '<S1127>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv__dp = KeTAIR_e_HTL_BypsVlv_ErrSts_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_MtrVltg_FA_INIT' incorporates:
     *  Constant: '<S1124>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_M_f =
        KeTAIR_b_HTL_BypsVlv_MtrVltg_FA_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_MtrVltg_INIT' incorporates:
     *  Constant: '<S1119>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Mtr =
        KeTAIR_U_HTL_BypsVlv_MtrVltg_INIT;

    /* SignalConversion generated from: '<S1009>/HTL_BypsVlv_RsErr_INIT' incorporates:
     *  Constant: '<S1125>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_RsE = KeTAIR_b_HTL_BypsVlv_RsErr_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_BoardTemp_INIT' incorporates:
     *  Constant: '<S1158>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_BoardTemp_ = KeTAIR_T_EEXV_BoardTemp_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_CalRq_INIT' incorporates:
     *  Constant: '<S1161>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_CalRq_INIT = KeTAIR_b_EEXV_CalRq_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_CalStat_INIT' incorporates:
     *  Constant: '<S1166>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_CalStat_IN = KeTAIR_e_EEXV_CalStat_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_Err_INIT' incorporates:
     *  Constant: '<S1167>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_Err_INIT = KeTAIR_e_EEXV_Err_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_PosAct_FA_INIT' incorporates:
     *  Constant: '<S1162>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_PosAct_FA_ = KeTAIR_b_EEXV_PosAct_FA_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_PosAct_INIT' incorporates:
     *  Constant: '<S1157>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_PosAct_INI = KeTAIR_Pct_EEXV_PosAct_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_RefPress_FA_INIT' incorporates:
     *  Constant: '<S1163>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefPress_F = KeTAIR_b_EEXV_RefPress_FA_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_RefPress_INIT' incorporates:
     *  Constant: '<S1169>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefPress_I = KeTAIR_p_EEXV_RefPress_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_RefTemp_FA_INIT' incorporates:
     *  Constant: '<S1164>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefTemp_FA = KeTAIR_b_EEXV_RefTemp_FA_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_RefTemp_INIT' incorporates:
     *  Constant: '<S1159>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefTemp_IN = KeTAIR_T_EEXV_RefTemp_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_RspErr_INIT' incorporates:
     *  Constant: '<S1165>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RspErr_INI = KeTAIR_b_EEXV_RspErr_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_Sts_INIT' incorporates:
     *  Constant: '<S1168>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_Sts_INIT = KeTAIR_e_EEXV_Sts_INIT;

    /* SignalConversion generated from: '<S1009>/EEXV_SupplyVolt_INIT' incorporates:
     *  Constant: '<S1160>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_SupplyVolt = KeTAIR_U_EEXV_SupplyVolt_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_BoardTemp_INIT' incorporates:
     *  Constant: '<S1192>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_BoardTemp_ = KeTAIR_T_OEXV_BoardTemp_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_CalRq_INIT' incorporates:
     *  Constant: '<S1195>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_CalRq_INIT = KeTAIR_b_OEXV_CalRq_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_CalStat_INIT' incorporates:
     *  Constant: '<S1200>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_CalStat_IN = KeTAIR_e_OEXV_CalStat_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_Err_INIT' incorporates:
     *  Constant: '<S1201>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_Err_INIT = KeTAIR_e_OEXV_Err_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_PosAct_FA_INIT' incorporates:
     *  Constant: '<S1196>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_PosAct_FA_ = KeTAIR_b_OEXV_PosAct_FA_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_PosAct_INIT' incorporates:
     *  Constant: '<S1191>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_PosAct_INI = KeTAIR_Pct_OEXV_PosAct_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_RefPress_FA_INIT' incorporates:
     *  Constant: '<S1197>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefPress_F = KeTAIR_b_OEXV_RefPress_FA_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_RefPress_INIT' incorporates:
     *  Constant: '<S1203>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefPress_I = KeTAIR_p_OEXV_RefPress_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_RefTemp_FA_INIT' incorporates:
     *  Constant: '<S1198>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefTemp_FA = KeTAIR_b_OEXV_RefTemp_FA_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_RefTemp_INIT' incorporates:
     *  Constant: '<S1193>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefTemp_IN = KeTAIR_T_OEXV_RefTemp_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_RspErr_INIT' incorporates:
     *  Constant: '<S1199>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RspErr_INI = KeTAIR_b_OEXV_RspErr_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_Sts_INIT' incorporates:
     *  Constant: '<S1202>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_Sts_INIT = KeTAIR_e_OEXV_Sts_INIT;

    /* SignalConversion generated from: '<S1009>/OEXV_SupplyVolt_INIT' incorporates:
     *  Constant: '<S1194>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_SupplyVolt = KeTAIR_U_OEXV_SupplyVolt_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_ActuatorPosAct_FA_INIT' incorporates:
     *  Constant: '<S1182>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Actuato_h =
        KeTAIR_b_HTRBV_ActuatorPosAct_FA_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_ActuatorPosAct_INIT' incorporates:
     *  Constant: '<S1178>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ActuatorP =
        KeTAIR_Pct_HTRBV_ActuatorPosAct_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_ActuatorPosTrgt_INIT' incorporates:
     *  Constant: '<S1179>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Actuato_e =
        KeTAIR_Pct_HTRBV_ActuatorPosTrgt_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_EcuTemp_INIT' incorporates:
     *  Constant: '<S1180>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_EcuTemp_I = KeTAIR_T_HTRBV_EcuTemp_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_EcuVoltage_INIT' incorporates:
     *  Constant: '<S1181>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_EcuVoltag = KeTAIR_U_HTRBV_EcuVoltage_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_ErrLinCom_INIT' incorporates:
     *  Constant: '<S1185>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ErrLinCom = KeTAIR_e_HTRBV_ErrLinCom_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_ErrPosition_INIT' incorporates:
     *  Constant: '<S1186>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ErrPositi = KeTAIR_e_HTRBV_ErrPosition_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_Err_Ecu_INIT' incorporates:
     *  Constant: '<S1187>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Err_Ecu_I = KeTAIR_e_HTRBV_Err_Ecu_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_Err_Motor_INIT' incorporates:
     *  Constant: '<S1188>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Err_Motor = KeTAIR_e_HTRBV_Err_Motor_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_Err_Voltage_INIT' incorporates:
     *  Constant: '<S1189>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Err_Volta = KeTAIR_e_HTRBV_Err_Voltage_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_ResponseError_INIT' incorporates:
     *  Constant: '<S1183>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ResponseE =
        KeTAIR_b_HTRBV_ResponseError_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_SelfCalReq_INIT' incorporates:
     *  Constant: '<S1184>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_SelfCalRe = KeTAIR_b_HTRBV_SelfCalReq_INIT;

    /* SignalConversion generated from: '<S1009>/HTRBV_SystemState_INIT' incorporates:
     *  Constant: '<S1190>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_SystemSta = KeTAIR_e_HTRBV_SystemState_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_CalSts_INIT' incorporates:
     *  Constant: '<S1115>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_CalSts_INI = KeTAIR_e_CPV2_CalSts_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1113>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_ErrMsgs_FA = KeTAIR_b_CPV2_ErrMsgs_FA_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1117>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_ErrMsgs_IN = KeTAIR_y_CPV2_ErrMsgs_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_ErrSts_INIT' incorporates:
     *  Constant: '<S1116>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_ErrSts_INI = KeTAIR_e_CPV2_ErrSts_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_MtrVltg_INIT' incorporates:
     *  Constant: '<S1111>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_MtrVltg_IN = KeTAIR_U_CPV2_MtrVltg_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_Pstn_FA_INIT' incorporates:
     *  Constant: '<S1112>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_Pstn_FA_IN = KeTAIR_b_CPV2_ActlPstn_FA_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_Pstn_INIT' incorporates:
     *  Constant: '<S1110>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_Pstn_INIT = KeTAIR_Pct_CPV2_ActlPstn_INIT;

    /* SignalConversion generated from: '<S1009>/CPV2_RsErr_INIT' incorporates:
     *  Constant: '<S1114>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_RsErr_INIT = KeTAIR_b_CPV2_RsErr_INIT;

    /* S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/AGS_AGS2_INIT_Cals'
     */
    /* SignalConversion generated from: '<S1005>/AGS_BoostSts_Init' */
    TAIR_ac_B.OutportBufferForAGS_BoostSts_In = false;

    /* SignalConversion generated from: '<S1005>/AGS_CalibrationActv_Init' */
    TAIR_ac_B.OutportBufferForAGS_Calibration = false;

    /* SignalConversion generated from: '<S1005>/AGS_CalibrationSts_Init' incorporates:
     *  Constant: '<S1018>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_Calibrati_n = TAIR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S1005>/AGS_CurrPosFA_Init' */
    TAIR_ac_B.OutportBufferForAGS_CurrPosFA_I = false;

    /* SignalConversion generated from: '<S1005>/AGS_CurrPos_Init' incorporates:
     *  Constant: '<S1019>/Calib'
     */
    TAIR_ac_B.OutportBufferForAGS_CurrPos_Ini = KeTAIR_Pct_AGS_CurrPos_Init;

    /* SignalConversion generated from: '<S1005>/AGS_ErrFdbFA_Init' */
    TAIR_ac_B.OutportBufferForAGS_ErrFdbFA_In = false;

    /* SignalConversion generated from: '<S1005>/AGS_ErrFdb_Init' incorporates:
     *  Constant: '<S1017>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_ErrFdb_Init = TAIR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S1005>/AGS_ErrMechBreak_Init' */
    TAIR_ac_B.OutportBufferForAGS_ErrMechBrea = false;

    /* SignalConversion generated from: '<S1005>/AGS_ErrMechStuck_Init' */
    TAIR_ac_B.OutportBufferForAGS_ErrMechStuc = false;

    /* SignalConversion generated from: '<S1005>/AGS_ErrOverTemp_Init' */
    TAIR_ac_B.OutportBufferForAGS_ErrOverTemp = false;

    /* SignalConversion generated from: '<S1005>/AGS_ErrOverVolt_Init' */
    TAIR_ac_B.OutportBufferForAGS_ErrOverVolt = false;

    /* SignalConversion generated from: '<S1005>/AGS_ErrUnderVolt_Init' */
    TAIR_ac_B.OutportBufferForAGS_ErrUnderVol = false;

    /* SignalConversion generated from: '<S1005>/AGS_ResErr_Init' */
    TAIR_ac_B.OutportBufferForAGS_ResErr_Init = false;

    /* SignalConversion generated from: '<S1005>/e_AGS_CurrPos_Init' incorporates:
     *  Constant: '<S1020>/Calib'
     */
    TAIR_ac_B.OutportBufferFore_AGS_CurrPos_I = KeTAIR_e_AGS_CurrPos_Init;

    /* SignalConversion generated from: '<S1005>/AGS2_BoostSts_Init' */
    TAIR_ac_B.OutportBufferForAGS2_BoostSts_I = false;

    /* SignalConversion generated from: '<S1005>/AGS2_CalibrationActv_Init' */
    TAIR_ac_B.OutportBufferForAGS2_Calibratio = false;

    /* SignalConversion generated from: '<S1005>/AGS2_CalibrationSts_Init' incorporates:
     *  Constant: '<S1013>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_Calibrat_c = TAIR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S1005>/AGS2_CurrPosFA_Init' */
    TAIR_ac_B.OutportBufferForAGS2_CurrPosFA_ = false;

    /* SignalConversion generated from: '<S1005>/AGS2_CurrPos_Init' incorporates:
     *  Constant: '<S1015>/Calib'
     */
    TAIR_ac_B.OutportBufferForAGS2_CurrPos_In = KeTAIR_Pct_AGS2_CurrPos_Init;

    /* SignalConversion generated from: '<S1005>/AGS2_ErrFdbFA_Init' */
    TAIR_ac_B.OutportBufferForAGS2_ErrFdbFA_I = false;

    /* SignalConversion generated from: '<S1005>/AGS2_ErrFdb_Init' incorporates:
     *  Constant: '<S1014>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_ErrFdb_Ini = TAIR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1005>/AGS2_ErrMechBreak_Init' */
    TAIR_ac_B.OutportBufferForAGS2_ErrMechBre = false;

    /* SignalConversion generated from: '<S1005>/AGS2_ErrMechStuck_Init' */
    TAIR_ac_B.OutportBufferForAGS2_ErrMechStu = false;

    /* SignalConversion generated from: '<S1005>/AGS2_ErrOverTemp_Init' */
    TAIR_ac_B.OutportBufferForAGS2_ErrOverTem = false;

    /* SignalConversion generated from: '<S1005>/AGS2_ErrOverVolt_Init' */
    TAIR_ac_B.OutportBufferForAGS2_ErrOverVol = false;

    /* SignalConversion generated from: '<S1005>/AGS2_ErrUnderVolt_Init' */
    TAIR_ac_B.OutportBufferForAGS2_ErrUnderVo = false;

    /* SignalConversion generated from: '<S1005>/AGS2_ResErr_Init' */
    TAIR_ac_B.OutportBufferForAGS2_ResErr_Ini = false;

    /* SignalConversion generated from: '<S1005>/e_AGS2_CurrPos_Init' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    TAIR_ac_B.OutportBufferFore_AGS2_CurrPos_ = KeTAIR_e_AGS2_CurrPos_Init;

    /* SignalConversion generated from: '<S1005>/AGS2_CalibStrt_INIT' */
    TAIR_ac_B.OutportBufferForAGS2_CalibStrt_ = false;

    /* SignalConversion generated from: '<S1005>/AGS2_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1023>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_IO_CntrlSt = TAIR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S1005>/AGS2_PstnCmnd_INIT' incorporates:
     *  Constant: '<S1024>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_PstnCmnd_I = TAIR_ac_ConstB.Constant_ll;

    /* SignalConversion generated from: '<S1005>/AGS_CalibStrt_INIT' */
    TAIR_ac_B.OutportBufferForAGS_CalibStrt_I = false;

    /* SignalConversion generated from: '<S1005>/AGS_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1022>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_IO_CntrlSt_ = TAIR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1005>/AGS_PstnCmnd_INIT' incorporates:
     *  Constant: '<S1021>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_PstnCmnd_IN = TAIR_ac_ConstB.Constant_nw;

    /* S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_ECM_RadFanReq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_ECM_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_RadFanSts_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_RadF = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_RadFanSts_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_RadFan = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_RadFab_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const4'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_RadFab = TAIR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_DVC_RadFanCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_DVC_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_RadFanHndShk_dsbld_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_RadF_p = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_n_CompSpdFdb_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_n_CompSp = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CompSpdFdb_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CompSp = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_P_AC_CompElecPwr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_P_AC_Com = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AC_CompElecPwr_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AC_Com = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_p_HghRfrgtPres_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_p_HghRfr = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HghRfrgtPres_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HghRfr = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_CompStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const13'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CompSt = TAIR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_CompFltStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const14'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CompFl = TAIR_ac_ConstB.Const14;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CompSpdIncrReq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_Comp_a = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_I_ACCElecCurr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_I_ACCEle = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_CompHVInp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_CompHV = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CompHVInp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CompHV = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_ACCompReq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_ACComp = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_CompBoardTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_CompBo = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CompBoardTemp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CompBo = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_CompIGBTTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_CompIG = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CompIGBTTemp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CompIG = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_FtEvapTmp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_FtEvap = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FtEvapTmp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FtEvap = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_FtEvapTmp_Tgt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_FtEv_n = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FtEvapTmp_TgtFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FtEv_m = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_RrBlwrCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_RrBl = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_FrtBlwrCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_FrtB = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrtBlwrCmd_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrtBlw = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_VhIntTmp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_VhIntT = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_VhIntTmp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_VhIntT = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_HtrCoreTmp_Tgt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_HtrCor = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_CompSpdTgt_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const34'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CompSp = TAIR_ac_ConstB.Const34;

    /* SignalConversion generated from: '<S1008>/VeTAIR_n_DVC_CompSpdTgt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_n_DVC_Co = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_WinshldDfrst_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_Winshl = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_I_HVAC_Cabin_CurrentReq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_I_HVAC_C = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HVAC_Cabin_CurrentReqFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HVAC_C = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_I_HVAC_ECVD_CurrentAct_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_I_HVAC_E = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HVAC_ECVD_CurrentActFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HVAC_E = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_ECM_AC_ClutchSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const41'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_ECM_AC = TAIR_ac_ConstB.Const41;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_ECM_AC_ClutchStsFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_ECM_AC = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HghRfrgtPresFailSts_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HghR_c = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_HT_CabVlvSts_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_HT_Cab = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HT_CabVlvSts_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HT_Cab = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_DVC_HTCV_CalibStrt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const46'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_DVC_HT = TAIR_ac_ConstB.Const46;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const47'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HT_Sht = TAIR_ac_ConstB.Const47;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HT_Shtoff_VlvCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HT_Sht = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const49'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_Ft_SO_ = TAIR_ac_ConstB.Const49;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_Ft_SO_VlvCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_Ft_SO_ = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const51'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_Chlr_S = TAIR_ac_ConstB.Const51;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_Chlr_SO_VlvCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_Chlr_S = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const53'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HT_Cab = TAIR_ac_ConstB.Const53;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_HT_CabVlvCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_HT_C = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_FrWyVlv_PstnAct_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_FrWy = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_PstnAct_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWyVl = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_FrWyVlv_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const57'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_FrWy_n = TAIR_ac_ConstB.Const57;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_RsErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_h = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_FrWyVlv_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const59'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_FrWyVl = TAIR_ac_ConstB.Const59;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_FrWyVlv_MtrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_FrWyVl = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_CPV_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const61'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CPV_IO = TAIR_ac_ConstB.Const61;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_CPV_Cmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_CPV_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_EXV_PosAct_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_EXV_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EXV_PosAct_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Po = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_CalStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const65'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_Ca = TAIR_ac_ConstB.Const65;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EXV_CalRq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Ca = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EXV_RspErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Rs = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_Sts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const68'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_St = TAIR_ac_ConstB.Const68;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_Err_Out_Init' incorporates:
     *  Constant: '<S1008>/Const69'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_Er = TAIR_ac_ConstB.Const69;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_EXV_SupplyVolt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_EXV_Su = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_p_EXV_RefPress_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_p_EXV_Re = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EXV_RefPress_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Re = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_EXV_BoardTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_EXV_Bo = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_EXV_RefTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_EXV_Re = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EXV_RefTemp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EXV__l = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_OvrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_m = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_UndrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_l = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_ThrmlWrng_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_g = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_OpnLd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_b = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_OvrCrnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_a = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_MechBrk_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrW_md = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_BlckPnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_c = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_FrWyVlv_Err_SNA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_j = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_LTR_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_By = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const86'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LTR__p = TAIR_ac_ConstB.Const86;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_CalSts_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__m = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_RsErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__c = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const89'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LTR__m = TAIR_ac_ConstB.Const89;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_ErrSts_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__f = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_LTR_BypsVlv_MtrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_LTR_By = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_MtrVltg_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__o = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_HTL_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_By = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const95'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTL__j = TAIR_ac_ConstB.Const95;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_CalSts_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__d = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_RsErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__o = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const98'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTL__l = TAIR_ac_ConstB.Const98;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_ErrSts_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__e = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_HTL_BypsVlv_MtrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_HTL_By = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_MtrVltg_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_ol = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const102'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_IO = TAIR_ac_ConstB.Const102;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_EXV_Cmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_EX_h = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_DVC_EXV_Calibration_Start_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_EX = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const105'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LT_Sht = TAIR_ac_ConstB.Const105;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LT_Shtoff_VlvCmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LT_Sht = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_LTR_BypsVlv_Cmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_LT_p = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const108'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LTR_By = TAIR_ac_ConstB.Const108;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_HTL_BypsVlv_Cmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_HT_l = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const110'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTL_By = TAIR_ac_ConstB.Const110;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_OvrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_ox = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_UndrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__n = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_ThrmlWrng_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__d = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_OpnLd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__h = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_OvrCrnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__b = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_MechBrk_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_mg = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_BlckPnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__i = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_LTR_BypsVlv_Err_SNA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_o1 = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_OvrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__p = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_UndrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__i = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_ThrmlWrng_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_dz = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_OpnLd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__j = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_OvrCrnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_ou = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_MechBrk_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__l = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_BlckPnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_ek = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTL_BypsVlv_Err_SNA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__m = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_EEXV_PosAct_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_EEXV = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EEXV_PosAct_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_P = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_CalStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const129'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_C = TAIR_ac_ConstB.Const129;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EEXV_CalRq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_C = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EEXV_RspErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_R = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_Sts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const132'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_S = TAIR_ac_ConstB.Const132;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_Err_Out_Init' incorporates:
     *  Constant: '<S1008>/Const133'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_E = TAIR_ac_ConstB.Const133;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_EEXV_SupplyVolt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_EEXV_S = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_p_EEXV_RefPress_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_p_EEXV_R = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EEXV_RefPress_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_d = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_EEXV_BoardTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_EEXV_B = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_EEXV_RefTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_EEXV_R = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_EEXV_RefTemp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_l = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_OEXV_PosAct_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_OEXV = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_PosAct_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_P = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_CalStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const142'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_C = TAIR_ac_ConstB.Const142;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_CalRq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_C = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_RspErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_R = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_Sts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const145'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_S = TAIR_ac_ConstB.Const145;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_Err_Out_Init' incorporates:
     *  Constant: '<S1008>/Const146'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_E = TAIR_ac_ConstB.Const146;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_OEXV_SupplyVolt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_OEXV_S = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_p_OEXV_OutPressSens_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_p_OEXV_O = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_OutPressSens_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_O = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_OEXV_BoardTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_B = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_OEXV_OutTempSens_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_O = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_OutTempSens_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_d = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_OEXV_InTempSens_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_I = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_InTempSens_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_I = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_CEXV_OutTempSens_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_CEXV_O = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CEXV_OutTempSens_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CEXV_O = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_p_CEXV_OutPressSens_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_p_CEXV_O = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CEXV_OutPressSens_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CEXV_d = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_BoostSts_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Bo = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_CalibrationActv_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Ca = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_ErrMechBreak_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Er = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_ErrMechStuck_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__b = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_ErrOverTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__i = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_ErrOverVolt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__k = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_ErrFdbFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__f = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_ErrFdb_Out_Init' incorporates:
     *  Constant: '<S1008>/Const166'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Er = TAIR_ac_ConstB.Const166;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_CurrPosFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Cu = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_AGS_CurrPos_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_AGS_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_ResErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Re = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS_ErrUnderVolt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_kb = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_CalibrationSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const171'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Ca = TAIR_ac_ConstB.Const171;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_BoostSts_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_B = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_CalibrationActv_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_C = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_ErrMechBreak_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_E = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_ErrMechStuck_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_c = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_ErrOverTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_g = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_ErrOverVolt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_gc = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_ErrFdbFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_cc = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_ErrFdb_Out_Init' incorporates:
     *  Constant: '<S1008>/Const179'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_E = TAIR_ac_ConstB.Const179;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_CurrPosFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_cs = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_AGS2_CurrPos_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_AGS2 = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_ResErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_R = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_AGS2_ErrUnderVolt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_m = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_CalibrationSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const184'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_C = TAIR_ac_ConstB.Const184;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_ECM_AirflowRequest_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_EC_n = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_ECM_AirflowRequestFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_ECM_Ai = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_CurrPos_Out_Init' incorporates:
     *  Constant: '<S1008>/Const187'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_e = TAIR_ac_ConstB.Const187;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_CurrPos_Out_Init' incorporates:
     *  Constant: '<S1008>/Const188'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Cu = TAIR_ac_ConstB.Const188;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const189'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_IO = TAIR_ac_ConstB.Const189;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_PstnCmnd_Out_Init' incorporates:
     *  Constant: '<S1008>/Const190'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Ps = TAIR_ac_ConstB.Const190;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_DVC_AGS_Calibration_Start_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_AG = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const192'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_I = TAIR_ac_ConstB.Const192;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_PstnCmnd_Out_Init' incorporates:
     *  Constant: '<S1008>/Const193'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_P = TAIR_ac_ConstB.Const193;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_DVC_AGS2_Calibration_Start_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_DVC__d = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_OEXV_RefTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_R = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_RefTemp_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_f = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_p_OEXV_RefPress_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_p_OEXV_R = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_OEXV_RefPress_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_i = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const199'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_I = TAIR_ac_ConstB.Const199;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_EEXV_Cmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_EE_g = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_DVC_EEXV_Calibration_Start_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_EE = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const202'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_I = TAIR_ac_ConstB.Const202;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_OEXV_Cmd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_OE_m = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_DVC_OEXV_Calibration_Start_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_OE = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_HTRBV_ActuatorPosTrgt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_HTRB = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_T_HTRBV_EcuTemp_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_T_HTRBV_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_HTRBV_EcuVoltage_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_HTRBV_ = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTRBV_ActuatorPosActFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTRBV_ = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTRBV_ResponseError_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTRB_b = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_HTRBV_ActuatorPosAct_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_HT_f = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_HTRBV_SelfCalReq_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_HTRB_i = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Ecu_Out_Init' incorporates:
     *  Constant: '<S1008>/Const223'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_n = TAIR_ac_ConstB.Const223;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Motor_Out_Init' incorporates:
     *  Constant: '<S1008>/Const224'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_h = TAIR_ac_ConstB.Const224;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Voltage_Out_Init' incorporates:
     *  Constant: '<S1008>/Const225'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_f = TAIR_ac_ConstB.Const225;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_ErrLinCom_Out_Init' incorporates:
     *  Constant: '<S1008>/Const226'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_d = TAIR_ac_ConstB.Const226;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_ErrPosition_Out_Init' incorporates:
     *  Constant: '<S1008>/Const227'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_e = TAIR_ac_ConstB.Const227;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_SystemState_Out_Init' incorporates:
     *  Constant: '<S1008>/Const228'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRBV_ = TAIR_ac_ConstB.Const228;

    /* SignalConversion generated from: '<S1008>/VeTAIR_Pct_CPV2_PstnAct_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_Pct_CPV2 = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_PstnAct_FA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_P = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_OvrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_O = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_UndrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_U = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_ThrmlWrng_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_T = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_OpnLd_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_m = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_OvrCrnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_j = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_MechBrk_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_M = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_BlckPnt_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_B = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_Err_SNA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_E = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_U_CPV2_MtrVltg_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_U_CPV2_M = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_CPV2_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const229'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CPV2_E = TAIR_ac_ConstB.Const229;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_CPV2_RsErr_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_R = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_CPV2_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const231'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CPV2_C = TAIR_ac_ConstB.Const231;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_RearDefrostStsFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_RearDe = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_RearCabinFanStsFA_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_Rear_e = false;

    /* SignalConversion generated from: '<S1008>/VeTAIR_e_RearDefrostSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const232'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_RearDe = TAIR_ac_ConstB.Const232;

    /* SignalConversion generated from: '<S1008>/VeTAIR_b_RearCabinFanSts_Out_Init' */
    TAIR_ac_B.OutportBufferForVeTAIR_b_RearCa = 0U;

    /* End of Outputs for S-Function (fcgen): '<S208>/FcnCallGen' */

    /* Outport: '<Root>/VeTAIR_I_ACCElecCurr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_I_ACCElecCurr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_I_ACCElecCurr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_I_ACCEle);

    /* Outport: '<Root>/VeTAIR_I_HVAC_Cabin_CurrentReq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_I_HVAC_Cabin_CurrentReq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_I_HVAC_Cabin_CurrentReq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_I_HVAC_C);

    /* Outport: '<Root>/VeTAIR_I_HVAC_ECVD_CurrentAct' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_I_HVAC_ECVD_CurrentAct_Out_Init'
     */
    (void)Rte_Write_VeTAIR_I_HVAC_ECVD_CurrentAct_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_I_HVAC_E);

    /* Outport: '<Root>/VeTAIR_P_AC_CompElecPwr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_P_AC_CompElecPwr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_P_AC_CompElecPwr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_P_AC_Com);

    /* Outport: '<Root>/VeTAIR_Pct_AGS2_CurrPos' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_AGS2_CurrPos_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_AGS2_CurrPos_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_AGS2);

    /* Outport: '<Root>/VeTAIR_Pct_AGS_CurrPos' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_AGS_CurrPos_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_AGS_CurrPos_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_AGS_);

    /* Outport: '<Root>/VeTAIR_Pct_CPV2_PstnAct' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_CPV2_PstnAct_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_CPV2_PstnAct_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_CPV2);

    /* Outport: '<Root>/VeTAIR_Pct_CPV_Cmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_CPV_Cmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_CPV_Cmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_CPV_);

    /* Outport: '<Root>/VeTAIR_Pct_DVC_RadFanCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_DVC_RadFanCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_DVC_RadFanCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_DVC_);

    /* Outport: '<Root>/VeTAIR_Pct_ECM_AirflowRequest' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_ECM_AirflowRequest_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_ECM_AirflowRequest_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_EC_n);

    /* Outport: '<Root>/VeTAIR_Pct_ECM_RadFanReq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_ECM_RadFanReq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_ECM_RadFanReq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_ECM_);

    /* Outport: '<Root>/VeTAIR_Pct_EEXV_Cmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_EEXV_Cmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_EEXV_Cmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_EE_g);

    /* Outport: '<Root>/VeTAIR_Pct_EEXV_PosAct' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_EEXV_PosAct_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_EEXV_PosAct_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_EEXV);

    /* Outport: '<Root>/VeTAIR_Pct_EXV_Cmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_EXV_Cmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_EXV_Cmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_EX_h);

    /* Outport: '<Root>/VeTAIR_Pct_EXV_PosAct' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_EXV_PosAct_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_EXV_PosAct_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_EXV_);

    /* Outport: '<Root>/VeTAIR_Pct_FrWyVlv_PstnAct' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_FrWyVlv_PstnAct_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_FrWyVlv_PstnAct_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_FrWy);

    /* Outport: '<Root>/VeTAIR_Pct_FrtBlwrCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_FrtBlwrCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_FrtBlwrCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_FrtB);

    /* Outport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_HTL_);

    /* Outport: '<Root>/VeTAIR_Pct_HTL_BypsVlv_Cmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_HTL_BypsVlv_Cmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_HTL_BypsVlv_Cmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_HT_l);

    /* Outport: '<Root>/VeTAIR_Pct_HTRBV_ActuatorPosAct' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_HTRBV_ActuatorPosAct_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_HTRBV_ActuatorPosAct_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_HT_f);

    /* Outport: '<Root>/VeTAIR_Pct_HTRBV_ActuatorPosTrgt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_HTRBV_ActuatorPosTrgt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_HTRBV_ActuatorPosTrgt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_HTRB);

    /* Outport: '<Root>/VeTAIR_Pct_HT_CabVlvCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_HT_CabVlvCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_HT_CabVlvCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_HT_C);

    /* Outport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_LTR_);

    /* Outport: '<Root>/VeTAIR_Pct_LTR_BypsVlv_Cmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_LTR_BypsVlv_Cmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_LTR_BypsVlv_Cmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_LT_p);

    /* Outport: '<Root>/VeTAIR_Pct_OEXV_Cmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_OEXV_Cmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_OEXV_Cmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_OE_m);

    /* Outport: '<Root>/VeTAIR_Pct_OEXV_PosAct' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_OEXV_PosAct_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_OEXV_PosAct_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_OEXV);

    /* Outport: '<Root>/VeTAIR_Pct_RadFanSts' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_RadFanSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_RadFanSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_RadF);

    /* Outport: '<Root>/VeTAIR_Pct_RrBlwrCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_Pct_RrBlwrCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_Pct_RrBlwrCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_Pct_RrBl);

    /* Outport: '<Root>/VeTAIR_T_CEXV_OutTempSens' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_CEXV_OutTempSens_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_CEXV_OutTempSens_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_CEXV_O);

    /* Outport: '<Root>/VeTAIR_T_CompBoardTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_CompBoardTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_CompBoardTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_CompBo);

    /* Outport: '<Root>/VeTAIR_T_CompIGBTTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_CompIGBTTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_CompIGBTTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_CompIG);

    /* Outport: '<Root>/VeTAIR_T_EEXV_BoardTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_EEXV_BoardTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_EEXV_BoardTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_EEXV_B);

    /* Outport: '<Root>/VeTAIR_T_EEXV_RefTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_EEXV_RefTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_EEXV_RefTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_EEXV_R);

    /* Outport: '<Root>/VeTAIR_T_EXV_BoardTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_EXV_BoardTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_EXV_BoardTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_EXV_Bo);

    /* Outport: '<Root>/VeTAIR_T_EXV_RefTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_EXV_RefTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_EXV_RefTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_EXV_Re);

    /* Outport: '<Root>/VeTAIR_T_FtEvapTmp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_FtEvapTmp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_FtEvapTmp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_FtEvap);

    /* Outport: '<Root>/VeTAIR_T_FtEvapTmp_Tgt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_FtEvapTmp_Tgt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_FtEvapTmp_Tgt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_FtEv_n);

    /* Outport: '<Root>/VeTAIR_T_HTRBV_EcuTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_HTRBV_EcuTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_HTRBV_EcuTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_HTRBV_);

    /* Outport: '<Root>/VeTAIR_T_HtrCoreTmp_Tgt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_HtrCoreTmp_Tgt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_HtrCoreTmp_Tgt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_HtrCor);

    /* Outport: '<Root>/VeTAIR_T_OEXV_BoardTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_OEXV_BoardTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_OEXV_BoardTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_B);

    /* Outport: '<Root>/VeTAIR_T_OEXV_InTempSens' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_OEXV_InTempSens_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_OEXV_InTempSens_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_I);

    /* Outport: '<Root>/VeTAIR_T_OEXV_OutTempSens' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_OEXV_OutTempSens_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_OEXV_OutTempSens_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_O);

    /* Outport: '<Root>/VeTAIR_T_OEXV_RefTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_OEXV_RefTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_OEXV_RefTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_OEXV_R);

    /* Outport: '<Root>/VeTAIR_T_VhIntTmp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_T_VhIntTmp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_T_VhIntTmp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_T_VhIntT);

    /* Outport: '<Root>/VeTAIR_U_CPV2_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_CPV2_MtrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_CPV2_MtrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_CPV2_M);

    /* Outport: '<Root>/VeTAIR_U_CompHVInp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_CompHVInp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_CompHVInp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_CompHV);

    /* Outport: '<Root>/VeTAIR_U_EEXV_SupplyVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_EEXV_SupplyVolt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_EEXV_SupplyVolt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_EEXV_S);

    /* Outport: '<Root>/VeTAIR_U_EXV_SupplyVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_EXV_SupplyVolt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_EXV_SupplyVolt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_EXV_Su);

    /* Outport: '<Root>/VeTAIR_U_FrWyVlv_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_FrWyVlv_MtrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_FrWyVlv_MtrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_FrWyVl);

    /* Outport: '<Root>/VeTAIR_U_HTL_BypsVlv_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_HTL_BypsVlv_MtrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_HTL_BypsVlv_MtrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_HTL_By);

    /* Outport: '<Root>/VeTAIR_U_HTRBV_EcuVoltage' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_HTRBV_EcuVoltage_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_HTRBV_EcuVoltage_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_HTRBV_);

    /* Outport: '<Root>/VeTAIR_U_HT_CabVlvSts' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_HT_CabVlvSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_HT_CabVlvSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_HT_Cab);

    /* Outport: '<Root>/VeTAIR_U_LTR_BypsVlv_MtrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_LTR_BypsVlv_MtrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_LTR_BypsVlv_MtrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_LTR_By);

    /* Outport: '<Root>/VeTAIR_U_OEXV_SupplyVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_U_OEXV_SupplyVolt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_U_OEXV_SupplyVolt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_U_OEXV_S);

    /* Outport: '<Root>/VeTAIR_b_ACCompReq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_ACCompReq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_ACCompReq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_ACComp);

    /* Outport: '<Root>/VeTAIR_b_AC_CompElecPwr_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AC_CompElecPwr_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AC_CompElecPwr_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AC_Com);

    /* Outport: '<Root>/VeTAIR_b_AGS2_BoostSts' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_BoostSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_BoostSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_B);

    /* Outport: '<Root>/VeTAIR_b_AGS2_CalibrationActv' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_CalibrationActv_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_CalibrationActv_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_C);

    /* Outport: '<Root>/VeTAIR_b_AGS2_CurrPosFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_CurrPosFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_CurrPosFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_cs);

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrFdbFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_ErrFdbFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrFdbFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_cc);

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrMechBreak' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_ErrMechBreak_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrMechBreak_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_E);

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrMechStuck' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_ErrMechStuck_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrMechStuck_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_c);

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrOverTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_ErrOverTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrOverTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_g);

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrOverVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_ErrOverVolt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrOverVolt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_gc);

    /* Outport: '<Root>/VeTAIR_b_AGS2_ErrUnderVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_ErrUnderVolt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ErrUnderVolt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_m);

    /* Outport: '<Root>/VeTAIR_b_AGS2_ResErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS2_ResErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS2_ResErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS2_R);

    /* Outport: '<Root>/VeTAIR_b_AGS_BoostSts' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_BoostSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_BoostSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Bo);

    /* Outport: '<Root>/VeTAIR_b_AGS_CalibrationActv' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_CalibrationActv_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_CalibrationActv_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Ca);

    /* Outport: '<Root>/VeTAIR_b_AGS_CurrPosFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_CurrPosFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_CurrPosFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Cu);

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrFdbFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_ErrFdbFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrFdbFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__f);

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrMechBreak' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_ErrMechBreak_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrMechBreak_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Er);

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrMechStuck' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_ErrMechStuck_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrMechStuck_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__b);

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrOverTemp' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_ErrOverTemp_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrOverTemp_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__i);

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrOverVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_ErrOverVolt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrOverVolt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS__k);

    /* Outport: '<Root>/VeTAIR_b_AGS_ErrUnderVolt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_ErrUnderVolt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ErrUnderVolt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_kb);

    /* Outport: '<Root>/VeTAIR_b_AGS_ResErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_AGS_ResErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_AGS_ResErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_AGS_Re);

    /* Outport: '<Root>/VeTAIR_b_CEXV_OutPressSens_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CEXV_OutPressSens_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CEXV_OutPressSens_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CEXV_d);

    /* Outport: '<Root>/VeTAIR_b_CEXV_OutTempSens_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CEXV_OutTempSens_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CEXV_OutTempSens_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CEXV_O);

    /* Outport: '<Root>/VeTAIR_b_CPV2_BlckPnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_BlckPnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_BlckPnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_B);

    /* Outport: '<Root>/VeTAIR_b_CPV2_Err_SNA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_Err_SNA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_Err_SNA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_E);

    /* Outport: '<Root>/VeTAIR_b_CPV2_MechBrk' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_MechBrk_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_MechBrk_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_M);

    /* Outport: '<Root>/VeTAIR_b_CPV2_OpnLd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_OpnLd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_OpnLd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_m);

    /* Outport: '<Root>/VeTAIR_b_CPV2_OvrCrnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_OvrCrnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_OvrCrnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_j);

    /* Outport: '<Root>/VeTAIR_b_CPV2_OvrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_OvrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_OvrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_O);

    /* Outport: '<Root>/VeTAIR_b_CPV2_PstnAct_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_PstnAct_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_PstnAct_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_P);

    /* Outport: '<Root>/VeTAIR_b_CPV2_RsErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_RsErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_RsErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_R);

    /* Outport: '<Root>/VeTAIR_b_CPV2_ThrmlWrng' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_ThrmlWrng_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_ThrmlWrng_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_T);

    /* Outport: '<Root>/VeTAIR_b_CPV2_UndrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CPV2_UndrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CPV2_UndrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CPV2_U);

    /* Outport: '<Root>/VeTAIR_b_Chlr_SO_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_Chlr_SO_VlvCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_Chlr_SO_VlvCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_Chlr_S);

    /* Outport: '<Root>/VeTAIR_b_CompBoardTemp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CompBoardTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CompBoardTemp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CompBo);

    /* Outport: '<Root>/VeTAIR_b_CompHVInp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CompHVInp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CompHVInp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CompHV);

    /* Outport: '<Root>/VeTAIR_b_CompIGBTTemp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CompIGBTTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CompIGBTTemp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CompIG);

    /* Outport: '<Root>/VeTAIR_b_CompSpdFdb_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CompSpdFdb_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CompSpdFdb_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_CompSp);

    /* Outport: '<Root>/VeTAIR_b_CompSpdIncrReq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_CompSpdIncrReq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_CompSpdIncrReq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_Comp_a);

    /* Outport: '<Root>/VeTAIR_b_DVC_AGS2_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_DVC_AGS2_Calibration_Start_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_DVC_AGS2_Calibration_Start_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_DVC__d);

    /* Outport: '<Root>/VeTAIR_b_DVC_AGS_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_DVC_AGS_Calibration_Start_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_DVC_AGS_Calibration_Start_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_AG);

    /* Outport: '<Root>/VeTAIR_b_DVC_EEXV_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_DVC_EEXV_Calibration_Start_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_DVC_EEXV_Calibration_Start_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_EE);

    /* Outport: '<Root>/VeTAIR_b_DVC_EXV_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_DVC_EXV_Calibration_Start_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_DVC_EXV_Calibration_Start_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_EX);

    /* Outport: '<Root>/VeTAIR_b_DVC_OEXV_Calibration_Start' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_DVC_OEXV_Calibration_Start_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_DVC_OEXV_Calibration_Start_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_DVC_OE);

    /* Outport: '<Root>/VeTAIR_b_ECM_AC_ClutchStsFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_ECM_AC_ClutchStsFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_ECM_AC_ClutchStsFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_ECM_AC);

    /* Outport: '<Root>/VeTAIR_b_ECM_AirflowRequestFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_ECM_AirflowRequestFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_ECM_AirflowRequestFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_ECM_Ai);

    /* Outport: '<Root>/VeTAIR_b_EEXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EEXV_CalRq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_CalRq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_C);

    /* Outport: '<Root>/VeTAIR_b_EEXV_PosAct_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EEXV_PosAct_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_PosAct_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_P);

    /* Outport: '<Root>/VeTAIR_b_EEXV_RefPress_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EEXV_RefPress_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_RefPress_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_d);

    /* Outport: '<Root>/VeTAIR_b_EEXV_RefTemp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EEXV_RefTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_RefTemp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_l);

    /* Outport: '<Root>/VeTAIR_b_EEXV_RspErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EEXV_RspErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EEXV_RspErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EEXV_R);

    /* Outport: '<Root>/VeTAIR_b_EXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EXV_CalRq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EXV_CalRq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Ca);

    /* Outport: '<Root>/VeTAIR_b_EXV_PosAct_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EXV_PosAct_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EXV_PosAct_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Po);

    /* Outport: '<Root>/VeTAIR_b_EXV_RefPress_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EXV_RefPress_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EXV_RefPress_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Re);

    /* Outport: '<Root>/VeTAIR_b_EXV_RefTemp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EXV_RefTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EXV_RefTemp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EXV__l);

    /* Outport: '<Root>/VeTAIR_b_EXV_RspErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_EXV_RspErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_EXV_RspErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_EXV_Rs);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_BlckPnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_BlckPnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_BlckPnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_c);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_Err_SNA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_Err_SNA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_Err_SNA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_j);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_MechBrk' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_MechBrk_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_MechBrk_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrW_md);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_OpnLd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_OpnLd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_OpnLd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_b);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_OvrCrnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_OvrCrnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_OvrCrnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_a);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_OvrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_OvrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_OvrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_m);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_PstnAct_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_PstnAct_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_PstnAct_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWyVl);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_RsErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_RsErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_RsErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_h);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_ThrmlWrng' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_ThrmlWrng_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_ThrmlWrng_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_g);

    /* Outport: '<Root>/VeTAIR_b_FrWyVlv_UndrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrWyVlv_UndrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrWyVlv_UndrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrWy_l);

    /* Outport: '<Root>/VeTAIR_b_FrtBlwrCmd_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FrtBlwrCmd_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FrtBlwrCmd_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FrtBlw);

    /* Outport: '<Root>/VeTAIR_b_FtEvapTmp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FtEvapTmp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FtEvapTmp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FtEvap);

    /* Outport: '<Root>/VeTAIR_b_FtEvapTmp_TgtFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_FtEvapTmp_TgtFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_FtEvapTmp_TgtFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_FtEv_m);

    /* Outport: '<Root>/VeTAIR_b_Ft_SO_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_Ft_SO_VlvCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_Ft_SO_VlvCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_Ft_SO_);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_ActlPstn_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_ActlPstn_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_By);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_BlckPnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_BlckPnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_BlckPnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_ek);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_CalSts_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_CalSts_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_CalSts_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__d);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_ErrSts_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_ErrSts_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_ErrSts_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__e);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_Err_SNA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_Err_SNA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_Err_SNA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__m);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_MechBrk' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_MechBrk_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_MechBrk_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__l);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_MtrVltg_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_MtrVltg_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_MtrVltg_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_ol);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_OpnLd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_OpnLd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_OpnLd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__j);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_OvrCrnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_OvrCrnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_OvrCrnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_ou);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_OvrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_OvrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_OvrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__p);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_RsErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_RsErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_RsErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__o);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_ThrmlWrng' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_ThrmlWrng_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_ThrmlWrng_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL_dz);

    /* Outport: '<Root>/VeTAIR_b_HTL_BypsVlv_UndrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTL_BypsVlv_UndrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTL_BypsVlv_UndrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTL__i);

    /* Outport: '<Root>/VeTAIR_b_HTRBV_ActuatorPosAct_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTRBV_ActuatorPosActFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTRBV_ActuatorPosAct_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTRBV_);

    /* Outport: '<Root>/VeTAIR_b_HTRBV_ResponseError' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTRBV_ResponseError_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTRBV_ResponseError_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTRB_b);

    /* Outport: '<Root>/VeTAIR_b_HTRBV_SelfCalReq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HTRBV_SelfCalReq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HTRBV_SelfCalReq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HTRB_i);

    /* Outport: '<Root>/VeTAIR_b_HT_CabVlvSts_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HT_CabVlvSts_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HT_CabVlvSts_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HT_Cab);

    /* Outport: '<Root>/VeTAIR_b_HT_Shtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HT_Shtoff_VlvCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HT_Shtoff_VlvCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HT_Sht);

    /* Outport: '<Root>/VeTAIR_b_HVAC_Cabin_CurrentReqFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HVAC_Cabin_CurrentReqFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HVAC_Cabin_CurrentReqFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HVAC_C);

    /* Outport: '<Root>/VeTAIR_b_HVAC_ECVD_CurrentActFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HVAC_ECVD_CurrentActFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HVAC_ECVD_CurrentActFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HVAC_E);

    /* Outport: '<Root>/VeTAIR_b_HghRfrgtPresFailSts' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HghRfrgtPresFailSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HghRfrgtPresFailSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HghR_c);

    /* Outport: '<Root>/VeTAIR_b_HghRfrgtPres_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_HghRfrgtPres_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_HghRfrgtPres_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_HghRfr);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_ActlPstn_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_ActlPstn_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_By);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_BlckPnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_BlckPnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_BlckPnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__i);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_CalSts_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_CalSts_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_CalSts_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__m);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_ErrSts_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_ErrSts_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_ErrSts_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__f);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_Err_SNA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_Err_SNA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_Err_SNA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_o1);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_MechBrk' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_MechBrk_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_MechBrk_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_mg);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_MtrVltg_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_MtrVltg_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_MtrVltg_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__o);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_OpnLd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_OpnLd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_OpnLd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__h);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_OvrCrnt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_OvrCrnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_OvrCrnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__b);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_OvrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_OvrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_OvrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR_ox);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_RsErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_RsErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_RsErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__c);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_ThrmlWrng' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_ThrmlWrng_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_ThrmlWrng_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__d);

    /* Outport: '<Root>/VeTAIR_b_LTR_BypsVlv_UndrVltg' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LTR_BypsVlv_UndrVltg_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LTR_BypsVlv_UndrVltg_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LTR__n);

    /* Outport: '<Root>/VeTAIR_b_LT_Shtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_LT_Shtoff_VlvCmd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_LT_Shtoff_VlvCmd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_LT_Sht);

    /* Outport: '<Root>/VeTAIR_b_OEXV_CalRq' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_CalRq_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_CalRq_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_C);

    /* Outport: '<Root>/VeTAIR_b_OEXV_InTempSens_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_InTempSens_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_InTempSens_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_I);

    /* Outport: '<Root>/VeTAIR_b_OEXV_OutPressSens_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_OutPressSens_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_OutPressSens_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_O);

    /* Outport: '<Root>/VeTAIR_b_OEXV_OutTempSens_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_OutTempSens_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_OutTempSens_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_d);

    /* Outport: '<Root>/VeTAIR_b_OEXV_PosAct_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_PosAct_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_PosAct_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_P);

    /* Outport: '<Root>/VeTAIR_b_OEXV_RefPress_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_RefPress_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_RefPress_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_i);

    /* Outport: '<Root>/VeTAIR_b_OEXV_RefTemp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_RefTemp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_RefTemp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_f);

    /* Outport: '<Root>/VeTAIR_b_OEXV_RspErr' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_OEXV_RspErr_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_OEXV_RspErr_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_OEXV_R);

    /* Outport: '<Root>/VeTAIR_b_RadFanHndShk_dsbld' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_RadFanHndShk_dsbld_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_RadFanHndShk_dsbld_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_RadF_p);

    /* Outport: '<Root>/VeTAIR_b_RadFanSts_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_RadFanSts_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_RadFanSts_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_RadFan);

    /* Outport: '<Root>/VeTAIR_b_RearCabinFanStsFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_RearCabinFanStsFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_RearCabinFanStsFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_Rear_e);

    /* Outport: '<Root>/VeTAIR_y_RearCabinFanSts' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_RearCabinFanSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_y_RearCabinFanSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_RearCa);

    /* Outport: '<Root>/VeTAIR_b_RearDefrostStsFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_RearDefrostStsFA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_RearDefrostStsFA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_RearDe);

    /* Outport: '<Root>/VeTAIR_b_VhIntTmp_FA' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_VhIntTmp_FA_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_VhIntTmp_FA_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_VhIntT);

    /* Outport: '<Root>/VeTAIR_b_WinshldDfrst' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_b_WinshldDfrst_Out_Init'
     */
    (void)Rte_Write_VeTAIR_b_WinshldDfrst_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_b_Winshl);

    /* Outport: '<Root>/VeTAIR_e_AGS2_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_CalibrationSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS2_CalibrationSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_CalibrationSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_C);

    /* Outport: '<Root>/VeTAIR_e_AGS2_CurrPos' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_CurrPos_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS2_CurrPos_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_CurrPos_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_e);

    /* Outport: '<Root>/VeTAIR_e_AGS2_ErrFdb' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_ErrFdb_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS2_ErrFdb_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_ErrFdb_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_E);

    /* Outport: '<Root>/VeTAIR_e_AGS2_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS2_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_I);

    /* Outport: '<Root>/VeTAIR_e_AGS2_PstnCmnd' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_PstnCmnd_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS2_PstnCmnd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_PstnCmnd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_P);

    /* Outport: '<Root>/VeTAIR_e_AGS_CalibrationSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_CalibrationSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS_CalibrationSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS_CalibrationSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Ca);

    /* Outport: '<Root>/VeTAIR_e_AGS_CurrPos' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_CurrPos_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS_CurrPos_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS_CurrPos_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Cu);

    /* Outport: '<Root>/VeTAIR_e_AGS_ErrFdb' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_ErrFdb_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS_ErrFdb_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS_ErrFdb_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Er);

    /* Outport: '<Root>/VeTAIR_e_AGS_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_IO);

    /* Outport: '<Root>/VeTAIR_e_AGS_PstnCmnd' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_PstnCmnd_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_AGS_PstnCmnd_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_AGS_PstnCmnd_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Ps);

    /* Outport: '<Root>/VeTAIR_e_CPV2_CalSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_CPV2_CalSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_CPV2_CalSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_CPV2_CalSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_CPV2_C);

    /* Outport: '<Root>/VeTAIR_e_CPV2_ErrSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_CPV2_ErrSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_CPV2_ErrSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_CPV2_ErrSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_CPV2_E);

    /* Outport: '<Root>/VeTAIR_e_CPV_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_CPV_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_CPV_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_CPV_IO_Cnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_CPV_IO);

    /* Outport: '<Root>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_Chlr_S);

    /* Outport: '<Root>/VeTAIR_e_CompFltStat' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_CompFltStat_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_CompFltStat_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_CompFltStat_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_CompFl);

    /* Outport: '<Root>/VeTAIR_e_CompSpdTgt_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_CompSpdTgt_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_CompSpdTgt_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_CompSpdTgt_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_CompSp);

    /* Outport: '<Root>/VeTAIR_e_CompStat' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_CompStat_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_CompStat_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_CompStat_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_CompSt);

    /* Outport: '<Root>/VeTAIR_e_DVC_HTCV_CalibStrt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_DVC_HTCV_CalibStrt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_DVC_HTCV_CalibStrt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_DVC_HTCV_CalibStrt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_DVC_HT);

    /* Outport: '<Root>/VeTAIR_e_ECM_AC_ClutchSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_ECM_AC_ClutchSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_ECM_AC_ClutchSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_ECM_AC_ClutchSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_ECM_AC);

    /* Outport: '<Root>/VeTAIR_e_EEXV_CalStat' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_CalStat_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EEXV_CalStat_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_CalStat_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_C);

    /* Outport: '<Root>/VeTAIR_e_EEXV_Err' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_Err_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EEXV_Err_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_Err_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_E);

    /* Outport: '<Root>/VeTAIR_e_EEXV_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EEXV_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_I);

    /* Outport: '<Root>/VeTAIR_e_EEXV_Sts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_Sts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EEXV_Sts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_Sts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_S);

    /* Outport: '<Root>/VeTAIR_e_EXV_CalStat' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_CalStat_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EXV_CalStat_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EXV_CalStat_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_Ca);

    /* Outport: '<Root>/VeTAIR_e_EXV_Err' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_Err_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EXV_Err_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EXV_Err_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_Er);

    /* Outport: '<Root>/VeTAIR_e_EXV_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EXV_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EXV_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_IO);

    /* Outport: '<Root>/VeTAIR_e_EXV_Sts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_Sts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_EXV_Sts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_EXV_Sts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_St);

    /* Outport: '<Root>/VeTAIR_e_FrWyVlv_CalSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_FrWyVlv_CalSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_FrWyVlv_CalSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_FrWyVlv_CalSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_FrWy_n);

    /* Outport: '<Root>/VeTAIR_e_FrWyVlv_ErrSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_FrWyVlv_ErrSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_FrWyVlv_ErrSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_FrWyVlv_ErrSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_FrWyVl);

    /* Outport: '<Root>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_Ft_SO_);

    /* Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_CalSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_CalSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTL_BypsVlv_CalSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_CalSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTL__j);

    /* Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_ErrSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_ErrSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTL_BypsVlv_ErrSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_ErrSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTL__l);

    /* Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTL_By);

    /* Outport: '<Root>/VeTAIR_e_HTRBV_ErrLinCom' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_ErrLinCom_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTRBV_ErrLinCom_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_ErrLinCom_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_d);

    /* Outport: '<Root>/VeTAIR_e_HTRBV_ErrPosition' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_ErrPosition_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTRBV_ErrPosition_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_ErrPosition_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_e);

    /* Outport: '<Root>/VeTAIR_e_HTRBV_Err_Ecu' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Ecu_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTRBV_Err_Ecu_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Ecu_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_n);

    /* Outport: '<Root>/VeTAIR_e_HTRBV_Err_Motor' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Motor_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTRBV_Err_Motor_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Motor_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_h);

    /* Outport: '<Root>/VeTAIR_e_HTRBV_Err_Voltage' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Voltage_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTRBV_Err_Voltage_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Voltage_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_f);

    /* Outport: '<Root>/VeTAIR_e_HTRBV_SystemState' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_SystemState_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HTRBV_SystemState_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_SystemState_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HTRBV_);

    /* Outport: '<Root>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HT_Cab);

    /* Outport: '<Root>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_HT_Sht);

    /* Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_CalSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_CalSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_LTR_BypsVlv_CalSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_CalSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_LTR__p);

    /* Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_ErrSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_ErrSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_LTR_BypsVlv_ErrSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_ErrSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_LTR__m);

    /* Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_LTR_By);

    /* Outport: '<Root>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_LT_Sht);

    /* Outport: '<Root>/VeTAIR_e_OEXV_CalStat' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_CalStat_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_OEXV_CalStat_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_CalStat_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_C);

    /* Outport: '<Root>/VeTAIR_e_OEXV_Err' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_Err_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_OEXV_Err_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_Err_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_E);

    /* Outport: '<Root>/VeTAIR_e_OEXV_IO_CntrlSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_IO_CntrlSt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_OEXV_IO_CntrlSt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_IO_CntrlSt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_I);

    /* Outport: '<Root>/VeTAIR_e_OEXV_Sts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_Sts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_OEXV_Sts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_Sts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_S);

    /* Outport: '<Root>/VeTAIR_e_RadFab_IO_Cnt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_RadFab_IO_Cnt_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_RadFab_IO_Cnt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_RadFab_IO_Cnt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_RadFab);

    /* Outport: '<Root>/VeTAIR_e_RearDefrostSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeTAIR_e_RearDefrostSts_Out_Init'
     *  SignalConversion generated from: '<S208>/VeTAIR_e_RearDefrostSts_Out_Init'
     */
    (void)Rte_Write_VeTAIR_e_RearDefrostSts_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_e_RearDe);

    /* Outport: '<Root>/VeTAIR_n_CompSpdFdb' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_n_CompSpdFdb_Out_Init'
     */
    (void)Rte_Write_VeTAIR_n_CompSpdFdb_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_n_CompSp);

    /* Outport: '<Root>/VeTAIR_n_DVC_CompSpdTgt' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_n_DVC_CompSpdTgt_Out_Init'
     */
    (void)Rte_Write_VeTAIR_n_DVC_CompSpdTgt_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_n_DVC_Co);

    /* Outport: '<Root>/VeTAIR_p_CEXV_OutPressSens' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_p_CEXV_OutPressSens_Out_Init'
     */
    (void)Rte_Write_VeTAIR_p_CEXV_OutPressSens_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_p_CEXV_O);

    /* Outport: '<Root>/VeTAIR_p_EEXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_p_EEXV_RefPress_Out_Init'
     */
    (void)Rte_Write_VeTAIR_p_EEXV_RefPress_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_p_EEXV_R);

    /* Outport: '<Root>/VeTAIR_p_EXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_p_EXV_RefPress_Out_Init'
     */
    (void)Rte_Write_VeTAIR_p_EXV_RefPress_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_p_EXV_Re);

    /* Outport: '<Root>/VeTAIR_p_HghRfrgtPres' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_p_HghRfrgtPres_Out_Init'
     */
    (void)Rte_Write_VeTAIR_p_HghRfrgtPres_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_p_HghRfr);

    /* Outport: '<Root>/VeTAIR_p_OEXV_OutPressSens' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_p_OEXV_OutPressSens_Out_Init'
     */
    (void)Rte_Write_VeTAIR_p_OEXV_OutPressSens_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_p_OEXV_O);

    /* Outport: '<Root>/VeTAIR_p_OEXV_RefPress' incorporates:
     *  SignalConversion generated from: '<S208>/VeTAIR_p_OEXV_RefPress_Out_Init'
     */
    (void)Rte_Write_VeTAIR_p_OEXV_RefPress_Value
        (TAIR_ac_B.OutportBufferForVeTAIR_p_OEXV_R);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S208>/ACCElecCurr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_I_ACCElecCurr_write_IRV
        (TAIR_ac_B.OutportBufferForACCElecCurr_INI);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S208>/ACCompElec_Pwr_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_ACCompElec_PwrFA_write_IRV
        (TAIR_ac_B.OutportBufferForACCompElec_Pw_o);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S208>/ACCompElec_Pwr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_P_ACCompElec_Pwr_write_IRV
        (TAIR_ac_B.OutportBufferForACCompElec_Pwr_);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S208>/ACCompReq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_ACCompReq_write_IRV
        (TAIR_ac_B.OutportBufferForACCompReq_INIT);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_BoostSts_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_BoostSts_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_BoostSts_I);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_CalibStrt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_DVC_AGS2_Calibration_Start_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_CalibStrt_);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_CalibrationActv_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_CalibrationActv_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_Calibratio);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS2_CalibrationSts_Init'
     *  SignalConversion generated from: '<S208>/AGS2_CalibrationSts_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_AGS2_CalibrationSts_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_Calibrat_c);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_CurrPosFA_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_CurrPosFA_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_CurrPosFA_);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_CurrPos_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_AGS2_CurrPos_CAN_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_CurrPos_In);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_ErrFdbFA_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_ErrFdbFA_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ErrFdbFA_I);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS2_ErrFdb_Init'
     *  SignalConversion generated from: '<S208>/AGS2_ErrFdb_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_AGS2_ErrFdb_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ErrFdb_Ini);

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_ErrMechBreak_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_ErrMechBreak_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ErrMechBre);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_ErrMechStuck_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_ErrMechStuck_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ErrMechStu);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_ErrOverTemp_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_ErrOverTemp_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ErrOverTem);

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_ErrOverVolt_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_ErrOverVolt_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ErrOverVol);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_ErrUnderVolt_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_ErrUnderVolt_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ErrUnderVo);

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS2_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/AGS2_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_AGS2_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_IO_CntrlSt);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS2_PstnCmnd_INIT'
     *  SignalConversion generated from: '<S208>/AGS2_PstnCmnd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_AGS2_PstnCmnd_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_PstnCmnd_I);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S208>/AGS2_ResErr_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS2_ResErr_write_IRV
        (TAIR_ac_B.OutportBufferForAGS2_ResErr_Ini);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_BoostSts_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_BoostSts_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_BoostSts_In);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_CalibStrt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_DVC_AGS1_Calibration_Start_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_CalibStrt_I);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_CalibrationActv_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_CalibrationActv_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_Calibration);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS_CalibrationSts_Init'
     *  SignalConversion generated from: '<S208>/AGS_CalibrationSts_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_AGS_CalibrationSts_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_Calibrati_n);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_CurrPosFA_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_CurrPosFA_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_CurrPosFA_I);

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_CurrPos_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_AGS_CurrPos_CAN_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_CurrPos_Ini);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_ErrFdbFA_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_ErrFdbFA_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ErrFdbFA_In);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS_ErrFdb_Init'
     *  SignalConversion generated from: '<S208>/AGS_ErrFdb_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_AGS_ErrFdb_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ErrFdb_Init);

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_ErrMechBreak_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_ErrMechBreak_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ErrMechBrea);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_ErrMechStuck_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_ErrMechStuck_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ErrMechStuc);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_ErrOverTemp_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_ErrOverTemp_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ErrOverTemp);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_ErrOverVolt_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_ErrOverVolt_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ErrOverVolt);

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_ErrUnderVolt_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_ErrUnderVolt_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ErrUnderVol);

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/AGS_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_AGS_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_IO_CntrlSt_);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S1005>/AGS_PstnCmnd_INIT'
     *  SignalConversion generated from: '<S208>/AGS_PstnCmnd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_AGS_PstnCmnd_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_PstnCmnd_IN);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S208>/AGS_ResErr_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_AGS_ResErr_write_IRV
        (TAIR_ac_B.OutportBufferForAGS_ResErr_Init);

    /* Merge: '<Root>/Merge_153' incorporates:
     *  SignalConversion generated from: '<S1009>/CPV2_CalSts_INIT'
     *  SignalConversion generated from: '<S208>/CPV2_CalSts_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_CPV2_CalSts_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_CalSts_INI);

    /* Merge: '<Root>/Merge_150' incorporates:
     *  SignalConversion generated from: '<S208>/CPV2_ErrMsgs_FA_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CPV2_ErrMsgsFA_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_ErrMsgs_FA);

    /* Merge: '<Root>/Merge_148' incorporates:
     *  SignalConversion generated from: '<S208>/CPV2_ErrMsgs_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_y_CPV2_ErrMsgs_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_ErrMsgs_IN);

    /* Merge: '<Root>/Merge_151' incorporates:
     *  SignalConversion generated from: '<S1009>/CPV2_ErrSts_INIT'
     *  SignalConversion generated from: '<S208>/CPV2_ErrSts_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_CPV2_ErrSts_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_ErrSts_INI);

    /* Merge: '<Root>/Merge_149' incorporates:
     *  SignalConversion generated from: '<S208>/CPV2_MtrVltg_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_CPV2_MtrVltg_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_MtrVltg_IN);

    /* Merge: '<Root>/Merge_147' incorporates:
     *  SignalConversion generated from: '<S208>/CPV2_Pstn_FA_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CPV2_ActlPstnFA_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_Pstn_FA_IN);

    /* Merge: '<Root>/Merge_146' incorporates:
     *  SignalConversion generated from: '<S208>/CPV2_Pstn_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_CPV2_ActlPstn_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_Pstn_INIT);

    /* Merge: '<Root>/Merge_152' incorporates:
     *  SignalConversion generated from: '<S208>/CPV2_RsErr_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CPV2_RsErr_write_IRV
        (TAIR_ac_B.OutportBufferForCPV2_RsErr_INIT);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S208>/CPV_Cmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_CPV_VlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForCPV_Cmd_INIT);

    /* Merge: '<Root>/Merge_108' incorporates:
     *  SignalConversion generated from: '<S1009>/CPV_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/CPV_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_CPV_VlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForCPV_IO_CntrlSt_);

    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S208>/CabVlvCmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_HT_CabVlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForCabVlvCmd_INIT);

    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S1009>/CabVlv_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/CabVlv_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_HT_CabVlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForCabVlv_IO_Cntrl);

    /* Merge: '<Root>/Merge_113' incorporates:
     *  SignalConversion generated from: '<S1009>/ChilRgtVlv_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/ChilRgtVlv_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_ChlrRfgtShtoff_VlvCmd_IRV
        (TAIR_ac_B.OutportBufferForChilRgtVlv_IO_C);

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S208>/ChilRgt_VlvCmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_ChlrRfgtShtoff_VlvCmd_IRV
        (TAIR_ac_B.OutportBufferForChilRgt_VlvCmd_);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S208>/CompBoardTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CompBoardTempFA_write_IRV
        (TAIR_ac_B.OutportBufferForCompBoardTemp_F);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S208>/CompBoardTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_CompBoardTemp_write_IRV
        (TAIR_ac_B.OutportBufferForCompBoardTemp_I);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S1007>/CompFltStat_INIT'
     *  SignalConversion generated from: '<S208>/CompFltStat_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_CompFltStat_write_IRV
        (TAIR_ac_B.OutportBufferForCompFltStat_INI);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S208>/CompHVInput_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CompHVInputFA_write_IRV
        (TAIR_ac_B.OutportBufferForCompHVInput_FA_);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S208>/CompHVInput_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_CompHVInput_write_IRV
        (TAIR_ac_B.OutportBufferForCompHVInput_INI);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S208>/CompIGBTTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CompIGBTTempFA_write_IRV
        (TAIR_ac_B.OutportBufferForCompIGBTTemp_FA);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S208>/CompIGBTTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_CompIGBTTemp_write_IRV
        (TAIR_ac_B.OutportBufferForCompIGBTTemp_IN);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S208>/CompSpdFdb_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CompSpdFdbFA_write_IRV
        (TAIR_ac_B.OutportBufferForCompSpdFdb_FA_I);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S208>/CompSpdFdb_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_n_CompSpdFdb_write_IRV
        (TAIR_ac_B.OutportBufferForCompSpdFdb_INIT);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S208>/CompSpdIncrReq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_CompSpdIncrReq_write_IRV
        (TAIR_ac_B.OutportBufferForCompSpdIncrReq_);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S208>/CompSpdTgt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_n_CompSpdTgt_write_IRV
        (TAIR_ac_B.OutportBufferForCompSpdTgt_INIT);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S1007>/CompSpdTgt_IO_Cnt_INIT'
     *  SignalConversion generated from: '<S208>/CompSpdTgt_IO_Cnt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_CompSpdTgt_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForCompSpdTgt_IO_C);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S1007>/CompStat_INIT'
     *  SignalConversion generated from: '<S208>/CompStat_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_CompStat_write_IRV
        (TAIR_ac_B.OutportBufferForCompStat_INIT);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S208>/DVC_RadFan_Cmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_RadFanCmd_write_IRV
        (TAIR_ac_B.OutportBufferForDVC_RadFan_Cmd_);

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S1006>/DVC_RadFan_IO_INIT'
     *  SignalConversion generated from: '<S208>/DVC_RadFan_IO_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_RadFanCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForDVC_RadFan_IO_I);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S208>/ECM_AC_ClutchStsFA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_ECM_AC_ClutchStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForECM_AC_ClutchSt);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S1007>/ECM_AC_ClutchSts_INIT'
     *  SignalConversion generated from: '<S208>/ECM_AC_ClutchSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_ECM_AC_ClutchSts_write_IRV
        (TAIR_ac_B.OutportBufferForECM_AC_Clutch_f);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  SignalConversion generated from: '<S208>/ECM_AirflowRequest_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_ECM_AirflowRequestFA_write_IRV
        (TAIR_ac_B.OutportBufferForECM_AirflowRe_h);

    /* Merge: '<Root>/Merge_82' incorporates:
     *  SignalConversion generated from: '<S208>/ECM_AirflowRequest_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_ECM_AirflowRequest_write_IRV
        (TAIR_ac_B.OutportBufferForECM_AirflowRequ);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S208>/ECM_RadFanReq_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_ECM_RadFanReqFA_write_IRV
        (TAIR_ac_B.OutportBufferForECM_RadFanReq_F);

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S208>/ECM_RadFanReq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_ECM_RadFanReq_write_IRV
        (TAIR_ac_B.OutportBufferForECM_RadFanReq_I);

    /* Merge: '<Root>/Merge_137' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_BoardTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_EEXV_BoardTemp_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_BoardTemp_);

    /* Merge: '<Root>/Merge_143' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_CalRq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EEXV_CalRq_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_CalRq_INIT);

    /* Merge: '<Root>/Merge_142' incorporates:
     *  SignalConversion generated from: '<S1009>/EEXV_CalStat_INIT'
     *  SignalConversion generated from: '<S208>/EEXV_CalStat_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_EEXV_CalStat_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_CalStat_IN);

    /* Merge: '<Root>/Merge_114' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_CalibStrt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_DVC_EEXV_Calibration_Start_IRV
        (TAIR_ac_B.OutportBufferForEEXV_CalibStrt_);

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_Cmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_EEXV_VlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_Cmd_INIT);

    /* Merge: '<Root>/Merge_133' incorporates:
     *  SignalConversion generated from: '<S1009>/EEXV_Err_INIT'
     *  SignalConversion generated from: '<S208>/EEXV_Err_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_EEXV_Err_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_Err_INIT);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S1009>/EEXV_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/EEXV_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_EEXV_VlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_IO_CntrlSt);

    /* Merge: '<Root>/Merge_141' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_PosAct_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EEXV_PosActFA_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_PosAct_FA_);

    /* Merge: '<Root>/Merge_139' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_PosAct_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_EEXV_PosAct_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_PosAct_INI);

    /* Merge: '<Root>/Merge_136' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_RefPress_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EEXV_RefPressFA_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_RefPress_F);

    /* Merge: '<Root>/Merge_135' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_RefPress_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_p_EEXV_RefPress_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_RefPress_I);

    /* Merge: '<Root>/Merge_140' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_RefTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EEXV_RefTempFA_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_RefTemp_FA);

    /* Merge: '<Root>/Merge_138' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_RefTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_EEXV_RefTemp_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_RefTemp_IN);

    /* Merge: '<Root>/Merge_144' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_RspErr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EEXV_RspErr_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_RspErr_INI);

    /* Merge: '<Root>/Merge_145' incorporates:
     *  SignalConversion generated from: '<S1009>/EEXV_Sts_INIT'
     *  SignalConversion generated from: '<S208>/EEXV_Sts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_EEXV_Sts_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_Sts_INIT);

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S208>/EEXV_SupplyVolt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_EEXV_SupplyVolt_write_IRV
        (TAIR_ac_B.OutportBufferForEEXV_SupplyVolt);

    /* Merge: '<Root>/Merge_182' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_BoardTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_EXV_BoardTemp_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_BoardTemp_I);

    /* Merge: '<Root>/Merge_189' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_CalRq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EXV_CalRq_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_CalRq_INIT);

    /* Merge: '<Root>/Merge_187' incorporates:
     *  SignalConversion generated from: '<S1009>/EXV_CalStat_INIT'
     *  SignalConversion generated from: '<S208>/EXV_CalStat_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_EXV_CalStat_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_CalStat_INI);

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_CalibStrt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_DVC_EXV_Calibration_Start_IRV
        (TAIR_ac_B.OutportBufferForEXV_CalibStrt_I);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_Cmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_EXV_VlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_Cmd_INIT);

    /* Merge: '<Root>/Merge_177' incorporates:
     *  SignalConversion generated from: '<S1009>/EXV_Err_INIT'
     *  SignalConversion generated from: '<S208>/EXV_Err_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_EXV_Err_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_Err_INIT);

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S1009>/EXV_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/EXV_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_EXV_VlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_IO_CntrlSt_);

    /* Merge: '<Root>/Merge_186' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_PosAct_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EXV_PosActFA_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_PosAct_FA_I);

    /* Merge: '<Root>/Merge_184' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_PosAct_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_EXV_PosAct_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_PosAct_INIT);

    /* Merge: '<Root>/Merge_181' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_RefPress_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EXV_RefPressFA_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_RefPress_FA);

    /* Merge: '<Root>/Merge_180' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_RefPress_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_kp_EXV_RefPress_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_RefPress_IN);

    /* Merge: '<Root>/Merge_185' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_RefTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EXV_RefTempFA_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_RefTemp_FA_);

    /* Merge: '<Root>/Merge_183' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_RefTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_EXV_RefTemp_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_RefTemp_INI);

    /* Merge: '<Root>/Merge_190' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_RspErr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EXV_RspErr_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_RspErr_INIT);

    /* Merge: '<Root>/Merge_191' incorporates:
     *  SignalConversion generated from: '<S1009>/EXV_Sts_INIT'
     *  SignalConversion generated from: '<S208>/EXV_Sts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_EXV_Sts_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_Sts_INIT);

    /* Merge: '<Root>/Merge_179' incorporates:
     *  SignalConversion generated from: '<S208>/EXV_SupplyVolt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_EXV_SupplyVolt_write_IRV
        (TAIR_ac_B.OutportBufferForEXV_SupplyVolt_);

    /* Merge: '<Root>/Merge_196' incorporates:
     *  SignalConversion generated from: '<S1009>/FrWyVlv_CalSts_INIT'
     *  SignalConversion generated from: '<S208>/FrWyVlv_CalSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_FrWyVlv_CalSts_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_CalSts_);

    /* Merge: '<Root>/Merge_199' incorporates:
     *  SignalConversion generated from: '<S208>/FrWyVlv_ErrMsgs_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_FrWyVlv_ErrMsgsFA_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_ErrMs_g);

    /* Merge: '<Root>/Merge_198' incorporates:
     *  SignalConversion generated from: '<S208>/FrWyVlv_ErrMsgs_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_y_FrWyVlv_ErrMsgs_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_ErrMsgs);

    /* Merge: '<Root>/Merge_197' incorporates:
     *  SignalConversion generated from: '<S1009>/FrWyVlv_ErrSts_INIT'
     *  SignalConversion generated from: '<S208>/FrWyVlv_ErrSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_FrWyVlv_ErrSts_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_ErrSts_);

    /* Merge: '<Root>/Merge_200' incorporates:
     *  SignalConversion generated from: '<S208>/FrWyVlv_MtrVltg_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_FrWyVlv_MtrVltg_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_MtrVltg);

    /* Merge: '<Root>/Merge_194' incorporates:
     *  SignalConversion generated from: '<S208>/FrWyVlv_Pstn_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_FrWyVlv_ActlPstnFA_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_Pstn_FA);

    /* Merge: '<Root>/Merge_193' incorporates:
     *  SignalConversion generated from: '<S208>/FrWyVlv_Pstn_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_FrWyVlv_ActlPstn_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_Pstn_IN);

    /* Merge: '<Root>/Merge_195' incorporates:
     *  SignalConversion generated from: '<S208>/FrWyVlv_RsErr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_FrWyVlv_RsErr_write_IRV
        (TAIR_ac_B.OutportBufferForFrWyVlv_RsErr_I);

    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S1009>/FrtRgtVlv_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/FrtRgtVlv_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_FtRfgtShtoff_VlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForFrtRgtVlv_IO_Cn);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S208>/FrtRgt_VlvCmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_FtRfgtShtoff_VlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForFrtRgt_VlvCmd_I);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S208>/FtBlwrCmd_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_FrtBlwrCmdFA_write_IRV
        (TAIR_ac_B.OutportBufferForFtBlwrCmd_FA_IN);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S208>/FtBlwrCmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_FrtBlwrCmd_write_IRV
        (TAIR_ac_B.OutportBufferForFtBlwrCmd_INIT);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S208>/FtEvapTmp_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_FtEvapTmpFA_write_IRV
        (TAIR_ac_B.OutportBufferForFtEvapTmp_FA_IN);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S208>/FtEvapTmp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_FtEvapTmp_write_IRV
        (TAIR_ac_B.OutportBufferForFtEvapTmp_INIT);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S208>/FtEvapTmp_P1C_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_FtEvapTmp_P1CFA_write_IRV
        (TAIR_ac_B.OutportBufferForFtEvapTmp_P1C_F);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S208>/FtEvapTmp_P1C_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_FtEvapTmp_P1C_write_IRV
        (TAIR_ac_B.OutportBufferForFtEvapTmp_P1C_I);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S208>/FtEvapTmp_Tgt_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_FtEvapTmp_TgtFA_write_IRV
        (TAIR_ac_B.OutportBufferForFtEvapTmp_Tgt_F);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S208>/FtEvapTmp_Tgt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_FtEvapTmp_Tgt_write_IRV
        (TAIR_ac_B.OutportBufferForFtEvapTmp_Tgt_I);

    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S1009>/HTCV_CalibStrt_INIT'
     *  SignalConversion generated from: '<S208>/HTCV_CalibStrt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_DVC_HTCV_Calibration_Start_write_IRV
        (TAIR_ac_B.OutportBufferForHTCV_CalibStrt_);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_ActlPstn_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTL_BypsVlv_ActlPstnFA_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_A_f);

    /* Merge: '<Root>/Merge_94' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_ActlPstn_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_HTL_BypsVlv_ActlPstn_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_Act);

    /* Merge: '<Root>/Merge_97' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_CalSts_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTL_BypsVlv_CalStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_Cal);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  SignalConversion generated from: '<S1009>/HTL_BypsVlv_CalSts_INIT'
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_CalSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTL_BypsVlv_CalSts_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_C_l);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_Cmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_HTL_BypsVlv_Cmd_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_Cmd);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_ErrMsgs_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTL_BypsVlv_ErrMsgsFA_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_E_o);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_ErrMsgs_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_y_HTL_BypsVlv_ErrMsgs_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_Err);

    /* Merge: '<Root>/Merge_100' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_ErrSts_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTL_BypsVlv_ErrStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_E_d);

    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrSts_INIT'
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_ErrSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTL_BypsVlv_ErrSts_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv__dp);

    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S1009>/HTL_BypsVlv_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_HTL_BypsVlv_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_IO_);

    /* Merge: '<Root>/Merge_104' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_MtrVltg_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTL_BypsVlv_MtrVltgFA_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_M_f);

    /* Merge: '<Root>/Merge_102' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_MtrVltg_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_HTL_BypsVlv_MtrVltg_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_Mtr);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S208>/HTL_BypsVlv_RsErr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTL_BypsVlv_RsErr_write_IRV
        (TAIR_ac_B.OutportBufferForHTL_BypsVlv_RsE);

    /* Merge: '<Root>/Merge_171' incorporates:
     *  SignalConversion generated from: '<S208>/HTRBV_ActuatorPosAct_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_FsftTAIR_Pct_HTRBV_ActuatorPosActFA_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_Actuato_h);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S208>/HTRBV_ActuatorPosAct_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_PokeTAIR_Pct_HTRBV_ActuatorPosAct_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_ActuatorP);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S208>/HTRBV_ActuatorPosTrgt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_HTRBV_ActuatorPosTrgt_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_Actuato_e);

    /* Merge: '<Root>/Merge_164' incorporates:
     *  SignalConversion generated from: '<S208>/HTRBV_EcuTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_HTRBV_EcuTemp_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_EcuTemp_I);

    /* Merge: '<Root>/Merge_166' incorporates:
     *  SignalConversion generated from: '<S208>/HTRBV_EcuVoltage_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_HTRBV_EcuVoltage_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_EcuVoltag);

    /* Merge: '<Root>/Merge_207' incorporates:
     *  SignalConversion generated from: '<S1009>/HTRBV_ErrLinCom_INIT'
     *  SignalConversion generated from: '<S208>/HTRBV_ErrLinCom_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTRBV_ErrLinCom_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_ErrLinCom);

    /* Merge: '<Root>/Merge_209' incorporates:
     *  SignalConversion generated from: '<S1009>/HTRBV_ErrPosition_INIT'
     *  SignalConversion generated from: '<S208>/HTRBV_ErrPosition_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTRBV_ErrPosition_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_ErrPositi);

    /* Merge: '<Root>/Merge_201' incorporates:
     *  SignalConversion generated from: '<S1009>/HTRBV_Err_Ecu_INIT'
     *  SignalConversion generated from: '<S208>/HTRBV_Err_Ecu_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTRBV_Err_Ecu_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_Err_Ecu_I);

    /* Merge: '<Root>/Merge_203' incorporates:
     *  SignalConversion generated from: '<S1009>/HTRBV_Err_Motor_INIT'
     *  SignalConversion generated from: '<S208>/HTRBV_Err_Motor_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTRBV_Err_Motor_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_Err_Motor);

    /* Merge: '<Root>/Merge_205' incorporates:
     *  SignalConversion generated from: '<S1009>/HTRBV_Err_Voltage_INIT'
     *  SignalConversion generated from: '<S208>/HTRBV_Err_Voltage_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTRBV_Err_Voltage_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_Err_Volta);

    /* Merge: '<Root>/Merge_157' incorporates:
     *  SignalConversion generated from: '<S208>/HTRBV_ResponseError_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTRBV_ResponseError_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_ResponseE);

    /* Merge: '<Root>/Merge_188' incorporates:
     *  SignalConversion generated from: '<S208>/HTRBV_SelfCalReq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HTRBV_SelfCalReq_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_SelfCalRe);

    /* Merge: '<Root>/Merge_211' incorporates:
     *  SignalConversion generated from: '<S1009>/HTRBV_SystemState_INIT'
     *  SignalConversion generated from: '<S208>/HTRBV_SystemState_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_HTRBV_SystemState_write_IRV
        (TAIR_ac_B.OutportBufferForHTRBV_SystemSta);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S208>/HT_CabVlvSts_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HT_CabVlvStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForHT_CabVlvSts_FA);

    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S208>/HT_CabVlvSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_HT_CabVlvSts_write_IRV
        (TAIR_ac_B.OutportBufferForHT_CabVlvSts_IN);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S208>/HVAC_Cabin_CurrentReq_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_ECVD_HVACCabinReqFA_write_IRV
        (TAIR_ac_B.OutportBufferForHVAC_Cabin_Cu_f);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S208>/HVAC_Cabin_CurrentReq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_I_ECVD_HVACCabinReq_write_IRV
        (TAIR_ac_B.OutportBufferForHVAC_Cabin_Curr);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S208>/HVAC_ECVD_CurrentAct_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_ECVD_HVACCurrentActFA_write_IRV
        (TAIR_ac_B.OutportBufferForHVAC_ECVD_Cur_g);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S208>/HVAC_ECVD_CurrentAct_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_I_ECVD_HVACCurrentAct_write_IRV
        (TAIR_ac_B.OutportBufferForHVAC_ECVD_Curre);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S208>/HghRfrgtPresFailSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_HghRfrgtPresFailStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForHghRfrgtPresFai);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S208>/HtrCoreTmp_Tgt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_HtrCoreTmp_Tgt_write_IRV
        (TAIR_ac_B.OutportBufferForHtrCoreTmp_Tgt_);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_ActlPstn_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_LTR_BypsVlv_ActlPstnFA_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_A_g);

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_ActlPstn_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_LTR_BypsVlv_ActlPstn_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_Act);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_CalSts_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_LTR_BypsVlv_CalStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_Cal);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S1009>/LTR_BypsVlv_CalSts_INIT'
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_CalSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_LTR_BypsVlv_CalSts_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_C_b);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_Cmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_LTR_BypsVlv_Cmd_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_Cmd);

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_ErrMsgs_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_LTR_BypsVlv_ErrMsgsFA_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_g);

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_ErrMsgs_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_y_LTR_BypsVlv_ErrMsgs_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_Err);

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_ErrSts_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_LTR_BypsVlv_ErrStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_o);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrSts_INIT'
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_ErrSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_LTR_BypsVlv_ErrSts_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_p);

    /* Merge: '<Root>/Merge_127' incorporates:
     *  SignalConversion generated from: '<S1009>/LTR_BypsVlv_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_LTR_BypsVlv_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_IO_);

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_MtrVltg_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_LTR_BypsVlv_MtrVltgFA_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_M_c);

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_MtrVltg_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_LTR_BypsVlv_MtrVltg_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_Mtr);

    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S208>/LTR_BypsVlv_RsErr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_LTR_BypsVlv_RsErr_write_IRV
        (TAIR_ac_B.OutportBufferForLTR_BypsVlv_RsE);

    /* Merge: '<Root>/Merge_129' incorporates:
     *  SignalConversion generated from: '<S1009>/LT_SO_Vlv_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/LT_SO_Vlv_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_LT_Shtoff_VlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForLT_SO_Vlv_IO_Cn);

    /* Merge: '<Root>/Merge_128' incorporates:
     *  SignalConversion generated from: '<S208>/LT_Shtoff_VlvCmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_LT_Shtoff_VlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForLT_Shtoff_VlvCm);

    /* Merge: '<Root>/Merge_165' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_BoardTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_OEXV_BoardTemp_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_BoardTemp_);

    /* Merge: '<Root>/Merge_172' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_CalRq_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_OEXV_CalRq_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_CalRq_INIT);

    /* Merge: '<Root>/Merge_170' incorporates:
     *  SignalConversion generated from: '<S1009>/OEXV_CalStat_INIT'
     *  SignalConversion generated from: '<S208>/OEXV_CalStat_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_OEXV_CalStat_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_CalStat_IN);

    /* Merge: '<Root>/Merge_130' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_CalibStrt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_DVC_OEXV_Calibration_Start_IRV
        (TAIR_ac_B.OutportBufferForOEXV_CalibStrt_);

    /* Merge: '<Root>/Merge_132' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_Cmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_Pct_OEXV_VlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_Cmd_INIT);

    /* Merge: '<Root>/Merge_158' incorporates:
     *  SignalConversion generated from: '<S1009>/OEXV_Err_INIT'
     *  SignalConversion generated from: '<S208>/OEXV_Err_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_OEXV_Err_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_Err_INIT);

    /* Merge: '<Root>/Merge_131' incorporates:
     *  SignalConversion generated from: '<S1009>/OEXV_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/OEXV_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_OEXV_VlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_IO_CntrlSt);

    /* Merge: '<Root>/Merge_169' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_PosAct_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_OEXV_PosActFA_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_PosAct_FA_);

    /* Merge: '<Root>/Merge_167' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_PosAct_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_OEXV_PosAct_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_PosAct_INI);

    /* Merge: '<Root>/Merge_159' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_RefPress_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_OEXV_RefPressFA_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_RefPress_F);

    /* Merge: '<Root>/Merge_175' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_RefPress_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_p_OEXV_RefPress_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_RefPress_I);

    /* Merge: '<Root>/Merge_162' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_RefTemp_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_OEXV_RefTempFA_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_RefTemp_FA);

    /* Merge: '<Root>/Merge_161' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_RefTemp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_OEXV_RefTemp_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_RefTemp_IN);

    /* Merge: '<Root>/Merge_173' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_RspErr_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_OEXV_RspErr_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_RspErr_INI);

    /* Merge: '<Root>/Merge_174' incorporates:
     *  SignalConversion generated from: '<S1009>/OEXV_Sts_INIT'
     *  SignalConversion generated from: '<S208>/OEXV_Sts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_OEXV_Sts_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_Sts_INIT);

    /* Merge: '<Root>/Merge_160' incorporates:
     *  SignalConversion generated from: '<S208>/OEXV_SupplyVolt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_U_OEXV_SupplyVolt_write_IRV
        (TAIR_ac_B.OutportBufferForOEXV_SupplyVolt);

    /* Merge: '<Root>/Merge_213' incorporates:
     *  SignalConversion generated from: '<S208>/RearCabinFanSts_FA_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_RearCabinFanStsFA_write_IRV
        (TAIR_ac_B.OutportBufferForRearCabinFanS_a);

    /* Merge: '<Root>/Merge_214' incorporates:
     *  SignalConversion generated from: '<S208>/RearCabinFanSts_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_y_RearCabinFanSts_write_IRV
        (TAIR_ac_B.OutportBufferForRearCabinFanSts);

    /* Merge: '<Root>/Merge_155' incorporates:
     *  SignalConversion generated from: '<S208>/RearDefrostStsFA_INIT'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_EBL_StatFA_write_IRV
        (TAIR_ac_B.OutportBufferForRearDefrostStsF);

    /* Merge: '<Root>/Merge_154' incorporates:
     *  SignalConversion generated from: '<S1007>/RearDefrostSts_INIT'
     *  SignalConversion generated from: '<S208>/RearDefrostSts_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_RearDefrostSts_write_IRV
        (TAIR_ac_B.OutportBufferForRearDefrostSts_);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S208>/RespErr_EAC_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_RespErr_EAC_write_IRV
        (TAIR_ac_B.OutportBufferForRespErr_EAC_INI);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S208>/RrBlwrCmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_Pct_RrBlwrCmd_write_IRV
        (TAIR_ac_B.OutportBufferForRrBlwrCmd_INIT);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S1009>/SO_Vlv_IO_CntrlSt_INIT'
     *  SignalConversion generated from: '<S208>/SO_Vlv_IO_CntrlSt_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_e_HT_Shtoff_VlvCmd_IO_CntrlSt_write_IRV
        (TAIR_ac_B.OutportBufferForSO_Vlv_IO_Cntrl);

    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S208>/Shtoff_VlvCmd_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIF_b_HT_Shtoff_VlvCmd_write_IRV
        (TAIR_ac_B.OutportBufferForShtoff_VlvCmd_I);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S208>/VhIntTmp_FA_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_VhIntTmpFA_write_IRV
        (TAIR_ac_B.OutportBufferForVhIntTmp_FA_INI);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S208>/VhIntTmp_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_T_VhIntTmp_write_IRV
        (TAIR_ac_B.OutportBufferForVhIntTmp_INIT);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S208>/WinshldDfrst_INIT_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_b_WinshldDfrst_write_IRV
        (TAIR_ac_B.OutportBufferForWinshldDfrst_IN);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S1005>/e_AGS2_CurrPos_Init'
     *  SignalConversion generated from: '<S208>/e_AGS2_CurrPos_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_AGS2_CurrPos_write_IRV
        (TAIR_ac_B.OutportBufferFore_AGS2_CurrPos_);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S1005>/e_AGS_CurrPos_Init'
     *  SignalConversion generated from: '<S208>/e_AGS_CurrPos_Init_write'
     * */
    Rte_IrvWrite_TAIR_PwrOn_VeTAIR_e_AGS_CurrPos_write_IRV
        (TAIR_ac_B.OutportBufferFore_AGS_CurrPos_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, TAIR_CODE) Routine_RC130D_EXVValCal(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC130D_EXVValCal_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC130D_EXVValCal_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130D_EXVValCal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EXV_Calibration_Start'
     */
    /* Merge: '<Root>/Merge_117' incorporates:
     *  Constant: '<S431>/Constant'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC130D_EXVValCal_Op'
     *  RelationalOperator: '<S196>/Equal'
     *  SignalConversion generated from: '<S196>/VeTAIF_b_DVC_EXV_Calibration_Start'
     */
    Rte_IrvWrite_Routine_RC130D_EXVValCal_VeTAIF_b_DVC_EXV_Calibration_Start_IRV
        (((uint32)tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130D_EXVValCal' */
}

/* Output function */
FUNC(void, TAIR_CODE) Routine_RC1313_ActGriShu1Cal(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1313_ActGriShu1Cal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AGS1_Calibration_Start'
     */
    /* Merge: '<Root>/Merge_72' incorporates:
     *  Constant: '<S398>/Constant'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1313_ActGriShu1Cal_Op'
     *  RelationalOperator: '<S187>/Equal'
     *  SignalConversion generated from: '<S187>/VeTAIF_b_DVC_AGS1_Calibration_Start_write'
     */
    Rte_IrvWrite_Routine_RC1313_ActGriShu1Cal_VeTAIF_b_DVC_AGS1_Calibration_Start_write_IRV
        (((uint32)tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1313_ActGriShu1Cal' */
}

/* Output function */
FUNC(void, TAIR_CODE) Routine_RC1314_ActGriShu2Cal(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1314_ActGriShu2Cal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_AGS2_Calibration_Start'
     */
    /* Merge: '<Root>/Merge_69' incorporates:
     *  Constant: '<S399>/Constant'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1314_ActGriShu2Cal_Op'
     *  RelationalOperator: '<S188>/Equal'
     *  SignalConversion generated from: '<S188>/VeTAIF_b_DVC_AGS2_Calibration_Start_write'
     */
    Rte_IrvWrite_Routine_RC1314_ActGriShu2Cal_VeTAIF_b_DVC_AGS2_Calibration_Start_write_IRV
        (((uint32)tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1314_ActGriShu2Cal' */
}

/* Output function */
FUNC(void, TAIR_CODE) Routine_RC1332_ACRefExpValActCCal(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1332_ACRefExpValActCCal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_EEXV_Calibration_Start'
     */
    /* Merge: '<Root>/Merge_114' incorporates:
     *  Constant: '<S425>/Constant'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1332_ACRefExpValActCCal_Op'
     *  RelationalOperator: '<S194>/Equal'
     *  SignalConversion generated from: '<S194>/VeTAIF_b_DVC_EEXV_Calibration_Start'
     */
    Rte_IrvWrite_Routine_RC1332_ACRefExpValActCCal_VeTAIF_b_DVC_EEXV_Calibration_Start_IRV
        (((uint32)tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1332_ACRefExpValActCCal' */
}

/* Output function */
FUNC(void, TAIR_CODE) Routine_RC1333_ACRefExpValActDCal(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1333_ACRefExpValActDCal' incorporates:
     *  SubSystem: '<Root>/Runnable_DVC_OEXV_Calibration_Start'
     */
    /* Merge: '<Root>/Merge_130' incorporates:
     *  Constant: '<S462>/Constant'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1333_ACRefExpValActDCal_Op'
     *  RelationalOperator: '<S203>/Equal'
     *  SignalConversion generated from: '<S203>/VeTAIF_b_DVC_OEXV_Calibration_Start'
     */
    Rte_IrvWrite_Routine_RC1333_ACRefExpValActDCal_VeTAIF_b_DVC_OEXV_Calibration_Start_IRV
        (((uint32)tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1333_ACRefExpValActDCal' */
}

/* Model initialize function */
FUNC(void, TAIR_CODE) TAIR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_TAIR_12

        TAIR_ac_B.LeTAIR_e_OEXV_CalStat_out = CeTAIR_e_EXV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_TAIR_13

        TAIR_ac_B.LeTAIR_e_EXV_CalStat_out = CeTAIR_e_EXV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_TAIR_11

        TAIR_ac_B.LeTAIR_e_EEXV_CalStat_out = CeTAIR_e_EXV_Calibration_Complete;

#endif

        TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_Ca =
            CeTAIR_e_EXV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_C =
            CeTAIR_e_EXV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_C =
            CeTAIR_e_EXV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForEXV_CalStat_INI =
            CeTAIR_e_EXV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForEEXV_CalStat_IN =
            CeTAIR_e_EXV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForOEXV_CalStat_IN =
            CeTAIR_e_EXV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForVeTAIR_e_DVC_HT =
            CeTAIR_e_DVC_HTCV_Calibration_Start;
        TAIR_ac_B.OutportBufferForHTCV_CalibStrt_ =
            CeTAIR_e_DVC_HTCV_Calibration_Start;

#if Rte_SysCon_Variant_TAIR_9

        TAIR_ac_B.LeTAIR_e_LTR_BypsVlv_CalSts_out =
            CeTAIR_e_CPV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_TAIR_10

        TAIR_ac_B.LeTAIR_e_HTL_BypsVlv_CalSts_out =
            CeTAIR_e_CPV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_TAIR_14

        TAIR_ac_B.LeTAIR_e_FrWyVlv_CalSts_out =
            CeTAIR_e_CPV_Calibration_Complete;

#endif

#if Rte_SysCon_Variant_TAIR_15

        TAIR_ac_B.LeTAIR_e_CPV2_CalSts_out = CeTAIR_e_CPV_Calibration_Complete;

#endif

        TAIR_ac_B.OutportBufferForVeTAIR_e_FrWy_n =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForVeTAIR_e_LTR__p =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForVeTAIR_e_HTL__j =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForVeTAIR_e_CPV2_C =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForFrWyVlv_CalSts_ =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForLTR_BypsVlv_C_b =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForHTL_BypsVlv_C_l =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForCPV2_CalSts_INI =
            CeTAIR_e_CPV_Calibration_Complete;
        TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Ca = CeTAIR_e_AGS_NotCalibrated;
        TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_C = CeTAIR_e_AGS_NotCalibrated;
        TAIR_ac_B.OutportBufferForAGS_Calibrati_n = CeTAIR_e_AGS_NotCalibrated;
        TAIR_ac_B.OutportBufferForAGS2_Calibrat_c = CeTAIR_e_AGS_NotCalibrated;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TAIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Fan_INIT_Cals'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1006>/ECM_RadFanReq_INIT' incorporates:
     *  Constant: '<S1026>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_RadFanReq_I = KeTAIR_Pct_ECM_RadFanReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1006>/ECM_RadFanReq_FA_INIT' incorporates:
     *  Constant: '<S1027>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_RadFanReq_F = KeTAIR_b_ECM_RadFanReq_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1006>/DVC_RadFan_IO_INIT' incorporates:
     *  Constant: '<S1028>/Calib'
     */
    TAIR_ac_B.OutportBufferForDVC_RadFan_IO_I = KeTAIR_e_DVC_RadFan_IO_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1006>/DVC_RadFan_Cmd_INIT' incorporates:
     *  Constant: '<S1025>/Calib'
     */
    TAIR_ac_B.OutportBufferForDVC_RadFan_Cmd_ = KeTAIR_Pct_DVC_RadFan_Cmd_INIT;

    /* SystemInitialize for S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Initialize_inputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1007>/ACCElecCurr_INIT' incorporates:
     *  Constant: '<S1049>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCElecCurr_INI = KeTAIR_I_ACCElecCurr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/ACCompElec_Pwr_FA_INIT' incorporates:
     *  Constant: '<S1054>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCompElec_Pw_o = KeTAIR_b_ACCompElec_Pwr_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/ACCompElec_Pwr_INIT' incorporates:
     *  Constant: '<S1050>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCompElec_Pwr_ = KeTAIR_P_ACCompElec_Pwr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/ACCompReq_INIT' incorporates:
     *  Constant: '<S1055>/Calib'
     */
    TAIR_ac_B.OutportBufferForACCompReq_INIT = KeTAIR_b_ACCompReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompFltStat_INIT' incorporates:
     *  Constant: '<S1063>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompFltStat_INI = KeTAIR_e_CompFltStat_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompHVInput_FA_INIT' incorporates:
     *  Constant: '<S1056>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompHVInput_FA_ = KeTAIR_b_CompHVInput_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompHVInput_INIT' incorporates:
     *  Constant: '<S1053>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompHVInput_INI = KeTAIR_U_CompHVInput_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompSpdFdb_FA_INIT' incorporates:
     *  Constant: '<S1057>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdFdb_FA_I = KeTAIR_b_CompSpdFdb_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompSpdFdb_INIT' incorporates:
     *  Constant: '<S1065>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdFdb_INIT = KeTAIR_n_CompSpdFdb_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompSpdIncrReq_INIT' incorporates:
     *  Constant: '<S1058>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdIncrReq_ = KeTAIR_b_CompSpdIncrReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompStat_INIT' incorporates:
     *  Constant: '<S1064>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompStat_INIT = KeTAIR_e_CompStat_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtBlwrCmd_FA_INIT' incorporates:
     *  Constant: '<S1059>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtBlwrCmd_FA_IN = KeTAIR_b_FtBlwrCmd_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtBlwrCmd_INIT' incorporates:
     *  Constant: '<S1051>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtBlwrCmd_INIT = KeTAIR_Pct_FtBlwrCmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/HghRfrgtPresFailSts_INIT' incorporates:
     *  Constant: '<S1060>/Calib'
     */
    TAIR_ac_B.OutportBufferForHghRfrgtPresFai =
        KeTAIR_b_HghRfrgtPresFailSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/RespErr_EAC_INIT' incorporates:
     *  Constant: '<S1061>/Calib'
     */
    TAIR_ac_B.OutportBufferForRespErr_EAC_INI = KeTAIR_b_RespErr_EAC_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/RrBlwrCmd_INIT' incorporates:
     *  Constant: '<S1052>/Calib'
     */
    TAIR_ac_B.OutportBufferForRrBlwrCmd_INIT = KeTAIR_Pct_RrBlwrCmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/WinshldDfrst_INIT' incorporates:
     *  Constant: '<S1062>/Calib'
     */
    TAIR_ac_B.OutportBufferForWinshldDfrst_IN = KeTAIR_b_WinshldDfrst_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompBoardTemp_FA_INIT' incorporates:
     *  Constant: '<S1041>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompBoardTemp_F = KeTAIR_b_CompBoardTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompBoardTemp_INIT' incorporates:
     *  Constant: '<S1034>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompBoardTemp_I = KeTAIR_T_CompBoardTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompIGBTTemp_FA_INIT' incorporates:
     *  Constant: '<S1042>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompIGBTTemp_FA = KeTAIR_b_CompIGBTTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompIGBTTemp_INIT' incorporates:
     *  Constant: '<S1035>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompIGBTTemp_IN = KeTAIR_T_CompIGBTTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtEvapTmp_FA_INIT' incorporates:
     *  Constant: '<S1043>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_FA_IN = KeTAIR_b_FtEvapTmp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtEvapTmp_INIT' incorporates:
     *  Constant: '<S1036>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_INIT = KeTAIR_T_FtEvapTmp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtEvapTmp_P1C_FA_INIT' incorporates:
     *  Constant: '<S1044>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_P1C_F = KeTAIR_b_FtEvapTmp_P1C_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtEvapTmp_P1C_INIT' incorporates:
     *  Constant: '<S1037>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_P1C_I = KeTAIR_T_FtEvapTmp_P1C_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtEvapTmp_Tgt_FA_INIT' incorporates:
     *  Constant: '<S1045>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_Tgt_F = KeTAIR_b_FtEvapTmp_Tgt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/FtEvapTmp_Tgt_INIT' incorporates:
     *  Constant: '<S1038>/Calib'
     */
    TAIR_ac_B.OutportBufferForFtEvapTmp_Tgt_I = KeTAIR_T_FtEvapTmp_Tgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/HtrCoreTmp_Tgt_INIT' incorporates:
     *  Constant: '<S1039>/Calib'
     */
    TAIR_ac_B.OutportBufferForHtrCoreTmp_Tgt_ = KeTAIR_T_HtrCoreTmp_Tgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/VhIntTmp_FA_INIT' incorporates:
     *  Constant: '<S1046>/Calib'
     */
    TAIR_ac_B.OutportBufferForVhIntTmp_FA_INI = KeTAIR_b_VhIntTmp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/VhIntTmp_INIT' incorporates:
     *  Constant: '<S1040>/Calib'
     */
    TAIR_ac_B.OutportBufferForVhIntTmp_INIT = KeTAIR_T_VhIntTmp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompSpdTgt_INIT' incorporates:
     *  Constant: '<S1048>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdTgt_INIT = KeTAIR_n_DVC_CompSpdTgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/CompSpdTgt_IO_Cnt_INIT' incorporates:
     *  Constant: '<S1047>/Calib'
     */
    TAIR_ac_B.OutportBufferForCompSpdTgt_IO_C = KeTAIR_e_CompSpdTgt_IO_Cnt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/ECM_AC_ClutchStsFA_INIT' incorporates:
     *  Constant: '<S1072>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_AC_ClutchSt = KeTAIR_b_ECM_AC_ClutchStsFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/ECM_AC_ClutchSts_INIT' incorporates:
     *  Constant: '<S1075>/Calib'
     */
    TAIR_ac_B.OutportBufferForECM_AC_Clutch_f = KeTAIR_e_ECM_AC_ClutchSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/HVAC_Cabin_CurrentReq_FA_INIT' incorporates:
     *  Constant: '<S1073>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_Cabin_Cu_f =
        KeTAIR_b_HVAC_Cabin_CurrentReq_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/HVAC_Cabin_CurrentReq_INIT' incorporates:
     *  Constant: '<S1070>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_Cabin_Curr =
        KeTAIR_I_HVAC_Cabin_CurrentReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/HVAC_ECVD_CurrentAct_FA_INIT' incorporates:
     *  Constant: '<S1074>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_ECVD_Cur_g =
        KeTAIR_b_HVAC_ECVD_CurrentAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/HVAC_ECVD_CurrentAct_INIT' incorporates:
     *  Constant: '<S1071>/Calib'
     */
    TAIR_ac_B.OutportBufferForHVAC_ECVD_Curre =
        KeTAIR_I_HVAC_ECVD_CurrentAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/RearCabinFanSts_FA_INIT' incorporates:
     *  Constant: '<S1066>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearCabinFanS_a = KeTAIR_b_RearCabinFanSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/RearCabinFanSts_INIT' incorporates:
     *  Constant: '<S1069>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearCabinFanSts = KeTAIR_y_RearCabinFanSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/RearDefrostStsFA_INIT' incorporates:
     *  Constant: '<S1067>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearDefrostStsF = KeTAIR_b_RearDefrostStsFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/RearDefrostSts_INIT' incorporates:
     *  Constant: '<S1068>/Calib'
     */
    TAIR_ac_B.OutportBufferForRearDefrostSts_ = KeTAIR_e_RearDefrostSts_INIT;

    /* SystemInitialize for S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Valve_INIT_Cals'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1009>/HT_CabVlvSts_FA_INIT' incorporates:
     *  Constant: '<S1130>/Calib'
     */
    TAIR_ac_B.OutportBufferForHT_CabVlvSts_FA = KeTAIR_b_HT_CabVlvSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HT_CabVlvSts_INIT' incorporates:
     *  Constant: '<S1129>/Calib'
     */
    TAIR_ac_B.OutportBufferForHT_CabVlvSts_IN = KeTAIR_U_HT_CabVlvSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV_Cmd_INIT' incorporates:
     *  Constant: '<S1131>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV_Cmd_INIT = KeTAIR_Pct_CPV_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1145>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV_IO_CntrlSt_ = KeTAIR_e_CPV_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CabVlvCmd_INIT' incorporates:
     *  Constant: '<S1135>/Calib'
     */
    TAIR_ac_B.OutportBufferForCabVlvCmd_INIT = KeTAIR_Pct_HT_CabVlvCmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CabVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1152>/Calib'
     */
    TAIR_ac_B.OutportBufferForCabVlv_IO_Cntrl =
        KeTAIR_e_HT_CabVlvCmd_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/ChilRgtVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1146>/Calib'
     */
    TAIR_ac_B.OutportBufferForChilRgtVlv_IO_C =
        KeTAIR_e_ChilRgtVlvCmd_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/ChilRgt_VlvCmd_INIT' incorporates:
     *  Constant: '<S1138>/Calib'
     */
    TAIR_ac_B.OutportBufferForChilRgt_VlvCmd_ = KeTAIR_b_ChilRgtVlvCmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1139>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_CalibStrt_ = KeTAIR_b_EEXV_CalibStrt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_Cmd_INIT' incorporates:
     *  Constant: '<S1132>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_Cmd_INIT = KeTAIR_Pct_EEXV_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1147>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_IO_CntrlSt = KeTAIR_e_EEXV_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1140>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_CalibStrt_I = KeTAIR_b_EXV_CalibStrt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_Cmd_INIT' incorporates:
     *  Constant: '<S1133>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_Cmd_INIT = KeTAIR_Pct_EXV_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1148>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_IO_CntrlSt_ = KeTAIR_e_EXV_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrtRgtVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1149>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrtRgtVlv_IO_Cn =
        KeTAIR_e_FrtRgtVlvCmd_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrtRgt_VlvCmd_INIT' incorporates:
     *  Constant: '<S1141>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrtRgt_VlvCmd_I = KeTAIR_b_FrtRgtVlvCmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTCV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1150>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTCV_CalibStrt_ = KeTAIR_e_HTCV_CalibStrt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_Cmd_INIT' incorporates:
     *  Constant: '<S1134>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Cmd = KeTAIR_Pct_HTL_BypsVlv_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1151>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_IO_ =
        KeTAIR_e_HTL_BypsVlv_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_Cmd_INIT' incorporates:
     *  Constant: '<S1136>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Cmd = KeTAIR_Pct_LTR_BypsVlv_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1154>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_IO_ =
        KeTAIR_e_LTR_BypsVlv_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LT_SO_Vlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1155>/Calib'
     */
    TAIR_ac_B.OutportBufferForLT_SO_Vlv_IO_Cn =
        KeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LT_Shtoff_VlvCmd_INIT' incorporates:
     *  Constant: '<S1143>/Calib'
     */
    TAIR_ac_B.OutportBufferForLT_Shtoff_VlvCm = KeTAIR_b_LT_Shtoff_VlvCmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_CalibStrt_INIT' incorporates:
     *  Constant: '<S1144>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_CalibStrt_ = KeTAIR_b_OEXV_CalibStrt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_Cmd_INIT' incorporates:
     *  Constant: '<S1137>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_Cmd_INIT = KeTAIR_Pct_OEXV_Cmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1156>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_IO_CntrlSt = KeTAIR_e_OEXV_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/SO_Vlv_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1153>/Calib'
     */
    TAIR_ac_B.OutportBufferForSO_Vlv_IO_Cntrl =
        KeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/Shtoff_VlvCmd_INIT' incorporates:
     *  Constant: '<S1142>/Calib'
     */
    TAIR_ac_B.OutportBufferForShtoff_VlvCmd_I = KeTAIR_b_HT_Shtoff_VlvCmd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_CalSts_INIT' incorporates:
     *  Constant: '<S1175>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_CalSts_ = KeTAIR_e_FrWyVlv_CalSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1173>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_ErrMs_g = KeTAIR_b_FrWyVlv_ErrMsgs_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1177>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_ErrMsgs = KeTAIR_y_FrWyVlv_ErrMsgs_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_ErrSts_INIT' incorporates:
     *  Constant: '<S1176>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_ErrSts_ = KeTAIR_e_FrWyVlv_ErrSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_MtrVltg_INIT' incorporates:
     *  Constant: '<S1171>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_MtrVltg = KeTAIR_U_FrWyVlv_MtrVltg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_Pstn_FA_INIT' incorporates:
     *  Constant: '<S1172>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_Pstn_FA =
        KeTAIR_b_FrWyVlv_ActlPstn_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_Pstn_INIT' incorporates:
     *  Constant: '<S1170>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_Pstn_IN = KeTAIR_Pct_FrWyVlv_ActlPstn_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/FrWyVlv_RsErr_INIT' incorporates:
     *  Constant: '<S1174>/Calib'
     */
    TAIR_ac_B.OutportBufferForFrWyVlv_RsErr_I = KeTAIR_b_FrWyVlv_RsErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_BoardTemp_INIT' incorporates:
     *  Constant: '<S1087>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_BoardTemp_I = KeTAIR_T_EXV_BoardTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_CalRq_INIT' incorporates:
     *  Constant: '<S1090>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_CalRq_INIT = KeTAIR_b_EXV_CalRq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_CalStat_INIT' incorporates:
     *  Constant: '<S1095>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_CalStat_INI = KeTAIR_e_EXV_CalStat_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_Err_INIT' incorporates:
     *  Constant: '<S1096>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_Err_INIT = KeTAIR_e_EXV_Err_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_PosAct_FA_INIT' incorporates:
     *  Constant: '<S1091>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_PosAct_FA_I = KeTAIR_b_EXV_PosAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_PosAct_INIT' incorporates:
     *  Constant: '<S1086>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_PosAct_INIT = KeTAIR_Pct_EXV_PosAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_RefPress_FA_INIT' incorporates:
     *  Constant: '<S1092>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefPress_FA = KeTAIR_b_EXV_RefPress_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_RefPress_INIT' incorporates:
     *  Constant: '<S1098>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefPress_IN = KeTAIR_p_EXV_RefPress_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_RefTemp_FA_INIT' incorporates:
     *  Constant: '<S1093>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefTemp_FA_ = KeTAIR_b_EXV_RefTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_RefTemp_INIT' incorporates:
     *  Constant: '<S1088>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RefTemp_INI = KeTAIR_T_EXV_RefTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_RspErr_INIT' incorporates:
     *  Constant: '<S1094>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_RspErr_INIT = KeTAIR_b_EXV_RspErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_Sts_INIT' incorporates:
     *  Constant: '<S1097>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_Sts_INIT = KeTAIR_e_EXV_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EXV_SupplyVolt_INIT' incorporates:
     *  Constant: '<S1089>/Calib'
     */
    TAIR_ac_B.OutportBufferForEXV_SupplyVolt_ = KeTAIR_U_EXV_SupplyVolt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_ActlPstn_FA_INIT' incorporates:
     *  Constant: '<S1101>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_A_g =
        KeTAIR_b_LTR_BypsVlv_ActlPstn_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_ActlPstn_INIT' incorporates:
     *  Constant: '<S1099>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Act =
        KeTAIR_Pct_LTR_BypsVlv_ActlPstn_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_CalSts_FA_INIT' incorporates:
     *  Constant: '<S1102>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Cal =
        KeTAIR_b_LTR_BypsVlv_CalSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_CalSts_INIT' incorporates:
     *  Constant: '<S1107>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_C_b = KeTAIR_e_LTR_BypsVlv_CalSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1103>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_g =
        KeTAIR_b_LTR_BypsVlv_ErrMsgs_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1109>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Err =
        KeTAIR_y_LTR_BypsVlv_ErrMsgs_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrSts_FA_INIT' incorporates:
     *  Constant: '<S1104>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_o =
        KeTAIR_b_LTR_BypsVlv_ErrSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_ErrSts_INIT' incorporates:
     *  Constant: '<S1108>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_E_p = KeTAIR_e_LTR_BypsVlv_ErrSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_MtrVltg_FA_INIT' incorporates:
     *  Constant: '<S1105>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_M_c =
        KeTAIR_b_LTR_BypsVlv_MtrVltg_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_MtrVltg_INIT' incorporates:
     *  Constant: '<S1100>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_Mtr =
        KeTAIR_U_LTR_BypsVlv_MtrVltg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/LTR_BypsVlv_RsErr_INIT' incorporates:
     *  Constant: '<S1106>/Calib'
     */
    TAIR_ac_B.OutportBufferForLTR_BypsVlv_RsE = KeTAIR_b_LTR_BypsVlv_RsErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_ActlPstn_FA_INIT' incorporates:
     *  Constant: '<S1120>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_A_f =
        KeTAIR_b_HTL_BypsVlv_ActlPstn_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_ActlPstn_INIT' incorporates:
     *  Constant: '<S1118>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Act =
        KeTAIR_Pct_HTL_BypsVlv_ActlPstn_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_CalSts_FA_INIT' incorporates:
     *  Constant: '<S1121>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Cal =
        KeTAIR_b_HTL_BypsVlv_CalSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_CalSts_INIT' incorporates:
     *  Constant: '<S1126>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_C_l = KeTAIR_e_HTL_BypsVlv_CalSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1122>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_E_o =
        KeTAIR_b_HTL_BypsVlv_ErrMsgs_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1128>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Err =
        KeTAIR_y_HTL_BypsVlv_ErrMsgs_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrSts_FA_INIT' incorporates:
     *  Constant: '<S1123>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_E_d =
        KeTAIR_b_HTL_BypsVlv_ErrSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_ErrSts_INIT' incorporates:
     *  Constant: '<S1127>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv__dp = KeTAIR_e_HTL_BypsVlv_ErrSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_MtrVltg_FA_INIT' incorporates:
     *  Constant: '<S1124>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_M_f =
        KeTAIR_b_HTL_BypsVlv_MtrVltg_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_MtrVltg_INIT' incorporates:
     *  Constant: '<S1119>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_Mtr =
        KeTAIR_U_HTL_BypsVlv_MtrVltg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTL_BypsVlv_RsErr_INIT' incorporates:
     *  Constant: '<S1125>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTL_BypsVlv_RsE = KeTAIR_b_HTL_BypsVlv_RsErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_BoardTemp_INIT' incorporates:
     *  Constant: '<S1158>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_BoardTemp_ = KeTAIR_T_EEXV_BoardTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_CalRq_INIT' incorporates:
     *  Constant: '<S1161>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_CalRq_INIT = KeTAIR_b_EEXV_CalRq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_CalStat_INIT' incorporates:
     *  Constant: '<S1166>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_CalStat_IN = KeTAIR_e_EEXV_CalStat_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_Err_INIT' incorporates:
     *  Constant: '<S1167>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_Err_INIT = KeTAIR_e_EEXV_Err_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_PosAct_FA_INIT' incorporates:
     *  Constant: '<S1162>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_PosAct_FA_ = KeTAIR_b_EEXV_PosAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_PosAct_INIT' incorporates:
     *  Constant: '<S1157>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_PosAct_INI = KeTAIR_Pct_EEXV_PosAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_RefPress_FA_INIT' incorporates:
     *  Constant: '<S1163>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefPress_F = KeTAIR_b_EEXV_RefPress_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_RefPress_INIT' incorporates:
     *  Constant: '<S1169>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefPress_I = KeTAIR_p_EEXV_RefPress_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_RefTemp_FA_INIT' incorporates:
     *  Constant: '<S1164>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefTemp_FA = KeTAIR_b_EEXV_RefTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_RefTemp_INIT' incorporates:
     *  Constant: '<S1159>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RefTemp_IN = KeTAIR_T_EEXV_RefTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_RspErr_INIT' incorporates:
     *  Constant: '<S1165>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_RspErr_INI = KeTAIR_b_EEXV_RspErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_Sts_INIT' incorporates:
     *  Constant: '<S1168>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_Sts_INIT = KeTAIR_e_EEXV_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/EEXV_SupplyVolt_INIT' incorporates:
     *  Constant: '<S1160>/Calib'
     */
    TAIR_ac_B.OutportBufferForEEXV_SupplyVolt = KeTAIR_U_EEXV_SupplyVolt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_BoardTemp_INIT' incorporates:
     *  Constant: '<S1192>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_BoardTemp_ = KeTAIR_T_OEXV_BoardTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_CalRq_INIT' incorporates:
     *  Constant: '<S1195>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_CalRq_INIT = KeTAIR_b_OEXV_CalRq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_CalStat_INIT' incorporates:
     *  Constant: '<S1200>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_CalStat_IN = KeTAIR_e_OEXV_CalStat_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_Err_INIT' incorporates:
     *  Constant: '<S1201>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_Err_INIT = KeTAIR_e_OEXV_Err_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_PosAct_FA_INIT' incorporates:
     *  Constant: '<S1196>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_PosAct_FA_ = KeTAIR_b_OEXV_PosAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_PosAct_INIT' incorporates:
     *  Constant: '<S1191>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_PosAct_INI = KeTAIR_Pct_OEXV_PosAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_RefPress_FA_INIT' incorporates:
     *  Constant: '<S1197>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefPress_F = KeTAIR_b_OEXV_RefPress_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_RefPress_INIT' incorporates:
     *  Constant: '<S1203>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefPress_I = KeTAIR_p_OEXV_RefPress_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_RefTemp_FA_INIT' incorporates:
     *  Constant: '<S1198>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefTemp_FA = KeTAIR_b_OEXV_RefTemp_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_RefTemp_INIT' incorporates:
     *  Constant: '<S1193>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RefTemp_IN = KeTAIR_T_OEXV_RefTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_RspErr_INIT' incorporates:
     *  Constant: '<S1199>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_RspErr_INI = KeTAIR_b_OEXV_RspErr_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_Sts_INIT' incorporates:
     *  Constant: '<S1202>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_Sts_INIT = KeTAIR_e_OEXV_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/OEXV_SupplyVolt_INIT' incorporates:
     *  Constant: '<S1194>/Calib'
     */
    TAIR_ac_B.OutportBufferForOEXV_SupplyVolt = KeTAIR_U_OEXV_SupplyVolt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_ActuatorPosAct_FA_INIT' incorporates:
     *  Constant: '<S1182>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Actuato_h =
        KeTAIR_b_HTRBV_ActuatorPosAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_ActuatorPosAct_INIT' incorporates:
     *  Constant: '<S1178>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ActuatorP =
        KeTAIR_Pct_HTRBV_ActuatorPosAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_ActuatorPosTrgt_INIT' incorporates:
     *  Constant: '<S1179>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Actuato_e =
        KeTAIR_Pct_HTRBV_ActuatorPosTrgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_EcuTemp_INIT' incorporates:
     *  Constant: '<S1180>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_EcuTemp_I = KeTAIR_T_HTRBV_EcuTemp_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_EcuVoltage_INIT' incorporates:
     *  Constant: '<S1181>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_EcuVoltag = KeTAIR_U_HTRBV_EcuVoltage_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_ErrLinCom_INIT' incorporates:
     *  Constant: '<S1185>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ErrLinCom = KeTAIR_e_HTRBV_ErrLinCom_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_ErrPosition_INIT' incorporates:
     *  Constant: '<S1186>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ErrPositi = KeTAIR_e_HTRBV_ErrPosition_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_Err_Ecu_INIT' incorporates:
     *  Constant: '<S1187>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Err_Ecu_I = KeTAIR_e_HTRBV_Err_Ecu_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_Err_Motor_INIT' incorporates:
     *  Constant: '<S1188>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Err_Motor = KeTAIR_e_HTRBV_Err_Motor_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_Err_Voltage_INIT' incorporates:
     *  Constant: '<S1189>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_Err_Volta = KeTAIR_e_HTRBV_Err_Voltage_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_ResponseError_INIT' incorporates:
     *  Constant: '<S1183>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_ResponseE =
        KeTAIR_b_HTRBV_ResponseError_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_SelfCalReq_INIT' incorporates:
     *  Constant: '<S1184>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_SelfCalRe = KeTAIR_b_HTRBV_SelfCalReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/HTRBV_SystemState_INIT' incorporates:
     *  Constant: '<S1190>/Calib'
     */
    TAIR_ac_B.OutportBufferForHTRBV_SystemSta = KeTAIR_e_HTRBV_SystemState_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_CalSts_INIT' incorporates:
     *  Constant: '<S1115>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_CalSts_INI = KeTAIR_e_CPV2_CalSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_ErrMsgs_FA_INIT' incorporates:
     *  Constant: '<S1113>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_ErrMsgs_FA = KeTAIR_b_CPV2_ErrMsgs_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_ErrMsgs_INIT' incorporates:
     *  Constant: '<S1117>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_ErrMsgs_IN = KeTAIR_y_CPV2_ErrMsgs_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_ErrSts_INIT' incorporates:
     *  Constant: '<S1116>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_ErrSts_INI = KeTAIR_e_CPV2_ErrSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_MtrVltg_INIT' incorporates:
     *  Constant: '<S1111>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_MtrVltg_IN = KeTAIR_U_CPV2_MtrVltg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_Pstn_FA_INIT' incorporates:
     *  Constant: '<S1112>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_Pstn_FA_IN = KeTAIR_b_CPV2_ActlPstn_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_Pstn_INIT' incorporates:
     *  Constant: '<S1110>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_Pstn_INIT = KeTAIR_Pct_CPV2_ActlPstn_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1009>/CPV2_RsErr_INIT' incorporates:
     *  Constant: '<S1114>/Calib'
     */
    TAIR_ac_B.OutportBufferForCPV2_RsErr_INIT = KeTAIR_b_CPV2_RsErr_INIT;

    /* SystemInitialize for S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/AGS_AGS2_INIT_Cals'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS_CalibrationSts_Init' incorporates:
     *  Constant: '<S1018>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_Calibrati_n = TAIR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS_CurrPos_Init' incorporates:
     *  Constant: '<S1019>/Calib'
     */
    TAIR_ac_B.OutportBufferForAGS_CurrPos_Ini = KeTAIR_Pct_AGS_CurrPos_Init;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS_ErrFdb_Init' incorporates:
     *  Constant: '<S1017>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_ErrFdb_Init = TAIR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/e_AGS_CurrPos_Init' incorporates:
     *  Constant: '<S1020>/Calib'
     */
    TAIR_ac_B.OutportBufferFore_AGS_CurrPos_I = KeTAIR_e_AGS_CurrPos_Init;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS2_CalibrationSts_Init' incorporates:
     *  Constant: '<S1013>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_Calibrat_c = TAIR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS2_CurrPos_Init' incorporates:
     *  Constant: '<S1015>/Calib'
     */
    TAIR_ac_B.OutportBufferForAGS2_CurrPos_In = KeTAIR_Pct_AGS2_CurrPos_Init;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS2_ErrFdb_Init' incorporates:
     *  Constant: '<S1014>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_ErrFdb_Ini = TAIR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/e_AGS2_CurrPos_Init' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    TAIR_ac_B.OutportBufferFore_AGS2_CurrPos_ = KeTAIR_e_AGS2_CurrPos_Init;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS2_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1023>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_IO_CntrlSt = TAIR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS2_PstnCmnd_INIT' incorporates:
     *  Constant: '<S1024>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS2_PstnCmnd_I = TAIR_ac_ConstB.Constant_ll;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS_IO_CntrlSt_INIT' incorporates:
     *  Constant: '<S1022>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_IO_CntrlSt_ = TAIR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1005>/AGS_PstnCmnd_INIT' incorporates:
     *  Constant: '<S1021>/Constant'
     */
    TAIR_ac_B.OutportBufferForAGS_PstnCmnd_IN = TAIR_ac_ConstB.Constant_nw;

    /* SystemInitialize for S-Function (fcgen): '<S208>/FcnCallGen' incorporates:
     *  SubSystem: '<S208>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_RadFab_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const4'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_RadFab = TAIR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_CompStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const13'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CompSt = TAIR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_CompFltStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const14'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CompFl = TAIR_ac_ConstB.Const14;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_CompSpdTgt_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const34'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CompSp = TAIR_ac_ConstB.Const34;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_ECM_AC_ClutchSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const41'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_ECM_AC = TAIR_ac_ConstB.Const41;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_DVC_HTCV_CalibStrt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const46'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_DVC_HT = TAIR_ac_ConstB.Const46;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const47'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HT_Sht = TAIR_ac_ConstB.Const47;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const49'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_Ft_SO_ = TAIR_ac_ConstB.Const49;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const51'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_Chlr_S = TAIR_ac_ConstB.Const51;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const53'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HT_Cab = TAIR_ac_ConstB.Const53;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_FrWyVlv_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const57'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_FrWy_n = TAIR_ac_ConstB.Const57;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_FrWyVlv_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const59'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_FrWyVl = TAIR_ac_ConstB.Const59;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_CPV_IO_Cnt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const61'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CPV_IO = TAIR_ac_ConstB.Const61;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_CalStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const65'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_Ca = TAIR_ac_ConstB.Const65;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_Sts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const68'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_St = TAIR_ac_ConstB.Const68;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_Err_Out_Init' incorporates:
     *  Constant: '<S1008>/Const69'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_Er = TAIR_ac_ConstB.Const69;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const86'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LTR__p = TAIR_ac_ConstB.Const86;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const89'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LTR__m = TAIR_ac_ConstB.Const89;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const95'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTL__j = TAIR_ac_ConstB.Const95;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const98'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTL__l = TAIR_ac_ConstB.Const98;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EXV_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const102'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EXV_IO = TAIR_ac_ConstB.Const102;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const105'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LT_Sht = TAIR_ac_ConstB.Const105;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const108'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_LTR_By = TAIR_ac_ConstB.Const108;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const110'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTL_By = TAIR_ac_ConstB.Const110;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_CalStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const129'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_C = TAIR_ac_ConstB.Const129;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_Sts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const132'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_S = TAIR_ac_ConstB.Const132;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_Err_Out_Init' incorporates:
     *  Constant: '<S1008>/Const133'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_E = TAIR_ac_ConstB.Const133;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_CalStat_Out_Init' incorporates:
     *  Constant: '<S1008>/Const142'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_C = TAIR_ac_ConstB.Const142;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_Sts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const145'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_S = TAIR_ac_ConstB.Const145;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_Err_Out_Init' incorporates:
     *  Constant: '<S1008>/Const146'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_E = TAIR_ac_ConstB.Const146;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_ErrFdb_Out_Init' incorporates:
     *  Constant: '<S1008>/Const166'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Er = TAIR_ac_ConstB.Const166;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_CalibrationSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const171'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Ca = TAIR_ac_ConstB.Const171;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_ErrFdb_Out_Init' incorporates:
     *  Constant: '<S1008>/Const179'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_E = TAIR_ac_ConstB.Const179;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_CalibrationSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const184'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_C = TAIR_ac_ConstB.Const184;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_CurrPos_Out_Init' incorporates:
     *  Constant: '<S1008>/Const187'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_e = TAIR_ac_ConstB.Const187;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_CurrPos_Out_Init' incorporates:
     *  Constant: '<S1008>/Const188'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Cu = TAIR_ac_ConstB.Const188;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const189'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_IO = TAIR_ac_ConstB.Const189;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS_PstnCmnd_Out_Init' incorporates:
     *  Constant: '<S1008>/Const190'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS_Ps = TAIR_ac_ConstB.Const190;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const192'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_I = TAIR_ac_ConstB.Const192;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_AGS2_PstnCmnd_Out_Init' incorporates:
     *  Constant: '<S1008>/Const193'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_AGS2_P = TAIR_ac_ConstB.Const193;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_EEXV_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const199'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_EEXV_I = TAIR_ac_ConstB.Const199;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_OEXV_IO_CntrlSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const202'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_OEXV_I = TAIR_ac_ConstB.Const202;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Ecu_Out_Init' incorporates:
     *  Constant: '<S1008>/Const223'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_n = TAIR_ac_ConstB.Const223;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Motor_Out_Init' incorporates:
     *  Constant: '<S1008>/Const224'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_h = TAIR_ac_ConstB.Const224;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_Err_Voltage_Out_Init' incorporates:
     *  Constant: '<S1008>/Const225'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_f = TAIR_ac_ConstB.Const225;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_ErrLinCom_Out_Init' incorporates:
     *  Constant: '<S1008>/Const226'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_d = TAIR_ac_ConstB.Const226;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_ErrPosition_Out_Init' incorporates:
     *  Constant: '<S1008>/Const227'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRB_e = TAIR_ac_ConstB.Const227;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_HTRBV_SystemState_Out_Init' incorporates:
     *  Constant: '<S1008>/Const228'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_HTRBV_ = TAIR_ac_ConstB.Const228;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_CPV2_ErrSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const229'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CPV2_E = TAIR_ac_ConstB.Const229;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_CPV2_CalSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const231'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_CPV2_C = TAIR_ac_ConstB.Const231;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeTAIR_e_RearDefrostSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const232'
     */
    TAIR_ac_B.OutportBufferForVeTAIR_e_RearDe = TAIR_ac_ConstB.Const232;

    /* End of SystemInitialize for S-Function (fcgen): '<S208>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_RadFab_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeTAIR_e_RadFab_IO_Cnt_Value(CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_CompStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_13'
     */
    (void)Rte_Write_VeTAIR_e_CompStat_Value(CeTAIR_e_NormalOp);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_CompFltStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VeTAIR_e_CompFltStat_Value(CeTAIR_e_CompFltSts_NoFault);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_CompSpdTgt_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_34'
     */
    (void)Rte_Write_VeTAIR_e_CompSpdTgt_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_ECM_AC_ClutchSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_41'
     */
    (void)Rte_Write_VeTAIR_e_ECM_AC_ClutchSts_Value(CeTAIR_e_ClutchSts_Default);

#if Rte_SysCon_Variant_TAIR_11

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_EEXV_SupplyVolt' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EEXV_CalStat' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EEXV_Err' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EEXV_Sts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_p_EEXV_RefPress' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_EEXV_PosAct' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EEXV_BoardTemp' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EEXV_RefTemp' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeTAIR_e_EEXV_CalStat' */
    /* SystemInitialize for Chart: '<S156>/PokeTAIR_e_EEXV_CalStatChrt' */
    TAIR_ac_B.LeTAIR_e_EEXV_CalStat_out = CeTAIR_e_EXV_Calibration_Complete;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeTAIR_e_EEXV_CalStat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EEXV_RefTemp' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EEXV_BoardTemp' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_EEXV_PosAct' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_p_EEXV_RefPress' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EEXV_Sts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EEXV_Err' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EEXV_CalStat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_EEXV_SupplyVolt' */
#endif

#if Rte_SysCon_Variant_TAIR_15

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_CPV2_MtrVltg' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_CPV2_CalSts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_CPV2_ErrSts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_y_CPV2_ErrMsgs' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_CPV2_ActlPstn' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeTAIR_e_CPV2_CalSts' */
    /* SystemInitialize for Chart: '<S151>/PokeTAIR_e_CPV2_CalStsChrt' */
    TAIR_ac_B.LeTAIR_e_CPV2_CalSts_out = CeTAIR_e_CPV_Calibration_Complete;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeTAIR_e_CPV2_CalSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_CPV2_ActlPstn' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_y_CPV2_ErrMsgs' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_CPV2_ErrSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_CPV2_CalSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_CPV2_MtrVltg' */
#endif

#if Rte_SysCon_Variant_TAIR_12

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_OEXV_SupplyVolt' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_OEXV_CalStat' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_OEXV_Err' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_OEXV_Sts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_p_OEXV_RefPress' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_OEXV_PosAct' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_OEXV_BoardTemp' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_OEXV_RefTemp' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeTAIR_e_OEXV_CalStat' */
    /* SystemInitialize for Chart: '<S174>/PokeTAIR_e_OEXV_CalStatChrt' */
    TAIR_ac_B.LeTAIR_e_OEXV_CalStat_out = CeTAIR_e_EXV_Calibration_Complete;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeTAIR_e_OEXV_CalStat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_OEXV_RefTemp' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_OEXV_BoardTemp' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_OEXV_PosAct' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_p_OEXV_RefPress' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_OEXV_Sts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_OEXV_Err' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_OEXV_CalStat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_OEXV_SupplyVolt' */
#endif

#if Rte_SysCon_Variant_TAIR_13

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_EXV_SupplyVolt' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EXV_CalStat' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EXV_Err' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EXV_Sts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_kp_EXV_RefPress' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_EXV_PosAct' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EXV_BoardTemp' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EXV_RefTemp' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeTAIR_e_EXV_CalStat' */
    /* SystemInitialize for Chart: '<S159>/PokeTAIR_e_EXV_CalStatChrt' */
    TAIR_ac_B.LeTAIR_e_EXV_CalStat_out = CeTAIR_e_EXV_Calibration_Complete;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeTAIR_e_EXV_CalStat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EXV_RefTemp' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_T_EXV_BoardTemp' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_EXV_PosAct' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_kp_EXV_RefPress' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EXV_Sts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EXV_Err' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_EXV_CalStat' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_EXV_SupplyVolt' */
#endif

#if Rte_SysCon_Variant_TAIR_14

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_FrWyVlv_MtrVltg' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_FrWyVlv_CalSts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_FrWyVlv_ErrSts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_y_FrWyVlv_ErrMsgs' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_FrWyVlv_ActlPstn' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeTAIR_e_FrWyVlv_CalSts' */
    /* SystemInitialize for Chart: '<S162>/PokeTAIR_e_FrWyVlv_CalStsChrt' */
    TAIR_ac_B.LeTAIR_e_FrWyVlv_CalSts_out = CeTAIR_e_CPV_Calibration_Complete;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeTAIR_e_FrWyVlv_CalSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_FrWyVlv_ActlPstn' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_y_FrWyVlv_ErrMsgs' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_FrWyVlv_ErrSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_FrWyVlv_CalSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_FrWyVlv_MtrVltg' */
#endif

#if Rte_SysCon_Variant_TAIR_9

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_LTR_BypsVlv_MtrVltg' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_LTR_BypsVlv_CalSts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_LTR_BypsVlv_ErrSts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_y_LTR_BypsVlv_ErrMsgs' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_LTR_BypsVlv_ActlPstn' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeTAIR_e_LTR_BypsVlv_CalSts' */
    /* SystemInitialize for Chart: '<S172>/PokeTAIR_e_LTR_BypsVlv_CalStsChrt' */
    TAIR_ac_B.LeTAIR_e_LTR_BypsVlv_CalSts_out =
        CeTAIR_e_CPV_Calibration_Complete;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeTAIR_e_LTR_BypsVlv_CalSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_LTR_BypsVlv_ActlPstn' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_y_LTR_BypsVlv_ErrMsgs' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_LTR_BypsVlv_ErrSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_LTR_BypsVlv_CalSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_U_LTR_BypsVlv_MtrVltg' */
#endif

#if Rte_SysCon_Variant_TAIR_10

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_HTL_BypsVlv_CalSts' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_HTL_BypsVlv_ActlPstn' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeTAIR_e_HTL_BypsVlv_CalSts' */
    /* SystemInitialize for Chart: '<S164>/PokeTAIR_e_HTL_BypsVlv_CalStsChrt' */
    TAIR_ac_B.LeTAIR_e_HTL_BypsVlv_CalSts_out =
        CeTAIR_e_CPV_Calibration_Complete;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeTAIR_e_HTL_BypsVlv_CalSts' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_Pct_HTL_BypsVlv_ActlPstn' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeTAIR_e_HTL_BypsVlv_CalSts' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_DVC_HTCV_CalibStrt' incorporates:
     *  Merge: '<Root>/Merge_Outport_46'
     */
    (void)Rte_Write_VeTAIR_e_DVC_HTCV_CalibStrt_Value
        (CeTAIR_e_DVC_HTCV_Calibration_Start);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_47'
     */
    (void)Rte_Write_VeTAIR_e_HT_Shtoff_VlvCmd_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_49'
     */
    (void)Rte_Write_VeTAIR_e_Ft_SO_VlvCmd_IO_Cnt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_51'
     */
    (void)Rte_Write_VeTAIR_e_Chlr_SO_VlvCmd_IO_Cnt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HT_CabVlvCmd_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_53'
     */
    (void)Rte_Write_VeTAIR_e_HT_CabVlvCmd_IO_Cnt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_FrWyVlv_CalSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_57'
     */
    (void)Rte_Write_VeTAIR_e_FrWyVlv_CalSts_Value
        (CeTAIR_e_CPV_Calibration_Complete);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_FrWyVlv_ErrSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_59'
     */
    (void)Rte_Write_VeTAIR_e_FrWyVlv_ErrSts_Value(CeTAIR_e_CPV_Status_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_CPV_IO_Cnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_61'
     */
    (void)Rte_Write_VeTAIR_e_CPV_IO_Cnt_Value(CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EXV_CalStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VeTAIR_e_EXV_CalStat_Value(CeTAIR_e_EXV_Calibration_Complete);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EXV_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_68'
     */
    (void)Rte_Write_VeTAIR_e_EXV_Sts_Value(CeTAIR_e_EXV_Status_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EXV_Err' incorporates:
     *  Merge: '<Root>/Merge_Outport_69'
     */
    (void)Rte_Write_VeTAIR_e_EXV_Err_Value(CeTAIR_e_EXV_ErrorMsg_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_CalSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_86'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_CalSts_Value
        (CeTAIR_e_CPV_Calibration_Complete);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_ErrSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_89'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_ErrSts_Value(CeTAIR_e_CPV_Status_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_CalSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_95'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_CalSts_Value
        (CeTAIR_e_CPV_Calibration_Complete);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_ErrSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_98'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_ErrSts_Value(CeTAIR_e_CPV_Status_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EXV_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_102'
     */
    (void)Rte_Write_VeTAIR_e_EXV_IO_CntrlSt_Value(CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_105'
     */
    (void)Rte_Write_VeTAIR_e_LT_Shtoff_VlvCmd_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_LTR_BypsVlv_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_108'
     */
    (void)Rte_Write_VeTAIR_e_LTR_BypsVlv_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTL_BypsVlv_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_110'
     */
    (void)Rte_Write_VeTAIR_e_HTL_BypsVlv_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EEXV_CalStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_129'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_CalStat_Value
        (CeTAIR_e_EXV_Calibration_Complete);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EEXV_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_132'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_Sts_Value(CeTAIR_e_EXV_Status_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EEXV_Err' incorporates:
     *  Merge: '<Root>/Merge_Outport_133'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_Err_Value(CeTAIR_e_EXV_ErrorMsg_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_OEXV_CalStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_142'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_CalStat_Value
        (CeTAIR_e_EXV_Calibration_Complete);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_OEXV_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_145'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_Sts_Value(CeTAIR_e_EXV_Status_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_OEXV_Err' incorporates:
     *  Merge: '<Root>/Merge_Outport_146'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_Err_Value(CeTAIR_e_EXV_ErrorMsg_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS_ErrFdb' incorporates:
     *  Merge: '<Root>/Merge_Outport_166'
     */
    (void)Rte_Write_VeTAIR_e_AGS_ErrFdb_Value(CeTAIR_e_AGS_NO_ERROR);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS_CalibrationSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_171'
     */
    (void)Rte_Write_VeTAIR_e_AGS_CalibrationSts_Value(CeTAIR_e_AGS_NotCalibrated);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS2_ErrFdb' incorporates:
     *  Merge: '<Root>/Merge_Outport_179'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_ErrFdb_Value(CeTAIR_e_AGS_NO_ERROR);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS2_CalibrationSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_184'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_CalibrationSts_Value
        (CeTAIR_e_AGS_NotCalibrated);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS2_CurrPos' incorporates:
     *  Merge: '<Root>/Merge_Outport_187'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_CurrPos_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS_CurrPos' incorporates:
     *  Merge: '<Root>/Merge_Outport_188'
     */
    (void)Rte_Write_VeTAIR_e_AGS_CurrPos_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_189'
     */
    (void)Rte_Write_VeTAIR_e_AGS_IO_CntrlSt_Value(CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS_PstnCmnd' incorporates:
     *  Merge: '<Root>/Merge_Outport_190'
     */
    (void)Rte_Write_VeTAIR_e_AGS_PstnCmnd_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS2_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_192'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_AGS2_PstnCmnd' incorporates:
     *  Merge: '<Root>/Merge_Outport_193'
     */
    (void)Rte_Write_VeTAIR_e_AGS2_PstnCmnd_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_EEXV_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_199'
     */
    (void)Rte_Write_VeTAIR_e_EEXV_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_OEXV_IO_CntrlSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_202'
     */
    (void)Rte_Write_VeTAIR_e_OEXV_IO_CntrlSt_Value
        (CeTAIR_e_Return_Control_to_ECU);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTRBV_Err_Ecu' incorporates:
     *  Merge: '<Root>/Merge_202'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Ecu_Value(CeTAIR_e_NoEcuError);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTRBV_Err_Motor' incorporates:
     *  Merge: '<Root>/Merge_204'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Motor_Value(CeTAIR_e_NoMotorError);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTRBV_Err_Voltage' incorporates:
     *  Merge: '<Root>/Merge_206'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_Err_Voltage_Value(CeTAIR_e_NoVoltError);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTRBV_ErrLinCom' incorporates:
     *  Merge: '<Root>/Merge_208'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_ErrLinCom_Value(CeTAIR_e_LINComNoErrors);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTRBV_ErrPosition' incorporates:
     *  Merge: '<Root>/Merge_210'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_ErrPosition_Value(CeTAIR_e_NoPosError);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_HTRBV_SystemState' incorporates:
     *  Merge: '<Root>/Merge_212'
     */
    (void)Rte_Write_VeTAIR_e_HTRBV_SystemState_Value(CeTAIR_e_Normal);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_CPV2_ErrSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_216'
     */
    (void)Rte_Write_VeTAIR_e_CPV2_ErrSts_Value(CeTAIR_e_CPV_Status_OK);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_CPV2_CalSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_218'
     */
    (void)Rte_Write_VeTAIR_e_CPV2_CalSts_Value(CeTAIR_e_CPV_Calibration_Complete);

    /* SystemInitialize for Outport: '<Root>/VeTAIR_e_RearDefrostSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_219'
     */
    (void)Rte_Write_VeTAIR_e_RearDefrostSts_Value(CeTAIR_e_RearDefrostSts_OFF);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
