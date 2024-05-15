/*
 * File: TINR_ac.h
 *
 * Code generated for Simulink model 'TINR_ac'.
 *
 * Model version                  : 9.88
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:40:21 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TINR_ac_h_
#define RTW_HEADER_TINR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef TINR_ac_COMMON_INCLUDES_
#define TINR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TINR.h"
#endif                                 /* TINR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TINR_ac_T
{

#if Rte_SysCon_Variant_TINR_1

    float32 LaTINR_n_NiMinToOpenCoast_out[9];
                                  /* '<S152>/PokeTINR_n_NiMinToOpenCoastChrt' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 LaTINR_n_NiMinToOpen_out[9];/* '<S151>/PokeTINR_n_NiMinToOpenChrt' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 LaTINR_n_NiMinForLockUpCoast_out[9];
                               /* '<S150>/PokeTINR_n_NiMinForLockUpCoastChrt' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 LaTINR_n_NiMinForLockUp_out[9];
                                    /* '<S149>/PokeTINR_n_NiMinForLockUpChrt' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForLeTINR_r_TCMTransTrqRati;/* '<S485>/KeTINR_r_TransTrqRatioInit' */
    float32 OutportBufferForLeTINR_r_TCM_HillMode_In;/* '<S485>/KeTINR_r_TCM_HillModeInit' */
    float32 OutportBufferForLaTINR_n_NiMinForLockUp_[9];
                                      /* '<S485>/KaTINR_n_NiMinForLockUpInit' */
    float32 OutportBufferForLaTINR_n_NiMinToOpen_Ini[9];/* '<S485>/KaTINR_n_NiMinToOpenInit' */
    float32 OutportBufferForLaTINR_n_NiMinToOpenCoas[9];
                                    /* '<S485>/KaTINR_n_NiMinToOpenCoastInit' */
    float32 OutportBufferForLaTINR_n_NiMinForLockUpC[9];
                                 /* '<S485>/KaTINR_n_NiMinForLockUpCoastInit' */
    float32 OutportBufferForLaTINR_M_ClchTrq_Init[6];/* '<S485>/KaTINR_M_ClchTrqInit' */
    float32 OutportBufferForLeTINR_t_TCM_TimeToSpeed;
                                   /* '<S485>/KeTINR_t_TCM_TimeToSpeedChange' */
    float32 OutportBufferForComm_r_TransTrqRatio_Ini;/* '<S484>/KeTINR_r_TransTrqRatioInit' */
    float32 OutportBufferForComm_n_NiMinForLockUp_In[9];
                                      /* '<S484>/KaTINR_n_NiMinForLockUpInit' */
    float32 OutportBufferForComm_n_NiMinToOpen_Init[9];/* '<S484>/KaTINR_n_NiMinToOpenInit' */
    float32 OutportBufferForComm_n_NiMinForLockUpCoa[9];
                                 /* '<S484>/KaTINR_n_NiMinForLockUpCoastInit' */
    float32 OutportBufferForComm_n_NiMinToOpenCoast_[9];
                                    /* '<S484>/KaTINR_n_NiMinToOpenCoastInit' */
    float32 OutportBufferForComm_r_TCM_HillMode_Init;/* '<S484>/KeTINR_r_TCM_HillModeInit' */
    float32 OutportBufferForComm_n_DisengageILE;/* '<S484>/KeTINR_n_DisengageILE_Init' */
    float32 OutportBufferForComm_Pct_TransStrssFctrI;
                                    /* '<S484>/KeTINR_Pct_TransStrssFctrInit' */
    float32 OutportBufferForM_DrvLnTrqRq_Axle_Init;
                                    /* '<S484>/KeTINR_M_DrvLnTrqRq_Axle_Init' */
    float32 OutportBufferForr_MechDrivelineRatio_Ini;
                                  /* '<S484>/KeTINR_r_MechDrivelineRatioInit' */
    float32 OutportBufferForr_TCC_TR_Init;/* '<S484>/KeTINR_r_TCC_TRInit' */

#if Rte_SysCon_Variant_TINR_1

    float32 ArrayAssignment[6];        /* '<S450>/ArrayAssignment' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 LaTINC_M_ClchTrq[6];       /* '<S450>/ArrayAssignment5' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

    uint16 OutportBufferForLeTINR_d_TCMFailures_Ini;/* '<S485>/KeTINR_d_TCMFailures_Init' */
    uint16 OutportBufferForComm_d_TCMFailures_Init;/* '<S484>/KeTINR_d_TCMFailures_Init' */
    uint16 OutportBufferForComm_i_TCM_DriveProgram_;
                                    /* '<S484>/KeTINR_i_TCM_DriveProgramInit' */

#if Rte_SysCon_Variant_TINR_1

    sint16 LeTINR_d_TCMLimphomeFaultsC1CAN_out;
                            /* '<S113>/PokeTINR_d_TCMLimphomeFaultsC1CANChrt' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    sint16 LeTINR_d_TCMLimphomeFaults_out;
                                 /* '<S112>/PokeTINR_d_TCMLimphomeFaultsChrt' */

