/*
 * File: ENGR_ac.h
 *
 * Code generated for Simulink model 'ENGR_ac'.
 *
 * Model version                  : 9.178
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:36:51 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ENGR_ac_h_
#define RTW_HEADER_ENGR_ac_h_
#include "Rte_Type.h"
#ifndef ENGR_ac_COMMON_INCLUDES_
#define ENGR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ENGR.h"
#endif                                 /* ENGR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_ENGR_ac_T
{

#if Rte_SysCon_Variant_ENGR_2

    float32 LeENGR_t_EngOffTime_out;   /* '<S92>/PokeENGR_t_EngOffTimeChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 LeENGR_p_EngManfldAbsPrs_out;
                                    /* '<S91>/PokeENGR_p_EngManfldAbsPrsChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 LeENGR_dm_EXH_MASS_FLOW_out;
                                     /* '<S71>/PokeENGR_dm_EXH_MASS_FLOWChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 LeENGR_V_FuelConsumption_out;
                                    /* '<S42>/PokeENGR_V_FuelConsumptionChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 LeENGR_T_ExhaustGasTemp_out;
                                     /* '<S40>/PokeENGR_T_ExhaustGasTempChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 LeENGR_T_Engine_Oil_Temp_out;
                                    /* '<S39>/PokeENGR_T_Engine_Oil_TempChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForVeENGR_t_EngOffTime;/* '<S153>/Constant Value3' */
    float32 OutportBufferForVeENGR_V_FuelConsumption;/* '<S153>/Initialize Long Accel4' */
    float32 OutportBufferForVeENGR_Pct_PurgeIntensit;/* '<S153>/Constant Value4' */
    float32 VariantMerge_For_Variant_Source_VariantS;
    float32 VariantMerge_For_Variant_Source_Varian_c;
    float32 VariantMerge_For_Variant_Source_Varian_h;
    float32 VariantMerge_For_Variant_Source_Varian_g;
    float32 OutportBufferForLeENGR_Pct_CalcLoad_OBD;/* '<S152>/Constant Value' */

#if Rte_SysCon_Variant_ENGR_2

    float32 OutportBufferForVeENGR_T_ExhaustGasTemp;
                                      /* '<S152>/KeENGR_T_ExhaustGasTempInit' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 OutportBufferForVeENGR_T_EngineOilTemp;/* '<S152>/KeENGR_T_EngineOilTempInit' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 OutportBufferForVeENGR_dm_ExhMassFlow;/* '<S152>/KeENGR_dm_ExhMassFlowInit' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForVeENGR_Pct_FuelLevel2;/* '<S152>/Constant Value3' */
    float32 OutportBufferForVeENGR_m_CylAirIntake;/* '<S152>/Constant Value4' */
    float32 OutportBufferForVeENGR_P_OilDil_EngMinPw;/* '<S152>/Constant Value7' */

#if Rte_SysCon_Variant_ENGR_2

    float32 Calib;                     /* '<S164>/Calib' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 Calib_p;                   /* '<S163>/Calib' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 Calib_b;                   /* '<S166>/Calib' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    sint16 DTCBlk14;                   /* '<S151>/DTCBlk14' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    sint16 OutportBufferForVeENGR_i_ECM_LHOM_Trans;/* '<S151>/Initialize Long Accel1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    sint16 OutportBufferForVeENGR_i_ECM_LHOM_Tran_o;/* '<S153>/Initialize Long Accel1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    sint16 Switch4;                    /* '<S102>/Switch4' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    sint16 Gain;                       /* '<S131>/Gain' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean LeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd;
                                 /* '<S83>/PokeENGR_e_EngStrtStpOvrrd_C1Chrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean LeENGR_b_StrtNotAllwd_out; /* '<S68>/PokeENGR_b_StrtNotAllwdChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean LeENGR_b_StpNotAllwd_out;  /* '<S67>/PokeENGR_b_StpNotAllwdChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean LeENGR_b_PnLimitActvFlg_out;
                                     /* '<S66>/PokeENGR_b_PnLimitActvFlgChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean LeENGR_b_EngCombustionCmnd_out;
                                  /* '<S51>/PokeENGR_b_EngCombustionCmndChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeENGR_b_ECM_EVAllowed_O;/* '<S154>/Const1' */

