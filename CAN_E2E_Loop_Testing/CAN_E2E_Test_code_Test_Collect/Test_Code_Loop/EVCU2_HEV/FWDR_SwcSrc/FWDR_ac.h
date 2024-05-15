/*
 * File: FWDR_ac.h
 *
 * Code generated for Simulink model 'FWDR_ac'.
 *
 * Model version                  : 9.38
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:43:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FWDR_ac_h_
#define RTW_HEADER_FWDR_ac_h_
#include "Rte_Type.h"
#ifndef FWDR_ac_COMMON_INCLUDES_
#define FWDR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_FWDR.h"
#endif                                 /* FWDR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_FWDR_ac_T
{
    float32 LeFWDR_M_FricTrqClutch_out;
                                      /* '<S13>/PokeFWDR_M_FricTrqClutchChrt' */
    float32 OutportBufferForVeFWDR_r_TCaseRatio_Out_;/* '<S66>/Const1' */
    float32 OutportBufferForVeFWDR_r_Axle_Ratio_Out_;/* '<S66>/Const3' */
    float32 OutportBufferForVeFWDR_n_FDTransOutSpdSg;/* '<S66>/Const8' */
    float32 OutportBufferForFricTrqClutch_INIT;/* '<S65>/KeFWDR_M_FricTrqClutch_INIT' */
    boolean VeFWDI_b_Tcase_Stat_DTCMFA_Init_write_IR;/* '<Root>/Merge_3' */
    boolean VeFWDI_b_Tcase_StatFA_init_write_IRV;/* '<Root>/Merge_2' */
    boolean OutportBufferForVeFWDR_b_Tcase_StatFA_Ou;/* '<S66>/Const5' */
    boolean OutportBufferForVeFWDR_b_4HIPTActv_Out_I;/* '<S66>/Const7' */
    boolean OutportBufferForVeFWDR_b_SpeedSyncAvail;/* '<S66>/Const9' */
    boolean OutportBufferForVeFWDI_b_Tcase_StatFA_in;/* '<S65>/KeFWDR_b_TcaseStatFAOvrdVal' */
    boolean OutportBufferForVeFWDI_b_Tcase_Stat_DTCM;/* '<S65>/FALSE Constant' */
    boolean OutportBufferForVeFWDI_b_Tcase_Srv_RqFA_;/* '<S65>/FALSE Constant1' */
    boolean OutportBufferForVeFWDI_b_CCMFailSts_Init;/* '<S65>/KeFWDR_b_CCMFailStsInitVal' */
    boolean OutportBufferForVeFWDI_b_Sw1ReqFA_Init;/* '<S65>/FALSE Constant2' */
    boolean OutportBufferForTCASE_TargetRangeState_F;/* '<S65>/FALSE Constant3' */
    boolean OutportBufferForPTU_State_FA_INIT;/* '<S65>/FALSE Constant4' */
    boolean OutportBufferForRDU_State_FA_INIT;/* '<S65>/FALSE Constant5' */
    boolean OutportBufferForSpeedSyncReq_FA_INIT;/* '<S65>/FALSE Constant6' */
    boolean OutportBufferForFricTrqClutch_FA_INIT;/* '<S65>/FALSE Constant7' */
    TeFWDR_e_TrnsfrCaseRange VeFWDI_e_Tcase_Stat_DTCM_init_write_IRV;/* '<Root>/Merge_4_Irv' */
    TeFWDR_e_TrnsfrCaseRange VeFWDI_e_Tcase_Stat_init_write_IRV;/* '<Root>/Merge_1' */
    TeFWDR_e_TrnsfrCaseRange LeFWDR_e_TcaseRange_Stat_out;
                                    /* '<S22>/PokeFWDR_e_TcaseRange_StatChrt' */
    TeFWDR_e_TrnsfrCaseRange OutportBufferForVeFWDR_e_Tcase_Stat_Out_;/* '<S66>/Const4' */
    TeFWDR_e_TrnsfrCaseRange OutportBufferForVeFWDI_e_Tcase_Stat_DTCM;
                                     /* '<S65>/KeFWDR_e_TcaseStatDTCMOvrdVal' */
    TeFWDR_e_Tcase_Srv_Rq VeFWDI_e_Tcase_Srv_Rq_init_write_IRV;/* '<Root>/Merge_24' */
    TeFWDR_e_Tcase_Srv_Rq OutportBufferForVeFWDI_e_Tcase_Srv_Rq_in;/* '<S65>/KeFWDR_e_TcaseSrvRdOvrdVal' */
    TeFWDR_e_TCase_TrgtRngState OutportBufferForTCASE_TargetRangeState_I;
                              /* '<S65>/KeFWDR_e_TCASE_TargetRangeState_INIT' */
    TeFWDR_e_Switch_Rq OutportBufferForVeFWDI_e_Sw1Req_Init;/* '<S65>/KeFWDR_e_Sw1ReqInitVal' */
    TeFWDR_e_SpeedSyncReq OutportBufferForSpeedSyncReq_INIT;/* '<S65>/KeFWDR_e_SpeedSyncReq_INIT' */
    TeFWDR_e_RDU_State OutportBufferForRDU_State_INIT;/* '<S65>/KeFWDR_e_RDU_State_INIT' */
    TeFWDR_e_PTU_State OutportBufferForPTU_State_INIT;/* '<S65>/KeFWDR_e_PTU_State_INIT' */
}
B_FWDR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_FWDR_ac_T
{
    float32 BeFWDR_r_Tcase_Hi_Ratio;   /* '<Root>/DSM_2' */
    float32 BeFWDR_r_Tcase_Low_Ratio;  /* '<Root>/DSM_3' */
    float32 BeFWDR_r_Axle_Ratio;       /* '<Root>/DSM_4' */
    sint16 BeFWDR_e_Tcase_Stat;        /* '<Root>/DSM_1' */
    boolean UnitDelay_DSTATE;          /* '<S48>/Unit Delay' */
    TeFWDR_e_TrnsfrCaseRange UnitDelay_DSTATE_j;/* '<S41>/Unit Delay' */
}
DW_FWDR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const float32 Const1;              /* '<S66>/Const1' */
    const float32 Const3;              /* '<S66>/Const3' */
    const float32 Const8;              /* '<S66>/Const8' */
    const boolean Const5;              /* '<S66>/Const5' */
    const boolean Const7;              /* '<S66>/Const7' */
    const boolean Const9;              /* '<S66>/Const9' */
    const boolean FALSEConstant;       /* '<S65>/FALSE Constant' */
    const boolean FALSEConstant1;      /* '<S65>/FALSE Constant1' */
    const boolean FALSEConstant2;      /* '<S65>/FALSE Constant2' */
    const boolean FALSEConstant3;      /* '<S65>/FALSE Constant3' */
    const boolean FALSEConstant4;      /* '<S65>/FALSE Constant4' */
    const boolean FALSEConstant5;      /* '<S65>/FALSE Constant5' */
    const boolean FALSEConstant6;      /* '<S65>/FALSE Constant6' */
    const boolean FALSEConstant7;      /* '<S65>/FALSE Constant7' */
    const TeFWDR_e_TrnsfrCaseRange Const4;/* '<S66>/Const4' */
}
ConstB_FWDR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