#define B_TINR_AC_T_VARIANT_EXISTS
#endif

    sint16 OutportBufferForLeTINR_d_TCMLimphomeFaul;
                                   /* '<S485>/KeTINR_d_TCMLimphomeFaultsInit' */
    sint16 OutportBufferForLeTINR_i_MinGearAllwd_In;
                                    /* '<S485>/KeTINR_i_TCM_MinGearAllwdInit' */
    sint16 OutportBufferForLeTINR_i_MaxGearAllwd_In;
                                    /* '<S485>/KeTINR_i_TCM_MaxGearAllwdInit' */
    sint16 OutportBufferForComm_i_TCM_MinGearAllwd_;
                                    /* '<S484>/KeTINR_i_TCM_MinGearAllwdInit' */
    sint16 OutportBufferForComm_i_TCM_MaxGearAllwd_;
                                    /* '<S484>/KeTINR_i_TCM_MaxGearAllwdInit' */
    sint16 OutportBufferForComm_Cnt_TCM_DriverType_;
                                    /* '<S484>/KeTINR_Cnt_TCM_DriverTypeInit' */
    sint16 OutportBufferForComm_d_EngStrtTypAvbl;/* '<S484>/Constant Value6' */
    boolean OutportBufferForLeTINR_b_PwrFlowStatus_I;/* '<S485>/KeTINR_b_PwrFlowStatusInit' */
    boolean OutportBufferForLeTINR_b_TCMLimphomeFaul;
                                 /* '<S485>/KeTINR_b_TCMLimphomeFaultsInitFA' */
    boolean OutportBufferForLeTINR_b_ClchFaultActv_I;/* '<S485>/FALSE Constant14' */
    boolean OutportBufferForLeTINR_b_DrvLnMinTrqMd_I;
                                      /* '<S485>/KeTINR_b_DrvLnMinTrqMd_Init' */
    boolean OutportBufferForComm_b_TargetGearFA_Init;/* '<S484>/KeTINR_b_TargetGearInitFA' */
    boolean OutportBufferForComm_b_ActualGearFA_Init;/* '<S484>/KeTINR_b_ActualGearInitFA' */
    boolean OutportBufferForComm_b_TCMTrqCntrlMdFstF;
                                     /* '<S484>/KeTINR_b_TrqCntrlMdFstInitFA' */
    boolean OutportBufferForComm_b_TCMTrqCntrlMdSlwF;
                                     /* '<S484>/KeTINR_b_TrqCntrlMdSlwInitFA' */
    boolean OutportBufferForComm_b_TransTrqRatioFA_I;
                                     /* '<S484>/KeTINR_b_TransTrqRatioInitFA' */
    boolean OutportBufferForComm_b_Inhibit_Mode1_Ini;/* '<S484>/KeTINR_b_Inhibit_Mode1Init' */
    boolean OutportBufferForComm_b_Inhibit_Mode2_Ini;/* '<S484>/KeTINR_b_Inhibit_Mode2Init' */
    boolean OutportBufferForComm_b_Inhibit_Gear1_Ini;/* '<S484>/KeTINR_b_Inhibit_Gear1Init' */
    boolean OutportBufferForComm_b_Inhibit_Gear2_Ini;/* '<S484>/KeTINR_b_Inhibit_Gear2Init' */
    boolean OutportBufferForComm_b_Inhibit_Gear3_Ini;/* '<S484>/KeTINR_b_Inhibit_Gear3Init' */
    boolean OutportBufferForComm_b_Inhibit_Gear4_Ini;/* '<S484>/KeTINR_b_Inhibit_Gear4Init' */
    boolean OutportBufferForComm_b_Inhibit_Neutral_I;
                                     /* '<S484>/KeTINR_b_Inhibit_NeutralInit' */
    boolean OutportBufferForComm_b_KGB_Init;/* '<S484>/KeTINR_b_KGBInit' */
    boolean OutportBufferForComm_b_KOB_Init;/* '<S484>/KeTINR_b_KOBInit' */
    boolean OutportBufferForComm_b_KSB_Init;/* '<S484>/KeTINR_b_KSBInit' */
    boolean OutportBufferForComm_b_ILE_STO_Stat_Init;/* '<S484>/KeTINR_b_ILE_STO_StatInit' */
    boolean OutportBufferForComm_b_TCM_MinGearAllwdF;
                                  /* '<S484>/KeTINR_b_TCM_MinGearAllwdInitFA' */
    boolean OutportBufferForComm_b_TCM_MaxGearAllwdF;
                                  /* '<S484>/KeTINR_b_TCM_MaxGearAllwdInitFA' */
    boolean OutportBufferForComm_b_NiMinForLockUpFA_;
                                    /* '<S484>/KeTINR_b_NiMinForLockUpInitFA' */
    boolean OutportBufferForComm_b_NiMinToOpenFA_Ini;/* '<S484>/KeTINR_b_NiMinToOpenInitFA' */
    boolean OutportBufferForComm_b_NiMinForLockUpCoa;
                               /* '<S484>/KeTINR_b_NiMinForLockUpInitCoastFA' */
    boolean OutportBufferForComm_b_NiMinToOpenCoastF;
                                  /* '<S484>/KeTINR_b_NiMinToOpenCoastInitFA' */
    boolean OutportBufferForComm_b_TCMHASActModeFA;
                                     /* '<S484>/KeTINR_b_TCMHASActModeInitFA' */
    boolean OutportBufferForComm_b_GearShftTypeFA_In;
                                      /* '<S484>/HeTINR_b_GearShftTypeInitFA' */
    boolean OutportBufferForComm_b_TCMTransReqFuelON;
                                   /* '<S484>/KeTINR_b_TCMTransReqFuelONInit' */
    boolean OutportBufferForComm_b_PwrFlowStatus_Ini;/* '<S484>/KeTINR_b_PwrFlowStatusInit' */
    boolean OutportBufferForComm_b_TCMSpdCtrlCapable;
                                   /* '<S484>/KeTINR_b_TCMSpdCtrlCapableInit' */
    boolean OutportBufferForComm_b_TCMLimphomeFaults;
                                 /* '<S484>/KeTINR_b_TCMLimphomeFaultsInitFA' */
    boolean OutportBufferForComm_b_TCMLimphomeFaul_p;/* '<S484>/FALSE Constant5' */
    boolean OutportBufferForComm_b_DriveLineRatioEpt;/* '<S484>/FALSE Constant3' */
    boolean OutportBufferForComm_b_DriveLineRatioCan;/* '<S484>/FALSE Constant4' */
    boolean OutportBufferForComm_b_GearShftType2FA_I;
                                     /* '<S484>/HeTINR_b_GearShftType2InitFA' */
    boolean OutportBufferForComm_b_TCM_ASCReq;/* '<S484>/Constant Value4' */
    boolean OutportBufferForComm_b_TCM_ActiveEVGearF;/* '<S484>/FALSE Constant7' */
    boolean OutportBufferForComm_b_TCM_ActiveXNGearF;/* '<S484>/FALSE Constant9' */
    boolean OutportBufferForComm_b_TCM_ActiveHybridG;/* '<S484>/FALSE Constant10' */
    boolean OutportBufferForComm_b_TCM_PassiveHybrid;/* '<S484>/FALSE Constant11' */
    boolean OutportBufferForComm_b_EngStrtTypAvblFA;/* '<S484>/FALSE Constant13' */
    boolean OutportBufferForComm_b_TCMNeutPhsZeroTrq;/* '<S484>/FALSE Constant14' */
    boolean OutportBufferForComm_b_TCMNeutPhsZeroT_k;/* '<S484>/FALSE Constant15' */
    boolean OutportBufferForComm_b_SynchroGearInitFA;/* '<S484>/FALSE Constant18' */
    boolean OutportBufferForComm_b_Synchro2GearInitF;/* '<S484>/FALSE Constant19' */
    boolean OutportBufferForDsblAEMD4TCM_Init;/* '<S484>/FALSE Constant20' */
    boolean OutportBufferForb_DrvLnTrqRq_Axle_FA_Ini;/* '<S484>/FALSE Constant6' */
    boolean OutportBufferForb_DrvLnMinTrqMd_Init;
                                      /* '<S484>/KeTINR_b_DrvLnMinTrqMd_Init' */
    boolean OutportBufferForb_MechDrivelineRatioFA_I;/* '<S484>/FALSE Constant17' */
    boolean OutportBufferForb_r_TCC_TRFA_Init;/* '<S484>/FALSE Constant21' */
    TeTRNR_e_TCMTgtMdReq OutportBufferForComm_e_TCMHASActMode;/* '<S484>/KeTINR_e_TCMHASActModeInit' */
    TeTRNR_e_TCMShftTypeTLF OutportBufferForComm_e_GearShftType2_Ini;/* '<S484>/HeTINR_e_GearShftType2Init' */
    TeTRNR_e_TCMShftType OutportBufferForComm_e_GearShftType_Init;/* '<S484>/HeTINR_e_GearShftTypeInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_TargetGear_Init;/* '<S484>/KeTINR_e_TargetGearInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_ActualGear_Init;/* '<S484>/KeTINR_e_ActualGearInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_TCM_ClutchStartGe;
                                 /* '<S484>/KeTINR_e_TCM_ClutchStartGearInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_TCM_ActiveEVGear;
                                    /* '<S484>/KeTINR_e_TCM_ActiveEVGearInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_TCM_ActiveXNGear;
                                    /* '<S484>/KeTINR_e_TCM_ActiveXNGearInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_TCM_ActiveHybridG;
                                /* '<S484>/KeTINR_e_TCM_ActiveHybridGearInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_TCM_PassiveHybrid;
                               /* '<S484>/KeTINR_e_TCM_PassiveHybridGearInit' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_SynchroGearInit;/* '<S484>/CeHCCR_e_ClActuated9' */
    TeTRNR_e_TCMGearStat OutportBufferForComm_e_Synchro2GearInit;/* '<S484>/CeHCCR_e_ClActuated10' */
    TeTMMR_e_MtrBDynFctr OutportBufferForLeTINR_e_MtrBDynFctr_Ini;/* '<S485>/KeTINR_e_MtrBDynFctrDflt' */
    TeTMMR_e_MtrBDynFctr OutportBufferForMtrBDynFctr_Init;/* '<S484>/KeTINR_e_MtrBDynFctrDflt' */
    TeTINR_e_TransAdaptStatus OutportBufferForLeTINR_e_TransAdpSts_Ini;/* '<S485>/CeHCCR_e_ClActuated5' */
    TeTINR_e_TransAdaptStatus OutportBufferForComm_e_TransAdpSts;/* '<S484>/CeHCCR_e_ClActuated5' */
    TeTINR_e_TCM_TrqCntrlModeReq OutportBufferForComm_e_TCMTrqCntrlMdFst_;/* '<S484>/KeTINR_e_TrqCntrlMdFstInit' */
    TeTINR_e_TCM_TrqCntrlModeReq OutportBufferForComm_e_TCMTrqCntrlMdSlw_;/* '<S484>/KeTINR_e_TrqCntrlMdSlwInit' */
    TeTINR_e_TCMTCCPreventionID OutportBufferForLeTINR_e_TCMTCCPreventio;
                                 /* '<S485>/KeTINR_e_TCM_TCCPreventionIDInit' */
    TeTINR_e_TCMTCCPreventionID OutportBufferForTCM_TCCPreventionID_Init;
                                 /* '<S484>/KeTINR_e_TCM_TCCPreventionIDInit' */
    TeTINR_e_TCMNeutPhsZeroTrqReq OutportBufferForLeTINR_e_TransLimpReques;/* '<S485>/CeHCCR_e_ClActuated6' */
    TeTINR_e_TCMNeutPhsZeroTrqReq OutportBufferForComm_e_TCMNeutPhsZeroTrq;/* '<S484>/CeHCCR_e_ClActuated6' */
    TeTINR_e_TCMNeutPhsZeroTrqReq OutportBufferForComm_e_TCMNeutPhsZeroT_m;/* '<S484>/CeHCCR_e_ClActuated7' */
    TeTINR_e_TCMComFail_ePTCAN OutportBufferForComm_e_ComFailTCM_ePtCAN;
                                      /* '<S484>/KeTINR_e_ComFailInit_ePTCAN' */
    TeTINR_e_TCMComFail_C1CAN OutportBufferForComm_e_ComFailTCM_C1CAN;/* '<S484>/KeTINR_e_ComFailInit_C1CAN' */
    TeTINR_e_P2SpdCntrlReq OutportBufferForComm_e_P2SpdCntrlReq_Ini;/* '<S484>/CeHCCR_e_ClActuated8' */
    TeSTRR_e_AutoStopStartOvrrd OutportBufferForComm_e_TCMStrtStpOvrrd_I;
                                    /* '<S484>/KeTINR_e_TCMStrtStpOvrrd_Init' */
    TeOHSR_e_VLE_DriveStat OutportBufferForComm_e_ILEStat_Init;/* '<S484>/KeTINR_e_ILEStatInit' */
    TeOHSR_e_RngSel OutportBufferForComm_e_TCMModeReq_Init;/* '<S484>/KeTINR_e_TCMModeReqInit' */
    TeHCCR_e_ClutchStatus OutportBufferForComm_e_HASStatusK0_Init;/* '<S484>/KeTINR_e_HASStatusK0Init' */
    TeHCCR_e_ClutchStatus OutportBufferForComm_e_K1Status_Init;/* '<S484>/KeTINR_e_K1StatusInit' */
    TeHCCR_e_ClutchStatus OutportBufferForComm_e_Synchro2Sts_Init;/* '<S484>/KeTINR_e_Synchro2StsInit' */
    TeHCCR_e_ClutchStatus OutportBufferForComm_e_Synchro1Sts_Init;/* '<S484>/KeTINR_e_Synchro1StsInit' */
}
B_TINR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TINR_ac_T
{

#if Rte_SysCon_Variant_TINR_1

    float32 UnitDelay_DSTATE;          /* '<S457>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 UnitDelay_DSTATE_a;        /* '<S456>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 UnitDelay_DSTATE_i;        /* '<S455>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 UnitDelay_DSTATE_o;        /* '<S454>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 UnitDelay_DSTATE_o0;       /* '<S453>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 UnitDelay_DSTATE_k;        /* '<S452>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 UnitDelay_DSTATE_d;        /* '<S370>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 VaTINC_n_NiMinToOpen_DS[9];/* '<S362>/DataStoreMemory' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 VaTINC_n_NiMinForLockUp_DS[9];/* '<S362>/DataStoreMemory1' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 VaTINC_n_NiMinToOpenCoast_DS[9];/* '<S362>/DataStoreMemory2' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    float32 VaTINC_n_NiMinForLockUpCoast_DS[9];/* '<S362>/DataStoreMemory3' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    uint16 UnitDelay_DSTATE_b[9];      /* '<S420>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    boolean UnitDelay_DSTATE_iv;       /* '<S395>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TINR_1

    boolean UnitDelay_DSTATE_ih;       /* '<S372>/Unit Delay' */

#define DW_TINR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_TINR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_TINR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeTRNR_e_TCMGearStat Constant;/* '<S491>/Constant' */
    const TeTRNR_e_TCMGearStat Constant_i;/* '<S486>/Constant' */
    const TeTINR_e_TransAdaptStatus Constant_e;/* '<S586>/Constant' */
    const TeTINR_e_TransAdaptStatus Constant_d;/* '<S487>/Constant' */
    const TeTINR_e_TCMNeutPhsZeroTrqReq Constant_m;/* '<S587>/Constant' */
    const TeTINR_e_TCMNeutPhsZeroTrqReq Constant_n;/* '<S488>/Constant' */
    const TeTINR_e_TCMNeutPhsZeroTrqReq Constant_o;/* '<S489>/Constant' */
    const TeTINR_e_P2SpdCntrlReq Constant_md;/* '<S490>/Constant' */
}
ConstB_TINR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_TINR_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S380>/Vector'
     */
    uint32 Vector_maxIndex[2];