#if Rte_SysCon_Variant_ENGR_3

    boolean OutportBufferForVeENGR_b_EngCombustionCm;/* '<S151>/FALSE Constant9' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    boolean OutportBufferForVeENGR_b_LV12PwrFreeRq;/* '<S151>/FALSE Constant13' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    boolean OutportBufferForVeENGR_b_EngTrq_Enbl_Rq_;/* '<S151>/TRUE Constant1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean VariantMerge_For_Variant_Source_Varian_j;
    boolean VariantMerge_For_Variant_Source_Varian_i;
    boolean OutportBufferForVeENGR_b_CondOkForCylDea;/* '<S153>/FALSE Constant' */
    boolean OutportBufferForVeENGR_b_EngDFSO_Allow;/* '<S153>/FALSE Constant1' */
    boolean OutportBufferForVeENGR_b_EngSysLowFuel;/* '<S153>/FALSE Constant4' */
    boolean OutportBufferForVeENGR_b_EngTLCLearnReq;/* '<S153>/FALSE Constant5' */
    boolean OutportBufferForVeENGR_b_WarmUpCycCmplt;/* '<S153>/FALSE Constant6' */
    boolean OutportBufferForVeENGR_y_ZylAbs;/* '<S153>/FALSE Constant2' */
    boolean OutportBufferForVeENGR_y_EngOffRecom;/* '<S153>/FALSE Constant12' */

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_EngCombustion_o;/* '<S153>/FALSE Constant9' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_EngCombustion_j;/* '<S153>/FALSE Constant15' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeENGR_b_EngStrtStpOvrrd;/* '<S153>/FALSE Constant16' */
    boolean OutportBufferForVeENGR_b_EngOffTimeFA;/* '<S153>/FALSE Constant18' */
    boolean OutportBufferForVeENGR_b_CatalystWarmUpE;/* '<S153>/FALSE Constant11' */
    boolean OutportBufferForVeENGR_b_Feedback_HCP;/* '<S153>/TRUE Constant' */
    boolean OutportBufferForVeENGR_b_AllwEVECM;/* '<S153>/FALSE Constant19' */
    boolean OutportBufferForVeENGR_b_FuelConsumption;/* '<S153>/FALSE Constant26' */

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_LV12PwrFreeRq_d;/* '<S153>/FALSE Constant22' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_EngTrq_Enbl_R_c;/* '<S153>/TRUE Constant1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeENGR_b_KickDn;/* '<S153>/FALSE Constant23' */
    boolean OutportBufferForVeENGR_b_EngineStallDete;/* '<S153>/FALSE Constant25' */
    boolean OutportBufferForVeENGR_b_CatTempMaintEna;/* '<S153>/FALSE Constant27' */

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_StpNotAllwd;/* '<S153>/FALSE Constant3' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_StrtNotAllwd;/* '<S153>/FALSE Constant7' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_StpNotAllwdIDFA;/* '<S153>/FALSE Constant13' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_StrtNotAllwdIDF;/* '<S153>/FALSE Constant14' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_StpNotAllwdFA;/* '<S153>/FALSE Constant29' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_StrtNotAllwdFA;/* '<S153>/FALSE Constant30' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeENGR_b_EngStrtStpOvr_n;/* '<S153>/FALSE Constant31' */
    boolean OutportBufferForVeENGR_b_EngStrtStpOvr_a;/* '<S153>/FALSE Constant8' */

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_PnLimitActvFlg;
                                      /* '<S153>/KeENGR_b_PnLimitActvFlgInit' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_PnLimitActvFlgF;/* '<S153>/FALSE Constant17' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_CmprssnTest;/* '<S153>/FALSE Constant10' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean VariantMerge_For_Variant_Source_Varia_gh;
    boolean OutportBufferForLeENGI_b_ECTTempSgRx;/* '<S152>/FALSE Constant' */

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_ExhaustGasTempF;/* '<S152>/FALSE Constant14' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_EngineOilTempFA;/* '<S152>/FALSE Constant1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean OutportBufferForVeENGR_b_ExhMassFlowFA;/* '<S152>/FALSE Constant2' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeENGR_b_FuelLevel2_Sgnl;/* '<S152>/FALSE Constant20' */
    boolean OutportBufferForVeENGR_b_OilDil_EngMinPw;/* '<S152>/FALSE Constant3' */
    boolean OutportBufferForVeENGR_b_GasFlowActuator;/* '<S152>/FALSE Constant4' */

#if Rte_SysCon_Variant_ENGR_2

    boolean DataStoreRead;             /* '<S98>/Data Store Read' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean DataStoreRead1;            /* '<S98>/Data Store Read1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean AND_i;                     /* '<S107>/AND' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean Switch5;                   /* '<S102>/Switch5' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean Switch6;                   /* '<S102>/Switch6' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean VariantMerge_For_Variant_Source_Variant_;

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean Calib_o;                   /* '<S187>/Calib' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_ENGR_2

    boolean FALSEConstant15;           /* '<S152>/FALSE Constant15' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    TeSTRR_e_EngStrtStopType OutportBufferForVeENGR_e_EngReqStrtType;/* '<S151>/Enumerated Constant3' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    TeSTRR_e_EngStrtStopType OutportBufferForVeENGR_e_EngReqStrtTyp_c;/* '<S153>/Enumerated Value3' */

#if Rte_SysCon_Variant_ENGR_2

    TeSTRR_e_EngStrtStopType Switch1;  /* '<S103>/Switch1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    TeSTRR_e_AutoStopStartOvrrd OutportBufferForVeENGR_e_EngStrtStpOvrrd;/* '<S151>/Enumerated Value1' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeSTRR_e_AutoStopStartOvrrd VariantMerge_For_Variant_Source_Varia_hy;

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    TeENGR_e_StsMiL_ECM OutportBufferForVeENGR_e_StsMil_ECM;/* '<S151>/Enumerated_Constant2' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StsMiL_ECM OutportBufferForVeENGR_e_StsMil_ECM_i;/* '<S153>/Enumerated_Constant2' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StsMiL_ECM DataTypeConversion;/* '<S149>/DataTypeConversion' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StopNotAllowedID LeENGR_e_StpNotAllwdID_out;
                                      /* '<S86>/PokeENGR_e_StpNotAllwdIDChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StopNotAllowedID OutportBufferForVeENGR_e_StpNotAllwdID;/* '<S153>/Enumerated Value4' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StartNotAllowedID LeENGR_e_StrtNotAllwdID_out;
                                     /* '<S87>/PokeENGR_e_StrtNotAllwdIDChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StartNotAllowedID OutportBufferForVeENGR_e_StrtNotAllwdID;/* '<S153>/Enumerated Value7' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    TeENGR_e_EngineSts OutportBufferForVeENGR_e_EngineSts_Out_I;/* '<S154>/Const2' */

#if Rte_SysCon_Variant_ENGR_3

    TeENGR_e_EngineSts VeENGR_e_EngineSts;/* '<S96>/Switch7' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    TeENGR_e_EngineMaintenanceSts OutportBufferForVeENGR_e_EngineMaintenan;/* '<S152>/Enumerated_Constant1' */
    TeENGR_e_EngDFSO_St OutportBufferForVeENGR_e_EngDFSO_Req;/* '<S153>/Enumerated Value5' */
    TeENGR_e_EngDFSO_St OutportBufferForVeENGR_e_EngDFSO_St;/* '<S153>/Enumerated Value1' */