extern VAR(B_FWDR_ac_T, FWDR_VAR_INIT) FWDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

extern VAR(DW_FWDR_ac_T, FWDR_VAR_INIT) FWDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_FWDR
#include "MemMap.h"

extern CONST(ConstB_FWDR_ac_T, FWDR_VAR_INIT) FWDR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_FWDR
#include "MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FWDR_ac'
 * '<S1>'   : 'FWDR_ac/FWDR_FastTEF'
 * '<S2>'   : 'FWDR_ac/FWDR_PwrOff'
 * '<S3>'   : 'FWDR_ac/FWDR_PwrOn'
 * '<S4>'   : 'FWDR_ac/FsftFWDR_b_FricTrqClutch'
 * '<S5>'   : 'FWDR_ac/FsftFWDR_e_PTU_State'
 * '<S6>'   : 'FWDR_ac/FsftFWDR_e_RDU_State'
 * '<S7>'   : 'FWDR_ac/FsftFWDR_e_SpeedSyncReq'
 * '<S8>'   : 'FWDR_ac/FsftFWDR_e_Sw1Req'
 * '<S9>'   : 'FWDR_ac/FsftFWDR_e_TCASE_SRV_RQ'
 * '<S10>'  : 'FWDR_ac/FsftFWDR_e_TCASE_STAT'
 * '<S11>'  : 'FWDR_ac/FsftFWDR_e_TCASE_TargetRangeState'
 * '<S12>'  : 'FWDR_ac/FsftFWDR_e_TcaseRange_Stat'
 * '<S13>'  : 'FWDR_ac/PokeFWDR_M_FricTrqClutch'
 * '<S14>'  : 'FWDR_ac/PokeFWDR_b_CCMFailSts'
 * '<S15>'  : 'FWDR_ac/PokeFWDR_e_PTU_State'
 * '<S16>'  : 'FWDR_ac/PokeFWDR_e_RDU_State'
 * '<S17>'  : 'FWDR_ac/PokeFWDR_e_SpeedSyncReq'
 * '<S18>'  : 'FWDR_ac/PokeFWDR_e_Sw1Req'
 * '<S19>'  : 'FWDR_ac/PokeFWDR_e_TCASE_SRV_RQ'
 * '<S20>'  : 'FWDR_ac/PokeFWDR_e_TCASE_STAT'
 * '<S21>'  : 'FWDR_ac/PokeFWDR_e_TCASE_TargetRangeState'
 * '<S22>'  : 'FWDR_ac/PokeFWDR_e_TcaseRange_Stat'
 * '<S23>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio'
 * '<S24>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Calc4LowRatio'
 * '<S25>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/CalcHighRatio'
 * '<S26>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/DocBlock'
 * '<S27>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Enum Set Block'
 * '<S28>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Enumerated Value'
 * '<S29>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/FourHiPTcheck'
 * '<S30>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/IfThenElseifElse'
 * '<S31>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/IfThenElseifElse1'
 * '<S32>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/KeFWDR_b_OnlyDTCMforTCR'
 * '<S33>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/KeFWDR_b_OnlyTCMforTCR'
 * '<S34>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/KeFWDR_b_OvrdAxleRatio'
 * '<S35>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/KeFWDR_b_OvrdTCaseStat'
 * '<S36>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/KeFWDR_b_TCase_StatFA_Default'
 * '<S37>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/KeFWDR_e_TcaseStatOvrdVal'
 * '<S38>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/KeFWDR_r_AxleRatioOvrdVal'
 * '<S39>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA'
 * '<S40>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Scaling'
 * '<S41>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc'
 * '<S42>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Calc4LowRatio/KeFWDR_b_OvrdLowRatio'
 * '<S43>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Calc4LowRatio/KeFWDR_r_LowRatioOvrdVal'
 * '<S44>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/CalcHighRatio/KeFWDR_b_OvrdHIRatio'
 * '<S45>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/CalcHighRatio/KeFWDR_r_HIRatioOvrdVal'
 * '<S46>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/FourHiPTcheck/Enumerated_Constant'
 * '<S47>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/FourHiPTcheck/Enumerated_Constant1'
 * '<S48>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA/Hysteresis'
 * '<S49>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA/KeFWDR_M_MtrBMaxTorqThreshold'
 * '<S50>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA/KeFWDR_M_MtrBMinTorqThreshold'
 * '<S51>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA/KeFWDR_b_SpdSyncAvailOvrdEnbl'
 * '<S52>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA/KeFWDR_b_SpdSyncAvailOvrdVal'
 * '<S53>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA/KeFWDR_n_SpdOffsetLSP'
 * '<S54>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/SSA/KeFWDR_n_SpdOffsetRSP'
 * '<S55>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Scaling/KeFWDR_r_AxleRatioScalingVal'
 * '<S56>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/Scaling/KeFWDR_r_TCLowRatioScalingVal'
 * '<S57>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc/ClosedInterval'
 * '<S58>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc/Enumerated Value1'
 * '<S59>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc/Enumerated Value2'
 * '<S60>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc/KeFWDR_n_MinWhlSpdForTcase'
 * '<S61>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc/KeFWDR_r_LowRatioHighThres'
 * '<S62>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc/KeFWDR_r_LowRatioLowThres'
 * '<S63>'  : 'FWDR_ac/FWDR_FastTEF/FWDR_CalcRatio/TcaseCalc/Protected Division'
 * '<S64>'  : 'FWDR_ac/FWDR_PwrOn/DSM_Init'
 * '<S65>'  : 'FWDR_ac/FWDR_PwrOn/InitValue'
 * '<S66>'  : 'FWDR_ac/FWDR_PwrOn/Sub_Out_Init'
 * '<S67>'  : 'FWDR_ac/FWDR_PwrOn/DSM_Init/KeFWDR_e_TcaseStatOvrdVal1'
 * '<S68>'  : 'FWDR_ac/FWDR_PwrOn/DSM_Init/KeFWDR_r_AxleRatioOvrdVal'
 * '<S69>'  : 'FWDR_ac/FWDR_PwrOn/DSM_Init/KeFWDR_r_HIRatioOvrdVal'
 * '<S70>'  : 'FWDR_ac/FWDR_PwrOn/DSM_Init/KeFWDR_r_LowRatioOvrdVal'
 * '<S71>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/Enum Set Block'
 * '<S72>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_M_FricTrqClutch_INIT'
 * '<S73>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_b_CCMFailStsInitVal'
 * '<S74>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_b_TcaseStatFAOvrdVal'
 * '<S75>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_b_TcaseStatValEnbl'
 * '<S76>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_PTU_State_INIT'
 * '<S77>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_RDU_State_INIT'
 * '<S78>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_SpeedSyncReq_INIT'
 * '<S79>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_Sw1ReqInitVal'
 * '<S80>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_TCASE_TargetRangeState_INIT'
 * '<S81>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_TcaseSrvRdOvrdVal'
 * '<S82>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_TcaseStatDTCMOvrdVal'
 * '<S83>'  : 'FWDR_ac/FWDR_PwrOn/InitValue/KeFWDR_e_TcaseStatOvrdVal'
 * '<S84>'  : 'FWDR_ac/FsftFWDR_b_FricTrqClutch/FsftFWDR_b_FricTrqClutchChrt'
 * '<S85>'  : 'FWDR_ac/FsftFWDR_e_PTU_State/FsftFWDR_e_PTU_StateChrt'
 * '<S86>'  : 'FWDR_ac/FsftFWDR_e_RDU_State/FsftFWDR_e_RDU_StateChrt'
 * '<S87>'  : 'FWDR_ac/FsftFWDR_e_SpeedSyncReq/FsftFWDR_e_SpeedSyncReqChrt'
 * '<S88>'  : 'FWDR_ac/FsftFWDR_e_Sw1Req/FsftFWDR_e_Sw1ReqChrt'
 * '<S89>'  : 'FWDR_ac/FsftFWDR_e_TCASE_SRV_RQ/FsftFWDR_e_TCASE_SRV_RQChrt'
 * '<S90>'  : 'FWDR_ac/FsftFWDR_e_TCASE_STAT/FsftFWDR_e_TCASE_STATChrt'
 * '<S91>'  : 'FWDR_ac/FsftFWDR_e_TCASE_TargetRangeState/FsftFWDR_e_TCASE_TargetRangeStateChrt'
 * '<S92>'  : 'FWDR_ac/FsftFWDR_e_TcaseRange_Stat/FsftFWDR_e_TcaseRange_StatChrt'
 * '<S93>'  : 'FWDR_ac/PokeFWDR_M_FricTrqClutch/PokeFWDR_M_FricTrqClutchChrt'
 * '<S94>'  : 'FWDR_ac/PokeFWDR_b_CCMFailSts/PokeFWDR_b_CCMFailStsChrt'
 * '<S95>'  : 'FWDR_ac/PokeFWDR_e_PTU_State/PokeFWDR_e_PTU_StateChrt'
 * '<S96>'  : 'FWDR_ac/PokeFWDR_e_RDU_State/PokeFWDR_e_RDU_StateChrt'
 * '<S97>'  : 'FWDR_ac/PokeFWDR_e_SpeedSyncReq/PokeFWDR_e_SpeedSyncReqChrt'
 * '<S98>'  : 'FWDR_ac/PokeFWDR_e_Sw1Req/PokeFWDR_e_Sw1ReqChrt'
 * '<S99>'  : 'FWDR_ac/PokeFWDR_e_TCASE_SRV_RQ/PokeFWDR_e_TCASE_SRV_RQChrt'
 * '<S100>' : 'FWDR_ac/PokeFWDR_e_TCASE_STAT/PokeFWDR_e_TCASE_STATChrt'
 * '<S101>' : 'FWDR_ac/PokeFWDR_e_TCASE_TargetRangeState/PokeFWDR_e_TCASE_TargetRangeStateChrt'
 * '<S102>' : 'FWDR_ac/PokeFWDR_e_TcaseRange_Stat/KaFWDR_e_TcaseStat'
 * '<S103>' : 'FWDR_ac/PokeFWDR_e_TcaseRange_Stat/PokeFWDR_e_TcaseRange_StatChrt'
 */
#endif                                 /* RTW_HEADER_FWDR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
