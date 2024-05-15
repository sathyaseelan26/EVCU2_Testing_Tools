/*
 * File: ADCR_ac.h
 *
 * Code generated for Simulink model 'ADCR_ac'.
 *
 * Model version                  : 9.324
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:04:06 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ADCR_ac_h_
#define RTW_HEADER_ADCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef ADCR_ac_COMMON_INCLUDES_
#define ADCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ADCR.h"
#endif                                 /* ADCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S238>/OPTL_1DAxis34ptsA' */
typedef struct
{
    float32 UpperIndex;                /* '<S256>/X_Data_and_Fractions' */
    float32 LowerIndex;                /* '<S256>/X_Data_and_Fractions' */
    float32 fra;                       /* '<S256>/X_Data_and_Fractions' */
}
B_OPTL_1DAxis34ptsA_ADCR_ac_T;

/* Block signals for system '<S238>/OPTL_Dynamic1D_A1_Pts' */
typedef struct
{
    float32 Selector3;                 /* '<S257>/Selector3' */
    float32 Selector4;                 /* '<S257>/Selector4' */
}
B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_ADCR_ac_T
{
    float32 OutportBufferForVeADCR_M_WEDMtrCLMax_Out;/* '<S837>/SCALAR_BLK2' */
    float32 OutportBufferForVeADCR_M_WEDMtrCLMin_Out;/* '<S837>/SCALAR_BLK3' */
    float32 OutportBufferForVeADCR_n_AWDNxTgt_Out_In;/* '<S837>/Constant Value4' */
    float32 OutportBufferForVeADCR_dn_AWDNxTgtDot_Ou;/* '<S837>/Constant Value5' */
    float32 OutportBufferForVeADCR_M_AWDMaxClchCap_O;/* '<S837>/Constant Value6' */
    float32 OutportBufferForVeADCR_M_AWDLeadClchCap_;/* '<S837>/Constant Value7' */
    float32 OutportBufferForVeADCR_k_AWDNxProfFilt_O;/* '<S837>/Constant Value9' */
    float32 OutportBufferForVeADCR_M_AWDClchEst_Out_;/* '<S837>/Constant Value10' */
    float32 OutportBufferForVeADCR_m_AWDThruTorq_IRV;/* '<S837>/Constant Value14' */
    float32 OutportBufferForVeADCC_n_NxAct_Out_IRV_I;/* '<S837>/Constant Value15' */
    float32 OutportBufferForVeADCC_dn_NxDotAct_Out_I;/* '<S837>/Constant Value16' */
    float32 OutportBufferForVeADCR_P_PwrRsrv4EngmtRa;/* '<S837>/Constant Value17' */
    float32 OutportBufferForVeADCR_P_PwrRsrv4Engmt;/* '<S837>/Constant Value18' */
    float32 OutportBufferForVeADCR_P_PwrRsrv4EngmtLe;/* '<S837>/Constant Value19' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 TmpSignalConversionAtVeVSDR_n_PrimNoSgnd;/* '<S4>/VeVSDR_n_PrimNoSgndFltrd' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_n_AWDNxTgt_Out__b;/* '<S321>/Constant Value4' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_dn_AWDNxTgtDot__h;/* '<S321>/Constant Value5' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_M_AWDMaxClchCap_a;/* '<S321>/Constant Value6' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_M_AWDLeadClchCa_l;/* '<S321>/Constant Value7' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_k_AWDNxProfFilt_e;/* '<S321>/Constant Value9' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_M_AWDClchEst_Ou_k;/* '<S321>/Constant Value10' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 DataStoreRead;             /* '<S317>/Data Store Read' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 DataStoreRead1;            /* '<S317>/Data Store Read1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 DataStoreRead3;            /* '<S317>/Data Store Read3' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 DataStoreRead4;            /* '<S317>/Data Store Read4' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 DataStoreRead6;            /* '<S317>/Data Store Read6' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 DataStoreRead7;            /* '<S317>/Data Store Read7' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Merge;                     /* '<S714>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Merge1;                    /* '<S714>/Merge1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_P_PwrRsrv4Engmt_a;/* '<S201>/Constant Value17' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_P_PwrRsrv4Engmt_b;/* '<S201>/Constant Value18' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_P_PwrRsrv4Engmt_g;/* '<S201>/Constant Value19' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 MinMax1;                   /* '<S204>/MinMax1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Gain;                      /* '<S216>/Gain' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Gain_o;                    /* '<S217>/Gain' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_M_WEDMtrCLMax_O_g;/* '<S11>/SCALAR_BLK2' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_M_WEDMtrCLMin_O_j;/* '<S11>/SCALAR_BLK3' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCR_m_AWDThruTorq_I_h;/* '<S11>/Constant Value14' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCC_n_NxAct_Out_IRV_l;/* '<S11>/Constant Value15' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 OutportBufferForVeADCC_dn_NxDotAct_Out_n;/* '<S11>/Constant Value16' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Merge_b;                   /* '<S7>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Merge1_g;                  /* '<S7>/Merge1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 ICSR_M_NxCL;               /* '<S69>/ICSR_M_NxCL' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 LeADCC_t_WEDOpngWgglTmr;   /* '<S145>/ADCC_WEDStatCmndMgr' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 LeADCC_t_WEDOpngWgglTmr_k; /* '<S144>/ADCC_WEDStatCmndMgr' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Merge_j;                   /* '<S136>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Gain_j;                    /* '<S134>/Gain' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Merge2;                    /* '<S136>/Merge2' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Gain_n;                    /* '<S135>/Gain' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 Merge1_n;                  /* '<S136>/Merge1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    uint8 OutportBufferForVeADCR_Cnt_LftWEDClsngAt;/* '<S837>/Constant Value' */
    uint8 OutportBufferForVeADCR_Cnt_LftWEDOpngAtt;/* '<S837>/Constant Value1' */
    uint8 OutportBufferForVeADCR_Cnt_RtWEDClsngAtt;/* '<S837>/Constant Value2' */
    uint8 OutportBufferForVeADCR_Cnt_RtWEDOpngAtte;/* '<S837>/Constant Value3' */
    uint8 OutportBufferForVeADCR_i_WEDCmndArbPrioL;/* '<S837>/Constant Value20' */

#if !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    uint8 OutportBufferForVeADCR_i_WEDCmndArbPri_n;/* '<S778>/Constant' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 Switch1;                     /* '<S777>/Switch1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    uint8 Selector_k;                  /* '<S321>/Selector' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 Selector_p;                  /* '<S317>/Selector' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    uint8 OutportBufferForVeADCR_Cnt_LftWEDClsng_g;/* '<S11>/Constant Value' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    uint8 OutportBufferForVeADCR_Cnt_LftWEDOpngA_n;/* '<S11>/Constant Value1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    uint8 OutportBufferForVeADCR_Cnt_RtWEDClsngA_i;/* '<S11>/Constant Value2' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    uint8 OutportBufferForVeADCR_Cnt_RtWEDOpngAt_e;/* '<S11>/Constant Value3' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 LeADCC_i_WEDClsngAttempts;   /* '<S145>/ADCC_WEDStatCmndMgr' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 LeADCC_i_WEDOpngAttempts;    /* '<S145>/ADCC_WEDStatCmndMgr' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 LeADCC_i_WEDClsngAttempts_g; /* '<S144>/ADCC_WEDStatCmndMgr' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 LeADCC_i_WEDOpngAttempts_d;  /* '<S144>/ADCC_WEDStatCmndMgr' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeADCR_b_UseLckedEqn_Out;/* '<S837>/Constant Value8' */
    boolean OutportBufferForVeADCC_b_AWDClchLocked_I;/* '<S837>/Constant Value11' */
    boolean OutportBufferForVeADCR_b_ADCOfldCnfm_Out;/* '<S837>/Constant Value12' */
    boolean OutportBufferForVeADCR_b_EnblWggl_Out_In;/* '<S837>/Constant Value13' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    boolean OutportBufferForVeADCR_b_UseLckedEqn_O_g;/* '<S321>/Constant Value8' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    boolean OutportBufferForVeADCR_b_ADCOfldCnfm_O_c;/* '<S321>/Constant Value12' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean DataStoreRead5;            /* '<S317>/Data Store Read5' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean DataStoreRead8;            /* '<S317>/Data Store Read8' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    boolean OutportBufferForVeADCC_b_AWDClchLocked_h;/* '<S11>/Constant Value11' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    boolean OutportBufferForVeADCR_b_EnblWggl_Out__l;/* '<S11>/Constant Value13' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean LogicalOperator_l;         /* '<S10>/Logical Operator' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean LogicalOperator_d;         /* '<S16>/Logical Operator' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_WEDLeftStat_Out;/* '<S837>/Enumerated_Constant8' */
    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_WEDRightStat_Ou;/* '<S837>/Enumerated_Constant10' */
    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_WEDAxleStat_Out;/* '<S837>/Enumerated_Constant5' */
    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_AWDClchXRawStat;/* '<S837>/Enumerated_Constant19' */
    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_AWDClchYRawStat;/* '<S837>/Enumerated_Constant18' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_WEDAxleStat_O_f;/* '<S321>/Enumerated_Constant5' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus DataTypeConversion;/* '<S323>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus TmpSignalConversionAtVeHSER_e_AWDStatDsr;/* '<S1>/VeHSER_e_AWDStatDsrd' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_WEDLeftStat_O_a;/* '<S11>/Enumerated_Constant8' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_WEDRightStat__c;/* '<S11>/Enumerated_Constant10' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_AWDClchXRawSt_b;/* '<S11>/Enumerated_Constant19' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDStatus OutportBufferForVeADCR_e_AWDClchYRawSt_c;/* '<S11>/Enumerated_Constant18' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus DataTypeConversion_m;/* '<S129>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus DataTypeConversion_j;/* '<S130>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus DataTypeConversion_k;/* '<S131>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus DataTypeConversion_i;/* '<S132>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDPriority Merge_m;      /* '<S519>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDPriority Switch1_f;    /* '<S519>/Switch1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_WEDCmndState OutportBufferForVeADCR_e_WEDLeftCmndMgrS;/* '<S837>/Enumerated_Constant6' */
    TeADCR_e_WEDCmndState OutportBufferForVeADCR_e_WEDRightCmndMgr;/* '<S837>/Enumerated_Constant7' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDCmndState OutportBufferForVeADCR_e_WEDLeftCmndMg_h;/* '<S11>/Enumerated_Constant6' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDCmndState OutportBufferForVeADCR_e_WEDRightCmndM_f;/* '<S11>/Enumerated_Constant7' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDCmndState DataTypeConversion_mh;/* '<S146>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDCmndState DataTypeConversion_p;/* '<S147>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_WEDActnCmnd OutportBufferForVeADCR_e_WEDLftCmndStat_;/* '<S837>/Enumerated_Constant1' */
    TeADCR_e_WEDActnCmnd OutportBufferForVeADCR_e_WEDRtCmndStat_O;/* '<S837>/Enumerated_Constant2' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDActnCmnd OutportBufferForVeADCR_e_WEDLftCmndSta_d;/* '<S11>/Enumerated_Constant1' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDActnCmnd OutportBufferForVeADCR_e_WEDRtCmndStat_b;/* '<S11>/Enumerated_Constant2' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_AWDSysStat OutportBufferForVeADCR_e_AWDSysStat_Out_;/* '<S837>/Enumerated Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_AWDSysStat OutportBufferForVeADCR_e_AWDSysStat_Ou_c;/* '<S321>/Enumerated Constant' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDSysStat DataTypeConversion_e;/* '<S324>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_AWDReq OutportBufferForVeADCR_e_WEDCmndArb_Out_;/* '<S837>/Enumerated_Constant4' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDReq TmpSignalConversionAtVeADIR_e_BSM_WEDMod;/* '<S4>/VeADIR_e_BSM_WEDModeReq' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_AWDReq OutportBufferForVeADCR_e_WEDCmndArb;/* '<S778>/Enumerated_Constant' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDReq Switch;            /* '<S777>/Switch' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDReq Merge_a;           /* '<S821>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDReq Merge_mz;          /* '<S812>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_AWDDiscSt OutportBufferForVeADCR_e_AWDDiscCurrSt_O;/* '<S837>/Enumerated_Constant13' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_AWDDiscSt OutportBufferForVeADCR_e_AWDDiscCurrSt_p;/* '<S321>/Enumerated_Constant13' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDDiscSt DataTypeConversion_f;/* '<S325>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

    TeADCR_e_AWDClchStat OutportBufferForVeADCC_e_AWDClchXStat_IR;/* '<S837>/Enumerated_Constant9' */
    TeADCR_e_AWDClchStat OutportBufferForVeADCC_e_AWDClchYStat_IR;/* '<S837>/Enumerated_Constant3' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_AWDClchStat OutportBufferForVeADCC_e_AWDClchXStat__p;/* '<S11>/Enumerated_Constant9' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_AWDClchStat OutportBufferForVeADCC_e_AWDClchYStat__c;/* '<S11>/Enumerated_Constant3' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDClchStat Merge_l;      /* '<S17>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDClchStat DataTypeConversion_l;/* '<S14>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDClchStat Merge_e;      /* '<S18>/Merge' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDClchStat DataTypeConversion_m0;/* '<S15>/DataTypeConversion' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_Cc_Pts;/* '<S240>/OPTL_Dynamic1D_Cc_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_C2_Pts;/* '<S240>/OPTL_Dynamic1D_C2_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_C1_Pts;/* '<S240>/OPTL_Dynamic1D_C1_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_1DAxis34ptsA_ADCR_ac_T OPTL_1DAxis34ptsC;/* '<S240>/OPTL_1DAxis34ptsC' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_Cb_Pts;/* '<S239>/OPTL_Dynamic1D_Cb_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_B2_Pts;/* '<S239>/OPTL_Dynamic1D_B2_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_B1_Pts;/* '<S239>/OPTL_Dynamic1D_B1_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_1DAxis34ptsA_ADCR_ac_T OPTL_1DAxis34ptsB;/* '<S239>/OPTL_1DAxis34ptsB' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_Ca_Pts;/* '<S238>/OPTL_Dynamic1D_Ca_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_A2_Pts;/* '<S238>/OPTL_Dynamic1D_A2_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T OPTL_Dynamic1D_A1_Pts;/* '<S238>/OPTL_Dynamic1D_A1_Pts' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    B_OPTL_1DAxis34ptsA_ADCR_ac_T OPTL_1DAxis34ptsA;/* '<S238>/OPTL_1DAxis34ptsA' */

#define B_ADCR_AC_T_VARIANT_EXISTS
#endif

}
B_ADCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ADCR_ac_T
{

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE;          /* '<S804>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_e;        /* '<S713>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE;         /* '<S728>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_d;        /* '<S728>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_o;        /* '<S752>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_f;        /* '<S750>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_c;       /* '<S726>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_g;        /* '<S726>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_p;        /* '<S742>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_a;        /* '<S740>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_h;       /* '<S724>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_m;        /* '<S724>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_h;        /* '<S732>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_et;       /* '<S730>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_m2;       /* '<S530>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_dc;       /* '<S529>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_fv;       /* '<S528>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_eg;       /* '<S675>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_fp;       /* '<S663>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_he;       /* '<S202>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_egc;      /* '<S144>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_o4;       /* '<S145>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_j;        /* '<S179>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_mt;       /* '<S163>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_j2;       /* '<S58>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_em;       /* '<S52>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_i;        /* '<S42>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_b;        /* '<S36>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_e;       /* '<S110>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_ex;       /* '<S110>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_o;       /* '<S115>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_fa;       /* '<S115>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_f;       /* '<S127>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_hr;       /* '<S127>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_ei;      /* '<S121>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_jo;       /* '<S121>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_et;      /* '<S98>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_js;       /* '<S98>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay1_DSTATE_j;       /* '<S103>/Unit Delay1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 UnitDelay_DSTATE_jx;       /* '<S103>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint16 UnitDelay_DSTATE_fag;       /* '<S509>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 UnitDelay_DSTATE_e1;         /* '<S65>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_b1;       /* '<S805>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_jxl;      /* '<S751>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_mto;      /* '<S741>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_io;       /* '<S731>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_c;        /* '<S452>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_l;        /* '<S445>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_b5;       /* '<S480>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_ay;       /* '<S468>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_lb;       /* '<S536>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_n;        /* '<S535>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_lt;       /* '<S534>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_lp;       /* '<S492>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_jst;      /* '<S406>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_ml;       /* '<S367>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_lq;       /* '<S357>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_p5;       /* '<S388>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_k;        /* '<S347>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_dn;       /* '<S377>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_mw;       /* '<S674>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_ih;       /* '<S676>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_db;       /* '<S673>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_ihw;      /* '<S650>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_el;       /* '<S63>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_nf;       /* '<S67>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_eo;       /* '<S60>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_ox;       /* '<S178>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_kk;       /* '<S180>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_nj;       /* '<S166>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_f3;       /* '<S162>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_ot;       /* '<S164>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_gy;       /* '<S150>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_bt;       /* '<S59>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean UnitDelay_DSTATE_f2;       /* '<S43>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDSysStat UnitDelay_DSTATE_pl;/* '<S783>/Unit Delay' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem;         /* '<S327>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem_h;       /* '<S335>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If_ActiveSubsystem;          /* '<S440>/If' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem_k;       /* '<S444>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If_ActiveSubsystem_j;        /* '<S443>/If' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem_i;       /* '<S491>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem_ix;      /* '<S334>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem_j;       /* '<S332>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem_ik;      /* '<S544>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If1_ActiveSubsystem_l;       /* '<S552>/If1' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 If_ActiveSubsystem_a;        /* '<S7>/If' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 tp_ActuateToOpen;            /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 tp_ActuateToClosedForRetry;  /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 tp_StuckInMiddle;            /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_active_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADC;/* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt;/* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateClosed;            /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateToClosed;          /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateOpen;              /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateToOpen;            /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_PositionStuckWhlOpng;     /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_Closed;                   /* '<S145>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 tp_ActuateToOpen_l;          /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 tp_ActuateToClosedForRetry_o;/* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 tp_StuckInMiddle_l;          /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_active_c1_sInkjYmOpEcRAtoBuR6O62C_ADC;/* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt;/* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateClosed_k;          /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateToClosed_h;        /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateOpen_d;            /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_ActuateToOpen_k;          /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_PositionStuckWhlOpng_e;   /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 is_Closed_c;                 /* '<S144>/ADCC_WEDStatCmndMgr' */

#define DW_ADCR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_ADCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_ADCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeADCR_e_WEDStatus Constant_p;/* '<S856>/Constant' */
    const TeADCR_e_WEDStatus Constant_a;/* '<S846>/Constant' */
    const TeADCR_e_WEDStatus Constant_n;/* '<S853>/Constant' */
    const TeADCR_e_WEDStatus Constant_po;/* '<S849>/Constant' */
    const TeADCR_e_WEDStatus Constant_o;/* '<S848>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDStatus Constant_f;/* '<S769>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDStatus Constant_c;/* '<S193>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDStatus Constant_h;/* '<S183>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDStatus Constant_nf;/* '<S186>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDStatus Constant_px;/* '<S185>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

    const TeADCR_e_WEDCmndState Constant_nj;/* '<S854>/Constant' */
    const TeADCR_e_WEDCmndState Constant_m;/* '<S855>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDCmndState Constant_hl;/* '<S191>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDCmndState Constant_p3;/* '<S192>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

    const TeADCR_e_WEDActnCmnd Constant_b;/* '<S845>/Constant' */
    const TeADCR_e_WEDActnCmnd Constant_d;/* '<S850>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDActnCmnd Constant_ni;/* '<S182>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_WEDActnCmnd Constant_ol;/* '<S187>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

    const TeADCR_e_AWDSysStat Constant_a4;/* '<S844>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_AWDSysStat Constant_mj;/* '<S760>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

    const TeADCR_e_AWDReq Constant_c3; /* '<S852>/Constant' */

#if !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_AWDReq Constant_fk; /* '<S836>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

    const TeADCR_e_AWDDiscSt Constant_dj;/* '<S847>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_AWDDiscSt Constant_g;/* '<S763>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

    const TeADCR_e_AWDClchStat Constant_d3;/* '<S857>/Constant' */
    const TeADCR_e_AWDClchStat Constant_p0;/* '<S851>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_AWDClchStat Constant_bs;/* '<S194>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    const TeADCR_e_AWDClchStat Constant_a4d;/* '<S188>/Constant' */

#define CONSTB_ADCR_AC_T_VARIANT_EXISTS
#endif

}
ConstB_ADCR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S212>/Vector'
     */
    uint32 Vector_maxIndex[2];

