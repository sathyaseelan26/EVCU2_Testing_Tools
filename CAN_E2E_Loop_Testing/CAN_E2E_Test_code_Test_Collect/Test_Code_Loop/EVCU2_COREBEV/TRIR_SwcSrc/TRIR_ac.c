/*
 * File: TRIR_ac.c
 *
 * Code generated for Simulink model 'TRIR_ac'.
 *
 * Model version                  : 9.161
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:51:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TRIR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TRIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, TRIR_VAR_INIT) HeTRIR_t_MedTEH = 0.1F;/* Referenced by:
                                                                      * '<S146>/Calib'
                                                                      * '<S161>/Calib'
                                                                      * '<S176>/Calib'
                                                                      * '<S153>/Calib'
                                                                      * '<S168>/Calib'
                                                                      */
static volatile CONST(sint16, TRIR_VAR_INIT) KeTRIR_Cnt_MC_RHSC2_Cooling_D = 0;/* Referenced by: '<S263>/Calib' */
static volatile CONST(sint16, TRIR_VAR_INIT) KeTRIR_Cnt_MC_RHSC2_Cooling_INIT =
    0;                                 /* Referenced by: '<S369>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_P_SDS_HV_PwrAvgRaw_D = 0.0F;/* Referenced by: '<S264>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_P_SDS_HV_PwrAvg_INIT = 0.0F;/* Referenced by: '<S370>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_Pct_AirHtrPwrTgt_D = 0.0F;/* Referenced by: '<S199>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_Pct_AirHtrPwrTgt_INIT =
    0.0F;                              /* Referenced by: '<S357>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp2_In_D =
    25.0F;                             /* Referenced by: '<S179>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp2_In_INIT =
    25.0F;                             /* Referenced by:
                                        * '<S402>/Calib'
                                        * '<S330>/Calib'
                                        */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp2_Out_D =
    25.0F;                             /* Referenced by: '<S180>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp2_Out_INIT =
    25.0F;                             /* Referenced by:
                                        * '<S403>/Calib'
                                        * '<S331>/Calib'
                                        */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp_In_D =
    25.0F;                             /* Referenced by: '<S181>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp_In_INIT =
    25.0F;                             /* Referenced by:
                                        * '<S404>/Calib'
                                        * '<S350>/Calib'
                                        */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp_Out_D =
    25.0F;                             /* Referenced by: '<S182>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HV_BatClntTmp_Out_INIT =
    25.0F;                             /* Referenced by:
                                        * '<S405>/Calib'
                                        * '<S351>/Calib'
                                        */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HeatExCool_TmpOut_D =
    0.0F;                              /* Referenced by: '<S200>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HeatExCool_TmpOut_INIT =
    0.0F;                              /* Referenced by: '<S358>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HtmpRadCool_TmpIn_D =
    0.0F;                              /* Referenced by: '<S201>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HtmpRadCool_TmpIn_INIT =
    0.0F;                              /* Referenced by: '<S359>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HtmpRadCool_TmpOut_D =
    0.0F;                              /* Referenced by: '<S202>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HtmpRadCool_TmpOut_INIT =
    0.0F;                              /* Referenced by: '<S360>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HtrCorClnt_TmpIn_D = 0.0F;/* Referenced by: '<S203>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HtrCorClnt_TmpOut_D =
    0.0F;                              /* Referenced by: '<S204>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_HtrCorClnt_TmpOut_INIT =
    0.0F;                              /* Referenced by: '<S361>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_SDS_ClntTmpIn_Act_D =
    25.0F;                             /* Referenced by: '<S265>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_SDS_ClntTmpIn_Act_INIT =
    25.0F;                             /* Referenced by: '<S371>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_SDS_ClntTmpIn_Tgt_D =
    25.0F;                             /* Referenced by: '<S266>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_T_SDS_ClntTmpIn_Tgt_INIT =
    25.0F;                             /* Referenced by: '<S372>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_U_BatBotlClnt_LoLvl_D =
    0.0F;                              /* Referenced by: '<S183>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AHP_EnblReq_FA_D = 0;/* Referenced by: '<S205>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AHP_EnblReq_FA_INIT = 0;/* Referenced by: '<S362>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AHP_EnblReq_FA_SD = 0;/* Referenced by: '<S206>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AHP_EnblReq_INIT = 0;/* Referenced by: '<S363>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AirHtrPwrTgtFA_INIT = 0;/* Referenced by: '<S364>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AirHtrPwrTgt_FA_D = 0;/* Referenced by: '<S207>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AirHtrPwrTgt_FA_SD = 0;/* Referenced by: '<S208>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_AirHtrPwrTgt_SD = 0;/* Referenced by: '<S209>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_BatBotlClntLoLvl_OC_D = 0;/* Referenced by: '<S184>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_BatBotlClntLoLvl_OC_SD =
    0;                                 /* Referenced by: '<S185>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_BatBotlClnt_LoLvl_SD = 0;/* Referenced by: '<S186>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_ClimateInfo_FA_D = 0;/* Referenced by: '<S311>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_ClimateInfo_FA_INIT = 0;/* Referenced by: '<S393>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_ClimateInfo_FA_SD = 0;/* Referenced by: '<S312>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_ClimateInfo_SD = 0;/* Referenced by: '<S313>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_Comfort_EnblAct_D = 0;/* Referenced by: '<S295>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_Comfort_EnblAct_FA_D = 0;/* Referenced by: '<S296>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_Comfort_EnblAct_FA_INIT =
    0;                                 /* Referenced by: '<S385>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_Comfort_EnblAct_FA_SD = 0;/* Referenced by: '<S297>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_Comfort_EnblAct_INIT = 0;/* Referenced by: '<S386>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_Comfort_EnblAct_SD = 0;/* Referenced by: '<S298>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_HS_Fail_D = 0;/* Referenced by: '<S236>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_HS_Fail_INIT = 0;/* Referenced by: '<S344>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_HS_Fail_SD = 0;/* Referenced by: '<S245>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_HS_Sts_SD = 0;/* Referenced by: '<S244>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_VS_Fail_D = 0;/* Referenced by: '<S240>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_VS_Fail_INIT = 0;/* Referenced by: '<S335>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_VS_Fail_SD = 0;/* Referenced by: '<S216>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FL_VS_Sts_SD = 0;/* Referenced by: '<S215>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_HS_Fail_D = 0;/* Referenced by: '<S237>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_HS_Fail_INIT = 0;/* Referenced by: '<S346>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_HS_Fail_SD = 0;/* Referenced by: '<S247>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_HS_Sts_SD = 0;/* Referenced by: '<S246>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_VS_Fail_D = 0;/* Referenced by: '<S241>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_VS_Fail_INIT = 0;/* Referenced by: '<S337>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_VS_Fail_SD = 0;/* Referenced by: '<S218>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_FR_VS_Sts_SD = 0;/* Referenced by: '<S217>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HSW_Fail_D = 0;/* Referenced by: '<S235>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HSW_Fail_INIT = 0;/* Referenced by: '<S342>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HSW_Fail_SD = 0;/* Referenced by: '<S234>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HSW_Sts_FA_D = 0;/* Referenced by: '<S233>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HSW_Sts_FA_INIT = 0;/* Referenced by: '<S354>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HSW_Sts_FA_SD = 0;/* Referenced by: '<S223>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HSW_Sts_SD = 0;/* Referenced by: '<S212>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HVACECOModeSts_FA_D = 0;/* Referenced by: '<S314>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HVACECOModeSts_FA_INIT =
    0;                                 /* Referenced by: '<S394>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HVACECOModeSts_FA_SD = 0;/* Referenced by: '<S315>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HVACECOModeSts_SD = 0;/* Referenced by: '<S316>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HVAC_St_SD = 0;/* Referenced by: '<S317>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp2_In_FA_D =
    0;                                 /* Referenced by: '<S187>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp2_In_FA_INIT
    = 0;                               /* Referenced by: '<S352>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp2_In_FA_SD =
    0;                                 /* Referenced by: '<S188>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp2_In_SD = 0;/* Referenced by: '<S189>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp2_Out_FA_D =
    0;                                 /* Referenced by: '<S190>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_HV_BatClntTmp2_Out_FA_INIT = 0;/* Referenced by: '<S353>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp2_Out_FA_SD =
    0;                                 /* Referenced by: '<S191>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp2_Out_SD = 0;/* Referenced by: '<S192>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_In_FA_D = 0;/* Referenced by: '<S193>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_In_FA_INIT =
    0;                                 /* Referenced by: '<S355>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_In_FA_SD =
    0;                                 /* Referenced by: '<S194>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_In_SD = 0;/* Referenced by: '<S195>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_Out_FA_D =
    0;                                 /* Referenced by: '<S196>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_Out_FA_INIT
    = 0;                               /* Referenced by: '<S356>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_Out_FA_SD =
    0;                                 /* Referenced by: '<S197>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HV_BatClntTmp_Out_SD = 0;/* Referenced by: '<S198>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HeatExCool_TmpOut_FA_D =
    0;                                 /* Referenced by: '<S210>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HeatExCool_TmpOut_FA_INIT
    = 0;                               /* Referenced by: '<S365>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HeatExCool_TmpOut_FA_SD =
    0;                                 /* Referenced by: '<S211>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HeatExCool_TmpOut_SD = 0;/* Referenced by: '<S250>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtmpRadCool_TmpIn_FA_D =
    0;                                 /* Referenced by: '<S251>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtmpRadCool_TmpIn_FA_INIT
    = 0;                               /* Referenced by: '<S366>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtmpRadCool_TmpIn_FA_SD =
    0;                                 /* Referenced by: '<S252>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtmpRadCool_TmpIn_SD = 0;/* Referenced by: '<S253>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtmpRadCool_TmpOut_FA_D =
    0;                                 /* Referenced by: '<S254>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_HtmpRadCool_TmpOut_FA_INIT = 0;/* Referenced by: '<S367>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtmpRadCool_TmpOut_FA_SD =
    0;                                 /* Referenced by: '<S255>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtmpRadCool_TmpOut_SD = 0;/* Referenced by: '<S256>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtrCorClnt_TmpIn_FA_D = 0;/* Referenced by: '<S257>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtrCorClnt_TmpIn_FA_SD =
    0;                                 /* Referenced by: '<S258>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtrCorClnt_TmpIn_SD = 0;/* Referenced by: '<S259>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtrCorClnt_TmpOut_FA_D =
    0;                                 /* Referenced by: '<S260>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtrCorClnt_TmpOut_FA_INIT
    = 0;                               /* Referenced by: '<S368>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtrCorClnt_TmpOut_FA_SD =
    0;                                 /* Referenced by: '<S261>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_HtrCorClnt_TmpOut_SD = 0;/* Referenced by: '<S262>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_KeepHotColdButtonStatus_D
    = 0;                               /* Referenced by: '<S299>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_KeepHotColdButtonStatus_FA_D = 0;/* Referenced by: '<S300>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_KeepHotColdButtonStatus_FA_INIT = 0;/* Referenced by: '<S387>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_KeepHotColdButtonStatus_FA_SD = 0;/* Referenced by: '<S301>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_KeepHotColdButtonStatus_INIT = 0;/* Referenced by: '<S388>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_KeepHotColdButtonStatus_SD = 0;/* Referenced by: '<S302>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_LoadShed_D = 0;/* Referenced by: '<S303>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_LoadShed_FA_D = 0;/* Referenced by: '<S304>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_LoadShed_FA_INIT = 0;/* Referenced by: '<S389>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_LoadShed_FA_SD = 0;/* Referenced by: '<S305>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_LoadShed_INIT = 0;/* Referenced by: '<S390>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_LoadShed_SD = 0;/* Referenced by: '<S306>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_MC_RHSC2_Cooling_SD = 0;/* Referenced by: '<S267>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_HS_Fail_D = 0;/* Referenced by: '<S238>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_HS_Fail_INIT = 0;/* Referenced by: '<S348>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_HS_Fail_SD = 0;/* Referenced by: '<S249>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_HS_Sts_SD = 0;/* Referenced by: '<S248>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_VS_Fail_D = 0;/* Referenced by: '<S242>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_VS_Fail_INIT = 0;/* Referenced by: '<S339>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_VS_Fail_SD = 0;/* Referenced by: '<S220>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RL_VS_Sts_SD = 0;/* Referenced by: '<S219>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_HS_Fail_D = 0;/* Referenced by: '<S239>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_HS_Fail_INIT = 0;/* Referenced by: '<S333>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_HS_Fail_SD = 0;/* Referenced by: '<S214>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_HS_Sts_SD = 0;/* Referenced by: '<S213>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_VS_Fail_D = 0;/* Referenced by: '<S243>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_VS_Fail_INIT = 0;/* Referenced by: '<S341>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_VS_Fail_SD = 0;/* Referenced by: '<S222>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_RR_VS_Sts_SD = 0;/* Referenced by: '<S221>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SCCActv_D = 0;/* Referenced by: '<S318>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SCCActv_Init = 0;/* Referenced by: '<S398>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SCCActv_SD = 0;/* Referenced by: '<S319>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ActualState_FA_D = 0;/* Referenced by: '<S268>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ActualState_FA_INIT =
    0;                                 /* Referenced by: '<S373>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ActualState_FA_SD = 0;/* Referenced by: '<S269>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ActualState_Rcvd_D =
    1;                                 /* Referenced by: '<S270>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ActualState_Rcvd_INIT
    = 0;                               /* Referenced by: '<S374>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ActualState_Rcvd_SD =
    0;                                 /* Referenced by: '<S271>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ActualState_SD = 0;/* Referenced by: '<S272>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Act_FA_D =
    0;                                 /* Referenced by: '<S273>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Act_FA_INIT
    = 0;                               /* Referenced by: '<S375>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Act_FA_SD =
    0;                                 /* Referenced by: '<S274>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_D =
    1;                                 /* Referenced by: '<S275>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_INIT = 0;/* Referenced by: '<S376>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_SD
    = 0;                               /* Referenced by: '<S276>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Act_SD = 0;/* Referenced by: '<S277>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_D =
    0;                                 /* Referenced by: '<S278>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_INIT
    = 0;                               /* Referenced by: '<S377>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_SD =
    0;                                 /* Referenced by: '<S279>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_D =
    0;                                 /* Referenced by: '<S280>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_INIT = 0;/* Referenced by: '<S378>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_SD
    = 0;                               /* Referenced by: '<S281>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_ClntTmpIn_Tgt_SD = 0;/* Referenced by: '<S282>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_HV_PwrAvgRaw_SD = 0;/* Referenced by: '<S283>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_HV_PwrAvg_FA_D = 0;/* Referenced by: '<S284>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_HV_PwrAvg_FA_INIT = 0;/* Referenced by: '<S379>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_HV_PwrAvg_FA_SD = 0;/* Referenced by: '<S285>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_HV_PwrAvg_Rcvd_D = 1;/* Referenced by: '<S286>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_HV_PwrAvg_Rcvd_INIT =
    1;                                 /* Referenced by: '<S380>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_HV_PwrAvg_Rcvd_SD = 0;/* Referenced by: '<S287>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_MaxCoolingReq_FA_D =
    0;                                 /* Referenced by: '<S288>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_MaxCoolingReq_FA_INIT
    = 0;                               /* Referenced by: '<S381>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_MaxCoolingReq_FA_SD =
    0;                                 /* Referenced by: '<S289>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_MaxCoolingReq_Rcvd_D =
    1;                                 /* Referenced by: '<S290>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT)
    KeTRIR_b_SDS_MaxCoolingReq_Rcvd_INIT = 0;/* Referenced by: '<S382>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_MaxCoolingReq_Rcvd_SD
    = 0;                               /* Referenced by: '<S291>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_SDS_MaxCoolingReq_SD = 0;/* Referenced by: '<S292>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_TrunkStatus_D = 0;/* Referenced by: '<S307>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_TrunkStatus_FA_D = 0;/* Referenced by: '<S308>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_TrunkStatus_FA_INIT = 0;/* Referenced by: '<S391>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_TrunkStatus_FA_SD = 0;/* Referenced by: '<S309>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_TrunkStatus_INIT = 0;/* Referenced by: '<S392>/Calib' */
static volatile CONST(boolean, TRIR_VAR_INIT) KeTRIR_b_TrunkStatus_SD = 0;/* Referenced by: '<S310>/Calib' */
static volatile CONST(TeTRIR_e_ClimateInfo, TRIR_VAR_INIT)
    KeTRIR_e_ClimateInfo_D = CeTRIR_e_SPST_ON;/* Referenced by: '<S320>/Calib' */
static volatile CONST(TeTRIR_e_ClimateInfo, TRIR_VAR_INIT)
    KeTRIR_e_ClimateInfo_INIT = CeTRIR_e_SPST_ON;/* Referenced by: '<S399>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_FL_HS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S225>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_FL_HS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S343>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_FL_VS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S229>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_FL_VS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S334>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_FR_HS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S226>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_FR_HS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S345>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_FR_VS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S230>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_FR_VS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S336>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_HSW_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S224>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_HSW_Sts_INIT =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S332>/Calib' */
static volatile CONST(TeTRIR_e_HVAC_ECO_State, TRIR_VAR_INIT)
    KeTRIR_e_HVACECOModeSts_D = CeTRIR_e_HVAC_ECO_OFF;/* Referenced by: '<S321>/Calib' */
static volatile CONST(TeTRIR_e_HVAC_ECO_State, TRIR_VAR_INIT)
    KeTRIR_e_HVACECOModeSts_INIT = CeTRIR_e_HVAC_ECO_OFF;/* Referenced by: '<S400>/Calib' */
static volatile CONST(TeTRIR_e_HVAC_State, TRIR_VAR_INIT)
    KeTRIR_e_HVACPrecCondSts_Init = CeTRIR_e_HVAC_Off;/* Referenced by: '<S401>/Calib' */
static volatile CONST(TeTRIR_e_HVAC_State, TRIR_VAR_INIT) KeTRIR_e_HVAC_St_D =
    CeTRIR_e_HVAC_Off;                 /* Referenced by: '<S322>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_RL_HS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S227>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_RL_HS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S347>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_RL_VS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S231>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_RL_VS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S338>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_RR_HS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S228>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_RR_HS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S349>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT) KeTRIR_e_RR_VS_Sts_D =
    CeTRIR_e_ModeOFF;                  /* Referenced by: '<S232>/Calib' */
static volatile CONST(TeTRIR_e_ClimateSts, TRIR_VAR_INIT)
    KeTRIR_e_RR_VS_Sts_INIT = CeTRIR_e_ModeOFF;/* Referenced by: '<S340>/Calib' */
static volatile CONST(TeTRIR_e_SDS_ActualState, TRIR_VAR_INIT)
    KeTRIR_e_SDS_ActualState_D = CeTRIR_e_SDS_OFF;/* Referenced by: '<S293>/Calib' */
static volatile CONST(TeTRIR_e_SDS_ActualState, TRIR_VAR_INIT)
    KeTRIR_e_SDS_ActualState_INIT = CeTRIR_e_SDS_OFF;/* Referenced by: '<S383>/Calib' */
static volatile CONST(TeTRIR_e_HCP_MaxCoolingReq, TRIR_VAR_INIT)
    KeTRIR_e_SDS_MaxCoolingReq_D = CeTRIR_e_HCP_MaxCoolingNotRequested;/* Referenced by: '<S294>/Calib' */
static volatile CONST(TeTRIR_e_HCP_MaxCoolingReq, TRIR_VAR_INIT)
    KeTRIR_e_SDS_MaxCoolingReq_INIT = CeTRIR_e_HCP_MaxCoolingNotRequested;/* Referenced by: '<S384>/Calib' */

#if Rte_SysCon_Variant_TRIR_1

static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_k_BTIS_LPF = 0.1F;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIR_2

static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_k_BTOS_LPF = 0.1F;/* Referenced by: '<S143>/Calib' */

#endif

static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_t_BTS_Debounce = 1.0F;/* Referenced by: '<S144>/Calib' */
static volatile CONST(float32, TRIR_VAR_INIT) KeTRIR_t_KeepBTS_INITs = 0.5F;/* Referenced by: '<S145>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_TRIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, TRIR_VAR_INIT) VeTRIR_b_AHP_EnblReq_FA;/* '<S131>/Switch5' */
static VAR(boolean, TRIR_VAR_INIT) VeTRIR_b_SDS_ClntTmpIn_Act_FA_AD;/* '<S132>/Switch5' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TRIR
#include "MemMap.h"

CONST(ConstB_TRIR_ac_T, TRIR_VAR_INIT) TRIR_ac_ConstB =
{
    CeTRIR_e_SDS_OFF,                  /* '<S324>/Const33' */
    CeTRIR_e_HVAC_Off,                 /* '<S324>/Const41' */
    CeTRIR_e_HVAC_ECO_OFF,             /* '<S324>/Const42' */
    CeTRIR_e_HCP_MaxCoolingNotRequested,/* '<S324>/Const36' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const1' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const3' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const5' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const7' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const54' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const55' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const56' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const57' */
    CeTRIR_e_ModeOFF,                  /* '<S324>/Const58' */
    CeTRIR_e_SPST_ON                   /* '<S324>/Const52' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TRIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

VAR(B_TRIR_ac_T, TRIR_VAR_INIT) TRIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

VAR(DW_TRIR_ac_T, TRIR_VAR_INIT) TRIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"
#if !Rte_SysCon_Variant_TRIR_1 || !Rte_SysCon_Variant_TRIR_2

static FUNC(void, TRIR_CODE_LOCAL) TRIR_ac_CANSignalProcessing(VAR(float32,
    AUTOMATIC) rtu_CAN_Input, VAR(float32, AUTOMATIC) rtu_Previous_Value, VAR
    (float32, AUTOMATIC) rtu_BTS_Debounce, VAR(boolean, AUTOMATIC)
    rtu_BTS_InitExpired, VAR(boolean, AUTOMATIC) rtu_CAN_FA_Input, P2VAR(float32,
    AUTOMATIC, TRIR_VAR_INIT) rty_Processed_Output, P2VAR(boolean, AUTOMATIC,
    TRIR_VAR_INIT) rty_FA_Output, P2VAR(DW_CANSignalProcessing_TRIR_ac_T,
    AUTOMATIC, TRIR_VAR_INIT) localDW);

#endif

/*
 * Output and update for atomic system:
 *    '<S138>/CANSignalProcessing'
 *    '<S140>/CANSignalProcessing'
 */
#if !Rte_SysCon_Variant_TRIR_1 || !Rte_SysCon_Variant_TRIR_2

