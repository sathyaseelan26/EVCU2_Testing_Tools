/*
 * File: TTIR_ac.h
 *
 * Code generated for Simulink model 'TTIR_ac'.
 *
 * Model version                  : 9.120
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:54:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TTIR_ac_h_
#define RTW_HEADER_TTIR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef TTIR_ac_COMMON_INCLUDES_
#define TTIR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TTIR.h"
#endif                                 /* TTIR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TTIR_ac_T
{
    float32 OutportBufferForVeTTIR_dM_TorqLimGradien;/* '<S159>/Const1' */
    float32 OutportBufferForVeTTIR_M_MaxLmtAxleTrq_O;/* '<S159>/Const3' */
    float32 OutportBufferForVeTTIR_M_MinLmtAxleTrq_O;/* '<S159>/Const12' */
    float32 OutportBufferForVeTTIR_M_ClthStrRsrvTrq_;/* '<S159>/Const4' */
    float32 OutportBufferForVeTTIR_M_SumMaxTorqDsrdR;/* '<S159>/Const5' */
    float32 OutportBufferForVeTTIR_M_K1TrqCapAct_Out;/* '<S159>/Const7' */
    float32 OutportBufferForVeTTIR_M_K1TrqCapLead_Ou;/* '<S159>/Const8' */
    float32 OutportBufferForVeTTIR_M_HASTrqK0Lead_Ou;/* '<S159>/Const9' */
    float32 OutportBufferForVeTTIR_M_SumMinTorqDsrdR;/* '<S159>/Const10' */
    float32 OutportBufferForTTIR_M_TransTrqReqFst_Ar;/* '<S157>/Constant Value' */
    float32 OutportBufferForTTIR_M_TransTrqReqSlw_Ar;/* '<S157>/Constant Value1' */
    float32 OutportBufferForTTIC_M_TransIntakeTorq;/* '<S157>/Constant Value7' */
    float32 OutportBufferForTCM_TrqGradLim_Lo_out_In;
                                 /* '<S157>/KeTTIR_dM_TCM_TrqGradLim_Lo_Init' */
    float32 OutportBufferForTCM_TrqGradLim_Up_out_In;
                                /* '<S157>/KeTTIR_dM_TCM_TrqGradLim_Lo_Init1' */
    float32 OutportBufferForTCM_TrqGradLim_Lo_Axle_o;
                                /* '<S157>/KeTTIR_dM_TCM_TrqGradLim_Lo_Init2' */
    float32 OutportBufferForTCM_TrqGradLim_Up_Axle_o;
                                /* '<S157>/KeTTIR_dM_TCM_TrqGradLim_Lo_Init3' */
    float32 OutportBufferForComm_dm_TrqLimGradient_I;
                                    /* '<S158>/KeTTIR_dm_TrqLimGradient_Init' */
    float32 OutportBufferForComm_M_ILECreepTrq_Init;/* '<S158>/KeTTIR_M_ILECreepTrq_Init' */
    float32 OutportBufferForComm_M_SumMaxTrqDsrd_Ini;
                                      /* '<S158>/KeTTIR_M_SumMaxTrqDsrd_Init' */
    float32 OutportBufferForComm_M_SumMinTrqDsrd_Ini;
                                      /* '<S158>/KeTTIR_M_SumMinTrqDsrd_Init' */
    float32 OutportBufferForComm_M_TCMSumTrqReqFast_;
                                      /* '<S158>/KeTTIR_M_TCMSumTrqFast_Init' */
    float32 OutportBufferForComm_M_TCMSumTrqReqSlow_;/* '<S158>/KeTTIR_M_TCMSumTrqSlw_Init' */
    float32 OutportBufferForComm_M_HASTrqK0_Init;/* '<S158>/KeTTIR_M_HASTrqK0_Init' */
    float32 OutportBufferForComm_M_K1TrqCapAct_Init;/* '<S158>/KeTTIR_M_K1TrqCapAct_Init' */
    float32 OutportBufferForComm_M_K1TrqCapLead_Init;/* '<S158>/KeTTIR_M_K1TrqCapLead_Init' */
    float32 OutportBufferForComm_M_HASTrqK0Lead_Init;/* '<S158>/KeTTIR_M_HASTrqK0Lead_Init' */
    float32 OutportBufferForComm_M_TransIntakeTorq_I;
                                    /* '<S158>/KeTTIR_M_TransIntakeTorq_Init' */
    float32 OutportBufferForComm_M_MaxLmtAxleTrq_Ini;
                                      /* '<S158>/KeTTIR_M_MaxLmtAxleTrq_Init' */
    float32 OutportBufferForComm_M_MinLmtAxleTrq_Ini;
                                      /* '<S158>/KeTTIR_M_MinLmtAxleTrq_Init' */
    float32 OutportBufferForCOMM_M_WhlCreepTrq_Init;/* '<S158>/Constant Value' */
    float32 OutportBufferForCOMM_M_ClthStrRsrvTrq_In;/* '<S158>/Constant Value1' */
    float32 OutportBufferForCOMM_dM_TCM_TrqGradLim_L;
                                 /* '<S158>/KeTTIR_dM_TCM_TrqGradLim_Lo_Init' */
    float32 OutportBufferForCOMM_dM_TCM_TrqGradLim_U;
                                 /* '<S158>/KeTTIR_dM_TCM_TrqGradLim_Up_Init' */
    float32 OutportBufferForCOMM_M_PumpTrqOnImpShaft;
                                  /* '<S158>/KeTTIR_M_PumpTrqOnImpShaft_Init' */
    boolean OutportBufferForVeTTIR_b_TransTrqReqFst_;/* '<S159>/Const2' */
    boolean OutportBufferForVeTTIR_b_SumMaxTrqDsrdFA;/* '<S159>/Const6' */
    boolean OutportBufferForVeTTIR_b_SumMinTrqDsrdFA;/* '<S159>/Const11' */
    boolean OutportBufferForTTIR_b_TransTrqReqFst_Ra;/* '<S157>/FALSE Constant1' */
    boolean OutportBufferForTTIR_b_TransTrqReqSlw_Ra;/* '<S157>/FALSE Constant2' */
    boolean OutportBufferForTTIR_b_TransTrqReqSlw_Pa;/* '<S157>/FALSE Constant' */
    boolean OutportBufferForComm_b_SumMaxTrqDsrdFA_I;
                                    /* '<S158>/KeTTIR_b_SumMaxTrqDsrdFA_Init' */
    boolean OutportBufferForComm_b_SumMinTrqDsrdFA_I;
                                   /* '<S158>/KeTTIR_b_SumMaxTrqDsrdFA_Init1' */
    boolean OutportBufferForComm_b_TCMSumTrqReqFastF;
                                    /* '<S158>/KeTTIR_b_TCMSumTrqFastFA_Init' */
    boolean OutportBufferForComm_b_TCMSumTrqReqSlowF;
                                     /* '<S158>/KeTTIR_b_TCMSumTrqSlwFA_Init' */
    boolean OutportBufferForComm_b_MaxLmtAxleTrqFA_I;
                                    /* '<S158>/KeTTIR_b_MaxLmtAxleTrqFA_Init' */
    boolean OutportBufferForComm_b_MinLmtAxleTrqFA_I;
                                    /* '<S158>/KeTTIR_b_MinLmtAxleTrqFA_Init' */
    boolean OutportBufferForCOMM_b_WhlCreepTrqFA_Ini;/* '<S158>/FALSE Constant' */
    boolean OutportBufferForCOMM_b_ClthStrRsrvTrqFA_;/* '<S158>/FALSE Constant2' */
    boolean OutportBufferForCOMM_b_TCM_EngFSO_Allw_I;/* '<S158>/Constant Value2' */
    boolean OutportBufferForCOMM_b_TCM_EngFSO_AllwFA;/* '<S158>/Constant Value3' */
    boolean OutportBufferForCOMM_b_TCM_EngFSO_Rq_Ini;/* '<S158>/Constant Value4' */
    boolean OutportBufferForCOMM_b_TCM_EngFSO_RqFA_I;/* '<S158>/Constant Value5' */
    boolean OutportBufferForCOMM_b_TCM_TrqGradLim_Lo;/* '<S158>/Constant Value7' */
    boolean OutportBufferForCOMM_b_TCM_TrqGradLim_Up;/* '<S158>/Constant Value9' */
    boolean OutportBufferForCOMM_b_TCM_TrqGradLimAct;/* '<S158>/Constant Value10' */
    boolean OutportBufferForCOMM_b_TCM_TrqGradLimA_h;/* '<S158>/Constant Value6' */
    boolean OutportBufferForCOMM_b_TCM_TrqGradLimA_g;/* '<S158>/Constant Value11' */
    boolean OutportBufferForCOMM_b_PumpTrqOnImpShaft;/* '<S158>/Constant Value13' */
    TeTINR_e_TCM_TrqCntrlModeReq OutportBufferForTTIR_e_TCMTrqCtrlMdFstDT;/* '<S157>/Enumerated_Constant' */
}
B_TTIR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TTIR_ac_T
{
    float32 UnitDelay1_DSTATE;         /* '<S142>/Unit Delay1' */
    float32 UnitDelay1_DSTATE_c;       /* '<S120>/Unit Delay1' */
    boolean UnitDelay2_DSTATE;         /* '<S142>/Unit Delay2' */
    boolean UnitDelay3_DSTATE;         /* '<S142>/Unit Delay3' */
    boolean UnitDelay_DSTATE;          /* '<S155>/Unit Delay' */
    boolean UnitDelay_DSTATE_g;        /* '<S154>/Unit Delay' */
    boolean UnitDelay_DSTATE_l;        /* '<S153>/Unit Delay' */
    boolean UnitDelay_DSTATE_f;        /* '<S152>/Unit Delay' */
    boolean UnitDelay_DSTATE_gv;       /* '<S128>/Unit Delay' */
    boolean UnitDelay2_DSTATE_d;       /* '<S120>/Unit Delay2' */
    boolean UnitDelay3_DSTATE_j;       /* '<S120>/Unit Delay3' */
    boolean UnitDelay_DSTATE_h;        /* '<S139>/Unit Delay' */
    boolean UnitDelay_DSTATE_h4;       /* '<S134>/Unit Delay' */
    boolean UnitDelay_DSTATE_j;        /* '<S133>/Unit Delay' */
    boolean UnitDelay_DSTATE_a;        /* '<S132>/Unit Delay' */
    boolean UnitDelay_DSTATE_jh;       /* '<S131>/Unit Delay' */
    TeTINR_e_TCM_TrqCntrlModeReq UnitDelay1_DSTATE_b;/* '<S128>/Unit Delay1' */
}
DW_TTIR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeTINR_e_TCM_TrqCntrlModeReq Constant;/* '<S160>/Constant' */
}
ConstB_TTIR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