#define CONSTP_ADCR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_ADCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_ADCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

extern VAR(B_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

extern VAR(DW_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_ADCR
#include "MemMap.h"

extern CONST(ConstB_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ADCR
#include "MemMap.h"

extern CONST(ConstP_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_ADCR
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
 * '<Root>' : 'ADCR_ac'
 * '<S1>'   : 'ADCR_ac/ADCR_MedTEB1'
 * '<S2>'   : 'ADCR_ac/ADCR_MedTEB2'
 * '<S3>'   : 'ADCR_ac/ADCR_MedTED1'
 * '<S4>'   : 'ADCR_ac/ADCR_MedTED2'
 * '<S5>'   : 'ADCR_ac/ADCR_PwrOn'
 * '<S6>'   : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet'
 * '<S7>'   : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits'
 * '<S8>'   : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip'
 * '<S9>'   : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc'
 * '<S10>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls'
 * '<S11>'  : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF'
 * '<S12>'  : 'ADCR_ac/ADCR_MedTEB1/SCALAR_BLK'
 * '<S13>'  : 'ADCR_ac/ADCR_MedTEB1/WEDThroughTorqueCalc'
 * '<S14>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/Enum Set Block1'
 * '<S15>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/Enum Set Block3'
 * '<S16>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet'
 * '<S17>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left'
 * '<S18>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right'
 * '<S19>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/Enumerated Constant1'
 * '<S20>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/KaADCR_dn_ClchXMaxSyncSlipDot'
 * '<S21>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/KaADCR_n_ClchYMaxSyncSlip'
 * '<S22>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/KeADCR_n_ClchXMaxSyncSlip'
 * '<S23>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/SCALAR_BLK1'
 * '<S24>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/SCALAR_BLK3'
 * '<S25>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/SCALAR_BLK5'
 * '<S26>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/SCALAR_BLK7'
 * '<S27>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/SCALAR_BLK8'
 * '<S28>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Enumerated Constant'
 * '<S29>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Enumerated Constant1'
 * '<S30>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Enumerated_Constant1'
 * '<S31>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Enumerated_Constant2'
 * '<S32>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Enumerated_Constant3'
 * '<S33>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Locked'
 * '<S34>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Released'
 * '<S35>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Synched'
 * '<S36>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Timer Retrigger Reset Enabled'
 * '<S37>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Turn Off Delay Time with Resetable delay'
 * '<S38>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Locked/Enumerated Constant1'
 * '<S39>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Released/Enumerated Constant1'
 * '<S40>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Synched/Enumerated Constant1'
 * '<S41>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Turn Off Delay Time with Resetable delay/Edge Falling with Resetable Delay'
 * '<S42>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Turn Off Delay Time with Resetable delay/Unit Delay Reset Enabled'
 * '<S43>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Left/Turn Off Delay Time with Resetable delay/Edge Falling with Resetable Delay/Unit Delay Reset Enabled'
 * '<S44>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Enumerated Constant'
 * '<S45>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Enumerated Constant1'
 * '<S46>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Enumerated_Constant1'
 * '<S47>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Enumerated_Constant2'
 * '<S48>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Enumerated_Constant3'
 * '<S49>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Locked'
 * '<S50>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Released'
 * '<S51>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Synched'
 * '<S52>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Timer Retrigger Reset Enabled'
 * '<S53>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Turn Off Delay Time with Resetable delay'
 * '<S54>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Locked/Enumerated Constant1'
 * '<S55>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Released/Enumerated Constant1'
 * '<S56>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Synched/Enumerated Constant1'
 * '<S57>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Turn Off Delay Time with Resetable delay/Edge Falling with Resetable Delay'
 * '<S58>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Turn Off Delay Time with Resetable delay/Unit Delay Reset Enabled'
 * '<S59>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_AWDClchStatDet/WEDClchStatDet/ADCC_WEDStatToClchStat_Right/Turn Off Delay Time with Resetable delay/Edge Falling with Resetable Delay/Unit Delay Reset Enabled'
 * '<S60>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/EdgeRising'
 * '<S61>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/Enumerated_Constant1'
 * '<S62>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/Enumerated_Constant2'
 * '<S63>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/Signal Latch On With Reset1'
 * '<S64>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsClsdLmts'
 * '<S65>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts'
 * '<S66>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsOpenLmts'
 * '<S67>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/EdgeRising'
 * '<S68>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/Lft_KtADCR_scl_WEDCLMtrLmtPosn'
 * '<S69>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxCLCapture'
 * '<S70>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxCLFrzNeg'
 * '<S71>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxCLFrzPos'
 * '<S72>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxWindowLoc'
 * '<S73>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/Rt_KtADCR_scl_WEDCLMtrLmtPosn'
 * '<S74>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/Lft_KtADCR_scl_WEDCLMtrLmtPosn/VECTOR_BLK'
 * '<S75>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxCLFrzNeg/SCALAR_BLK'
 * '<S76>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxCLFrzNeg/SCALAR_BLK1'
 * '<S77>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxCLFrzPos/SCALAR_BLK'
 * '<S78>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/NxCLFrzPos/SCALAR_BLK1'
 * '<S79>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CLMtrLimits/WEDsFinalClsngLmts/Rt_KtADCR_scl_WEDCLMtrLmtPosn/VECTOR_BLK'
 * '<S80>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip'
 * '<S81>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen'
 * '<S82>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked'
 * '<S83>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMX'
 * '<S84>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMY'
 * '<S85>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/Enumerated Value1'
 * '<S86>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/Enumerated Value2'
 * '<S87>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/Enumerated Value3'
 * '<S88>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/Enumerated Value4'
 * '<S89>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/SCALAR_BLK1'
 * '<S90>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/SCALAR_BLK2'
 * '<S91>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/SCALAR_BLK3'
 * '<S92>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/SCALAR_BLK4'
 * '<S93>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc'
 * '<S94>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc1'
 * '<S95>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc/Nc1DotCalc'
 * '<S96>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc/Set Block1'
 * '<S97>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc/Set Block2'
 * '<S98>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc/Nc1DotCalc/Derivative_filtered1'
 * '<S99>'  : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc/Nc1DotCalc/SCALAR_BLK'
 * '<S100>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc1/Nc1DotCalc'
 * '<S101>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc1/Set Block1'
 * '<S102>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc1/Set Block2'
 * '<S103>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc1/Nc1DotCalc/Derivative_filtered1'
 * '<S104>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculatioOpen/ADCC_SlipSpdCalc1/Nc1DotCalc/SCALAR_BLK'
 * '<S105>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc'
 * '<S106>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc1'
 * '<S107>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc/Nc1DotCalc'
 * '<S108>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc/Set Block1'
 * '<S109>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc/Set Block2'
 * '<S110>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc/Nc1DotCalc/Derivative_filtered1'
 * '<S111>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc/Nc1DotCalc/SCALAR_BLK'
 * '<S112>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc1/Nc1DotCalc'
 * '<S113>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc1/Set Block1'
 * '<S114>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc1/Set Block2'
 * '<S115>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc1/Nc1DotCalc/Derivative_filtered1'
 * '<S116>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationLocked/ADCC_SlipSpdCalc1/Nc1DotCalc/SCALAR_BLK'
 * '<S117>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMX/ADCC_SlipSpdCalc'
 * '<S118>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMX/ADCC_SlipSpdCalc/Nc1DotCalc'
 * '<S119>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMX/ADCC_SlipSpdCalc/Set Block1'
 * '<S120>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMX/ADCC_SlipSpdCalc/Set Block2'
 * '<S121>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMX/ADCC_SlipSpdCalc/Nc1DotCalc/Derivative_filtered1'
 * '<S122>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMX/ADCC_SlipSpdCalc/Nc1DotCalc/SCALAR_BLK'
 * '<S123>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMY/ADCC_SlipSpdCalc'
 * '<S124>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMY/ADCC_SlipSpdCalc/Nc1DotCalc'
 * '<S125>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMY/ADCC_SlipSpdCalc/Set Block1'
 * '<S126>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMY/ADCC_SlipSpdCalc/Set Block2'
 * '<S127>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMY/ADCC_SlipSpdCalc/Nc1DotCalc/Derivative_filtered1'
 * '<S128>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_CalcClchSlip/ADCC_CalcClchSlip/ADCC_SlipCalculationMY/ADCC_SlipSpdCalc/Nc1DotCalc/SCALAR_BLK'
 * '<S129>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/Enum Set Block1'
 * '<S130>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/Enum Set Block2'
 * '<S131>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/Enum Set Block3'
 * '<S132>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/Enum Set Block4'
 * '<S133>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/SCALAR_BLK1'
 * '<S134>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/Set Block'
 * '<S135>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/Set Block1'
 * '<S136>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect'
 * '<S137>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect/Enumerated Value2'
 * '<S138>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect/Enumerated Value4'
 * '<S139>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect/Enumerated Value5'
 * '<S140>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect/NxEqNa'
 * '<S141>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect/NxEqNb'
 * '<S142>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect/NxEqNc'
 * '<S143>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_InputProc/WEDMtrSrcSelect/SCALAR_BLK'
 * '<S144>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft'
 * '<S145>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt'
 * '<S146>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/Enum Set Block1'
 * '<S147>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/Enum Set Block2'
 * '<S148>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/Enumerated Constant'
 * '<S149>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/ADCC_WEDStatCmndMgr'
 * '<S150>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/EdgeRising'
 * '<S151>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/Enumerated Constant'
 * '<S152>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_L_WEDPosnStckThrsh'
 * '<S153>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_b_EnblWgglDurngClsd'
 * '<S154>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_b_EnblWgglWhnStck'
 * '<S155>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_b_EnblWgglWhnStck1'
 * '<S156>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_b_RstWgglAtOpen'
 * '<S157>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_t_WEDClsngTmLmt'
 * '<S158>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_t_WEDOpngTmLmt'
 * '<S159>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_t_WEDOpngWgglTmLmt'
 * '<S160>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/KeADCR_t_WEDPsnStckDly'
 * '<S161>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/Turn On Delay Time with Resetable delay'
 * '<S162>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/Turn On Delay Time with Resetable delay/EdgeRising with resetable delay'
 * '<S163>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/Turn On Delay Time with Resetable delay/Unit Delay Reset Enabled'
 * '<S164>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrLft/Turn On Delay Time with Resetable delay/EdgeRising with resetable delay/Unit Delay Reset Enabled'
 * '<S165>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/ADCC_WEDStatCmndMgr'
 * '<S166>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/EdgeRising'
 * '<S167>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/Enumerated Constant'
 * '<S168>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_L_WEDPosnStckThrsh'
 * '<S169>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_b_EnblWgglDurngClsd'
 * '<S170>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_b_EnblWgglWhnStck'
 * '<S171>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_b_EnblWgglWhnStck1'
 * '<S172>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_b_RstWgglAtOpen'
 * '<S173>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_t_WEDClsngTmLmt'
 * '<S174>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_t_WEDOpngTmLmt'
 * '<S175>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_t_WEDOpngWgglTmLmt'
 * '<S176>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/KeADCR_t_WEDPsnStckDly'
 * '<S177>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/Turn On Delay Time with Resetable delay'
 * '<S178>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/Turn On Delay Time with Resetable delay/EdgeRising with resetable delay'
 * '<S179>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/Turn On Delay Time with Resetable delay/Unit Delay Reset Enabled'
 * '<S180>' : 'ADCR_ac/ADCR_MedTEB1/ADCC_WEDCmndCtrls/ADCC_WEDStatCmndMgrRt/Turn On Delay Time with Resetable delay/EdgeRising with resetable delay/Unit Delay Reset Enabled'
 * '<S181>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated Constant'
 * '<S182>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant1'
 * '<S183>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant10'
 * '<S184>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant13'
 * '<S185>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant18'
 * '<S186>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant19'
 * '<S187>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant2'
 * '<S188>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant3'
 * '<S189>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant4'
 * '<S190>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant5'
 * '<S191>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant6'
 * '<S192>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant7'
 * '<S193>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant8'
 * '<S194>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/Enumerated_Constant9'
 * '<S195>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/SCALAR_BLK1'
 * '<S196>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/SCALAR_BLK2'
 * '<S197>' : 'ADCR_ac/ADCR_MedTEB1/ADCR_MedTEB_NF/SCALAR_BLK3'
 * '<S198>' : 'ADCR_ac/ADCR_MedTEB1/WEDThroughTorqueCalc/KeTSXR_D_ExternWEDMtrDmpng'
 * '<S199>' : 'ADCR_ac/ADCR_MedTEB1/WEDThroughTorqueCalc/KeTSXR_J_ExternWEDMtrInertia'
 * '<S200>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc'
 * '<S201>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF'
 * '<S202>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/DetSlipTgt'
 * '<S203>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/NxTgtAvg'
 * '<S204>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve'
 * '<S205>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/DetSlipTgt/SCALAR_BLK'
 * '<S206>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/DetSlipTgt/VECTOR_BLK'
 * '<S207>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/NxTgtAvg/SCALAR_BLK'
 * '<S208>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNiDotPwrDraw'
 * '<S209>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw'
 * '<S210>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace'
 * '<S211>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/Enumerated Constant'
 * '<S212>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/KtADCR_P_TgtPwrRsrv4Engmt'
 * '<S213>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/KtADCR_t_TgtTmToClose'
 * '<S214>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/SCALAR_BLK'
 * '<S215>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/SCALAR_BLK1'
 * '<S216>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/Set Block1'
 * '<S217>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/Set Block2'
 * '<S218>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNiDotPwrDraw/Enumerated Constant'
 * '<S219>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNiDotPwrDraw/Enumerated Constant1'
 * '<S220>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNiDotPwrDraw/Enumerated Constant2'
 * '<S221>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNiDotPwrDraw/Enumerated Constant3'
 * '<S222>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNiDotPwrDraw/Enumerated Constant4'
 * '<S223>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNiDotPwrDraw/SCALAR_BLK'
 * '<S224>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/Inactive'
 * '<S225>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/MtrA'
 * '<S226>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/MtrB'
 * '<S227>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/MtrC'
 * '<S228>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/SCALAR_BLK'
 * '<S229>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/MtrA/KeTSXR_J_Ia'
 * '<S230>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/MtrB/KeTSXR_J_Ib'
 * '<S231>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CalcNxDotPwrDraw/MtrC/KeTSXR_J_Ib'
 * '<S232>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/Enumerated Constant'
 * '<S233>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/Enumerated Constant1'
 * '<S234>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/Enumerated Constant2'
 * '<S235>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs'
 * '<S236>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/SCALAR_BLK'
 * '<S237>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/DocBlock'
 * '<S238>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA'
 * '<S239>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB'
 * '<S240>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC'
 * '<S241>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/Model Info1'
 * '<S242>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/Set Block'
 * '<S243>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/Set Block1'
 * '<S244>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/Set Block2'
 * '<S245>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/Set Block3'
 * '<S246>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value'
 * '<S247>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value1'
 * '<S248>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value2'
 * '<S249>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Constant Value3'
 * '<S250>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_A1A1_1DInterpolation'
 * '<S251>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_A1A2_1DInterpolation'
 * '<S252>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_A2A2_1DInterpolation'
 * '<S253>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/HSCL_Ca_1DInterpolation'
 * '<S254>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Motor_A_Forward'
 * '<S255>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Motor_A_Reverse'
 * '<S256>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_1DAxis34ptsA'
 * '<S257>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_Dynamic1D_A1_Pts'
 * '<S258>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_Dynamic1D_A2_Pts'
 * '<S259>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_Dynamic1D_Ca_Pts'
 * '<S260>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Set Block3'
 * '<S261>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Square Root'
 * '<S262>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/Motor_A_Forward/Set Block'
 * '<S263>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrA/OPTL_1DAxis34ptsA/X_Data_and_Fractions'
 * '<S264>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value4'
 * '<S265>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value5'
 * '<S266>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value6'
 * '<S267>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Constant Value7'
 * '<S268>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_B1B1_1DInterpolation'
 * '<S269>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_B1B2_1DInterpolation'
 * '<S270>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_B2B2_1DInterpolation'
 * '<S271>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/HSCL_Cb_1DInterpolation'
 * '<S272>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Motor_B_Forward'
 * '<S273>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Motor_B_Reverse'
 * '<S274>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_1DAxis34ptsB'
 * '<S275>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_Dynamic1D_B1_Pts'
 * '<S276>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_Dynamic1D_B2_Pts'
 * '<S277>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_Dynamic1D_Cb_Pts'
 * '<S278>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Set Block4'
 * '<S279>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Square Root1'
 * '<S280>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/Motor_B_Forward/Set Block'
 * '<S281>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrB/OPTL_1DAxis34ptsB/X_Data_and_Fractions'
 * '<S282>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value4'
 * '<S283>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value5'
 * '<S284>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value6'
 * '<S285>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Constant Value7'
 * '<S286>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_C1C1_1DInterpolation'
 * '<S287>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_C1C2_1DInterpolation'
 * '<S288>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_C2C2_1DInterpolation'
 * '<S289>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/HSCL_Cc_1DInterpolation'
 * '<S290>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Motor_B_Forward'
 * '<S291>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Motor_B_Reverse'
 * '<S292>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_1DAxis34ptsC'
 * '<S293>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_Dynamic1D_C1_Pts'
 * '<S294>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_Dynamic1D_C2_Pts'
 * '<S295>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_Dynamic1D_Cc_Pts'
 * '<S296>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Set Block4'
 * '<S297>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Square Root1'
 * '<S298>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/Motor_B_Forward/Set Block'
 * '<S299>' : 'ADCR_ac/ADCR_MedTEB2/ADCC_PwrRsrvCalc/PowerReserve/CurrMtrSpdDonutSpace/HSCL_DonutSpace_Coefs/HSCL_DonutSpaceCoeffs_MtrC/OPTL_1DAxis34ptsC/X_Data_and_Fractions'
 * '<S300>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated Constant'
 * '<S301>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant1'
 * '<S302>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant10'
 * '<S303>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant13'
 * '<S304>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant18'
 * '<S305>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant19'
 * '<S306>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant2'
 * '<S307>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant3'
 * '<S308>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant4'
 * '<S309>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant5'
 * '<S310>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant6'
 * '<S311>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant7'
 * '<S312>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant8'
 * '<S313>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/Enumerated_Constant9'
 * '<S314>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/SCALAR_BLK1'
 * '<S315>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/SCALAR_BLK2'
 * '<S316>' : 'ADCR_ac/ADCR_MedTEB2/ADCR_MedTED1_NF/SCALAR_BLK3'
 * '<S317>' : 'ADCR_ac/ADCR_MedTED1/ADCC_20ms_UpdateOutputs'
 * '<S318>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction'
 * '<S319>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn'
 * '<S320>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc'
 * '<S321>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF'
 * '<S322>' : 'ADCR_ac/ADCR_MedTED1/SCALAR_BLK'
 * '<S323>' : 'ADCR_ac/ADCR_MedTED1/ADCC_20ms_UpdateOutputs/Enum Set Block'
 * '<S324>' : 'ADCR_ac/ADCR_MedTED1/ADCC_20ms_UpdateOutputs/Enum Set Block1'
 * '<S325>' : 'ADCR_ac/ADCR_MedTED1/ADCC_20ms_UpdateOutputs/Enum Set Block2'
 * '<S326>' : 'ADCR_ac/ADCR_MedTED1/ADCC_20ms_UpdateOutputs/SCALAR_BLK1'
 * '<S327>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction'
 * '<S328>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/Enumerated Constant'
 * '<S329>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/Enumerated Constant1'
 * '<S330>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/Enumerated Constant2'
 * '<S331>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/Enumerated Constant3'
 * '<S332>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup'
 * '<S333>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_InitGroup'
 * '<S334>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup'
 * '<S335>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat'
 * '<S336>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/Enumerated Constant1'
 * '<S337>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/Enumerated Constant2'
 * '<S338>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/Enumerated Constant3'
 * '<S339>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/Enumerated Constant4'
 * '<S340>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/Enumerated Constant5'
 * '<S341>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked'
 * '<S342>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked'
 * '<S343>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked'
 * '<S344>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX'
 * '<S345>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY'
 * '<S346>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/During'
 * '<S347>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/EdgeRising1'
 * '<S348>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry'
 * '<S349>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry/Enumerated Constant'
 * '<S350>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry/Enumerated Constant2'
 * '<S351>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry/Enumerated Constant3'
 * '<S352>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry/Enumerated Constant4'
 * '<S353>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry/Enumerated Constant5'
 * '<S354>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S355>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeXToLocked/Entry/SCALAR_BLK'
 * '<S356>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/During'
 * '<S357>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/EdgeRising1'
 * '<S358>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry'
 * '<S359>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry/Enumerated Constant'
 * '<S360>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry/Enumerated Constant2'
 * '<S361>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry/Enumerated Constant3'
 * '<S362>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry/Enumerated Constant4'
 * '<S363>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry/Enumerated Constant5'
 * '<S364>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S365>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/ModeYToLocked/Entry/SCALAR_BLK'
 * '<S366>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/During'
 * '<S367>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/EdgeRising1'
 * '<S368>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry'
 * '<S369>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry/Enumerated Constant'
 * '<S370>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry/Enumerated Constant2'
 * '<S371>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry/Enumerated Constant3'
 * '<S372>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry/Enumerated Constant4'
 * '<S373>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry/Enumerated Constant5'
 * '<S374>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S375>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToLocked/Entry/SCALAR_BLK'
 * '<S376>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/During'
 * '<S377>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/EdgeRising1'
 * '<S378>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry'
 * '<S379>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/Enumerated Constant'
 * '<S380>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/Enumerated Constant1'
 * '<S381>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/Enumerated Constant2'
 * '<S382>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/Enumerated Constant3'
 * '<S383>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/Enumerated Constant4'
 * '<S384>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/Enumerated Constant5'
 * '<S385>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S386>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeX/Entry/SCALAR_BLK'
 * '<S387>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/During'
 * '<S388>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/EdgeRising1'
 * '<S389>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry'
 * '<S390>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/Enumerated Constant'
 * '<S391>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/Enumerated Constant1'
 * '<S392>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/Enumerated Constant2'
 * '<S393>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/Enumerated Constant3'
 * '<S394>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/Enumerated Constant4'
 * '<S395>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/Enumerated Constant5'
 * '<S396>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S397>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_ClosingGroup/OpenToModeY/Entry/SCALAR_BLK'
 * '<S398>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_InitGroup/Enumerated Constant'
 * '<S399>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_InitGroup/Enumerated Constant2'
 * '<S400>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_InitGroup/Enumerated Constant3'
 * '<S401>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_InitGroup/Enumerated Constant5'
 * '<S402>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_InitGroup/KeADCR_k_NxProfFiltOpen'
 * '<S403>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/Enumerated Constant3'
 * '<S404>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll'
 * '<S405>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During'
 * '<S406>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/EdgeRising1'
 * '<S407>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry'
 * '<S408>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During/Enumerated Constant1'
 * '<S409>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During/Enumerated Constant2'
 * '<S410>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During/Enumerated Constant3'
 * '<S411>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During/Enumerated Constant4'
 * '<S412>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During/KeADCR_b_EnblLckEqnFlsOpnAll'
 * '<S413>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During/OneWEDOpen'
 * '<S414>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/During/OneWEDOpen/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S415>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/Enumerated Constant1'
 * '<S416>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/Enumerated Constant4'
 * '<S417>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/Enumerated Constant6'
 * '<S418>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/Enumerated Constant7'
 * '<S419>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem'
 * '<S420>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem1'
 * '<S421>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem2'
 * '<S422>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem3'
 * '<S423>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/SCALAR_BLK'
 * '<S424>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem/Enumerated Constant2'
 * '<S425>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S426>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem/KeADCR_e_AWDDiscProfEqnModeX'
 * '<S427>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem1/Enumerated Constant2'
 * '<S428>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem1/Enumerated Constant3'
 * '<S429>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem1/KeADCR_M_AWDMaxClchEstLocked'
 * '<S430>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem2/Enumerated Constant2'
 * '<S431>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem2/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S432>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem2/KeADCR_e_AWDDiscProfEqnModeY'
 * '<S433>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem3/Enumerated Constant2'
 * '<S434>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem3/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S435>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_OpeningGroup/WED_OpenAll/Entry/If Action Subsystem3/KeADCR_e_AWDDiscProfEqnLocked'
 * '<S436>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Enumerated Constant1'
 * '<S437>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Enumerated Constant2'
 * '<S438>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Enumerated Constant3'
 * '<S439>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Enumerated Constant4'
 * '<S440>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked'
 * '<S441>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX'
 * '<S442>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY'
 * '<S443>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open'
 * '<S444>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During'
 * '<S445>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/EdgeRising1'
 * '<S446>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry'
 * '<S447>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/Enumerated Constant1'
 * '<S448>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/Enumerated Constant4'
 * '<S449>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/MaxTorq'
 * '<S450>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq'
 * '<S451>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/MaxTorq/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S452>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq/EdgeRising1'
 * '<S453>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq/FastRampRate'
 * '<S454>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq/RampRate'
 * '<S455>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq/SCALAR_BLK1'
 * '<S456>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq/FastRampRate/SCALAR_BLK1'
 * '<S457>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq/RampRate/Enumerated Constant4'
 * '<S458>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/During/RampOutTorq/RampRate/SCALAR_BLK1'
 * '<S459>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/Enumerated Constant1'
 * '<S460>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/Enumerated Constant2'
 * '<S461>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/Enumerated Constant3'
 * '<S462>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/Enumerated Constant4'
 * '<S463>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/Enumerated Constant5'
 * '<S464>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S465>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/KeADCR_M_AWDMaxClchEstLocked'
 * '<S466>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Locked/Entry/SCALAR_BLK'
 * '<S467>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/During'
 * '<S468>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/EdgeRising1'
 * '<S469>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry'
 * '<S470>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/Enumerated Constant1'
 * '<S471>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/Enumerated Constant2'
 * '<S472>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/Enumerated Constant3'
 * '<S473>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/Enumerated Constant4'
 * '<S474>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/Enumerated Constant5'
 * '<S475>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S476>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/KeADCR_M_AWDMaxClchEstModeX'
 * '<S477>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/KeADCR_e_AWDModeXAxleStat'
 * '<S478>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeX/Entry/SCALAR_BLK'
 * '<S479>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/During'
 * '<S480>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/EdgeRising1'
 * '<S481>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry'
 * '<S482>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/Enumerated Constant1'
 * '<S483>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/Enumerated Constant2'
 * '<S484>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/Enumerated Constant3'
 * '<S485>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/Enumerated Constant4'
 * '<S486>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/Enumerated Constant5'
 * '<S487>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S488>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/KeADCR_M_AWDMaxClchEstModeY'
 * '<S489>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/KeADCR_e_AWDModeYAxleStat'
 * '<S490>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/ModeY/Entry/SCALAR_BLK'
 * '<S491>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During'
 * '<S492>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/EdgeRising1'
 * '<S493>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry'
 * '<S494>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Enumerated Constant1'
 * '<S495>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Enumerated Constant2'
 * '<S496>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Enumerated Constant4'
 * '<S497>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2Locked'
 * '<S498>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2MX'
 * '<S499>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2MY'
 * '<S500>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open'
 * '<S501>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/SpeedTargetDetermination'
 * '<S502>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority'
 * '<S503>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2Locked/Enumerated Constant'
 * '<S504>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2Locked/Enumerated Constant4'
 * '<S505>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2MX/Enumerated Constant'
 * '<S506>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2MX/Enumerated Constant4'
 * '<S507>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2MY/Enumerated Constant'
 * '<S508>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/O2MY/Enumerated Constant4'
 * '<S509>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/Counter Reset Enabled '
 * '<S510>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/Enumerated Constant'
 * '<S511>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/If Action Subsystem'
 * '<S512>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/If Action Subsystem1'
 * '<S513>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/KeADCR_n_AWDMtrLowSpdCnt'
 * '<S514>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/KeADCR_n_AWDMtrLowSpdThrsh'
 * '<S515>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/If Action Subsystem/Enumerated Constant4'
 * '<S516>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/Open/If Action Subsystem1/Enumerated Constant4'
 * '<S517>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/SpeedTargetDetermination/SCALAR_BLK1'
 * '<S518>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/Enumerated Constant4'
 * '<S519>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority'
 * '<S520>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Both_Simutaneous'
 * '<S521>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Left_Priority'
 * '<S522>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Right_Priority'
 * '<S523>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/SCALAR_BLK'
 * '<S524>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/SCALAR_BLK1'
 * '<S525>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/SCALAR_BLK2'
 * '<S526>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/SCALAR_BLK3'
 * '<S527>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/SCALAR_BLK4'
 * '<S528>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Turn On Delay Time'
 * '<S529>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Turn On Delay Time1'
 * '<S530>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Turn On Delay Time2'
 * '<S531>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Both_Simutaneous/Enumerated Constant4'
 * '<S532>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Left_Priority/Enumerated Constant4'
 * '<S533>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Right_Priority/Enumerated Constant4'
 * '<S534>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Turn On Delay Time/EdgeRising'
 * '<S535>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Turn On Delay Time1/EdgeRising'
 * '<S536>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/During/WEDSpdBsdPriority/WhlSpdPriority/Turn On Delay Time2/EdgeRising'
 * '<S537>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry/Enumerated Constant1'
 * '<S538>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry/Enumerated Constant2'
 * '<S539>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry/Enumerated Constant3'
 * '<S540>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry/Enumerated Constant4'
 * '<S541>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry/Enumerated Constant5'
 * '<S542>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry/KeADCR_M_AWDMaxClchCap_TcROvrd'
 * '<S543>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStAction/DiscStAction/WED_SteadyStat/Open/Entry/SCALAR_BLK'
 * '<S544>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn'
 * '<S545>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/Enumerated Constant'
 * '<S546>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/Enumerated Constant1'
 * '<S547>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/Enumerated Constant2'
 * '<S548>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/Enumerated Constant3'
 * '<S549>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup'
 * '<S550>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_InitGroup'
 * '<S551>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup'
 * '<S552>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat'
 * '<S553>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/Enumerated Constant1'
 * '<S554>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/Enumerated Constant2'
 * '<S555>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/Enumerated Constant3'
 * '<S556>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/Enumerated Constant4'
 * '<S557>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/Enumerated Constant5'
 * '<S558>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked'
 * '<S559>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked'
 * '<S560>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked'
 * '<S561>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX'
 * '<S562>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY'
 * '<S563>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/Enumerated Constant1'
 * '<S564>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/Enumerated Constant2'
 * '<S565>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/Enumerated Constant4'
 * '<S566>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/Enumerated Constant5'
 * '<S567>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/Locked'
 * '<S568>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/OpemAll'
 * '<S569>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/Locked/Enumerated Constant1'
 * '<S570>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/Locked/Enumerated Constant2'
 * '<S571>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/OpemAll/Enumerated Constant1'
 * '<S572>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeXToLocked/OpemAll/Enumerated Constant2'
 * '<S573>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/Enumerated Constant1'
 * '<S574>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/Enumerated Constant2'
 * '<S575>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/Enumerated Constant4'
 * '<S576>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/Enumerated Constant5'
 * '<S577>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/Locked'
 * '<S578>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/OpemAll'
 * '<S579>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/Locked/Enumerated Constant1'
 * '<S580>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/Locked/Enumerated Constant2'
 * '<S581>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/OpemAll/Enumerated Constant1'
 * '<S582>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/ModeYToLocked/OpemAll/Enumerated Constant2'
 * '<S583>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/Enumerated Constant1'
 * '<S584>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/Enumerated Constant2'
 * '<S585>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/Enumerated Constant4'
 * '<S586>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/Enumerated Constant5'
 * '<S587>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/Locked'
 * '<S588>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/OpemAll'
 * '<S589>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/Locked/Enumerated Constant1'
 * '<S590>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/Locked/Enumerated Constant2'
 * '<S591>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/OpemAll/Enumerated Constant1'
 * '<S592>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToLocked/OpemAll/Enumerated Constant2'
 * '<S593>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/Enumerated Constant1'
 * '<S594>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/Enumerated Constant2'
 * '<S595>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/Enumerated Constant3'
 * '<S596>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/Enumerated Constant4'
 * '<S597>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/ModeX'
 * '<S598>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/ModeXToLocked'
 * '<S599>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/OpemAll'
 * '<S600>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/ModeX/Enumerated Constant1'
 * '<S601>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/ModeX/Enumerated Constant2'
 * '<S602>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/ModeXToLocked/Enumerated Constant1'
 * '<S603>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/ModeXToLocked/Enumerated Constant2'
 * '<S604>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/OpemAll/Enumerated Constant1'
 * '<S605>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeX/OpemAll/Enumerated Constant2'
 * '<S606>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/Enumerated Constant1'
 * '<S607>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/Enumerated Constant2'
 * '<S608>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/Enumerated Constant3'
 * '<S609>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/Enumerated Constant4'
 * '<S610>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/ModeY'
 * '<S611>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/ModeYToLocked'
 * '<S612>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/OpemAll'
 * '<S613>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/ModeY/Enumerated Constant1'
 * '<S614>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/ModeY/Enumerated Constant2'
 * '<S615>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/ModeYToLocked/Enumerated Constant1'
 * '<S616>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/ModeYToLocked/Enumerated Constant2'
 * '<S617>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/OpemAll/Enumerated Constant1'
 * '<S618>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_ClosingGroup/OpenToModeY/OpemAll/Enumerated Constant2'
 * '<S619>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_InitGroup/SCALAR_BLK'
 * '<S620>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_InitGroup/SCALAR_BLK1'
 * '<S621>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Enumerated Constant3'
 * '<S622>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All'
 * '<S623>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Enumerated Constant1'
 * '<S624>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Enumerated Constant2'
 * '<S625>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Enumerated Constant3'
 * '<S626>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Enumerated Constant4'
 * '<S627>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Enumerated Constant5'
 * '<S628>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Enumerated Constant6'
 * '<S629>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Enumerated Constant7'
 * '<S630>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/ModeX'
 * '<S631>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/ModeY'
 * '<S632>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Open'
 * '<S633>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/OpenToLocked'
 * '<S634>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/ModeX/Enumerated Constant1'
 * '<S635>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/ModeX/Enumerated Constant3'
 * '<S636>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/ModeY/Enumerated Constant1'
 * '<S637>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/ModeY/Enumerated Constant3'
 * '<S638>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Open/Enumerated Constant1'
 * '<S639>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/Open/Enumerated Constant3'
 * '<S640>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/OpenToLocked/Enumerated Constant1'
 * '<S641>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_OpeningGroup/Open_All/OpenToLocked/Enumerated Constant3'
 * '<S642>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Enumerated Constant1'
 * '<S643>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Enumerated Constant2'
 * '<S644>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Enumerated Constant3'
 * '<S645>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Enumerated Constant4'
 * '<S646>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked'
 * '<S647>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX'
 * '<S648>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY'
 * '<S649>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open'
 * '<S650>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/EdgeRising1'
 * '<S651>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Enumerated Constant1'
 * '<S652>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Enumerated Constant2'
 * '<S653>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Enumerated Constant3'
 * '<S654>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Enumerated Constant4'
 * '<S655>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/KeADCR_t_ADCClchOfldDlyTmr'
 * '<S656>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/ModeX'
 * '<S657>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/ModeY'
 * '<S658>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/OpemAll'
 * '<S659>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Open'
 * '<S660>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/SCALAR_BLK'
 * '<S661>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/SCALAR_BLK1'
 * '<S662>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/SCALAR_BLK2'
 * '<S663>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Turn On Delay Time'
 * '<S664>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Turn On Delay Time with Resetable delay1'
 * '<S665>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/ModeX/Enumerated Constant1'
 * '<S666>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/ModeX/Enumerated Constant2'
 * '<S667>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/ModeY/Enumerated Constant1'
 * '<S668>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/ModeY/Enumerated Constant2'
 * '<S669>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/OpemAll/Enumerated Constant1'
 * '<S670>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/OpemAll/Enumerated Constant2'
 * '<S671>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Open/Enumerated Constant1'
 * '<S672>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Open/Enumerated Constant2'
 * '<S673>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Turn On Delay Time/EdgeRising'
 * '<S674>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Turn On Delay Time with Resetable delay1/EdgeRising with resetable delay'
 * '<S675>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Turn On Delay Time with Resetable delay1/Unit Delay Reset Enabled'
 * '<S676>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Locked/Turn On Delay Time with Resetable delay1/EdgeRising with resetable delay/Unit Delay Reset Enabled'
 * '<S677>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/Enumerated Constant1'
 * '<S678>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/Enumerated Constant2'
 * '<S679>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/Enumerated Constant3'
 * '<S680>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/Enumerated Constant4'
 * '<S681>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/ModeXToLocked'
 * '<S682>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/OpemAll'
 * '<S683>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/ModeXToLocked/Enumerated Constant1'
 * '<S684>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/ModeXToLocked/Enumerated Constant2'
 * '<S685>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/OpemAll/Enumerated Constant1'
 * '<S686>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeX/OpemAll/Enumerated Constant2'
 * '<S687>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/Enumerated Constant1'
 * '<S688>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/Enumerated Constant2'
 * '<S689>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/Enumerated Constant3'
 * '<S690>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/Enumerated Constant4'
 * '<S691>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/ModeYToLocked'
 * '<S692>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/OpemAll'
 * '<S693>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/ModeYToLocked/Enumerated Constant1'
 * '<S694>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/ModeYToLocked/Enumerated Constant2'
 * '<S695>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/OpemAll/Enumerated Constant1'
 * '<S696>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/ModeY/OpemAll/Enumerated Constant2'
 * '<S697>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/Enumerated Constant1'
 * '<S698>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/Enumerated Constant2'
 * '<S699>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/Enumerated Constant3'
 * '<S700>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/Enumerated Constant4'
 * '<S701>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/Enumerated Constant5'
 * '<S702>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/Enumerated Constant6'
 * '<S703>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToLocked'
 * '<S704>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToModeX'
 * '<S705>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToModeY'
 * '<S706>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToLocked/Enumerated Constant1'
 * '<S707>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToLocked/Enumerated Constant2'
 * '<S708>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToModeX/Enumerated Constant1'
 * '<S709>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToModeX/Enumerated Constant2'
 * '<S710>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToModeY/Enumerated Constant1'
 * '<S711>' : 'ADCR_ac/ADCR_MedTED1/ADCC_AWDDiscStTrnstn/DiscStTrnstn/WED_SteadyStat/Open/OpenToModeY/Enumerated Constant2'
 * '<S712>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc'
 * '<S713>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/DetSlipTgt'
 * '<S714>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt'
 * '<S715>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/DetSlipTgt/SCALAR_BLK'
 * '<S716>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/DetSlipTgt/VECTOR_BLK'
 * '<S717>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/Enumerated Constant1'
 * '<S718>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/Enumerated Constant2'
 * '<S719>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/Enumerated Constant3'
 * '<S720>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/Enumerated Constant4'
 * '<S721>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/Enumerated Constant5'
 * '<S722>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/InactiveTgt'
 * '<S723>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/NxTgtZeroSpd'
 * '<S724>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc'
 * '<S725>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgSelect'
 * '<S726>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc'
 * '<S727>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXSelect'
 * '<S728>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc'
 * '<S729>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYSelect'
 * '<S730>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/Digital Lowpass Reset Enabled1'
 * '<S731>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/EdgeRising1'
 * '<S732>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/GradientLimiter1'
 * '<S733>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/Protected Division1'
 * '<S734>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/SCALAR_BLK'
 * '<S735>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/SCALAR_BLK1'
 * '<S736>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/SCALAR_BLK2'
 * '<S737>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/Set Block1'
 * '<S738>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/Set Block2'
 * '<S739>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtAvgCalc/GradientLimiter1/Limiter'
 * '<S740>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/Digital Lowpass Reset Enabled1'
 * '<S741>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/EdgeRising1'
 * '<S742>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/GradientLimiter1'
 * '<S743>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/Protected Division1'
 * '<S744>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/SCALAR_BLK'
 * '<S745>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/SCALAR_BLK1'
 * '<S746>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/SCALAR_BLK2'
 * '<S747>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/Set Block2'
 * '<S748>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/Set Block3'
 * '<S749>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchXCalc/GradientLimiter1/Limiter'
 * '<S750>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/Digital Lowpass Reset Enabled1'
 * '<S751>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/EdgeRising1'
 * '<S752>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/GradientLimiter1'
 * '<S753>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/Protected Division1'
 * '<S754>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/SCALAR_BLK'
 * '<S755>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/SCALAR_BLK1'
 * '<S756>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/SCALAR_BLK2'
 * '<S757>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/Set Block2'
 * '<S758>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/Set Block3'
 * '<S759>' : 'ADCR_ac/ADCR_MedTED1/ADCC_NxTgtCalc/NxTgtCalc/WEDNxTgt/TgtClchYCalc/GradientLimiter1/Limiter'
 * '<S760>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated Constant'
 * '<S761>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant1'
 * '<S762>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant10'
 * '<S763>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant13'
 * '<S764>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant18'
 * '<S765>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant19'
 * '<S766>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant2'
 * '<S767>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant3'
 * '<S768>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant4'
 * '<S769>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant5'
 * '<S770>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant6'
 * '<S771>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant7'
 * '<S772>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant8'
 * '<S773>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/Enumerated_Constant9'
 * '<S774>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/SCALAR_BLK1'
 * '<S775>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/SCALAR_BLK2'
 * '<S776>' : 'ADCR_ac/ADCR_MedTED1/ADCR_MedTED1_NF/SCALAR_BLK3'
 * '<S777>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb'
 * '<S778>' : 'ADCR_ac/ADCR_MedTED2/ADCR_MedTED2_NF'
 * '<S779>' : 'ADCR_ac/ADCR_MedTED2/SCALAR_BLK'
 * '<S780>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/ADCC_AWDReqPrioCtrl'
 * '<S781>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/AnalyzeReq'
 * '<S782>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/BSM'
 * '<S783>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/PreventToggleVehSpdA'
 * '<S784>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/SCALAR_BLK1'
 * '<S785>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/SCALAR_BLK3'
 * '<S786>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/SCALAR_BLK4'
 * '<S787>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/SCALAR_BLK5'
 * '<S788>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehDyn'
 * '<S789>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A'
 * '<S790>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B'
 * '<S791>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdLow'
 * '<S792>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/AnalyzeReq/ActiveReq'
 * '<S793>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/AnalyzeReq/Enumerated_Constant1'
 * '<S794>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/AnalyzeReq/NoActiveReq'
 * '<S795>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/AnalyzeReq/NoActiveReq/Enumerated_Constant2'
 * '<S796>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/BSM/Enumerated_Constant1'
 * '<S797>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/BSM/Enumerated_Constant2'
 * '<S798>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/BSM/ForceClosed'
 * '<S799>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/BSM/ForceClosed/Enumerated_Constant1'
 * '<S800>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/BSM/ForceClosed/SCALAR_BLK'
 * '<S801>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/PreventToggleVehSpdA/SCALAR_BLK'
 * '<S802>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/PreventToggleVehSpdA/SCALAR_BLK1'
 * '<S803>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/PreventToggleVehSpdA/SCALAR_BLK2'
 * '<S804>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/PreventToggleVehSpdA/Turn Off Delay Time'
 * '<S805>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/PreventToggleVehSpdA/Turn Off Delay Time/EdgeFalling'
 * '<S806>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehDyn/Enumerated_Constant1'
 * '<S807>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehDyn/Enumerated_Constant2'
 * '<S808>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehDyn/FollowVehDyn'
 * '<S809>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehDyn/SCALAR_BLK2'
 * '<S810>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehDyn/FollowVehDyn/Enumerated_Constant1'
 * '<S811>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehDyn/FollowVehDyn/SCALAR_BLK'
 * '<S812>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage'
 * '<S813>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/Enumerated_Constant'
 * '<S814>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/Enumerated_Constant1'
 * '<S815>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/Enumerated_Constant2'
 * '<S816>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/ForceClosed'
 * '<S817>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/ForceOpen'
 * '<S818>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/SCALAR_BLK'
 * '<S819>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/ForceClosed/Enumerated_Constant'
 * '<S820>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_A/ForceEngage/ForceOpen/Enumerated_Constant1'
 * '<S821>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState'
 * '<S822>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/SCALAR_BLK'
 * '<S823>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/Enumerated_Constant'
 * '<S824>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/Enumerated_Constant1'
 * '<S825>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/Enumerated_Constant2'
 * '<S826>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/ForceClosed'
 * '<S827>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/ForceOpen'
 * '<S828>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/SCALAR_BLK'
 * '<S829>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/ForceClosed/Enumerated_Constant'
 * '<S830>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdHigh_B/MaintainState/ForceOpen/Enumerated_Constant1'
 * '<S831>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdLow/ForceEngaged'
 * '<S832>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdLow/SCALAR_BLK'
 * '<S833>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdLow/ForceEngaged/Enumerated_Constant1'
 * '<S834>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdLow/ForceEngaged/Enumerated_Constant2'
 * '<S835>' : 'ADCR_ac/ADCR_MedTED2/ADCC_WEDReqArb/VehSpdLow/ForceEngaged/SCALAR_BLK'
 * '<S836>' : 'ADCR_ac/ADCR_MedTED2/ADCR_MedTED2_NF/Enumerated_Constant'
 * '<S837>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init'
 * '<S838>' : 'ADCR_ac/ADCR_PwrOn/Enumerated_Constant11'
 * '<S839>' : 'ADCR_ac/ADCR_PwrOn/Enumerated_Constant12'
 * '<S840>' : 'ADCR_ac/ADCR_PwrOn/Enumerated_Constant14'
 * '<S841>' : 'ADCR_ac/ADCR_PwrOn/Enumerated_Constant15'
 * '<S842>' : 'ADCR_ac/ADCR_PwrOn/Enumerated_Constant16'
 * '<S843>' : 'ADCR_ac/ADCR_PwrOn/Enumerated_Constant17'
 * '<S844>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated Constant'
 * '<S845>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant1'
 * '<S846>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant10'
 * '<S847>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant13'
 * '<S848>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant18'
 * '<S849>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant19'
 * '<S850>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant2'
 * '<S851>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant3'
 * '<S852>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant4'
 * '<S853>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant5'
 * '<S854>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant6'
 * '<S855>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant7'
 * '<S856>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant8'
 * '<S857>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/Enumerated_Constant9'
 * '<S858>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/SCALAR_BLK1'
 * '<S859>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/SCALAR_BLK2'
 * '<S860>' : 'ADCR_ac/ADCR_PwrOn/ADCC_Init/SCALAR_BLK3'
 */
#endif                                 /* RTW_HEADER_ADCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