#define CONSTP_TINR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_TINR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_TINR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

extern VAR(B_TINR_ac_T, TINR_VAR_INIT) TINR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

extern VAR(DW_TINR_ac_T, TINR_VAR_INIT) TINR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_TINR
#include "MemMap.h"

extern CONST(ConstB_TINR_ac_T, TINR_VAR_INIT) TINR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_TINR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TINR
#include "MemMap.h"

extern CONST(ConstP_TINR_ac_T, TINR_VAR_INIT) TINR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_TINR
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
 * '<Root>' : 'TINR_ac'
 * '<S1>'   : 'TINR_ac/FsftTINR_Cnt_TCM_DriverType'
 * '<S2>'   : 'TINR_ac/FsftTINR_M_ActualClutch1_TCM'
 * '<S3>'   : 'TINR_ac/FsftTINR_M_ActualClutch3_TCM'
 * '<S4>'   : 'TINR_ac/FsftTINR_M_ClchTrqA'
 * '<S5>'   : 'TINR_ac/FsftTINR_M_ClchTrqB'
 * '<S6>'   : 'TINR_ac/FsftTINR_M_ClchTrqC'
 * '<S7>'   : 'TINR_ac/FsftTINR_M_ClchTrqD'
 * '<S8>'   : 'TINR_ac/FsftTINR_M_ClchTrqE'
 * '<S9>'   : 'TINR_ac/FsftTINR_M_ClchTrqF'
 * '<S10>'  : 'TINR_ac/FsftTINR_M_LeadClutch1_TCM'
 * '<S11>'  : 'TINR_ac/FsftTINR_M_LeadClutch3_TCM'
 * '<S12>'  : 'TINR_ac/FsftTINR_Pct_TransStrssFctr'
 * '<S13>'  : 'TINR_ac/FsftTINR_b_DrvLnMinTrqMd'
 * '<S14>'  : 'TINR_ac/FsftTINR_b_DrvLnTrqRq_Axle'
 * '<S15>'  : 'TINR_ac/FsftTINR_b_DsblAEMD4TCM'
 * '<S16>'  : 'TINR_ac/FsftTINR_b_ILE_STO_Stat'
 * '<S17>'  : 'TINR_ac/FsftTINR_b_Inhibit_Gear1'
 * '<S18>'  : 'TINR_ac/FsftTINR_b_Inhibit_Gear2'
 * '<S19>'  : 'TINR_ac/FsftTINR_b_Inhibit_Gear3'
 * '<S20>'  : 'TINR_ac/FsftTINR_b_Inhibit_Gear4'
 * '<S21>'  : 'TINR_ac/FsftTINR_b_Inhibit_Mode1'
 * '<S22>'  : 'TINR_ac/FsftTINR_b_Inhibit_Mode2'
 * '<S23>'  : 'TINR_ac/FsftTINR_b_Inhibit_Neutral'
 * '<S24>'  : 'TINR_ac/FsftTINR_b_KGB'
 * '<S25>'  : 'TINR_ac/FsftTINR_b_KOB'
 * '<S26>'  : 'TINR_ac/FsftTINR_b_KSB'
 * '<S27>'  : 'TINR_ac/FsftTINR_b_PwrFlowStatus'
 * '<S28>'  : 'TINR_ac/FsftTINR_b_TCMSpdCtrlCapable'
 * '<S29>'  : 'TINR_ac/FsftTINR_b_TCMTransReqFuelON'
 * '<S30>'  : 'TINR_ac/FsftTINR_b_TCM_ASCReq'
 * '<S31>'  : 'TINR_ac/FsftTINR_d_EngStrtTypAvbl'
 * '<S32>'  : 'TINR_ac/FsftTINR_d_TCMFailures'
 * '<S33>'  : 'TINR_ac/FsftTINR_d_TCMLimphomeFaults'
 * '<S34>'  : 'TINR_ac/FsftTINR_d_TCMLimphomeFaultsC1CAN'
 * '<S35>'  : 'TINR_ac/FsftTINR_e_ActualGear'
 * '<S36>'  : 'TINR_ac/FsftTINR_e_Clch1Sts'
 * '<S37>'  : 'TINR_ac/FsftTINR_e_Clch3Sts'
 * '<S38>'  : 'TINR_ac/FsftTINR_e_ComFailDflt_C1CAN'
 * '<S39>'  : 'TINR_ac/FsftTINR_e_ComFailDflt_ePTCAN'
 * '<S40>'  : 'TINR_ac/FsftTINR_e_GearShftType'
 * '<S41>'  : 'TINR_ac/FsftTINR_e_GearShftType2'
 * '<S42>'  : 'TINR_ac/FsftTINR_e_HASStatusK0'
 * '<S43>'  : 'TINR_ac/FsftTINR_e_ILEStat'
 * '<S44>'  : 'TINR_ac/FsftTINR_e_K1Status'
 * '<S45>'  : 'TINR_ac/FsftTINR_e_MtrBDynFctr'
 * '<S46>'  : 'TINR_ac/FsftTINR_e_P2SpdCntrlReq'
 * '<S47>'  : 'TINR_ac/FsftTINR_e_Synchro1Gear'
 * '<S48>'  : 'TINR_ac/FsftTINR_e_Synchro1Sts'
 * '<S49>'  : 'TINR_ac/FsftTINR_e_Synchro2Gear'
 * '<S50>'  : 'TINR_ac/FsftTINR_e_Synchro2Sts'
 * '<S51>'  : 'TINR_ac/FsftTINR_e_TCMHASActMode'
 * '<S52>'  : 'TINR_ac/FsftTINR_e_TCMModeReq'
 * '<S53>'  : 'TINR_ac/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC'
 * '<S54>'  : 'TINR_ac/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN'
 * '<S55>'  : 'TINR_ac/FsftTINR_e_TCMStrtStpOvrrd'
 * '<S56>'  : 'TINR_ac/FsftTINR_e_TCMTCCPreventionID'
 * '<S57>'  : 'TINR_ac/FsftTINR_e_TCMTrqCntrlModeFast'
 * '<S58>'  : 'TINR_ac/FsftTINR_e_TCMTrqCntrlModeSlow'
 * '<S59>'  : 'TINR_ac/FsftTINR_e_TCM_ActiveEVGear'
 * '<S60>'  : 'TINR_ac/FsftTINR_e_TCM_ActiveHybridGear'
 * '<S61>'  : 'TINR_ac/FsftTINR_e_TCM_ActiveXNGear'
 * '<S62>'  : 'TINR_ac/FsftTINR_e_TCM_ClutchStartGear'
 * '<S63>'  : 'TINR_ac/FsftTINR_e_TCM_PassiveHybridGear'
 * '<S64>'  : 'TINR_ac/FsftTINR_e_TargetGear'
 * '<S65>'  : 'TINR_ac/FsftTINR_e_TransAdpStatus'
 * '<S66>'  : 'TINR_ac/FsftTINR_i_TCM_DriveProgram'
 * '<S67>'  : 'TINR_ac/FsftTINR_i_TCM_MaxGearAllwd'
 * '<S68>'  : 'TINR_ac/FsftTINR_i_TCM_MinGearAllwd'
 * '<S69>'  : 'TINR_ac/FsftTINR_n_DisengageILE'
 * '<S70>'  : 'TINR_ac/FsftTINR_n_NiMinForLockUp'
 * '<S71>'  : 'TINR_ac/FsftTINR_n_NiMinForLockUpCoast'
 * '<S72>'  : 'TINR_ac/FsftTINR_n_NiMinToOpen'
 * '<S73>'  : 'TINR_ac/FsftTINR_n_NiMinToOpenCoast'
 * '<S74>'  : 'TINR_ac/FsftTINR_r_DriveLineRatioCanC'
 * '<S75>'  : 'TINR_ac/FsftTINR_r_DriveLineRatioEpt'
 * '<S76>'  : 'TINR_ac/FsftTINR_r_MechDrivelineRatio'
 * '<S77>'  : 'TINR_ac/FsftTINR_r_TCC_TR'
 * '<S78>'  : 'TINR_ac/FsftTINR_r_TCM_HillMode'
 * '<S79>'  : 'TINR_ac/FsftTINR_r_TransTrqRatio'
 * '<S80>'  : 'TINR_ac/PokeTINR_Cnt_TCM_DriverType'
 * '<S81>'  : 'TINR_ac/PokeTINR_M_ActualClutch1_TCM'
 * '<S82>'  : 'TINR_ac/PokeTINR_M_ActualClutch3_TCM'
 * '<S83>'  : 'TINR_ac/PokeTINR_M_ClchTrqA'
 * '<S84>'  : 'TINR_ac/PokeTINR_M_ClchTrqB'
 * '<S85>'  : 'TINR_ac/PokeTINR_M_ClchTrqC'
 * '<S86>'  : 'TINR_ac/PokeTINR_M_ClchTrqD'
 * '<S87>'  : 'TINR_ac/PokeTINR_M_ClchTrqE'
 * '<S88>'  : 'TINR_ac/PokeTINR_M_ClchTrqF'
 * '<S89>'  : 'TINR_ac/PokeTINR_M_DrvLnTrqRq_Axle'
 * '<S90>'  : 'TINR_ac/PokeTINR_M_LeadClutch1_TCM'
 * '<S91>'  : 'TINR_ac/PokeTINR_M_LeadClutch3_TCM'
 * '<S92>'  : 'TINR_ac/PokeTINR_Pct_TransStrssFctr'
 * '<S93>'  : 'TINR_ac/PokeTINR_b_DrvLnMinTrqMd'
 * '<S94>'  : 'TINR_ac/PokeTINR_b_DsblAEMD4TCM'
 * '<S95>'  : 'TINR_ac/PokeTINR_b_ILE_STO_Stat'
 * '<S96>'  : 'TINR_ac/PokeTINR_b_Inhibit_Gear1'
 * '<S97>'  : 'TINR_ac/PokeTINR_b_Inhibit_Gear2'
 * '<S98>'  : 'TINR_ac/PokeTINR_b_Inhibit_Gear3'
 * '<S99>'  : 'TINR_ac/PokeTINR_b_Inhibit_Gear4'
 * '<S100>' : 'TINR_ac/PokeTINR_b_Inhibit_Mode1'
 * '<S101>' : 'TINR_ac/PokeTINR_b_Inhibit_Mode2'
 * '<S102>' : 'TINR_ac/PokeTINR_b_Inhibit_Neutral'
 * '<S103>' : 'TINR_ac/PokeTINR_b_KGB'
 * '<S104>' : 'TINR_ac/PokeTINR_b_KOB'
 * '<S105>' : 'TINR_ac/PokeTINR_b_KSB'
 * '<S106>' : 'TINR_ac/PokeTINR_b_PwrFlowStatus'
 * '<S107>' : 'TINR_ac/PokeTINR_b_TCMSpdCtrlCapable'
 * '<S108>' : 'TINR_ac/PokeTINR_b_TCMTransReqFuelON'
 * '<S109>' : 'TINR_ac/PokeTINR_b_TCM_ASCReq'
 * '<S110>' : 'TINR_ac/PokeTINR_d_EngStrtTypAvbl'
 * '<S111>' : 'TINR_ac/PokeTINR_d_TCMFailures'
 * '<S112>' : 'TINR_ac/PokeTINR_d_TCMLimphomeFaults'
 * '<S113>' : 'TINR_ac/PokeTINR_d_TCMLimphomeFaultsC1CAN'
 * '<S114>' : 'TINR_ac/PokeTINR_e_ActualGear'
 * '<S115>' : 'TINR_ac/PokeTINR_e_Clch1Sts'
 * '<S116>' : 'TINR_ac/PokeTINR_e_Clch3Sts'
 * '<S117>' : 'TINR_ac/PokeTINR_e_ComFail_C1CAN'
 * '<S118>' : 'TINR_ac/PokeTINR_e_ComFail_ePTCAN'
 * '<S119>' : 'TINR_ac/PokeTINR_e_GearShftType'
 * '<S120>' : 'TINR_ac/PokeTINR_e_GearShftType2'
 * '<S121>' : 'TINR_ac/PokeTINR_e_HASStatusK0'
 * '<S122>' : 'TINR_ac/PokeTINR_e_ILEStat'
 * '<S123>' : 'TINR_ac/PokeTINR_e_K1Status'
 * '<S124>' : 'TINR_ac/PokeTINR_e_MtrBDynFctr'
 * '<S125>' : 'TINR_ac/PokeTINR_e_P2SpdCntrlReq'
 * '<S126>' : 'TINR_ac/PokeTINR_e_Synchro1Gear'
 * '<S127>' : 'TINR_ac/PokeTINR_e_Synchro1Sts'
 * '<S128>' : 'TINR_ac/PokeTINR_e_Synchro2Gear'
 * '<S129>' : 'TINR_ac/PokeTINR_e_Synchro2Sts'
 * '<S130>' : 'TINR_ac/PokeTINR_e_TCMHASActMode'
 * '<S131>' : 'TINR_ac/PokeTINR_e_TCMModeReq'
 * '<S132>' : 'TINR_ac/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC'
 * '<S133>' : 'TINR_ac/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN'
 * '<S134>' : 'TINR_ac/PokeTINR_e_TCMStrtStpOvrrd'
 * '<S135>' : 'TINR_ac/PokeTINR_e_TCMTCCPreventionID'
 * '<S136>' : 'TINR_ac/PokeTINR_e_TCMTrqCntrlModeFast'
 * '<S137>' : 'TINR_ac/PokeTINR_e_TCMTrqCntrlModeSlow'
 * '<S138>' : 'TINR_ac/PokeTINR_e_TCM_ActiveEVGear'
 * '<S139>' : 'TINR_ac/PokeTINR_e_TCM_ActiveHybridGear'
 * '<S140>' : 'TINR_ac/PokeTINR_e_TCM_ActiveXNGear'
 * '<S141>' : 'TINR_ac/PokeTINR_e_TCM_ClutchStartGear'
 * '<S142>' : 'TINR_ac/PokeTINR_e_TCM_PassiveHybridGear'
 * '<S143>' : 'TINR_ac/PokeTINR_e_TargetGear'
 * '<S144>' : 'TINR_ac/PokeTINR_e_TransAdpStatus'
 * '<S145>' : 'TINR_ac/PokeTINR_i_TCM_DriveProgram'
 * '<S146>' : 'TINR_ac/PokeTINR_i_TCM_MaxGearAllwd'
 * '<S147>' : 'TINR_ac/PokeTINR_i_TCM_MinGearAllwd'
 * '<S148>' : 'TINR_ac/PokeTINR_n_DisengageILE'
 * '<S149>' : 'TINR_ac/PokeTINR_n_NiMinForLockUp'
 * '<S150>' : 'TINR_ac/PokeTINR_n_NiMinForLockUpCoast'
 * '<S151>' : 'TINR_ac/PokeTINR_n_NiMinToOpen'
 * '<S152>' : 'TINR_ac/PokeTINR_n_NiMinToOpenCoast'
 * '<S153>' : 'TINR_ac/PokeTINR_r_DriveLineRatioCanC'
 * '<S154>' : 'TINR_ac/PokeTINR_r_DriveLineRatioEpt'
 * '<S155>' : 'TINR_ac/PokeTINR_r_MechDrivelineRatio'
 * '<S156>' : 'TINR_ac/PokeTINR_r_TCC_TR'
 * '<S157>' : 'TINR_ac/PokeTINR_r_TCM_HillMode'
 * '<S158>' : 'TINR_ac/PokeTINR_r_TransTrqRatio'
 * '<S159>' : 'TINR_ac/PokeTINR_t_TCM_TimeToSpeedChange'
 * '<S160>' : 'TINR_ac/TINR_MedTEB'
 * '<S161>' : 'TINR_ac/TINR_MedTED'
 * '<S162>' : 'TINR_ac/TINR_PwrOn'
 * '<S163>' : 'TINR_ac/FsftTINR_Cnt_TCM_DriverType/FsftTINR_Cnt_TCM_DriverTypeChrt'
 * '<S164>' : 'TINR_ac/FsftTINR_M_ActualClutch1_TCM/FsftTINR_M_ActualClutch1_TCMChrt'
 * '<S165>' : 'TINR_ac/FsftTINR_M_ActualClutch3_TCM/FsftTINR_M_ActualClutch3_TCMChrt'
 * '<S166>' : 'TINR_ac/FsftTINR_M_ClchTrqA/FsftTINR_M_ClchTrqAChrt'
 * '<S167>' : 'TINR_ac/FsftTINR_M_ClchTrqB/FsftTINR_M_ClchTrqBChrt'
 * '<S168>' : 'TINR_ac/FsftTINR_M_ClchTrqC/FsftTINR_M_ClchTrqCChrt'
 * '<S169>' : 'TINR_ac/FsftTINR_M_ClchTrqD/FsftTINR_M_ClchTrqDChrt'
 * '<S170>' : 'TINR_ac/FsftTINR_M_ClchTrqE/FsftTINR_M_ClchTrqEChrt'
 * '<S171>' : 'TINR_ac/FsftTINR_M_ClchTrqF/FsftTINR_M_ClchTrqFChrt'
 * '<S172>' : 'TINR_ac/FsftTINR_M_LeadClutch1_TCM/FsftTINR_M_LeadClutch1_TCMChrt'
 * '<S173>' : 'TINR_ac/FsftTINR_M_LeadClutch3_TCM/FsftTINR_M_LeadClutch3_TCMChrt'
 * '<S174>' : 'TINR_ac/FsftTINR_Pct_TransStrssFctr/FsftTINR_Pct_TransStrssFctrChrt'
 * '<S175>' : 'TINR_ac/FsftTINR_b_DrvLnMinTrqMd/FsftTINR_b_DrvLnMinTrqMdChrt'
 * '<S176>' : 'TINR_ac/FsftTINR_b_DrvLnTrqRq_Axle/FsftTINR_b_DrvLnTrqRq_AxleChrt'
 * '<S177>' : 'TINR_ac/FsftTINR_b_DsblAEMD4TCM/FsftTINR_b_DsblAEMD4TCMChrt'
 * '<S178>' : 'TINR_ac/FsftTINR_b_ILE_STO_Stat/FsftTINR_b_ILE_STO_StatChrt'
 * '<S179>' : 'TINR_ac/FsftTINR_b_Inhibit_Gear1/FsftTINR_b_Inhibit_Gear1Chrt'
 * '<S180>' : 'TINR_ac/FsftTINR_b_Inhibit_Gear2/FsftTINR_b_Inhibit_Gear2Chrt'
 * '<S181>' : 'TINR_ac/FsftTINR_b_Inhibit_Gear3/FsftTINR_b_Inhibit_Gear3Chrt'
 * '<S182>' : 'TINR_ac/FsftTINR_b_Inhibit_Gear4/FsftTINR_b_Inhibit_Gear4Chrt'
 * '<S183>' : 'TINR_ac/FsftTINR_b_Inhibit_Mode1/FsftTINR_b_Inhibit_Mode1Chrt'
 * '<S184>' : 'TINR_ac/FsftTINR_b_Inhibit_Mode2/FsftTINR_b_Inhibit_Mode2Chrt'
 * '<S185>' : 'TINR_ac/FsftTINR_b_Inhibit_Neutral/FsftTINR_b_Inhibit_NeutralChrt'
 * '<S186>' : 'TINR_ac/FsftTINR_b_KGB/FsftTINR_b_KGBChrt'
 * '<S187>' : 'TINR_ac/FsftTINR_b_KOB/FsftTINR_b_KOBChrt'
 * '<S188>' : 'TINR_ac/FsftTINR_b_KSB/FsftTINR_b_KSBChrt'
 * '<S189>' : 'TINR_ac/FsftTINR_b_PwrFlowStatus/FsftTINR_b_PwrFlowStatusChrt'
 * '<S190>' : 'TINR_ac/FsftTINR_b_TCMSpdCtrlCapable/FsftTINR_b_TCMSpdCtrlCapableChrt'
 * '<S191>' : 'TINR_ac/FsftTINR_b_TCMTransReqFuelON/FsftTINR_b_TCMTransReqFuelONChrt'
 * '<S192>' : 'TINR_ac/FsftTINR_b_TCM_ASCReq/FsftTINR_b_TCM_ASCReqChrt'
 * '<S193>' : 'TINR_ac/FsftTINR_d_EngStrtTypAvbl/FsftTINR_d_EngStrtTypAvblChrt'
 * '<S194>' : 'TINR_ac/FsftTINR_d_TCMFailures/FsftTINR_d_TCMFailuresChrt'
 * '<S195>' : 'TINR_ac/FsftTINR_d_TCMLimphomeFaults/FsftTINR_d_TCMLimphomeFaultsChrt'
 * '<S196>' : 'TINR_ac/FsftTINR_d_TCMLimphomeFaultsC1CAN/FsftTINR_d_TCMLimphomeFaultsC1CANChrt'
 * '<S197>' : 'TINR_ac/FsftTINR_e_ActualGear/FsftTINR_e_ActualGearChrt'
 * '<S198>' : 'TINR_ac/FsftTINR_e_Clch1Sts/FsftTINR_e_Clch1StsChrt'
 * '<S199>' : 'TINR_ac/FsftTINR_e_Clch3Sts/FsftTINR_e_Clch3StsChrt'
 * '<S200>' : 'TINR_ac/FsftTINR_e_ComFailDflt_C1CAN/FsftTINR_e_ComFailDflt_C1CANChrt'
 * '<S201>' : 'TINR_ac/FsftTINR_e_ComFailDflt_ePTCAN/FsftTINR_e_ComFailDflt_ePTCANChrt'
 * '<S202>' : 'TINR_ac/FsftTINR_e_GearShftType/FsftTINR_e_GearShftTypeChrt'
 * '<S203>' : 'TINR_ac/FsftTINR_e_GearShftType2/FsftTINR_e_GearShftType2Chrt'
 * '<S204>' : 'TINR_ac/FsftTINR_e_HASStatusK0/FsftTINR_e_HASStatusK0Chrt'
 * '<S205>' : 'TINR_ac/FsftTINR_e_ILEStat/FsftTINR_e_ILEStatChrt'
 * '<S206>' : 'TINR_ac/FsftTINR_e_K1Status/FsftTINR_e_K1StatusChrt'
 * '<S207>' : 'TINR_ac/FsftTINR_e_MtrBDynFctr/FsftTINR_e_MtrBDynFctrChrt'
 * '<S208>' : 'TINR_ac/FsftTINR_e_P2SpdCntrlReq/FsftTINR_e_P2SpdCntrlReqChrt'
 * '<S209>' : 'TINR_ac/FsftTINR_e_Synchro1Gear/FsftTINR_e_Synchro1GearChrt'
 * '<S210>' : 'TINR_ac/FsftTINR_e_Synchro1Sts/FsftTINR_e_Synchro1StsChrt'
 * '<S211>' : 'TINR_ac/FsftTINR_e_Synchro2Gear/FsftTINR_e_Synchro2GearChrt'
 * '<S212>' : 'TINR_ac/FsftTINR_e_Synchro2Sts/FsftTINR_e_Synchro2StsChrt'
 * '<S213>' : 'TINR_ac/FsftTINR_e_TCMHASActMode/FsftTINR_e_TCMHASActModeChrt'
 * '<S214>' : 'TINR_ac/FsftTINR_e_TCMModeReq/FsftTINR_e_TCMModeReqChrt'
 * '<S215>' : 'TINR_ac/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt'
 * '<S216>' : 'TINR_ac/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt'
 * '<S217>' : 'TINR_ac/FsftTINR_e_TCMStrtStpOvrrd/FsftTINR_e_TCMStrtStpOvrrdChrt'
 * '<S218>' : 'TINR_ac/FsftTINR_e_TCMTCCPreventionID/FsftTINR_e_TCMTCCPreventionIDChrt'
 * '<S219>' : 'TINR_ac/FsftTINR_e_TCMTrqCntrlModeFast/FsftTINR_e_TCMTrqCntrlModeFastChrt'
 * '<S220>' : 'TINR_ac/FsftTINR_e_TCMTrqCntrlModeSlow/FsftTINR_e_TCMTrqCntrlModeSlowChrt'
 * '<S221>' : 'TINR_ac/FsftTINR_e_TCM_ActiveEVGear/FsftTINR_e_TCM_ActiveEVGearChrt'
 * '<S222>' : 'TINR_ac/FsftTINR_e_TCM_ActiveHybridGear/FsftTINR_e_TCM_ActiveHybridGearChrt'
 * '<S223>' : 'TINR_ac/FsftTINR_e_TCM_ActiveXNGear/FsftTINR_e_TCM_ActiveXNGearChrt'
 * '<S224>' : 'TINR_ac/FsftTINR_e_TCM_ClutchStartGear/FsftTINR_e_TCM_ClutchStartGearChrt'
 * '<S225>' : 'TINR_ac/FsftTINR_e_TCM_PassiveHybridGear/FsftTINR_e_TCM_PassiveHybridGearChrt'
 * '<S226>' : 'TINR_ac/FsftTINR_e_TargetGear/FsftTINR_e_TargetGearChrt'
 * '<S227>' : 'TINR_ac/FsftTINR_e_TransAdpStatus/FsftTINR_e_TransAdpStatusChrt'
 * '<S228>' : 'TINR_ac/FsftTINR_i_TCM_DriveProgram/FsftTINR_i_TCM_DriveProgramChrt'
 * '<S229>' : 'TINR_ac/FsftTINR_i_TCM_MaxGearAllwd/FsftTINR_i_TCM_MaxGearAllwdChrt'
 * '<S230>' : 'TINR_ac/FsftTINR_i_TCM_MinGearAllwd/FsftTINR_i_TCM_MinGearAllwdChrt'
 * '<S231>' : 'TINR_ac/FsftTINR_n_DisengageILE/FsftTINR_n_DisengageILEChrt'
 * '<S232>' : 'TINR_ac/FsftTINR_n_NiMinForLockUp/FsftTINR_n_NiMinForLockUpChrt'
 * '<S233>' : 'TINR_ac/FsftTINR_n_NiMinForLockUpCoast/FsftTINR_n_NiMinForLockUpCoastChrt'
 * '<S234>' : 'TINR_ac/FsftTINR_n_NiMinToOpen/FsftTINR_n_NiMinToOpenChrt'
 * '<S235>' : 'TINR_ac/FsftTINR_n_NiMinToOpenCoast/FsftTINR_n_NiMinToOpenCoastChrt'
 * '<S236>' : 'TINR_ac/FsftTINR_r_DriveLineRatioCanC/FsftTINR_r_DriveLineRatioCanCChrt'
 * '<S237>' : 'TINR_ac/FsftTINR_r_DriveLineRatioEpt/FsftTINR_r_DriveLineRatioEptChrt'
 * '<S238>' : 'TINR_ac/FsftTINR_r_MechDrivelineRatio/FsftTINR_r_MechDrivelineRatioChrt'
 * '<S239>' : 'TINR_ac/FsftTINR_r_TCC_TR/FsftTINR_r_TCC_TRChrt'
 * '<S240>' : 'TINR_ac/FsftTINR_r_TCM_HillMode/FsftTINR_r_TCM_HillModeChrt'
 * '<S241>' : 'TINR_ac/FsftTINR_r_TransTrqRatio/FsftTINR_r_TransTrqRatioChrt'
 * '<S242>' : 'TINR_ac/PokeTINR_Cnt_TCM_DriverType/PokeTINR_Cnt_TCM_DriverTypeChrt'
 * '<S243>' : 'TINR_ac/PokeTINR_M_ActualClutch1_TCM/PokeTINR_M_ActualClutch1_TCMChrt'
 * '<S244>' : 'TINR_ac/PokeTINR_M_ActualClutch3_TCM/PokeTINR_M_ActualClutch3_TCMChrt'
 * '<S245>' : 'TINR_ac/PokeTINR_M_ClchTrqA/PokeTINR_M_ClchTrqAChrt'
 * '<S246>' : 'TINR_ac/PokeTINR_M_ClchTrqB/PokeTINR_M_ClchTrqBChrt'
 * '<S247>' : 'TINR_ac/PokeTINR_M_ClchTrqC/PokeTINR_M_ClchTrqCChrt'
 * '<S248>' : 'TINR_ac/PokeTINR_M_ClchTrqD/PokeTINR_M_ClchTrqDChrt'
 * '<S249>' : 'TINR_ac/PokeTINR_M_ClchTrqE/PokeTINR_M_ClchTrqEChrt'
 * '<S250>' : 'TINR_ac/PokeTINR_M_ClchTrqF/PokeTINR_M_ClchTrqFChrt'
 * '<S251>' : 'TINR_ac/PokeTINR_M_DrvLnTrqRq_Axle/PokeTINR_M_DrvLnTrqRq_AxleChrt'
 * '<S252>' : 'TINR_ac/PokeTINR_M_LeadClutch1_TCM/PokeTINR_M_LeadClutch1_TCMChrt'
 * '<S253>' : 'TINR_ac/PokeTINR_M_LeadClutch3_TCM/PokeTINR_M_LeadClutch3_TCMChrt'
 * '<S254>' : 'TINR_ac/PokeTINR_Pct_TransStrssFctr/PokeTINR_Pct_TransStrssFctrChrt'
 * '<S255>' : 'TINR_ac/PokeTINR_b_DrvLnMinTrqMd/PokeTINR_b_DrvLnMinTrqMdChrt'
 * '<S256>' : 'TINR_ac/PokeTINR_b_DsblAEMD4TCM/PokeTINR_b_DsblAEMD4TCMChrt'
 * '<S257>' : 'TINR_ac/PokeTINR_b_ILE_STO_Stat/PokeTINR_b_ILE_STO_StatChrt'
 * '<S258>' : 'TINR_ac/PokeTINR_b_Inhibit_Gear1/PokeTINR_b_Inhibit_Gear1Chrt'
 * '<S259>' : 'TINR_ac/PokeTINR_b_Inhibit_Gear2/PokeTINR_b_Inhibit_Gear2Chrt'
 * '<S260>' : 'TINR_ac/PokeTINR_b_Inhibit_Gear3/PokeTINR_b_Inhibit_Gear3Chrt'
 * '<S261>' : 'TINR_ac/PokeTINR_b_Inhibit_Gear4/PokeTINR_b_Inhibit_Gear4Chrt'
 * '<S262>' : 'TINR_ac/PokeTINR_b_Inhibit_Mode1/PokeTINR_b_Inhibit_Mode1Chrt'
 * '<S263>' : 'TINR_ac/PokeTINR_b_Inhibit_Mode2/PokeTINR_b_Inhibit_Mode2Chrt'
 * '<S264>' : 'TINR_ac/PokeTINR_b_Inhibit_Neutral/PokeTINR_b_Inhibit_NeutralChrt'
 * '<S265>' : 'TINR_ac/PokeTINR_b_KGB/PokeTINR_b_KGBChrt'
 * '<S266>' : 'TINR_ac/PokeTINR_b_KOB/PokeTINR_b_KOBChrt'
 * '<S267>' : 'TINR_ac/PokeTINR_b_KSB/PokeTINR_b_KSBChrt'
 * '<S268>' : 'TINR_ac/PokeTINR_b_PwrFlowStatus/PokeTINR_b_PwrFlowStatusChrt'
 * '<S269>' : 'TINR_ac/PokeTINR_b_TCMSpdCtrlCapable/PokeTINR_b_TCMSpdCtrlCapableChrt'
 * '<S270>' : 'TINR_ac/PokeTINR_b_TCMTransReqFuelON/PokeTINR_b_TCMTransReqFuelONChrt'
 * '<S271>' : 'TINR_ac/PokeTINR_b_TCM_ASCReq/PokeTINR_b_TCM_ASCReqChrt'
 * '<S272>' : 'TINR_ac/PokeTINR_d_EngStrtTypAvbl/PokeTINR_d_EngStrtTypAvblChrt'
 * '<S273>' : 'TINR_ac/PokeTINR_d_TCMFailures/PokeTINR_d_TCMFailuresChrt'
 * '<S274>' : 'TINR_ac/PokeTINR_d_TCMLimphomeFaults/PokeTINR_d_TCMLimphomeFaultsChrt'
 * '<S275>' : 'TINR_ac/PokeTINR_d_TCMLimphomeFaultsC1CAN/PokeTINR_d_TCMLimphomeFaultsC1CANChrt'
 * '<S276>' : 'TINR_ac/PokeTINR_e_ActualGear/KaTINR_e_TCMGearStat'
 * '<S277>' : 'TINR_ac/PokeTINR_e_ActualGear/PokeTINR_e_ActualGearChrt'
 * '<S278>' : 'TINR_ac/PokeTINR_e_Clch1Sts/PokeTINR_e_Clch1StsChrt'
 * '<S279>' : 'TINR_ac/PokeTINR_e_Clch3Sts/PokeTINR_e_Clch3StsChrt'
 * '<S280>' : 'TINR_ac/PokeTINR_e_ComFail_C1CAN/KaTINR_e_TCMComFail_C1'
 * '<S281>' : 'TINR_ac/PokeTINR_e_ComFail_C1CAN/PokeTINR_e_ComFail_C1CANChrt'
 * '<S282>' : 'TINR_ac/PokeTINR_e_ComFail_ePTCAN/KaTINR_e_TCMComFail_ePT'
 * '<S283>' : 'TINR_ac/PokeTINR_e_ComFail_ePTCAN/PokeTINR_e_ComFail_ePTCANChrt'
 * '<S284>' : 'TINR_ac/PokeTINR_e_GearShftType/HaTINR_e_TCMShftType'
 * '<S285>' : 'TINR_ac/PokeTINR_e_GearShftType/PokeTINR_e_GearShftTypeChrt'
 * '<S286>' : 'TINR_ac/PokeTINR_e_GearShftType2/HaTINR_e_TCMShftType2'
 * '<S287>' : 'TINR_ac/PokeTINR_e_GearShftType2/PokeTINR_e_GearShftType2Chrt'
 * '<S288>' : 'TINR_ac/PokeTINR_e_HASStatusK0/KaTINR_e_HASK0Stat'
 * '<S289>' : 'TINR_ac/PokeTINR_e_HASStatusK0/PokeTINR_e_HASStatusK0Chrt'
 * '<S290>' : 'TINR_ac/PokeTINR_e_ILEStat/KaTINR_e_TCM_ILEStat'
 * '<S291>' : 'TINR_ac/PokeTINR_e_ILEStat/PokeTINR_e_ILEStatChrt'
 * '<S292>' : 'TINR_ac/PokeTINR_e_K1Status/KaTINR_e_K1Status'
 * '<S293>' : 'TINR_ac/PokeTINR_e_K1Status/PokeTINR_e_K1StatusChrt'
 * '<S294>' : 'TINR_ac/PokeTINR_e_MtrBDynFctr/PokeTINR_e_MtrBDynFctrChrt'
 * '<S295>' : 'TINR_ac/PokeTINR_e_P2SpdCntrlReq/PokeTINR_e_P2SpdCntrlReqChrt'
 * '<S296>' : 'TINR_ac/PokeTINR_e_Synchro1Gear/HaTINR_e_Synchro1Gear'
 * '<S297>' : 'TINR_ac/PokeTINR_e_Synchro1Gear/PokeTINR_e_Synchro1GearChrt'
 * '<S298>' : 'TINR_ac/PokeTINR_e_Synchro1Sts/KaTINR_e_Synchro1Sts'
 * '<S299>' : 'TINR_ac/PokeTINR_e_Synchro1Sts/PokeTINR_e_Synchro1StsChrt'
 * '<S300>' : 'TINR_ac/PokeTINR_e_Synchro2Gear/HaTINR_e_Synchro2Gear'
 * '<S301>' : 'TINR_ac/PokeTINR_e_Synchro2Gear/PokeTINR_e_Synchro2GearChrt'
 * '<S302>' : 'TINR_ac/PokeTINR_e_Synchro2Sts/KaTINR_e_Synchro2Sts'
 * '<S303>' : 'TINR_ac/PokeTINR_e_Synchro2Sts/PokeTINR_e_Synchro2StsChrt'
 * '<S304>' : 'TINR_ac/PokeTINR_e_TCMHASActMode/KaTINR_e_TCMHASActMode'
 * '<S305>' : 'TINR_ac/PokeTINR_e_TCMHASActMode/PokeTINR_e_TCMHASActModeChrt'
 * '<S306>' : 'TINR_ac/PokeTINR_e_TCMModeReq/KaTINR_e_TCMModeReq'
 * '<S307>' : 'TINR_ac/PokeTINR_e_TCMModeReq/PokeTINR_e_TCMModeReqChrt'
 * '<S308>' : 'TINR_ac/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC/HaTINR_e_TCMNeutPhsZeroTrqReq_CANC'
 * '<S309>' : 'TINR_ac/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt'
 * '<S310>' : 'TINR_ac/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/HaTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN'
 * '<S311>' : 'TINR_ac/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt'
 * '<S312>' : 'TINR_ac/PokeTINR_e_TCMStrtStpOvrrd/KaTINR_e_TCMStrtStpOvrrd'
 * '<S313>' : 'TINR_ac/PokeTINR_e_TCMStrtStpOvrrd/PokeTINR_e_TCMStrtStpOvrrdChrt'
 * '<S314>' : 'TINR_ac/PokeTINR_e_TCMTCCPreventionID/PokeTINR_e_TCMTCCPreventionIDChrt'
 * '<S315>' : 'TINR_ac/PokeTINR_e_TCMTrqCntrlModeFast/KaTINR_e_TCM_TrqCntrlMdReq'
 * '<S316>' : 'TINR_ac/PokeTINR_e_TCMTrqCntrlModeFast/PokeTINR_e_TCMTrqCntrlModeFastChrt'
 * '<S317>' : 'TINR_ac/PokeTINR_e_TCMTrqCntrlModeSlow/KaTINR_e_TCM_TrqCntrlMdReq'
 * '<S318>' : 'TINR_ac/PokeTINR_e_TCMTrqCntrlModeSlow/PokeTINR_e_TCMTrqCntrlModeSlowChrt'
 * '<S319>' : 'TINR_ac/PokeTINR_e_TCM_ActiveEVGear/HaTINR_e_TCM_ActiveEVGear'
 * '<S320>' : 'TINR_ac/PokeTINR_e_TCM_ActiveEVGear/PokeTINR_e_TCM_ActiveEVGearChrt'
 * '<S321>' : 'TINR_ac/PokeTINR_e_TCM_ActiveHybridGear/HaTINR_e_TCM_ActiveHybridGear'
 * '<S322>' : 'TINR_ac/PokeTINR_e_TCM_ActiveHybridGear/PokeTINR_e_TCM_ActiveHybridGearChrt'
 * '<S323>' : 'TINR_ac/PokeTINR_e_TCM_ActiveXNGear/HaTINR_e_TCM_ActiveXNGear'
 * '<S324>' : 'TINR_ac/PokeTINR_e_TCM_ActiveXNGear/PokeTINR_e_TCM_ActiveXNGearChrt'
 * '<S325>' : 'TINR_ac/PokeTINR_e_TCM_ClutchStartGear/HaTINR_e_TCM_ClutchStartGear'
 * '<S326>' : 'TINR_ac/PokeTINR_e_TCM_ClutchStartGear/PokeTINR_e_TCM_ClutchStartGearChrt'
 * '<S327>' : 'TINR_ac/PokeTINR_e_TCM_PassiveHybridGear/HaTINR_e_TCM_PassiveHybridGear'
 * '<S328>' : 'TINR_ac/PokeTINR_e_TCM_PassiveHybridGear/PokeTINR_e_TCM_PassiveHybridGearChrt'
 * '<S329>' : 'TINR_ac/PokeTINR_e_TargetGear/KaTINR_e_TCMGearStat'
 * '<S330>' : 'TINR_ac/PokeTINR_e_TargetGear/PokeTINR_e_TargetGearChrt'
 * '<S331>' : 'TINR_ac/PokeTINR_e_TransAdpStatus/KaTINR_e_TransAdpStat'
 * '<S332>' : 'TINR_ac/PokeTINR_e_TransAdpStatus/PokeTINR_e_TransAdpStatusChrt'
 * '<S333>' : 'TINR_ac/PokeTINR_i_TCM_DriveProgram/PokeTINR_i_TCM_DriveProgramChrt'
 * '<S334>' : 'TINR_ac/PokeTINR_i_TCM_MaxGearAllwd/KaTINR_i_TCM_MaxGrAllwd'
 * '<S335>' : 'TINR_ac/PokeTINR_i_TCM_MaxGearAllwd/PokeTINR_i_TCM_MaxGearAllwdChrt'
 * '<S336>' : 'TINR_ac/PokeTINR_i_TCM_MinGearAllwd/KaTINR_i_TCM_MinGrAllwd'
 * '<S337>' : 'TINR_ac/PokeTINR_i_TCM_MinGearAllwd/PokeTINR_i_TCM_MinGearAllwdChrt'
 * '<S338>' : 'TINR_ac/PokeTINR_n_DisengageILE/PokeTINR_n_DisengageILEChrt'
 * '<S339>' : 'TINR_ac/PokeTINR_n_NiMinForLockUp/KeTINR_i_ValFramCnter'
 * '<S340>' : 'TINR_ac/PokeTINR_n_NiMinForLockUp/PokeTINR_n_NiMinForLockUpChrt'
 * '<S341>' : 'TINR_ac/PokeTINR_n_NiMinForLockUpCoast/KeTINR_i_ValFramCnter'
 * '<S342>' : 'TINR_ac/PokeTINR_n_NiMinForLockUpCoast/PokeTINR_n_NiMinForLockUpCoastChrt'
 * '<S343>' : 'TINR_ac/PokeTINR_n_NiMinToOpen/KeTINR_i_ValFramCnter'
 * '<S344>' : 'TINR_ac/PokeTINR_n_NiMinToOpen/PokeTINR_n_NiMinToOpenChrt'
 * '<S345>' : 'TINR_ac/PokeTINR_n_NiMinToOpenCoast/KeTINR_i_ValFramCnter'
 * '<S346>' : 'TINR_ac/PokeTINR_n_NiMinToOpenCoast/PokeTINR_n_NiMinToOpenCoastChrt'
 * '<S347>' : 'TINR_ac/PokeTINR_r_DriveLineRatioCanC/PokeTINR_r_DriveLineRatioCanCChrt'
 * '<S348>' : 'TINR_ac/PokeTINR_r_DriveLineRatioEpt/PokeTINR_r_DriveLineRatioEptChrt'
 * '<S349>' : 'TINR_ac/PokeTINR_r_MechDrivelineRatio/PokeTINR_r_MechDrivelineRatioChrt'
 * '<S350>' : 'TINR_ac/PokeTINR_r_TCC_TR/PokeTINR_r_TCC_TRChrt'
 * '<S351>' : 'TINR_ac/PokeTINR_r_TCM_HillMode/PokeTINR_r_TCM_HillModeChrt'
 * '<S352>' : 'TINR_ac/PokeTINR_r_TransTrqRatio/PokeTINR_r_TransTrqRatioChrt'
 * '<S353>' : 'TINR_ac/PokeTINR_t_TCM_TimeToSpeedChange/PokeTINR_t_TCM_TimeToSpeedChangeChrt'
 * '<S354>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB'
 * '<S355>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input'
 * '<S356>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var'
 * '<S357>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/DocBlock'
 * '<S358>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/EnumSetBlock'
 * '<S359>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_DrvLnTrqReqChecks'
 * '<S360>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode'
 * '<S361>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear'
 * '<S362>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin'
 * '<S363>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_PwrFlwSt_Ovrd'
 * '<S364>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_TCMLimphome'
 * '<S365>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_TransRatio'
 * '<S366>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_DrvLnTrqReqChecks/HeTINR_t_MedTEB'
 * '<S367>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_DrvLnTrqReqChecks/KeTINR_M_DrvLnTrqRq_Axle_Max'
 * '<S368>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_DrvLnTrqReqChecks/KeTINR_M_DrvLnTrqRq_Axle_Min'
 * '<S369>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_DrvLnTrqReqChecks/KeTINR_t_DrvLnTrqRq_Axle_OOR_Tmr'
 * '<S370>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_DrvLnTrqReqChecks/TimerRetriggerResetEnabled'
 * '<S371>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/DigitalLowpassResetEnabled2'
 * '<S372>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/EdgeFalling'
 * '<S373>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/KeTINR_b_InternalHillModeSlct'
 * '<S374>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/KeTINR_k_EstSlopeAngMax'
 * '<S375>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/KeTINR_k_EstSlopeAngMin'
 * '<S376>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/KeTINR_k_EstSlopeAng_Flt'
 * '<S377>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/KeTINR_r_DfltHillMode'
 * '<S378>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/TINC_HillMdMap'
 * '<S379>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/DigitalLowpassResetEnabled2/Limiter'
 * '<S380>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_HillMode/TINC_HillMdMap/KtTINR_r_HillMd'
 * '<S381>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/KaTINR_i_ActGrMinGrMap'
 * '<S382>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/KaTINR_i_TgtGrMaxGrMap'
 * '<S383>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/KeTINR_i_GearMaxAvl'
 * '<S384>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/KeTINR_i_GearMinAvl'
 * '<S385>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/KeTINR_i_TCM_MaxGearAllwdInit'
 * '<S386>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/KeTINR_i_TCM_MinGearAllwdInit'
 * '<S387>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/Limiter'
 * '<S388>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/Limiter1'
 * '<S389>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/MaxGearFA'
 * '<S390>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/MaxMinGearFA'
 * '<S391>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/MinGearFA'
 * '<S392>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/MinMaxGearFA'
 * '<S393>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/PassThrough'
 * '<S394>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_MinMaxGear/PassThrough2'
 * '<S395>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/EdgeRising'
 * '<S396>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear'
 * '<S397>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Init_SNA'
 * '<S398>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KaTINR_n_ILELockUpOpenOffset'
 * '<S399>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KaTINR_n_ILEOpenIdleOffset'
 * '<S400>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KaTINR_n_NiMinForLockUp'
 * '<S401>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KaTINR_n_NiMinForLockUp_Coast'
 * '<S402>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KaTINR_n_NiMinToOpen'
 * '<S403>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KaTINR_n_NiMinToOpen_Coast'
 * '<S404>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KeTINR_b_OvrdNiMinForLockUp'
 * '<S405>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KeTINR_b_OvrdNiMinForLockUp_Coast'
 * '<S406>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KeTINR_b_OvrdNiMinToOpen'
 * '<S407>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/KeTINR_b_OvrdNiMinToOpen_Coast'
 * '<S408>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/KaTINR_b_DsblTCMNiMinForLockUp'
 * '<S409>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/KaTINR_b_DsblTCMNiMinForLockUp_Coast'
 * '<S410>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/KaTINR_b_DsblTCMNiMinToOpen'
 * '<S411>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/KaTINR_b_DsblTCMNiMinToOpen_Coast'
 * '<S412>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_ForLckUpCoast'
 * '<S413>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_ForLockUp'
 * '<S414>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_NiMin_ToOpen'
 * '<S415>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_ToOpnCoast'
 * '<S416>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_ForLckUpCoast/IfThenElse'
 * '<S417>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_ForLockUp/IfThenElse'
 * '<S418>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_NiMin_ToOpen/IfThenElse'
 * '<S419>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Gear/TINC_ToOpnCoast/IfThenElse'
 * '<S420>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Init_SNA/CounterResetEnabled'
 * '<S421>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Init_SNA/KeTINR_Cnt_InitCompVal'
 * '<S422>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_NiMin/Init_SNA/KeTINR_b_EnableInitCompVal'
 * '<S423>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_PwrFlwSt_Ovrd/KaTINR_b_PwrFlowStClchLrnType'
 * '<S424>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_PwrFlwSt_Ovrd/KaTINR_b_PwrFlowStTransAdpSts'
 * '<S425>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_PwrFlwSt_Ovrd/KeTINR_b_PwrFlowStatusOvrrdEnbl'
 * '<S426>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_PwrFlwSt_Ovrd/KeTINR_b_PwrFlowStatusOvrrdVal'
 * '<S427>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_PwrFlwSt_Ovrd/KeTINR_b_SlctClchLrn_TransAdp'
 * '<S428>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_TransRatio/HeTINR_b_TCMTransTrqRatioMgu'
 * '<S429>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_TransRatio/HeTINR_r_TCMTransTrqRatioMax'
 * '<S430>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_TransRatio/HeTINR_r_TCMTransTrqRatioMin'
 * '<S431>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_TransRatio/KeTINR_b_UseTransTrqRatio'
 * '<S432>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Cntrls_Input/TINC_TransRatio/Limiter'
 * '<S433>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/BooleanSetBlock'
 * '<S434>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/BooleanSetBlock1'
 * '<S435>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/EnumSetBlock'
 * '<S436>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/EnumSetBlock2'
 * '<S437>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/EnumSetBlock3'
 * '<S438>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/EnumSetBlock4'
 * '<S439>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/Enumerated_Constant'
 * '<S440>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/HeTINR_d_TCMMechD6'
 * '<S441>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/KeTINR_b_TCMLimphomeFaultsOvrrdEnbl'
 * '<S442>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/KeTINR_b_TCMNeutPhsZeroTrqReqCANSlct'
 * '<S443>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/KeTINR_d_TCMLimphomeFaultsOvrrdVal'
 * '<S444>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/SetBlock'
 * '<S445>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/SetBlock2'
 * '<S446>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/SetBlock3'
 * '<S447>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/SetBlock7'
 * '<S448>' : 'TINR_ac/TINR_MedTEB/TINC_MedTEB/TINC_Internal_Var/SetBlock8'
 * '<S449>' : 'TINR_ac/TINR_MedTED/TINC_MedTED'
 * '<S450>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA'
 * '<S451>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs'
 * '<S452>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA/DigitalLowpassResetEnabled'
 * '<S453>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA/DigitalLowpassResetEnabled1'
 * '<S454>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA/DigitalLowpassResetEnabled2'
 * '<S455>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA/DigitalLowpassResetEnabled3'
 * '<S456>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA/DigitalLowpassResetEnabled4'
 * '<S457>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA/DigitalLowpassResetEnabled5'
 * '<S458>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Clutch_Torque_FA/KaTINR_k_ClchTrqFiltCnst'
 * '<S459>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/DocBlock1'
 * '<S460>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/EnumSetBlock'
 * '<S461>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/EnumSetBlock1'
 * '<S462>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_M_ClchTorqOvrdVal_DCT'
 * '<S463>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_M_ClchTrqOvrdVal'
 * '<S464>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_b_ClchStFAOvrdEnbl_DCT'
 * '<S465>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_b_ClchStFAOvrdVal_DCT'
 * '<S466>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_b_ClchStOvrdEnbl_DCT'
 * '<S467>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_b_ClchTorqFAOvrdVal_DCT'
 * '<S468>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_b_ClchTrqFAOvrdEnbl'
 * '<S469>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_b_ClchTrqFAOvrdVal'
 * '<S470>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_b_ClchTrqOvrdEnbl'
 * '<S471>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KaTINR_e_ClchStOvrdVal_DCT'
 * '<S472>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_ActualClch1TrqFAOvrdEnbl'
 * '<S473>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_ActualClch1TrqOvrdEnbl'
 * '<S474>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_ActualClch3TrqFAOvrdEnbl'
 * '<S475>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_ActualClch3TrqOvrdEnbl'
 * '<S476>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_LeadClch1TrqFAOvrdEnbl'
 * '<S477>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_LeadClch1TrqOvrdEnbl'
 * '<S478>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_LeadClch3TrqFAOvrdEnbl'
 * '<S479>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_LeadClch3TrqOvrdEnbl'
 * '<S480>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_MtrBDynFctrOvrdEnbl'
 * '<S481>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_b_TCM_TCCPreventionIDOvrrdEnbl'
 * '<S482>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_e_MtrBDynFctrOvrdVal'
 * '<S483>' : 'TINR_ac/TINR_MedTED/TINC_MedTED/TINC_Ovrd_Inputs/KeTINR_e_TCM_TCCPreventionIDOvrrdVal'
 * '<S484>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs'
 * '<S485>' : 'TINR_ac/TINR_PwrOn/TINO_Init'
 * '<S486>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/CeHCCR_e_ClActuated10'
 * '<S487>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/CeHCCR_e_ClActuated5'
 * '<S488>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/CeHCCR_e_ClActuated6'
 * '<S489>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/CeHCCR_e_ClActuated7'
 * '<S490>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/CeHCCR_e_ClActuated8'
 * '<S491>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/CeHCCR_e_ClActuated9'
 * '<S492>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/DocBlock'
 * '<S493>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/DocBlock1'
 * '<S494>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/HeTINR_b_GearShftType2InitFA'
 * '<S495>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/HeTINR_b_GearShftTypeInitFA'
 * '<S496>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/HeTINR_e_GearShftType2Init'
 * '<S497>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/HeTINR_e_GearShftTypeInit'
 * '<S498>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_M_ClchTorqInitVal_DCT'
 * '<S499>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_M_ClchTrqInit'
 * '<S500>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_b_ClchStFAInit_DCT'
 * '<S501>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_b_ClchTorqFAInit_DCT'
 * '<S502>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_b_ClchTrqFAInit'
 * '<S503>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_e_ClchStInit_DCT'
 * '<S504>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_n_NiMinForLockUpCoastInit'
 * '<S505>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_n_NiMinForLockUpInit'
 * '<S506>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_n_NiMinToOpenCoastInit'
 * '<S507>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KaTINR_n_NiMinToOpenInit'
 * '<S508>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_Cnt_TCM_DriverTypeInit'
 * '<S509>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_M_DrvLnTrqRq_Axle_Init'
 * '<S510>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_Pct_TransStrssFctrInit'
 * '<S511>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_ActualGearInitFA'
 * '<S512>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_DrvLnMinTrqMd_Init'
 * '<S513>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_HASStatusK0InitFA'
 * '<S514>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_ILEStatInitFA'
 * '<S515>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_ILE_STO_StatInit'
 * '<S516>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_Inhibit_Gear1Init'
 * '<S517>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_Inhibit_Gear2Init'
 * '<S518>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_Inhibit_Gear3Init'
 * '<S519>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_Inhibit_Gear4Init'
 * '<S520>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_Inhibit_Mode1Init'
 * '<S521>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_Inhibit_Mode2Init'
 * '<S522>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_Inhibit_NeutralInit'
 * '<S523>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_K1StatusInitFA'
 * '<S524>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_KGBInit'
 * '<S525>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_KOBInit'
 * '<S526>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_KSBInit'
 * '<S527>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_NiMinForLockUpInitCoastFA'
 * '<S528>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_NiMinForLockUpInitFA'
 * '<S529>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_NiMinToOpenCoastInitFA'
 * '<S530>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_NiMinToOpenInitFA'
 * '<S531>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_PwrFlowStatusInit'
 * '<S532>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCMHASActModeInitFA'
 * '<S533>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCMLimphomeFaultsInitFA'
 * '<S534>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCMModeReqInitFA'
 * '<S535>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCMSpdCtrlCapableInit'
 * '<S536>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCMTransReqFuelONInit'
 * '<S537>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCMTransReqFuelONInitFA'
 * '<S538>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCM_ClutchStartGearInitFA'
 * '<S539>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCM_DriveProgramInitFA'
 * '<S540>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCM_DriverTypeInitFA'
 * '<S541>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCM_HillModeInitFA'
 * '<S542>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCM_MaxGearAllwdInitFA'
 * '<S543>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCM_MinGearAllwdInitFA'
 * '<S544>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TCM_TCCPreventionIDInitFA'
 * '<S545>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TargetGearInitFA'
 * '<S546>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TransTrqRatioInitFA'
 * '<S547>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TrqCntrlMdFstInitFA'
 * '<S548>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_b_TrqCntrlMdSlwInitFA'
 * '<S549>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_d_TCMFailures_Init'
 * '<S550>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_d_TCMLimphomeFaultsInit'
 * '<S551>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_ActualGearInit'
 * '<S552>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_ComFailInit_C1CAN'
 * '<S553>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_ComFailInit_ePTCAN'
 * '<S554>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_HASStatusK0Init'
 * '<S555>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_ILEStatInit'
 * '<S556>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_K1StatusInit'
 * '<S557>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_MtrBDynFctrDflt'
 * '<S558>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_Synchro1StsInit'
 * '<S559>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_Synchro2StsInit'
 * '<S560>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCMHASActModeInit'
 * '<S561>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCMModeReqInit'
 * '<S562>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCMStrtStpOvrrd_Init'
 * '<S563>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCM_ActiveEVGearInit'
 * '<S564>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCM_ActiveHybridGearInit'
 * '<S565>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCM_ActiveXNGearInit'
 * '<S566>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCM_ClutchStartGearInit'
 * '<S567>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCM_PassiveHybridGearInit'
 * '<S568>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TCM_TCCPreventionIDInit'
 * '<S569>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TargetGearInit'
 * '<S570>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TrqCntrlMdFstInit'
 * '<S571>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_e_TrqCntrlMdSlwInit'
 * '<S572>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_i_TCM_DriveProgramInit'
 * '<S573>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_i_TCM_MaxGearAllwdInit'
 * '<S574>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_i_TCM_MinGearAllwdInit'
 * '<S575>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_n_DisengageILE_Init'
 * '<S576>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_r_DriveLineRatioInit'
 * '<S577>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_r_MechDrivelineRatioInit'
 * '<S578>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_r_TCC_TRInit'
 * '<S579>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_r_TCM_HillModeInit'
 * '<S580>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_r_TransTrqRatioInit'
 * '<S581>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/KeTINR_t_TCM_TimeToSpeedChange'
 * '<S582>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/SetBlock'
 * '<S583>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/SetBlock1'
 * '<S584>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/SetBlock2'
 * '<S585>' : 'TINR_ac/TINR_PwrOn/TINI_Init_Inputs/SetBlock3'
 * '<S586>' : 'TINR_ac/TINR_PwrOn/TINO_Init/CeHCCR_e_ClActuated5'
 * '<S587>' : 'TINR_ac/TINR_PwrOn/TINO_Init/CeHCCR_e_ClActuated6'
 * '<S588>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_M_ClchTorqInitVal_DCT'
 * '<S589>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_M_ClchTrqInit'
 * '<S590>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_b_ClchTrqFAInit'
 * '<S591>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_e_ClchStInit_DCT'
 * '<S592>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_n_NiMinForLockUpCoastInit'
 * '<S593>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_n_NiMinForLockUpInit'
 * '<S594>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_n_NiMinToOpenCoastInit'
 * '<S595>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KaTINR_n_NiMinToOpenInit'
 * '<S596>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_b_DrvLnMinTrqMd_Init'
 * '<S597>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_b_PwrFlowStatusInit'
 * '<S598>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_b_TCMLimphomeFaultsInitFA'
 * '<S599>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_d_TCMFailures_Init'
 * '<S600>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_d_TCMLimphomeFaultsInit'
 * '<S601>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_e_MtrBDynFctrDflt'
 * '<S602>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_e_TCM_TCCPreventionIDInit'
 * '<S603>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_i_TCM_MaxGearAllwdInit'
 * '<S604>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_i_TCM_MinGearAllwdInit'
 * '<S605>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_r_TCM_HillModeInit'
 * '<S606>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_r_TransTrqRatioInit'
 * '<S607>' : 'TINR_ac/TINR_PwrOn/TINO_Init/KeTINR_t_TCM_TimeToSpeedChange'
 */
#endif                                 /* RTW_HEADER_TINR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