extern VAR(B_TTIR_ac_T, TTIR_VAR_INIT) TTIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

extern VAR(DW_TTIR_ac_T, TTIR_VAR_INIT) TTIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_TTIR
#include "MemMap.h"

extern CONST(ConstB_TTIR_ac_T, TTIR_VAR_INIT) TTIR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_TTIR
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
 * '<Root>' : 'TTIR_ac'
 * '<S1>'   : 'TTIR_ac/FsftTTIR_M_ClthStrRsrvTrq'
 * '<S2>'   : 'TTIR_ac/FsftTTIR_M_HASTrqK0'
 * '<S3>'   : 'TTIR_ac/FsftTTIR_M_HASTrqK0Lead'
 * '<S4>'   : 'TTIR_ac/FsftTTIR_M_K1TrqCapAct'
 * '<S5>'   : 'TTIR_ac/FsftTTIR_M_K1TrqCapLead'
 * '<S6>'   : 'TTIR_ac/FsftTTIR_M_MaxLmtAxleTrq'
 * '<S7>'   : 'TTIR_ac/FsftTTIR_M_MinLmtAxleTrq'
 * '<S8>'   : 'TTIR_ac/FsftTTIR_M_PumpTrqOnImpShaft'
 * '<S9>'   : 'TTIR_ac/FsftTTIR_M_SumMaxTrqDsrd'
 * '<S10>'  : 'TTIR_ac/FsftTTIR_M_SumMinTrqDsrd'
 * '<S11>'  : 'TTIR_ac/FsftTTIR_M_TCMSumTrqReqFast'
 * '<S12>'  : 'TTIR_ac/FsftTTIR_M_TCMSumTrqReqSlow'
 * '<S13>'  : 'TTIR_ac/FsftTTIR_M_TransIntakeTorq'
 * '<S14>'  : 'TTIR_ac/FsftTTIR_M_WhlCreepTrq'
 * '<S15>'  : 'TTIR_ac/FsftTTIR_b_TCM_EngFSO_Allw'
 * '<S16>'  : 'TTIR_ac/FsftTTIR_b_TCM_EngFSO_Rq'
 * '<S17>'  : 'TTIR_ac/FsftTTIR_b_TCM_TrqGradLimActive'
 * '<S18>'  : 'TTIR_ac/FsftTTIR_dM_TCM_TrqGradLim_Lo'
 * '<S19>'  : 'TTIR_ac/FsftTTIR_dM_TCM_TrqGradLim_Up'
 * '<S20>'  : 'TTIR_ac/PokeTTIR_M_ClthStrRsrvTrq'
 * '<S21>'  : 'TTIR_ac/PokeTTIR_M_HASTrqK0'
 * '<S22>'  : 'TTIR_ac/PokeTTIR_M_HASTrqK0Lead'
 * '<S23>'  : 'TTIR_ac/PokeTTIR_M_ILECreepTorque'
 * '<S24>'  : 'TTIR_ac/PokeTTIR_M_K1TrqCapAct'
 * '<S25>'  : 'TTIR_ac/PokeTTIR_M_K1TrqCapLead'
 * '<S26>'  : 'TTIR_ac/PokeTTIR_M_MaxLmtAxleTrq'
 * '<S27>'  : 'TTIR_ac/PokeTTIR_M_MinLmtAxleTrq'
 * '<S28>'  : 'TTIR_ac/PokeTTIR_M_PumpTrqOnImpShaft'
 * '<S29>'  : 'TTIR_ac/PokeTTIR_M_SumMaxTrqDsrd'
 * '<S30>'  : 'TTIR_ac/PokeTTIR_M_SumMinTrqDsrd'
 * '<S31>'  : 'TTIR_ac/PokeTTIR_M_TCMSumTrqReqFast'
 * '<S32>'  : 'TTIR_ac/PokeTTIR_M_TCMSumTrqReqSlow'
 * '<S33>'  : 'TTIR_ac/PokeTTIR_M_TransIntakeTorq'
 * '<S34>'  : 'TTIR_ac/PokeTTIR_M_WhlCreepTrq'
 * '<S35>'  : 'TTIR_ac/PokeTTIR_b_TCM_EngFSO_Allw'
 * '<S36>'  : 'TTIR_ac/PokeTTIR_b_TCM_EngFSO_Rq'
 * '<S37>'  : 'TTIR_ac/PokeTTIR_b_TCM_TrqGradLimActive'
 * '<S38>'  : 'TTIR_ac/PokeTTIR_dM_TCM_TrqGradLim_Lo'
 * '<S39>'  : 'TTIR_ac/PokeTTIR_dM_TCM_TrqGradLim_Up'
 * '<S40>'  : 'TTIR_ac/PokeTTIR_dm_TorqLimGradient'
 * '<S41>'  : 'TTIR_ac/TTIR_MedTEB'
 * '<S42>'  : 'TTIR_ac/TTIR_PwrOn'
 * '<S43>'  : 'TTIR_ac/FsftTTIR_M_ClthStrRsrvTrq/FsftTTIR_M_ClthStrRsrvTrqChrt'
 * '<S44>'  : 'TTIR_ac/FsftTTIR_M_HASTrqK0/FsftTTIR_M_HASTrqK0Chrt'
 * '<S45>'  : 'TTIR_ac/FsftTTIR_M_HASTrqK0Lead/FsftTTIR_M_HASTrqK0LeadChrt'
 * '<S46>'  : 'TTIR_ac/FsftTTIR_M_K1TrqCapAct/FsftTTIR_M_K1TrqCapActChrt'
 * '<S47>'  : 'TTIR_ac/FsftTTIR_M_K1TrqCapLead/FsftTTIR_M_K1TrqCapLeadChrt'
 * '<S48>'  : 'TTIR_ac/FsftTTIR_M_MaxLmtAxleTrq/FsftTTIR_M_MaxLmtAxleTrqChrt'
 * '<S49>'  : 'TTIR_ac/FsftTTIR_M_MinLmtAxleTrq/FsftTTIR_M_MinLmtAxleTrqChrt'
 * '<S50>'  : 'TTIR_ac/FsftTTIR_M_PumpTrqOnImpShaft/FsftTTIR_M_PumpTrqOnImpShaftChrt'
 * '<S51>'  : 'TTIR_ac/FsftTTIR_M_SumMaxTrqDsrd/FsftTTIR_M_SumMaxTrqDsrdChrt'
 * '<S52>'  : 'TTIR_ac/FsftTTIR_M_SumMinTrqDsrd/FsftTTIR_M_SumMinTrqDsrdChrt'
 * '<S53>'  : 'TTIR_ac/FsftTTIR_M_TCMSumTrqReqFast/FsftTTIR_M_TCMSumTrqReqFastChrt'
 * '<S54>'  : 'TTIR_ac/FsftTTIR_M_TCMSumTrqReqSlow/FsftTTIR_M_TCMSumTrqReqSlowChrt'
 * '<S55>'  : 'TTIR_ac/FsftTTIR_M_TransIntakeTorq/FsftTTIR_M_TransIntakeTorqChrt'
 * '<S56>'  : 'TTIR_ac/FsftTTIR_M_WhlCreepTrq/FsftTTIR_M_WhlCreepTrqChrt'
 * '<S57>'  : 'TTIR_ac/FsftTTIR_b_TCM_EngFSO_Allw/FsftTTIR_b_TCM_EngFSO_AllwChrt'
 * '<S58>'  : 'TTIR_ac/FsftTTIR_b_TCM_EngFSO_Rq/FsftTTIR_b_TCM_EngFSO_RqChrt'
 * '<S59>'  : 'TTIR_ac/FsftTTIR_b_TCM_TrqGradLimActive/FsftTTIR_b_TCM_TrqGradLimActiveChrt'
 * '<S60>'  : 'TTIR_ac/FsftTTIR_dM_TCM_TrqGradLim_Lo/FsftTTIR_dM_TCM_TrqGradLim_LoChrt'
 * '<S61>'  : 'TTIR_ac/FsftTTIR_dM_TCM_TrqGradLim_Up/FsftTTIR_dM_TCM_TrqGradLim_UpChrt'
 * '<S62>'  : 'TTIR_ac/PokeTTIR_M_ClthStrRsrvTrq/PokeTTIR_M_ClthStrRsrvTrqChrt'
 * '<S63>'  : 'TTIR_ac/PokeTTIR_M_HASTrqK0/PokeTTIR_M_HASTrqK0Chrt'
 * '<S64>'  : 'TTIR_ac/PokeTTIR_M_HASTrqK0Lead/PokeTTIR_M_HASTrqK0LeadChrt'
 * '<S65>'  : 'TTIR_ac/PokeTTIR_M_ILECreepTorque/PokeTTIR_M_ILECreepTorqueChrt'
 * '<S66>'  : 'TTIR_ac/PokeTTIR_M_K1TrqCapAct/PokeTTIR_M_K1TrqCapActChrt'
 * '<S67>'  : 'TTIR_ac/PokeTTIR_M_K1TrqCapLead/PokeTTIR_M_K1TrqCapLeadChrt'
 * '<S68>'  : 'TTIR_ac/PokeTTIR_M_MaxLmtAxleTrq/PokeTTIR_M_MaxLmtAxleTrqChrt'
 * '<S69>'  : 'TTIR_ac/PokeTTIR_M_MinLmtAxleTrq/PokeTTIR_M_MinLmtAxleTrqChrt'
 * '<S70>'  : 'TTIR_ac/PokeTTIR_M_PumpTrqOnImpShaft/PokeTTIR_M_PumpTrqOnImpShaftChrt'
 * '<S71>'  : 'TTIR_ac/PokeTTIR_M_SumMaxTrqDsrd/PokeTTIR_M_SumMaxTrqDsrdChrt'
 * '<S72>'  : 'TTIR_ac/PokeTTIR_M_SumMinTrqDsrd/PokeTTIR_M_SumMinTrqDsrdChrt'
 * '<S73>'  : 'TTIR_ac/PokeTTIR_M_TCMSumTrqReqFast/PokeTTIR_M_TCMSumTrqReqFastChrt'
 * '<S74>'  : 'TTIR_ac/PokeTTIR_M_TCMSumTrqReqSlow/PokeTTIR_M_TCMSumTrqReqSlowChrt'
 * '<S75>'  : 'TTIR_ac/PokeTTIR_M_TransIntakeTorq/PokeTTIR_M_TransIntakeTorqChrt'
 * '<S76>'  : 'TTIR_ac/PokeTTIR_M_WhlCreepTrq/PokeTTIR_M_WhlCreepTrqChrt'
 * '<S77>'  : 'TTIR_ac/PokeTTIR_b_TCM_EngFSO_Allw/PokeTTIR_b_TCM_EngFSO_AllwChrt'
 * '<S78>'  : 'TTIR_ac/PokeTTIR_b_TCM_EngFSO_Rq/PokeTTIR_b_TCM_EngFSO_RqChrt'
 * '<S79>'  : 'TTIR_ac/PokeTTIR_b_TCM_TrqGradLimActive/PokeTTIR_b_TCM_TrqGradLimActiveChrt'
 * '<S80>'  : 'TTIR_ac/PokeTTIR_dM_TCM_TrqGradLim_Lo/PokeTTIR_dM_TCM_TrqGradLim_LoChrt'
 * '<S81>'  : 'TTIR_ac/PokeTTIR_dM_TCM_TrqGradLim_Up/PokeTTIR_dM_TCM_TrqGradLim_UpChrt'
 * '<S82>'  : 'TTIR_ac/PokeTTIR_dm_TorqLimGradient/PokeTTIR_dm_TorqLimGradientChrt'
 * '<S83>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_GradientLimitConversion'
 * '<S84>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough'
 * '<S85>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast'
 * '<S86>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow'
 * '<S87>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_GradientLimitConversion/KeTTIR_M_SumMaxTrqDsrdDflt'
 * '<S88>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/KeTTIR_M_HASTrqK0LeadManual'
 * '<S89>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/KeTTIR_M_K1TrqCapActManual'
 * '<S90>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/KeTTIR_M_K1TrqCapLeadManual'
 * '<S91>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/KeTTIR_b_OvrdHASTrqK0Lead'
 * '<S92>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/KeTTIR_b_OvrdK1TrqCapAct'
 * '<S93>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/KeTTIR_b_OvrdK1TrqCapLead'
 * '<S94>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block'
 * '<S95>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block1'
 * '<S96>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block2'
 * '<S97>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block3'
 * '<S98>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block4'
 * '<S99>'  : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block5'
 * '<S100>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block6'
 * '<S101>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/Set Block7'
 * '<S102>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_ClipClthStrtRsrv'
 * '<S103>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_Max_Lmt_Axle_Trq'
 * '<S104>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_Min_Lmt_Axle_Trq'
 * '<S105>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_SumMaxTrqDesired'
 * '<S106>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_SumMinTrqDesired'
 * '<S107>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_TransTorqueRatio_Arbitration'
 * '<S108>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_ClipClthStrtRsrv/KeTTIR_M_ClthStrRsrvEngNegOfst'
 * '<S109>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_ClipClthStrtRsrv/KeTTIR_M_ClthStrRsrvEngPosOfst'
 * '<S110>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_ClipClthStrtRsrv/Limiter'
 * '<S111>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_Max_Lmt_Axle_Trq/KeTTIR_M_MaxLmtAxleTrqDflt'
 * '<S112>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_Min_Lmt_Axle_Trq/KeTTIR_M_MinLmtAxleTrqDflt'
 * '<S113>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_SumMaxTrqDesired/KeTTIR_M_SumMaxTrqDsrdDflt'
 * '<S114>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_SumMaxTrqDesired/Protected Division'
 * '<S115>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_SumMinTrqDesired/KeTTIR_M_SumMinTrqDsrdDflt'
 * '<S116>' : 'TTIR_ac/TTIR_MedTEB/TTIC_PassThrough/TTIC_SumMinTrqDesired/Protected Division'
 * '<S117>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/DocBlock'
 * '<S118>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/Enum Set Block'
 * '<S119>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/Enumerated Value1'
 * '<S120>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/INC_DEC'
 * '<S121>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/KeTTIR_M_TransTrqReqRmpFailRate'
 * '<S122>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/KeTTIR_M_TransTrqReqRmpRcvryRate'
 * '<S123>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/Limiter'
 * '<S124>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/Set Block1'
 * '<S125>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/Set Block2'
 * '<S126>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/Set Block3'
 * '<S127>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/TTIC_ProcessTransTrqReq_Error'
 * '<S128>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/TTIC_SynchronizeDTRR'
 * '<S129>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/INC_DEC/Dec'
 * '<S130>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/INC_DEC/Inc'
 * '<S131>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/INC_DEC/Dec/Signal Latch On With Reset'
 * '<S132>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/INC_DEC/Dec/Signal Latch On With Reset1'
 * '<S133>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/INC_DEC/Inc/Signal Latch On With Reset'
 * '<S134>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/INC_DEC/Inc/Signal Latch On With Reset1'
 * '<S135>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/TTIC_ProcessTransTrqReq_Error/DocBlock'
 * '<S136>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/TTIC_SynchronizeDTRR/Enumerated Value2'
 * '<S137>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/TTIC_SynchronizeDTRR/Enumerated Value3'
 * '<S138>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/TTIC_SynchronizeDTRR/Enumerated Value4'
 * '<S139>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqFast/TTIC_SynchronizeDTRR/Signal Latch On With Reset1'
 * '<S140>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/DocBlock'
 * '<S141>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/Enumerated Value1'
 * '<S142>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/INC_DEC'
 * '<S143>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/KeTTIR_M_TransTrqReqRmpFailRateSlw'
 * '<S144>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/KeTTIR_M_TransTrqReqRmpRcvryRateSlw'
 * '<S145>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/Limiter'
 * '<S146>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/Set Block'
 * '<S147>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/Set Block1'
 * '<S148>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/Set Block3'
 * '<S149>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/TTIC_ProcessTransTrqReq_Error'
 * '<S150>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/INC_DEC/Dec'
 * '<S151>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/INC_DEC/Inc'
 * '<S152>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/INC_DEC/Dec/Signal Latch On With Reset'
 * '<S153>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/INC_DEC/Dec/Signal Latch On With Reset1'
 * '<S154>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/INC_DEC/Inc/Signal Latch On With Reset'
 * '<S155>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/INC_DEC/Inc/Signal Latch On With Reset1'
 * '<S156>' : 'TTIR_ac/TTIR_MedTEB/TTIC_ProcessTCMSumTrqReqSlow/TTIC_ProcessTransTrqReq_Error/DocBlock'
 * '<S157>' : 'TTIR_ac/TTIR_PwrOn/InitTTII_Output'
 * '<S158>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs'
 * '<S159>' : 'TTIR_ac/TTIR_PwrOn/Sub_Out_Init'
 * '<S160>' : 'TTIR_ac/TTIR_PwrOn/InitTTII_Output/Enumerated_Constant'
 * '<S161>' : 'TTIR_ac/TTIR_PwrOn/InitTTII_Output/KeTTIR_dM_TCM_TrqGradLim_Lo_Init'
 * '<S162>' : 'TTIR_ac/TTIR_PwrOn/InitTTII_Output/KeTTIR_dM_TCM_TrqGradLim_Lo_Init1'
 * '<S163>' : 'TTIR_ac/TTIR_PwrOn/InitTTII_Output/KeTTIR_dM_TCM_TrqGradLim_Lo_Init2'
 * '<S164>' : 'TTIR_ac/TTIR_PwrOn/InitTTII_Output/KeTTIR_dM_TCM_TrqGradLim_Lo_Init3'
 * '<S165>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_HASTrqK0Lead_Init'
 * '<S166>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_HASTrqK0_Init'
 * '<S167>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_ILECreepTrq_Init'
 * '<S168>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_K1TrqCapAct_Init'
 * '<S169>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_K1TrqCapLead_Init'
 * '<S170>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_MaxLmtAxleTrq_Init'
 * '<S171>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_MinLmtAxleTrq_Init'
 * '<S172>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_PumpTrqOnImpShaft_Init'
 * '<S173>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_SumMaxTrqDsrd_Init'
 * '<S174>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_SumMinTrqDsrd_Init'
 * '<S175>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_TCMSumTrqFast_Init'
 * '<S176>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_TCMSumTrqSlw_Init'
 * '<S177>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_M_TransIntakeTorq_Init'
 * '<S178>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_HASTrqK0FA_Init'
 * '<S179>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_HASTrqK0LeadFA_Init'
 * '<S180>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_ILECreepTrqFA_Init'
 * '<S181>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_K1TrqCapActFA_Init'
 * '<S182>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_K1TrqCapLeadFA_Init'
 * '<S183>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_MaxLmtAxleTrqFA_Init'
 * '<S184>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_MinLmtAxleTrqFA_Init'
 * '<S185>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_SumMaxTrqDsrdFA_Init'
 * '<S186>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_SumMaxTrqDsrdFA_Init1'
 * '<S187>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_TCMSumTrqFastFA_Init'
 * '<S188>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_TCMSumTrqSlwFA_Init'
 * '<S189>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_b_TrqLimGradientFA_Init'
 * '<S190>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_dM_TCM_TrqGradLim_Lo_Init'
 * '<S191>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_dM_TCM_TrqGradLim_Up_Init'
 * '<S192>' : 'TTIR_ac/TTIR_PwrOn/Initialize_TTII_Comm_Inputs/KeTTIR_dm_TrqLimGradient_Init'
 */
#endif                                 /* RTW_HEADER_TTIR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