#if Rte_SysCon_Variant_ENGR_3

    TeENGR_e_ETRQ_Mode OutportBufferForVeENGR_e_ETRQ_Mode;/* '<S151>/Enumerated Value4' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ETRQ_Mode OutportBufferForVeENGR_e_ETRQ_Mode_j;/* '<S153>/Enumerated_Constant3' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ETRQ_Mode DataTypeConversion_j;/* '<S148>/DataTypeConversion' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ESS_Engine_State LeENGR_e_EngStrtStpOvrrd_C1_out;
                                 /* '<S83>/PokeENGR_e_EngStrtStpOvrrd_C1Chrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ESS_Engine_State OutportBufferForVeENGR_e_EngStrtStpOvr_k;/* '<S153>/Enumerated Value6' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    TeENGR_e_ESS_Engine_State OutportBufferForVeENGR_e_EngStrtStpOvr_a;/* '<S153>/Enumerated Value8' */
    TeENGR_e_ESSEngSt OutportBufferForVeENGR_e_ESSEngSt;/* '<S153>/Enumerated Value9' */

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ECMReqRemStop LeENGR_e_ECMReqRemStop_out;
                                      /* '<S76>/PokeENGR_e_ECMReqRemStopChrt' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    TeENGR_e_ECMReqRemStop OutportBufferForVeENGR_e_ECMReqRemStop;/* '<S153>/Enumerated_Constant1' */
    TeENGR_e_ECMComFail_ePTCAN VariantMerge_For_Variant_Source_Vari_ghj;

#if !Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ECMComFail_ePTCAN Constant;/* '<S186>/Constant' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ECMComFail_ePTCAN Calib_k;/* '<S189>/Calib' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    TeENGR_e_ECMComFail_C1CAN VariantMerge_For_Variant_Source_Varian_a;

#if !Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ECMComFail_C1CAN Constant_f;/* '<S185>/Constant' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ECMComFail_C1CAN Calib_pm;/* '<S188>/Calib' */

#define B_ENGR_AC_T_VARIANT_EXISTS
#endif

    TeENGR_e_CylinderDeacModes OutportBufferForVeENGR_e_CylinderDeacMod;/* '<S153>/Enumerated Value' */
    TeENGR_e_Cam_Phsr_Stat OutportBufferForVeENGR_e_Cam_Phsr_Stat;/* '<S153>/Enumerated Value2' */
}
B_ENGR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ENGR_ac_T
{

#if Rte_SysCon_Variant_ENGR_2

    boolean UnitDelay_DSTATE_a;        /* '<S132>/Unit Delay' */

#define DW_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean UnitDelay_DSTATE_f;        /* '<S109>/Unit Delay' */

#define DW_ENGR_AC_T_VARIANT_EXISTS
#endif

    boolean NeENGR_b_ECT_SnsrFA;       /* '<Root>/DSM_2' */
    boolean NeENGR_b_IAT_SnsrFA;       /* '<Root>/DSM_3' */
}
DW_ENGR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_ENGR_3

    const TeSTRR_e_EngStrtStopType Constant;/* '<S156>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

    const TeSTRR_e_EngStrtStopType Constant_o;/* '<S175>/Constant' */

#if Rte_SysCon_Variant_ENGR_3

    const TeSTRR_e_AutoStopStartOvrrd Constant_d;/* '<S157>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_3

    const TeENGR_e_StsMiL_ECM Constant_k;/* '<S159>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    const TeENGR_e_StsMiL_ECM Constant_c;/* '<S183>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    const TeENGR_e_StopNotAllowedID Constant_a;/* '<S176>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    const TeENGR_e_StartNotAllowedID Constant_g;/* '<S179>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

    const TeENGR_e_EngineSts Const2;   /* '<S154>/Const2' */
    const TeENGR_e_EngineMaintenanceSts Constant_e;/* '<S160>/Constant' */
    const TeENGR_e_EngDFSO_St Constant_h;/* '<S177>/Constant' */
    const TeENGR_e_EngDFSO_St Constant_l;/* '<S173>/Constant' */

#if Rte_SysCon_Variant_ENGR_3

    const TeENGR_e_ETRQ_Mode Constant_p;/* '<S158>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    const TeENGR_e_ETRQ_Mode Constant_f;/* '<S184>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ENGR_2

    const TeENGR_e_ESS_Engine_State Constant_lr;/* '<S178>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

    const TeENGR_e_ESS_Engine_State Constant_dt;/* '<S180>/Constant' */
    const TeENGR_e_ESSEngSt Constant_cq;/* '<S181>/Constant' */
    const TeENGR_e_ECMReqRemStop Constant_ex;/* '<S182>/Constant' */
    const TeENGR_e_CylinderDeacModes Constant_n;/* '<S172>/Constant' */
    const TeENGR_e_Cam_Phsr_Stat Constant_ab;/* '<S174>/Constant' */
}
ConstB_ENGR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

extern VAR(B_ENGR_ac_T, ENGR_VAR_INIT) ENGR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

extern VAR(DW_ENGR_ac_T, ENGR_VAR_INIT) ENGR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_ENGR
#include "MemMap.h"