static FUNC(void, TRIR_CODE_LOCAL) TRIR_ac_CANSignalProcessing(VAR(float32,
    AUTOMATIC) rtu_CAN_Input, VAR(float32, AUTOMATIC) rtu_Previous_Value, VAR
    (float32, AUTOMATIC) rtu_BTS_Debounce, VAR(boolean, AUTOMATIC)
    rtu_BTS_InitExpired, VAR(boolean, AUTOMATIC) rtu_CAN_FA_Input, P2VAR(float32,
    AUTOMATIC, TRIR_VAR_INIT) rty_Processed_Output, P2VAR(boolean, AUTOMATIC,
    TRIR_VAR_INIT) rty_FA_Output, P2VAR(DW_CANSignalProcessing_TRIR_ac_T,
    AUTOMATIC, TRIR_VAR_INIT) localDW)
{
    boolean rtb_AND_ay;
    boolean rtb_RelationalOperator_g;

    /* RelationalOperator: '<S152>/Relational Operator' incorporates:
     *  UnitDelay: '<S152>/Unit Delay'
     */
    rtb_RelationalOperator_g = (rtu_CAN_Input == localDW->UnitDelay_DSTATE);

    /* Outputs for Atomic SubSystem: '<S152>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S155>/EdgeRising' */
    /* Logic: '<S156>/AND' incorporates:
     *  Logic: '<S156>/OR1'
     *  UnitDelay: '<S156>/Unit Delay'
     */
    rtb_AND_ay = (rtb_RelationalOperator_g && (!localDW->UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S156>/Unit Delay' */
    localDW->UnitDelay_DSTATE_k = rtb_RelationalOperator_g;

    /* End of Outputs for SubSystem: '<S155>/EdgeRising' */

    /* Switch: '<S155>/Switch1' incorporates:
     *  Constant: '<S153>/Calib'
     *  Constant: '<S155>/Constant Value1'
     *  Logic: '<S155>/OR'
     *  Logic: '<S155>/OR1'
     *  MinMax: '<S155>/Minimum'
     *  Sum: '<S155>/Summation'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    if ((!rtb_RelationalOperator_g) || rtb_AND_ay)
    {
        localDW->UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        localDW->UnitDelay_DSTATE_c = fminf(rtu_BTS_Debounce, HeTRIR_t_MedTEH +
            localDW->UnitDelay_DSTATE_c);
    }

    /* End of Switch: '<S155>/Switch1' */

    /* Switch: '<S154>/Switch' incorporates:
     *  Logic: '<S152>/Logical Operator'
     *  Logic: '<S155>/AND'
     *  RelationalOperator: '<S155>/Greater  Than'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    if ((rtb_RelationalOperator_g && (localDW->UnitDelay_DSTATE_c >=
            rtu_BTS_Debounce)) && rtu_BTS_InitExpired)
    {
        *rty_Processed_Output = rtu_CAN_Input;
    }
    else
    {
        *rty_Processed_Output = rtu_Previous_Value;
    }

    /* End of Switch: '<S154>/Switch' */
    /* End of Outputs for SubSystem: '<S152>/Turn On Delay Time' */

    /* Inport: '<S150>/CAN_FA_Input' */
    *rty_FA_Output = rtu_CAN_FA_Input;

    /* Update for UnitDelay: '<S152>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtu_CAN_Input;
}

#endif

/* Model step function for TID1 */
FUNC(void, TRIR_CODE) TRIR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
    float32 rtb_HV_BatClntTmp_In_AD_Prev_IRV;
    float32 rtb_HV_BatClntTmpOut_AD_Prev_IRV;
    float32 rtb_HV_BatClntTmp2_In_AD_Prev_IRV;
    float32 rtb_HV_BatClntTmpOut2_AD_Prev_IRV;

#if !Rte_SysCon_Variant_TRIR_1

    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV_B_g;

#endif

#if !Rte_SysCon_Variant_TRIR_2

    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV_B_m;

#endif

    float32 rtb_VariantMergeForOutportProcessed_Outp;
    float32 rtb_VariantMergeForOutportProcessed_Ou_n;

#if !Rte_SysCon_Variant_TRIR_1

    boolean rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat;

#endif

#if !Rte_SysCon_Variant_TRIR_2

    boolean rtb_TmpSignalConversionAtVeTRIR_b_HV_B_j;

#endif

    boolean rtb_VeTRIR_b_HV_BatClntTmpOutFA_write_IR;
    boolean rtb_VeTRIR_b_HV_BatClntTmp_InFA_write_IR;
    float32 rtb_Switch1_c;
    float32 rtb_Switch2_p;
    float32 rtb_Switch4;
    float32 rtb_Switch_g;
    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV__mm;
    float32 tmpRead;
    float32 tmpRead_1;
    sint16 tmp_2;
    TeTRIR_e_ClimateInfo tmp_5;
    TeTRIR_e_ClimateSts tmp;
    TeTRIR_e_HCP_MaxCoolingReq tmp_1;
    TeTRIR_e_HVAC_ECO_State tmp_4;
    TeTRIR_e_HVAC_State tmp_3;
    TeTRIR_e_SDS_ActualState tmp_0;
    boolean rtb_AND_i;
    boolean rtb_AND_kc;
    boolean rtb_NotEqual_a;
    boolean rtb_RelationalOperator;
    boolean rtb_Switch6;
    boolean tmpRead_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TRIR_MedTEH'
     */
    /* SignalConversion generated from: '<S63>/HV_BatClntTmp_In_Prev' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    rtb_HV_BatClntTmp_In_AD_Prev_IRV =
        Rte_IrvRead_TRIR_MedTEH_HV_BatClntTmp_In_AD_Prev_IRV();

    /* SignalConversion generated from: '<S63>/HV_BatClntTmpOut_Prev' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    rtb_HV_BatClntTmpOut_AD_Prev_IRV =
        Rte_IrvRead_TRIR_MedTEH_HV_BatClntTmpOut_AD_Prev_IRV();

    /* SignalConversion generated from: '<S63>/HV_BatClntTmp2_In_Prev' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    rtb_HV_BatClntTmp2_In_AD_Prev_IRV =
        Rte_IrvRead_TRIR_MedTEH_HV_BatClntTmp2_In_AD_Prev_IRV();

    /* SignalConversion generated from: '<S63>/HV_BatClntTmpOut2_Prev' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    rtb_HV_BatClntTmpOut2_AD_Prev_IRV =
        Rte_IrvRead_TRIR_MedTEH_HV_BatClntTmpOut2_AD_Prev_IRV();

    /* SignalConversion generated from: '<S63>/VeTRIR_T_HV_BatClntTmp2_In_read' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat =
        Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HV_BatClntTmp2_In_write_IRV();

    /* RelationalOperator: '<S137>/Relational Operator' incorporates:
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_RelationalOperator = (rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat ==
        TRIR_ac_DW.UnitDelay_DSTATE);

    /* Outputs for Atomic SubSystem: '<S137>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S148>/EdgeRising' */
    /* Logic: '<S149>/AND' incorporates:
     *  Logic: '<S149>/OR1'
     *  UnitDelay: '<S149>/Unit Delay'
     */
    rtb_AND_i = (rtb_RelationalOperator && (!TRIR_ac_DW.UnitDelay_DSTATE_id));

    /* Update for UnitDelay: '<S149>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE_id = rtb_RelationalOperator;

    /* End of Outputs for SubSystem: '<S148>/EdgeRising' */

    /* Switch: '<S148>/Switch1' incorporates:
     *  Constant: '<S144>/Calib'
     *  Constant: '<S146>/Calib'
     *  Constant: '<S148>/Constant Value1'
     *  Logic: '<S148>/OR'
     *  Logic: '<S148>/OR1'
     *  MinMax: '<S148>/Minimum'
     *  Sum: '<S148>/Summation'
     *  UnitDelay: '<S148>/Unit Delay'
     */
    if ((!rtb_RelationalOperator) || rtb_AND_i)
    {
        TRIR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
    }
    else
    {
        TRIR_ac_DW.UnitDelay_DSTATE_l = fminf(KeTRIR_t_BTS_Debounce,
            HeTRIR_t_MedTEH + TRIR_ac_DW.UnitDelay_DSTATE_l);
    }

    /* End of Switch: '<S148>/Switch1' */
    /* End of Outputs for SubSystem: '<S137>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S141>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising' */
    /* Logic: '<S178>/AND' incorporates:
     *  Logic: '<S178>/OR1'
     *  UnitDelay: '<S178>/Unit Delay'
     */
    rtb_AND_i = !TRIR_ac_DW.UnitDelay_DSTATE_e;

    /* Update for UnitDelay: '<S178>/Unit Delay' incorporates:
     *  Constant: '<S141>/TRUE Constant'
     */
    TRIR_ac_DW.UnitDelay_DSTATE_e = true;

    /* End of Outputs for SubSystem: '<S177>/EdgeRising' */

    /* Switch: '<S177>/Switch1' incorporates:
     *  Constant: '<S145>/Calib'
     *  Constant: '<S176>/Calib'
     *  Constant: '<S177>/Constant Value1'
     *  Logic: '<S177>/OR'
     *  MinMax: '<S177>/Minimum'
     *  Sum: '<S177>/Summation'
     *  UnitDelay: '<S177>/Unit Delay'
     */
    if (rtb_AND_i)
    {
        TRIR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
    }
    else
    {
        TRIR_ac_DW.UnitDelay_DSTATE_a = fminf(KeTRIR_t_KeepBTS_INITs,
            HeTRIR_t_MedTEH + TRIR_ac_DW.UnitDelay_DSTATE_a);
    }

    /* End of Switch: '<S177>/Switch1' */

    /* Logic: '<S177>/AND' incorporates:
     *  Constant: '<S145>/Calib'
     *  RelationalOperator: '<S177>/Greater  Than'
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_AND_i = (TRIR_ac_DW.UnitDelay_DSTATE_a >= KeTRIR_t_KeepBTS_INITs);

    /* End of Outputs for SubSystem: '<S141>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S135>/BTIS_SignalProcessing' */
#if Rte_SysCon_Variant_TRIR_1

    /* Outputs for Atomic SubSystem: '<S138>/HWIOSignalProcessing' */
    /* Inport: '<Root>/VeTRIB_T_HV_BatClntTmp_In' */
    (void)Rte_Read_VeTRIB_T_HV_BatClntTmp_In_Value
        (&rtb_VariantMergeForOutportProcessed_Ou_n);

    /* Outputs for Atomic SubSystem: '<S157>/EdgeBi' */
    /* RelationalOperator: '<S159>/Not Equal' incorporates:
     *  UnitDelay: '<S159>/Unit Delay'
     */
    rtb_NotEqual_a = (rtb_AND_i != TRIR_ac_DW.UnitDelay_DSTATE_c);

    /* Update for UnitDelay: '<S159>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE_c = rtb_AND_i;

    /* End of Outputs for SubSystem: '<S157>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S157>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S158>/Switch1' incorporates:
     *  Switch: '<S160>/Switch'
     */
    if (rtb_NotEqual_a)
    {
        /* Switch: '<S160>/Switch' */
        if (!rtb_AND_i)
        {
            /* VariantMerge generated from: '<S138>/Processed_Output' incorporates:
             *  Inport: '<Root>/VeTRIB_T_HV_BatClntTmp_In'
             */
            rtb_VariantMergeForOutportProcessed_Ou_n =
                rtb_HV_BatClntTmp_In_AD_Prev_IRV;
        }
    }
    else
    {
        if (!rtb_AND_i)
        {
            /* Switch: '<S160>/Switch' incorporates:
             *  Inport: '<Root>/VeTRIB_T_HV_BatClntTmp_In'
             */
            rtb_VariantMergeForOutportProcessed_Ou_n =
                rtb_HV_BatClntTmp_In_AD_Prev_IRV;
        }

        /* VariantMerge generated from: '<S138>/Processed_Output' incorporates:
         *  Constant: '<S142>/Calib'
         *  Inport: '<Root>/VeTRIB_T_HV_BatClntTmp_In'
         *  Product: '<S158>/Multiplication'
         *  Sum: '<S158>/Subtraction'
         *  Sum: '<S158>/Summation'
         *  UnitDelay: '<S158>/Unit Delay'
         */
        rtb_VariantMergeForOutportProcessed_Ou_n =
            ((rtb_VariantMergeForOutportProcessed_Ou_n -
              TRIR_ac_DW.UnitDelay_DSTATE_m) * KeTRIR_k_BTIS_LPF) +
            TRIR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S158>/Switch1' */
    /* End of Outputs for SubSystem: '<S157>/Digital Lowpass Reset Enabled' */

    /* VariantMerge generated from: '<S138>/FA_Output' incorporates:
     *  Inport: '<Root>/VeTRIB_b_HV_BatClntTmp_In_FA'
     */
    (void)Rte_Read_VeTRIB_b_HV_BatClntTmp_In_FA_Value
        (&rtb_VeTRIR_b_HV_BatClntTmp_InFA_write_IR);

    /* Outputs for Atomic SubSystem: '<S157>/Digital Lowpass Reset Enabled' */
    /* Update for UnitDelay: '<S158>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE_m = rtb_VariantMergeForOutportProcessed_Ou_n;

    /* End of Outputs for SubSystem: '<S157>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for SubSystem: '<S138>/HWIOSignalProcessing' */
#else

    /* Outputs for Atomic SubSystem: '<S138>/CANSignalProcessing' */
    /* SignalConversion generated from: '<S63>/VeTRIR_T_HV_BatClntTmp_In_IRV_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtVeTRIR_T_HV_B_g =
        Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HV_BatClntTmp_In_write_IRV();

    /* SignalConversion generated from: '<S63>/VeTRIR_b_HV_BatClntTmp_InFA_IRV_read' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat =
        Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HV_BatClntTmp_InFA_write_IRV();

    /* Constant: '<S144>/Calib' */
    TRIR_ac_CANSignalProcessing(rtb_TmpSignalConversionAtVeTRIR_T_HV_B_g,
        rtb_HV_BatClntTmp_In_AD_Prev_IRV, KeTRIR_t_BTS_Debounce, rtb_AND_i,
        rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat,
        &rtb_VariantMergeForOutportProcessed_Ou_n,
        &rtb_VeTRIR_b_HV_BatClntTmp_InFA_write_IR,
        &TRIR_ac_DW.CANSignalProcessing);

    /* End of Outputs for SubSystem: '<S138>/CANSignalProcessing' */
#endif

    /* End of Outputs for SubSystem: '<S135>/BTIS_SignalProcessing' */

    /* SignalConversion generated from: '<S63>/VeTRIR_T_HV_BatClntTmp2_Out_read' incorporates:
     *  Merge: '<Root>/Merge_25'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_HV_BatClntTmp_In_IRV_read'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HV_BatClntTmp_InFA_IRV_read'
     */
    rtb_TmpSignalConversionAtVeTRIR_T_HV__mm =
        Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HV_BatClntTmp2_Out_write_IRV();

    /* RelationalOperator: '<S139>/Relational Operator' incorporates:
     *  UnitDelay: '<S139>/Unit Delay'
     */
    rtb_NotEqual_a = (rtb_TmpSignalConversionAtVeTRIR_T_HV__mm ==
                      TRIR_ac_DW.UnitDelay_DSTATE_j);

    /* Outputs for Atomic SubSystem: '<S139>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising' */
    /* Logic: '<S164>/AND' incorporates:
     *  Logic: '<S164>/OR1'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_AND_kc = (rtb_NotEqual_a && (!TRIR_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE_i = rtb_NotEqual_a;

    /* End of Outputs for SubSystem: '<S163>/EdgeRising' */

    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S144>/Calib'
     *  Constant: '<S161>/Calib'
     *  Constant: '<S163>/Constant Value1'
     *  Logic: '<S163>/OR'
     *  Logic: '<S163>/OR1'
     *  MinMax: '<S163>/Minimum'
     *  Sum: '<S163>/Summation'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if ((!rtb_NotEqual_a) || rtb_AND_kc)
    {
        TRIR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        TRIR_ac_DW.UnitDelay_DSTATE_k = fminf(KeTRIR_t_BTS_Debounce,
            HeTRIR_t_MedTEH + TRIR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S163>/Switch1' */
    /* End of Outputs for SubSystem: '<S139>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S135>/BTOS_SignalProcessing' */
#if Rte_SysCon_Variant_TRIR_2

    /* Outputs for Atomic SubSystem: '<S140>/HWIOSignalProcessing' */
    /* Inport: '<Root>/VeTRIB_T_HV_BatClntTmpOut' */
    (void)Rte_Read_VeTRIB_T_HV_BatClntTmpOut_Value
        (&rtb_VariantMergeForOutportProcessed_Outp);

    /* Outputs for Atomic SubSystem: '<S172>/EdgeBi' */
    /* RelationalOperator: '<S174>/Not Equal' incorporates:
     *  UnitDelay: '<S174>/Unit Delay'
     */
    rtb_AND_kc = (rtb_AND_i != TRIR_ac_DW.UnitDelay_DSTATE_d);

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE_d = rtb_AND_i;

    /* End of Outputs for SubSystem: '<S172>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S172>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S173>/Switch1' incorporates:
     *  Switch: '<S175>/Switch'
     */
    if (rtb_AND_kc)
    {
        /* Switch: '<S175>/Switch' */
        if (!rtb_AND_i)
        {
            /* VariantMerge generated from: '<S140>/Processed_Output' incorporates:
             *  Inport: '<Root>/VeTRIB_T_HV_BatClntTmpOut'
             */
            rtb_VariantMergeForOutportProcessed_Outp =
                rtb_HV_BatClntTmpOut_AD_Prev_IRV;
        }
    }
    else
    {
        if (!rtb_AND_i)
        {
            /* Switch: '<S175>/Switch' incorporates:
             *  Inport: '<Root>/VeTRIB_T_HV_BatClntTmpOut'
             */
            rtb_VariantMergeForOutportProcessed_Outp =
                rtb_HV_BatClntTmpOut_AD_Prev_IRV;
        }

        /* VariantMerge generated from: '<S140>/Processed_Output' incorporates:
         *  Constant: '<S143>/Calib'
         *  Inport: '<Root>/VeTRIB_T_HV_BatClntTmpOut'
         *  Product: '<S173>/Multiplication'
         *  Sum: '<S173>/Subtraction'
         *  Sum: '<S173>/Summation'
         *  UnitDelay: '<S173>/Unit Delay'
         */
        rtb_VariantMergeForOutportProcessed_Outp =
            ((rtb_VariantMergeForOutportProcessed_Outp -
              TRIR_ac_DW.UnitDelay_DSTATE_n) * KeTRIR_k_BTOS_LPF) +
            TRIR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* End of Switch: '<S173>/Switch1' */
    /* End of Outputs for SubSystem: '<S172>/Digital Lowpass Reset Enabled' */

    /* VariantMerge generated from: '<S140>/FA_Output' incorporates:
     *  Inport: '<Root>/VeTRIB_b_HV_BatClntTmp_Out_FA'
     */
    (void)Rte_Read_VeTRIB_b_HV_BatClntTmp_Out_FA_Value
        (&rtb_VeTRIR_b_HV_BatClntTmpOutFA_write_IR);

    /* Outputs for Atomic SubSystem: '<S172>/Digital Lowpass Reset Enabled' */
    /* Update for UnitDelay: '<S173>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE_n = rtb_VariantMergeForOutportProcessed_Outp;

    /* End of Outputs for SubSystem: '<S172>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for SubSystem: '<S140>/HWIOSignalProcessing' */
#else

    /* Outputs for Atomic SubSystem: '<S140>/CANSignalProcessing' */
    /* SignalConversion generated from: '<S63>/VeTRIR_T_HV_BatClntTmp_Out_IRV_read' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    rtb_TmpSignalConversionAtVeTRIR_T_HV_B_m =
        Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HV_BatClntTmp_Out_write_IRV();

    /* SignalConversion generated from: '<S63>/VeTRIR_b_HV_BatClntTmp_OutFA_IRV_read' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_j =
        Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HV_BatClntTmpOutFA_write_IRV();

    /* Constant: '<S144>/Calib' */
    TRIR_ac_CANSignalProcessing(rtb_TmpSignalConversionAtVeTRIR_T_HV_B_m,
        rtb_HV_BatClntTmpOut_AD_Prev_IRV, KeTRIR_t_BTS_Debounce, rtb_AND_i,
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_j,
        &rtb_VariantMergeForOutportProcessed_Outp,
        &rtb_VeTRIR_b_HV_BatClntTmpOutFA_write_IR,
        &TRIR_ac_DW.CANSignalProcessing_e);

    /* End of Outputs for SubSystem: '<S140>/CANSignalProcessing' */
#endif

    /* End of Outputs for SubSystem: '<S135>/BTOS_SignalProcessing' */

    /* Switch: '<S136>/Switch' incorporates:
     *  Constant: '<S195>/Calib'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_HV_BatClntTmp_Out_IRV_read'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HV_BatClntTmp_OutFA_IRV_read'
     */
    if (KeTRIR_b_HV_BatClntTmp_In_SD)
    {
        /* Switch: '<S136>/Switch' incorporates:
         *  Constant: '<S181>/Calib'
         */
        rtb_Switch_g = KeTRIR_T_HV_BatClntTmp_In_D;
    }
    else
    {
        /* Switch: '<S136>/Switch' */
        rtb_Switch_g = rtb_VariantMergeForOutportProcessed_Ou_n;
    }

    /* End of Switch: '<S136>/Switch' */

    /* Switch: '<S136>/Switch8' incorporates:
     *  Constant: '<S194>/Calib'
     */
    if (KeTRIR_b_HV_BatClntTmp_In_FA_SD)
    {
        /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp_In_FA' incorporates:
         *  Constant: '<S193>/Calib'
         */
        (void)Rte_Write_VeTRIR_b_HV_BatClntTmp_In_FA_Value
            (KeTRIR_b_HV_BatClntTmp_In_FA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp_In_FA' */
        (void)Rte_Write_VeTRIR_b_HV_BatClntTmp_In_FA_Value
            (rtb_VeTRIR_b_HV_BatClntTmp_InFA_write_IR);
    }

    /* End of Switch: '<S136>/Switch8' */

    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S198>/Calib'
     */
    if (KeTRIR_b_HV_BatClntTmp_Out_SD)
    {
        /* Switch: '<S136>/Switch1' incorporates:
         *  Constant: '<S182>/Calib'
         */
        rtb_Switch1_c = KeTRIR_T_HV_BatClntTmp_Out_D;
    }
    else
    {
        /* Switch: '<S136>/Switch1' */
        rtb_Switch1_c = rtb_VariantMergeForOutportProcessed_Outp;
    }

    /* End of Switch: '<S136>/Switch1' */

    /* Switch: '<S136>/Switch9' incorporates:
     *  Constant: '<S197>/Calib'
     */
    if (KeTRIR_b_HV_BatClntTmp_Out_FA_SD)
    {
        /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp_Out_FA' incorporates:
         *  Constant: '<S196>/Calib'
         */
        (void)Rte_Write_VeTRIR_b_HV_BatClntTmp_Out_FA_Value
            (KeTRIR_b_HV_BatClntTmp_Out_FA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp_Out_FA' */
        (void)Rte_Write_VeTRIR_b_HV_BatClntTmp_Out_FA_Value
            (rtb_VeTRIR_b_HV_BatClntTmpOutFA_write_IR);
    }

    /* End of Switch: '<S136>/Switch9' */

    /* Switch: '<S136>/Switch2' incorporates:
     *  Constant: '<S144>/Calib'
     *  Constant: '<S189>/Calib'
     *  Logic: '<S137>/Logical Operator'
     *  Logic: '<S148>/AND'
     *  RelationalOperator: '<S148>/Greater  Than'
     *  Switch: '<S147>/Switch'
     *  UnitDelay: '<S148>/Unit Delay'
     */
    if (KeTRIR_b_HV_BatClntTmp2_In_SD)
    {
        /* Switch: '<S136>/Switch2' incorporates:
         *  Constant: '<S179>/Calib'
         */
        rtb_Switch2_p = KeTRIR_T_HV_BatClntTmp2_In_D;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S137>/Turn On Delay Time' */
        if ((rtb_RelationalOperator && (TRIR_ac_DW.UnitDelay_DSTATE_l >=
                KeTRIR_t_BTS_Debounce)) && rtb_AND_i)
        {
            /* Switch: '<S147>/Switch' incorporates:
             *  Switch: '<S136>/Switch2'
             */
            rtb_Switch2_p = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
        }
        else
        {
            /* Switch: '<S136>/Switch2' incorporates:
             *  Switch: '<S147>/Switch'
             */
            rtb_Switch2_p = rtb_HV_BatClntTmp2_In_AD_Prev_IRV;
        }

        /* End of Outputs for SubSystem: '<S137>/Turn On Delay Time' */
    }

    /* End of Switch: '<S136>/Switch2' */

    /* Switch: '<S136>/Switch3' incorporates:
     *  Constant: '<S187>/Calib'
     *  Constant: '<S188>/Calib'
     *  Merge: '<Root>/Merge_24'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HV_BatClntTmp2_InFA_read'
     */
    if (KeTRIR_b_HV_BatClntTmp2_In_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HV_BatClntTmp2_In_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HV_BatClntTmp2_InFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp2_InFA' incorporates:
     *  Switch: '<S136>/Switch3'
     */
    (void)Rte_Write_VeTRIR_b_HV_BatClntTmp2_InFA_Value(rtb_RelationalOperator);

    /* Switch: '<S136>/Switch4' incorporates:
     *  Constant: '<S144>/Calib'
     *  Constant: '<S192>/Calib'
     *  Logic: '<S139>/Logical Operator'
     *  Logic: '<S163>/AND'
     *  RelationalOperator: '<S163>/Greater  Than'
     *  Switch: '<S162>/Switch'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if (KeTRIR_b_HV_BatClntTmp2_Out_SD)
    {
        /* Switch: '<S136>/Switch4' incorporates:
         *  Constant: '<S180>/Calib'
         */
        rtb_Switch4 = KeTRIR_T_HV_BatClntTmp2_Out_D;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S139>/Turn On Delay Time' */
        if ((rtb_NotEqual_a && (TRIR_ac_DW.UnitDelay_DSTATE_k >=
                                KeTRIR_t_BTS_Debounce)) && rtb_AND_i)
        {
            /* Switch: '<S162>/Switch' incorporates:
             *  Switch: '<S136>/Switch4'
             */
            rtb_Switch4 = rtb_TmpSignalConversionAtVeTRIR_T_HV__mm;
        }
        else
        {
            /* Switch: '<S136>/Switch4' incorporates:
             *  Switch: '<S162>/Switch'
             */
            rtb_Switch4 = rtb_HV_BatClntTmpOut2_AD_Prev_IRV;
        }

        /* End of Outputs for SubSystem: '<S139>/Turn On Delay Time' */
    }

    /* End of Switch: '<S136>/Switch4' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTRIB_b_HtrCorClnt_TmpIn_FA' */
    (void)Rte_Read_VeTRIB_b_HtrCorClnt_TmpIn_FA_Value(&rtb_Switch6);

    /* Inport: '<Root>/VeTRIB_T_HtrCorClnt_TmpIn' */
    (void)Rte_Read_VeTRIB_T_HtrCorClnt_TmpIn_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTRIB_b_BatBotlClntLoLvl_FA' */
    (void)Rte_Read_VeTRIB_b_BatBotlClntLoLvl_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTRIB_U_BatBotlClnt_LoLvlVolt' */
    (void)Rte_Read_VeTRIB_U_BatBotlClnt_LoLvlVolt_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/TRIR_MedTEH'
     */
    /* Switch: '<S136>/Switch5' incorporates:
     *  Constant: '<S190>/Calib'
     *  Constant: '<S191>/Calib'
     *  Merge: '<Root>/Merge_26'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HV_BatClntTmp2OutFA_read'
     */
    if (KeTRIR_b_HV_BatClntTmp2_Out_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HV_BatClntTmp2_Out_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HV_BatClntTmp2OutFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp2_OutFA' incorporates:
     *  Switch: '<S136>/Switch5'
     */
    (void)Rte_Write_VeTRIR_b_HV_BatClntTmp2_OutFA_Value(rtb_RelationalOperator);

    /* Switch: '<S136>/Switch7' incorporates:
     *  Constant: '<S186>/Calib'
     */
    if (KeTRIR_b_BatBotlClnt_LoLvl_SD)
    {
        /* Outport: '<Root>/VeTRIR_U_BatBotlClnt_LoLvlVolt' incorporates:
         *  Constant: '<S183>/Calib'
         */
        (void)Rte_Write_VeTRIR_U_BatBotlClnt_LoLvlVolt_Value
            (KeTRIR_U_BatBotlClnt_LoLvl_D);
    }
    else
    {
        /* Outport: '<Root>/VeTRIR_U_BatBotlClnt_LoLvlVolt' */
        (void)Rte_Write_VeTRIR_U_BatBotlClnt_LoLvlVolt_Value(tmpRead);
    }

    /* End of Switch: '<S136>/Switch7' */

    /* Switch: '<S136>/Switch6' incorporates:
     *  Constant: '<S185>/Calib'
     */
    if (KeTRIR_b_BatBotlClntLoLvl_OC_SD)
    {
        /* Outport: '<Root>/VeTRIR_b_BatBotlClntLoLvl_OC' incorporates:
         *  Constant: '<S184>/Calib'
         */
        (void)Rte_Write_VeTRIR_b_BatBotlClntLoLvl_OC_Value
            (KeTRIR_b_BatBotlClntLoLvl_OC_D);
    }
    else
    {
        /* Outport: '<Root>/VeTRIR_b_BatBotlClntLoLvl_OC' */
        (void)Rte_Write_VeTRIR_b_BatBotlClntLoLvl_OC_Value(tmpRead_0);
    }

    /* End of Switch: '<S136>/Switch6' */

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmp2_In' incorporates:
     *  SignalConversion generated from: '<S63>/HV_BatClntTmp2_In_AD'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmp2_In_Value(rtb_Switch2_p);

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmpOut2' incorporates:
     *  SignalConversion generated from: '<S63>/HV_BatClntTmpOut2_AD'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmpOut2_Value(rtb_Switch4);

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmpOut' incorporates:
     *  SignalConversion generated from: '<S63>/HV_BatClntTmpOut_AD'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmpOut_Value(rtb_Switch1_c);

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmp_In' incorporates:
     *  SignalConversion generated from: '<S63>/HV_BatClntTmp_In_AD'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmp_In_Value(rtb_Switch_g);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion: '<S136>/Signal Copy2'
     *  SignalConversion generated from: '<S63>/HV_BatClntTmp2_In_AD_Prev'
     */
    Rte_IrvWrite_TRIR_MedTEH_HV_BatClntTmp2_In_AD_Prev_IRV(rtb_Switch2_p);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion: '<S136>/Signal Copy3'
     *  SignalConversion generated from: '<S63>/HV_BatClntTmpOut2_AD_Prev'
     */
    Rte_IrvWrite_TRIR_MedTEH_HV_BatClntTmpOut2_AD_Prev_IRV(rtb_Switch4);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion: '<S136>/Signal Copy1'
     *  SignalConversion generated from: '<S63>/HV_BatClntTmpOut_AD_Prev'
     */
    Rte_IrvWrite_TRIR_MedTEH_HV_BatClntTmpOut_AD_Prev_IRV(rtb_Switch1_c);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion: '<S136>/Signal Copy'
     *  SignalConversion generated from: '<S63>/HV_BatClntTmp_In_AD_Prev'
     */
    Rte_IrvWrite_TRIR_MedTEH_HV_BatClntTmp_In_AD_Prev_IRV(rtb_Switch_g);

    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S259>/Calib'
     */
    if (KeTRIR_b_HtrCorClnt_TmpIn_SD)
    {
        /* Outport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn' incorporates:
         *  Constant: '<S203>/Calib'
         */
        (void)Rte_Write_VeTRIR_T_HtrCorClnt_TmpIn_Value
            (KeTRIR_T_HtrCorClnt_TmpIn_D);
    }
    else
    {
        /* Outport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn' */
        (void)Rte_Write_VeTRIR_T_HtrCorClnt_TmpIn_Value(tmpRead_1);
    }

    /* End of Switch: '<S131>/Switch1' */

    /* Switch: '<S131>/Switch2' incorporates:
     *  Constant: '<S258>/Calib'
     */
    if (KeTRIR_b_HtrCorClnt_TmpIn_FA_SD)
    {
        /* Outport: '<Root>/VeTRIR_b_HtrCorClnt_TmpIn_FA' incorporates:
         *  Constant: '<S257>/Calib'
         */
        (void)Rte_Write_VeTRIR_b_HtrCorClnt_TmpIn_FA_Value
            (KeTRIR_b_HtrCorClnt_TmpIn_FA_D);
    }
    else
    {
        /* Outport: '<Root>/VeTRIR_b_HtrCorClnt_TmpIn_FA' */
        (void)Rte_Write_VeTRIR_b_HtrCorClnt_TmpIn_FA_Value(rtb_Switch6);
    }

    /* End of Switch: '<S131>/Switch2' */

    /* Switch: '<S131>/Switch3' incorporates:
     *  Constant: '<S199>/Calib'
     *  Constant: '<S209>/Calib'
     *  Merge: '<Root>/Merge_39'
     *  SignalConversion generated from: '<S63>/VeTRIR_Pct_AirHtwPwrTgt_read'
     */
    if (KeTRIR_b_AirHtrPwrTgt_SD)
    {
        rtb_Switch_g = KeTRIR_Pct_AirHtrPwrTgt_D;
    }
    else
    {
        rtb_Switch_g = Rte_IrvRead_TRIR_MedTEH_VeTRIR_Pct_AirHtwPwrTgt_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTRIR_Pct_AirHtrPwrTgt' incorporates:
     *  Switch: '<S131>/Switch3'
     */
    (void)Rte_Write_VeTRIR_Pct_AirHtrPwrTgt_Value(rtb_Switch_g);

    /* Switch: '<S131>/Switch4' incorporates:
     *  Constant: '<S207>/Calib'
     *  Constant: '<S208>/Calib'
     *  Merge: '<Root>/Merge_40'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_AirHtwPwrTgtFA_read'
     */
    if (KeTRIR_b_AirHtrPwrTgt_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_AirHtrPwrTgt_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_AirHtwPwrTgtFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_AirHtrPwrTgt_FA' incorporates:
     *  Switch: '<S131>/Switch4'
     */
    (void)Rte_Write_VeTRIR_b_AirHtrPwrTgt_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch5' incorporates:
     *  Constant: '<S206>/Calib'
     */
    if (KeTRIR_b_AHP_EnblReq_FA_SD)
    {
        /* Switch: '<S131>/Switch5' incorporates:
         *  Constant: '<S205>/Calib'
         */
        VeTRIR_b_AHP_EnblReq_FA = KeTRIR_b_AHP_EnblReq_FA_D;
    }
    else
    {
        /* Switch: '<S131>/Switch5' incorporates:
         *  Merge: '<Root>/Merge_29'
         *  SignalConversion generated from: '<S63>/VeTRIR_b_AHP_EnblReqFA_read'
         */
        VeTRIR_b_AHP_EnblReq_FA =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_AHP_EnblReqFA_write_IRV();
    }

    /* End of Switch: '<S131>/Switch5' */

    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S205>/Calib'
     *  Merge: '<Root>/Merge_28'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_AHP_EnblReq_read'
     */
    if (VeTRIR_b_AHP_EnblReq_FA)
    {
        rtb_RelationalOperator = KeTRIR_b_AHP_EnblReq_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_AHP_EnblReq_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_AHP_EnblReq' incorporates:
     *  Switch: '<S131>/Switch'
     */
    (void)Rte_Write_VeTRIR_b_AHP_EnblReq_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch6' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S262>/Calib'
     *  Merge: '<Root>/Merge_34'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_HtrCorClnt_TmpOut_read'
     */
    if (KeTRIR_b_HtrCorClnt_TmpOut_SD)
    {
        rtb_Switch_g = KeTRIR_T_HtrCorClnt_TmpOut_D;
    }
    else
    {
        rtb_Switch_g =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HtrCorClnt_TmpOut_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_T_HtrCorClnt_TmpOut' incorporates:
     *  Switch: '<S131>/Switch6'
     */
    (void)Rte_Write_VeTRIR_T_HtrCorClnt_TmpOut_Value(rtb_Switch_g);

    /* Switch: '<S131>/Switch7' incorporates:
     *  Constant: '<S260>/Calib'
     *  Constant: '<S261>/Calib'
     *  Merge: '<Root>/Merge_27'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HtrCorClnt_TmpOutFA_read'
     */
    if (KeTRIR_b_HtrCorClnt_TmpOut_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HtrCorClnt_TmpOut_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HtrCorClnt_TmpOutFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HtrCorClnt_TmpOut_FA' incorporates:
     *  Switch: '<S131>/Switch7'
     */
    (void)Rte_Write_VeTRIR_b_HtrCorClnt_TmpOut_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch8' incorporates:
     *  Constant: '<S201>/Calib'
     *  Constant: '<S253>/Calib'
     *  Merge: '<Root>/Merge_36'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_HtmpRadCool_TmpIn_read'
     */
    if (KeTRIR_b_HtmpRadCool_TmpIn_SD)
    {
        rtb_Switch_g = KeTRIR_T_HtmpRadCool_TmpIn_D;
    }
    else
    {
        rtb_Switch_g =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HtmpRadCool_TmpIn_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_T_HtmpRadCool_TmpIn' incorporates:
     *  Switch: '<S131>/Switch8'
     */
    (void)Rte_Write_VeTRIR_T_HtmpRadCool_TmpIn_Value(rtb_Switch_g);

    /* Switch: '<S131>/Switch9' incorporates:
     *  Constant: '<S251>/Calib'
     *  Constant: '<S252>/Calib'
     *  Merge: '<Root>/Merge_35'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HtmpRadCool_TmpInFA_read'
     */
    if (KeTRIR_b_HtmpRadCool_TmpIn_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HtmpRadCool_TmpIn_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HtmpRadCool_TmpInFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HtmpRadCool_TmpIn_FA' incorporates:
     *  Switch: '<S131>/Switch9'
     */
    (void)Rte_Write_VeTRIR_b_HtmpRadCool_TmpIn_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch11' incorporates:
     *  Constant: '<S202>/Calib'
     *  Constant: '<S256>/Calib'
     *  Merge: '<Root>/Merge_30'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_HtmpRadCool_TmpOut_read'
     */
    if (KeTRIR_b_HtmpRadCool_TmpOut_SD)
    {
        rtb_Switch_g = KeTRIR_T_HtmpRadCool_TmpOut_D;
    }
    else
    {
        rtb_Switch_g =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HtmpRadCool_TmpOut_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_T_HtmpRadCool_TmpOut' incorporates:
     *  Switch: '<S131>/Switch11'
     */
    (void)Rte_Write_VeTRIR_T_HtmpRadCool_TmpOut_Value(rtb_Switch_g);

    /* Switch: '<S131>/Switch10' incorporates:
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Merge: '<Root>/Merge_37'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HtmpRadCool_TmpOutFA_read'
     */
    if (KeTRIR_b_HtmpRadCool_TmpOut_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HtmpRadCool_TmpOut_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HtmpRadCool_TmpOutFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HtmpRadCool_TmpOut_FA' incorporates:
     *  Switch: '<S131>/Switch10'
     */
    (void)Rte_Write_VeTRIR_b_HtmpRadCool_TmpOut_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch12' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S250>/Calib'
     *  Merge: '<Root>/Merge_31'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_HeatExCool_TmpOut_read'
     */
    if (KeTRIR_b_HeatExCool_TmpOut_SD)
    {
        rtb_Switch_g = KeTRIR_T_HeatExCool_TmpOut_D;
    }
    else
    {
        rtb_Switch_g =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_HeatExCool_TmpOut_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_T_HeatExCool_TmpOut' incorporates:
     *  Switch: '<S131>/Switch12'
     */
    (void)Rte_Write_VeTRIR_T_HeatExCool_TmpOut_Value(rtb_Switch_g);

    /* Switch: '<S131>/Switch13' incorporates:
     *  Constant: '<S210>/Calib'
     *  Constant: '<S211>/Calib'
     *  Merge: '<Root>/Merge_32'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HeatExCool_TmpOutFA_read'
     */
    if (KeTRIR_b_HeatExCool_TmpOut_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HeatExCool_TmpOut_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HeatExCool_TmpOutFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HeatExCool_TmpOut_FA' incorporates:
     *  Switch: '<S131>/Switch13'
     */
    (void)Rte_Write_VeTRIR_b_HeatExCool_TmpOut_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch14' incorporates:
     *  Constant: '<S212>/Calib'
     *  Constant: '<S224>/Calib'
     *  Merge: '<Root>/Merge_55'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_HSW_Sts_read'
     */
    if (KeTRIR_b_HSW_Sts_SD)
    {
        tmp = KeTRIR_e_HSW_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_HSW_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_HSW_Sts' incorporates:
     *  Switch: '<S131>/Switch14'
     */
    (void)Rte_Write_VeTRIR_e_HSW_Sts_Value(tmp);

    /* Switch: '<S131>/Switch15' incorporates:
     *  Constant: '<S223>/Calib'
     *  Constant: '<S233>/Calib'
     *  Merge: '<Root>/Merge_56'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HSW_StsFA_read'
     */
    if (KeTRIR_b_HSW_Sts_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HSW_Sts_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HSW_StsFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HSW_Sts_FA' incorporates:
     *  Switch: '<S131>/Switch15'
     */
    (void)Rte_Write_VeTRIR_b_HSW_Sts_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch16' incorporates:
     *  Constant: '<S234>/Calib'
     *  Constant: '<S235>/Calib'
     *  Merge: '<Root>/Merge_62'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HSW_Fail_read'
     */
    if (KeTRIR_b_HSW_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HSW_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HSW_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HSW_Fail' incorporates:
     *  Switch: '<S131>/Switch16'
     */
    (void)Rte_Write_VeTRIR_b_HSW_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch17' incorporates:
     *  Constant: '<S225>/Calib'
     *  Constant: '<S244>/Calib'
     *  Merge: '<Root>/Merge_63'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_FL_HS_Sts_read'
     */
    if (KeTRIR_b_FL_HS_Sts_SD)
    {
        tmp = KeTRIR_e_FL_HS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_FL_HS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_FL_HS_Sts' incorporates:
     *  Switch: '<S131>/Switch17'
     */
    (void)Rte_Write_VeTRIR_e_FL_HS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch18' incorporates:
     *  Constant: '<S236>/Calib'
     *  Constant: '<S245>/Calib'
     *  Merge: '<Root>/Merge_64'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_FL_HS_Fail_read'
     */
    if (KeTRIR_b_FL_HS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_FL_HS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_FL_HS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_FL_HS_Fail' incorporates:
     *  Switch: '<S131>/Switch18'
     */
    (void)Rte_Write_VeTRIR_b_FL_HS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch19' incorporates:
     *  Constant: '<S226>/Calib'
     *  Constant: '<S246>/Calib'
     *  Merge: '<Root>/Merge_57'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_FR_HS_Sts_read'
     */
    if (KeTRIR_b_FR_HS_Sts_SD)
    {
        tmp = KeTRIR_e_FR_HS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_FR_HS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_FR_HS_Sts' incorporates:
     *  Switch: '<S131>/Switch19'
     */
    (void)Rte_Write_VeTRIR_e_FR_HS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch20' incorporates:
     *  Constant: '<S237>/Calib'
     *  Constant: '<S247>/Calib'
     *  Merge: '<Root>/Merge_58'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_FR_HS_Fail_read'
     */
    if (KeTRIR_b_FR_HS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_FR_HS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_FR_HS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_FR_HS_Fail' incorporates:
     *  Switch: '<S131>/Switch20'
     */
    (void)Rte_Write_VeTRIR_b_FR_HS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch21' incorporates:
     *  Constant: '<S227>/Calib'
     *  Constant: '<S248>/Calib'
     *  Merge: '<Root>/Merge_59'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_RL_HS_Sts_read'
     */
    if (KeTRIR_b_RL_HS_Sts_SD)
    {
        tmp = KeTRIR_e_RL_HS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_RL_HS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_RL_HS_Sts' incorporates:
     *  Switch: '<S131>/Switch21'
     */
    (void)Rte_Write_VeTRIR_e_RL_HS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch22' incorporates:
     *  Constant: '<S238>/Calib'
     *  Constant: '<S249>/Calib'
     *  Merge: '<Root>/Merge_60'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_RL_HS_Fail_read'
     */
    if (KeTRIR_b_RL_HS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_RL_HS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_RL_HS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_RL_HS_Fail' incorporates:
     *  Switch: '<S131>/Switch22'
     */
    (void)Rte_Write_VeTRIR_b_RL_HS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch23' incorporates:
     *  Constant: '<S213>/Calib'
     *  Constant: '<S228>/Calib'
     *  Merge: '<Root>/Merge_61'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_RR_HS_Sts_read'
     */
    if (KeTRIR_b_RR_HS_Sts_SD)
    {
        tmp = KeTRIR_e_RR_HS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_RR_HS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_RR_HS_Sts' incorporates:
     *  Switch: '<S131>/Switch23'
     */
    (void)Rte_Write_VeTRIR_e_RR_HS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch24' incorporates:
     *  Constant: '<S214>/Calib'
     *  Constant: '<S239>/Calib'
     *  Merge: '<Root>/Merge_70'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_RR_HS_Fail_read'
     */
    if (KeTRIR_b_RR_HS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_RR_HS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_RR_HS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_RR_HS_Fail' incorporates:
     *  Switch: '<S131>/Switch24'
     */
    (void)Rte_Write_VeTRIR_b_RR_HS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch25' incorporates:
     *  Constant: '<S215>/Calib'
     *  Constant: '<S229>/Calib'
     *  Merge: '<Root>/Merge_71'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_FL_VS_Sts_read'
     */
    if (KeTRIR_b_FL_VS_Sts_SD)
    {
        tmp = KeTRIR_e_FL_VS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_FL_VS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_FL_VS_Sts' incorporates:
     *  Switch: '<S131>/Switch25'
     */
    (void)Rte_Write_VeTRIR_e_FL_VS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch26' incorporates:
     *  Constant: '<S216>/Calib'
     *  Constant: '<S240>/Calib'
     *  Merge: '<Root>/Merge_65'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_FL_VS_Fail_read'
     */
    if (KeTRIR_b_FL_VS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_FL_VS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_FL_VS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_FL_VS_Fail' incorporates:
     *  Switch: '<S131>/Switch26'
     */
    (void)Rte_Write_VeTRIR_b_FL_VS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch27' incorporates:
     *  Constant: '<S217>/Calib'
     *  Constant: '<S230>/Calib'
     *  Merge: '<Root>/Merge_66'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_FR_VS_Sts_read'
     */
    if (KeTRIR_b_FR_VS_Sts_SD)
    {
        tmp = KeTRIR_e_FR_VS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_FR_VS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_FR_VS_Sts' incorporates:
     *  Switch: '<S131>/Switch27'
     */
    (void)Rte_Write_VeTRIR_e_FR_VS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch28' incorporates:
     *  Constant: '<S218>/Calib'
     *  Constant: '<S241>/Calib'
     *  Merge: '<Root>/Merge_67'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_FR_VS_Fail_read'
     */
    if (KeTRIR_b_FR_VS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_FR_VS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_FR_VS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_FR_VS_Fail' incorporates:
     *  Switch: '<S131>/Switch28'
     */
    (void)Rte_Write_VeTRIR_b_FR_VS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch29' incorporates:
     *  Constant: '<S219>/Calib'
     *  Constant: '<S231>/Calib'
     *  Merge: '<Root>/Merge_68'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_RL_VS_Sts_read'
     */
    if (KeTRIR_b_RL_VS_Sts_SD)
    {
        tmp = KeTRIR_e_RL_VS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_RL_VS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_RL_VS_Sts' incorporates:
     *  Switch: '<S131>/Switch29'
     */
    (void)Rte_Write_VeTRIR_e_RL_VS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch30' incorporates:
     *  Constant: '<S220>/Calib'
     *  Constant: '<S242>/Calib'
     *  Merge: '<Root>/Merge_69'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_RL_VS_Fail_read'
     */
    if (KeTRIR_b_RL_VS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_RL_VS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_RL_VS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_RL_VS_Fail' incorporates:
     *  Switch: '<S131>/Switch30'
     */
    (void)Rte_Write_VeTRIR_b_RL_VS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S131>/Switch31' incorporates:
     *  Constant: '<S221>/Calib'
     *  Constant: '<S232>/Calib'
     *  Merge: '<Root>/Merge_72'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_RR_VS_Sts_read'
     */
    if (KeTRIR_b_RR_VS_Sts_SD)
    {
        tmp = KeTRIR_e_RR_VS_Sts_D;
    }
    else
    {
        tmp = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_RR_VS_Sts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_RR_VS_Sts' incorporates:
     *  Switch: '<S131>/Switch31'
     */
    (void)Rte_Write_VeTRIR_e_RR_VS_Sts_Value(tmp);

    /* Switch: '<S131>/Switch32' incorporates:
     *  Constant: '<S222>/Calib'
     *  Constant: '<S243>/Calib'
     *  Merge: '<Root>/Merge_73'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_RR_VS_Fail_read'
     */
    if (KeTRIR_b_RR_VS_Fail_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_RR_VS_Fail_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_RR_VS_Fail_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_RR_VS_Fail' incorporates:
     *  Switch: '<S131>/Switch32'
     */
    (void)Rte_Write_VeTRIR_b_RR_VS_Fail_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch1' incorporates:
     *  Constant: '<S264>/Calib'
     *  Constant: '<S283>/Calib'
     *  Merge: '<Root>/Merge_12'
     *  SignalConversion generated from: '<S63>/VeTRIR_P_SDS_HV_PwrAvg_read'
     */
    if (KeTRIR_b_SDS_HV_PwrAvgRaw_SD)
    {
        rtb_Switch_g = KeTRIR_P_SDS_HV_PwrAvgRaw_D;
    }
    else
    {
        rtb_Switch_g = Rte_IrvRead_TRIR_MedTEH_VeTRIR_P_SDS_HV_PwrAvg_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_P_SDS_HV_PwrAvgRaw' incorporates:
     *  Switch: '<S132>/Switch1'
     */
    (void)Rte_Write_VeTRIR_P_SDS_HV_PwrAvgRaw_Value(rtb_Switch_g);

    /* Switch: '<S132>/Switch2' incorporates:
     *  Constant: '<S284>/Calib'
     *  Constant: '<S285>/Calib'
     *  Merge: '<Root>/Merge_11'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_HV_PwrAvgFA_read'
     */
    if (KeTRIR_b_SDS_HV_PwrAvg_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_HV_PwrAvg_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_HV_PwrAvgFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_HV_PwrAvgRaw_FA' incorporates:
     *  Switch: '<S132>/Switch2'
     */
    (void)Rte_Write_VeTRIR_b_SDS_HV_PwrAvgRaw_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch3' incorporates:
     *  Constant: '<S286>/Calib'
     *  Constant: '<S287>/Calib'
     *  Merge: '<Root>/Merge_13'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd_read'
     */
    if (KeTRIR_b_SDS_HV_PwrAvg_Rcvd_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_HV_PwrAvg_Rcvd_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw' incorporates:
     *  Switch: '<S132>/Switch3'
     */
    (void)Rte_Write_VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch4' incorporates:
     *  Constant: '<S265>/Calib'
     *  Constant: '<S277>/Calib'
     *  Merge: '<Root>/Merge_6'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_SDS_ClntTmpIn_Act_read'
     */
    if (KeTRIR_b_SDS_ClntTmpIn_Act_SD)
    {
        rtb_Switch_g = KeTRIR_T_SDS_ClntTmpIn_Act_D;
    }
    else
    {
        rtb_Switch_g =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_SDS_ClntTmpIn_Act_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_T_SDS_ClntTmpIn_Act' incorporates:
     *  Switch: '<S132>/Switch4'
     */
    (void)Rte_Write_VeTRIR_T_SDS_ClntTmpIn_Act_Value(rtb_Switch_g);

    /* Switch: '<S132>/Switch5' incorporates:
     *  Constant: '<S274>/Calib'
     */
    if (KeTRIR_b_SDS_ClntTmpIn_Act_FA_SD)
    {
        /* Switch: '<S132>/Switch5' incorporates:
         *  Constant: '<S273>/Calib'
         */
        VeTRIR_b_SDS_ClntTmpIn_Act_FA_AD = KeTRIR_b_SDS_ClntTmpIn_Act_FA_D;
    }
    else
    {
        /* Switch: '<S132>/Switch5' incorporates:
         *  Merge: '<Root>/Merge_5'
         *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_ClntTmpIn_ActFA_read'
         */
        VeTRIR_b_SDS_ClntTmpIn_Act_FA_AD =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_ClntTmpIn_ActFA_write_IRV();
    }

    /* End of Switch: '<S132>/Switch5' */

    /* Switch: '<S132>/Switch6' incorporates:
     *  Constant: '<S276>/Calib'
     */
    if (KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_SD)
    {
        /* Switch: '<S132>/Switch6' incorporates:
         *  Constant: '<S275>/Calib'
         */
        rtb_Switch6 = KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_D;
    }
    else
    {
        /* Switch: '<S132>/Switch6' incorporates:
         *  Merge: '<Root>/Merge_7'
         *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_read'
         */
        rtb_Switch6 =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write_IRV
            ();
    }

    /* End of Switch: '<S132>/Switch6' */

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Act_FA_final' incorporates:
     *  Switch: '<S132>/Switch'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Act_FA_final_Value((!rtb_Switch6) ||
        (VeTRIR_b_SDS_ClntTmpIn_Act_FA_AD));

    /* Switch: '<S132>/Switch7' incorporates:
     *  Constant: '<S266>/Calib'
     *  Constant: '<S282>/Calib'
     *  Merge: '<Root>/Merge_9'
     *  SignalConversion generated from: '<S63>/VeTRIR_T_SDS_ClntTmpIn_Tgt_read'
     */
    if (KeTRIR_b_SDS_ClntTmpIn_Tgt_SD)
    {
        rtb_Switch_g = KeTRIR_T_SDS_ClntTmpIn_Tgt_D;
    }
    else
    {
        rtb_Switch_g =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_T_SDS_ClntTmpIn_Tgt_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_T_SDS_ClntTmpIn_Tgt' incorporates:
     *  Switch: '<S132>/Switch7'
     */
    (void)Rte_Write_VeTRIR_T_SDS_ClntTmpIn_Tgt_Value(rtb_Switch_g);

    /* Switch: '<S132>/Switch8' incorporates:
     *  Constant: '<S278>/Calib'
     *  Constant: '<S279>/Calib'
     *  Merge: '<Root>/Merge_8'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_ClntTmpIn_TgtFA_read'
     */
    if (KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_ClntTmpIn_TgtFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Tgt_FA' incorporates:
     *  Switch: '<S132>/Switch8'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Tgt_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch9' incorporates:
     *  Constant: '<S280>/Calib'
     *  Constant: '<S281>/Calib'
     *  Merge: '<Root>/Merge_10'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd_read'
     */
    if (KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd' incorporates:
     *  Switch: '<S132>/Switch9'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch10' incorporates:
     *  Constant: '<S272>/Calib'
     *  Constant: '<S293>/Calib'
     *  Merge: '<Root>/Merge_3'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_SDS_ActualState_read'
     */
    if (KeTRIR_b_SDS_ActualState_SD)
    {
        tmp_0 = KeTRIR_e_SDS_ActualState_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_SDS_ActualState_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_SDS_ActualState' incorporates:
     *  Switch: '<S132>/Switch10'
     */
    (void)Rte_Write_VeTRIR_e_SDS_ActualState_Value(tmp_0);

    /* Switch: '<S132>/Switch11' incorporates:
     *  Constant: '<S268>/Calib'
     *  Constant: '<S269>/Calib'
     *  Merge: '<Root>/Merge_2'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_ActualStateFA_read'
     */
    if (KeTRIR_b_SDS_ActualState_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_ActualState_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_ActualStateFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_ActualState_FA' incorporates:
     *  Switch: '<S132>/Switch11'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ActualState_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch12' incorporates:
     *  Constant: '<S270>/Calib'
     *  Constant: '<S271>/Calib'
     *  Merge: '<Root>/Merge_4'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_ActualStateSgnl_Rcvd_read'
     */
    if (KeTRIR_b_SDS_ActualState_Rcvd_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_ActualState_Rcvd_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_ActualStateSgnl_Rcvd_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_ActualState_Rcvd' incorporates:
     *  Switch: '<S132>/Switch12'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ActualState_Rcvd_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch13' incorporates:
     *  Constant: '<S292>/Calib'
     *  Constant: '<S294>/Calib'
     *  Merge: '<Root>/Merge_15'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_SDS_MaxCoolingReq_read'
     */
    if (KeTRIR_b_SDS_MaxCoolingReq_SD)
    {
        tmp_1 = KeTRIR_e_SDS_MaxCoolingReq_D;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_SDS_MaxCoolingReq_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_SDS_MaxCoolingReq' incorporates:
     *  Switch: '<S132>/Switch13'
     */
    (void)Rte_Write_VeTRIR_e_SDS_MaxCoolingReq_Value(tmp_1);

    /* Switch: '<S132>/Switch14' incorporates:
     *  Constant: '<S288>/Calib'
     *  Constant: '<S289>/Calib'
     *  Merge: '<Root>/Merge_14'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_MaxCoolingReqFA_read'
     */
    if (KeTRIR_b_SDS_MaxCoolingReq_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_MaxCoolingReq_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_MaxCoolingReqFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_MaxCoolingReq_FA' incorporates:
     *  Switch: '<S132>/Switch14'
     */
    (void)Rte_Write_VeTRIR_b_SDS_MaxCoolingReq_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch15' incorporates:
     *  Constant: '<S290>/Calib'
     *  Constant: '<S291>/Calib'
     *  Merge: '<Root>/Merge_16'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd_read'
     */
    if (KeTRIR_b_SDS_MaxCoolingReq_Rcvd_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SDS_MaxCoolingReq_Rcvd_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTRIR_b_SDS_MaxCoolingReq_Rcvd' incorporates:
     *  Switch: '<S132>/Switch15'
     */
    (void)Rte_Write_VeTRIR_b_SDS_MaxCoolingReq_Rcvd_Value(rtb_RelationalOperator);

    /* Switch: '<S132>/Switch16' incorporates:
     *  Constant: '<S263>/Calib'
     *  Constant: '<S267>/Calib'
     *  Merge: '<Root>/Merge_1'
     *  SignalConversion generated from: '<S63>/VeTRIR_Cnt_MC_RHSC2_Cooling_read'
     */
    if (KeTRIR_b_MC_RHSC2_Cooling_SD)
    {
        tmp_2 = KeTRIR_Cnt_MC_RHSC2_Cooling_D;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TRIR_MedTEH_VeTRIR_Cnt_MC_RHSC2_Cooling_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_Cnt_MC_RHSC2_Cooling' incorporates:
     *  Switch: '<S132>/Switch16'
     */
    (void)Rte_Write_VeTRIR_Cnt_MC_RHSC2_Cooling_Value(tmp_2);

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Act_Rcvd' incorporates:
     *  SignalConversion generated from: '<S63>/SDS_ClntTmpIn_Act_Rcvd_AD'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_Value(rtb_Switch6);

    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S318>/Calib'
     *  Constant: '<S319>/Calib'
     *  Merge: '<Root>/Merge_54'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_SCCActv_read'
     */
    if (KeTRIR_b_SCCActv_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_SCCActv_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_SCCActv_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_SCCActv' incorporates:
     *  Switch: '<S134>/Switch1'
     */
    (void)Rte_Write_VeTRIR_b_SCCActv_Value(rtb_RelationalOperator);

    /* Switch: '<S134>/Switch' incorporates:
     *  Constant: '<S317>/Calib'
     *  Constant: '<S322>/Calib'
     *  Merge: '<Root>/Merge_53'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_HVACPrecCondSts_read'
     */
    if (KeTRIR_b_HVAC_St_SD)
    {
        tmp_3 = KeTRIR_e_HVAC_St_D;
    }
    else
    {
        tmp_3 = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_HVACPrecCondSts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_HVACSt' incorporates:
     *  Switch: '<S134>/Switch'
     */
    (void)Rte_Write_VeTRIR_e_HVACSt_Value(tmp_3);

    /* Switch: '<S134>/Switch2' incorporates:
     *  Constant: '<S316>/Calib'
     *  Constant: '<S321>/Calib'
     *  Merge: '<Root>/Merge_51'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_HVACECOModeSts_read'
     */
    if (KeTRIR_b_HVACECOModeSts_SD)
    {
        tmp_4 = KeTRIR_e_HVACECOModeSts_D;
    }
    else
    {
        tmp_4 = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_HVACECOModeSts_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_HVACECOModeSts' incorporates:
     *  Switch: '<S134>/Switch2'
     */
    (void)Rte_Write_VeTRIR_e_HVACECOModeSts_Value(tmp_4);

    /* Switch: '<S134>/Switch3' incorporates:
     *  Constant: '<S314>/Calib'
     *  Constant: '<S315>/Calib'
     *  Merge: '<Root>/Merge_52'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_HVACECOModeStsFA_read'
     */
    if (KeTRIR_b_HVACECOModeSts_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_HVACECOModeSts_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_HVACECOModeStsFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_HVACECOModeSts_FA' incorporates:
     *  Switch: '<S134>/Switch3'
     */
    (void)Rte_Write_VeTRIR_b_HVACECOModeSts_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S134>/Switch4' incorporates:
     *  Constant: '<S313>/Calib'
     *  Constant: '<S320>/Calib'
     *  Merge: '<Root>/Merge_49'
     *  SignalConversion generated from: '<S63>/VeTRIR_e_ClimateInfo_read'
     */
    if (KeTRIR_b_ClimateInfo_SD)
    {
        tmp_5 = KeTRIR_e_ClimateInfo_D;
    }
    else
    {
        tmp_5 = Rte_IrvRead_TRIR_MedTEH_VeTRIR_e_ClimateInfo_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_e_ClimateInfo' incorporates:
     *  Switch: '<S134>/Switch4'
     */
    (void)Rte_Write_VeTRIR_e_ClimateInfo_Value(tmp_5);

    /* Switch: '<S134>/Switch5' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S312>/Calib'
     *  Merge: '<Root>/Merge_50'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_ClimateInfoFA_read'
     */
    if (KeTRIR_b_ClimateInfo_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_ClimateInfo_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_ClimateInfoFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_ClimateInfo_FA' incorporates:
     *  Switch: '<S134>/Switch5'
     */
    (void)Rte_Write_VeTRIR_b_ClimateInfo_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S133>/Switch' incorporates:
     *  Constant: '<S299>/Calib'
     *  Constant: '<S302>/Calib'
     *  Merge: '<Root>/Merge_46'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_ETM_KeepHotColdButtonStatus_read'
     */
    if (KeTRIR_b_KeepHotColdButtonStatus_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_KeepHotColdButtonStatus_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_ETM_KeepHotColdButtonStatus_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTRIR_b_KeepHotColdButtonStatus' incorporates:
     *  Switch: '<S133>/Switch'
     */
    (void)Rte_Write_VeTRIR_b_KeepHotColdButtonStatus_Value
        (rtb_RelationalOperator);

    /* Switch: '<S133>/Switch1' incorporates:
     *  Constant: '<S300>/Calib'
     *  Constant: '<S301>/Calib'
     *  Merge: '<Root>/Merge_47'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_ETM_KeepHotColdButtonStatusFA_read'
     */
    if (KeTRIR_b_KeepHotColdButtonStatus_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_KeepHotColdButtonStatus_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_ETM_KeepHotColdButtonStatusFA_write_IRV
            ();
    }

    /* Outport: '<Root>/VeTRIR_b_KeepHotColdButtonStatus_FA' incorporates:
     *  Switch: '<S133>/Switch1'
     */
    (void)Rte_Write_VeTRIR_b_KeepHotColdButtonStatus_FA_Value
        (rtb_RelationalOperator);

    /* Switch: '<S133>/Switch2' incorporates:
     *  Constant: '<S295>/Calib'
     *  Constant: '<S298>/Calib'
     *  Merge: '<Root>/Merge_48'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_BCM_Comfort_EnblAct_read'
     */
    if (KeTRIR_b_Comfort_EnblAct_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_Comfort_EnblAct_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_BCM_Comfort_EnblAct_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_Comfort_EnblAct' incorporates:
     *  Switch: '<S133>/Switch2'
     */
    (void)Rte_Write_VeTRIR_b_Comfort_EnblAct_Value(rtb_RelationalOperator);

    /* Switch: '<S133>/Switch3' incorporates:
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/Calib'
     *  Merge: '<Root>/Merge_41'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_BCM_Comfort_EnblActFA_read'
     */
    if (KeTRIR_b_Comfort_EnblAct_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_Comfort_EnblAct_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_BCM_Comfort_EnblActFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_Comfort_EnblAct_FA' incorporates:
     *  Switch: '<S133>/Switch3'
     */
    (void)Rte_Write_VeTRIR_b_Comfort_EnblAct_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S133>/Switch4' incorporates:
     *  Constant: '<S307>/Calib'
     *  Constant: '<S310>/Calib'
     *  Merge: '<Root>/Merge_42'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_TrunkStatus_read'
     */
    if (KeTRIR_b_TrunkStatus_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_TrunkStatus_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_TrunkStatus_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_TrunkStatus' incorporates:
     *  Switch: '<S133>/Switch4'
     */
    (void)Rte_Write_VeTRIR_b_TrunkStatus_Value(rtb_RelationalOperator);

    /* Switch: '<S133>/Switch5' incorporates:
     *  Constant: '<S308>/Calib'
     *  Constant: '<S309>/Calib'
     *  Merge: '<Root>/Merge_43'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_TrunkStatusFA_read'
     */
    if (KeTRIR_b_TrunkStatus_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_TrunkStatus_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_TrunkStatusFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_TrunkStatus_FA' incorporates:
     *  Switch: '<S133>/Switch5'
     */
    (void)Rte_Write_VeTRIR_b_TrunkStatus_FA_Value(rtb_RelationalOperator);

    /* Switch: '<S133>/Switch6' incorporates:
     *  Constant: '<S303>/Calib'
     *  Constant: '<S306>/Calib'
     *  Merge: '<Root>/Merge_44'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_LoadShed_read'
     */
    if (KeTRIR_b_LoadShed_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_LoadShed_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_LoadShed_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_LoadShed' incorporates:
     *  Switch: '<S133>/Switch6'
     */
    (void)Rte_Write_VeTRIR_b_LoadShed_Value(rtb_RelationalOperator);

    /* Switch: '<S133>/Switch7' incorporates:
     *  Constant: '<S304>/Calib'
     *  Constant: '<S305>/Calib'
     *  Merge: '<Root>/Merge_45'
     *  SignalConversion generated from: '<S63>/VeTRIR_b_LoadShedFA_read'
     */
    if (KeTRIR_b_LoadShed_FA_SD)
    {
        rtb_RelationalOperator = KeTRIR_b_LoadShed_FA_D;
    }
    else
    {
        rtb_RelationalOperator =
            Rte_IrvRead_TRIR_MedTEH_VeTRIR_b_LoadShedFA_write_IRV();
    }

    /* Outport: '<Root>/VeTRIR_b_LoadShed_FA' incorporates:
     *  Switch: '<S133>/Switch7'
     */
    (void)Rte_Write_VeTRIR_b_LoadShed_FA_Value(rtb_RelationalOperator);

    /* Update for UnitDelay: '<S137>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

    /* Update for UnitDelay: '<S139>/Unit Delay' */
    TRIR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeTRIR_T_HV__mm;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_Pct_AirHtwPwrTgt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_Pct_AirHtwPwrTgt' */
    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S1>/FsftTRIR_Pct_AirHtwPwrTgtChrt'
     *  SignalConversion generated from: '<S1>/VeTRIR_b_AirHtwPwrTgtFA_write'
     */
    /* Gateway: FsftTRIR_Pct_AirHtwPwrTgt/FsftTRIR_Pct_AirHtwPwrTgtChrt */
    /* During: FsftTRIR_Pct_AirHtwPwrTgt/FsftTRIR_Pct_AirHtwPwrTgtChrt */
    /* Entry Internal: FsftTRIR_Pct_AirHtwPwrTgt/FsftTRIR_Pct_AirHtwPwrTgtChrt */
    /* Transition: '<S68>:2' */
    Rte_IrvWrite_FsftTRIR_Pct_AirHtwPwrTgt_VeTRIR_b_AirHtwPwrTgtFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_Pct_AirHtwPwrTgt' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_T_HV_BatClntTmp2Out(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmp2Out' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S2>/FsftTRIR_T_HV_BatClntTmp2OutChrt'
     *  SignalConversion generated from: '<S2>/VeTRIR_b_HV_BatClntTmp2OutFA_write'
     */
    /* Gateway: FsftTRIR_T_HV_BatClntTmp2Out/FsftTRIR_T_HV_BatClntTmp2OutChrt */
    /* During: FsftTRIR_T_HV_BatClntTmp2Out/FsftTRIR_T_HV_BatClntTmp2OutChrt */
    /* Entry Internal: FsftTRIR_T_HV_BatClntTmp2Out/FsftTRIR_T_HV_BatClntTmp2OutChrt */
    /* Transition: '<S69>:2' */
    Rte_IrvWrite_FsftTRIR_T_HV_BatClntTmp2Out_VeTRIR_b_HV_BatClntTmp2OutFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmp2Out' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_T_HV_BatClntTmp2_In(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmp2_In' */
    /* Merge: '<Root>/Merge_24' incorporates:
     *  Chart: '<S3>/FsftTRIR_T_HV_BatClntTmp2_InChrt'
     *  SignalConversion generated from: '<S3>/VeTRIR_b_HV_BatClntTmp2_InFA_write'
     */
    /* Gateway: FsftTRIR_T_HV_BatClntTmp2_In/FsftTRIR_T_HV_BatClntTmp2_InChrt */
    /* During: FsftTRIR_T_HV_BatClntTmp2_In/FsftTRIR_T_HV_BatClntTmp2_InChrt */
    /* Entry Internal: FsftTRIR_T_HV_BatClntTmp2_In/FsftTRIR_T_HV_BatClntTmp2_InChrt */
    /* Transition: '<S70>:2' */
    Rte_IrvWrite_FsftTRIR_T_HV_BatClntTmp2_In_VeTRIR_b_HV_BatClntTmp2_InFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmp2_In' */
}

/* Output function */
#if !Rte_SysCon_Variant_TRIR_2

FUNC(void, TRIR_CODE) FsftTRIR_T_HV_BatClntTmpOut(void)
{

#if !Rte_SysCon_Variant_TRIR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmpOut' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S4>/FsftTRIR_T_HV_BatClntTmpOutChrt'
     *  SignalConversion generated from: '<S4>/VeTRIR_b_HV_BatClntTmpOutFA_write'
     */
    /* Gateway: FsftTRIR_T_HV_BatClntTmpOut/FsftTRIR_T_HV_BatClntTmpOutChrt */
    /* During: FsftTRIR_T_HV_BatClntTmpOut/FsftTRIR_T_HV_BatClntTmpOutChrt */
    /* Entry Internal: FsftTRIR_T_HV_BatClntTmpOut/FsftTRIR_T_HV_BatClntTmpOutChrt */
    /* Transition: '<S71>:2' */
    Rte_IrvWrite_FsftTRIR_T_HV_BatClntTmpOut_VeTRIR_b_HV_BatClntTmpOutFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmpOut' */
#endif

}

#endif

/* Output function */
#if !Rte_SysCon_Variant_TRIR_1

FUNC(void, TRIR_CODE) FsftTRIR_T_HV_BatClntTmp_In(void)
{

#if !Rte_SysCon_Variant_TRIR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmp_In' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S5>/FsftTRIR_T_HV_BatClntTmp_InChrt'
     *  SignalConversion generated from: '<S5>/VeTRIR_b_HV_BatClntTmp_InFA_write'
     */
    /* Gateway: FsftTRIR_T_HV_BatClntTmp_In/FsftTRIR_T_HV_BatClntTmp_InChrt */
    /* During: FsftTRIR_T_HV_BatClntTmp_In/FsftTRIR_T_HV_BatClntTmp_InChrt */
    /* Entry Internal: FsftTRIR_T_HV_BatClntTmp_In/FsftTRIR_T_HV_BatClntTmp_InChrt */
    /* Transition: '<S72>:2' */
    Rte_IrvWrite_FsftTRIR_T_HV_BatClntTmp_In_VeTRIR_b_HV_BatClntTmp_InFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_T_HV_BatClntTmp_In' */
#endif

}

#endif

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_T_SDS_ClntTmpIn_Act(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_T_SDS_ClntTmpIn_Act' */
    /* Merge: '<Root>/Merge_5' incorporates:
     *  Chart: '<S6>/FsftTRIR_T_SDS_ClntTmpIn_ActChrt'
     *  SignalConversion generated from: '<S6>/VeTRIR_b_SDS_ClntTmpIn_ActFA_write'
     */
    /* Gateway: FsftTRIR_T_SDS_ClntTmpIn_Act/FsftTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* During: FsftTRIR_T_SDS_ClntTmpIn_Act/FsftTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* Entry Internal: FsftTRIR_T_SDS_ClntTmpIn_Act/FsftTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* Transition: '<S73>:2' */
    Rte_IrvWrite_FsftTRIR_T_SDS_ClntTmpIn_Act_VeTRIR_b_SDS_ClntTmpIn_ActFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S6>/FsftTRIR_T_SDS_ClntTmpIn_ActChrt'
     *  SignalConversion generated from: '<S6>/VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftTRIR_T_SDS_ClntTmpIn_Act_VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_T_SDS_ClntTmpIn_Act' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_AHP_EnblReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_AHP_EnblReq' */
    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S7>/FsftTRIR_b_AHP_EnblReqChrt'
     *  SignalConversion generated from: '<S7>/VeTRIR_b_AHP_EnblReqFA_write'
     */
    /* Gateway: FsftTRIR_b_AHP_EnblReq/FsftTRIR_b_AHP_EnblReqChrt */
    /* During: FsftTRIR_b_AHP_EnblReq/FsftTRIR_b_AHP_EnblReqChrt */
    /* Entry Internal: FsftTRIR_b_AHP_EnblReq/FsftTRIR_b_AHP_EnblReqChrt */
    /* Transition: '<S74>:2' */
    Rte_IrvWrite_FsftTRIR_b_AHP_EnblReq_VeTRIR_b_AHP_EnblReqFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_AHP_EnblReq' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_BCM_Comfort_EnblAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_BCM_Comfort_EnblAct' */
    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S8>/FsftTRIR_b_BCM_Comfort_EnblActChrt'
     *  SignalConversion generated from: '<S8>/VeTRIR_b_BCM_Comfort_EnblActFA_write'
     */
    /* Gateway: FsftTRIR_b_BCM_Comfort_EnblAct/FsftTRIR_b_BCM_Comfort_EnblActChrt */
    /* During: FsftTRIR_b_BCM_Comfort_EnblAct/FsftTRIR_b_BCM_Comfort_EnblActChrt */
    /* Entry Internal: FsftTRIR_b_BCM_Comfort_EnblAct/FsftTRIR_b_BCM_Comfort_EnblActChrt */
    /* Transition: '<S75>:2' */
    Rte_IrvWrite_FsftTRIR_b_BCM_Comfort_EnblAct_VeTRIR_b_BCM_Comfort_EnblActFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_BCM_Comfort_EnblAct' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_ClimateInfo(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_ClimateInfo' */
    /* Merge: '<Root>/Merge_50' incorporates:
     *  Chart: '<S9>/FsftTRIR_b_ClimateInfoChrt'
     *  SignalConversion generated from: '<S9>/VeTRIR_b_ClimateInfoFA_write'
     */
    /* Gateway: FsftTRIR_b_ClimateInfo/FsftTRIR_b_ClimateInfoChrt */
    /* During: FsftTRIR_b_ClimateInfo/FsftTRIR_b_ClimateInfoChrt */
    /* Entry Internal: FsftTRIR_b_ClimateInfo/FsftTRIR_b_ClimateInfoChrt */
    /* Transition: '<S76>:2' */
    Rte_IrvWrite_FsftTRIR_b_ClimateInfo_VeTRIR_b_ClimateInfoFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_ClimateInfo' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_ETM_KeepHotColdButtonStatus(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_ETM_KeepHotColdButtonStatus' */
    /* Merge: '<Root>/Merge_47' incorporates:
     *  Chart: '<S10>/FsftTRIR_b_ETM_KeepHotColdButtonStatusChrt'
     *  SignalConversion generated from: '<S10>/VeTRIR_b_ETM_KeepHotColdButtonStatusFA_write'
     */
    /* Gateway: FsftTRIR_b_ETM_KeepHotColdButtonStatus/FsftTRIR_b_ETM_KeepHotColdButtonStatusChrt */
    /* During: FsftTRIR_b_ETM_KeepHotColdButtonStatus/FsftTRIR_b_ETM_KeepHotColdButtonStatusChrt */
    /* Entry Internal: FsftTRIR_b_ETM_KeepHotColdButtonStatus/FsftTRIR_b_ETM_KeepHotColdButtonStatusChrt */
    /* Transition: '<S77>:2' */
    Rte_IrvWrite_FsftTRIR_b_ETM_KeepHotColdButtonStatus_VeTRIR_b_ETM_KeepHotColdButtonStatusFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_ETM_KeepHotColdButtonStatus' */
}

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) FsftTRIR_b_HSW_Sts(void)
{

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_HSW_Sts' */
    /* Merge: '<Root>/Merge_56' incorporates:
     *  Chart: '<S11>/FsftTRIR_b_HSW_StsChrt'
     *  SignalConversion generated from: '<S11>/VeTRIR_b_HSW_StsFA_write'
     */
    /* Gateway: FsftTRIR_b_HSW_Sts/FsftTRIR_b_HSW_StsChrt */
    /* During: FsftTRIR_b_HSW_Sts/FsftTRIR_b_HSW_StsChrt */
    /* Entry Internal: FsftTRIR_b_HSW_Sts/FsftTRIR_b_HSW_StsChrt */
    /* Transition: '<S78>:2' */
    Rte_IrvWrite_FsftTRIR_b_HSW_Sts_VeTRIR_b_HSW_StsFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_HSW_Sts' */
#endif

}

#endif

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_HVACECOModeSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_HVACECOModeSts' */
    /* Merge: '<Root>/Merge_52' incorporates:
     *  Chart: '<S12>/FsftTRIR_b_HVACECOModeStsChrt'
     *  SignalConversion generated from: '<S12>/VeTRIR_b_HVACECOModeStsFA_write'
     */
    /* Gateway: FsftTRIR_b_HVACECOModeSts/FsftTRIR_b_HVACECOModeStsChrt */
    /* During: FsftTRIR_b_HVACECOModeSts/FsftTRIR_b_HVACECOModeStsChrt */
    /* Entry Internal: FsftTRIR_b_HVACECOModeSts/FsftTRIR_b_HVACECOModeStsChrt */
    /* Transition: '<S79>:2' */
    Rte_IrvWrite_FsftTRIR_b_HVACECOModeSts_VeTRIR_b_HVACECOModeStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_HVACECOModeSts' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_HVACPrecCondSts(void)
{
    /* Gateway: FsftTRIR_b_HVACPrecCondSts/FsftTRIR_b_HVACPrecCondStsChrt */
    /* During: FsftTRIR_b_HVACPrecCondSts/FsftTRIR_b_HVACPrecCondStsChrt */
    /* Entry Internal: FsftTRIR_b_HVACPrecCondSts/FsftTRIR_b_HVACPrecCondStsChrt */
    /* Transition: '<S80>:2' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_HeatExCool_TmpOut(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_HeatExCool_TmpOut' */
    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S14>/FsftTRIR_b_HeatExCool_TmpOutChrt'
     *  SignalConversion generated from: '<S14>/VeTRIR_b_HeatExCool_TmpOutFA_write'
     */
    /* Gateway: FsftTRIR_b_HeatExCool_TmpOut/FsftTRIR_b_HeatExCool_TmpOutChrt */
    /* During: FsftTRIR_b_HeatExCool_TmpOut/FsftTRIR_b_HeatExCool_TmpOutChrt */
    /* Entry Internal: FsftTRIR_b_HeatExCool_TmpOut/FsftTRIR_b_HeatExCool_TmpOutChrt */
    /* Transition: '<S81>:2' */
    Rte_IrvWrite_FsftTRIR_b_HeatExCool_TmpOut_VeTRIR_b_HeatExCool_TmpOutFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_HeatExCool_TmpOut' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_HtmpRadCool_TmpIn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_HtmpRadCool_TmpIn' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S15>/FsftTRIR_b_HtmpRadCool_TmpInChrt'
     *  SignalConversion generated from: '<S15>/VeTRIR_b_HtmpRadCool_TmpInFA_write'
     */
    /* Gateway: FsftTRIR_b_HtmpRadCool_TmpIn/FsftTRIR_b_HtmpRadCool_TmpInChrt */
    /* During: FsftTRIR_b_HtmpRadCool_TmpIn/FsftTRIR_b_HtmpRadCool_TmpInChrt */
    /* Entry Internal: FsftTRIR_b_HtmpRadCool_TmpIn/FsftTRIR_b_HtmpRadCool_TmpInChrt */
    /* Transition: '<S82>:2' */
    Rte_IrvWrite_FsftTRIR_b_HtmpRadCool_TmpIn_VeTRIR_b_HtmpRadCool_TmpInFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_HtmpRadCool_TmpIn' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_HtmpRadCool_TmpOut(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_HtmpRadCool_TmpOut' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S16>/FsftTRIR_b_HtmpRadCool_TmpOutChrt'
     *  SignalConversion generated from: '<S16>/VeTRIR_b_HtmpRadCool_TmpOutFA_write'
     */
    /* Gateway: FsftTRIR_b_HtmpRadCool_TmpOut/FsftTRIR_b_HtmpRadCool_TmpOutChrt */
    /* During: FsftTRIR_b_HtmpRadCool_TmpOut/FsftTRIR_b_HtmpRadCool_TmpOutChrt */
    /* Entry Internal: FsftTRIR_b_HtmpRadCool_TmpOut/FsftTRIR_b_HtmpRadCool_TmpOutChrt */
    /* Transition: '<S83>:2' */
    Rte_IrvWrite_FsftTRIR_b_HtmpRadCool_TmpOut_VeTRIR_b_HtmpRadCool_TmpOutFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_HtmpRadCool_TmpOut' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_HtrCorClnt_TmpOut(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_HtrCorClnt_TmpOut' */
    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S17>/FsftTRIR_b_HtrCorClnt_TmpOutChrt'
     *  SignalConversion generated from: '<S17>/VeTRIR_b_HtrCorClnt_TmpOutFA_write'
     */
    /* Gateway: FsftTRIR_b_HtrCorClnt_TmpOut/FsftTRIR_b_HtrCorClnt_TmpOutChrt */
    /* During: FsftTRIR_b_HtrCorClnt_TmpOut/FsftTRIR_b_HtrCorClnt_TmpOutChrt */
    /* Entry Internal: FsftTRIR_b_HtrCorClnt_TmpOut/FsftTRIR_b_HtrCorClnt_TmpOutChrt */
    /* Transition: '<S84>:2' */
    Rte_IrvWrite_FsftTRIR_b_HtrCorClnt_TmpOut_VeTRIR_b_HtrCorClnt_TmpOutFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_HtrCorClnt_TmpOut' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_LoadShed(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_LoadShed' */
    /* Merge: '<Root>/Merge_45' incorporates:
     *  Chart: '<S18>/FsftTRIR_b_LoadShedChrt'
     *  SignalConversion generated from: '<S18>/VeTRIR_b_LoadShedFA_write'
     */
    /* Gateway: FsftTRIR_b_LoadShed/FsftTRIR_b_LoadShedChrt */
    /* During: FsftTRIR_b_LoadShed/FsftTRIR_b_LoadShedChrt */
    /* Entry Internal: FsftTRIR_b_LoadShed/FsftTRIR_b_LoadShedChrt */
    /* Transition: '<S85>:2' */
    Rte_IrvWrite_FsftTRIR_b_LoadShed_VeTRIR_b_LoadShedFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_LoadShed' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_SCCActv(void)
{
    /* Gateway: FsftTRIR_b_SCCActv/FsftTRIR_b_SCCActvChrt */
    /* During: FsftTRIR_b_SCCActv/FsftTRIR_b_SCCActvChrt */
    /* Entry Internal: FsftTRIR_b_SCCActv/FsftTRIR_b_SCCActvChrt */
    /* Transition: '<S86>:2' */
}

/* Output function */
FUNC(void, TRIR_CODE) FsftTRIR_b_TrunkStatus(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTRIR_b_TrunkStatus' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  Chart: '<S20>/FsftTRIR_b_TrunkStatusChrt'
     *  SignalConversion generated from: '<S20>/VeTRIR_b_TrunkStatusFA_write'
     */
    /* Gateway: FsftTRIR_b_TrunkStatus/FsftTRIR_b_TrunkStatusChrt */
    /* During: FsftTRIR_b_TrunkStatus/FsftTRIR_b_TrunkStatusChrt */
    /* Entry Internal: FsftTRIR_b_TrunkStatus/FsftTRIR_b_TrunkStatusChrt */
    /* Transition: '<S87>:2' */
    Rte_IrvWrite_FsftTRIR_b_TrunkStatus_VeTRIR_b_TrunkStatusFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTRIR_b_TrunkStatus' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_Cnt_MC_RHSC2_Cooling(VAR(sint16, AUTOMATIC)
    LeTRIR_Cnt_MC_RHSC2_Cooling)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_Cnt_MC_RHSC2_Cooling' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S21>/LeTRIR_Cnt_MC_RHSC2_Cooling'
     *  SignalConversion generated from: '<S21>/VeTRIR_Cnt_MC_RHSC2_Cooling_write'
     */
    /* Gateway: PokeTRIR_Cnt_MC_RHSC2_Cooling/PokeTRIR_Cnt_MC_RHSC2_CoolingChrt */
    /* During: PokeTRIR_Cnt_MC_RHSC2_Cooling/PokeTRIR_Cnt_MC_RHSC2_CoolingChrt */
    /* Entry Internal: PokeTRIR_Cnt_MC_RHSC2_Cooling/PokeTRIR_Cnt_MC_RHSC2_CoolingChrt */
    /* Transition: '<S88>:2' */
    Rte_IrvWrite_PokeTRIR_Cnt_MC_RHSC2_Cooling_VeTRIR_Cnt_MC_RHSC2_Cooling_write_IRV
        (LeTRIR_Cnt_MC_RHSC2_Cooling);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_Cnt_MC_RHSC2_Cooling' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_P_SDS_HV_PwrAvg(VAR(float32, AUTOMATIC)
    LeTRIR_P_SDS_HV_PwrAvg, VAR(boolean, AUTOMATIC) LeTRIR_b_SDS_HV_PwrAvgFA)
{
    boolean rtb_LeTRIR_b_SDS_HV_PwrAvgFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_P_SDS_HV_PwrAvg' */
    /* Chart: '<S22>/PokeTRIR_P_SDS_HV_PwrAvgChrt' incorporates:
     *  SignalConversion generated from: '<S22>/LeTRIR_P_SDS_HV_PwrAvg'
     *  SignalConversion generated from: '<S22>/LeTRIR_b_SDS_HV_PwrAvgFA'
     */
    /* Gateway: PokeTRIR_P_SDS_HV_PwrAvg/PokeTRIR_P_SDS_HV_PwrAvgChrt */
    /* During: PokeTRIR_P_SDS_HV_PwrAvg/PokeTRIR_P_SDS_HV_PwrAvgChrt */
    /* Entry Internal: PokeTRIR_P_SDS_HV_PwrAvg/PokeTRIR_P_SDS_HV_PwrAvgChrt */
    /* Transition: '<S89>:2' */
    if (!LeTRIR_b_SDS_HV_PwrAvgFA)
    {
        /* Transition: '<S89>:3' */
        /* Transition: '<S89>:15' */
        TRIR_ac_B.LeTRIR_P_SDS_HV_PwrAvg_out = LeTRIR_P_SDS_HV_PwrAvg;
        rtb_LeTRIR_b_SDS_HV_PwrAvgFA_out = false;
        TRIR_ac_B.LeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd = true;

        /* Transition: '<S89>:18' */
    }
    else
    {
        /* Transition: '<S89>:4' */
        rtb_LeTRIR_b_SDS_HV_PwrAvgFA_out = true;
    }

    /* End of Chart: '<S22>/PokeTRIR_P_SDS_HV_PwrAvgChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S22>/VeTRIR_P_SDS_HV_PwrAvg_write'
     * */
    Rte_IrvWrite_PokeTRIR_P_SDS_HV_PwrAvg_VeTRIR_P_SDS_HV_PwrAvg_write_IRV
        (TRIR_ac_B.LeTRIR_P_SDS_HV_PwrAvg_out);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S22>/VeTRIR_b_SDS_HV_PwrAvgFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_P_SDS_HV_PwrAvg_VeTRIR_b_SDS_HV_PwrAvgFA_write_IRV
        (rtb_LeTRIR_b_SDS_HV_PwrAvgFA_out);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S22>/VeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeTRIR_P_SDS_HV_PwrAvg_VeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd_write_IRV
        (TRIR_ac_B.LeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_P_SDS_HV_PwrAvg' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_Pct_AirHtwPwrTgt(VAR(float32, AUTOMATIC)
    LeTRIR_Pct_AirHtwPwrTgt, VAR(boolean, AUTOMATIC) LeTRIR_b_AirHtwPwrTgtFA)
{
    boolean rtb_LeTRIR_b_AirHtwPwrTgtFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_Pct_AirHtwPwrTgt' */
    /* Chart: '<S23>/PokeTRIR_Pct_AirHtwPwrTgtChrt' incorporates:
     *  SignalConversion generated from: '<S23>/LeTRIR_Pct_AirHtwPwrTgt'
     *  SignalConversion generated from: '<S23>/LeTRIR_b_AirHtwPwrTgtFA'
     */
    /* Gateway: PokeTRIR_Pct_AirHtwPwrTgt/PokeTRIR_Pct_AirHtwPwrTgtChrt */
    /* During: PokeTRIR_Pct_AirHtwPwrTgt/PokeTRIR_Pct_AirHtwPwrTgtChrt */
    /* Entry Internal: PokeTRIR_Pct_AirHtwPwrTgt/PokeTRIR_Pct_AirHtwPwrTgtChrt */
    /* Transition: '<S90>:2' */
    if (!LeTRIR_b_AirHtwPwrTgtFA)
    {
        /* Transition: '<S90>:3' */
        /* Transition: '<S90>:15' */
        TRIR_ac_B.LeTRIR_Pct_AirHtwPwrTgt_out = LeTRIR_Pct_AirHtwPwrTgt;
        rtb_LeTRIR_b_AirHtwPwrTgtFA_out_f = false;

        /* Transition: '<S90>:18' */
    }
    else
    {
        /* Transition: '<S90>:4' */
        rtb_LeTRIR_b_AirHtwPwrTgtFA_out_f = true;
    }

    /* End of Chart: '<S23>/PokeTRIR_Pct_AirHtwPwrTgtChrt' */

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S23>/VeTRIR_Pct_AirHtwPwrTgt_write'
     * */
    Rte_IrvWrite_PokeTRIR_Pct_AirHtwPwrTgt_VeTRIR_Pct_AirHtwPwrTgt_write_IRV
        (TRIR_ac_B.LeTRIR_Pct_AirHtwPwrTgt_out);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S23>/VeTRIR_b_AirHtwPwrTgtFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_Pct_AirHtwPwrTgt_VeTRIR_b_AirHtwPwrTgtFA_write_IRV
        (rtb_LeTRIR_b_AirHtwPwrTgtFA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_Pct_AirHtwPwrTgt' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_HV_BatClntTmp2_In(VAR(float32, AUTOMATIC)
    LeTRIR_T_HV_BatClntTmp2_In, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HV_BatClntTmp2_InFA)
{
    boolean rtb_LeTRIR_b_HV_BatClntTmp2_InFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp2_In' */
    /* Chart: '<S24>/PokeTRIR_T_HV_BatClntTmp2_InChrt' incorporates:
     *  SignalConversion generated from: '<S24>/LeTRIR_T_HV_BatClntTmp2_In'
     *  SignalConversion generated from: '<S24>/LeTRIR_b_HV_BatClntTmp2_InFA'
     */
    /* Gateway: PokeTRIR_T_HV_BatClntTmp2_In/PokeTRIR_T_HV_BatClntTmp2_InChrt */
    /* During: PokeTRIR_T_HV_BatClntTmp2_In/PokeTRIR_T_HV_BatClntTmp2_InChrt */
    /* Entry Internal: PokeTRIR_T_HV_BatClntTmp2_In/PokeTRIR_T_HV_BatClntTmp2_InChrt */
    /* Transition: '<S91>:2' */
    if (!LeTRIR_b_HV_BatClntTmp2_InFA)
    {
        /* Transition: '<S91>:3' */
        /* Transition: '<S91>:15' */
        TRIR_ac_B.LeTRIR_T_HV_BatClntTmp2_In_out = LeTRIR_T_HV_BatClntTmp2_In;
        rtb_LeTRIR_b_HV_BatClntTmp2_InFA_out_i = false;

        /* Transition: '<S91>:18' */
    }
    else
    {
        /* Transition: '<S91>:4' */
        rtb_LeTRIR_b_HV_BatClntTmp2_InFA_out_i = true;
    }

    /* End of Chart: '<S24>/PokeTRIR_T_HV_BatClntTmp2_InChrt' */

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S24>/VeTRIR_T_HV_BatClntTmp2_In_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp2_In_VeTRIR_T_HV_BatClntTmp2_In_write_IRV
        (TRIR_ac_B.LeTRIR_T_HV_BatClntTmp2_In_out);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S24>/VeTRIR_b_HV_BatClntTmp2_InFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp2_In_VeTRIR_b_HV_BatClntTmp2_InFA_write_IRV
        (rtb_LeTRIR_b_HV_BatClntTmp2_InFA_out_i);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp2_In' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_HV_BatClntTmp2_Out(VAR(float32, AUTOMATIC)
    LeTRIR_T_HV_BatClntTmp2_Out, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HV_BatClntTmp2_OutFA)
{
    boolean rtb_LeTRIR_b_HV_BatClntTmp2_OutFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp2_Out' */
    /* Chart: '<S25>/PokeTRIR_T_HV_BatClntTmp2_OutChrt' incorporates:
     *  SignalConversion generated from: '<S25>/LeTRIR_T_HV_BatClntTmp2_Out'
     *  SignalConversion generated from: '<S25>/LeTRIR_b_HV_BatClntTmp2_OutFA'
     */
    /* Gateway: PokeTRIR_T_HV_BatClntTmp2_Out/PokeTRIR_T_HV_BatClntTmp2_OutChrt */
    /* During: PokeTRIR_T_HV_BatClntTmp2_Out/PokeTRIR_T_HV_BatClntTmp2_OutChrt */
    /* Entry Internal: PokeTRIR_T_HV_BatClntTmp2_Out/PokeTRIR_T_HV_BatClntTmp2_OutChrt */
    /* Transition: '<S92>:2' */
    if (!LeTRIR_b_HV_BatClntTmp2_OutFA)
    {
        /* Transition: '<S92>:3' */
        /* Transition: '<S92>:15' */
        TRIR_ac_B.LeTRIR_T_HV_BatClntTmp2_Out_out = LeTRIR_T_HV_BatClntTmp2_Out;
        rtb_LeTRIR_b_HV_BatClntTmp2_OutFA_out = false;

        /* Transition: '<S92>:18' */
    }
    else
    {
        /* Transition: '<S92>:4' */
        rtb_LeTRIR_b_HV_BatClntTmp2_OutFA_out = true;
    }

    /* End of Chart: '<S25>/PokeTRIR_T_HV_BatClntTmp2_OutChrt' */

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S25>/VeTRIR_T_HV_BatClntTmp2_Out_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp2_Out_VeTRIR_T_HV_BatClntTmp2_Out_write_IRV
        (TRIR_ac_B.LeTRIR_T_HV_BatClntTmp2_Out_out);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S25>/VeTRIR_b_HV_BatClntTmp2_OutFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp2_Out_VeTRIR_b_HV_BatClntTmp2OutFA_write_IRV
        (rtb_LeTRIR_b_HV_BatClntTmp2_OutFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp2_Out' */
}

/* Output function */
#if !Rte_SysCon_Variant_TRIR_1

FUNC(void, TRIR_CODE) PokeTRIR_T_HV_BatClntTmp_In(VAR(float32, AUTOMATIC)
    LeTRIR_T_HV_BatClntTmp_In, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HV_BatClntTmp_InFA)
{

#if !Rte_SysCon_Variant_TRIR_1

    boolean rtb_LeTRIR_b_HV_BatClntTmp_InFA_out;

#endif

#if !(!Rte_SysCon_Variant_TRIR_1)

    UNUSED_PARAMETER(LeTRIR_T_HV_BatClntTmp_In);

#endif

#if !(!Rte_SysCon_Variant_TRIR_1)

    UNUSED_PARAMETER(LeTRIR_b_HV_BatClntTmp_InFA);

#endif

#if !Rte_SysCon_Variant_TRIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp_In' */
    /* Chart: '<S26>/PokeTRIR_T_HV_BatClntTmp_InChrt' incorporates:
     *  SignalConversion generated from: '<S26>/LeTRIR_T_HV_BatClntTmp2_In'
     *  SignalConversion generated from: '<S26>/LeTRIR_b_HV_BatClntTmp2_InFA'
     */
    /* Gateway: PokeTRIR_T_HV_BatClntTmp_In/PokeTRIR_T_HV_BatClntTmp_InChrt */
    /* During: PokeTRIR_T_HV_BatClntTmp_In/PokeTRIR_T_HV_BatClntTmp_InChrt */
    /* Entry Internal: PokeTRIR_T_HV_BatClntTmp_In/PokeTRIR_T_HV_BatClntTmp_InChrt */
    /* Transition: '<S93>:2' */
    if (!LeTRIR_b_HV_BatClntTmp_InFA)
    {
        /* Transition: '<S93>:3' */
        /* Transition: '<S93>:15' */
        TRIR_ac_B.LeTRIR_T_HV_BatClntTmp_In_out = LeTRIR_T_HV_BatClntTmp_In;
        rtb_LeTRIR_b_HV_BatClntTmp_InFA_out = false;

        /* Transition: '<S93>:18' */
    }
    else
    {
        /* Transition: '<S93>:4' */
        rtb_LeTRIR_b_HV_BatClntTmp_InFA_out = true;
    }

    /* End of Chart: '<S26>/PokeTRIR_T_HV_BatClntTmp_InChrt' */

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S26>/VeTRIR_T_HV_BatClntTmp_In_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp_In_VeTRIR_T_HV_BatClntTmp_In_write_IRV
        (TRIR_ac_B.LeTRIR_T_HV_BatClntTmp_In_out);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S26>/VeTRIR_b_HV_BatClntTmp_InFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp_In_VeTRIR_b_HV_BatClntTmp_InFA_write_IRV
        (rtb_LeTRIR_b_HV_BatClntTmp_InFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp_In' */
#endif

}

#endif

/* Output function */
#if !Rte_SysCon_Variant_TRIR_2

FUNC(void, TRIR_CODE) PokeTRIR_T_HV_BatClntTmp_Out(VAR(float32, AUTOMATIC)
    LeTRIR_T_HV_BatClntTmp_Out, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HV_BatClntTmp_OutFA)
{

#if !Rte_SysCon_Variant_TRIR_2

    boolean rtb_LeTRIR_b_HV_BatClntTmp_OutFA_out;

#endif

#if !(!Rte_SysCon_Variant_TRIR_2)

    UNUSED_PARAMETER(LeTRIR_T_HV_BatClntTmp_Out);

#endif

#if !(!Rte_SysCon_Variant_TRIR_2)

    UNUSED_PARAMETER(LeTRIR_b_HV_BatClntTmp_OutFA);

#endif

#if !Rte_SysCon_Variant_TRIR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp_Out' */
    /* Chart: '<S27>/PokeTRIR_T_HV_BatClntTmp_OutChrt' incorporates:
     *  SignalConversion generated from: '<S27>/LeTRIR_T_HV_BatClntTmp2_Out'
     *  SignalConversion generated from: '<S27>/LeTRIR_b_HV_BatClntTmp2_OutFA'
     */
    /* Gateway: PokeTRIR_T_HV_BatClntTmp_Out/PokeTRIR_T_HV_BatClntTmp_OutChrt */
    /* During: PokeTRIR_T_HV_BatClntTmp_Out/PokeTRIR_T_HV_BatClntTmp_OutChrt */
    /* Entry Internal: PokeTRIR_T_HV_BatClntTmp_Out/PokeTRIR_T_HV_BatClntTmp_OutChrt */
    /* Transition: '<S94>:2' */
    if (!LeTRIR_b_HV_BatClntTmp_OutFA)
    {
        /* Transition: '<S94>:3' */
        /* Transition: '<S94>:15' */
        TRIR_ac_B.LeTRIR_T_HV_BatClntTmp_Out_out = LeTRIR_T_HV_BatClntTmp_Out;
        rtb_LeTRIR_b_HV_BatClntTmp_OutFA_out = false;

        /* Transition: '<S94>:18' */
    }
    else
    {
        /* Transition: '<S94>:4' */
        rtb_LeTRIR_b_HV_BatClntTmp_OutFA_out = true;
    }

    /* End of Chart: '<S27>/PokeTRIR_T_HV_BatClntTmp_OutChrt' */

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S27>/VeTRIR_T_HV_BatClntTmp_Out_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp_Out_VeTRIR_T_HV_BatClntTmp_Out_write_IRV
        (TRIR_ac_B.LeTRIR_T_HV_BatClntTmp_Out_out);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S27>/VeTRIR_b_HV_BatClntTmp_OutFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HV_BatClntTmp_Out_VeTRIR_b_HV_BatClntTmpOutFA_write_IRV
        (rtb_LeTRIR_b_HV_BatClntTmp_OutFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HV_BatClntTmp_Out' */
#endif

}

#endif

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_HeatExCool_TmpOut(VAR(float32, AUTOMATIC)
    LeTRIR_T_HeatExCool_TmpOut, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HeatExCool_TmpOutFA)
{
    boolean rtb_LeTRIR_b_HeatExCool_TmpOutFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HeatExCool_TmpOut' */
    /* Chart: '<S28>/PokeTRIR_T_HeatExCool_TmpOutChrt' incorporates:
     *  SignalConversion generated from: '<S28>/LeTRIR_T_HeatExCool_TmpOut'
     *  SignalConversion generated from: '<S28>/LeTRIR_b_HeatExCool_TmpOutFA'
     */
    /* Gateway: PokeTRIR_T_HeatExCool_TmpOut/PokeTRIR_T_HeatExCool_TmpOutChrt */
    /* During: PokeTRIR_T_HeatExCool_TmpOut/PokeTRIR_T_HeatExCool_TmpOutChrt */
    /* Entry Internal: PokeTRIR_T_HeatExCool_TmpOut/PokeTRIR_T_HeatExCool_TmpOutChrt */
    /* Transition: '<S95>:2' */
    if (!LeTRIR_b_HeatExCool_TmpOutFA)
    {
        /* Transition: '<S95>:3' */
        /* Transition: '<S95>:15' */
        TRIR_ac_B.LeTRIR_T_HeatExCool_TmpOut_out = LeTRIR_T_HeatExCool_TmpOut;
        rtb_LeTRIR_b_HeatExCool_TmpOutFA_out_f = false;

        /* Transition: '<S95>:18' */
    }
    else
    {
        /* Transition: '<S95>:4' */
        rtb_LeTRIR_b_HeatExCool_TmpOutFA_out_f = true;
    }

    /* End of Chart: '<S28>/PokeTRIR_T_HeatExCool_TmpOutChrt' */

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S28>/VeTRIR_T_HeatExCool_TmpOut_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HeatExCool_TmpOut_VeTRIR_T_HeatExCool_TmpOut_write_IRV
        (TRIR_ac_B.LeTRIR_T_HeatExCool_TmpOut_out);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S28>/VeTRIR_b_HeatExCool_TmpOutFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HeatExCool_TmpOut_VeTRIR_b_HeatExCool_TmpOutFA_write_IRV
        (rtb_LeTRIR_b_HeatExCool_TmpOutFA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HeatExCool_TmpOut' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_HtmpRadCool_TmpIn(VAR(float32, AUTOMATIC)
    LeTRIR_T_HtmpRadCool_TmpIn, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HtmpRadCool_TmpInFA)
{
    boolean rtb_LeTRIR_b_HtmpRadCool_TmpInFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HtmpRadCool_TmpIn' */
    /* Chart: '<S29>/PokeTRIR_T_HtmpRadCool_TmpInChrt' incorporates:
     *  SignalConversion generated from: '<S29>/LeTRIR_T_HtmpRadCool_TmpIn'
     *  SignalConversion generated from: '<S29>/LeTRIR_b_HtmpRadCool_TmpInFA'
     */
    /* Gateway: PokeTRIR_T_HtmpRadCool_TmpIn/PokeTRIR_T_HtmpRadCool_TmpInChrt */
    /* During: PokeTRIR_T_HtmpRadCool_TmpIn/PokeTRIR_T_HtmpRadCool_TmpInChrt */
    /* Entry Internal: PokeTRIR_T_HtmpRadCool_TmpIn/PokeTRIR_T_HtmpRadCool_TmpInChrt */
    /* Transition: '<S96>:2' */
    if (!LeTRIR_b_HtmpRadCool_TmpInFA)
    {
        /* Transition: '<S96>:3' */
        /* Transition: '<S96>:15' */
        TRIR_ac_B.LeTRIR_T_HtmpRadCool_TmpIn_out = LeTRIR_T_HtmpRadCool_TmpIn;
        rtb_LeTRIR_b_HtmpRadCool_TmpInFA_out_o = false;

        /* Transition: '<S96>:18' */
    }
    else
    {
        /* Transition: '<S96>:4' */
        rtb_LeTRIR_b_HtmpRadCool_TmpInFA_out_o = true;
    }

    /* End of Chart: '<S29>/PokeTRIR_T_HtmpRadCool_TmpInChrt' */

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S29>/VeTRIR_T_HtmpRadCool_TmpIn_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HtmpRadCool_TmpIn_VeTRIR_T_HtmpRadCool_TmpIn_write_IRV
        (TRIR_ac_B.LeTRIR_T_HtmpRadCool_TmpIn_out);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S29>/VeTRIR_b_HtmpRadCool_TmpInFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HtmpRadCool_TmpIn_VeTRIR_b_HtmpRadCool_TmpInFA_write_IRV
        (rtb_LeTRIR_b_HtmpRadCool_TmpInFA_out_o);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HtmpRadCool_TmpIn' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_HtmpRadCool_TmpOut(VAR(float32, AUTOMATIC)
    LeTRIR_T_HtmpRadCool_TmpOut, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HtmpRadCool_TmpOutFA)
{
    boolean rtb_LeTRIR_b_HtmpRadCool_TmpOutFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HtmpRadCool_TmpOut' */
    /* Chart: '<S30>/PokeTRIR_T_HtmpRadCool_TmpOutChrt' incorporates:
     *  SignalConversion generated from: '<S30>/LeTRIR_T_HtmpRadCool_TmpOut'
     *  SignalConversion generated from: '<S30>/LeTRIR_b_HtmpRadCool_TmpOutFA'
     */
    /* Gateway: PokeTRIR_T_HtmpRadCool_TmpOut/PokeTRIR_T_HtmpRadCool_TmpOutChrt */
    /* During: PokeTRIR_T_HtmpRadCool_TmpOut/PokeTRIR_T_HtmpRadCool_TmpOutChrt */
    /* Entry Internal: PokeTRIR_T_HtmpRadCool_TmpOut/PokeTRIR_T_HtmpRadCool_TmpOutChrt */
    /* Transition: '<S97>:2' */
    if (!LeTRIR_b_HtmpRadCool_TmpOutFA)
    {
        /* Transition: '<S97>:3' */
        /* Transition: '<S97>:15' */
        TRIR_ac_B.LeTRIR_T_HtmpRadCool_TmpOut_out = LeTRIR_T_HtmpRadCool_TmpOut;
        rtb_LeTRIR_b_HtmpRadCool_TmpOutFA_out_i = false;

        /* Transition: '<S97>:18' */
    }
    else
    {
        /* Transition: '<S97>:4' */
        rtb_LeTRIR_b_HtmpRadCool_TmpOutFA_out_i = true;
    }

    /* End of Chart: '<S30>/PokeTRIR_T_HtmpRadCool_TmpOutChrt' */

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S30>/VeTRIR_T_HtmpRadCool_TmpOut_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HtmpRadCool_TmpOut_VeTRIR_T_HtmpRadCool_TmpOut_write_IRV
        (TRIR_ac_B.LeTRIR_T_HtmpRadCool_TmpOut_out);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S30>/VeTRIR_b_HtmpRadCool_TmpOutFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HtmpRadCool_TmpOut_VeTRIR_b_HtmpRadCool_TmpOutFA_write_IRV
        (rtb_LeTRIR_b_HtmpRadCool_TmpOutFA_out_i);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HtmpRadCool_TmpOut' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_HtrCorClnt_TmpOut(VAR(float32, AUTOMATIC)
    LeTRIR_T_HtrCorClnt_TmpOut, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HtrCorClnt_TmpOutFA)
{
    boolean rtb_LeTRIR_b_HtrCorClnt_TmpOutFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_HtrCorClnt_TmpOut' */
    /* Chart: '<S31>/PokeTRIR_T_HtrCorClnt_TmpOutChrt' incorporates:
     *  SignalConversion generated from: '<S31>/LeTRIR_T_HtrCorClnt_TmpOut'
     *  SignalConversion generated from: '<S31>/LeTRIR_b_HtrCorClnt_TmpOutFA'
     */
    /* Gateway: PokeTRIR_T_HtrCorClnt_TmpOut/PokeTRIR_T_HtrCorClnt_TmpOutChrt */
    /* During: PokeTRIR_T_HtrCorClnt_TmpOut/PokeTRIR_T_HtrCorClnt_TmpOutChrt */
    /* Entry Internal: PokeTRIR_T_HtrCorClnt_TmpOut/PokeTRIR_T_HtrCorClnt_TmpOutChrt */
    /* Transition: '<S98>:2' */
    if (!LeTRIR_b_HtrCorClnt_TmpOutFA)
    {
        /* Transition: '<S98>:3' */
        /* Transition: '<S98>:15' */
        TRIR_ac_B.LeTRIR_T_HtrCorClnt_TmpOut_out = LeTRIR_T_HtrCorClnt_TmpOut;
        rtb_LeTRIR_b_HtrCorClnt_TmpOutFA_out_o = false;

        /* Transition: '<S98>:18' */
    }
    else
    {
        /* Transition: '<S98>:4' */
        rtb_LeTRIR_b_HtrCorClnt_TmpOutFA_out_o = true;
    }

    /* End of Chart: '<S31>/PokeTRIR_T_HtrCorClnt_TmpOutChrt' */

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S31>/VeTRIR_T_HtrCorClnt_TmpOut_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HtrCorClnt_TmpOut_VeTRIR_T_HtrCorClnt_TmpOut_write_IRV
        (TRIR_ac_B.LeTRIR_T_HtrCorClnt_TmpOut_out);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S31>/VeTRIR_b_HtrCorClnt_TmpOutFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_HtrCorClnt_TmpOut_VeTRIR_b_HtrCorClnt_TmpOutFA_write_IRV
        (rtb_LeTRIR_b_HtrCorClnt_TmpOutFA_out_o);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_HtrCorClnt_TmpOut' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_SDS_ClntTmpIn_Act(VAR(float32, AUTOMATIC)
    LeTRIR_T_SDS_ClntTmpIn_Act, VAR(boolean, AUTOMATIC)
    LeTRIR_b_SDS_ClntTmpIn_ActFA)
{
    boolean rtb_LeTRIR_b_SDS_ClntTmpIn_ActFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_SDS_ClntTmpIn_Act' */
    /* Chart: '<S32>/PokeTRIR_T_SDS_ClntTmpIn_ActChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeTRIR_T_SDS_ClntTmpIn_Act'
     *  SignalConversion generated from: '<S32>/LeTRIR_b_SDS_ClntTmpIn_ActFA'
     */
    /* Gateway: PokeTRIR_T_SDS_ClntTmpIn_Act/PokeTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* During: PokeTRIR_T_SDS_ClntTmpIn_Act/PokeTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* Entry Internal: PokeTRIR_T_SDS_ClntTmpIn_Act/PokeTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* Transition: '<S99>:2' */
    if (!LeTRIR_b_SDS_ClntTmpIn_ActFA)
    {
        /* Transition: '<S99>:3' */
        /* Transition: '<S99>:15' */
        TRIR_ac_B.LeTRIR_T_SDS_ClntTmpIn_Act_out = LeTRIR_T_SDS_ClntTmpIn_Act;
        rtb_LeTRIR_b_SDS_ClntTmpIn_ActFA_out = false;
        TRIR_ac_B.LeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd = true;

        /* Transition: '<S99>:18' */
    }
    else
    {
        /* Transition: '<S99>:4' */
        rtb_LeTRIR_b_SDS_ClntTmpIn_ActFA_out = true;
    }

    /* End of Chart: '<S32>/PokeTRIR_T_SDS_ClntTmpIn_ActChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S32>/VeTRIR_T_SDS_ClntTmpIn_Act_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_SDS_ClntTmpIn_Act_VeTRIR_T_SDS_ClntTmpIn_Act_write_IRV
        (TRIR_ac_B.LeTRIR_T_SDS_ClntTmpIn_Act_out);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S32>/VeTRIR_b_SDS_ClntTmpIn_ActFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_SDS_ClntTmpIn_Act_VeTRIR_b_SDS_ClntTmpIn_ActFA_write_IRV
        (rtb_LeTRIR_b_SDS_ClntTmpIn_ActFA_out);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S32>/VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_SDS_ClntTmpIn_Act_VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write_IRV
        (TRIR_ac_B.LeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_SDS_ClntTmpIn_Act' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_T_SDS_ClntTmpIn_Tgt(VAR(float32, AUTOMATIC)
    LeTRIR_T_SDS_ClntTmpIn_Tgt, VAR(boolean, AUTOMATIC)
    LeTRIR_b_SDS_ClntTmpIn_TgtFA)
{
    boolean rtb_LeTRIR_b_SDS_ClntTmpIn_TgtFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_T_SDS_ClntTmpIn_Tgt' */
    /* Chart: '<S33>/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt' incorporates:
     *  SignalConversion generated from: '<S33>/LeTRIR_T_SDS_ClntTmpIn_Tgt'
     *  SignalConversion generated from: '<S33>/LeTRIR_b_SDS_ClntTmpIn_TgtFA'
     */
    /* Gateway: PokeTRIR_T_SDS_ClntTmpIn_Tgt/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt */
    /* During: PokeTRIR_T_SDS_ClntTmpIn_Tgt/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt */
    /* Entry Internal: PokeTRIR_T_SDS_ClntTmpIn_Tgt/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt */
    /* Transition: '<S100>:2' */
    if (!LeTRIR_b_SDS_ClntTmpIn_TgtFA)
    {
        /* Transition: '<S100>:3' */
        /* Transition: '<S100>:15' */
        TRIR_ac_B.LeTRIR_T_SDS_ClntTmpIn_Tgt_out = LeTRIR_T_SDS_ClntTmpIn_Tgt;
        rtb_LeTRIR_b_SDS_ClntTmpIn_TgtFA_out = false;
        TRIR_ac_B.LeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd = true;

        /* Transition: '<S100>:18' */
    }
    else
    {
        /* Transition: '<S100>:4' */
        rtb_LeTRIR_b_SDS_ClntTmpIn_TgtFA_out = true;
    }

    /* End of Chart: '<S33>/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S33>/VeTRIR_T_SDS_ClntTmpIn_Tgt_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_SDS_ClntTmpIn_Tgt_VeTRIR_T_SDS_ClntTmpIn_Tgt_write_IRV
        (TRIR_ac_B.LeTRIR_T_SDS_ClntTmpIn_Tgt_out);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S33>/VeTRIR_b_SDS_ClntTmpIn_TgtFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_SDS_ClntTmpIn_Tgt_VeTRIR_b_SDS_ClntTmpIn_TgtFA_write_IRV
        (rtb_LeTRIR_b_SDS_ClntTmpIn_TgtFA_out);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S33>/VeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeTRIR_T_SDS_ClntTmpIn_Tgt_VeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd_write_IRV
        (TRIR_ac_B.LeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_T_SDS_ClntTmpIn_Tgt' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_b_AHP_EnblReq(VAR(boolean, AUTOMATIC)
    LeTRIR_b_AHP_EnblReq, VAR(boolean, AUTOMATIC) LeTRIR_b_AHP_EnblReqFA)
{
    boolean rtb_LeTRIR_b_AHP_EnblReqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_AHP_EnblReq' */
    /* Chart: '<S34>/PokeTRIR_b_AHP_EnblReqChrt' incorporates:
     *  SignalConversion generated from: '<S34>/LeTRIR_b_AHP_EnblReqFA'
     *  SignalConversion generated from: '<S34>/LeTRIR_b_AHP_EnblReq'
     */
    /* Gateway: PokeTRIR_b_AHP_EnblReq/PokeTRIR_b_AHP_EnblReqChrt */
    /* During: PokeTRIR_b_AHP_EnblReq/PokeTRIR_b_AHP_EnblReqChrt */
    /* Entry Internal: PokeTRIR_b_AHP_EnblReq/PokeTRIR_b_AHP_EnblReqChrt */
    /* Transition: '<S101>:2' */
    if (!LeTRIR_b_AHP_EnblReqFA)
    {
        /* Transition: '<S101>:3' */
        /* Transition: '<S101>:15' */
        TRIR_ac_B.LeTRIR_b_AHP_EnblReq_out = LeTRIR_b_AHP_EnblReq;
        rtb_LeTRIR_b_AHP_EnblReqFA_out = false;

        /* Transition: '<S101>:18' */
    }
    else
    {
        /* Transition: '<S101>:4' */
        rtb_LeTRIR_b_AHP_EnblReqFA_out = true;
    }

    /* End of Chart: '<S34>/PokeTRIR_b_AHP_EnblReqChrt' */

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S34>/VeTRIR_b_AHP_EnblReqFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_b_AHP_EnblReq_VeTRIR_b_AHP_EnblReqFA_write_IRV
        (rtb_LeTRIR_b_AHP_EnblReqFA_out);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S34>/VeTRIR_b_AHP_EnblReq_write'
     * */
    Rte_IrvWrite_PokeTRIR_b_AHP_EnblReq_VeTRIR_b_AHP_EnblReq_write_IRV
        (TRIR_ac_B.LeTRIR_b_AHP_EnblReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_AHP_EnblReq' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_b_BCM_Comfort_EnblAct(VAR(boolean, AUTOMATIC)
    LeTRIR_b_BCM_Comfort_EnblAct)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_BCM_Comfort_EnblAct' */
    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S35>/LeTRIR_b_BCM_Comfort_EnblAct'
     *  SignalConversion generated from: '<S35>/VeTRIR_b_BCM_Comfort_EnblAct_write'
     */
    /* Gateway: PokeTRIR_b_BCM_Comfort_EnblAct/PokeTRIR_b_BCM_Comfort_EnblActChrt */
    /* During: PokeTRIR_b_BCM_Comfort_EnblAct/PokeTRIR_b_BCM_Comfort_EnblActChrt */
    /* Entry Internal: PokeTRIR_b_BCM_Comfort_EnblAct/PokeTRIR_b_BCM_Comfort_EnblActChrt */
    /* Transition: '<S102>:2' */
    Rte_IrvWrite_PokeTRIR_b_BCM_Comfort_EnblAct_VeTRIR_b_BCM_Comfort_EnblAct_write_IRV
        (LeTRIR_b_BCM_Comfort_EnblAct);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_BCM_Comfort_EnblAct' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_b_ETM_KeepHotColdButtonStatus(VAR(boolean,
    AUTOMATIC) LeTRIR_b_ETM_KeepHotColdButtonStatus)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_ETM_KeepHotColdButtonStatus' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S36>/LeTRIR_b_ETM_KeepHotColdButtonStatus'
     *  SignalConversion generated from: '<S36>/VeTRIR_b_ETM_KeepHotColdButtonStatus_write'
     */
    /* Gateway: PokeTRIR_b_ETM_KeepHotColdButtonStatus/PokeTRIR_b_ETM_KeepHotColdButtonStatusChrt */
    /* During: PokeTRIR_b_ETM_KeepHotColdButtonStatus/PokeTRIR_b_ETM_KeepHotColdButtonStatusChrt */
    /* Entry Internal: PokeTRIR_b_ETM_KeepHotColdButtonStatus/PokeTRIR_b_ETM_KeepHotColdButtonStatusChrt */
    /* Transition: '<S103>:2' */
    Rte_IrvWrite_PokeTRIR_b_ETM_KeepHotColdButtonStatus_VeTRIR_b_ETM_KeepHotColdButtonStatus_write_IRV
        (LeTRIR_b_ETM_KeepHotColdButtonStatus);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_ETM_KeepHotColdButtonStatus' */
}

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_FL_HS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_FL_HS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_FL_HS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_FL_HS_Fail' */
    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S37>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S37>/VeTRIR_b_FL_HS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_FL_HS_Fail/PokeTRIR_b_FL_HS_FailChrt */
    /* During: PokeTRIR_b_FL_HS_Fail/PokeTRIR_b_FL_HS_FailChrt */
    /* Entry Internal: PokeTRIR_b_FL_HS_Fail/PokeTRIR_b_FL_HS_FailChrt */
    /* Transition: '<S104>:2' */
    Rte_IrvWrite_PokeTRIR_b_FL_HS_Fail_VeTRIR_b_FL_HS_Fail_write_IRV
        (LeTRIR_b_FL_HS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_FL_HS_Fail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_FL_VS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_FL_VS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_FL_VS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_FL_VS_Fail' */
    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S38>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S38>/VeTRIR_b_FL_VS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_FL_VS_Fail/PokeTRIR_b_FL_VS_FailChrt */
    /* During: PokeTRIR_b_FL_VS_Fail/PokeTRIR_b_FL_VS_FailChrt */
    /* Entry Internal: PokeTRIR_b_FL_VS_Fail/PokeTRIR_b_FL_VS_FailChrt */
    /* Transition: '<S105>:2' */
    Rte_IrvWrite_PokeTRIR_b_FL_VS_Fail_VeTRIR_b_FL_VS_Fail_write_IRV
        (LeTRIR_b_FL_VS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_FL_VS_Fail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_FR_HS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_FR_HS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_FR_HS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_FR_HS_Fail' */
    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S39>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S39>/VeTRIR_b_FR_HS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_FR_HS_Fail/PokeTRIR_b_FR_HS_FailChrt */
    /* During: PokeTRIR_b_FR_HS_Fail/PokeTRIR_b_FR_HS_FailChrt */
    /* Entry Internal: PokeTRIR_b_FR_HS_Fail/PokeTRIR_b_FR_HS_FailChrt */
    /* Transition: '<S106>:2' */
    Rte_IrvWrite_PokeTRIR_b_FR_HS_Fail_VeTRIR_b_FR_HS_Fail_write_IRV
        (LeTRIR_b_FR_HS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_FR_HS_Fail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_FR_VS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_FR_VS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_FR_VS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_FR_VS_Fail' */
    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S40>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S40>/VeTRIR_b_FR_VS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_FR_VS_Fail/PokeTRIR_b_FR_VS_FailChrt */
    /* During: PokeTRIR_b_FR_VS_Fail/PokeTRIR_b_FR_VS_FailChrt */
    /* Entry Internal: PokeTRIR_b_FR_VS_Fail/PokeTRIR_b_FR_VS_FailChrt */
    /* Transition: '<S107>:2' */
    Rte_IrvWrite_PokeTRIR_b_FR_VS_Fail_VeTRIR_b_FR_VS_Fail_write_IRV
        (LeTRIR_b_FR_VS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_FR_VS_Fail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_HSW_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_HSW_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_HSW_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_HSW_Fail' */
    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S41>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S41>/VeTRIR_b_HSW_Fail_write'
     */
    /* Gateway: PokeTRIR_b_HSW_Fail/PokeTRIR_b_HSW_FailChrt */
    /* During: PokeTRIR_b_HSW_Fail/PokeTRIR_b_HSW_FailChrt */
    /* Entry Internal: PokeTRIR_b_HSW_Fail/PokeTRIR_b_HSW_FailChrt */
    /* Transition: '<S108>:2' */
    Rte_IrvWrite_PokeTRIR_b_HSW_Fail_VeTRIR_b_HSW_Fail_write_IRV
        (LeTRIR_b_HSW_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_HSW_Fail' */
#endif

}

#endif

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_b_LoadShed(VAR(boolean, AUTOMATIC)
    LeTRIR_b_LoadShed)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_LoadShed' */
    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S42>/LeTRIR_b_LoadShed'
     *  SignalConversion generated from: '<S42>/VeTRIR_b_LoadShed_write'
     */
    /* Gateway: PokeTRIR_b_LoadShed/PokeTRIR_b_LoadShedChrt */
    /* During: PokeTRIR_b_LoadShed/PokeTRIR_b_LoadShedChrt */
    /* Entry Internal: PokeTRIR_b_LoadShed/PokeTRIR_b_LoadShedChrt */
    /* Transition: '<S109>:2' */
    Rte_IrvWrite_PokeTRIR_b_LoadShed_VeTRIR_b_LoadShed_write_IRV
        (LeTRIR_b_LoadShed);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_LoadShed' */
}

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_RL_HS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_RL_HS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_RL_HS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_RL_HS_Fail' */
    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S43>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S43>/VeTRIR_b_RL_HS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_RL_HS_Fail/PokeTRIR_b_RL_HS_FailChrt */
    /* During: PokeTRIR_b_RL_HS_Fail/PokeTRIR_b_RL_HS_FailChrt */
    /* Entry Internal: PokeTRIR_b_RL_HS_Fail/PokeTRIR_b_RL_HS_FailChrt */
    /* Transition: '<S110>:2' */
    Rte_IrvWrite_PokeTRIR_b_RL_HS_Fail_VeTRIR_b_RL_HS_Fail_write_IRV
        (LeTRIR_b_RL_HS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_RL_HS_Fail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_RL_VS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_RL_VS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_RL_VS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_RL_VS_Fail' */
    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S44>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S44>/VeTRIR_b_RL_VS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_RL_VS_Fail/PokeTRIR_b_RL_VS_FailChrt */
    /* During: PokeTRIR_b_RL_VS_Fail/PokeTRIR_b_RL_VS_FailChrt */
    /* Entry Internal: PokeTRIR_b_RL_VS_Fail/PokeTRIR_b_RL_VS_FailChrt */
    /* Transition: '<S111>:2' */
    Rte_IrvWrite_PokeTRIR_b_RL_VS_Fail_VeTRIR_b_RL_VS_Fail_write_IRV
        (LeTRIR_b_RL_VS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_RL_VS_Fail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_RR_HS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_RR_HS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_RR_HS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_RR_HS_Fail' */
    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S45>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S45>/VeTRIR_b_RR_HS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_RR_HS_Fail/PokeTRIR_b_RR_HS_FailChrt */
    /* During: PokeTRIR_b_RR_HS_Fail/PokeTRIR_b_RR_HS_FailChrt */
    /* Entry Internal: PokeTRIR_b_RR_HS_Fail/PokeTRIR_b_RR_HS_FailChrt */
    /* Transition: '<S112>:2' */
    Rte_IrvWrite_PokeTRIR_b_RR_HS_Fail_VeTRIR_b_RR_HS_Fail_write_IRV
        (LeTRIR_b_RR_HS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_RR_HS_Fail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_b_RR_VS_Fail(VAR(boolean, AUTOMATIC)
    LeTRIR_b_RR_VS_Fail)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_RR_VS_Fail);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_RR_VS_Fail' */
    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S46>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S46>/VeTRIR_b_RR_VS_Fail_write'
     */
    /* Gateway: PokeTRIR_b_RR_VS_Fail/PokeTRIR_b_RR_VS_FailChrt */
    /* During: PokeTRIR_b_RR_VS_Fail/PokeTRIR_b_RR_VS_FailChrt */
    /* Entry Internal: PokeTRIR_b_RR_VS_Fail/PokeTRIR_b_RR_VS_FailChrt */
    /* Transition: '<S113>:2' */
    Rte_IrvWrite_PokeTRIR_b_RR_VS_Fail_VeTRIR_b_RR_VS_Fail_write_IRV
        (LeTRIR_b_RR_VS_Fail);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_RR_VS_Fail' */
#endif

}

#endif

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_b_SCCActv(VAR(boolean, AUTOMATIC)
    LeTRIR_b_SCCActv)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_SCCActv' */
    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S47>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S47>/VeTRIR_b_SCCActv_write'
     */
    /* Gateway: PokeTRIR_b_SCCActv/PokeTRIR_b_SCCActvChrt */
    /* During: PokeTRIR_b_SCCActv/PokeTRIR_b_SCCActvChrt */
    /* Entry Internal: PokeTRIR_b_SCCActv/PokeTRIR_b_SCCActvChrt */
    /* Transition: '<S114>:2' */
    Rte_IrvWrite_PokeTRIR_b_SCCActv_VeTRIR_b_SCCActv_write_IRV(LeTRIR_b_SCCActv);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_SCCActv' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_b_TrunkStatus(VAR(boolean, AUTOMATIC)
    LeTRIR_b_TrunkStatus)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_b_TrunkStatus' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S48>/LeTRIR_b_TrunkStatus'
     *  SignalConversion generated from: '<S48>/VeTRIR_b_TrunkStatus_write'
     */
    /* Gateway: PokeTRIR_b_TrunkStatus/PokeTRIR_b_TrunkStatusChrt */
    /* During: PokeTRIR_b_TrunkStatus/PokeTRIR_b_TrunkStatusChrt */
    /* Entry Internal: PokeTRIR_b_TrunkStatus/PokeTRIR_b_TrunkStatusChrt */
    /* Transition: '<S115>:2' */
    Rte_IrvWrite_PokeTRIR_b_TrunkStatus_VeTRIR_b_TrunkStatus_write_IRV
        (LeTRIR_b_TrunkStatus);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_b_TrunkStatus' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_e_ClimateInfo(VAR(TeTRIR_e_ClimateInfo, AUTOMATIC)
    LeTRIR_e_ClimateInfo, VAR(boolean, AUTOMATIC) LeTRIR_b_ClimateInfoFA)
{
    boolean rtb_LeTRIR_b_ClimateInfoFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_ClimateInfo' */
    /* Chart: '<S49>/PokeTRIR_e_ClimateInfoChrt' incorporates:
     *  SignalConversion generated from: '<S49>/LeTRIR_b_ClimateInfoFA'
     *  SignalConversion generated from: '<S49>/LeTRIR_e_ClimateInfo'
     */
    /* Gateway: PokeTRIR_e_ClimateInfo/PokeTRIR_e_ClimateInfoChrt */
    /* During: PokeTRIR_e_ClimateInfo/PokeTRIR_e_ClimateInfoChrt */
    /* Entry Internal: PokeTRIR_e_ClimateInfo/PokeTRIR_e_ClimateInfoChrt */
    /* Transition: '<S116>:2' */
    if (!LeTRIR_b_ClimateInfoFA)
    {
        /* Transition: '<S116>:3' */
        /* Transition: '<S116>:15' */
        TRIR_ac_B.LeTRIR_e_ClimateInfo_out = LeTRIR_e_ClimateInfo;
        rtb_LeTRIR_b_ClimateInfoFA_out = false;

        /* Transition: '<S116>:18' */
    }
    else
    {
        /* Transition: '<S116>:4' */
        rtb_LeTRIR_b_ClimateInfoFA_out = true;
    }

    /* End of Chart: '<S49>/PokeTRIR_e_ClimateInfoChrt' */

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S49>/VeTRIR_b_ClimateInfoFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_ClimateInfo_VeTRIR_b_ClimateInfoFA_write_IRV
        (rtb_LeTRIR_b_ClimateInfoFA_out);

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S49>/VeTRIR_e_ClimateInfo_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_ClimateInfo_VeTRIR_e_ClimateInfo_write_IRV
        (TRIR_ac_B.LeTRIR_e_ClimateInfo_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_ClimateInfo' */
}

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_FL_HS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_FL_HS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_FL_HS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_FL_HS_Sts' */
    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S50>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S50>/VeTRIR_e_FL_HS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_FL_HS_Sts/PokeTRIR_e_FL_HS_StsChrt */
    /* During: PokeTRIR_e_FL_HS_Sts/PokeTRIR_e_FL_HS_StsChrt */
    /* Entry Internal: PokeTRIR_e_FL_HS_Sts/PokeTRIR_e_FL_HS_StsChrt */
    /* Transition: '<S117>:2' */
    Rte_IrvWrite_PokeTRIR_e_FL_HS_Sts_VeTRIR_e_FL_HS_Sts_write_IRV
        (LeTRIR_e_FL_HS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_FL_HS_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_FL_VS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_FL_VS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_FL_VS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_FL_VS_Sts' */
    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S51>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S51>/VeTRIR_e_FL_VS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_FL_VS_Sts/PokeTRIR_e_FL_VS_StsChrt */
    /* During: PokeTRIR_e_FL_VS_Sts/PokeTRIR_e_FL_VS_StsChrt */
    /* Entry Internal: PokeTRIR_e_FL_VS_Sts/PokeTRIR_e_FL_VS_StsChrt */
    /* Transition: '<S118>:2' */
    Rte_IrvWrite_PokeTRIR_e_FL_VS_Sts_VeTRIR_e_FL_VS_Sts_write_IRV
        (LeTRIR_e_FL_VS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_FL_VS_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_FR_HS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_FR_HS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_FR_HS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_FR_HS_Sts' */
    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S52>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S52>/VeTRIR_e_FR_HS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_FR_HS_Sts/PokeTRIR_e_FR_HS_StsChrt */
    /* During: PokeTRIR_e_FR_HS_Sts/PokeTRIR_e_FR_HS_StsChrt */
    /* Entry Internal: PokeTRIR_e_FR_HS_Sts/PokeTRIR_e_FR_HS_StsChrt */
    /* Transition: '<S119>:2' */
    Rte_IrvWrite_PokeTRIR_e_FR_HS_Sts_VeTRIR_e_FR_HS_Sts_write_IRV
        (LeTRIR_e_FR_HS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_FR_HS_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_FR_VS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_FR_VS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_FR_VS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_FR_VS_Sts' */
    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S53>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S53>/VeTRIR_e_FR_VS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_FR_VS_Sts/PokeTRIR_e_FR_VS_StsChrt */
    /* During: PokeTRIR_e_FR_VS_Sts/PokeTRIR_e_FR_VS_StsChrt */
    /* Entry Internal: PokeTRIR_e_FR_VS_Sts/PokeTRIR_e_FR_VS_StsChrt */
    /* Transition: '<S120>:2' */
    Rte_IrvWrite_PokeTRIR_e_FR_VS_Sts_VeTRIR_e_FR_VS_Sts_write_IRV
        (LeTRIR_e_FR_VS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_FR_VS_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_HSW_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_HSW_Sts, VAR(boolean, AUTOMATIC) LeTRIR_b_HSW_StsFA)
{

#if Rte_SysCon_Variant_TRIR_3

    boolean rtb_LeTRIR_b_HSW_StsFA_out_l;

#endif

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_HSW_Sts);

#endif

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_b_HSW_StsFA);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_HSW_Sts' */
    /* Chart: '<S54>/PokeTRIR_e_HSW_StsChrt' incorporates:
     *  SignalConversion generated from: '<S54>/LeTRIR_T_HtrCorClnt_TmpOut'
     *  SignalConversion generated from: '<S54>/LeTRIR_b_HtrCorClnt_TmpOutFA'
     */
    /* Gateway: PokeTRIR_e_HSW_Sts/PokeTRIR_e_HSW_StsChrt */
    /* During: PokeTRIR_e_HSW_Sts/PokeTRIR_e_HSW_StsChrt */
    /* Entry Internal: PokeTRIR_e_HSW_Sts/PokeTRIR_e_HSW_StsChrt */
    /* Transition: '<S121>:2' */
    if (!LeTRIR_b_HSW_StsFA)
    {
        /* Transition: '<S121>:3' */
        /* Transition: '<S121>:15' */
        TRIR_ac_B.LeTRIR_e_HSW_Sts_out = LeTRIR_e_HSW_Sts;
        rtb_LeTRIR_b_HSW_StsFA_out_l = false;

        /* Transition: '<S121>:18' */
    }
    else
    {
        /* Transition: '<S121>:4' */
        rtb_LeTRIR_b_HSW_StsFA_out_l = true;
    }

    /* End of Chart: '<S54>/PokeTRIR_e_HSW_StsChrt' */

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S54>/VeTRIR_b_HSW_StsFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_HSW_Sts_VeTRIR_b_HSW_StsFA_write_IRV
        (rtb_LeTRIR_b_HSW_StsFA_out_l);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S54>/VeTRIR_e_HSW_Sts_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_HSW_Sts_VeTRIR_e_HSW_Sts_write_IRV
        (TRIR_ac_B.LeTRIR_e_HSW_Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_HSW_Sts' */
#endif

}

#endif

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_e_HVACECOModeSts(VAR(TeTRIR_e_HVAC_ECO_State,
    AUTOMATIC) LeTRIR_e_HVACECOModeSts, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HVACECOModeStsFA)
{
    boolean rtb_LeTRIR_b_HVACECOModeStsFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_HVACECOModeSts' */
    /* Chart: '<S55>/PokeTRIR_e_HVACECOModeStsChrt' incorporates:
     *  SignalConversion generated from: '<S55>/LeTRIR_b_HVACECOModeStsFA'
     *  SignalConversion generated from: '<S55>/LeTRIR_e_HVACECOModeSts'
     */
    /* Gateway: PokeTRIR_e_HVACECOModeSts/PokeTRIR_e_HVACECOModeStsChrt */
    /* During: PokeTRIR_e_HVACECOModeSts/PokeTRIR_e_HVACECOModeStsChrt */
    /* Entry Internal: PokeTRIR_e_HVACECOModeSts/PokeTRIR_e_HVACECOModeStsChrt */
    /* Transition: '<S122>:2' */
    if (!LeTRIR_b_HVACECOModeStsFA)
    {
        /* Transition: '<S122>:3' */
        /* Transition: '<S122>:15' */
        TRIR_ac_B.LeTRIR_e_HVACECOModeSts_out = LeTRIR_e_HVACECOModeSts;
        rtb_LeTRIR_b_HVACECOModeStsFA_out_i = false;

        /* Transition: '<S122>:18' */
    }
    else
    {
        /* Transition: '<S122>:4' */
        rtb_LeTRIR_b_HVACECOModeStsFA_out_i = true;
    }

    /* End of Chart: '<S55>/PokeTRIR_e_HVACECOModeStsChrt' */

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S55>/VeTRIR_b_HVACECOModeStsFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_HVACECOModeSts_VeTRIR_b_HVACECOModeStsFA_write_IRV
        (rtb_LeTRIR_b_HVACECOModeStsFA_out_i);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S55>/VeTRIR_e_HVACECOModeSts_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_HVACECOModeSts_VeTRIR_e_HVACECOModeSts_write_IRV
        (TRIR_ac_B.LeTRIR_e_HVACECOModeSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_HVACECOModeSts' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_e_HVACPrecCondSts(VAR(TeTRIR_e_HVAC_State,
    AUTOMATIC) LeTRIR_e_HVACPrecCondSts, VAR(boolean, AUTOMATIC)
    LeTRIR_b_HVACPrecCondStsFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_HVACPrecCondSts' */
    /* Chart: '<S56>/PokeTRIR_e_HVACPrecCondStsChrt' incorporates:
     *  SignalConversion generated from: '<S56>/LeTRIR_b_HVACPrecCondStsFA'
     *  SignalConversion generated from: '<S56>/LeTRIR_e_HVACPrecCondSts'
     */
    /* Gateway: PokeTRIR_e_HVACPrecCondSts/PokeTRIR_e_HVACPrecCondStsChrt */
    /* During: PokeTRIR_e_HVACPrecCondSts/PokeTRIR_e_HVACPrecCondStsChrt */
    /* Entry Internal: PokeTRIR_e_HVACPrecCondSts/PokeTRIR_e_HVACPrecCondStsChrt */
    /* Transition: '<S123>:2' */
    if (!LeTRIR_b_HVACPrecCondStsFA)
    {
        /* Transition: '<S123>:3' */
        /* Transition: '<S123>:15' */
        TRIR_ac_B.LeTRIR_e_HVACPrecCondSts_out = LeTRIR_e_HVACPrecCondSts;

        /* Transition: '<S123>:18' */
    }
    else
    {
        /* Transition: '<S123>:4' */
    }

    /* End of Chart: '<S56>/PokeTRIR_e_HVACPrecCondStsChrt' */

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S56>/VeTRIR_e_HVACPrecCondSts_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_HVACPrecCondSts_VeTRIR_e_HVACPrecCondSts_write_IRV
        (TRIR_ac_B.LeTRIR_e_HVACPrecCondSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_HVACPrecCondSts' */
}

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_RL_HS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_RL_HS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_RL_HS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_RL_HS_Sts' */
    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S57>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S57>/VeTRIR_e_RL_HS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_RL_HS_Sts/PokeTRIR_e_RL_HS_StsChrt */
    /* During: PokeTRIR_e_RL_HS_Sts/PokeTRIR_e_RL_HS_StsChrt */
    /* Entry Internal: PokeTRIR_e_RL_HS_Sts/PokeTRIR_e_RL_HS_StsChrt */
    /* Transition: '<S124>:2' */
    Rte_IrvWrite_PokeTRIR_e_RL_HS_Sts_VeTRIR_e_RL_HS_Sts_write_IRV
        (LeTRIR_e_RL_HS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_RL_HS_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_RL_VS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_RL_VS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_RL_VS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_RL_VS_Sts' */
    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S58>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S58>/VeTRIR_e_RL_VS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_RL_VS_Sts/PokeTRIR_e_RL_VS_StsChrt */
    /* During: PokeTRIR_e_RL_VS_Sts/PokeTRIR_e_RL_VS_StsChrt */
    /* Entry Internal: PokeTRIR_e_RL_VS_Sts/PokeTRIR_e_RL_VS_StsChrt */
    /* Transition: '<S125>:2' */
    Rte_IrvWrite_PokeTRIR_e_RL_VS_Sts_VeTRIR_e_RL_VS_Sts_write_IRV
        (LeTRIR_e_RL_VS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_RL_VS_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_RR_HS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_RR_HS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_RR_HS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_RR_HS_Sts' */
    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S59>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S59>/VeTRIR_e_RR_HS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_RR_HS_Sts/PokeTRIR_e_RR_HS_StsChrt */
    /* During: PokeTRIR_e_RR_HS_Sts/PokeTRIR_e_RR_HS_StsChrt */
    /* Entry Internal: PokeTRIR_e_RR_HS_Sts/PokeTRIR_e_RR_HS_StsChrt */
    /* Transition: '<S126>:2' */
    Rte_IrvWrite_PokeTRIR_e_RR_HS_Sts_VeTRIR_e_RR_HS_Sts_write_IRV
        (LeTRIR_e_RR_HS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_RR_HS_Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRIR_3

FUNC(void, TRIR_CODE) PokeTRIR_e_RR_VS_Sts(VAR(TeTRIR_e_ClimateSts, AUTOMATIC)
    LeTRIR_e_RR_VS_Sts)
{

#if !Rte_SysCon_Variant_TRIR_3

    UNUSED_PARAMETER(LeTRIR_e_RR_VS_Sts);

#endif

#if Rte_SysCon_Variant_TRIR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_RR_VS_Sts' */
    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S60>/LeTRIR_b_SCCActv'
     *  SignalConversion generated from: '<S60>/VeTRIR_e_RR_VS_Sts_write'
     */
    /* Gateway: PokeTRIR_e_RR_VS_Sts/PokeTRIR_e_RR_VS_StsChrt */
    /* During: PokeTRIR_e_RR_VS_Sts/PokeTRIR_e_RR_VS_StsChrt */
    /* Entry Internal: PokeTRIR_e_RR_VS_Sts/PokeTRIR_e_RR_VS_StsChrt */
    /* Transition: '<S127>:2' */
    Rte_IrvWrite_PokeTRIR_e_RR_VS_Sts_VeTRIR_e_RR_VS_Sts_write_IRV
        (LeTRIR_e_RR_VS_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_RR_VS_Sts' */
#endif

}

#endif

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_e_SDS_ActualState(VAR(TeTRIR_e_SDS_ActualState,
    AUTOMATIC) LeTRIR_e_SDS_ActualState, VAR(boolean, AUTOMATIC)
    LeTRIR_b_SDS_ActualStateFA)
{
    boolean rtb_LeTRIR_b_SDS_ActualStateFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_SDS_ActualState' */
    /* Chart: '<S61>/PokeTRIR_e_SDS_ActualStateChrt' incorporates:
     *  SignalConversion generated from: '<S61>/LeTRIR_b_SDS_ActualStateFA'
     *  SignalConversion generated from: '<S61>/LeTRIR_e_SDS_ActualState'
     */
    /* Gateway: PokeTRIR_e_SDS_ActualState/PokeTRIR_e_SDS_ActualStateChrt */
    /* During: PokeTRIR_e_SDS_ActualState/PokeTRIR_e_SDS_ActualStateChrt */
    /* Entry Internal: PokeTRIR_e_SDS_ActualState/PokeTRIR_e_SDS_ActualStateChrt */
    /* Transition: '<S128>:2' */
    if (!LeTRIR_b_SDS_ActualStateFA)
    {
        /* Transition: '<S128>:3' */
        /* Transition: '<S128>:15' */
        TRIR_ac_B.LeTRIR_e_SDS_ActualState_out = LeTRIR_e_SDS_ActualState;
        rtb_LeTRIR_b_SDS_ActualStateFA_out = false;
        TRIR_ac_B.LeTRIR_b_SDS_ActualStateSgnl_Rcvd = true;

        /* Transition: '<S128>:18' */
    }
    else
    {
        /* Transition: '<S128>:4' */
        rtb_LeTRIR_b_SDS_ActualStateFA_out = true;
    }

    /* End of Chart: '<S61>/PokeTRIR_e_SDS_ActualStateChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S61>/VeTRIR_b_SDS_ActualStateFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_SDS_ActualState_VeTRIR_b_SDS_ActualStateFA_write_IRV
        (rtb_LeTRIR_b_SDS_ActualStateFA_out);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S61>/VeTRIR_b_SDS_ActualStateSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_SDS_ActualState_VeTRIR_b_SDS_ActualStateSgnl_Rcvd_write_IRV
        (TRIR_ac_B.LeTRIR_b_SDS_ActualStateSgnl_Rcvd);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S61>/VeTRIR_e_SDS_ActualState_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_SDS_ActualState_VeTRIR_e_SDS_ActualState_write_IRV
        (TRIR_ac_B.LeTRIR_e_SDS_ActualState_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_SDS_ActualState' */
}

/* Output function */
FUNC(void, TRIR_CODE) PokeTRIR_e_SDS_MaxCoolingReq(VAR
    (TeTRIR_e_HCP_MaxCoolingReq, AUTOMATIC) LeTRIR_e_SDS_MaxCoolingReq, VAR
    (boolean, AUTOMATIC) LeTRIR_b_SDS_MaxCoolingReqFA)
{
    boolean rtb_LeTRIR_b_SDS_MaxCoolingReqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTRIR_e_SDS_MaxCoolingReq' */
    /* Chart: '<S62>/PokeTRIR_e_SDS_MaxCoolingReqChrt' incorporates:
     *  SignalConversion generated from: '<S62>/LeTRIR_b_SDS_MaxCoolingReqFA'
     *  SignalConversion generated from: '<S62>/LeTRIR_e_SDS_MaxCoolingReq'
     */
    /* Gateway: PokeTRIR_e_SDS_MaxCoolingReq/PokeTRIR_e_SDS_MaxCoolingReqChrt */
    /* During: PokeTRIR_e_SDS_MaxCoolingReq/PokeTRIR_e_SDS_MaxCoolingReqChrt */
    /* Entry Internal: PokeTRIR_e_SDS_MaxCoolingReq/PokeTRIR_e_SDS_MaxCoolingReqChrt */
    /* Transition: '<S129>:2' */
    if (!LeTRIR_b_SDS_MaxCoolingReqFA)
    {
        /* Transition: '<S129>:3' */
        /* Transition: '<S129>:15' */
        TRIR_ac_B.LeTRIR_e_SDS_MaxCoolingReq_out = LeTRIR_e_SDS_MaxCoolingReq;
        rtb_LeTRIR_b_SDS_MaxCoolingReqFA_out = false;
        TRIR_ac_B.LeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd = true;

        /* Transition: '<S129>:18' */
    }
    else
    {
        /* Transition: '<S129>:4' */
        rtb_LeTRIR_b_SDS_MaxCoolingReqFA_out = true;
    }

    /* End of Chart: '<S62>/PokeTRIR_e_SDS_MaxCoolingReqChrt' */

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S62>/VeTRIR_b_SDS_MaxCoolingReqFA_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_SDS_MaxCoolingReq_VeTRIR_b_SDS_MaxCoolingReqFA_write_IRV
        (rtb_LeTRIR_b_SDS_MaxCoolingReqFA_out);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S62>/VeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_SDS_MaxCoolingReq_VeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd_write_IRV
        (TRIR_ac_B.LeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S62>/VeTRIR_e_SDS_MaxCoolingReq_write'
     * */
    Rte_IrvWrite_PokeTRIR_e_SDS_MaxCoolingReq_VeTRIR_e_SDS_MaxCoolingReq_write_IRV
        (TRIR_ac_B.LeTRIR_e_SDS_MaxCoolingReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTRIR_e_SDS_MaxCoolingReq' */
}

/* Output function */
FUNC(void, TRIR_CODE) TRIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TRIR_PwrOn'
     */
    /* S-Function (fcgen): '<S64>/FcnCallGen' incorporates:
     *  SubSystem: '<S64>/IRV_Init'
     */
    /* SignalConversion generated from: '<S323>/FL_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S344>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_HS_Fail_INIT_write = KeTRIR_b_FL_HS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/FL_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S343>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_HS_Sts_INIT_write = KeTRIR_e_FL_HS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/FL_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S335>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_VS_Fail_INIT_write = KeTRIR_b_FL_VS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/FL_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S334>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_VS_Sts_INIT_write = KeTRIR_e_FL_VS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/FR_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S346>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_HS_Fail_INIT_write = KeTRIR_b_FR_HS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/FR_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S345>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_HS_Sts_INIT_write = KeTRIR_e_FR_HS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/FR_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S337>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_VS_Fail_INIT_write = KeTRIR_b_FR_VS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/FR_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S336>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_VS_Sts_INIT_write = KeTRIR_e_FR_VS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/HSW_Fail_INIT_write' incorporates:
     *  Constant: '<S342>/Calib'
     */
    TRIR_ac_B.OutportBufferForHSW_Fail_INIT_write = KeTRIR_b_HSW_Fail_INIT;

    /* SignalConversion generated from: '<S323>/HSW_Sts_FA_INIT_write' incorporates:
     *  Constant: '<S354>/Calib'
     */
    TRIR_ac_B.OutportBufferForHSW_Sts_FA_INIT_write = KeTRIR_b_HSW_Sts_FA_INIT;

    /* SignalConversion generated from: '<S323>/HSW_Sts_INIT_write' incorporates:
     *  Constant: '<S332>/Calib'
     */
    TRIR_ac_B.OutportBufferForHSW_Sts_INIT_write = KeTRIR_e_HSW_Sts_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp2_In_FA_INIT_write' incorporates:
     *  Constant: '<S352>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_FA_INI =
        KeTRIR_b_HV_BatClntTmp2_In_FA_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp2_In_INIT_write' incorporates:
     *  Constant: '<S330>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_INIT_w =
        KeTRIR_T_HV_BatClntTmp2_In_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp2_In_Prev_INIT_write' incorporates:
     *  Constant: '<S330>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_Prev_I =
        KeTRIR_T_HV_BatClntTmp2_In_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp2_Out_FA_INIT_write' incorporates:
     *  Constant: '<S353>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_FA_IN =
        KeTRIR_b_HV_BatClntTmp2_Out_FA_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp2_Out_INIT_write' incorporates:
     *  Constant: '<S331>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_INIT_ =
        KeTRIR_T_HV_BatClntTmp2_Out_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp2_Out_Prev_INIT_write' incorporates:
     *  Constant: '<S331>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_Prev_ =
        KeTRIR_T_HV_BatClntTmp2_Out_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp_In_FA_INIT_write' incorporates:
     *  Constant: '<S355>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_FA_INIT =
        KeTRIR_b_HV_BatClntTmp_In_FA_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp_In_INIT_write' incorporates:
     *  Constant: '<S350>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_INIT_wr =
        KeTRIR_T_HV_BatClntTmp_In_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp_In_Prev_INIT_write' incorporates:
     *  Constant: '<S350>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_Prev_IN =
        KeTRIR_T_HV_BatClntTmp_In_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp_Out_FA_INIT_write' incorporates:
     *  Constant: '<S356>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_FA_INI =
        KeTRIR_b_HV_BatClntTmp_Out_FA_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp_Out_INIT_write' incorporates:
     *  Constant: '<S351>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_INIT_w =
        KeTRIR_T_HV_BatClntTmp_Out_INIT;

    /* SignalConversion generated from: '<S323>/HV_BatClntTmp_Out_Prev_INIT_write' incorporates:
     *  Constant: '<S351>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_Prev_I =
        KeTRIR_T_HV_BatClntTmp_Out_INIT;

    /* SignalConversion generated from: '<S323>/RL_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S348>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_HS_Fail_INIT_write = KeTRIR_b_RL_HS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/RL_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S347>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_HS_Sts_INIT_write = KeTRIR_e_RL_HS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/RL_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S339>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_VS_Fail_INIT_write = KeTRIR_b_RL_VS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/RL_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S338>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_VS_Sts_INIT_write = KeTRIR_e_RL_VS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/RR_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S333>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_HS_Fail_INIT_write = KeTRIR_b_RR_HS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/RR_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S349>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_HS_Sts_INIT_write = KeTRIR_e_RR_HS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/RR_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S341>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_VS_Fail_INIT_write = KeTRIR_b_RR_VS_Fail_INIT;

    /* SignalConversion generated from: '<S323>/RR_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S340>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_VS_Sts_INIT_write = KeTRIR_e_RR_VS_Sts_INIT;

    /* SignalConversion generated from: '<S323>/AHP_EnblReq_FA_INIT_write' incorporates:
     *  Constant: '<S362>/Calib'
     */
    TRIR_ac_B.OutportBufferForAHP_EnblReq_FA_INIT_writ =
        KeTRIR_b_AHP_EnblReq_FA_INIT;

    /* SignalConversion generated from: '<S323>/AHP_EnblReq_INIT_write' incorporates:
     *  Constant: '<S363>/Calib'
     */
    TRIR_ac_B.OutportBufferForAHP_EnblReq_INIT_write = KeTRIR_b_AHP_EnblReq_INIT;

    /* SignalConversion generated from: '<S323>/AirHtrPwrTgtFA_INIT_write' incorporates:
     *  Constant: '<S364>/Calib'
     */
    TRIR_ac_B.OutportBufferForAirHtrPwrTgtFA_INIT_writ =
        KeTRIR_b_AirHtrPwrTgtFA_INIT;

    /* SignalConversion generated from: '<S323>/AirHtrPwrTgt_INIT_write' incorporates:
     *  Constant: '<S357>/Calib'
     */
    TRIR_ac_B.OutportBufferForAirHtrPwrTgt_INIT_write =
        KeTRIR_Pct_AirHtrPwrTgt_INIT;

    /* SignalConversion generated from: '<S323>/HeatExCool_TmpOut_FA_INIT_write' incorporates:
     *  Constant: '<S365>/Calib'
     */
    TRIR_ac_B.OutportBufferForHeatExCool_TmpOut_FA_INI =
        KeTRIR_b_HeatExCool_TmpOut_FA_INIT;

    /* SignalConversion generated from: '<S323>/HeatExCool_TmpOut_INIT_write' incorporates:
     *  Constant: '<S358>/Calib'
     */
    TRIR_ac_B.OutportBufferForHeatExCool_TmpOut_INIT_w =
        KeTRIR_T_HeatExCool_TmpOut_INIT;

    /* SignalConversion generated from: '<S323>/HtmpRadCool_TmpIn_FA_INIT_write' incorporates:
     *  Constant: '<S366>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpIn_FA_INI =
        KeTRIR_b_HtmpRadCool_TmpIn_FA_INIT;

    /* SignalConversion generated from: '<S323>/HtmpRadCool_TmpIn_INIT_write' incorporates:
     *  Constant: '<S359>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpIn_INIT_w =
        KeTRIR_T_HtmpRadCool_TmpIn_INIT;

    /* SignalConversion generated from: '<S323>/HtmpRadCool_TmpOut_FA_INIT_write' incorporates:
     *  Constant: '<S367>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpOut_FA_IN =
        KeTRIR_b_HtmpRadCool_TmpOut_FA_INIT;

    /* SignalConversion generated from: '<S323>/HtmpRadCool_TmpOut_INIT_write' incorporates:
     *  Constant: '<S360>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpOut_INIT_ =
        KeTRIR_T_HtmpRadCool_TmpOut_INIT;

    /* SignalConversion generated from: '<S323>/HtrCorClnt_TmpOut_FA_INIT_write' incorporates:
     *  Constant: '<S368>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtrCorClnt_TmpOut_FA_INI =
        KeTRIR_b_HtrCorClnt_TmpOut_FA_INIT;

    /* SignalConversion generated from: '<S323>/HtrCorClnt_TmpOut_INIT_write' incorporates:
     *  Constant: '<S361>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtrCorClnt_TmpOut_INIT_w =
        KeTRIR_T_HtrCorClnt_TmpOut_INIT;

    /* SignalConversion generated from: '<S323>/MC_RHSC2_Cooling_INIT_write' incorporates:
     *  Constant: '<S369>/Calib'
     */
    TRIR_ac_B.OutportBufferForMC_RHSC2_Cooling_INIT_wr =
        KeTRIR_Cnt_MC_RHSC2_Cooling_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ActualState_FA_INIT_write' incorporates:
     *  Constant: '<S373>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ActualState_FA_INIT_ =
        KeTRIR_b_SDS_ActualState_FA_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ActualState_INIT_write' incorporates:
     *  Constant: '<S383>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ActualState_INIT_wri =
        KeTRIR_e_SDS_ActualState_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ActualState_Rcvd_INIT_write' incorporates:
     *  Constant: '<S374>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ActualState_Rcvd_INI =
        KeTRIR_b_SDS_ActualState_Rcvd_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Act_FA_INIT_write' incorporates:
     *  Constant: '<S375>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_FA_INI =
        KeTRIR_b_SDS_ClntTmpIn_Act_FA_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Act_INIT_write' incorporates:
     *  Constant: '<S371>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_INIT_w =
        KeTRIR_T_SDS_ClntTmpIn_Act_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Act_Rcvd_INIT_write' incorporates:
     *  Constant: '<S376>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_Rcvd_I =
        KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Tgt_FA_INIT_write' incorporates:
     *  Constant: '<S377>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_FA_INI =
        KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Tgt_INIT_write' incorporates:
     *  Constant: '<S372>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_INIT_w =
        KeTRIR_T_SDS_ClntTmpIn_Tgt_INIT;

    /* SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Tgt_Rcvd_INIT_write' incorporates:
     *  Constant: '<S378>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_Rcvd_I =
        KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_INIT;

    /* SignalConversion generated from: '<S323>/SDS_HV_PwrAvg_FA_INIT_write' incorporates:
     *  Constant: '<S379>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_FA_INIT_wr =
        KeTRIR_b_SDS_HV_PwrAvg_FA_INIT;

    /* SignalConversion generated from: '<S323>/SDS_HV_PwrAvg_INIT_write' incorporates:
     *  Constant: '<S370>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_INIT_write =
        KeTRIR_P_SDS_HV_PwrAvg_INIT;

    /* SignalConversion generated from: '<S323>/SDS_HV_PwrAvg_Rcvd_INIT_write' incorporates:
     *  Constant: '<S380>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_Rcvd_INIT_ =
        KeTRIR_b_SDS_HV_PwrAvg_Rcvd_INIT;

    /* SignalConversion generated from: '<S323>/SDS_MaxCoolingReq_FA_INIT_write' incorporates:
     *  Constant: '<S381>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_FA_INI =
        KeTRIR_b_SDS_MaxCoolingReq_FA_INIT;

    /* SignalConversion generated from: '<S323>/SDS_MaxCoolingReq_INIT_write' incorporates:
     *  Constant: '<S384>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_INIT_w =
        KeTRIR_e_SDS_MaxCoolingReq_INIT;

    /* SignalConversion generated from: '<S323>/SDS_MaxCoolingReq_Rcvd_INIT_write' incorporates:
     *  Constant: '<S382>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_Rcvd_I =
        KeTRIR_b_SDS_MaxCoolingReq_Rcvd_INIT;

    /* SignalConversion generated from: '<S323>/ClimateInfo_FA_INIT_write' incorporates:
     *  Constant: '<S393>/Calib'
     */
    TRIR_ac_B.OutportBufferForClimateInfo_FA_INIT_writ =
        KeTRIR_b_ClimateInfo_FA_INIT;

    /* SignalConversion generated from: '<S323>/ClimateInfo_INIT_write' incorporates:
     *  Constant: '<S399>/Calib'
     */
    TRIR_ac_B.OutportBufferForClimateInfo_INIT_write = KeTRIR_e_ClimateInfo_INIT;

    /* SignalConversion generated from: '<S323>/HVACECOModeSts_FA_INIT_write' incorporates:
     *  Constant: '<S394>/Calib'
     */
    TRIR_ac_B.OutportBufferForHVACECOModeSts_FA_INIT_w =
        KeTRIR_b_HVACECOModeSts_FA_INIT;

    /* SignalConversion generated from: '<S323>/HVACECOModeSts_INIT_write' incorporates:
     *  Constant: '<S400>/Calib'
     */
    TRIR_ac_B.OutportBufferForHVACECOModeSts_INIT_writ =
        KeTRIR_e_HVACECOModeSts_INIT;

    /* SignalConversion generated from: '<S323>/HVACPrecCondSts_Init_write' incorporates:
     *  Constant: '<S401>/Calib'
     */
    TRIR_ac_B.OutportBufferForHVACPrecCondSts_Init_wri =
        KeTRIR_e_HVACPrecCondSts_Init;

    /* SignalConversion generated from: '<S323>/SCCActv_Init_write' incorporates:
     *  Constant: '<S398>/Calib'
     */
    TRIR_ac_B.OutportBufferForSCCActv_Init_write = KeTRIR_b_SCCActv_Init;

    /* SignalConversion generated from: '<S323>/Comfort_EnblAct_FA_INIT_write' incorporates:
     *  Constant: '<S385>/Calib'
     */
    TRIR_ac_B.OutportBufferForComfort_EnblAct_FA_INIT_ =
        KeTRIR_b_Comfort_EnblAct_FA_INIT;

    /* SignalConversion generated from: '<S323>/Comfort_EnblAct_INIT_write' incorporates:
     *  Constant: '<S386>/Calib'
     */
    TRIR_ac_B.OutportBufferForComfort_EnblAct_INIT_wri =
        KeTRIR_b_Comfort_EnblAct_INIT;

    /* SignalConversion generated from: '<S323>/KeepHotColdButtonStatus_FA_INIT_write' incorporates:
     *  Constant: '<S387>/Calib'
     */
    TRIR_ac_B.OutportBufferForKeepHotColdButtonStatus_ =
        KeTRIR_b_KeepHotColdButtonStatus_FA_INIT;

    /* SignalConversion generated from: '<S323>/KeepHotColdButtonStatus_INIT_write' incorporates:
     *  Constant: '<S388>/Calib'
     */
    TRIR_ac_B.OutportBufferForKeepHotColdButtonStatu_j =
        KeTRIR_b_KeepHotColdButtonStatus_INIT;

    /* SignalConversion generated from: '<S323>/LoadShed_FA_INIT_write' incorporates:
     *  Constant: '<S389>/Calib'
     */
    TRIR_ac_B.OutportBufferForLoadShed_FA_INIT_write = KeTRIR_b_LoadShed_FA_INIT;

    /* SignalConversion generated from: '<S323>/LoadShed_INIT_write' incorporates:
     *  Constant: '<S390>/Calib'
     */
    TRIR_ac_B.OutportBufferForLoadShed_INIT_write = KeTRIR_b_LoadShed_INIT;

    /* SignalConversion generated from: '<S323>/TrunkStatus_FA_INIT_write' incorporates:
     *  Constant: '<S391>/Calib'
     */
    TRIR_ac_B.OutportBufferForTrunkStatus_FA_INIT_writ =
        KeTRIR_b_TrunkStatus_FA_INIT;

    /* SignalConversion generated from: '<S323>/TrunkStatus_INIT_write' incorporates:
     *  Constant: '<S392>/Calib'
     */
    TRIR_ac_B.OutportBufferForTrunkStatus_INIT_write = KeTRIR_b_TrunkStatus_INIT;

    /* S-Function (fcgen): '<S64>/FcnCallGen' incorporates:
     *  SubSystem: '<S64>/Out_Init'
     */
    /* SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmp_In_Out_Init' incorporates:
     *  Constant: '<S404>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp_I =
        KeTRIR_T_HV_BatClntTmp_In_INIT;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HV_BatClntTmp_In_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp_I = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmpOut_Out_Init' incorporates:
     *  Constant: '<S405>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmpOu =
        KeTRIR_T_HV_BatClntTmp_Out_INIT;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HV_BatClntTmp_Out_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp_O = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmp2_In_Out_Init' incorporates:
     *  Constant: '<S402>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp2_ =
        KeTRIR_T_HV_BatClntTmp2_In_INIT;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HV_BatClntTmp2_InFA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp2_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmpOut2_Out_Init' incorporates:
     *  Constant: '<S403>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp_p =
        KeTRIR_T_HV_BatClntTmp2_Out_INIT;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HV_BatClntTmp2_OutFA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp_c = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_U_BatBotlClnt_LoLvlVolt_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_U_BatBotlClnt_LoL = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_BatBotlClntLoLvl_OC_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_BatBotlClntLoLv = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HtrCorClnt_TmpIn_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HtrCorClnt_TmpI = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HtrCorClnt_TmpIn_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HtrCorClnt_TmpI = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HtrCorClnt_TmpOut_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HtrCorClnt_TmpO = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HtrCorClnt_TmpOut_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HtrCorClnt_TmpO = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_AHP_EnblReq_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_AHP_EnblReq_Out = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_Pct_AirHtrPwrTgt_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_Pct_AirHtrPwrTgt_ = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_AirHtrPwrTgt_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_AirHtrPwrTgt_FA = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HtmpRadCool_TmpIn_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HtmpRadCool_Tmp = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HtmpRadCool_TmpIn_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HtmpRadCool_Tmp = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HtmpRadCool_TmpOut_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HtmpRadCool_T_m = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HtmpRadCool_TmpOut_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HtmpRadCool_T_e = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_HeatExCool_TmpOut_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HeatExCool_TmpO = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HeatExCool_TmpOut_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HeatExCool_TmpO = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_P_SDS_HV_PwrAvgRaw_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_P_SDS_HV_PwrAvgRa = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_HV_PwrAvgRaw_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_HV_PwrAvgRa = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_HV_PwrAvgRc = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_SDS_ClntTmpIn_Act_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_T_SDS_ClntTmpIn_A = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_ClntTmpIn_Act_FA_final_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_A = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_b = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_SDS_ActualState_Out_Init' incorporates:
     *  Constant: '<S324>/Const33'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_SDS_ActualState = TRIR_ac_ConstB.Const33;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_ActualState_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ActualState = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_ActualState_Rcvd_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ActualSta_p = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_SDS_MaxCoolingReq_Out_Init' incorporates:
     *  Constant: '<S324>/Const36'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_SDS_MaxCoolingR = TRIR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_MaxCoolingReq_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_MaxCoolingR = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_MaxCoolingReq_Rcvd_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_MaxCoolin_n = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_T_SDS_ClntTmpIn_Tgt_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_T_SDS_ClntTmpIn_T = 0.0F;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_ClntTmpIn_Tgt_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_T = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_m = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_Cnt_MC_RHSC2_Cooling_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_Cnt_MC_RHSC2_Cool = 0;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_HVACSt_Out_Init' incorporates:
     *  Constant: '<S324>/Const41'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_HVACSt_Out_Init = TRIR_ac_ConstB.Const41;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_SCCActv_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_SCCActv_Out_Ini = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_HVACECOModeSts_Out_Init' incorporates:
     *  Constant: '<S324>/Const42'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_HVACECOModeSts_ = TRIR_ac_ConstB.Const42;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HVACECOModeSts_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HVACECOModeSts_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_ClimateInfo_Out_Init' incorporates:
     *  Constant: '<S324>/Const52'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_ClimateInfo_Out = TRIR_ac_ConstB.Const52;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_ClimateInfo_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_ClimateInfo_FA_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_KeepHotColdButtonStatus_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_KeepHotColdButt = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_KeepHotColdButtonStatus_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_KeepHotColdBu_k = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_Comfort_EnblAct_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_Comfort_EnblAct = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_Comfort_EnblAct_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_Comfort_EnblA_g = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_TrunkStatus_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_TrunkStatus_Out = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_TrunkStatus_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_TrunkStatus_FA_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_LoadShed_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_LoadShed_Out_In = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_LoadShed_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_LoadShed_FA_Out = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_HSW_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const1'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_HSW_Sts_Out_Ini = TRIR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HSW_Sts_FA_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HSW_Sts_FA_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_HSW_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_HSW_Fail_Out_In = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_FL_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const3'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FL_HS_Sts_Out_I = TRIR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_FL_HS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_FL_HS_Fail_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_FR_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const5'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FR_HS_Sts_Out_I = TRIR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_FR_HS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_FR_HS_Fail_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_RL_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const7'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RL_HS_Sts_Out_I = TRIR_ac_ConstB.Const7;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_RL_HS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_RL_HS_Fail_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_RR_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const54'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RR_HS_Sts_Out_I = TRIR_ac_ConstB.Const54;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_RR_HS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_RR_HS_Fail_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_FL_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const55'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FL_VS_Sts_Out_I = TRIR_ac_ConstB.Const55;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_FL_VS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_FL_VS_Fail_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_FR_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const56'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FR_VS_Sts_Out_I = TRIR_ac_ConstB.Const56;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_FR_VS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_FR_VS_Fail_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_RL_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const57'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RL_VS_Sts_Out_I = TRIR_ac_ConstB.Const57;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_RL_VS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_RL_VS_Fail_Out_ = false;

    /* SignalConversion generated from: '<S324>/VeTRIR_e_RR_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const58'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RR_VS_Sts_Out_I = TRIR_ac_ConstB.Const58;

    /* SignalConversion generated from: '<S324>/VeTRIR_b_RR_VS_Fail_Out_Init' */
    TRIR_ac_B.OutportBufferForVeTRIR_b_RR_VS_Fail_Out_ = false;

    /* End of Outputs for S-Function (fcgen): '<S64>/FcnCallGen' */

    /* Outport: '<Root>/VeTRIR_Cnt_MC_RHSC2_Cooling' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_Cnt_MC_RHSC2_Cooling_Out_Init'
     */
    (void)Rte_Write_VeTRIR_Cnt_MC_RHSC2_Cooling_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_Cnt_MC_RHSC2_Cool);

    /* Outport: '<Root>/VeTRIR_P_SDS_HV_PwrAvgRaw' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_P_SDS_HV_PwrAvgRaw_Out_Init'
     */
    (void)Rte_Write_VeTRIR_P_SDS_HV_PwrAvgRaw_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_P_SDS_HV_PwrAvgRa);

    /* Outport: '<Root>/VeTRIR_Pct_AirHtrPwrTgt' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_Pct_AirHtrPwrTgt_Out_Init'
     */
    (void)Rte_Write_VeTRIR_Pct_AirHtrPwrTgt_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_Pct_AirHtrPwrTgt_);

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmp2_In' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HV_BatClntTmp2_In_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmp2_In_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp2_);

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmpOut2' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HV_BatClntTmpOut2_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmpOut2_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp_p);

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmpOut' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HV_BatClntTmpOut_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmpOut_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmpOu);

    /* Outport: '<Root>/VeTRIR_T_HV_BatClntTmp_In' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HV_BatClntTmp_In_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HV_BatClntTmp_In_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp_I);

    /* Outport: '<Root>/VeTRIR_T_HeatExCool_TmpOut' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HeatExCool_TmpOut_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HeatExCool_TmpOut_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HeatExCool_TmpO);

    /* Outport: '<Root>/VeTRIR_T_HtmpRadCool_TmpIn' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HtmpRadCool_TmpIn_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HtmpRadCool_TmpIn_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HtmpRadCool_Tmp);

    /* Outport: '<Root>/VeTRIR_T_HtmpRadCool_TmpOut' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HtmpRadCool_TmpOut_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HtmpRadCool_TmpOut_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HtmpRadCool_T_m);

    /* Outport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HtrCorClnt_TmpIn_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HtrCorClnt_TmpIn_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HtrCorClnt_TmpI);

    /* Outport: '<Root>/VeTRIR_T_HtrCorClnt_TmpOut' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_HtrCorClnt_TmpOut_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_HtrCorClnt_TmpOut_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_HtrCorClnt_TmpO);

    /* Outport: '<Root>/VeTRIR_T_SDS_ClntTmpIn_Act' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_SDS_ClntTmpIn_Act_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_SDS_ClntTmpIn_Act_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_SDS_ClntTmpIn_A);

    /* Outport: '<Root>/VeTRIR_T_SDS_ClntTmpIn_Tgt' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_T_SDS_ClntTmpIn_Tgt_Out_Init'
     */
    (void)Rte_Write_VeTRIR_T_SDS_ClntTmpIn_Tgt_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_T_SDS_ClntTmpIn_T);

    /* Outport: '<Root>/VeTRIR_U_BatBotlClnt_LoLvlVolt' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_U_BatBotlClnt_LoLvlVolt_Out_Init'
     */
    (void)Rte_Write_VeTRIR_U_BatBotlClnt_LoLvlVolt_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_U_BatBotlClnt_LoL);

    /* Outport: '<Root>/VeTRIR_b_AHP_EnblReq' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_AHP_EnblReq_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_AHP_EnblReq_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_AHP_EnblReq_Out);

    /* Outport: '<Root>/VeTRIR_b_AirHtrPwrTgt_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_AirHtrPwrTgt_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_AirHtrPwrTgt_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_AirHtrPwrTgt_FA);

    /* Outport: '<Root>/VeTRIR_b_BatBotlClntLoLvl_OC' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_BatBotlClntLoLvl_OC_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_BatBotlClntLoLvl_OC_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_BatBotlClntLoLv);

    /* Outport: '<Root>/VeTRIR_b_ClimateInfo_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_ClimateInfo_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_ClimateInfo_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_ClimateInfo_FA_);

    /* Outport: '<Root>/VeTRIR_b_Comfort_EnblAct_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_Comfort_EnblAct_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_Comfort_EnblAct_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_Comfort_EnblA_g);

    /* Outport: '<Root>/VeTRIR_b_Comfort_EnblAct' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_Comfort_EnblAct_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_Comfort_EnblAct_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_Comfort_EnblAct);

    /* Outport: '<Root>/VeTRIR_b_FL_HS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_FL_HS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_FL_HS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_FL_HS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_FL_VS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_FL_VS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_FL_VS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_FL_VS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_FR_HS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_FR_HS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_FR_HS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_FR_HS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_FR_VS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_FR_VS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_FR_VS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_FR_VS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_HSW_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HSW_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HSW_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HSW_Fail_Out_In);

    /* Outport: '<Root>/VeTRIR_b_HSW_Sts_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HSW_Sts_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HSW_Sts_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HSW_Sts_FA_Out_);

    /* Outport: '<Root>/VeTRIR_b_HVACECOModeSts_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HVACECOModeSts_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HVACECOModeSts_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HVACECOModeSts_);

    /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp2_InFA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HV_BatClntTmp2_InFA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HV_BatClntTmp2_InFA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp2_);

    /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp2_OutFA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HV_BatClntTmp2_OutFA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HV_BatClntTmp2_OutFA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp_c);

    /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp_In_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HV_BatClntTmp_In_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HV_BatClntTmp_In_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp_I);

    /* Outport: '<Root>/VeTRIR_b_HV_BatClntTmp_Out_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HV_BatClntTmp_Out_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HV_BatClntTmp_Out_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HV_BatClntTmp_O);

    /* Outport: '<Root>/VeTRIR_b_HeatExCool_TmpOut_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HeatExCool_TmpOut_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HeatExCool_TmpOut_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HeatExCool_TmpO);

    /* Outport: '<Root>/VeTRIR_b_HtmpRadCool_TmpIn_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HtmpRadCool_TmpIn_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HtmpRadCool_TmpIn_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HtmpRadCool_Tmp);

    /* Outport: '<Root>/VeTRIR_b_HtmpRadCool_TmpOut_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HtmpRadCool_TmpOut_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HtmpRadCool_TmpOut_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HtmpRadCool_T_e);

    /* Outport: '<Root>/VeTRIR_b_HtrCorClnt_TmpIn_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HtrCorClnt_TmpIn_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HtrCorClnt_TmpIn_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HtrCorClnt_TmpI);

    /* Outport: '<Root>/VeTRIR_b_HtrCorClnt_TmpOut_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_HtrCorClnt_TmpOut_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_HtrCorClnt_TmpOut_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_HtrCorClnt_TmpO);

    /* Outport: '<Root>/VeTRIR_b_KeepHotColdButtonStatus_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_KeepHotColdButtonStatus_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_KeepHotColdButtonStatus_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_KeepHotColdBu_k);

    /* Outport: '<Root>/VeTRIR_b_KeepHotColdButtonStatus' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_KeepHotColdButtonStatus_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_KeepHotColdButtonStatus_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_KeepHotColdButt);

    /* Outport: '<Root>/VeTRIR_b_LoadShed_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_LoadShed_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_LoadShed_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_LoadShed_FA_Out);

    /* Outport: '<Root>/VeTRIR_b_LoadShed' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_LoadShed_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_LoadShed_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_LoadShed_Out_In);

    /* Outport: '<Root>/VeTRIR_b_RL_HS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_RL_HS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_RL_HS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_RL_HS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_RL_VS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_RL_VS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_RL_VS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_RL_VS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_RR_HS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_RR_HS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_RR_HS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_RR_HS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_RR_VS_Fail' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_RR_VS_Fail_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_RR_VS_Fail_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_RR_VS_Fail_Out_);

    /* Outport: '<Root>/VeTRIR_b_SCCActv' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SCCActv_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SCCActv_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SCCActv_Out_Ini);

    /* Outport: '<Root>/VeTRIR_b_SDS_ActualState_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_ActualState_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ActualState_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ActualState);

    /* Outport: '<Root>/VeTRIR_b_SDS_ActualState_Rcvd' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_ActualState_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ActualState_Rcvd_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ActualSta_p);

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Act_FA_final' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_ClntTmpIn_Act_FA_final_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Act_FA_final_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_A);

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Act_Rcvd' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_b);

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Tgt_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_ClntTmpIn_Tgt_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Tgt_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_T);

    /* Outport: '<Root>/VeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_ClntTmpIn_m);

    /* Outport: '<Root>/VeTRIR_b_SDS_HV_PwrAvgRaw_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_HV_PwrAvgRaw_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_HV_PwrAvgRaw_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_HV_PwrAvgRa);

    /* Outport: '<Root>/VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_HV_PwrAvgRcvd_Raw_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_HV_PwrAvgRc);

    /* Outport: '<Root>/VeTRIR_b_SDS_MaxCoolingReq_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_MaxCoolingReq_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_MaxCoolingReq_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_MaxCoolingR);

    /* Outport: '<Root>/VeTRIR_b_SDS_MaxCoolingReq_Rcvd' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_SDS_MaxCoolingReq_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_SDS_MaxCoolingReq_Rcvd_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_SDS_MaxCoolin_n);

    /* Outport: '<Root>/VeTRIR_b_TrunkStatus_FA' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_TrunkStatus_FA_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_TrunkStatus_FA_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_TrunkStatus_FA_);

    /* Outport: '<Root>/VeTRIR_b_TrunkStatus' incorporates:
     *  SignalConversion generated from: '<S64>/VeTRIR_b_TrunkStatus_Out_Init'
     */
    (void)Rte_Write_VeTRIR_b_TrunkStatus_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_b_TrunkStatus_Out);

    /* Outport: '<Root>/VeTRIR_e_ClimateInfo' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_ClimateInfo_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_ClimateInfo_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_ClimateInfo_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_ClimateInfo_Out);

    /* Outport: '<Root>/VeTRIR_e_FL_HS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_FL_HS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_FL_HS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_FL_HS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_FL_HS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_FL_VS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_FL_VS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_FL_VS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_FL_VS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_FL_VS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_FR_HS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_FR_HS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_FR_HS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_FR_HS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_FR_HS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_FR_VS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_FR_VS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_FR_VS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_FR_VS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_FR_VS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_HSW_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_HSW_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_HSW_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_HSW_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_HSW_Sts_Out_Ini);

    /* Outport: '<Root>/VeTRIR_e_HVACECOModeSts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_HVACECOModeSts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_HVACECOModeSts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_HVACECOModeSts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_HVACECOModeSts_);

    /* Outport: '<Root>/VeTRIR_e_HVACSt' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_HVACSt_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_HVACSt_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_HVACSt_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_HVACSt_Out_Init);

    /* Outport: '<Root>/VeTRIR_e_RL_HS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_RL_HS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_RL_HS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_RL_HS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_RL_HS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_RL_VS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_RL_VS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_RL_VS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_RL_VS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_RL_VS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_RR_HS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_RR_HS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_RR_HS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_RR_HS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_RR_HS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_RR_VS_Sts' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_RR_VS_Sts_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_RR_VS_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_RR_VS_Sts_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_RR_VS_Sts_Out_I);

    /* Outport: '<Root>/VeTRIR_e_SDS_ActualState' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_SDS_ActualState_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_SDS_ActualState_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_SDS_ActualState_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_SDS_ActualState);

    /* Outport: '<Root>/VeTRIR_e_SDS_MaxCoolingReq' incorporates:
     *  SignalConversion generated from: '<S324>/VeTRIR_e_SDS_MaxCoolingReq_Out_Init'
     *  SignalConversion generated from: '<S64>/VeTRIR_e_SDS_MaxCoolingReq_Out_Init'
     */
    (void)Rte_Write_VeTRIR_e_SDS_MaxCoolingReq_Value
        (TRIR_ac_B.OutportBufferForVeTRIR_e_SDS_MaxCoolingR);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S64>/AHP_EnblReq_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_AHP_EnblReqFA_write_IRV
        (TRIR_ac_B.OutportBufferForAHP_EnblReq_FA_INIT_writ);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S64>/AHP_EnblReq_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_AHP_EnblReq_write_IRV
        (TRIR_ac_B.OutportBufferForAHP_EnblReq_INIT_write);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S64>/AirHtrPwrTgtFA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_AirHtwPwrTgtFA_write_IRV
        (TRIR_ac_B.OutportBufferForAirHtrPwrTgtFA_INIT_writ);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S64>/AirHtrPwrTgt_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_Pct_AirHtwPwrTgt_write_IRV
        (TRIR_ac_B.OutportBufferForAirHtrPwrTgt_INIT_write);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S64>/ClimateInfo_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_ClimateInfoFA_write_IRV
        (TRIR_ac_B.OutportBufferForClimateInfo_FA_INIT_writ);

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S323>/ClimateInfo_INIT_write'
     *  SignalConversion generated from: '<S64>/ClimateInfo_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_ClimateInfo_write_IRV
        (TRIR_ac_B.OutportBufferForClimateInfo_INIT_write);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S64>/Comfort_EnblAct_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_BCM_Comfort_EnblActFA_write_IRV
        (TRIR_ac_B.OutportBufferForComfort_EnblAct_FA_INIT_);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S64>/Comfort_EnblAct_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_BCM_Comfort_EnblAct_write_IRV
        (TRIR_ac_B.OutportBufferForComfort_EnblAct_INIT_wri);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S64>/FL_HS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_FL_HS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForFL_HS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S323>/FL_HS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/FL_HS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_FL_HS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForFL_HS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S64>/FL_VS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_FL_VS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForFL_VS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S323>/FL_VS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/FL_VS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_FL_VS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForFL_VS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S64>/FR_HS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_FR_HS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForFR_HS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S323>/FR_HS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/FR_HS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_FR_HS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForFR_HS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S64>/FR_VS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_FR_VS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForFR_VS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S323>/FR_VS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/FR_VS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_FR_VS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForFR_VS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S64>/HSW_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HSW_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForHSW_Fail_INIT_write);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S64>/HSW_Sts_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HSW_StsFA_write_IRV
        (TRIR_ac_B.OutportBufferForHSW_Sts_FA_INIT_write);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S323>/HSW_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/HSW_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_HSW_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForHSW_Sts_INIT_write);

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S64>/HVACECOModeSts_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HVACECOModeStsFA_write_IRV
        (TRIR_ac_B.OutportBufferForHVACECOModeSts_FA_INIT_w);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S323>/HVACECOModeSts_INIT_write'
     *  SignalConversion generated from: '<S64>/HVACECOModeSts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_HVACECOModeSts_write_IRV
        (TRIR_ac_B.OutportBufferForHVACECOModeSts_INIT_writ);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S323>/HVACPrecCondSts_Init_write'
     *  SignalConversion generated from: '<S64>/HVACPrecCondSts_Init_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_HVACPrecCondSts_write_IRV
        (TRIR_ac_B.OutportBufferForHVACPrecCondSts_Init_wri);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp2_In_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HV_BatClntTmp2_InFA_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_FA_INI);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp2_In_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HV_BatClntTmp2_In_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_INIT_w);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp2_In_Prev_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_HV_BatClntTmp2_In_AD_Prev_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_Prev_I);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp2_Out_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HV_BatClntTmp2OutFA_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_FA_IN);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp2_Out_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HV_BatClntTmp2_Out_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_INIT_);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp2_Out_Prev_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_HV_BatClntTmpOut2_AD_Prev_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_Prev_);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp_In_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HV_BatClntTmp_InFA_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_FA_INIT);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp_In_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HV_BatClntTmp_In_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_INIT_wr);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp_In_Prev_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_HV_BatClntTmp_In_AD_Prev_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_Prev_IN);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp_Out_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HV_BatClntTmpOutFA_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_FA_INI);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp_Out_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HV_BatClntTmp_Out_write_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_INIT_w);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S64>/HV_BatClntTmp_Out_Prev_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_HV_BatClntTmpOut_AD_Prev_IRV
        (TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_Prev_I);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S64>/HeatExCool_TmpOut_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HeatExCool_TmpOutFA_write_IRV
        (TRIR_ac_B.OutportBufferForHeatExCool_TmpOut_FA_INI);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S64>/HeatExCool_TmpOut_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HeatExCool_TmpOut_write_IRV
        (TRIR_ac_B.OutportBufferForHeatExCool_TmpOut_INIT_w);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S64>/HtmpRadCool_TmpIn_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HtmpRadCool_TmpInFA_write_IRV
        (TRIR_ac_B.OutportBufferForHtmpRadCool_TmpIn_FA_INI);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S64>/HtmpRadCool_TmpIn_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HtmpRadCool_TmpIn_write_IRV
        (TRIR_ac_B.OutportBufferForHtmpRadCool_TmpIn_INIT_w);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S64>/HtmpRadCool_TmpOut_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HtmpRadCool_TmpOutFA_write_IRV
        (TRIR_ac_B.OutportBufferForHtmpRadCool_TmpOut_FA_IN);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S64>/HtmpRadCool_TmpOut_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HtmpRadCool_TmpOut_write_IRV
        (TRIR_ac_B.OutportBufferForHtmpRadCool_TmpOut_INIT_);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S64>/HtrCorClnt_TmpOut_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_HtrCorClnt_TmpOutFA_write_IRV
        (TRIR_ac_B.OutportBufferForHtrCorClnt_TmpOut_FA_INI);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S64>/HtrCorClnt_TmpOut_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_HtrCorClnt_TmpOut_write_IRV
        (TRIR_ac_B.OutportBufferForHtrCorClnt_TmpOut_INIT_w);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S64>/KeepHotColdButtonStatus_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_ETM_KeepHotColdButtonStatusFA_write_IRV
        (TRIR_ac_B.OutportBufferForKeepHotColdButtonStatus_);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S64>/KeepHotColdButtonStatus_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_ETM_KeepHotColdButtonStatus_write_IRV
        (TRIR_ac_B.OutportBufferForKeepHotColdButtonStatu_j);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S64>/LoadShed_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_LoadShedFA_write_IRV
        (TRIR_ac_B.OutportBufferForLoadShed_FA_INIT_write);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S64>/LoadShed_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_LoadShed_write_IRV
        (TRIR_ac_B.OutportBufferForLoadShed_INIT_write);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S64>/MC_RHSC2_Cooling_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_Cnt_MC_RHSC2_Cooling_write_IRV
        (TRIR_ac_B.OutportBufferForMC_RHSC2_Cooling_INIT_wr);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S64>/RL_HS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_RL_HS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForRL_HS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S323>/RL_HS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/RL_HS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_RL_HS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForRL_HS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S64>/RL_VS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_RL_VS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForRL_VS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S323>/RL_VS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/RL_VS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_RL_VS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForRL_VS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S64>/RR_HS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_RR_HS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForRR_HS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S323>/RR_HS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/RR_HS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_RR_HS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForRR_HS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S64>/RR_VS_Fail_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_RR_VS_Fail_write_IRV
        (TRIR_ac_B.OutportBufferForRR_VS_Fail_INIT_write);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S323>/RR_VS_Sts_INIT_write'
     *  SignalConversion generated from: '<S64>/RR_VS_Sts_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_RR_VS_Sts_write_IRV
        (TRIR_ac_B.OutportBufferForRR_VS_Sts_INIT_write);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S64>/SCCActv_Init_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SCCActv_write_IRV
        (TRIR_ac_B.OutportBufferForSCCActv_Init_write);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ActualState_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_ActualStateFA_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ActualState_FA_INIT_);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S323>/SDS_ActualState_INIT_write'
     *  SignalConversion generated from: '<S64>/SDS_ActualState_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_SDS_ActualState_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ActualState_INIT_wri);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ActualState_Rcvd_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_ActualStateSgnl_Rcvd_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ActualState_Rcvd_INI);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ClntTmpIn_Act_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_ClntTmpIn_ActFA_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_FA_INI);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ClntTmpIn_Act_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_SDS_ClntTmpIn_Act_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_INIT_w);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ClntTmpIn_Act_Rcvd_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_Rcvd_I);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ClntTmpIn_Tgt_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_ClntTmpIn_TgtFA_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_FA_INI);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ClntTmpIn_Tgt_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_T_SDS_ClntTmpIn_Tgt_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_INIT_w);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_ClntTmpIn_Tgt_Rcvd_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_Rcvd_I);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_HV_PwrAvg_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_HV_PwrAvgFA_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_FA_INIT_wr);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_HV_PwrAvg_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_P_SDS_HV_PwrAvg_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_INIT_write);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_HV_PwrAvg_Rcvd_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_Rcvd_INIT_);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_MaxCoolingReq_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_MaxCoolingReqFA_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_FA_INI);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S323>/SDS_MaxCoolingReq_INIT_write'
     *  SignalConversion generated from: '<S64>/SDS_MaxCoolingReq_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_e_SDS_MaxCoolingReq_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_INIT_w);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S64>/SDS_MaxCoolingReq_Rcvd_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd_write_IRV
        (TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_Rcvd_I);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S64>/TrunkStatus_FA_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_TrunkStatusFA_write_IRV
        (TRIR_ac_B.OutportBufferForTrunkStatus_FA_INIT_writ);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S64>/TrunkStatus_INIT_write'
     * */
    Rte_IrvWrite_TRIR_PwrOn_VeTRIR_b_TrunkStatus_write_IRV
        (TRIR_ac_B.OutportBufferForTrunkStatus_INIT_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, TRIR_CODE) TmotTRIR_T_SDS_ClntTmpIn_Act(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotTRIR_T_SDS_ClntTmpIn_Act' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S65>/TmotTRIR_T_SDS_ClntTmpIn_ActChrt'
     *  SignalConversion generated from: '<S65>/VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write'
     */
    /* Gateway: TmotTRIR_T_SDS_ClntTmpIn_Act/TmotTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* During: TmotTRIR_T_SDS_ClntTmpIn_Act/TmotTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* Entry Internal: TmotTRIR_T_SDS_ClntTmpIn_Act/TmotTRIR_T_SDS_ClntTmpIn_ActChrt */
    /* Transition: '<S406>:2' */
    Rte_IrvWrite_TmotTRIR_T_SDS_ClntTmpIn_Act_VeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotTRIR_T_SDS_ClntTmpIn_Act' */
}

/* Output function */
FUNC(void, TRIR_CODE) TmotTRIR_b_HVACPrecCondSts(void)
{
    /* Gateway: TmotTRIR_b_HVACPrecCondSts/TmotTRIR_b_HVACPrecCondStsChrt */
    /* During: TmotTRIR_b_HVACPrecCondSts/TmotTRIR_b_HVACPrecCondStsChrt */
    /* Entry Internal: TmotTRIR_b_HVACPrecCondSts/TmotTRIR_b_HVACPrecCondStsChrt */
    /* Transition: '<S407>:2' */
}

/* Output function */
FUNC(void, TRIR_CODE) TmotTRIR_b_SCCActv(void)
{
    /* Gateway: TmotTRIR_b_SCCActv/TmotTRIR_b_SCCActvChrt */
    /* During: TmotTRIR_b_SCCActv/TmotTRIR_b_SCCActvChrt */
    /* Entry Internal: TmotTRIR_b_SCCActv/TmotTRIR_b_SCCActvChrt */
    /* Transition: '<S408>:2' */
}

/* Model initialize function */
FUNC(void, TRIR_CODE) TRIR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TRIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S64>/FcnCallGen' incorporates:
     *  SubSystem: '<S64>/IRV_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S323>/FL_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S344>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_HS_Fail_INIT_write = KeTRIR_b_FL_HS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/FL_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S343>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_HS_Sts_INIT_write = KeTRIR_e_FL_HS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/FL_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S335>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_VS_Fail_INIT_write = KeTRIR_b_FL_VS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/FL_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S334>/Calib'
     */
    TRIR_ac_B.OutportBufferForFL_VS_Sts_INIT_write = KeTRIR_e_FL_VS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/FR_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S346>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_HS_Fail_INIT_write = KeTRIR_b_FR_HS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/FR_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S345>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_HS_Sts_INIT_write = KeTRIR_e_FR_HS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/FR_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S337>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_VS_Fail_INIT_write = KeTRIR_b_FR_VS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/FR_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S336>/Calib'
     */
    TRIR_ac_B.OutportBufferForFR_VS_Sts_INIT_write = KeTRIR_e_FR_VS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HSW_Fail_INIT_write' incorporates:
     *  Constant: '<S342>/Calib'
     */
    TRIR_ac_B.OutportBufferForHSW_Fail_INIT_write = KeTRIR_b_HSW_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HSW_Sts_FA_INIT_write' incorporates:
     *  Constant: '<S354>/Calib'
     */
    TRIR_ac_B.OutportBufferForHSW_Sts_FA_INIT_write = KeTRIR_b_HSW_Sts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HSW_Sts_INIT_write' incorporates:
     *  Constant: '<S332>/Calib'
     */
    TRIR_ac_B.OutportBufferForHSW_Sts_INIT_write = KeTRIR_e_HSW_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp2_In_FA_INIT_write' incorporates:
     *  Constant: '<S352>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_FA_INI =
        KeTRIR_b_HV_BatClntTmp2_In_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp2_In_INIT_write' incorporates:
     *  Constant: '<S330>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_INIT_w =
        KeTRIR_T_HV_BatClntTmp2_In_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp2_In_Prev_INIT_write' incorporates:
     *  Constant: '<S330>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_In_Prev_I =
        KeTRIR_T_HV_BatClntTmp2_In_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp2_Out_FA_INIT_write' incorporates:
     *  Constant: '<S353>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_FA_IN =
        KeTRIR_b_HV_BatClntTmp2_Out_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp2_Out_INIT_write' incorporates:
     *  Constant: '<S331>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_INIT_ =
        KeTRIR_T_HV_BatClntTmp2_Out_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp2_Out_Prev_INIT_write' incorporates:
     *  Constant: '<S331>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp2_Out_Prev_ =
        KeTRIR_T_HV_BatClntTmp2_Out_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp_In_FA_INIT_write' incorporates:
     *  Constant: '<S355>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_FA_INIT =
        KeTRIR_b_HV_BatClntTmp_In_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp_In_INIT_write' incorporates:
     *  Constant: '<S350>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_INIT_wr =
        KeTRIR_T_HV_BatClntTmp_In_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp_In_Prev_INIT_write' incorporates:
     *  Constant: '<S350>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_In_Prev_IN =
        KeTRIR_T_HV_BatClntTmp_In_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp_Out_FA_INIT_write' incorporates:
     *  Constant: '<S356>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_FA_INI =
        KeTRIR_b_HV_BatClntTmp_Out_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp_Out_INIT_write' incorporates:
     *  Constant: '<S351>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_INIT_w =
        KeTRIR_T_HV_BatClntTmp_Out_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HV_BatClntTmp_Out_Prev_INIT_write' incorporates:
     *  Constant: '<S351>/Calib'
     */
    TRIR_ac_B.OutportBufferForHV_BatClntTmp_Out_Prev_I =
        KeTRIR_T_HV_BatClntTmp_Out_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RL_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S348>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_HS_Fail_INIT_write = KeTRIR_b_RL_HS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RL_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S347>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_HS_Sts_INIT_write = KeTRIR_e_RL_HS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RL_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S339>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_VS_Fail_INIT_write = KeTRIR_b_RL_VS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RL_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S338>/Calib'
     */
    TRIR_ac_B.OutportBufferForRL_VS_Sts_INIT_write = KeTRIR_e_RL_VS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RR_HS_Fail_INIT_write' incorporates:
     *  Constant: '<S333>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_HS_Fail_INIT_write = KeTRIR_b_RR_HS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RR_HS_Sts_INIT_write' incorporates:
     *  Constant: '<S349>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_HS_Sts_INIT_write = KeTRIR_e_RR_HS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RR_VS_Fail_INIT_write' incorporates:
     *  Constant: '<S341>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_VS_Fail_INIT_write = KeTRIR_b_RR_VS_Fail_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/RR_VS_Sts_INIT_write' incorporates:
     *  Constant: '<S340>/Calib'
     */
    TRIR_ac_B.OutportBufferForRR_VS_Sts_INIT_write = KeTRIR_e_RR_VS_Sts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/AHP_EnblReq_FA_INIT_write' incorporates:
     *  Constant: '<S362>/Calib'
     */
    TRIR_ac_B.OutportBufferForAHP_EnblReq_FA_INIT_writ =
        KeTRIR_b_AHP_EnblReq_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/AHP_EnblReq_INIT_write' incorporates:
     *  Constant: '<S363>/Calib'
     */
    TRIR_ac_B.OutportBufferForAHP_EnblReq_INIT_write = KeTRIR_b_AHP_EnblReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/AirHtrPwrTgtFA_INIT_write' incorporates:
     *  Constant: '<S364>/Calib'
     */
    TRIR_ac_B.OutportBufferForAirHtrPwrTgtFA_INIT_writ =
        KeTRIR_b_AirHtrPwrTgtFA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/AirHtrPwrTgt_INIT_write' incorporates:
     *  Constant: '<S357>/Calib'
     */
    TRIR_ac_B.OutportBufferForAirHtrPwrTgt_INIT_write =
        KeTRIR_Pct_AirHtrPwrTgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HeatExCool_TmpOut_FA_INIT_write' incorporates:
     *  Constant: '<S365>/Calib'
     */
    TRIR_ac_B.OutportBufferForHeatExCool_TmpOut_FA_INI =
        KeTRIR_b_HeatExCool_TmpOut_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HeatExCool_TmpOut_INIT_write' incorporates:
     *  Constant: '<S358>/Calib'
     */
    TRIR_ac_B.OutportBufferForHeatExCool_TmpOut_INIT_w =
        KeTRIR_T_HeatExCool_TmpOut_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HtmpRadCool_TmpIn_FA_INIT_write' incorporates:
     *  Constant: '<S366>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpIn_FA_INI =
        KeTRIR_b_HtmpRadCool_TmpIn_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HtmpRadCool_TmpIn_INIT_write' incorporates:
     *  Constant: '<S359>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpIn_INIT_w =
        KeTRIR_T_HtmpRadCool_TmpIn_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HtmpRadCool_TmpOut_FA_INIT_write' incorporates:
     *  Constant: '<S367>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpOut_FA_IN =
        KeTRIR_b_HtmpRadCool_TmpOut_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HtmpRadCool_TmpOut_INIT_write' incorporates:
     *  Constant: '<S360>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtmpRadCool_TmpOut_INIT_ =
        KeTRIR_T_HtmpRadCool_TmpOut_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HtrCorClnt_TmpOut_FA_INIT_write' incorporates:
     *  Constant: '<S368>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtrCorClnt_TmpOut_FA_INI =
        KeTRIR_b_HtrCorClnt_TmpOut_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HtrCorClnt_TmpOut_INIT_write' incorporates:
     *  Constant: '<S361>/Calib'
     */
    TRIR_ac_B.OutportBufferForHtrCorClnt_TmpOut_INIT_w =
        KeTRIR_T_HtrCorClnt_TmpOut_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/MC_RHSC2_Cooling_INIT_write' incorporates:
     *  Constant: '<S369>/Calib'
     */
    TRIR_ac_B.OutportBufferForMC_RHSC2_Cooling_INIT_wr =
        KeTRIR_Cnt_MC_RHSC2_Cooling_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ActualState_FA_INIT_write' incorporates:
     *  Constant: '<S373>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ActualState_FA_INIT_ =
        KeTRIR_b_SDS_ActualState_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ActualState_INIT_write' incorporates:
     *  Constant: '<S383>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ActualState_INIT_wri =
        KeTRIR_e_SDS_ActualState_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ActualState_Rcvd_INIT_write' incorporates:
     *  Constant: '<S374>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ActualState_Rcvd_INI =
        KeTRIR_b_SDS_ActualState_Rcvd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Act_FA_INIT_write' incorporates:
     *  Constant: '<S375>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_FA_INI =
        KeTRIR_b_SDS_ClntTmpIn_Act_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Act_INIT_write' incorporates:
     *  Constant: '<S371>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_INIT_w =
        KeTRIR_T_SDS_ClntTmpIn_Act_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Act_Rcvd_INIT_write' incorporates:
     *  Constant: '<S376>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Act_Rcvd_I =
        KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Tgt_FA_INIT_write' incorporates:
     *  Constant: '<S377>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_FA_INI =
        KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Tgt_INIT_write' incorporates:
     *  Constant: '<S372>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_INIT_w =
        KeTRIR_T_SDS_ClntTmpIn_Tgt_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_ClntTmpIn_Tgt_Rcvd_INIT_write' incorporates:
     *  Constant: '<S378>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_ClntTmpIn_Tgt_Rcvd_I =
        KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_HV_PwrAvg_FA_INIT_write' incorporates:
     *  Constant: '<S379>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_FA_INIT_wr =
        KeTRIR_b_SDS_HV_PwrAvg_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_HV_PwrAvg_INIT_write' incorporates:
     *  Constant: '<S370>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_INIT_write =
        KeTRIR_P_SDS_HV_PwrAvg_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_HV_PwrAvg_Rcvd_INIT_write' incorporates:
     *  Constant: '<S380>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_HV_PwrAvg_Rcvd_INIT_ =
        KeTRIR_b_SDS_HV_PwrAvg_Rcvd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_MaxCoolingReq_FA_INIT_write' incorporates:
     *  Constant: '<S381>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_FA_INI =
        KeTRIR_b_SDS_MaxCoolingReq_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_MaxCoolingReq_INIT_write' incorporates:
     *  Constant: '<S384>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_INIT_w =
        KeTRIR_e_SDS_MaxCoolingReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SDS_MaxCoolingReq_Rcvd_INIT_write' incorporates:
     *  Constant: '<S382>/Calib'
     */
    TRIR_ac_B.OutportBufferForSDS_MaxCoolingReq_Rcvd_I =
        KeTRIR_b_SDS_MaxCoolingReq_Rcvd_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/ClimateInfo_FA_INIT_write' incorporates:
     *  Constant: '<S393>/Calib'
     */
    TRIR_ac_B.OutportBufferForClimateInfo_FA_INIT_writ =
        KeTRIR_b_ClimateInfo_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/ClimateInfo_INIT_write' incorporates:
     *  Constant: '<S399>/Calib'
     */
    TRIR_ac_B.OutportBufferForClimateInfo_INIT_write = KeTRIR_e_ClimateInfo_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HVACECOModeSts_FA_INIT_write' incorporates:
     *  Constant: '<S394>/Calib'
     */
    TRIR_ac_B.OutportBufferForHVACECOModeSts_FA_INIT_w =
        KeTRIR_b_HVACECOModeSts_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HVACECOModeSts_INIT_write' incorporates:
     *  Constant: '<S400>/Calib'
     */
    TRIR_ac_B.OutportBufferForHVACECOModeSts_INIT_writ =
        KeTRIR_e_HVACECOModeSts_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/HVACPrecCondSts_Init_write' incorporates:
     *  Constant: '<S401>/Calib'
     */
    TRIR_ac_B.OutportBufferForHVACPrecCondSts_Init_wri =
        KeTRIR_e_HVACPrecCondSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S323>/SCCActv_Init_write' incorporates:
     *  Constant: '<S398>/Calib'
     */
    TRIR_ac_B.OutportBufferForSCCActv_Init_write = KeTRIR_b_SCCActv_Init;

    /* SystemInitialize for SignalConversion generated from: '<S323>/Comfort_EnblAct_FA_INIT_write' incorporates:
     *  Constant: '<S385>/Calib'
     */
    TRIR_ac_B.OutportBufferForComfort_EnblAct_FA_INIT_ =
        KeTRIR_b_Comfort_EnblAct_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/Comfort_EnblAct_INIT_write' incorporates:
     *  Constant: '<S386>/Calib'
     */
    TRIR_ac_B.OutportBufferForComfort_EnblAct_INIT_wri =
        KeTRIR_b_Comfort_EnblAct_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/KeepHotColdButtonStatus_FA_INIT_write' incorporates:
     *  Constant: '<S387>/Calib'
     */
    TRIR_ac_B.OutportBufferForKeepHotColdButtonStatus_ =
        KeTRIR_b_KeepHotColdButtonStatus_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/KeepHotColdButtonStatus_INIT_write' incorporates:
     *  Constant: '<S388>/Calib'
     */
    TRIR_ac_B.OutportBufferForKeepHotColdButtonStatu_j =
        KeTRIR_b_KeepHotColdButtonStatus_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/LoadShed_FA_INIT_write' incorporates:
     *  Constant: '<S389>/Calib'
     */
    TRIR_ac_B.OutportBufferForLoadShed_FA_INIT_write = KeTRIR_b_LoadShed_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/LoadShed_INIT_write' incorporates:
     *  Constant: '<S390>/Calib'
     */
    TRIR_ac_B.OutportBufferForLoadShed_INIT_write = KeTRIR_b_LoadShed_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/TrunkStatus_FA_INIT_write' incorporates:
     *  Constant: '<S391>/Calib'
     */
    TRIR_ac_B.OutportBufferForTrunkStatus_FA_INIT_writ =
        KeTRIR_b_TrunkStatus_FA_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S323>/TrunkStatus_INIT_write' incorporates:
     *  Constant: '<S392>/Calib'
     */
    TRIR_ac_B.OutportBufferForTrunkStatus_INIT_write = KeTRIR_b_TrunkStatus_INIT;

    /* SystemInitialize for S-Function (fcgen): '<S64>/FcnCallGen' incorporates:
     *  SubSystem: '<S64>/Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmp_In_Out_Init' incorporates:
     *  Constant: '<S404>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp_I =
        KeTRIR_T_HV_BatClntTmp_In_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmpOut_Out_Init' incorporates:
     *  Constant: '<S405>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmpOu =
        KeTRIR_T_HV_BatClntTmp_Out_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmp2_In_Out_Init' incorporates:
     *  Constant: '<S402>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp2_ =
        KeTRIR_T_HV_BatClntTmp2_In_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_T_HV_BatClntTmpOut2_Out_Init' incorporates:
     *  Constant: '<S403>/Calib'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_T_HV_BatClntTmp_p =
        KeTRIR_T_HV_BatClntTmp2_Out_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_SDS_ActualState_Out_Init' incorporates:
     *  Constant: '<S324>/Const33'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_SDS_ActualState = TRIR_ac_ConstB.Const33;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_SDS_MaxCoolingReq_Out_Init' incorporates:
     *  Constant: '<S324>/Const36'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_SDS_MaxCoolingR = TRIR_ac_ConstB.Const36;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_HVACSt_Out_Init' incorporates:
     *  Constant: '<S324>/Const41'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_HVACSt_Out_Init = TRIR_ac_ConstB.Const41;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_HVACECOModeSts_Out_Init' incorporates:
     *  Constant: '<S324>/Const42'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_HVACECOModeSts_ = TRIR_ac_ConstB.Const42;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_ClimateInfo_Out_Init' incorporates:
     *  Constant: '<S324>/Const52'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_ClimateInfo_Out = TRIR_ac_ConstB.Const52;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_HSW_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const1'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_HSW_Sts_Out_Ini = TRIR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_FL_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const3'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FL_HS_Sts_Out_I = TRIR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_FR_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const5'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FR_HS_Sts_Out_I = TRIR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_RL_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const7'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RL_HS_Sts_Out_I = TRIR_ac_ConstB.Const7;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_RR_HS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const54'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RR_HS_Sts_Out_I = TRIR_ac_ConstB.Const54;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_FL_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const55'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FL_VS_Sts_Out_I = TRIR_ac_ConstB.Const55;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_FR_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const56'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_FR_VS_Sts_Out_I = TRIR_ac_ConstB.Const56;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_RL_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const57'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RL_VS_Sts_Out_I = TRIR_ac_ConstB.Const57;

    /* SystemInitialize for SignalConversion generated from: '<S324>/VeTRIR_e_RR_VS_Sts_Out_Init' incorporates:
     *  Constant: '<S324>/Const58'
     */
    TRIR_ac_B.OutportBufferForVeTRIR_e_RR_VS_Sts_Out_I = TRIR_ac_ConstB.Const58;

    /* End of SystemInitialize for S-Function (fcgen): '<S64>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_SDS_ActualState' incorporates:
     *  Merge: '<Root>/Merge_Outport_33'
     */
    (void)Rte_Write_VeTRIR_e_SDS_ActualState_Value(CeTRIR_e_SDS_OFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_SDS_MaxCoolingReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_36'
     */
    (void)Rte_Write_VeTRIR_e_SDS_MaxCoolingReq_Value
        (CeTRIR_e_HCP_MaxCoolingNotRequested);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_HVACSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_41'
     */
    (void)Rte_Write_VeTRIR_e_HVACSt_Value(CeTRIR_e_HVAC_Off);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_HVACECOModeSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_42'
     */
    (void)Rte_Write_VeTRIR_e_HVACECOModeSts_Value(CeTRIR_e_HVAC_ECO_OFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_ClimateInfo' incorporates:
     *  Merge: '<Root>/Merge_Outport_52'
     */
    (void)Rte_Write_VeTRIR_e_ClimateInfo_Value(CeTRIR_e_SPST_ON);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_HSW_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_54'
     */
    (void)Rte_Write_VeTRIR_e_HSW_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_FL_HS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_57'
     */
    (void)Rte_Write_VeTRIR_e_FL_HS_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_FR_HS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_59'
     */
    (void)Rte_Write_VeTRIR_e_FR_HS_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_RL_HS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_61'
     */
    (void)Rte_Write_VeTRIR_e_RL_HS_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_RR_HS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_63'
     */
    (void)Rte_Write_VeTRIR_e_RR_HS_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_FL_VS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VeTRIR_e_FL_VS_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_FR_VS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_67'
     */
    (void)Rte_Write_VeTRIR_e_FR_VS_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_RL_VS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_69'
     */
    (void)Rte_Write_VeTRIR_e_RL_VS_Sts_Value(CeTRIR_e_ModeOFF);

    /* SystemInitialize for Outport: '<Root>/VeTRIR_e_RR_VS_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_71'
     */
    (void)Rte_Write_VeTRIR_e_RR_VS_Sts_Value(CeTRIR_e_ModeOFF);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