extern CONST(ConstB_ENGR_ac_T, ENGR_VAR_INIT) ENGR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_ENGR
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
 * '<Root>' : 'ENGR_ac'
 * '<S1>'   : 'ENGR_ac/ENGR_FastTEF'
 * '<S2>'   : 'ENGR_ac/ENGR_MedTEB'
 * '<S3>'   : 'ENGR_ac/ENGR_PwrOff'
 * '<S4>'   : 'ENGR_ac/ENGR_PwrOn'
 * '<S5>'   : 'ENGR_ac/FsftENGR_P_OilDil_EngMinPwrReq'
 * '<S6>'   : 'ENGR_ac/FsftENGR_T_CatalystTemp'
 * '<S7>'   : 'ENGR_ac/FsftENGR_T_EngCoolantTemp'
 * '<S8>'   : 'ENGR_ac/FsftENGR_T_ExhaustGasTemp'
 * '<S9>'   : 'ENGR_ac/FsftENGR_T_InductionAirTemp'
 * '<S10>'  : 'ENGR_ac/FsftENGR_b_AllwEVECM'
 * '<S11>'  : 'ENGR_ac/FsftENGR_b_CondOkForCylDeac'
 * '<S12>'  : 'ENGR_ac/FsftENGR_b_ECMReqRemStop'
 * '<S13>'  : 'ENGR_ac/FsftENGR_b_ECM_Feedback_HCP'
 * '<S14>'  : 'ENGR_ac/FsftENGR_b_EXH_MASS_FLOW'
 * '<S15>'  : 'ENGR_ac/FsftENGR_b_EngCombustionCmnd'
 * '<S16>'  : 'ENGR_ac/FsftENGR_b_EngModeRun'
 * '<S17>'  : 'ENGR_ac/FsftENGR_b_EngStrtStpOvrrd_C1'
 * '<S18>'  : 'ENGR_ac/FsftENGR_b_Engine_Oil_Temp'
 * '<S19>'  : 'ENGR_ac/FsftENGR_b_FuelConsumptionFA'
 * '<S20>'  : 'ENGR_ac/FsftENGR_b_FuelLevel2'
 * '<S21>'  : 'ENGR_ac/FsftENGR_b_KickDnReq'
 * '<S22>'  : 'ENGR_ac/FsftENGR_b_OilDil_EngMinPwrEnbl'
 * '<S23>'  : 'ENGR_ac/FsftENGR_b_PnLimitActvFlg'
 * '<S24>'  : 'ENGR_ac/FsftENGR_b_StpNotAllwd'
 * '<S25>'  : 'ENGR_ac/FsftENGR_b_StpNotAllwdID'
 * '<S26>'  : 'ENGR_ac/FsftENGR_b_StrtNotAllwd'
 * '<S27>'  : 'ENGR_ac/FsftENGR_b_StrtNotAllwdID'
 * '<S28>'  : 'ENGR_ac/FsftENGR_e_ComFailDflt_C1CAN'
 * '<S29>'  : 'ENGR_ac/FsftENGR_e_ComFailDflt_ePTCAN'
 * '<S30>'  : 'ENGR_ac/FsftENGR_e_CylinderDeacMode'
 * '<S31>'  : 'ENGR_ac/FsftENGR_e_EngStrtStpOvrrd'
 * '<S32>'  : 'ENGR_ac/FsftENGR_p_EngManfldAbsPrs'
 * '<S33>'  : 'ENGR_ac/PokeENGR_P_OilDil_EngMinPwrReq'
 * '<S34>'  : 'ENGR_ac/PokeENGR_Pct_CalcLoad_OBD'
 * '<S35>'  : 'ENGR_ac/PokeENGR_Pct_FuelLevel2'
 * '<S36>'  : 'ENGR_ac/PokeENGR_Pct_PurgeIntensity'
 * '<S37>'  : 'ENGR_ac/PokeENGR_T_CatalystTemp'
 * '<S38>'  : 'ENGR_ac/PokeENGR_T_EngCoolantTemp'
 * '<S39>'  : 'ENGR_ac/PokeENGR_T_Engine_Oil_Temp'
 * '<S40>'  : 'ENGR_ac/PokeENGR_T_ExhaustGasTemp'
 * '<S41>'  : 'ENGR_ac/PokeENGR_T_InductionAirTemp'
 * '<S42>'  : 'ENGR_ac/PokeENGR_V_FuelConsumption'
 * '<S43>'  : 'ENGR_ac/PokeENGR_b_AllwEVECM'
 * '<S44>'  : 'ENGR_ac/PokeENGR_b_CatTempMaintEnabled'
 * '<S45>'  : 'ENGR_ac/PokeENGR_b_CatalystWarmUpEnabled'
 * '<S46>'  : 'ENGR_ac/PokeENGR_b_CmprssnTest'
 * '<S47>'  : 'ENGR_ac/PokeENGR_b_CondOkForCylDeac'
 * '<S48>'  : 'ENGR_ac/PokeENGR_b_ECM_Feedback_HCP'
 * '<S49>'  : 'ENGR_ac/PokeENGR_b_ESS_ReqEngOff'
 * '<S50>'  : 'ENGR_ac/PokeENGR_b_ESS_ReqEngStart'
 * '<S51>'  : 'ENGR_ac/PokeENGR_b_EngCombustionCmnd'
 * '<S52>'  : 'ENGR_ac/PokeENGR_b_EngDFSO_Allow'
 * '<S53>'  : 'ENGR_ac/PokeENGR_b_EngMfLrnRPMCtrlReq'
 * '<S54>'  : 'ENGR_ac/PokeENGR_b_EngModeRun'
 * '<S55>'  : 'ENGR_ac/PokeENGR_b_EngOffRecom'
 * '<S56>'  : 'ENGR_ac/PokeENGR_b_EngSysDsbld'
 * '<S57>'  : 'ENGR_ac/PokeENGR_b_EngSysLowFuel'
 * '<S58>'  : 'ENGR_ac/PokeENGR_b_EngTLCLearnReq'
 * '<S59>'  : 'ENGR_ac/PokeENGR_b_EngTrq_Enbl_Rq_TCM'
 * '<S60>'  : 'ENGR_ac/PokeENGR_b_EngineStallDetected'
 * '<S61>'  : 'ENGR_ac/PokeENGR_b_GasFlowActuator'
 * '<S62>'  : 'ENGR_ac/PokeENGR_b_KickDnReq'
 * '<S63>'  : 'ENGR_ac/PokeENGR_b_LV12PwrFreeRq'
 * '<S64>'  : 'ENGR_ac/PokeENGR_b_OilDil_EngMinPwrEnbl'
 * '<S65>'  : 'ENGR_ac/PokeENGR_b_PCMSVSReq'
 * '<S66>'  : 'ENGR_ac/PokeENGR_b_PnLimitActvFlg'
 * '<S67>'  : 'ENGR_ac/PokeENGR_b_StpNotAllwd'
 * '<S68>'  : 'ENGR_ac/PokeENGR_b_StrtNotAllwd'
 * '<S69>'  : 'ENGR_ac/PokeENGR_b_WarmUpCycCmplt'
 * '<S70>'  : 'ENGR_ac/PokeENGR_b_ZylAbs'
 * '<S71>'  : 'ENGR_ac/PokeENGR_dm_EXH_MASS_FLOW'
 * '<S72>'  : 'ENGR_ac/PokeENGR_e_Cam_Phsr_Stat'
 * '<S73>'  : 'ENGR_ac/PokeENGR_e_ComFail_C1CAN'
 * '<S74>'  : 'ENGR_ac/PokeENGR_e_ComFail_ePTCAN'
 * '<S75>'  : 'ENGR_ac/PokeENGR_e_CylinderDeacMode'
 * '<S76>'  : 'ENGR_ac/PokeENGR_e_ECMReqRemStop'
 * '<S77>'  : 'ENGR_ac/PokeENGR_e_ESSEngSt'
 * '<S78>'  : 'ENGR_ac/PokeENGR_e_ETRQ_Mode'
 * '<S79>'  : 'ENGR_ac/PokeENGR_e_EngDFSO_Req'
 * '<S80>'  : 'ENGR_ac/PokeENGR_e_EngDFSO_St'
 * '<S81>'  : 'ENGR_ac/PokeENGR_e_EngReqStrtType'
 * '<S82>'  : 'ENGR_ac/PokeENGR_e_EngStrtStpOvrrd'
 * '<S83>'  : 'ENGR_ac/PokeENGR_e_EngStrtStpOvrrd_C1'
 * '<S84>'  : 'ENGR_ac/PokeENGR_e_EngineMaintenanceSts'
 * '<S85>'  : 'ENGR_ac/PokeENGR_e_HybActEngTorqRespType'
 * '<S86>'  : 'ENGR_ac/PokeENGR_e_StpNotAllwdID'
 * '<S87>'  : 'ENGR_ac/PokeENGR_e_StrtNotAllwdID'
 * '<S88>'  : 'ENGR_ac/PokeENGR_e_StsMil_ECM'
 * '<S89>'  : 'ENGR_ac/PokeENGR_i_ECM_LHOM_Trans'
 * '<S90>'  : 'ENGR_ac/PokeENGR_m_CylAirIntake'
 * '<S91>'  : 'ENGR_ac/PokeENGR_p_EngManfldAbsPrs'
 * '<S92>'  : 'ENGR_ac/PokeENGR_t_EngOffTime'
 * '<S93>'  : 'ENGR_ac/TmotENGR_b_EngCoolantTemp'
 * '<S94>'  : 'ENGR_ac/TmotENGR_b_EngStrtStpOvrrd_C1'
 * '<S95>'  : 'ENGR_ac/TmotENGR_b_FuelLevel2'
 * '<S96>'  : 'ENGR_ac/ENGR_MedTEB/ENGC_NF_Process_10ms'
 * '<S97>'  : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms'
 * '<S98>'  : 'ENGR_ac/ENGR_MedTEB/ENGO_ProcessOutput'
 * '<S99>'  : 'ENGR_ac/ENGR_MedTEB/ENGC_NF_Process_10ms/DocBlock'
 * '<S100>' : 'ENGR_ac/ENGR_MedTEB/ENGC_NF_Process_10ms/KeENGR_e_EngineSts_NotPSA'
 * '<S101>' : 'ENGR_ac/ENGR_MedTEB/ENGC_NF_Process_10ms/KeENGR_e_EngineSts_PSA'
 * '<S102>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode'
 * '<S103>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Compression_Test'
 * '<S104>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/DocBlock'
 * '<S105>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd'
 * '<S106>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD'
 * '<S107>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/Boolean Set Block'
 * '<S108>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/Digital Lowpass Reset Enabled'
 * '<S109>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/EdgeRising'
 * '<S110>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/Enumerated Value5'
 * '<S111>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_K_EngStrtTrigFiltCoef'
 * '<S112>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_M_MinEngStrtTorqSnsd'
 * '<S113>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_b_ECM_LHOM_Trans_OvrdEnb'
 * '<S114>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_b_EngTrqEnbl_Ovrd'
 * '<S115>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_b_EngTrqEnbl_OvrdEnb'
 * '<S116>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_b_Lv12PwrFreeOvrd'
 * '<S117>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_b_Lv12PwrFreeOvrdEnb'
 * '<S118>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_e_Loc_ETRQ_ModeSignal'
 * '<S119>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/CombustionCmnd_ETRQ_Mode/KeENGR_i_ECM_LHOM_Trans_Ovrd'
 * '<S120>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Compression_Test/Enumerated Constant3'
 * '<S121>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/Enumerated Constant2'
 * '<S122>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/Enumerated Constant3'
 * '<S123>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/Enumerated Constant4'
 * '<S124>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/Enumerated Constant5'
 * '<S125>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/Enumerated Constant6'
 * '<S126>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/KaENGR_e_EngStrtStpOvrrd_Map'
 * '<S127>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/KaENGR_i_EngStrtStpOvrrd_HEVESSMode'
 * '<S128>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/KaENGR_i_EngStrtStpOvrrd_HybFB_ECM'
 * '<S129>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/KaENGR_i_EngStrtStpOvrrd_RemStop'
 * '<S130>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/KeENGR_b_EnblEngStrtStpOvrrdLatch'
 * '<S131>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/Set Block'
 * '<S132>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_EngStrtStpOvrrd/Signal Latch On With Reset'
 * '<S133>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/Arbitration'
 * '<S134>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD'
 * '<S135>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/Arbitration/HeENGR_e_LoC_Cntrdctn_ePMBD'
 * '<S136>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/Enumerated_Constant1'
 * '<S137>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u1'
 * '<S138>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u2'
 * '<S139>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u3'
 * '<S140>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u1/Enumerated_Constant'
 * '<S141>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u2/Boolean Set Block'
 * '<S142>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u2/Enumerated_Constant'
 * '<S143>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u2/Enumerated_Constant2'
 * '<S144>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u2/HaENGR_e_OvrrdStpNotAllwd'
 * '<S145>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u2/KeENGR_b_EnblDrvMdInteractn'
 * '<S146>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u3/Enumerated_Constant'
 * '<S147>' : 'ENGR_ac/ENGR_MedTEB/ENGC_Process_10 ms/Dtrmn_OvrrdePMBD/ESS_StrtStpOvrrd_ePMBD/u3/HaENGR_e_OvrrdStrtNotAllwd'
 * '<S148>' : 'ENGR_ac/ENGR_MedTEB/ENGO_ProcessOutput/Enum Set Block'
 * '<S149>' : 'ENGR_ac/ENGR_MedTEB/ENGO_ProcessOutput/Enum Set Block1'
 * '<S150>' : 'ENGR_ac/ENGR_PwrOn/DSM_Init'
 * '<S151>' : 'ENGR_ac/ENGR_PwrOn/ENGO_ProcessOutput_init'
 * '<S152>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output'
 * '<S153>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output'
 * '<S154>' : 'ENGR_ac/ENGR_PwrOn/Sub_Out_Init'
 * '<S155>' : 'ENGR_ac/ENGR_PwrOn/ENGO_ProcessOutput_init/Enumerated Constant14'
 * '<S156>' : 'ENGR_ac/ENGR_PwrOn/ENGO_ProcessOutput_init/Enumerated Constant3'
 * '<S157>' : 'ENGR_ac/ENGR_PwrOn/ENGO_ProcessOutput_init/Enumerated Value1'
 * '<S158>' : 'ENGR_ac/ENGR_PwrOn/ENGO_ProcessOutput_init/Enumerated Value4'
 * '<S159>' : 'ENGR_ac/ENGR_PwrOn/ENGO_ProcessOutput_init/Enumerated_Constant2'
 * '<S160>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/Enumerated_Constant1'
 * '<S161>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/KeENGR_T_CatalystTempDflt'
 * '<S162>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/KeENGR_T_EngCoolantTempDflt'
 * '<S163>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/KeENGR_T_EngineOilTempInit'
 * '<S164>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/KeENGR_T_ExhaustGasTempInit'
 * '<S165>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/KeENGR_T_InductionAirTempDflt'
 * '<S166>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/KeENGR_dm_ExhMassFlowInit'
 * '<S167>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/KeENGR_p_EngManfldAbsPrsDflt'
 * '<S168>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/Set Block1'
 * '<S169>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/Set Block2'
 * '<S170>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/Set Block3'
 * '<S171>' : 'ENGR_ac/ENGR_PwrOn/Init ENGI Output/Set Block4'
 * '<S172>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value'
 * '<S173>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value1'
 * '<S174>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value2'
 * '<S175>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value3'
 * '<S176>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value4'
 * '<S177>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value5'
 * '<S178>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value6'
 * '<S179>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value7'
 * '<S180>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value8'
 * '<S181>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated Value9'
 * '<S182>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated_Constant1'
 * '<S183>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated_Constant2'
 * '<S184>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated_Constant3'
 * '<S185>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated_Constant4'
 * '<S186>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/Enumerated_Constant5'
 * '<S187>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/KeENGR_b_PnLimitActvFlgInit'
 * '<S188>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/KeENGR_e_ComFailInit_C1CAN'
 * '<S189>' : 'ENGR_ac/ENGR_PwrOn/Process_Engine_Status__Init ENGI Output/KeENGR_e_ComFailInit_ePTCAN'
 * '<S190>' : 'ENGR_ac/FsftENGR_P_OilDil_EngMinPwrReq/FsftENGR_P_OilDil_EngMinPwrReqChrt'
 * '<S191>' : 'ENGR_ac/FsftENGR_T_CatalystTemp/FsftENGR_T_CatalystTempChrt'
 * '<S192>' : 'ENGR_ac/FsftENGR_T_EngCoolantTemp/FsftENGR_T_EngCoolantTempChrt'
 * '<S193>' : 'ENGR_ac/FsftENGR_T_ExhaustGasTemp/FsftENGR_T_ExhaustGasTempChrt'
 * '<S194>' : 'ENGR_ac/FsftENGR_T_InductionAirTemp/FsftENGR_T_InductionAirTempChrt'
 * '<S195>' : 'ENGR_ac/FsftENGR_b_AllwEVECM/FsftENGR_b_AllwEVECMChrt'
 * '<S196>' : 'ENGR_ac/FsftENGR_b_CondOkForCylDeac/FsftENGR_b_CondOkForCylDeacChrt'
 * '<S197>' : 'ENGR_ac/FsftENGR_b_ECMReqRemStop/FsftENGR_b_ECMReqRemStopChrt'
 * '<S198>' : 'ENGR_ac/FsftENGR_b_ECM_Feedback_HCP/FsftENGR_b_ECM_Feedback_HCPChrt'
 * '<S199>' : 'ENGR_ac/FsftENGR_b_EXH_MASS_FLOW/FsftENGR_b_EXH_MASS_FLOWChrt'
 * '<S200>' : 'ENGR_ac/FsftENGR_b_EngCombustionCmnd/FsftENGR_b_EngCombustionCmndChrt'
 * '<S201>' : 'ENGR_ac/FsftENGR_b_EngModeRun/FsftENGR_b_EngModeRunChrt'
 * '<S202>' : 'ENGR_ac/FsftENGR_b_EngStrtStpOvrrd_C1/FsftENGR_b_EngStrtStpOvrrd_C1Chrt'
 * '<S203>' : 'ENGR_ac/FsftENGR_b_Engine_Oil_Temp/FsftENGR_b_Engine_Oil_TempChrt'
 * '<S204>' : 'ENGR_ac/FsftENGR_b_FuelConsumptionFA/FsftENGR_b_FuelConsumptionFAChrt'
 * '<S205>' : 'ENGR_ac/FsftENGR_b_FuelLevel2/FsftENGR_b_FuelLevel2Chrt'
 * '<S206>' : 'ENGR_ac/FsftENGR_b_KickDnReq/FsftENGR_b_KickDnReqChrt'
 * '<S207>' : 'ENGR_ac/FsftENGR_b_OilDil_EngMinPwrEnbl/FsftENGR_b_OilDil_EngMinPwrEnblChrt'
 * '<S208>' : 'ENGR_ac/FsftENGR_b_PnLimitActvFlg/FsftENGR_b_PnLimitActvFlgChrt'
 * '<S209>' : 'ENGR_ac/FsftENGR_b_StpNotAllwd/FsftENGR_b_StpNotAllwdChrt'
 * '<S210>' : 'ENGR_ac/FsftENGR_b_StpNotAllwdID/FsftENGR_b_StpNotAllwdIDChrt'
 * '<S211>' : 'ENGR_ac/FsftENGR_b_StrtNotAllwd/FsftENGR_b_StrtNotAllwdChrt'
 * '<S212>' : 'ENGR_ac/FsftENGR_b_StrtNotAllwdID/FsftENGR_b_StrtNotAllwdIDChrt'
 * '<S213>' : 'ENGR_ac/FsftENGR_e_ComFailDflt_C1CAN/FsftENGR_e_ComFailDflt_C1CANChrt'
 * '<S214>' : 'ENGR_ac/FsftENGR_e_ComFailDflt_ePTCAN/FsftENGR_e_ComFailDflt_ePTCANChrt'
 * '<S215>' : 'ENGR_ac/FsftENGR_e_CylinderDeacMode/FsftENGR_e_CylinderDeacModeChrt'
 * '<S216>' : 'ENGR_ac/FsftENGR_e_EngStrtStpOvrrd/FsftENGR_e_EngStrtStpOvrrdChrt'
 * '<S217>' : 'ENGR_ac/FsftENGR_p_EngManfldAbsPrs/FsftENGR_p_EngManfldAbsPrsChrt'
 * '<S218>' : 'ENGR_ac/PokeENGR_P_OilDil_EngMinPwrReq/PokeENGR_P_OilDil_EngMinPwrReqChrt'
 * '<S219>' : 'ENGR_ac/PokeENGR_Pct_CalcLoad_OBD/PokeENGR_Pct_CalcLoad_OBDChrt'
 * '<S220>' : 'ENGR_ac/PokeENGR_Pct_FuelLevel2/PokeENGR_Pct_FuelLevel2Chrt'
 * '<S221>' : 'ENGR_ac/PokeENGR_Pct_PurgeIntensity/PokeENGR_Pct_PurgeIntensityChrt'
 * '<S222>' : 'ENGR_ac/PokeENGR_T_CatalystTemp/PokeENGR_T_CatalystTempChrt'
 * '<S223>' : 'ENGR_ac/PokeENGR_T_EngCoolantTemp/PokeENGR_T_EngCoolantTempChrt'
 * '<S224>' : 'ENGR_ac/PokeENGR_T_Engine_Oil_Temp/PokeENGR_T_Engine_Oil_TempChrt'
 * '<S225>' : 'ENGR_ac/PokeENGR_T_ExhaustGasTemp/PokeENGR_T_ExhaustGasTempChrt'
 * '<S226>' : 'ENGR_ac/PokeENGR_T_InductionAirTemp/PokeENGR_T_InductionAirTempChrt'
 * '<S227>' : 'ENGR_ac/PokeENGR_V_FuelConsumption/PokeENGR_V_FuelConsumptionChrt'
 * '<S228>' : 'ENGR_ac/PokeENGR_b_AllwEVECM/PokeENGR_b_AllwEVECMChrt'
 * '<S229>' : 'ENGR_ac/PokeENGR_b_CatTempMaintEnabled/PokeENGR_b_CatTempMaintEnabledChrt'
 * '<S230>' : 'ENGR_ac/PokeENGR_b_CatalystWarmUpEnabled/PokeENGR_b_CatalystWarmUpEnabledChrt'
 * '<S231>' : 'ENGR_ac/PokeENGR_b_CmprssnTest/PokeENGR_b_CmprssnTestChrt'
 * '<S232>' : 'ENGR_ac/PokeENGR_b_CondOkForCylDeac/PokeENGR_b_CondOkForCylDeacChrt'
 * '<S233>' : 'ENGR_ac/PokeENGR_b_ECM_Feedback_HCP/PokeENGR_b_ECM_Feedback_HCPChrt'
 * '<S234>' : 'ENGR_ac/PokeENGR_b_ESS_ReqEngOff/PokeENGR_b_ESS_ReqEngOffChrt'
 * '<S235>' : 'ENGR_ac/PokeENGR_b_ESS_ReqEngStart/PokeENGR_b_ESS_ReqEngStartChrt'
 * '<S236>' : 'ENGR_ac/PokeENGR_b_EngCombustionCmnd/PokeENGR_b_EngCombustionCmndChrt'
 * '<S237>' : 'ENGR_ac/PokeENGR_b_EngDFSO_Allow/PokeENGR_b_EngDFSO_AllowChrt'
 * '<S238>' : 'ENGR_ac/PokeENGR_b_EngMfLrnRPMCtrlReq/PokeENGR_b_EngMfLrnRPMCtrlReqChrt'
 * '<S239>' : 'ENGR_ac/PokeENGR_b_EngModeRun/PokeENGR_b_EngModeRunChrt'
 * '<S240>' : 'ENGR_ac/PokeENGR_b_EngOffRecom/PokeENGR_b_EngOffRecomChrt'
 * '<S241>' : 'ENGR_ac/PokeENGR_b_EngSysDsbld/PokeENGR_b_EngSysDsbldChrt'
 * '<S242>' : 'ENGR_ac/PokeENGR_b_EngSysLowFuel/PokeENGR_b_EngSysLowFuelChrt'
 * '<S243>' : 'ENGR_ac/PokeENGR_b_EngTLCLearnReq/PokeENGR_b_EngTLCLearnReqChrt'
 * '<S244>' : 'ENGR_ac/PokeENGR_b_EngTrq_Enbl_Rq_TCM/PokeENGR_b_EngTrq_Enbl_Rq_TCMChrt'
 * '<S245>' : 'ENGR_ac/PokeENGR_b_EngineStallDetected/PokeENGR_b_EngineStallDetectedChrt'
 * '<S246>' : 'ENGR_ac/PokeENGR_b_GasFlowActuator/PokeENGR_b_GasFlowActuatorChrt'
 * '<S247>' : 'ENGR_ac/PokeENGR_b_KickDnReq/PokeENGR_b_KickDnReqChrt'
 * '<S248>' : 'ENGR_ac/PokeENGR_b_LV12PwrFreeRq/PokeENGR_b_LV12PwrFreeRqChrt'
 * '<S249>' : 'ENGR_ac/PokeENGR_b_OilDil_EngMinPwrEnbl/PokeENGR_b_OilDil_EngMinPwrEnblChrt'
 * '<S250>' : 'ENGR_ac/PokeENGR_b_PCMSVSReq/PokeENGR_b_PCMSVSReqChrt'
 * '<S251>' : 'ENGR_ac/PokeENGR_b_PnLimitActvFlg/PokeENGR_b_PnLimitActvFlgChrt'
 * '<S252>' : 'ENGR_ac/PokeENGR_b_StpNotAllwd/PokeENGR_b_StpNotAllwdChrt'
 * '<S253>' : 'ENGR_ac/PokeENGR_b_StrtNotAllwd/PokeENGR_b_StrtNotAllwdChrt'
 * '<S254>' : 'ENGR_ac/PokeENGR_b_WarmUpCycCmplt/PokeENGR_b_WarmUpCycCmpltChrt'
 * '<S255>' : 'ENGR_ac/PokeENGR_b_ZylAbs/PokeENGR_b_ZylAbsChrt'
 * '<S256>' : 'ENGR_ac/PokeENGR_dm_EXH_MASS_FLOW/PokeENGR_dm_EXH_MASS_FLOWChrt'
 * '<S257>' : 'ENGR_ac/PokeENGR_e_Cam_Phsr_Stat/PokeENGR_e_Cam_Phsr_StatChrt'
 * '<S258>' : 'ENGR_ac/PokeENGR_e_ComFail_C1CAN/KaENGR_e_ECMComFail_C1'
 * '<S259>' : 'ENGR_ac/PokeENGR_e_ComFail_C1CAN/PokeENGR_e_ComFail_C1CANChrt'
 * '<S260>' : 'ENGR_ac/PokeENGR_e_ComFail_ePTCAN/KaENGR_e_ECMComFail_ePT'
 * '<S261>' : 'ENGR_ac/PokeENGR_e_ComFail_ePTCAN/PokeENGR_e_ComFail_ePTCANChrt'
 * '<S262>' : 'ENGR_ac/PokeENGR_e_CylinderDeacMode/PokeENGR_e_CylinderDeacModeChrt'
 * '<S263>' : 'ENGR_ac/PokeENGR_e_ECMReqRemStop/PokeENGR_e_ECMReqRemStopChrt'
 * '<S264>' : 'ENGR_ac/PokeENGR_e_ESSEngSt/PokeENGR_e_ESSEngStChrt'
 * '<S265>' : 'ENGR_ac/PokeENGR_e_ETRQ_Mode/KaENGR_e_ETRQ_Mode_Map'
 * '<S266>' : 'ENGR_ac/PokeENGR_e_ETRQ_Mode/PokeENGR_e_ETRQ_ModeChrt'
 * '<S267>' : 'ENGR_ac/PokeENGR_e_EngDFSO_Req/PokeENGR_e_EngDFSO_ReqChrt'
 * '<S268>' : 'ENGR_ac/PokeENGR_e_EngDFSO_St/PokeENGR_e_EngDFSO_StChrt'
 * '<S269>' : 'ENGR_ac/PokeENGR_e_EngReqStrtType/PokeENGR_e_EngReqStrtTypeChrt'
 * '<S270>' : 'ENGR_ac/PokeENGR_e_EngStrtStpOvrrd/PokeENGR_e_EngStrtStpOvrrdChrt'
 * '<S271>' : 'ENGR_ac/PokeENGR_e_EngStrtStpOvrrd_C1/PokeENGR_e_EngStrtStpOvrrd_C1Chrt'
 * '<S272>' : 'ENGR_ac/PokeENGR_e_EngineMaintenanceSts/PokeENGR_e_EngineMaintenanceStsChrt'
 * '<S273>' : 'ENGR_ac/PokeENGR_e_HybActEngTorqRespType/KaENGR_e_HybActEngTorqRespType_Map'
 * '<S274>' : 'ENGR_ac/PokeENGR_e_HybActEngTorqRespType/PokeENGR_e_HybActEngTorqRespTypeChrt'
 * '<S275>' : 'ENGR_ac/PokeENGR_e_StpNotAllwdID/PokeENGR_e_StpNotAllwdIDChrt'
 * '<S276>' : 'ENGR_ac/PokeENGR_e_StrtNotAllwdID/PokeENGR_e_StrtNotAllwdIDChrt'
 * '<S277>' : 'ENGR_ac/PokeENGR_e_StsMil_ECM/PokeENGR_e_StsMil_ECMChrt'
 * '<S278>' : 'ENGR_ac/PokeENGR_i_ECM_LHOM_Trans/PokeENGR_i_ECM_LHOM_TransChrt'
 * '<S279>' : 'ENGR_ac/PokeENGR_m_CylAirIntake/PokeENGR_m_CylAirIntakeChrt'
 * '<S280>' : 'ENGR_ac/PokeENGR_p_EngManfldAbsPrs/PokeENGR_p_EngManfldAbsPrsChrt'
 * '<S281>' : 'ENGR_ac/PokeENGR_t_EngOffTime/PokeENGR_t_EngOffTimeChrt'
 * '<S282>' : 'ENGR_ac/TmotENGR_b_EngCoolantTemp/TmotENGR_b_EngCoolantTempChrt'
 * '<S283>' : 'ENGR_ac/TmotENGR_b_EngStrtStpOvrrd_C1/TmotENGR_b_EngStrtStpOvrrd_C1Chrt'
 * '<S284>' : 'ENGR_ac/TmotENGR_b_FuelLevel2/TmotENGR_b_FuelLevel2Chrt'
 */
#endif                                 /* RTW_HEADER_ENGR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
