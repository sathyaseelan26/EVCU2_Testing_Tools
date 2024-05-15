/*
 * File: CCMB_ac.c
 *
 * Code generated for Simulink model 'CCMB_ac'.
 *
 * Model version                  : 1.347
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:13:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CCMB_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCMB
#include "MemMap.h"

VAR(DW_CCMB_ac_T, CCMB_VAR_INIT) CCMB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCMB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, CCMB_CODE) CCMB_MedTEB(void) /* Explicit Task: MedTEB */
{

#if !Rte_SysCon_Variant_CCMB_BLUEN && !Rte_SysCon_Variant_CCMB_COREBEV && !Rte_SysCon_Variant_CCMB_COREBEV_MY24 && Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 tmpRead;

#endif

#if !Rte_SysCon_Variant_CCMB_BLUEN && !Rte_SysCon_Variant_CCMB_COREBEV && !Rte_SysCon_Variant_CCMB_COREBEV_MY24 && Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 tmpRead_0;

#endif

#if !Rte_SysCon_Variant_CCMB_BLUEN && !Rte_SysCon_Variant_CCMB_COREBEV && !Rte_SysCon_Variant_CCMB_COREBEV_MY24 && Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 tmpRead_1;

#endif

#if !Rte_SysCon_Variant_CCMB_BLUEN && !Rte_SysCon_Variant_CCMB_COREBEV && !Rte_SysCon_Variant_CCMB_COREBEV_MY24 && Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 tmpRead_2;

#endif

#if !Rte_SysCon_Variant_CCMB_BLUEN && !Rte_SysCon_Variant_CCMB_COREBEV && !Rte_SysCon_Variant_CCMB_COREBEV_MY24 && Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 tmpRead_3;

#endif

#if !Rte_SysCon_Variant_CCMB_BLUEN && !Rte_SysCon_Variant_CCMB_COREBEV && !Rte_SysCon_Variant_CCMB_COREBEV_MY24 && Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 tmpRead_4;

#endif

#if !Rte_SysCon_Variant_CCMB_BLUEN && !Rte_SysCon_Variant_CCMB_COREBEV && !Rte_SysCon_Variant_CCMB_COREBEV_MY24 && Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 tmpRead_5;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_6;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_7;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_8;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_9;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_a;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_b;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_c;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_d;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_e;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_f;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_g;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_h;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_i;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_j;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_k;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_l;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_m;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_n;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_o;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_p;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_q;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_r;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_s;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_t;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_u;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_v;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_w;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_x;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_y;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_z;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_10;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_11;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_12;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_13;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_14;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_15;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_16;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_17;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_18;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_19;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1a;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1b;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1c;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1d;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1e;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1f;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1g;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1h;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1i;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1j;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1k;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1l;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1m;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1n;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1o;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1p;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1q;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1r;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1s;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1t;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 tmpRead_1u;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    boolean rtb_NOT4;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    boolean rtb_RelationalOperator3_na;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    boolean rtb_AND_pg;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_bu;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_ir;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_je;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ShiftL;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_is;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ECM_Ai;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Plock_;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_fl;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_REF_VE;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_LwsAng;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_d;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_IMPACT;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_i;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_SGCP_C;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_a0;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_AWDSys;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_k;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Displa;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Driver;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_a;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPCM_k;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_APM__p;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_jw;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Ther_b;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_eq;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_db;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_l;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_ma;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_bp;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_jl;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_ff;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ACC_Sy;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_APCM_h;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_mp;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_e;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_g;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_APCM_S;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_p;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Creep_;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_m;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_nh;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_o;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Ther_d;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_FuelCo;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Therma;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_SGCP_n;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BrkPdl;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_CmdT_a;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ABSF_o;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ABSFai;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ASRA_o;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ASRAct;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BrakeP;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_LHF_Sp;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_LatAcc;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ABSAct;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Brk_St;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_APM_Ct;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_SGCP_6;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_SGCP_C;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPCM_C;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPCM_D;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EngOff;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_LatA_h;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_SGCP_6;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_IBS3_S;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_CurrBa;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_TSRSts;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Bonn_c;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EVAP_T;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_KeyInI;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Bonnet;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ACC_On;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_BPCM_C;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_BPCM_D;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_BPCMCn;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_Charge;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_DC_Tim;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_AC_LnH;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_MCPA_6;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_MCPA_C;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_MCPB_6;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeCRDB_y_MCPB_C;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ACOutp;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Charge;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_DC_Tim;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EVSE_O;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ChrgFa;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_AC_LnH;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_ACC_Bl;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPA_6;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPB_6;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_GlobDr;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_CmdTot;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPC_a5;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_BPCM_c;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_Char_f;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_DC_T_o;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_AC_L_i;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPA_e;

#endif

#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_MCPB_a;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EngTqA;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EngTrq;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EngS_i;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EngSpd;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EngAct;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_EngMnS;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_RPMO_j;

#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    uint8 rtb_TmpSignalConversionAtVeSR1B_y_RPMOve;

#endif

#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    TeDFIB_e_FaultDebounceStatus tmpRead_1v;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/CCMB_10ms'
     */

    /* Logic: '<S5>/NOT4' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_CADM'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_CANC2_BCM'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_AEB_Systemsts_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_CmdIgnSts_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_TSRSts_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_NOT4);
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_RelationalOperator3_na);

    /* Logic: '<S5>/NOT4' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    rtb_NOT4 = (rtb_NOT4 || rtb_RelationalOperator3_na);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_CADM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_CADM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_CADM_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_AEB_Systemsts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_AEB_Systemsts_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_AEB_Systemsts_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_TSRSts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TSRSts_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_TSRSts_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_TSRSts);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_CANC2_BCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_CANC2_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_CANC2_BCM_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_a0);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_CmdIgnSts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CmdIgnSts_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_CmdIgnSts_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn);

#endif

    /* End of Logic: '<S5>/NOT4' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_GlobDrvMdRq_BCM_SigSts' */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_GlobDrvMdRq_BCM_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_GlobDrvMdRq_BCM_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_GlobDrvMdRq_BCM_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_GlobDr);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_GlobDrvMdRq_BCM_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ACC_On_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSR1B_y_BonnetAjarRawValSts_8_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_BonnetSts_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_CurrBattFailStatus_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EVAP_TEMP_P1C_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_IBS3_SOC_Accuracy_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_KeyInIgnSts_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ACC_On_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ACC_On_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ACC_On_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ACC_On);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BonnetAjarRawValSts_8_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BonnetAjarRawValSts_8_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BonnetAjarRawValSts_8_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Bonnet);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_KeyInIgnSts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_KeyInIgnSts_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_KeyInIgnSts_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_KeyInI);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EVAP_TEMP_P1C_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EVAP_TEMP_P1C_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EVAP_TEMP_P1C_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EVAP_T);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BonnetSts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BonnetSts_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BonnetSts_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Bonn_c);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_CurrBattFailStatus_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CurrBattFailStatus_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_CurrBattFailStatus_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_CurrBa);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_IBS3_SOC_Accuracy_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_IBS3_SOC_Accuracy_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_IBS3_SOC_Accuracy_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_IBS3_S);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_ACC_On_SigSts' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ABS_BusB' */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ABS_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ABS_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ABS_BusB_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ABS_BusB' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BrkTrq_FD3_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ABSActive_FD3_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ABSFailSts_FD3_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ASRActive_FD3_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_LHF_Spin_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BrkTrq_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BrkTrq_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BrkTrq_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ABSActive_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ABSActive_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ABSActive_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ABSAct);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_LHF_Spin_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LHF_Spin_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_LHF_Spin_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_LHF_Sp);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ASRActive_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ASRActive_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ASRActive_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ASRAct);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ABSFailSts_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ABSFailSts_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ABSFailSts_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ABSFai);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_BrkTrq_FD3_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_CmdTotBrkFricAxTrqFD3_SigSts' */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_CmdTotBrkFricAxTrqFD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CmdTotBrkFricAxTrqFD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_CmdTotBrkFricAxTrqFD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_CmdTot);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_CmdTotBrkFricAxTrqFD3_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BrkPdl_Flt_FD3_SigSts' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BrkPdl_Flt_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BrkPdl_Flt_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BrkPdl_Flt_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BrkPdl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_BrkPdl_Flt_FD3_SigSts' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_IDCM_CANC11' */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_IDCM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_IDCM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_IDCM_CANC11_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_jl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_IDCM_CANC11' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_APM_CtrlSts_Fbk_FD11_SigSts' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_APM_CtrlSts_Fbk_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_APM_CtrlSts_Fbk_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_APM_CtrlSts_Fbk_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_APM_CtrlSts_Fbk_FD11_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_AC_LnHi_FD11_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ECM_A_CRC_MC'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ACOutput_Frequency_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ChargerFaultStatesFD11_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ChrgFailSts_FD11_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_DC_TimeOut_FD11_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EVSE_OfdACSingPhasFD11_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_AC_LnHi_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_AC_LnHi_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_AC_LnHi_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_AC_LnH);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ChrgFailSts_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ChrgFailSts_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ChrgFailSts_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ChrgFa);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EVSE_OfdACSingPhasFD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EVSE_OfdACSingPhasFD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EVSE_OfdACSingPhasFD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EVSE_O);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_DC_TimeOut_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_DC_TimeOut_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_DC_TimeOut_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_DC_Tim);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ChargerFaultStatesFD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ChargerFaultStatesFD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ChargerFaultStatesFD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Charge);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ACOutput_Frequency_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ACOutput_Frequency_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ACOutput_Frequency_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ACOutp);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ECM_A_CRC_MC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ECM_A_CRC_MC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ECM_A_CRC_MC_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_bp);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_AC_LnHi_FD11_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOWrn_FD11_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_Cell_VoltAvg_FD11_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_DCCntctrMTOW_FD11_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOWrn_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCMCntctrsMTOWrn_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCMCntctrsMTOWrn_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_DCCntctrMTOW_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCM_DCCntctrMTOW_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCM_DCCntctrMTOW_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPCM_D);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_Cell_VoltAvg_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCM_Cell_VoltAvg_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCM_Cell_VoltAvg_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPCM_C);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOWrn_FD11_SigSts' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_A_CRC_MC' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_B_CRC_MC'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_6SO_Status_P_FD16_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_Cal_ID_Idx_FD16_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_6SO_Status_P_FD16_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_Cal_ID_Idx_FD16_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_A_CRC_MC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_A_CRC_MC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_A_CRC_MC_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_mp);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_Cal_ID_Idx_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPA_Cal_ID_Idx_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPA_Cal_ID_Idx_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_6SO_Status_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPA_6SO_Status_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPA_6SO_Status_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPA_6);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_B_CRC_MC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_B_CRC_MC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_B_CRC_MC_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_e);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_Cal_ID_Idx_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPB_Cal_ID_Idx_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPB_Cal_ID_Idx_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_6SO_Status_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPB_6SO_Status_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPB_6SO_Status_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPB_6);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_A_CRC_MC' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_BECM_CANC11' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_BECM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_CANC11_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_BECM_CANC11' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOWrn_FD5_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_Cell_VoltAvg_FD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_DCCntctrMTOW_FD5_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOWrn_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCMCntctrsMTOWrn_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCMCntctrsMTOWrn_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_DCCntctrMTOW_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCM_DCCntctrMTOW_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCM_DCCntctrMTOW_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPCM_c);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCM_Cell_VoltAvg_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCM_Cell_VoltAvg_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCM_Cell_VoltAvg_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPC_a5);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOWrn_FD5_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOpWrn_FD5_SigSts' */
#if Rte_SysCon_Variant_CCMB_BLUEN

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOpWrn_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BPCMCntctrsMTOpWrn_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BPCMCntctrsMTOpWrn_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BPCM_k);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_BPCMCntctrsMTOpWrn_FD5_SigSts' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_A_CANC11' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_B_CANC11'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_6SO_Status_P_FD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_Cal_ID_Idx_FD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_6SO_Status_P_FD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_Cal_ID_Idx_FD5_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_A_CANC11_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_nh);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_Cal_ID_Idx_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPA_Cal_ID_Idx_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPA_Cal_ID_Idx_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPA_6SO_Status_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPA_6SO_Status_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPA_6SO_Status_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPA_e);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_B_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_B_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_B_CANC11_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_o);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_Cal_ID_Idx_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPB_Cal_ID_Idx_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPB_Cal_ID_Idx_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_MCPB_6SO_Status_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPB_6SO_Status_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_MCPB_6SO_Status_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_MCPB_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_DMCM_A_CANC11' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ABSCM_A' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ORC'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LosCommBECM_A'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ABSFailSts_FD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ASRActive_FD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_BrakePdlPosn_FD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_Brk_Stat_FD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_CmdTotBrkFricAxTrqFD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_IMPACTCommand_FD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_LatAcceleration_FD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_LatAcceltnOffset_BSM_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_REF_VEH_SPEED_FD14_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ABSCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ABSCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ABSCM_A_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_fl);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_REF_VEH_SPEED_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_REF_VEH_SPEED_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_REF_VEH_SPEED_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_REF_VE);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_Brk_Stat_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Brk_Stat_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_Brk_Stat_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Brk_St);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_LatAcceltnOffset_BSM_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LatAcceltnOffset_BSM_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_LatAcceltnOffset_BSM_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_LatAcc);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ASRActive_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ASRActive_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ASRActive_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ASRA_o);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ABSFailSts_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ABSFailSts_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ABSFailSts_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ABSF_o);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_CmdTotBrkFricAxTrqFD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CmdTotBrkFricAxTrqFD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_CmdTotBrkFricAxTrqFD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_CmdT_a);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_BrakePdlPosn_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BrakePdlPosn_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_BrakePdlPosn_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_BrakeP);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ORC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ORC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ORC_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_d);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_IMPACTCommand_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_IMPACTCommand_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_IMPACTCommand_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_IMPACT);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_LatAcceleration_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LatAcceleration_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_LatAcceleration_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_LatA_h);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_bu);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ABSCM_A' */

    /* SignalConversion generated from: '<S1>/VeCRDB_y_BPCMCntctrsMTOWrn_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeCRDB_y_BPCM_Cell_VoltAvg_SigSts'
     *  SignalConversion generated from: '<S1>/VeCRDB_y_BPCM_DCCntctrMTOW_SigSts'
     *  SignalConversion generated from: '<S1>/VeCRDB_y_MCPA_6SO_Status_P_SigSts'
     *  SignalConversion generated from: '<S1>/VeCRDB_y_MCPA_Cal_ID_Idx_SigSts'
     *  SignalConversion generated from: '<S1>/VeCRDB_y_MCPB_6SO_Status_P_SigSts'
     *  SignalConversion generated from: '<S1>/VeCRDB_y_MCPB_Cal_ID_Idx_SigSts'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ESM_CRC_MC'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_DMCM_A_ePT2'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_DMCM_B'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_APCM_Stat_FD3_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeCRDB_y_BPCMCntctrsMTOWrn_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCMCntctrsMTOWrn_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_BPCMCntctrsMTOWrn_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_BPCMCn);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_BPCM_DCCntctrMTOW_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_DCCntctrMTOW_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_BPCM_DCCntctrMTOW_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_BPCM_D);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_BPCM_Cell_VoltAvg_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_Cell_VoltAvg_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_VoltAvg_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_BPCM_C);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_DMCM_A_ePT2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_DMCM_A_ePT2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_DMCM_A_ePT2_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_l);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_MCPA_Cal_ID_Idx_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_Cal_ID_Idx_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_MCPA_Cal_ID_Idx_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_MCPA_C);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_MCPA_6SO_Status_P_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_6SO_Status_P_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_MCPA_6SO_Status_P_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_MCPA_6);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_DMCM_B' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_DMCM_B'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_DMCM_B_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_ma);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_MCPB_Cal_ID_Idx_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPB_Cal_ID_Idx_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_MCPB_Cal_ID_Idx_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_MCPB_C);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_MCPB_6SO_Status_P_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPB_6SO_Status_P_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_MCPB_6SO_Status_P_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_MCPB_6);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ESM_CRC_MC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ESM_CRC_MC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ESM_CRC_MC_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_g);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_APCM_Stat_FD3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_APCM_Stat_FD3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_APCM_Stat_FD3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_APCM_S);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCRDB_y_BPCMCntctrsMTOWrn_SigSts' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_CCN_CRC_MC' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_CCN_CRC_MC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_CCN_CRC_MC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_CCN_CRC_MC_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_k);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_CCN_CRC_MC' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_Creep_SigSts' */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_Creep_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Creep_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_Creep_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Creep_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_Creep_SigSts' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ESM_BusB' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ESM_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ESM_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ESM_BusB_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_je);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ESM_BusB' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_APCM_Stat_FD16_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_IDCM'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_APCM_Stat_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_APCM_Stat_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_APCM_Stat_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_APCM_h);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_IDCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_IDCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_IDCM_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_m);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_APCM_Stat_FD16_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_APM_CtrlSts_Fbk_FD5_SigSts' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_APM_CtrlSts_Fbk_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_APM_CtrlSts_Fbk_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_APM_CtrlSts_Fbk_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_APM__p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_APM_CtrlSts_Fbk_FD5_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_AC_LnHi_FD5_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_BCCM_C'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_Charger_FaultStatesFD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_DC_TimeOut_FD5_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_AC_LnHi_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_AC_LnHi_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_AC_LnHi_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_AC_L_i);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_DC_TimeOut_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_DC_TimeOut_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_DC_TimeOut_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_DC_T_o);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_Charger_FaultStatesFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Charger_FaultStatesFD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_Charger_FaultStatesFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Char_f);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_BCCM_C' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_BCCM_C'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_BCCM_C_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_db);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_AC_LnHi_FD5_SigSts' */

    /* SignalConversion generated from: '<S1>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_APM_CtrlSts_Fbk_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_APM_Ct);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' */

    /* SignalConversion generated from: '<S1>/VeCRDB_y_AC_LnHi_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeCRDB_y_ChargerFaultStates_SigSts'
     *  SignalConversion generated from: '<S1>/VeCRDB_y_DC_TimeOut_SigSts'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostCommISM'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeCRDB_y_AC_LnHi_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_AC_LnHi_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_AC_LnHi_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_AC_LnH);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_DC_TimeOut_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_DC_TimeOut_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_DC_TimeOut_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_DC_Tim);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_ChargerFaultStates_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_ChargerFaultStates_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_ChargerFaultStates_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_Charge);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostCommISM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommISM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommISM_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_eq);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCRDB_y_AC_LnHi_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ACC_Systemsts_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_AutoDrvSys_CM_A'
     */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ACC_Systemsts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ACC_Systemsts_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ACC_Systemsts_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ACC_Sy);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_AutoDrvSys_CM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_AutoDrvSys_CM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_AutoDrvSys_CM_A_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_ff);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_ACC_Systemsts_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_FuelConsumption_GAG_3_SigSts' */
#if Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_FuelConsumption_GAG_3_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_FuelConsumption_GAG_3_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_FuelConsumption_GAG_3_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_FuelCo);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_FuelConsumption_GAG_3_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ECM_AirflowRequest_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvDataECM'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ECM_AirflowRequest_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ECM_AirflowRequest_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ECM_AirflowRequest_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ECM_Ai);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvDataECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvDataECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvDataECM_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_jw);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_ECM_AirflowRequest_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMngmntActivWFD5_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EngMnSprkNmCrArTqCpFD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EngSpd_FD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EngTrqACCCapabilityFD5_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_RPMOverRev_W_FD5_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMngmntActivWFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ThermalMngmntActivWFD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ThermalMngmntActivWFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Therma);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_RPMOverRev_W_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_RPMOverRev_W_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_RPMOverRev_W_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_RPMOve);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngMnSprkNmCrArTqCpFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngMnSprkNmCrArTqCpFD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EngMnSprkNmCrArTqCpFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EngMnS);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngSpd_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngSpd_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EngSpd_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EngSpd);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngTrqACCCapabilityFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngTrqACCCapabilityFD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EngTrqACCCapabilityFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EngTrq);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMngmntActivWFD5_SigSts' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ECM_BusB' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ECM_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ECM_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ECM_BusB_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_is);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_ECM_BusB' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMangmntActW_FD5_SigSts' */
#if Rte_SysCon_Variant_CCMB_BLUEN

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMangmntActW_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ThermalMangmntActW_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ThermalMangmntActW_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Ther_b);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMangmntActW_FD5_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMngmtActvWFD16_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EngActStdyStTorq_FD16_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EngSpd_FD16_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_EngTqACCCapabilityFD16_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_RPMOverRev_W_FD16_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMngmtActvWFD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ThermalMngmtActvWFD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ThermalMngmtActvWFD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Ther_d);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_RPMOverRev_W_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_RPMOverRev_W_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_RPMOverRev_W_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_RPMO_j);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngActStdyStTorq_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngActStdyStTorq_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EngActStdyStTorq_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EngAct);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngSpd_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngSpd_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EngSpd_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EngS_i);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngTqACCCapabilityFD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngTqACCCapabilityFD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EngTqACCCapabilityFD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EngTqA);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_ThermalMngmtActvWFD16_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngOffTmPT_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeCRDB_y_SGCP_6SO_Status_P_SigSts'
     *  SignalConversion generated from: '<S1>/VeCRDB_y_SGCP_Cal_ID_Idx_SigSts'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_GenrA_CM_CRC'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_GenrA_CM'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_SGCP_6SO_Status_P_FD16_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_SGCP_Cal_ID_Idx_FD16_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_EngOffTmPT_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngOffTmPT_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_EngOffTmPT_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_EngOff);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_InvData_GenrA_CM_CRC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_GenrA_CM_CRC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_GenrA_CM_CRC_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_i);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_SGCP_Cal_ID_Idx_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_SGCP_Cal_ID_Idx_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_SGCP_Cal_ID_Idx_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_SGCP_C);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_SGCP_6SO_Status_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_SGCP_6SO_Status_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_SGCP_6SO_Status_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_SGCP_6);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_LostComm_GenrA_CM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_GenrA_CM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_GenrA_CM_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_ir);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_SGCP_Cal_ID_Idx_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Cal_ID_Idx_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_SGCP_Cal_ID_Idx_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_SGCP_C);

    /* SignalConversion generated from: '<S1>/VeCRDB_y_SGCP_6SO_Status_P_SigSts' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_6SO_Status_P_SigSts'
     */
    (void)Rte_Read_VeCRDB_y_SGCP_6SO_Status_P_SigSts_Value
        (&rtb_TmpSignalConversionAtVeCRDB_y_SGCP_6);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_EngOffTmPT_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ACC_Blind_SigSts' */
#if Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ACC_Blind_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ACC_Blind_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ACC_Blind_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ACC_Bl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_ACC_Blind_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_SGCP_Cal_ID_Idx_FD5_SigSts' */
#if Rte_SysCon_Variant_CCMB_PEGASUS

    /* SignalConversion generated from: '<S1>/VeSR1B_y_SGCP_Cal_ID_Idx_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_SGCP_Cal_ID_Idx_FD5_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_SGCP_Cal_ID_Idx_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_SGCP_n);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_SGCP_Cal_ID_Idx_FD5_SigSts' */

    /* SignalConversion generated from: '<S1>/VeSR1B_y_AWDSysStat_SigSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeSR1B_y_DisplayedSpeedLimSts_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_DriverEngineOffRequest_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_LwsAngle_FD14_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_Plock_fdbk_sts_FD11_SigSts'
     *  SignalConversion generated from: '<S1>/VeSR1B_y_ShiftLeverPosnReq_FD11_SigSts'
     */
#if Rte_SysCon_Variant_CCMB_BLUEN

    /* SignalConversion generated from: '<S1>/VeSR1B_y_AWDSysStat_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_AWDSysStat_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_AWDSysStat_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_AWDSys);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_DisplayedSpeedLimSts_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_DisplayedSpeedLimSts_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_DisplayedSpeedLimSts_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Displa);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_DriverEngineOffRequest_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_DriverEngineOffRequest_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_DriverEngineOffRequest_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Driver);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_ShiftLeverPosnReq_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ShiftLeverPosnReq_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_ShiftLeverPosnReq_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_ShiftL);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_Plock_fdbk_sts_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Plock_fdbk_sts_FD11_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_Plock_fdbk_sts_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_Plock_);

    /* SignalConversion generated from: '<S1>/VeSR1B_y_LwsAngle_FD14_SigSts' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LwsAngle_FD14_SigSts'
     */
    (void)Rte_Read_VeSR1B_y_LwsAngle_FD14_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR1B_y_LwsAng);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSR1B_y_AWDSysStat_SigSts' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_COREBEV_MY24 || Rte_SysCon_Variant_CCMB_PEGASUS

    /* Outputs for Atomic SubSystem: '<S1>/10ms_VariantOptions' */
#if Rte_SysCon_Variant_CCMB_BLUEN

    /* Outputs for Atomic SubSystem: '<S4>/BLUEN' */
    /* RelationalOperator: '<S32>/Relational Operator3' incorporates:
     *  Constant: '<S32>/Constant3'
     *  S-Function (sfix_bitop): '<S32>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_bu) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S32>/EdgeFalling1' */
    /* Logic: '<S33>/AND' incorporates:
     *  Logic: '<S33>/OR1'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ej));

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ej = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S32>/EdgeFalling1' */

    /* Switch: '<S32>/Switch' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BMS_HV_HitempThrsh_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCMCntctrsMTOpWrn_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_Cell_Volt_Avg_SigSts'
     *  Inport: '<Root>/VeCRDB_y_BPCM_DC_CntctrMTOW_SigSts'
     *  Inport: '<Root>/VeCRDB_y_ImpactHardwire_SigSts'
     *  Logic: '<S32>/OR4'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Constant: '<S37>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeCRDB_y_BMS_HV_HitempThrsh_SigSts_Value(&tmpRead_18);
        (void)Rte_Read_VeCRDB_y_ImpactHardwire_SigSts_Value(&tmpRead_17);
        (void)Rte_Read_VeCRDB_y_BPCM_Cell_Volt_Avg_SigSts_Value(&tmpRead_16);
        (void)Rte_Read_VeCRDB_y_BPCM_DC_CntctrMTOW_SigSts_Value(&tmpRead_15);
        (void)Rte_Read_VeCRDB_y_BPCMCntctrsMTOpWrn_SigSts_Value(&tmpRead_14);

        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S38>/Constant'
         *  Constant: '<S39>/Constant'
         *  Inport: '<Root>/VeCRDB_y_BMS_HV_HitempThrsh_SigSts'
         *  Inport: '<Root>/VeCRDB_y_BPCMCntctrsMTOpWrn_SigSts'
         *  Inport: '<Root>/VeCRDB_y_BPCM_Cell_Volt_Avg_SigSts'
         *  Inport: '<Root>/VeCRDB_y_BPCM_DC_CntctrMTOW_SigSts'
         *  Inport: '<Root>/VeCRDB_y_ImpactHardwire_SigSts'
         *  Logic: '<S10>/OR2'
         *  S-Function (sfix_bitop): '<S10>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S10>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S10>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S10>/Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S10>/Bitwise Operator5'
         */
        if ((((((((uint32)tmpRead_14) & 7U) != 0U) || ((((uint32)tmpRead_15) &
                 7U) != 0U)) || ((((uint32)tmpRead_16) & 7U) != 0U)) ||
                ((((uint32)tmpRead_17) & 7U) != 0U)) || ((((uint32)tmpRead_18) &
              7U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Switch: '<S32>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S32>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_LostCommABSCM' */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommABSCM_Value(&tmpRead_1s);

    /* RelationalOperator: '<S40>/Relational Operator3' incorporates:
     *  Constant: '<S40>/Constant3'
     *  S-Function (sfix_bitop): '<S40>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_1s) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S40>/EdgeFalling1' */
    /* Logic: '<S41>/AND' incorporates:
     *  Logic: '<S41>/OR1'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_eh));

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_eh = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S40>/EdgeFalling1' */

    /* Switch: '<S40>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CmdtBrkFrictAxlTorqFD3_SigSts'
     *  Logic: '<S40>/OR4'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommABSCM' incorporates:
         *  Constant: '<S45>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommABSCM_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_CmdtBrkFrictAxlTorqFD3_SigSts_Value(&tmpRead_1t);

        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S46>/Constant'
         *  Constant: '<S47>/Constant'
         *  Inport: '<Root>/VeSR1B_y_CmdtBrkFrictAxlTorqFD3_SigSts'
         *  Logic: '<S11>/OR1'
         *  Logic: '<S11>/OR2'
         *  Logic: '<S11>/OR3'
         *  Logic: '<S11>/OR4'
         *  Logic: '<S11>/OR5'
         *  Logic: '<S11>/OR6'
         *  Logic: '<S11>/OR7'
         *  Logic: '<S11>/OR8'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator10'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator11'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator12'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator13'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator14'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator7'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator8'
         *  S-Function (sfix_bitop): '<S11>/Bitwise Operator9'
         */
        if (((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 7U) !=
                   0U) && ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq) &
                            7U) != 0U)) || (((((uint32)
                     rtb_TmpSignalConversionAtVeSR1B_y_Brk_St) & 7U) != 0U) &&
                  ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSAct) & 7U) !=
                   0U))) || (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_LatAcc)
                               & 7U) != 0U) && ((((uint32)
                    rtb_TmpSignalConversionAtVeSR1B_y_LHF_Sp) & 7U) != 0U))) ||
                (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BrakeP) & 7U) !=
                  0U) && ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRAct) &
                           7U) != 0U))) || (((((uint32)
                  rtb_TmpSignalConversionAtVeSR1B_y_ASRA_o) & 7U) != 0U) &&
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSFai) & 7U) != 0U)))
             || (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSF_o) & 7U) !=
                  0U) && ((((uint32)tmpRead_1t) & 7U) != 0U))) || (((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_CmdT_a) & 7U) != 0U) &&
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BrkPdl) & 7U) != 0U)))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommABSCM' incorporates:
         *  Switch: '<S40>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommABSCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S40>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_LostCommDrvMtrPwrInvCntrlMod' */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommDrvMtrPwrInvCntrlMod_Value
        (&tmpRead_1i);

    /* RelationalOperator: '<S48>/Relational Operator3' incorporates:
     *  Constant: '<S48>/Constant3'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_1i) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S48>/EdgeFalling1' */
    /* Logic: '<S49>/AND' incorporates:
     *  Logic: '<S49>/OR1'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cvd));

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cvd = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S48>/EdgeFalling1' */

    /* Switch: '<S48>/Switch' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BstConvLorIGBT_TF_SigSts'
     *  Inport: '<Root>/VeCRDB_y_MCPA_Inverter_Temp_SigSts'
     *  Inport: '<Root>/VeCRDB_y_MCPA_Serv_Lamp_Req_SigSts'
     *  Inport: '<Root>/VeCRDB_y_MCPB_Inverter_Temp_SigSts'
     *  Inport: '<Root>/VeCRDB_y_MCPB_ServLampReq_SigSts'
     *  Inport: '<Root>/VeCRDB_y_PIM_A_3PS_Pos_SigSts'
     *  Inport: '<Root>/VeCRDB_y_PIM_B_3PS_Pos_SigSts'
     *  Logic: '<S48>/OR4'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommDrvMtrPwrInvCntrlMod' incorporates:
         *  Constant: '<S53>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommDrvMtrPwrInvCntrlMod_Value
            (CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeCRDB_y_PIM_B_3PS_Pos_SigSts_Value(&tmpRead_1p);
        (void)Rte_Read_VeCRDB_y_PIM_A_3PS_Pos_SigSts_Value(&tmpRead_1o);
        (void)Rte_Read_VeCRDB_y_BstConvLorIGBT_TF_SigSts_Value(&tmpRead_1n);
        (void)Rte_Read_VeCRDB_y_MCPB_ServLampReq_SigSts_Value(&tmpRead_1m);
        (void)Rte_Read_VeCRDB_y_MCPB_Inverter_Temp_SigSts_Value(&tmpRead_1l);
        (void)Rte_Read_VeCRDB_y_MCPA_Inverter_Temp_SigSts_Value(&tmpRead_1k);
        (void)Rte_Read_VeCRDB_y_MCPA_Serv_Lamp_Req_SigSts_Value(&tmpRead_1j);

        /* Switch: '<S48>/Switch1' incorporates:
         *  Constant: '<S54>/Constant'
         *  Constant: '<S55>/Constant'
         *  Inport: '<Root>/VeCRDB_y_BstConvLorIGBT_TF_SigSts'
         *  Inport: '<Root>/VeCRDB_y_MCPA_Inverter_Temp_SigSts'
         *  Inport: '<Root>/VeCRDB_y_MCPA_Serv_Lamp_Req_SigSts'
         *  Inport: '<Root>/VeCRDB_y_MCPB_Inverter_Temp_SigSts'
         *  Inport: '<Root>/VeCRDB_y_MCPB_ServLampReq_SigSts'
         *  Inport: '<Root>/VeCRDB_y_PIM_A_3PS_Pos_SigSts'
         *  Inport: '<Root>/VeCRDB_y_PIM_B_3PS_Pos_SigSts'
         *  Logic: '<S12>/OR2'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator7'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Operator8'
         */
        if (((((((((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_APM_Ct) & 7U) !=
                   0U) || ((((uint32)tmpRead_1j) & 7U) != 0U)) || ((((uint32)
                    tmpRead_1k) & 7U) != 0U)) || ((((uint32)tmpRead_1l) & 7U) !=
                 0U)) || ((((uint32)tmpRead_1m) & 7U) != 0U)) || ((((uint32)
                 tmpRead_1n) & 7U) != 0U)) || ((((uint32)tmpRead_1o) & 7U) != 0U))
            || ((((uint32)tmpRead_1p) & 7U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommDrvMtrPwrInvCntrlMod' incorporates:
         *  Switch: '<S48>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommDrvMtrPwrInvCntrlMod_Value
            (tmpRead_1v);
    }

    /* End of Switch: '<S48>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_ParkPawlCM' */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_ParkPawlCM_Value(&tmpRead_1q);

    /* RelationalOperator: '<S56>/Relational Operator3' incorporates:
     *  Constant: '<S56>/Constant3'
     *  S-Function (sfix_bitop): '<S56>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_1q) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S56>/EdgeFalling1' */
    /* Logic: '<S57>/AND' incorporates:
     *  Logic: '<S57>/OR1'
     *  UnitDelay: '<S57>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_g1));

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_g1 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S56>/EdgeFalling1' */

    /* Switch: '<S56>/Switch' incorporates:
     *  Inport: '<Root>/VeCRDB_y_Plock_fdbk_sts_SigSts'
     *  Logic: '<S56>/OR4'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_ParkPawlCM' incorporates:
         *  Constant: '<S61>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_ParkPawlCM_Value
            (CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeCRDB_y_Plock_fdbk_sts_SigSts_Value(&tmpRead_1r);

        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S62>/Constant'
         *  Constant: '<S63>/Constant'
         *  Inport: '<Root>/VeCRDB_y_Plock_fdbk_sts_SigSts'
         *  S-Function (sfix_bitop): '<S13>/Bitwise Operator1'
         */
        if ((((sint32)tmpRead_1r) & 7) > 0)
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_ParkPawlCM' incorporates:
         *  Switch: '<S56>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_ParkPawlCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S56>/Switch' */

    /* RelationalOperator: '<S64>/Relational Operator3' incorporates:
     *  Constant: '<S64>/Constant3'
     *  S-Function (sfix_bitop): '<S64>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ir) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S64>/EdgeFalling1' */
    /* Logic: '<S65>/AND' incorporates:
     *  Logic: '<S65>/OR1'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_hl));

    /* Update for UnitDelay: '<S65>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_hl = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S64>/EdgeFalling1' */

    /* Switch: '<S64>/Switch' incorporates:
     *  Logic: '<S14>/OR2'
     *  Logic: '<S64>/OR4'
     *  S-Function (sfix_bitop): '<S14>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S14>/Bitwise Operator3'
     *  Switch: '<S64>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_GenrA_CM' incorporates:
         *  Constant: '<S69>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_GenrA_CM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_SGCP_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_SGCP_6) & 7U) != 0U))
        {
            /* Switch: '<S64>/Switch1' incorporates:
             *  Constant: '<S70>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S64>/Switch1' incorporates:
             *  Constant: '<S71>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_GenrA_CM' incorporates:
         *  Switch: '<S64>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_GenrA_CM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S64>/Switch' */

    /* RelationalOperator: '<S72>/Relational Operator3' incorporates:
     *  Constant: '<S72>/Constant3'
     *  S-Function (sfix_bitop): '<S72>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_je) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S72>/EdgeFalling1' */
    /* Logic: '<S73>/AND' incorporates:
     *  Logic: '<S73>/OR1'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_gp));

    /* Update for UnitDelay: '<S73>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_gp = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S72>/EdgeFalling1' */

    /* Switch: '<S72>/Switch' incorporates:
     *  Logic: '<S72>/OR4'
     *  S-Function (sfix_bitop): '<S15>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S15>/Bitwise Operator4'
     *  Switch: '<S72>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_ShiftL) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Constant: '<S77>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_ShiftL) & 3) > 0)
        {
            /* Switch: '<S72>/Switch1' incorporates:
             *  Constant: '<S78>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S72>/Switch1' incorporates:
             *  Constant: '<S79>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Switch: '<S72>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S72>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_DMCM_A_InvDataBPCM' */
    (void)Rte_Read_VeDMAB_y_StatusByte_DMCM_A_InvDataBPCM_Value(&tmpRead_v);

    /* RelationalOperator: '<S80>/Relational Operator3' incorporates:
     *  Constant: '<S80>/Constant3'
     *  S-Function (sfix_bitop): '<S80>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_v) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S80>/EdgeFalling1' */
    /* Logic: '<S81>/AND' incorporates:
     *  Logic: '<S81>/OR1'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jp));

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jp = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S80>/EdgeFalling1' */

    /* Switch: '<S80>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BMS_HV_HiTempThrs_FD11_SigSts'
     *  Inport: '<Root>/VeSR1B_y_ImpactHardwire_FD11_SigSts'
     *  Logic: '<S80>/OR4'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_DMCM_A_InvDataBPCM' incorporates:
         *  Constant: '<S85>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_DMCM_A_InvDataBPCM_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_BMS_HV_HiTempThrs_FD11_SigSts_Value(&tmpRead_u);
        (void)Rte_Read_VeSR1B_y_ImpactHardwire_FD11_SigSts_Value(&tmpRead_t);

        /* Switch: '<S80>/Switch1' incorporates:
         *  Constant: '<S86>/Constant'
         *  Constant: '<S87>/Constant'
         *  Inport: '<Root>/VeSR1B_y_BMS_HV_HiTempThrs_FD11_SigSts'
         *  Inport: '<Root>/VeSR1B_y_ImpactHardwire_FD11_SigSts'
         *  Logic: '<S16>/OR'
         *  S-Function (sfix_bitop): '<S16>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S16>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S16>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S16>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S16>/Bitwise Operator6'
         */
        if ((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 3U) != 0U)
               || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_D) & 3U) !=
                   0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_C)
                             & 3U) != 0U)) || ((((uint32)tmpRead_t) & 3U) != 0U))
            || ((((uint32)tmpRead_u) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_DMCM_A_InvDataBPCM' incorporates:
         *  Switch: '<S80>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_DMCM_A_InvDataBPCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S80>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvDataFD11DMPI' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvDataFD11DMPI_Value(&tmpRead_l);

    /* RelationalOperator: '<S88>/Relational Operator3' incorporates:
     *  Constant: '<S88>/Constant3'
     *  S-Function (sfix_bitop): '<S88>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_l) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S88>/EdgeFalling1' */
    /* Logic: '<S89>/AND' incorporates:
     *  Logic: '<S89>/OR1'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jk));

    /* Update for UnitDelay: '<S89>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jk = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S88>/EdgeFalling1' */

    /* Switch: '<S88>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BstConvLwrIGBT_TF_FD11_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPA_InverterTemp_FD11_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPA_ServLamp_Req_FD11_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPB_InverterTemp_FD11_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPB_ServLamp_Req_FD11_SigSts'
     *  Inport: '<Root>/VeSR1B_y_PIM_A_3PS_Pos_FD11_SigSts'
     *  Inport: '<Root>/VeSR1B_y_PIM_B_3PS_Pos_FD11_SigSts'
     *  Logic: '<S88>/OR4'
     *  S-Function (sfix_bitop): '<S17>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataFD11DMPI' incorporates:
         *  Constant: '<S93>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataFD11DMPI_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_PIM_B_3PS_Pos_FD11_SigSts_Value(&tmpRead_s);
        (void)Rte_Read_VeSR1B_y_PIM_A_3PS_Pos_FD11_SigSts_Value(&tmpRead_r);
        (void)Rte_Read_VeSR1B_y_BstConvLwrIGBT_TF_FD11_SigSts_Value(&tmpRead_q);
        (void)Rte_Read_VeSR1B_y_MCPB_InverterTemp_FD11_SigSts_Value(&tmpRead_p);
        (void)Rte_Read_VeSR1B_y_MCPB_ServLamp_Req_FD11_SigSts_Value(&tmpRead_o);
        (void)Rte_Read_VeSR1B_y_MCPA_InverterTemp_FD11_SigSts_Value(&tmpRead_n);
        (void)Rte_Read_VeSR1B_y_MCPA_ServLamp_Req_FD11_SigSts_Value(&tmpRead_m);

        /* Switch: '<S88>/Switch1' incorporates:
         *  Constant: '<S94>/Constant'
         *  Constant: '<S95>/Constant'
         *  Inport: '<Root>/VeSR1B_y_BstConvLwrIGBT_TF_FD11_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPA_InverterTemp_FD11_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPA_ServLamp_Req_FD11_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPB_InverterTemp_FD11_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPB_ServLamp_Req_FD11_SigSts'
         *  Inport: '<Root>/VeSR1B_y_PIM_A_3PS_Pos_FD11_SigSts'
         *  Inport: '<Root>/VeSR1B_y_PIM_B_3PS_Pos_FD11_SigSts'
         *  Logic: '<S17>/OR'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator7'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator8'
         *  S-Function (sfix_bitop): '<S17>/Bitwise Operator9'
         */
        if (((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 3U) !=
                   0U) || ((((uint32)tmpRead_m) & 3U) != 0U)) || ((((uint32)
                    tmpRead_n) & 3U) != 0U)) || ((((uint32)tmpRead_o) & 3U) !=
                 0U)) || ((((uint32)tmpRead_p) & 3U) != 0U)) || ((((uint32)
                 tmpRead_q) & 3U) != 0U)) || ((((uint32)tmpRead_r) & 3U) != 0U))
            || ((((uint32)tmpRead_s) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataFD11DMPI' incorporates:
         *  Switch: '<S88>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataFD11DMPI_Value(tmpRead_1v);
    }

    /* End of Switch: '<S88>/Switch' */

    /* RelationalOperator: '<S96>/Relational Operator3' incorporates:
     *  Constant: '<S96>/Constant3'
     *  S-Function (sfix_bitop): '<S96>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_is) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S96>/EdgeFalling1' */
    /* Logic: '<S97>/AND' incorporates:
     *  Logic: '<S97>/OR1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_nt));

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_nt = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S96>/EdgeFalling1' */

    /* Switch: '<S96>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CatHtgStateActive_SigSts'
     *  Inport: '<Root>/VeSR1B_y_Crank_Maturing_Fault_SigSts'
     *  Inport: '<Root>/VeSR1B_y_RPMOverRev_W_SigSts'
     *  Logic: '<S96>/OR4'
     *  S-Function (sfix_bitop): '<S18>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_ECM_Ai) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_BusB' incorporates:
         *  Constant: '<S101>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_CatHtgStateActive_SigSts_Value(&tmpRead_z);
        (void)Rte_Read_VeSR1B_y_RPMOverRev_W_SigSts_Value(&tmpRead_y);
        (void)Rte_Read_VeSR1B_y_Crank_Maturing_Fault_SigSts_Value(&tmpRead_x);

        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S102>/Constant'
         *  Constant: '<S103>/Constant'
         *  Inport: '<Root>/VeSR1B_y_CatHtgStateActive_SigSts'
         *  Inport: '<Root>/VeSR1B_y_Crank_Maturing_Fault_SigSts'
         *  Inport: '<Root>/VeSR1B_y_RPMOverRev_W_SigSts'
         *  Logic: '<S18>/OR'
         *  S-Function (sfix_bitop): '<S18>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S18>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S18>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S18>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S18>/Bitwise Operator8'
         */
        if ((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ECM_Ai) & 3U) != 0U)
               || ((((uint32)tmpRead_x) & 3U) != 0U)) || ((((uint32)tmpRead_y) &
                3U) != 0U)) || ((((uint32)tmpRead_z) & 3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_EngOff) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_BusB' incorporates:
         *  Switch: '<S96>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S96>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvDataPBW' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvDataPBW_Value(&tmpRead_w);

    /* RelationalOperator: '<S104>/Relational Operator3' incorporates:
     *  Constant: '<S104>/Constant3'
     *  S-Function (sfix_bitop): '<S104>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_w) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling1' */
    /* Logic: '<S105>/AND' incorporates:
     *  Logic: '<S105>/OR1'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_hs));

    /* Update for UnitDelay: '<S105>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_hs = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling1' */

    /* Switch: '<S104>/Switch' incorporates:
     *  Logic: '<S104>/OR4'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Operator4'
     *  Switch: '<S104>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Plock_) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataPBW' incorporates:
         *  Constant: '<S109>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataPBW_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_Plock_) & 3) > 0)
        {
            /* Switch: '<S104>/Switch1' incorporates:
             *  Constant: '<S110>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S104>/Switch1' incorporates:
             *  Constant: '<S111>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataPBW' incorporates:
         *  Switch: '<S104>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataPBW_Value(tmpRead_1v);
    }

    /* End of Switch: '<S104>/Switch' */

    /* RelationalOperator: '<S112>/Relational Operator3' incorporates:
     *  Constant: '<S112>/Constant3'
     *  S-Function (sfix_bitop): '<S112>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_fl) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S112>/EdgeFalling1' */
    /* Logic: '<S113>/AND' incorporates:
     *  Logic: '<S113>/OR1'
     *  UnitDelay: '<S113>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_a1));

    /* Update for UnitDelay: '<S113>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_a1 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S112>/EdgeFalling1' */

    /* Switch: '<S112>/Switch' incorporates:
     *  Logic: '<S112>/OR4'
     *  Logic: '<S20>/OR'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator9'
     *  Switch: '<S112>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Constant: '<S117>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Brk_St) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_LatAcc) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRA_o) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSF_o) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdT_a) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_BrakeP) & 3U) != 0U))
        {
            /* Switch: '<S112>/Switch1' incorporates:
             *  Constant: '<S118>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S112>/Switch1' incorporates:
             *  Constant: '<S119>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Switch: '<S112>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S112>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvData_PSCM_A' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_PSCM_A_Value(&tmpRead_1u);

    /* RelationalOperator: '<S120>/Relational Operator3' incorporates:
     *  Constant: '<S120>/Constant3'
     *  S-Function (sfix_bitop): '<S120>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_1u) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S120>/EdgeFalling1' */
    /* Logic: '<S121>/AND' incorporates:
     *  Logic: '<S121>/OR1'
     *  UnitDelay: '<S121>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cr));

    /* Update for UnitDelay: '<S121>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cr = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S120>/EdgeFalling1' */

    /* Switch: '<S120>/Switch' incorporates:
     *  Logic: '<S120>/OR4'
     *  S-Function (sfix_bitop): '<S21>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S21>/Bitwise Operator4'
     *  Switch: '<S120>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_LwsAng) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_PSCM_A' incorporates:
         *  Constant: '<S125>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_PSCM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_LwsAng) & 3) > 0)
        {
            /* Switch: '<S120>/Switch1' incorporates:
             *  Constant: '<S126>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S120>/Switch1' incorporates:
             *  Constant: '<S127>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_PSCM_A' incorporates:
         *  Switch: '<S120>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_PSCM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S120>/Switch' */

    /* RelationalOperator: '<S128>/Relational Operator3' incorporates:
     *  Constant: '<S128>/Constant3'
     *  S-Function (sfix_bitop): '<S128>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S128>/EdgeFalling1' */
    /* Logic: '<S129>/AND' incorporates:
     *  Logic: '<S129>/OR1'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ol));

    /* Update for UnitDelay: '<S129>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ol = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S128>/EdgeFalling1' */

    /* Switch: '<S128>/Switch' incorporates:
     *  Logic: '<S128>/OR4'
     *  Logic: '<S22>/OR'
     *  S-Function (sfix_bitop): '<S22>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S22>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S22>/Bitwise Operator4'
     *  Switch: '<S128>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Constant: '<S133>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_LatA_h) & 3U) != 0U))
        {
            /* Switch: '<S128>/Switch1' incorporates:
             *  Constant: '<S134>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S128>/Switch1' incorporates:
             *  Constant: '<S135>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Switch: '<S128>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S128>/Switch' */

    /* RelationalOperator: '<S136>/Relational Operator3' incorporates:
     *  Constant: '<S136>/Constant3'
     *  S-Function (sfix_bitop): '<S136>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_i) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S136>/EdgeFalling1' */
    /* Logic: '<S137>/AND' incorporates:
     *  Logic: '<S137>/OR1'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ge));

    /* Update for UnitDelay: '<S137>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ge = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S136>/EdgeFalling1' */

    /* Switch: '<S136>/Switch' incorporates:
     *  Logic: '<S136>/OR4'
     *  Logic: '<S23>/OR'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Operator4'
     *  Switch: '<S136>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_SGCP_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC' incorporates:
         *  Constant: '<S141>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_SGCP_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_SGCP_6) & 3U) != 0U))
        {
            /* Switch: '<S136>/Switch1' incorporates:
             *  Constant: '<S142>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S136>/Switch1' incorporates:
             *  Constant: '<S143>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC' incorporates:
         *  Switch: '<S136>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S136>/Switch' */

    /* RelationalOperator: '<S144>/Relational Operator3' incorporates:
     *  Constant: '<S144>/Constant3'
     *  S-Function (sfix_bitop): '<S144>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_a0) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S144>/EdgeFalling1' */
    /* Logic: '<S145>/AND' incorporates:
     *  Logic: '<S145>/OR1'
     *  UnitDelay: '<S145>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_bf));

    /* Update for UnitDelay: '<S145>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_bf = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S144>/EdgeFalling1' */

    /* Switch: '<S144>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_AHP_EnblReq_SigSts'
     *  Inport: '<Root>/VeSR1B_y_CurrBattFailStatus_2_SigSts'
     *  Inport: '<Root>/VeSR1B_y_EBL_Stat_SigSts'
     *  Inport: '<Root>/VeSR1B_y_FL_HS_STATFailSts_SigSts'
     *  Inport: '<Root>/VeSR1B_y_IMPACTCommand_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_LatAcceleration_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_LwsAngle_FD3_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MRM_STATUS_C2_SigSts'
     *  Inport: '<Root>/VeSR1B_y_PN14_LS_Actv_SigSts'
     *  Inport: '<Root>/VeSR1B_y_PreCondCabinSts_SigSts'
     *  Inport: '<Root>/VeSR1B_y_SBR1RowDrvrSeatSts_FD3_SigSts'
     *  Logic: '<S144>/OR4'
     *  S-Function (sfix_bitop): '<S24>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Constant: '<S149>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_LatAcceleration_FD3_SigSts_Value(&tmpRead_g);
        (void)Rte_Read_VeSR1B_y_SBR1RowDrvrSeatSts_FD3_SigSts_Value(&tmpRead_f);
        (void)Rte_Read_VeSR1B_y_IMPACTCommand_FD3_SigSts_Value(&tmpRead_e);
        (void)Rte_Read_VeSR1B_y_LwsAngle_FD3_SigSts_Value(&tmpRead_d);
        (void)Rte_Read_VeSR1B_y_EBL_Stat_SigSts_Value(&tmpRead_c);
        (void)Rte_Read_VeSR1B_y_AHP_EnblReq_SigSts_Value(&tmpRead_b);
        (void)Rte_Read_VeSR1B_y_FL_HS_STATFailSts_SigSts_Value(&tmpRead_a);
        (void)Rte_Read_VeSR1B_y_PreCondCabinSts_SigSts_Value(&tmpRead_9);
        (void)Rte_Read_VeSR1B_y_CurrBattFailStatus_2_SigSts_Value(&tmpRead_8);
        (void)Rte_Read_VeSR1B_y_PN14_LS_Actv_SigSts_Value(&tmpRead_7);
        (void)Rte_Read_VeSR1B_y_MRM_STATUS_C2_SigSts_Value(&tmpRead_6);

        /* Switch: '<S144>/Switch1' incorporates:
         *  Constant: '<S150>/Constant'
         *  Constant: '<S151>/Constant'
         *  Inport: '<Root>/VeSR1B_y_AHP_EnblReq_SigSts'
         *  Inport: '<Root>/VeSR1B_y_CurrBattFailStatus_2_SigSts'
         *  Inport: '<Root>/VeSR1B_y_EBL_Stat_SigSts'
         *  Inport: '<Root>/VeSR1B_y_FL_HS_STATFailSts_SigSts'
         *  Inport: '<Root>/VeSR1B_y_IMPACTCommand_FD3_SigSts'
         *  Inport: '<Root>/VeSR1B_y_LatAcceleration_FD3_SigSts'
         *  Inport: '<Root>/VeSR1B_y_LwsAngle_FD3_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MRM_STATUS_C2_SigSts'
         *  Inport: '<Root>/VeSR1B_y_PN14_LS_Actv_SigSts'
         *  Inport: '<Root>/VeSR1B_y_PreCondCabinSts_SigSts'
         *  Inport: '<Root>/VeSR1B_y_SBR1RowDrvrSeatSts_FD3_SigSts'
         *  Logic: '<S24>/OR'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator10'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator11'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator12'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator13'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator14'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator15'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator16'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator17'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator18'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator19'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator20'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator7'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator8'
         *  S-Function (sfix_bitop): '<S24>/Bitwise Operator9'
         */
        if ((((((((((((((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn)
            & 3U) != 0U) || ((((uint32)tmpRead_6) & 3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_ACC_On) & 3U) != 0U)) ||
                           ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Bonnet)
                             & 3U) != 0U)) || ((((uint32)
                             rtb_TmpSignalConversionAtVeSR1B_y_KeyInI) & 3U) !=
                           0U)) || ((((uint32)
                            rtb_TmpSignalConversionAtVeSR1B_y_EVAP_T) & 3U) !=
                                    0U)) || ((((uint32)
                           rtb_TmpSignalConversionAtVeSR1B_y_Bonn_c) & 3U) != 0U))
                       || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CurrBa) &
                            3U) != 0U)) || ((((uint32)tmpRead_7) & 3U) != 0U)) ||
                     ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IBS3_S) & 3U)
                      != 0U)) || ((((uint32)tmpRead_8) & 3U) != 0U)) ||
                   ((((uint32)tmpRead_9) & 3U) != 0U)) || ((((uint32)tmpRead_a)
                    & 3U) != 0U)) || ((((uint32)tmpRead_b) & 3U) != 0U)) ||
                ((((uint32)tmpRead_c) & 3U) != 0U)) || ((((uint32)tmpRead_d) &
                 3U) != 0U)) || ((((uint32)tmpRead_e) & 3U) != 0U)) ||
                ((((uint32)tmpRead_f) & 3U) != 0U)) || ((((uint32)tmpRead_g) &
                3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Switch: '<S144>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S144>/Switch' */

    /* RelationalOperator: '<S152>/Relational Operator3' incorporates:
     *  Constant: '<S152>/Constant3'
     *  S-Function (sfix_bitop): '<S152>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S152>/EdgeFalling1' */
    /* Logic: '<S153>/AND' incorporates:
     *  Logic: '<S153>/OR1'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jf));

    /* Update for UnitDelay: '<S153>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jf = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S152>/EdgeFalling1' */

    /* Switch: '<S152>/Switch' incorporates:
     *  Logic: '<S152>/OR4'
     *  Logic: '<S25>/OR'
     *  S-Function (sfix_bitop): '<S25>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S25>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S25>/Bitwise Operator4'
     *  Switch: '<S152>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Constant: '<S157>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_TSRSts) & 3U) != 0U))
        {
            /* Switch: '<S152>/Switch1' incorporates:
             *  Constant: '<S158>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S152>/Switch1' incorporates:
             *  Constant: '<S159>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Switch: '<S152>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S152>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvData_TCSBM' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_TCSBM_Value(&tmpRead_h);

    /* RelationalOperator: '<S160>/Relational Operator3' incorporates:
     *  Constant: '<S160>/Constant3'
     *  S-Function (sfix_bitop): '<S160>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_h) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S160>/EdgeFalling1' */
    /* Logic: '<S161>/AND' incorporates:
     *  Logic: '<S161>/OR1'
     *  UnitDelay: '<S161>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_is));

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_is = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S160>/EdgeFalling1' */

    /* Switch: '<S160>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TCASERANGESTATUS_SigSts'
     *  Logic: '<S160>/OR4'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_AWDSys) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_TCSBM' incorporates:
         *  Constant: '<S165>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_TCSBM_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_TCASERANGESTATUS_SigSts_Value(&tmpRead_i);

        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S166>/Constant'
         *  Constant: '<S167>/Constant'
         *  Inport: '<Root>/VeSR1B_y_TCASERANGESTATUS_SigSts'
         *  Logic: '<S26>/OR'
         *  S-Function (sfix_bitop): '<S26>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S26>/Bitwise Operator3'
         */
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AWDSys) & 3U) != 0U) ||
            ((((uint32)tmpRead_i) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_TCSBM' incorporates:
         *  Switch: '<S160>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_TCSBM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S160>/Switch' */

    /* RelationalOperator: '<S168>/Relational Operator3' incorporates:
     *  Constant: '<S168>/Constant3'
     *  S-Function (sfix_bitop): '<S168>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S168>/EdgeFalling1' */
    /* Logic: '<S169>/AND' incorporates:
     *  Logic: '<S169>/OR1'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_iik));

    /* Update for UnitDelay: '<S169>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_iik = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S168>/EdgeFalling1' */

    /* Switch: '<S168>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_PwrLev_SigSts'
     *  Logic: '<S168>/OR4'
     *  S-Function (sfix_bitop): '<S27>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Displa) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Constant: '<S173>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_PwrLev_SigSts_Value(&tmpRead_j);

        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S174>/Constant'
         *  Constant: '<S175>/Constant'
         *  Inport: '<Root>/VeSR1B_y_PwrLev_SigSts'
         *  Logic: '<S27>/OR'
         *  S-Function (sfix_bitop): '<S27>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S27>/Bitwise Operator2'
         */
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Displa) & 3U) != 0U) ||
            ((((uint32)tmpRead_j) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Switch: '<S168>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S168>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvData_RFHub_CRC_MC' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_RFHub_CRC_MC_Value(&tmpRead_k);

    /* RelationalOperator: '<S176>/Relational Operator3' incorporates:
     *  Constant: '<S176>/Constant3'
     *  S-Function (sfix_bitop): '<S176>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_k) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S176>/EdgeFalling1' */
    /* Logic: '<S177>/AND' incorporates:
     *  Logic: '<S177>/OR1'
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_pk));

    /* Update for UnitDelay: '<S177>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_pk = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S176>/EdgeFalling1' */

    /* Switch: '<S176>/Switch' incorporates:
     *  Logic: '<S176>/OR4'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator4'
     *  Switch: '<S176>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Driver) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_RFHub_CRC_MC' incorporates:
         *  Constant: '<S181>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_RFHub_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_Driver) & 3) > 0)
        {
            /* Switch: '<S176>/Switch1' incorporates:
             *  Constant: '<S182>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S176>/Switch1' incorporates:
             *  Constant: '<S183>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_RFHub_CRC_MC' incorporates:
         *  Switch: '<S176>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_RFHub_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S176>/Switch' */

    /* RelationalOperator: '<S184>/Relational Operator3' incorporates:
     *  Constant: '<S184>/Constant3'
     *  S-Function (sfix_bitop): '<S184>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_a) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S184>/EdgeFalling1' */
    /* Logic: '<S185>/AND' incorporates:
     *  Logic: '<S185>/OR1'
     *  UnitDelay: '<S185>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_eo));

    /* Update for UnitDelay: '<S185>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_eo = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S184>/EdgeFalling1' */

    /* Switch: '<S184>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BMS_HV_HiTempThrsh_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_BPCM_Cell_Volt_Avg_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_BPCM_DC_CntctrMTOW_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_ImpactHardwire_FD5_SigSts'
     *  Logic: '<S184>/OR4'
     *  S-Function (sfix_bitop): '<S29>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCM_k) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Constant: '<S189>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_BMS_HV_HiTempThrsh_FD5_SigSts_Value(&tmpRead_13);
        (void)Rte_Read_VeSR1B_y_ImpactHardwire_FD5_SigSts_Value(&tmpRead_12);
        (void)Rte_Read_VeSR1B_y_BPCM_Cell_Volt_Avg_FD5_SigSts_Value(&tmpRead_11);
        (void)Rte_Read_VeSR1B_y_BPCM_DC_CntctrMTOW_FD5_SigSts_Value(&tmpRead_10);

        /* Switch: '<S184>/Switch1' incorporates:
         *  Constant: '<S190>/Constant'
         *  Constant: '<S191>/Constant'
         *  Inport: '<Root>/VeSR1B_y_BMS_HV_HiTempThrsh_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_BPCM_Cell_Volt_Avg_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_BPCM_DC_CntctrMTOW_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_ImpactHardwire_FD5_SigSts'
         *  Logic: '<S29>/OR'
         *  S-Function (sfix_bitop): '<S29>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S29>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S29>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S29>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S29>/Bitwise Operator6'
         */
        if ((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_k) & 3U) != 0U)
               || ((((uint32)tmpRead_10) & 3U) != 0U)) || ((((uint32)tmpRead_11)
                & 3U) != 0U)) || ((((uint32)tmpRead_12) & 3U) != 0U)) ||
                ((((uint32)tmpRead_13) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Switch: '<S184>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S184>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvDataFD5DMPI' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvDataFD5DMPI_Value(&tmpRead_1a);

    /* RelationalOperator: '<S192>/Relational Operator3' incorporates:
     *  Constant: '<S192>/Constant3'
     *  S-Function (sfix_bitop): '<S192>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_1a) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S192>/EdgeFalling1' */
    /* Logic: '<S193>/AND' incorporates:
     *  Logic: '<S193>/OR1'
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_kg));

    /* Update for UnitDelay: '<S193>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_kg = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S192>/EdgeFalling1' */

    /* Switch: '<S192>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_BstConvLorIGBT_TF_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPA_Inverter_Temp_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPA_Serv_Lamp_Req_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPB_Inverter_Temp_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_MCPB_ServLampReq_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_PIM_A_3PS_Pos_FD5_SigSts'
     *  Inport: '<Root>/VeSR1B_y_PIM_B_3PS_Pos_FD5_SigSts'
     *  Logic: '<S192>/OR4'
     *  S-Function (sfix_bitop): '<S30>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataFD5DMPI' incorporates:
         *  Constant: '<S197>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataFD5DMPI_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_PIM_B_3PS_Pos_FD5_SigSts_Value(&tmpRead_1h);
        (void)Rte_Read_VeSR1B_y_PIM_A_3PS_Pos_FD5_SigSts_Value(&tmpRead_1g);
        (void)Rte_Read_VeSR1B_y_BstConvLorIGBT_TF_FD5_SigSts_Value(&tmpRead_1f);
        (void)Rte_Read_VeSR1B_y_MCPB_Inverter_Temp_FD5_SigSts_Value(&tmpRead_1e);
        (void)Rte_Read_VeSR1B_y_MCPB_ServLampReq_FD5_SigSts_Value(&tmpRead_1d);
        (void)Rte_Read_VeSR1B_y_MCPA_Inverter_Temp_FD5_SigSts_Value(&tmpRead_1c);
        (void)Rte_Read_VeSR1B_y_MCPA_Serv_Lamp_Req_FD5_SigSts_Value(&tmpRead_1b);

        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S198>/Constant'
         *  Constant: '<S199>/Constant'
         *  Inport: '<Root>/VeSR1B_y_BstConvLorIGBT_TF_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPA_Inverter_Temp_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPA_Serv_Lamp_Req_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPB_Inverter_Temp_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_MCPB_ServLampReq_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_PIM_A_3PS_Pos_FD5_SigSts'
         *  Inport: '<Root>/VeSR1B_y_PIM_B_3PS_Pos_FD5_SigSts'
         *  Logic: '<S30>/OR'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator7'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator8'
         *  S-Function (sfix_bitop): '<S30>/Bitwise Operator9'
         */
        if (((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 3U) !=
                   0U) || ((((uint32)tmpRead_1b) & 3U) != 0U)) || ((((uint32)
                    tmpRead_1c) & 3U) != 0U)) || ((((uint32)tmpRead_1d) & 3U) !=
                 0U)) || ((((uint32)tmpRead_1e) & 3U) != 0U)) || ((((uint32)
                 tmpRead_1f) & 3U) != 0U)) || ((((uint32)tmpRead_1g) & 3U) != 0U))
            || ((((uint32)tmpRead_1h) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataFD5DMPI' incorporates:
         *  Switch: '<S192>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataFD5DMPI_Value(tmpRead_1v);
    }

    /* End of Switch: '<S192>/Switch' */

    /* RelationalOperator: '<S200>/Relational Operator3' incorporates:
     *  Constant: '<S200>/Constant3'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_jw) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S200>/EdgeFalling1' */
    /* Logic: '<S201>/AND' incorporates:
     *  Logic: '<S201>/OR1'
     *  UnitDelay: '<S201>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_k3));

    /* Update for UnitDelay: '<S201>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_k3 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S200>/EdgeFalling1' */

    /* Switch: '<S200>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ECM_LHOM_W_FD5_SigSts'
     *  Logic: '<S200>/OR4'
     *  S-Function (sfix_bitop): '<S31>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Ther_b) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataECM' incorporates:
         *  Constant: '<S205>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataECM_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_ECM_LHOM_W_FD5_SigSts_Value(&tmpRead_19);

        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S206>/Constant'
         *  Constant: '<S207>/Constant'
         *  Inport: '<Root>/VeSR1B_y_ECM_LHOM_W_FD5_SigSts'
         *  Logic: '<S31>/OR'
         *  S-Function (sfix_bitop): '<S31>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S31>/Bitwise Operator5'
         */
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Ther_b) & 3U) != 0U) ||
            ((((uint32)tmpRead_19) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataECM' incorporates:
         *  Switch: '<S200>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataECM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S200>/Switch' */
    /* End of Outputs for SubSystem: '<S4>/BLUEN' */
#elif Rte_SysCon_Variant_CCMB_COREBEV

    /* Outputs for Atomic SubSystem: '<S4>/COREBEV' */
    /* RelationalOperator: '<S230>/Relational Operator3' incorporates:
     *  Constant: '<S230>/Constant3'
     *  S-Function (sfix_bitop): '<S230>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_eq) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling1' */
    /* Logic: '<S231>/AND' incorporates:
     *  Logic: '<S231>/OR1'
     *  UnitDelay: '<S231>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_go));

    /* Update for UnitDelay: '<S231>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_go = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S230>/EdgeFalling1' */

    /* Switch: '<S230>/Switch' incorporates:
     *  Logic: '<S208>/OR2'
     *  Logic: '<S230>/OR4'
     *  S-Function (sfix_bitop): '<S208>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S208>/Bitwise Operator5'
     *  Switch: '<S230>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
         *  Constant: '<S235>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 7U) != 0U) &&
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 7U) != 0U))
        {
            /* Switch: '<S230>/Switch1' incorporates:
             *  Constant: '<S236>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S230>/Switch1' incorporates:
             *  Constant: '<S237>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
         *  Switch: '<S230>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S230>/Switch' */

    /* RelationalOperator: '<S238>/Relational Operator3' incorporates:
     *  Constant: '<S238>/Constant3'
     *  S-Function (sfix_bitop): '<S238>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_bu) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S238>/EdgeFalling1' */
    /* Logic: '<S239>/AND' incorporates:
     *  Logic: '<S239>/OR1'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_km));

    /* Update for UnitDelay: '<S239>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_km = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S238>/EdgeFalling1' */

    /* Switch: '<S238>/Switch' incorporates:
     *  Logic: '<S209>/OR2'
     *  Logic: '<S238>/OR4'
     *  S-Function (sfix_bitop): '<S209>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S209>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S209>/Bitwise Operator4'
     *  Switch: '<S238>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Constant: '<S243>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCMCn) & 7U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCM_D) & 7U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCM_C) & 7U) != 0U))
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S244>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S245>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Switch: '<S238>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S238>/Switch' */

    /* RelationalOperator: '<S246>/Relational Operator3' incorporates:
     *  Constant: '<S246>/Constant3'
     *  S-Function (sfix_bitop): '<S246>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_db) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S246>/EdgeFalling1' */
    /* Logic: '<S247>/AND' incorporates:
     *  Logic: '<S247>/OR1'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ch));

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ch = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S246>/EdgeFalling1' */

    /* Switch: '<S246>/Switch' incorporates:
     *  Logic: '<S210>/OR2'
     *  Logic: '<S246>/OR4'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator5'
     *  Switch: '<S246>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
         *  Constant: '<S251>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_APM_Ct) & 7U) != 0U) ||
              ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_AC_LnH) & 7U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_DC_Tim) & 7U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_Charge) & 7U) != 0U))
        {
            /* Switch: '<S246>/Switch1' incorporates:
             *  Constant: '<S252>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S246>/Switch1' incorporates:
             *  Constant: '<S253>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
         *  Switch: '<S246>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(tmpRead_1v);
    }

    /* End of Switch: '<S246>/Switch' */

    /* RelationalOperator: '<S254>/Relational Operator3' incorporates:
     *  Constant: '<S254>/Constant3'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_l) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S254>/EdgeFalling1' */
    /* Logic: '<S255>/AND' incorporates:
     *  Logic: '<S255>/OR1'
     *  UnitDelay: '<S255>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cb));

    /* Update for UnitDelay: '<S255>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cb = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S254>/EdgeFalling1' */

    /* Switch: '<S254>/Switch' incorporates:
     *  Logic: '<S211>/OR2'
     *  Logic: '<S254>/OR4'
     *  S-Function (sfix_bitop): '<S211>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S211>/Bitwise Operator3'
     *  Switch: '<S254>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
         *  Constant: '<S259>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPA_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPA_6) & 7U) != 0U))
        {
            /* Switch: '<S254>/Switch1' incorporates:
             *  Constant: '<S260>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S254>/Switch1' incorporates:
             *  Constant: '<S261>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
         *  Switch: '<S254>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value(tmpRead_1v);
    }

    /* End of Switch: '<S254>/Switch' */

    /* RelationalOperator: '<S262>/Relational Operator3' incorporates:
     *  Constant: '<S262>/Constant3'
     *  S-Function (sfix_bitop): '<S262>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ma) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S262>/EdgeFalling1' */
    /* Logic: '<S263>/AND' incorporates:
     *  Logic: '<S263>/OR1'
     *  UnitDelay: '<S263>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_c1));

    /* Update for UnitDelay: '<S263>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_c1 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S262>/EdgeFalling1' */

    /* Switch: '<S262>/Switch' incorporates:
     *  Logic: '<S212>/OR2'
     *  Logic: '<S262>/OR4'
     *  S-Function (sfix_bitop): '<S212>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S212>/Bitwise Operator3'
     *  Switch: '<S262>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
         *  Constant: '<S267>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPB_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPB_6) & 7U) != 0U))
        {
            /* Switch: '<S262>/Switch1' incorporates:
             *  Constant: '<S268>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S262>/Switch1' incorporates:
             *  Constant: '<S269>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
         *  Switch: '<S262>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(tmpRead_1v);
    }

    /* End of Switch: '<S262>/Switch' */

    /* RelationalOperator: '<S270>/Relational Operator3' incorporates:
     *  Constant: '<S270>/Constant3'
     *  S-Function (sfix_bitop): '<S270>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_bp) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S270>/EdgeFalling1' */
    /* Logic: '<S271>/AND' incorporates:
     *  Logic: '<S271>/OR1'
     *  UnitDelay: '<S271>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_bz));

    /* Update for UnitDelay: '<S271>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_bz = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S270>/EdgeFalling1' */

    /* Switch: '<S270>/Switch' incorporates:
     *  Logic: '<S213>/OR'
     *  Logic: '<S270>/OR4'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator5'
     *  Switch: '<S270>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
         *  Constant: '<S275>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 3U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_D) & 3U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_C) & 3U) != 0U))
        {
            /* Switch: '<S270>/Switch1' incorporates:
             *  Constant: '<S276>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S270>/Switch1' incorporates:
             *  Constant: '<S277>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
         *  Switch: '<S270>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S270>/Switch' */

    /* RelationalOperator: '<S278>/Relational Operator3' incorporates:
     *  Constant: '<S278>/Constant3'
     *  S-Function (sfix_bitop): '<S278>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_jl) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S278>/EdgeFalling1' */
    /* Logic: '<S279>/AND' incorporates:
     *  Logic: '<S279>/OR1'
     *  UnitDelay: '<S279>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_pd));

    /* Update for UnitDelay: '<S279>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_pd = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S278>/EdgeFalling1' */

    /* Switch: '<S278>/Switch' incorporates:
     *  Logic: '<S214>/OR'
     *  Logic: '<S278>/OR4'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator9'
     *  Switch: '<S278>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
         *  Constant: '<S283>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AC_LnH) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_ChrgFa) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EVSE_O) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_DC_Tim) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Charge) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_ACOutp) & 3U) != 0U))
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S284>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S285>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
         *  Switch: '<S278>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S278>/Switch' */

    /* RelationalOperator: '<S286>/Relational Operator3' incorporates:
     *  Constant: '<S286>/Constant3'
     *  S-Function (sfix_bitop): '<S286>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_fl) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S286>/EdgeFalling1' */
    /* Logic: '<S287>/AND' incorporates:
     *  Logic: '<S287>/OR1'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S287>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_m = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S286>/EdgeFalling1' */

    /* Switch: '<S286>/Switch' incorporates:
     *  Logic: '<S215>/OR'
     *  Logic: '<S286>/OR4'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator9'
     *  Switch: '<S286>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Constant: '<S291>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Brk_St) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_LatAcc) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRA_o) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSF_o) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdT_a) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_BrakeP) & 3U) != 0U))
        {
            /* Switch: '<S286>/Switch1' incorporates:
             *  Constant: '<S292>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S286>/Switch1' incorporates:
             *  Constant: '<S293>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Switch: '<S286>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S286>/Switch' */

    /* RelationalOperator: '<S294>/Relational Operator3' incorporates:
     *  Constant: '<S294>/Constant3'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ff) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S294>/EdgeFalling1' */
    /* Logic: '<S295>/AND' incorporates:
     *  Logic: '<S295>/OR1'
     *  UnitDelay: '<S295>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_oy));

    /* Update for UnitDelay: '<S295>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_oy = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S294>/EdgeFalling1' */

    /* Switch: '<S294>/Switch' incorporates:
     *  Logic: '<S216>/OR'
     *  Logic: '<S294>/OR4'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator4'
     *  Switch: '<S294>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_ACC_Sy) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A' incorporates:
         *  Constant: '<S299>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ACC_Sy) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ACC_Bl) & 3U) != 0U))
        {
            /* Switch: '<S294>/Switch1' incorporates:
             *  Constant: '<S300>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S294>/Switch1' incorporates:
             *  Constant: '<S301>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A' incorporates:
         *  Switch: '<S294>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A_Value
            (tmpRead_1v);
    }

    /* End of Switch: '<S294>/Switch' */

    /* RelationalOperator: '<S302>/Relational Operator3' incorporates:
     *  Constant: '<S302>/Constant3'
     *  S-Function (sfix_bitop): '<S302>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S302>/EdgeFalling1' */
    /* Logic: '<S303>/AND' incorporates:
     *  Logic: '<S303>/OR1'
     *  UnitDelay: '<S303>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ff));

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ff = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S302>/EdgeFalling1' */

    /* Switch: '<S302>/Switch' incorporates:
     *  Logic: '<S217>/OR'
     *  Logic: '<S302>/OR4'
     *  S-Function (sfix_bitop): '<S217>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S217>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S217>/Bitwise Operator4'
     *  Switch: '<S302>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Constant: '<S307>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_LatA_h) & 3U) != 0U))
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Constant: '<S308>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Constant: '<S309>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Switch: '<S302>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S302>/Switch' */

    /* RelationalOperator: '<S310>/Relational Operator3' incorporates:
     *  Constant: '<S310>/Constant3'
     *  S-Function (sfix_bitop): '<S310>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_je) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S310>/EdgeFalling1' */
    /* Logic: '<S311>/AND' incorporates:
     *  Logic: '<S311>/OR1'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jm));

    /* Update for UnitDelay: '<S311>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jm = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S310>/EdgeFalling1' */

    /* Switch: '<S310>/Switch' incorporates:
     *  Logic: '<S310>/OR4'
     *  S-Function (sfix_bitop): '<S218>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S218>/Bitwise Operator4'
     *  Switch: '<S310>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Constant: '<S315>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 3) > 0)
        {
            /* Switch: '<S310>/Switch1' incorporates:
             *  Constant: '<S316>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S310>/Switch1' incorporates:
             *  Constant: '<S317>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Switch: '<S310>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S310>/Switch' */

    /* RelationalOperator: '<S318>/Relational Operator3' incorporates:
     *  Constant: '<S318>/Constant3'
     *  S-Function (sfix_bitop): '<S318>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_mp) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling1' */
    /* Logic: '<S319>/AND' incorporates:
     *  Logic: '<S319>/OR1'
     *  UnitDelay: '<S319>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_eu));

    /* Update for UnitDelay: '<S319>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_eu = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S318>/EdgeFalling1' */

    /* Switch: '<S318>/Switch' incorporates:
     *  Logic: '<S219>/OR'
     *  Logic: '<S318>/OR4'
     *  S-Function (sfix_bitop): '<S219>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S219>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S219>/Bitwise Operator4'
     *  Switch: '<S318>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
         *  Constant: '<S323>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_6) & 3U) != 0U))
        {
            /* Switch: '<S318>/Switch1' incorporates:
             *  Constant: '<S324>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S318>/Switch1' incorporates:
             *  Constant: '<S325>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
         *  Switch: '<S318>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S318>/Switch' */

    /* RelationalOperator: '<S326>/Relational Operator3' incorporates:
     *  Constant: '<S326>/Constant3'
     *  S-Function (sfix_bitop): '<S326>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_e) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S326>/EdgeFalling1' */
    /* Logic: '<S327>/AND' incorporates:
     *  Logic: '<S327>/OR1'
     *  UnitDelay: '<S327>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ks));

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ks = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S326>/EdgeFalling1' */

    /* Switch: '<S326>/Switch' incorporates:
     *  Logic: '<S220>/OR'
     *  Logic: '<S326>/OR4'
     *  S-Function (sfix_bitop): '<S220>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S220>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S220>/Bitwise Operator4'
     *  Switch: '<S326>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
         *  Constant: '<S331>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_6) & 3U) != 0U))
        {
            /* Switch: '<S326>/Switch1' incorporates:
             *  Constant: '<S332>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S326>/Switch1' incorporates:
             *  Constant: '<S333>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
         *  Switch: '<S326>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S326>/Switch' */

    /* RelationalOperator: '<S334>/Relational Operator3' incorporates:
     *  Constant: '<S334>/Constant3'
     *  S-Function (sfix_bitop): '<S334>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_g) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S334>/EdgeFalling1' */
    /* Logic: '<S335>/AND' incorporates:
     *  Logic: '<S335>/OR1'
     *  UnitDelay: '<S335>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_nf));

    /* Update for UnitDelay: '<S335>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_nf = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S334>/EdgeFalling1' */

    /* Switch: '<S334>/Switch' incorporates:
     *  Logic: '<S334>/OR4'
     *  S-Function (sfix_bitop): '<S221>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S221>/Bitwise Operator4'
     *  Switch: '<S334>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
         *  Constant: '<S339>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 3) > 0)
        {
            /* Switch: '<S334>/Switch1' incorporates:
             *  Constant: '<S340>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S334>/Switch1' incorporates:
             *  Constant: '<S341>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
         *  Switch: '<S334>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S334>/Switch' */

    /* RelationalOperator: '<S342>/Relational Operator3' incorporates:
     *  Constant: '<S342>/Constant3'
     *  S-Function (sfix_bitop): '<S342>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_a0) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S342>/EdgeFalling1' */
    /* Logic: '<S343>/AND' incorporates:
     *  Logic: '<S343>/OR1'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_e4));

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_e4 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S342>/EdgeFalling1' */

    /* Switch: '<S342>/Switch' incorporates:
     *  Logic: '<S222>/OR'
     *  Logic: '<S342>/OR4'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator9'
     *  Switch: '<S342>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Constant: '<S347>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn) & 3U) !=
                    0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_GlobDr)
                             & 3U) != 0U)) || ((((uint32)
                     rtb_TmpSignalConversionAtVeSR1B_y_ACC_On) & 3U) != 0U)) ||
                 ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Bonnet) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_KeyInI) &
                            3U) != 0U)) || ((((uint32)
                  rtb_TmpSignalConversionAtVeSR1B_y_EVAP_T) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Bonn_c) & 3U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CurrBa) & 3U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IBS3_S) & 3U) != 0U))
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Constant: '<S348>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Constant: '<S349>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Switch: '<S342>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S342>/Switch' */

    /* RelationalOperator: '<S350>/Relational Operator3' incorporates:
     *  Constant: '<S350>/Constant3'
     *  S-Function (sfix_bitop): '<S350>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S350>/EdgeFalling1' */
    /* Logic: '<S351>/AND' incorporates:
     *  Logic: '<S351>/OR1'
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_kd));

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_kd = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S350>/EdgeFalling1' */

    /* Switch: '<S350>/Switch' incorporates:
     *  Logic: '<S223>/OR'
     *  Logic: '<S350>/OR4'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator9'
     *  Switch: '<S350>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
         *  Constant: '<S355>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSAct) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_LHF_Sp) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRAct) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSFai) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdTot) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_BrkPdl) & 3U) != 0U))
        {
            /* Switch: '<S350>/Switch1' incorporates:
             *  Constant: '<S356>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S350>/Switch1' incorporates:
             *  Constant: '<S357>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
         *  Switch: '<S350>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S350>/Switch' */

    /* RelationalOperator: '<S358>/Relational Operator3' incorporates:
     *  Constant: '<S358>/Constant3'
     *  S-Function (sfix_bitop): '<S358>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S358>/EdgeFalling1' */
    /* Logic: '<S359>/AND' incorporates:
     *  Logic: '<S359>/OR1'
     *  UnitDelay: '<S359>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ps));

    /* Update for UnitDelay: '<S359>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ps = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S358>/EdgeFalling1' */

    /* Switch: '<S358>/Switch' incorporates:
     *  Logic: '<S224>/OR'
     *  Logic: '<S358>/OR4'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator4'
     *  Switch: '<S358>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Constant: '<S363>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_TSRSts) & 3U) != 0U))
        {
            /* Switch: '<S358>/Switch1' incorporates:
             *  Constant: '<S364>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S358>/Switch1' incorporates:
             *  Constant: '<S365>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Switch: '<S358>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S358>/Switch' */

    /* RelationalOperator: '<S366>/Relational Operator3' incorporates:
     *  Constant: '<S366>/Constant3'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S366>/EdgeFalling1' */
    /* Logic: '<S367>/AND' incorporates:
     *  Logic: '<S367>/OR1'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_p3));

    /* Update for UnitDelay: '<S367>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_p3 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S366>/EdgeFalling1' */

    /* Switch: '<S366>/Switch' incorporates:
     *  Logic: '<S366>/OR4'
     *  S-Function (sfix_bitop): '<S225>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S225>/Bitwise Operator4'
     *  Switch: '<S366>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Creep_) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Constant: '<S371>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_Creep_) & 3) > 0)
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Constant: '<S372>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Constant: '<S373>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Switch: '<S366>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S366>/Switch' */

    /* RelationalOperator: '<S374>/Relational Operator3' incorporates:
     *  Constant: '<S374>/Constant3'
     *  S-Function (sfix_bitop): '<S374>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_a) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S374>/EdgeFalling1' */
    /* Logic: '<S375>/AND' incorporates:
     *  Logic: '<S375>/OR1'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_nv));

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_nv = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S374>/EdgeFalling1' */

    /* Switch: '<S374>/Switch' incorporates:
     *  Logic: '<S226>/OR'
     *  Logic: '<S374>/OR4'
     *  S-Function (sfix_bitop): '<S226>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S226>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S226>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S226>/Bitwise Operator5'
     *  Switch: '<S374>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Constant: '<S379>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n) & 3U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_c) & 3U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPC_a5) & 3U) != 0U))
        {
            /* Switch: '<S374>/Switch1' incorporates:
             *  Constant: '<S380>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S374>/Switch1' incorporates:
             *  Constant: '<S381>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Switch: '<S374>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S374>/Switch' */

    /* RelationalOperator: '<S382>/Relational Operator3' incorporates:
     *  Constant: '<S382>/Constant3'
     *  S-Function (sfix_bitop): '<S382>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S382>/EdgeFalling1' */
    /* Logic: '<S383>/AND' incorporates:
     *  Logic: '<S383>/OR1'
     *  UnitDelay: '<S383>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_bd));

    /* Update for UnitDelay: '<S383>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_bd = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S382>/EdgeFalling1' */

    /* Switch: '<S382>/Switch' incorporates:
     *  Logic: '<S227>/OR'
     *  Logic: '<S382>/OR4'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator6'
     *  Switch: '<S382>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
         *  Constant: '<S387>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 3U) != 0U) ||
              ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AC_L_i) & 3U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_DC_T_o) & 3U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Char_f) & 3U) != 0U))
        {
            /* Switch: '<S382>/Switch1' incorporates:
             *  Constant: '<S388>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S382>/Switch1' incorporates:
             *  Constant: '<S389>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
         *  Switch: '<S382>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S382>/Switch' */

    /* RelationalOperator: '<S390>/Relational Operator3' incorporates:
     *  Constant: '<S390>/Constant3'
     *  S-Function (sfix_bitop): '<S390>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_nh) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S390>/EdgeFalling1' */
    /* Logic: '<S391>/AND' incorporates:
     *  Logic: '<S391>/OR1'
     *  UnitDelay: '<S391>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_dw));

    /* Update for UnitDelay: '<S391>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_dw = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S390>/EdgeFalling1' */

    /* Switch: '<S390>/Switch' incorporates:
     *  Logic: '<S228>/OR'
     *  Logic: '<S390>/OR4'
     *  S-Function (sfix_bitop): '<S228>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S228>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S228>/Bitwise Operator4'
     *  Switch: '<S390>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
         *  Constant: '<S395>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_e) & 3U) != 0U))
        {
            /* Switch: '<S390>/Switch1' incorporates:
             *  Constant: '<S396>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S390>/Switch1' incorporates:
             *  Constant: '<S397>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
         *  Switch: '<S390>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S390>/Switch' */

    /* RelationalOperator: '<S398>/Relational Operator3' incorporates:
     *  Constant: '<S398>/Constant3'
     *  S-Function (sfix_bitop): '<S398>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_o) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S398>/EdgeFalling1' */
    /* Logic: '<S399>/AND' incorporates:
     *  Logic: '<S399>/OR1'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_c5));

    /* Update for UnitDelay: '<S399>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_c5 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S398>/EdgeFalling1' */

    /* Switch: '<S398>/Switch' incorporates:
     *  Logic: '<S229>/OR'
     *  Logic: '<S398>/OR4'
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator4'
     *  Switch: '<S398>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
         *  Constant: '<S403>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_a) & 3U) != 0U))
        {
            /* Switch: '<S398>/Switch1' incorporates:
             *  Constant: '<S404>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S398>/Switch1' incorporates:
             *  Constant: '<S405>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
         *  Switch: '<S398>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S398>/Switch' */
    /* End of Outputs for SubSystem: '<S4>/COREBEV' */
#elif Rte_SysCon_Variant_CCMB_COREBEV_MY24

    /* Outputs for Atomic SubSystem: '<S4>/COREBEV_MY24' */
    /* RelationalOperator: '<S427>/Relational Operator3' incorporates:
     *  Constant: '<S427>/Constant3'
     *  S-Function (sfix_bitop): '<S427>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_eq) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S427>/EdgeFalling1' */
    /* Logic: '<S428>/AND' incorporates:
     *  Logic: '<S428>/OR1'
     *  UnitDelay: '<S428>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_kv));

    /* Update for UnitDelay: '<S428>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_kv = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S427>/EdgeFalling1' */

    /* Switch: '<S427>/Switch' incorporates:
     *  Logic: '<S406>/OR2'
     *  Logic: '<S427>/OR4'
     *  S-Function (sfix_bitop): '<S406>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S406>/Bitwise Operator5'
     *  Switch: '<S427>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
         *  Constant: '<S432>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 7U) != 0U) &&
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 7U) != 0U))
        {
            /* Switch: '<S427>/Switch1' incorporates:
             *  Constant: '<S433>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S427>/Switch1' incorporates:
             *  Constant: '<S434>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
         *  Switch: '<S427>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S427>/Switch' */

    /* RelationalOperator: '<S435>/Relational Operator3' incorporates:
     *  Constant: '<S435>/Constant3'
     *  S-Function (sfix_bitop): '<S435>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_bu) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S435>/EdgeFalling1' */
    /* Logic: '<S436>/AND' incorporates:
     *  Logic: '<S436>/OR1'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S436>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_d = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S435>/EdgeFalling1' */

    /* Switch: '<S435>/Switch' incorporates:
     *  Logic: '<S407>/OR2'
     *  Logic: '<S435>/OR4'
     *  S-Function (sfix_bitop): '<S407>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S407>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S407>/Bitwise Operator4'
     *  Switch: '<S435>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Constant: '<S440>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCMCn) & 7U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCM_D) & 7U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCM_C) & 7U) != 0U))
        {
            /* Switch: '<S435>/Switch1' incorporates:
             *  Constant: '<S441>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S435>/Switch1' incorporates:
             *  Constant: '<S442>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Switch: '<S435>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S435>/Switch' */

    /* RelationalOperator: '<S443>/Relational Operator3' incorporates:
     *  Constant: '<S443>/Constant3'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_db) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S443>/EdgeFalling1' */
    /* Logic: '<S444>/AND' incorporates:
     *  Logic: '<S444>/OR1'
     *  UnitDelay: '<S444>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cq));

    /* Update for UnitDelay: '<S444>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cq = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S443>/EdgeFalling1' */

    /* Switch: '<S443>/Switch' incorporates:
     *  Logic: '<S408>/OR2'
     *  Logic: '<S443>/OR4'
     *  S-Function (sfix_bitop): '<S408>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S408>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S408>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S408>/Bitwise Operator5'
     *  Switch: '<S443>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
         *  Constant: '<S448>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_APM_Ct) & 7U) != 0U) ||
              ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_AC_LnH) & 7U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_DC_Tim) & 7U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_Charge) & 7U) != 0U))
        {
            /* Switch: '<S443>/Switch1' incorporates:
             *  Constant: '<S449>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S443>/Switch1' incorporates:
             *  Constant: '<S450>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
         *  Switch: '<S443>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(tmpRead_1v);
    }

    /* End of Switch: '<S443>/Switch' */

    /* RelationalOperator: '<S451>/Relational Operator3' incorporates:
     *  Constant: '<S451>/Constant3'
     *  S-Function (sfix_bitop): '<S451>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_l) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S451>/EdgeFalling1' */
    /* Logic: '<S452>/AND' incorporates:
     *  Logic: '<S452>/OR1'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ii));

    /* Update for UnitDelay: '<S452>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ii = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S451>/EdgeFalling1' */

    /* Switch: '<S451>/Switch' incorporates:
     *  Logic: '<S409>/OR2'
     *  Logic: '<S451>/OR4'
     *  S-Function (sfix_bitop): '<S409>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S409>/Bitwise Operator3'
     *  Switch: '<S451>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
         *  Constant: '<S456>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPA_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPA_6) & 7U) != 0U))
        {
            /* Switch: '<S451>/Switch1' incorporates:
             *  Constant: '<S457>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S451>/Switch1' incorporates:
             *  Constant: '<S458>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
         *  Switch: '<S451>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value(tmpRead_1v);
    }

    /* End of Switch: '<S451>/Switch' */

    /* RelationalOperator: '<S459>/Relational Operator3' incorporates:
     *  Constant: '<S459>/Constant3'
     *  S-Function (sfix_bitop): '<S459>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ma) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S459>/EdgeFalling1' */
    /* Logic: '<S460>/AND' incorporates:
     *  Logic: '<S460>/OR1'
     *  UnitDelay: '<S460>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_fb));

    /* Update for UnitDelay: '<S460>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_fb = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S459>/EdgeFalling1' */

    /* Switch: '<S459>/Switch' incorporates:
     *  Logic: '<S410>/OR2'
     *  Logic: '<S459>/OR4'
     *  S-Function (sfix_bitop): '<S410>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S410>/Bitwise Operator3'
     *  Switch: '<S459>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
         *  Constant: '<S464>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPB_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPB_6) & 7U) != 0U))
        {
            /* Switch: '<S459>/Switch1' incorporates:
             *  Constant: '<S465>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S459>/Switch1' incorporates:
             *  Constant: '<S466>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
         *  Switch: '<S459>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(tmpRead_1v);
    }

    /* End of Switch: '<S459>/Switch' */

    /* RelationalOperator: '<S467>/Relational Operator3' incorporates:
     *  Constant: '<S467>/Constant3'
     *  S-Function (sfix_bitop): '<S467>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_bp) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S467>/EdgeFalling1' */
    /* Logic: '<S468>/AND' incorporates:
     *  Logic: '<S468>/OR1'
     *  UnitDelay: '<S468>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_b));

    /* Update for UnitDelay: '<S468>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_b = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S467>/EdgeFalling1' */

    /* Switch: '<S467>/Switch' incorporates:
     *  Logic: '<S411>/OR'
     *  Logic: '<S467>/OR4'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator5'
     *  Switch: '<S467>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
         *  Constant: '<S472>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 3U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_D) & 3U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_C) & 3U) != 0U))
        {
            /* Switch: '<S467>/Switch1' incorporates:
             *  Constant: '<S473>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S467>/Switch1' incorporates:
             *  Constant: '<S474>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
         *  Switch: '<S467>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S467>/Switch' */

    /* RelationalOperator: '<S475>/Relational Operator3' incorporates:
     *  Constant: '<S475>/Constant3'
     *  S-Function (sfix_bitop): '<S475>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_jl) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S475>/EdgeFalling1' */
    /* Logic: '<S476>/AND' incorporates:
     *  Logic: '<S476>/OR1'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_et));

    /* Update for UnitDelay: '<S476>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_et = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S475>/EdgeFalling1' */

    /* Switch: '<S475>/Switch' incorporates:
     *  Logic: '<S412>/OR'
     *  Logic: '<S475>/OR4'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator9'
     *  Switch: '<S475>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
         *  Constant: '<S480>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AC_LnH) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_ChrgFa) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EVSE_O) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_DC_Tim) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Charge) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_ACOutp) & 3U) != 0U))
        {
            /* Switch: '<S475>/Switch1' incorporates:
             *  Constant: '<S481>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S475>/Switch1' incorporates:
             *  Constant: '<S482>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
         *  Switch: '<S475>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S475>/Switch' */

    /* RelationalOperator: '<S483>/Relational Operator3' incorporates:
     *  Constant: '<S483>/Constant3'
     *  S-Function (sfix_bitop): '<S483>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_fl) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S483>/EdgeFalling1' */
    /* Logic: '<S484>/AND' incorporates:
     *  Logic: '<S484>/OR1'
     *  UnitDelay: '<S484>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_fs));

    /* Update for UnitDelay: '<S484>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_fs = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S483>/EdgeFalling1' */

    /* Switch: '<S483>/Switch' incorporates:
     *  Logic: '<S413>/OR'
     *  Logic: '<S483>/OR4'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator9'
     *  Switch: '<S483>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Constant: '<S488>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Brk_St) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_LatAcc) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRA_o) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSF_o) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdT_a) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_BrakeP) & 3U) != 0U))
        {
            /* Switch: '<S483>/Switch1' incorporates:
             *  Constant: '<S489>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S483>/Switch1' incorporates:
             *  Constant: '<S490>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Switch: '<S483>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S483>/Switch' */

    /* RelationalOperator: '<S491>/Relational Operator3' incorporates:
     *  Constant: '<S491>/Constant3'
     *  S-Function (sfix_bitop): '<S491>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S491>/EdgeFalling1' */
    /* Logic: '<S492>/AND' incorporates:
     *  Logic: '<S492>/OR1'
     *  UnitDelay: '<S492>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cj));

    /* Update for UnitDelay: '<S492>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cj = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S491>/EdgeFalling1' */

    /* Switch: '<S491>/Switch' incorporates:
     *  Logic: '<S414>/OR'
     *  Logic: '<S491>/OR4'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator4'
     *  Switch: '<S491>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Constant: '<S496>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_LatA_h) & 3U) != 0U))
        {
            /* Switch: '<S491>/Switch1' incorporates:
             *  Constant: '<S497>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S491>/Switch1' incorporates:
             *  Constant: '<S498>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Switch: '<S491>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S491>/Switch' */

    /* RelationalOperator: '<S499>/Relational Operator3' incorporates:
     *  Constant: '<S499>/Constant3'
     *  S-Function (sfix_bitop): '<S499>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_je) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S499>/EdgeFalling1' */
    /* Logic: '<S500>/AND' incorporates:
     *  Logic: '<S500>/OR1'
     *  UnitDelay: '<S500>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jc));

    /* Update for UnitDelay: '<S500>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jc = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S499>/EdgeFalling1' */

    /* Switch: '<S499>/Switch' incorporates:
     *  Logic: '<S499>/OR4'
     *  S-Function (sfix_bitop): '<S415>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S415>/Bitwise Operator4'
     *  Switch: '<S499>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Constant: '<S504>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 3) > 0)
        {
            /* Switch: '<S499>/Switch1' incorporates:
             *  Constant: '<S505>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S499>/Switch1' incorporates:
             *  Constant: '<S506>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Switch: '<S499>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S499>/Switch' */

    /* RelationalOperator: '<S507>/Relational Operator3' incorporates:
     *  Constant: '<S507>/Constant3'
     *  S-Function (sfix_bitop): '<S507>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_mp) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S507>/EdgeFalling1' */
    /* Logic: '<S508>/AND' incorporates:
     *  Logic: '<S508>/OR1'
     *  UnitDelay: '<S508>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S508>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_e = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S507>/EdgeFalling1' */

    /* Switch: '<S507>/Switch' incorporates:
     *  Logic: '<S416>/OR'
     *  Logic: '<S507>/OR4'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Operator4'
     *  Switch: '<S507>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
         *  Constant: '<S512>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_6) & 3U) != 0U))
        {
            /* Switch: '<S507>/Switch1' incorporates:
             *  Constant: '<S513>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S507>/Switch1' incorporates:
             *  Constant: '<S514>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
         *  Switch: '<S507>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S507>/Switch' */

    /* RelationalOperator: '<S515>/Relational Operator3' incorporates:
     *  Constant: '<S515>/Constant3'
     *  S-Function (sfix_bitop): '<S515>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_e) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S515>/EdgeFalling1' */
    /* Logic: '<S516>/AND' incorporates:
     *  Logic: '<S516>/OR1'
     *  UnitDelay: '<S516>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_k0));

    /* Update for UnitDelay: '<S516>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_k0 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S515>/EdgeFalling1' */

    /* Switch: '<S515>/Switch' incorporates:
     *  Logic: '<S417>/OR'
     *  Logic: '<S515>/OR4'
     *  S-Function (sfix_bitop): '<S417>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S417>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S417>/Bitwise Operator4'
     *  Switch: '<S515>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
         *  Constant: '<S520>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_6) & 3U) != 0U))
        {
            /* Switch: '<S515>/Switch1' incorporates:
             *  Constant: '<S521>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S515>/Switch1' incorporates:
             *  Constant: '<S522>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
         *  Switch: '<S515>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S515>/Switch' */

    /* RelationalOperator: '<S523>/Relational Operator3' incorporates:
     *  Constant: '<S523>/Constant3'
     *  S-Function (sfix_bitop): '<S523>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_g) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S523>/EdgeFalling1' */
    /* Logic: '<S524>/AND' incorporates:
     *  Logic: '<S524>/OR1'
     *  UnitDelay: '<S524>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_pr));

    /* Update for UnitDelay: '<S524>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_pr = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S523>/EdgeFalling1' */

    /* Switch: '<S523>/Switch' incorporates:
     *  Logic: '<S523>/OR4'
     *  S-Function (sfix_bitop): '<S418>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S418>/Bitwise Operator4'
     *  Switch: '<S523>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
         *  Constant: '<S528>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 3) > 0)
        {
            /* Switch: '<S523>/Switch1' incorporates:
             *  Constant: '<S529>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S523>/Switch1' incorporates:
             *  Constant: '<S530>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
         *  Switch: '<S523>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S523>/Switch' */

    /* RelationalOperator: '<S531>/Relational Operator3' incorporates:
     *  Constant: '<S531>/Constant3'
     *  S-Function (sfix_bitop): '<S531>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_a0) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S531>/EdgeFalling1' */
    /* Logic: '<S532>/AND' incorporates:
     *  Logic: '<S532>/OR1'
     *  UnitDelay: '<S532>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ie));

    /* Update for UnitDelay: '<S532>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ie = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S531>/EdgeFalling1' */

    /* Switch: '<S531>/Switch' incorporates:
     *  Logic: '<S419>/OR'
     *  Logic: '<S531>/OR4'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator9'
     *  Switch: '<S531>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Constant: '<S536>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn) & 3U) !=
                    0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_GlobDr)
                             & 3U) != 0U)) || ((((uint32)
                     rtb_TmpSignalConversionAtVeSR1B_y_ACC_On) & 3U) != 0U)) ||
                 ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Bonnet) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_KeyInI) &
                            3U) != 0U)) || ((((uint32)
                  rtb_TmpSignalConversionAtVeSR1B_y_EVAP_T) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Bonn_c) & 3U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CurrBa) & 3U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IBS3_S) & 3U) != 0U))
        {
            /* Switch: '<S531>/Switch1' incorporates:
             *  Constant: '<S537>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S531>/Switch1' incorporates:
             *  Constant: '<S538>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Switch: '<S531>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S531>/Switch' */

    /* RelationalOperator: '<S539>/Relational Operator3' incorporates:
     *  Constant: '<S539>/Constant3'
     *  S-Function (sfix_bitop): '<S539>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S539>/EdgeFalling1' */
    /* Logic: '<S540>/AND' incorporates:
     *  Logic: '<S540>/OR1'
     *  UnitDelay: '<S540>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_hw));

    /* Update for UnitDelay: '<S540>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_hw = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S539>/EdgeFalling1' */

    /* Switch: '<S539>/Switch' incorporates:
     *  Logic: '<S420>/OR'
     *  Logic: '<S539>/OR4'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator9'
     *  Switch: '<S539>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
         *  Constant: '<S544>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSAct) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_LHF_Sp) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRAct) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSFai) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdTot) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_BrkPdl) & 3U) != 0U))
        {
            /* Switch: '<S539>/Switch1' incorporates:
             *  Constant: '<S545>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S539>/Switch1' incorporates:
             *  Constant: '<S546>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
         *  Switch: '<S539>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S539>/Switch' */

    /* RelationalOperator: '<S547>/Relational Operator3' incorporates:
     *  Constant: '<S547>/Constant3'
     *  S-Function (sfix_bitop): '<S547>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S547>/EdgeFalling1' */
    /* Logic: '<S548>/AND' incorporates:
     *  Logic: '<S548>/OR1'
     *  UnitDelay: '<S548>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_i1));

    /* Update for UnitDelay: '<S548>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_i1 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S547>/EdgeFalling1' */

    /* Switch: '<S547>/Switch' incorporates:
     *  Logic: '<S421>/OR'
     *  Logic: '<S547>/OR4'
     *  S-Function (sfix_bitop): '<S421>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S421>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S421>/Bitwise Operator4'
     *  Switch: '<S547>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Constant: '<S552>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_TSRSts) & 3U) != 0U))
        {
            /* Switch: '<S547>/Switch1' incorporates:
             *  Constant: '<S553>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S547>/Switch1' incorporates:
             *  Constant: '<S554>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Switch: '<S547>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S547>/Switch' */

    /* RelationalOperator: '<S555>/Relational Operator3' incorporates:
     *  Constant: '<S555>/Constant3'
     *  S-Function (sfix_bitop): '<S555>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S555>/EdgeFalling1' */
    /* Logic: '<S556>/AND' incorporates:
     *  Logic: '<S556>/OR1'
     *  UnitDelay: '<S556>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_axk));

    /* Update for UnitDelay: '<S556>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_axk = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S555>/EdgeFalling1' */

    /* Switch: '<S555>/Switch' incorporates:
     *  Logic: '<S555>/OR4'
     *  S-Function (sfix_bitop): '<S422>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S422>/Bitwise Operator4'
     *  Switch: '<S555>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Creep_) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Constant: '<S560>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_Creep_) & 3) > 0)
        {
            /* Switch: '<S555>/Switch1' incorporates:
             *  Constant: '<S561>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S555>/Switch1' incorporates:
             *  Constant: '<S562>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Switch: '<S555>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S555>/Switch' */

    /* RelationalOperator: '<S563>/Relational Operator3' incorporates:
     *  Constant: '<S563>/Constant3'
     *  S-Function (sfix_bitop): '<S563>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_a) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S563>/EdgeFalling1' */
    /* Logic: '<S564>/AND' incorporates:
     *  Logic: '<S564>/OR1'
     *  UnitDelay: '<S564>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_po));

    /* Update for UnitDelay: '<S564>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_po = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S563>/EdgeFalling1' */

    /* Switch: '<S563>/Switch' incorporates:
     *  Logic: '<S423>/OR'
     *  Logic: '<S563>/OR4'
     *  S-Function (sfix_bitop): '<S423>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S423>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S423>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S423>/Bitwise Operator5'
     *  Switch: '<S563>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Constant: '<S568>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n) & 3U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_c) & 3U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPC_a5) & 3U) != 0U))
        {
            /* Switch: '<S563>/Switch1' incorporates:
             *  Constant: '<S569>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S563>/Switch1' incorporates:
             *  Constant: '<S570>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Switch: '<S563>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S563>/Switch' */

    /* RelationalOperator: '<S571>/Relational Operator3' incorporates:
     *  Constant: '<S571>/Constant3'
     *  S-Function (sfix_bitop): '<S571>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S571>/EdgeFalling1' */
    /* Logic: '<S572>/AND' incorporates:
     *  Logic: '<S572>/OR1'
     *  UnitDelay: '<S572>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_om));

    /* Update for UnitDelay: '<S572>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_om = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S571>/EdgeFalling1' */

    /* Switch: '<S571>/Switch' incorporates:
     *  Logic: '<S424>/OR'
     *  Logic: '<S571>/OR4'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator6'
     *  Switch: '<S571>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
         *  Constant: '<S576>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 3U) != 0U) ||
              ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AC_L_i) & 3U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_DC_T_o) & 3U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Char_f) & 3U) != 0U))
        {
            /* Switch: '<S571>/Switch1' incorporates:
             *  Constant: '<S577>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S571>/Switch1' incorporates:
             *  Constant: '<S578>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
         *  Switch: '<S571>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S571>/Switch' */

    /* RelationalOperator: '<S579>/Relational Operator3' incorporates:
     *  Constant: '<S579>/Constant3'
     *  S-Function (sfix_bitop): '<S579>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_nh) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S579>/EdgeFalling1' */
    /* Logic: '<S580>/AND' incorporates:
     *  Logic: '<S580>/OR1'
     *  UnitDelay: '<S580>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_nr));

    /* Update for UnitDelay: '<S580>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_nr = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S579>/EdgeFalling1' */

    /* Switch: '<S579>/Switch' incorporates:
     *  Logic: '<S425>/OR'
     *  Logic: '<S579>/OR4'
     *  S-Function (sfix_bitop): '<S425>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S425>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S425>/Bitwise Operator4'
     *  Switch: '<S579>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
         *  Constant: '<S584>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_e) & 3U) != 0U))
        {
            /* Switch: '<S579>/Switch1' incorporates:
             *  Constant: '<S585>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S579>/Switch1' incorporates:
             *  Constant: '<S586>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
         *  Switch: '<S579>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S579>/Switch' */

    /* RelationalOperator: '<S587>/Relational Operator3' incorporates:
     *  Constant: '<S587>/Constant3'
     *  S-Function (sfix_bitop): '<S587>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_o) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S587>/EdgeFalling1' */
    /* Logic: '<S588>/AND' incorporates:
     *  Logic: '<S588>/OR1'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jw));

    /* Update for UnitDelay: '<S588>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jw = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S587>/EdgeFalling1' */

    /* Switch: '<S587>/Switch' incorporates:
     *  Logic: '<S426>/OR'
     *  Logic: '<S587>/OR4'
     *  S-Function (sfix_bitop): '<S426>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S426>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S426>/Bitwise Operator4'
     *  Switch: '<S587>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
         *  Constant: '<S592>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_a) & 3U) != 0U))
        {
            /* Switch: '<S587>/Switch1' incorporates:
             *  Constant: '<S593>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S587>/Switch1' incorporates:
             *  Constant: '<S594>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
         *  Switch: '<S587>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S587>/Switch' */
    /* End of Outputs for SubSystem: '<S4>/COREBEV_MY24' */
#elif Rte_SysCon_Variant_CCMB_PEGASUS

    /* Outputs for Atomic SubSystem: '<S4>/PEGASUS' */
    /* RelationalOperator: '<S624>/Relational Operator3' incorporates:
     *  Constant: '<S624>/Constant3'
     *  S-Function (sfix_bitop): '<S624>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_eq) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S624>/EdgeFalling1' */
    /* Logic: '<S625>/AND' incorporates:
     *  Logic: '<S625>/OR1'
     *  UnitDelay: '<S625>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S625>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_h = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S624>/EdgeFalling1' */

    /* Switch: '<S624>/Switch' incorporates:
     *  Logic: '<S595>/OR2'
     *  Logic: '<S624>/OR4'
     *  S-Function (sfix_bitop): '<S595>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S595>/Bitwise Operator5'
     *  Switch: '<S624>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
         *  Constant: '<S629>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 7U) != 0U) &&
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 7U) != 0U))
        {
            /* Switch: '<S624>/Switch1' incorporates:
             *  Constant: '<S630>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S624>/Switch1' incorporates:
             *  Constant: '<S631>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
         *  Switch: '<S624>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S624>/Switch' */

    /* RelationalOperator: '<S632>/Relational Operator3' incorporates:
     *  Constant: '<S632>/Constant3'
     *  S-Function (sfix_bitop): '<S632>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_bu) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S632>/EdgeFalling1' */
    /* Logic: '<S633>/AND' incorporates:
     *  Logic: '<S633>/OR1'
     *  UnitDelay: '<S633>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ax));

    /* Update for UnitDelay: '<S633>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ax = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S632>/EdgeFalling1' */

    /* Switch: '<S632>/Switch' incorporates:
     *  Logic: '<S596>/OR2'
     *  Logic: '<S632>/OR4'
     *  S-Function (sfix_bitop): '<S596>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S596>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S596>/Bitwise Operator4'
     *  Switch: '<S632>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Constant: '<S637>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCMCn) & 7U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCM_D) & 7U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_BPCM_C) & 7U) != 0U))
        {
            /* Switch: '<S632>/Switch1' incorporates:
             *  Constant: '<S638>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S632>/Switch1' incorporates:
             *  Constant: '<S639>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
         *  Switch: '<S632>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S632>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_PCM_A' */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_PCM_A_Value(&tmpRead_5);

    /* RelationalOperator: '<S640>/Relational Operator3' incorporates:
     *  Constant: '<S640>/Constant3'
     *  S-Function (sfix_bitop): '<S640>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_5) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S640>/EdgeFalling1' */
    /* Logic: '<S641>/AND' incorporates:
     *  Logic: '<S641>/OR1'
     *  UnitDelay: '<S641>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_f0));

    /* Update for UnitDelay: '<S641>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_f0 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S640>/EdgeFalling1' */

    /* Switch: '<S640>/Switch' incorporates:
     *  Logic: '<S597>/OR1'
     *  Logic: '<S597>/OR2'
     *  Logic: '<S597>/OR3'
     *  Logic: '<S597>/OR4'
     *  Logic: '<S597>/OR5'
     *  Logic: '<S597>/OR6'
     *  Logic: '<S640>/OR4'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S597>/Bitwise Operator9'
     *  Switch: '<S640>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommECM_PCM_A' incorporates:
         *  Constant: '<S645>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommECM_PCM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Therma) & 7U) != 0U)
                && ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Ther_d) & 7U) !=
                    0U)) || (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_RPMOve)
                               & 7U) != 0U) && ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_RPMO_j) & 7U) != 0U))) ||
                (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngMnS) & 7U) !=
                  0U) && ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngAct) &
                           7U) != 0U))) || (((((uint32)
                 rtb_TmpSignalConversionAtVeSR1B_y_EngSpd) & 7U) != 0U) &&
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngS_i) & 7U) != 0U)))
            || (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngTrq) & 7U) != 0U)
                && ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngTqA) & 7U) !=
                    0U)))
        {
            /* Switch: '<S640>/Switch1' incorporates:
             *  Constant: '<S646>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S640>/Switch1' incorporates:
             *  Constant: '<S647>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommECM_PCM_A' incorporates:
         *  Switch: '<S640>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostCommECM_PCM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S640>/Switch' */

    /* RelationalOperator: '<S648>/Relational Operator3' incorporates:
     *  Constant: '<S648>/Constant3'
     *  S-Function (sfix_bitop): '<S648>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_db) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S648>/EdgeFalling1' */
    /* Logic: '<S649>/AND' incorporates:
     *  Logic: '<S649>/OR1'
     *  UnitDelay: '<S649>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_kh));

    /* Update for UnitDelay: '<S649>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_kh = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S648>/EdgeFalling1' */

    /* Switch: '<S648>/Switch' incorporates:
     *  Logic: '<S598>/OR2'
     *  Logic: '<S648>/OR4'
     *  S-Function (sfix_bitop): '<S598>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S598>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S598>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S598>/Bitwise Operator5'
     *  Switch: '<S648>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
         *  Constant: '<S653>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_APM_Ct) & 7U) != 0U) ||
              ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_AC_LnH) & 7U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_DC_Tim) & 7U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_Charge) & 7U) != 0U))
        {
            /* Switch: '<S648>/Switch1' incorporates:
             *  Constant: '<S654>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S648>/Switch1' incorporates:
             *  Constant: '<S655>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
         *  Switch: '<S648>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(tmpRead_1v);
    }

    /* End of Switch: '<S648>/Switch' */

    /* RelationalOperator: '<S656>/Relational Operator3' incorporates:
     *  Constant: '<S656>/Constant3'
     *  S-Function (sfix_bitop): '<S656>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_l) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S656>/EdgeFalling1' */
    /* Logic: '<S657>/AND' incorporates:
     *  Logic: '<S657>/OR1'
     *  UnitDelay: '<S657>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ij));

    /* Update for UnitDelay: '<S657>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ij = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S656>/EdgeFalling1' */

    /* Switch: '<S656>/Switch' incorporates:
     *  Logic: '<S599>/OR2'
     *  Logic: '<S656>/OR4'
     *  S-Function (sfix_bitop): '<S599>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S599>/Bitwise Operator3'
     *  Switch: '<S656>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
         *  Constant: '<S661>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPA_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPA_6) & 7U) != 0U))
        {
            /* Switch: '<S656>/Switch1' incorporates:
             *  Constant: '<S662>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S656>/Switch1' incorporates:
             *  Constant: '<S663>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
         *  Switch: '<S656>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value(tmpRead_1v);
    }

    /* End of Switch: '<S656>/Switch' */

    /* RelationalOperator: '<S664>/Relational Operator3' incorporates:
     *  Constant: '<S664>/Constant3'
     *  S-Function (sfix_bitop): '<S664>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ma) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S664>/EdgeFalling1' */
    /* Logic: '<S665>/AND' incorporates:
     *  Logic: '<S665>/OR1'
     *  UnitDelay: '<S665>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_ad));

    /* Update for UnitDelay: '<S665>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_ad = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S664>/EdgeFalling1' */

    /* Switch: '<S664>/Switch' incorporates:
     *  Logic: '<S600>/OR2'
     *  Logic: '<S664>/OR4'
     *  S-Function (sfix_bitop): '<S600>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S600>/Bitwise Operator3'
     *  Switch: '<S664>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
         *  Constant: '<S669>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPB_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_MCPB_6) & 7U) != 0U))
        {
            /* Switch: '<S664>/Switch1' incorporates:
             *  Constant: '<S670>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S664>/Switch1' incorporates:
             *  Constant: '<S671>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
         *  Switch: '<S664>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(tmpRead_1v);
    }

    /* End of Switch: '<S664>/Switch' */

    /* RelationalOperator: '<S672>/Relational Operator3' incorporates:
     *  Constant: '<S672>/Constant3'
     *  S-Function (sfix_bitop): '<S672>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ir) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S672>/EdgeFalling1' */
    /* Logic: '<S673>/AND' incorporates:
     *  Logic: '<S673>/OR1'
     *  UnitDelay: '<S673>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_oo));

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_oo = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S672>/EdgeFalling1' */

    /* Switch: '<S672>/Switch' incorporates:
     *  Logic: '<S601>/OR2'
     *  Logic: '<S672>/OR4'
     *  S-Function (sfix_bitop): '<S601>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S601>/Bitwise Operator3'
     *  Switch: '<S672>/Switch1'
     */
    if (rtb_NOT4 || rtb_AND_pg)
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_GenrA_CM' incorporates:
         *  Constant: '<S677>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_GenrA_CM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_SGCP_C) & 7U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeCRDB_y_SGCP_6) & 7U) != 0U))
        {
            /* Switch: '<S672>/Switch1' incorporates:
             *  Constant: '<S678>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S672>/Switch1' incorporates:
             *  Constant: '<S679>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_GenrA_CM' incorporates:
         *  Switch: '<S672>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_GenrA_CM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S672>/Switch' */

    /* RelationalOperator: '<S680>/Relational Operator3' incorporates:
     *  Constant: '<S680>/Constant3'
     *  S-Function (sfix_bitop): '<S680>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_bp) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S680>/EdgeFalling1' */
    /* Logic: '<S681>/AND' incorporates:
     *  Logic: '<S681>/OR1'
     *  UnitDelay: '<S681>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jn4));

    /* Update for UnitDelay: '<S681>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jn4 = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S680>/EdgeFalling1' */

    /* Switch: '<S680>/Switch' incorporates:
     *  Logic: '<S602>/OR'
     *  Logic: '<S680>/OR4'
     *  S-Function (sfix_bitop): '<S602>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S602>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S602>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S602>/Bitwise Operator5'
     *  Switch: '<S680>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
         *  Constant: '<S685>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCMCn) & 3U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_D) & 3U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_C) & 3U) != 0U))
        {
            /* Switch: '<S680>/Switch1' incorporates:
             *  Constant: '<S686>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S680>/Switch1' incorporates:
             *  Constant: '<S687>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
         *  Switch: '<S680>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S680>/Switch' */

    /* RelationalOperator: '<S688>/Relational Operator3' incorporates:
     *  Constant: '<S688>/Constant3'
     *  S-Function (sfix_bitop): '<S688>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_jl) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S688>/EdgeFalling1' */
    /* Logic: '<S689>/AND' incorporates:
     *  Logic: '<S689>/OR1'
     *  UnitDelay: '<S689>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_jn));

    /* Update for UnitDelay: '<S689>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_jn = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S688>/EdgeFalling1' */

    /* Switch: '<S688>/Switch' incorporates:
     *  Logic: '<S603>/OR'
     *  Logic: '<S688>/OR4'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S603>/Bitwise Operator9'
     *  Switch: '<S688>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
         *  Constant: '<S693>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM_Ct) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AC_LnH) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_ChrgFa) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EVSE_O) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_DC_Tim) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Charge) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_ACOutp) & 3U) != 0U))
        {
            /* Switch: '<S688>/Switch1' incorporates:
             *  Constant: '<S694>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S688>/Switch1' incorporates:
             *  Constant: '<S695>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
         *  Switch: '<S688>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S688>/Switch' */

    /* RelationalOperator: '<S696>/Relational Operator3' incorporates:
     *  Constant: '<S696>/Constant3'
     *  S-Function (sfix_bitop): '<S696>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_fl) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S696>/EdgeFalling1' */
    /* Logic: '<S697>/AND' incorporates:
     *  Logic: '<S697>/OR1'
     *  UnitDelay: '<S697>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cd));

    /* Update for UnitDelay: '<S697>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cd = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S696>/EdgeFalling1' */

    /* Switch: '<S696>/Switch' incorporates:
     *  Logic: '<S604>/OR'
     *  Logic: '<S696>/OR4'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator9'
     *  Switch: '<S696>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Constant: '<S701>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_REF_VE) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Brk_St) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_LatAcc) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRA_o) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSF_o) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdT_a) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_BrakeP) & 3U) != 0U))
        {
            /* Switch: '<S696>/Switch1' incorporates:
             *  Constant: '<S702>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S696>/Switch1' incorporates:
             *  Constant: '<S703>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
         *  Switch: '<S696>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S696>/Switch' */

    /* RelationalOperator: '<S704>/Relational Operator3' incorporates:
     *  Constant: '<S704>/Constant3'
     *  S-Function (sfix_bitop): '<S704>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ff) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S704>/EdgeFalling1' */
    /* Logic: '<S705>/AND' incorporates:
     *  Logic: '<S705>/OR1'
     *  UnitDelay: '<S705>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_px));

    /* Update for UnitDelay: '<S705>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_px = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S704>/EdgeFalling1' */

    /* Switch: '<S704>/Switch' incorporates:
     *  Logic: '<S605>/OR'
     *  Logic: '<S704>/OR4'
     *  S-Function (sfix_bitop): '<S605>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S605>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S605>/Bitwise Operator4'
     *  Switch: '<S704>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_ACC_Sy) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A' incorporates:
         *  Constant: '<S709>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ACC_Sy) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ACC_Bl) & 3U) != 0U))
        {
            /* Switch: '<S704>/Switch1' incorporates:
             *  Constant: '<S710>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S704>/Switch1' incorporates:
             *  Constant: '<S711>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A' incorporates:
         *  Switch: '<S704>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A_Value
            (tmpRead_1v);
    }

    /* End of Switch: '<S704>/Switch' */

    /* RelationalOperator: '<S712>/Relational Operator3' incorporates:
     *  Constant: '<S712>/Constant3'
     *  S-Function (sfix_bitop): '<S712>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S712>/EdgeFalling1' */
    /* Logic: '<S713>/AND' incorporates:
     *  Logic: '<S713>/OR1'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S713>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_n = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S712>/EdgeFalling1' */

    /* Switch: '<S712>/Switch' incorporates:
     *  Logic: '<S606>/OR'
     *  Logic: '<S712>/OR4'
     *  S-Function (sfix_bitop): '<S606>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S606>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S606>/Bitwise Operator4'
     *  Switch: '<S712>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Constant: '<S717>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IMPACT) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_LatA_h) & 3U) != 0U))
        {
            /* Switch: '<S712>/Switch1' incorporates:
             *  Constant: '<S718>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S712>/Switch1' incorporates:
             *  Constant: '<S719>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
         *  Switch: '<S712>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S712>/Switch' */

    /* RelationalOperator: '<S720>/Relational Operator3' incorporates:
     *  Constant: '<S720>/Constant3'
     *  S-Function (sfix_bitop): '<S720>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_je) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S720>/EdgeFalling1' */
    /* Logic: '<S721>/AND' incorporates:
     *  Logic: '<S721>/OR1'
     *  UnitDelay: '<S721>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S721>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_o = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S720>/EdgeFalling1' */

    /* Switch: '<S720>/Switch' incorporates:
     *  Logic: '<S720>/OR4'
     *  S-Function (sfix_bitop): '<S607>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S607>/Bitwise Operator4'
     *  Switch: '<S720>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Constant: '<S725>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_h) & 3) > 0)
        {
            /* Switch: '<S720>/Switch1' incorporates:
             *  Constant: '<S726>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S720>/Switch1' incorporates:
             *  Constant: '<S727>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
         *  Switch: '<S720>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S720>/Switch' */

    /* RelationalOperator: '<S728>/Relational Operator3' incorporates:
     *  Constant: '<S728>/Constant3'
     *  S-Function (sfix_bitop): '<S728>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_is) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S728>/EdgeFalling1' */
    /* Logic: '<S729>/AND' incorporates:
     *  Logic: '<S729>/OR1'
     *  UnitDelay: '<S729>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_fom));

    /* Update for UnitDelay: '<S729>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_fom = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S728>/EdgeFalling1' */

    /* Switch: '<S728>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CompressionTest_SigSts'
     *  Logic: '<S728>/OR4'
     *  S-Function (sfix_bitop): '<S608>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Ther_d) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_BusB' incorporates:
         *  Constant: '<S733>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_CompressionTest_SigSts_Value(&tmpRead_2);

        /* Switch: '<S728>/Switch1' incorporates:
         *  Constant: '<S734>/Constant'
         *  Constant: '<S735>/Constant'
         *  Inport: '<Root>/VeSR1B_y_CompressionTest_SigSts'
         *  Logic: '<S608>/OR'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator7'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator8'
         */
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Ther_d) & 3U) !=
                  0U) || ((((uint32)tmpRead_2) & 3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_RPMO_j) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngAct) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngS_i) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngTqA) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_EngOff) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_BusB' incorporates:
         *  Switch: '<S728>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S728>/Switch' */

    /* RelationalOperator: '<S736>/Relational Operator3' incorporates:
     *  Constant: '<S736>/Constant3'
     *  S-Function (sfix_bitop): '<S736>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_mp) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S736>/EdgeFalling1' */
    /* Logic: '<S737>/AND' incorporates:
     *  Logic: '<S737>/OR1'
     *  UnitDelay: '<S737>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S737>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_k = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S736>/EdgeFalling1' */

    /* Switch: '<S736>/Switch' incorporates:
     *  Logic: '<S609>/OR'
     *  Logic: '<S736>/OR4'
     *  S-Function (sfix_bitop): '<S609>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S609>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S609>/Bitwise Operator4'
     *  Switch: '<S736>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
         *  Constant: '<S741>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_6) & 3U) != 0U))
        {
            /* Switch: '<S736>/Switch1' incorporates:
             *  Constant: '<S742>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S736>/Switch1' incorporates:
             *  Constant: '<S743>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
         *  Switch: '<S736>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S736>/Switch' */

    /* RelationalOperator: '<S744>/Relational Operator3' incorporates:
     *  Constant: '<S744>/Constant3'
     *  S-Function (sfix_bitop): '<S744>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_e) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S744>/EdgeFalling1' */
    /* Logic: '<S745>/AND' incorporates:
     *  Logic: '<S745>/OR1'
     *  UnitDelay: '<S745>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S745>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_l = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S744>/EdgeFalling1' */

    /* Switch: '<S744>/Switch' incorporates:
     *  Logic: '<S610>/OR'
     *  Logic: '<S744>/OR4'
     *  S-Function (sfix_bitop): '<S610>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S610>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S610>/Bitwise Operator4'
     *  Switch: '<S744>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
         *  Constant: '<S749>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_6) & 3U) != 0U))
        {
            /* Switch: '<S744>/Switch1' incorporates:
             *  Constant: '<S750>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S744>/Switch1' incorporates:
             *  Constant: '<S751>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
         *  Switch: '<S744>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S744>/Switch' */

    /* RelationalOperator: '<S752>/Relational Operator3' incorporates:
     *  Constant: '<S752>/Constant3'
     *  S-Function (sfix_bitop): '<S752>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_i) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S752>/EdgeFalling1' */
    /* Logic: '<S753>/AND' incorporates:
     *  Logic: '<S753>/OR1'
     *  UnitDelay: '<S753>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S753>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_i = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S752>/EdgeFalling1' */

    /* Switch: '<S752>/Switch' incorporates:
     *  Logic: '<S611>/OR'
     *  Logic: '<S752>/OR4'
     *  S-Function (sfix_bitop): '<S611>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S611>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S611>/Bitwise Operator4'
     *  Switch: '<S752>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_SGCP_C) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC' incorporates:
         *  Constant: '<S757>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_SGCP_C) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_SGCP_6) & 3U) != 0U))
        {
            /* Switch: '<S752>/Switch1' incorporates:
             *  Constant: '<S758>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S752>/Switch1' incorporates:
             *  Constant: '<S759>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC' incorporates:
         *  Switch: '<S752>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S752>/Switch' */

    /* RelationalOperator: '<S760>/Relational Operator3' incorporates:
     *  Constant: '<S760>/Constant3'
     *  S-Function (sfix_bitop): '<S760>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_g) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S760>/EdgeFalling1' */
    /* Logic: '<S761>/AND' incorporates:
     *  Logic: '<S761>/OR1'
     *  UnitDelay: '<S761>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_a));

    /* Update for UnitDelay: '<S761>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_a = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S760>/EdgeFalling1' */

    /* Switch: '<S760>/Switch' incorporates:
     *  Logic: '<S760>/OR4'
     *  S-Function (sfix_bitop): '<S612>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S612>/Bitwise Operator4'
     *  Switch: '<S760>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
         *  Constant: '<S765>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_APCM_S) & 3) > 0)
        {
            /* Switch: '<S760>/Switch1' incorporates:
             *  Constant: '<S766>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S760>/Switch1' incorporates:
             *  Constant: '<S767>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
         *  Switch: '<S760>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S760>/Switch' */

    /* RelationalOperator: '<S768>/Relational Operator3' incorporates:
     *  Constant: '<S768>/Constant3'
     *  S-Function (sfix_bitop): '<S768>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_a0) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S768>/EdgeFalling1' */
    /* Logic: '<S769>/AND' incorporates:
     *  Logic: '<S769>/OR1'
     *  UnitDelay: '<S769>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cl));

    /* Update for UnitDelay: '<S769>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cl = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S768>/EdgeFalling1' */

    /* Switch: '<S768>/Switch' incorporates:
     *  Logic: '<S613>/OR'
     *  Logic: '<S768>/OR4'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator9'
     *  Switch: '<S768>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Constant: '<S773>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdIgn) & 3U) !=
                    0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_GlobDr)
                             & 3U) != 0U)) || ((((uint32)
                     rtb_TmpSignalConversionAtVeSR1B_y_ACC_On) & 3U) != 0U)) ||
                 ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Bonnet) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_KeyInI) &
                            3U) != 0U)) || ((((uint32)
                  rtb_TmpSignalConversionAtVeSR1B_y_EVAP_T) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Bonn_c) & 3U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CurrBa) & 3U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_IBS3_S) & 3U) != 0U))
        {
            /* Switch: '<S768>/Switch1' incorporates:
             *  Constant: '<S774>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S768>/Switch1' incorporates:
             *  Constant: '<S775>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
         *  Switch: '<S768>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S768>/Switch' */

    /* RelationalOperator: '<S776>/Relational Operator3' incorporates:
     *  Constant: '<S776>/Constant3'
     *  S-Function (sfix_bitop): '<S776>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S776>/EdgeFalling1' */
    /* Logic: '<S777>/AND' incorporates:
     *  Logic: '<S777>/OR1'
     *  UnitDelay: '<S777>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_fk));

    /* Update for UnitDelay: '<S777>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_fk = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S776>/EdgeFalling1' */

    /* Switch: '<S776>/Switch' incorporates:
     *  Logic: '<S614>/OR'
     *  Logic: '<S776>/OR4'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator9'
     *  Switch: '<S776>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
         *  Constant: '<S781>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BrkTrq) & 3U) !=
                  0U) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSAct) &
                           3U) != 0U)) || ((((uint32)
                   rtb_TmpSignalConversionAtVeSR1B_y_LHF_Sp) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ASRAct) & 3U) != 0U))
              || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_ABSFai) & 3U) !=
                  0U)) || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_CmdTot) &
                            3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_BrkPdl) & 3U) != 0U))
        {
            /* Switch: '<S776>/Switch1' incorporates:
             *  Constant: '<S782>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S776>/Switch1' incorporates:
             *  Constant: '<S783>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
         *  Switch: '<S776>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(tmpRead_1v);
    }

    /* End of Switch: '<S776>/Switch' */

    /* RelationalOperator: '<S784>/Relational Operator3' incorporates:
     *  Constant: '<S784>/Constant3'
     *  S-Function (sfix_bitop): '<S784>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S784>/EdgeFalling1' */
    /* Logic: '<S785>/AND' incorporates:
     *  Logic: '<S785>/OR1'
     *  UnitDelay: '<S785>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_gb));

    /* Update for UnitDelay: '<S785>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_gb = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S784>/EdgeFalling1' */

    /* Switch: '<S784>/Switch' incorporates:
     *  Logic: '<S615>/OR'
     *  Logic: '<S784>/OR4'
     *  S-Function (sfix_bitop): '<S615>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S615>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S615>/Bitwise Operator4'
     *  Switch: '<S784>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Constant: '<S789>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AEB_Sy) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_TSRSts) & 3U) != 0U))
        {
            /* Switch: '<S784>/Switch1' incorporates:
             *  Constant: '<S790>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S784>/Switch1' incorporates:
             *  Constant: '<S791>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
         *  Switch: '<S784>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S784>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ECM_A' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ECM_A_Value(&tmpRead);

    /* RelationalOperator: '<S792>/Relational Operator3' incorporates:
     *  Constant: '<S792>/Constant3'
     *  S-Function (sfix_bitop): '<S792>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S792>/EdgeFalling1' */
    /* Logic: '<S793>/AND' incorporates:
     *  Logic: '<S793>/OR1'
     *  UnitDelay: '<S793>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_cv));

    /* Update for UnitDelay: '<S793>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_cv = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S792>/EdgeFalling1' */

    /* Switch: '<S792>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_GF_Charge_SigSts'
     *  Logic: '<S792>/OR4'
     *  S-Function (sfix_bitop): '<S616>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_FuelCo) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A' incorporates:
         *  Constant: '<S797>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_GF_Charge_SigSts_Value(&tmpRead_0);

        /* Switch: '<S792>/Switch1' incorporates:
         *  Constant: '<S798>/Constant'
         *  Constant: '<S799>/Constant'
         *  Inport: '<Root>/VeSR1B_y_GF_Charge_SigSts'
         *  Logic: '<S616>/OR'
         *  S-Function (sfix_bitop): '<S616>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S616>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S616>/Bitwise Operator5'
         */
        if ((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_FuelCo) & 3U) != 0U) ||
             ((((uint32)tmpRead_0) & 3U) != 0U)) || ((((uint32)
                rtb_TmpSignalConversionAtVeSR1B_y_ECM_Ai) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A' incorporates:
         *  Switch: '<S792>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_Value(tmpRead_1v);
    }

    /* End of Switch: '<S792>/Switch' */

    /* RelationalOperator: '<S800>/Relational Operator3' incorporates:
     *  Constant: '<S800>/Constant3'
     *  S-Function (sfix_bitop): '<S800>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S800>/EdgeFalling1' */
    /* Logic: '<S801>/AND' incorporates:
     *  Logic: '<S801>/OR1'
     *  UnitDelay: '<S801>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S801>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_g = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S800>/EdgeFalling1' */

    /* Switch: '<S800>/Switch' incorporates:
     *  Logic: '<S800>/OR4'
     *  S-Function (sfix_bitop): '<S617>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S617>/Bitwise Operator4'
     *  Switch: '<S800>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Creep_) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Constant: '<S805>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(CeDFIB_e_Init);
    }
    else
    {
        if ((((sint32)rtb_TmpSignalConversionAtVeSR1B_y_Creep_) & 3) > 0)
        {
            /* Switch: '<S800>/Switch1' incorporates:
             *  Constant: '<S806>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S800>/Switch1' incorporates:
             *  Constant: '<S807>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
         *  Switch: '<S800>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(tmpRead_1v);
    }

    /* End of Switch: '<S800>/Switch' */

    /* RelationalOperator: '<S808>/Relational Operator3' incorporates:
     *  Constant: '<S808>/Constant3'
     *  S-Function (sfix_bitop): '<S808>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_a) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S808>/EdgeFalling1' */
    /* Logic: '<S809>/AND' incorporates:
     *  Logic: '<S809>/OR1'
     *  UnitDelay: '<S809>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S809>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_c = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S808>/EdgeFalling1' */

    /* Switch: '<S808>/Switch' incorporates:
     *  Logic: '<S618>/OR'
     *  Logic: '<S808>/OR4'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator5'
     *  Switch: '<S808>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Constant: '<S813>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if ((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_n) & 3U) != 0U) ||
             ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPCM_c) & 3U) != 0U)) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_BPC_a5) & 3U) != 0U))
        {
            /* Switch: '<S808>/Switch1' incorporates:
             *  Constant: '<S814>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S808>/Switch1' incorporates:
             *  Constant: '<S815>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
         *  Switch: '<S808>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S808>/Switch' */

    /* RelationalOperator: '<S816>/Relational Operator3' incorporates:
     *  Constant: '<S816>/Constant3'
     *  S-Function (sfix_bitop): '<S816>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_jw) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S816>/EdgeFalling1' */
    /* Logic: '<S817>/AND' incorporates:
     *  Logic: '<S817>/OR1'
     *  UnitDelay: '<S817>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_fo));

    /* Update for UnitDelay: '<S817>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_fo = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S816>/EdgeFalling1' */

    /* Switch: '<S816>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ECM_LHOM_SigSts'
     *  Logic: '<S816>/OR4'
     *  S-Function (sfix_bitop): '<S619>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_Therma) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataECM' incorporates:
         *  Constant: '<S821>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataECM_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_ECM_LHOM_SigSts_Value(&tmpRead_1);

        /* Switch: '<S816>/Switch1' incorporates:
         *  Constant: '<S822>/Constant'
         *  Constant: '<S823>/Constant'
         *  Inport: '<Root>/VeSR1B_y_ECM_LHOM_SigSts'
         *  Logic: '<S619>/OR'
         *  S-Function (sfix_bitop): '<S619>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S619>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S619>/Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S619>/Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S619>/Bitwise Operator6'
         *  S-Function (sfix_bitop): '<S619>/Bitwise Operator7'
         */
        if (((((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Therma) & 3U) != 0U)
                || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_RPMOve) & 3U) !=
                    0U)) || ((((uint32)tmpRead_1) & 3U) != 0U)) || ((((uint32)
                 rtb_TmpSignalConversionAtVeSR1B_y_EngMnS) & 3U) != 0U)) ||
                ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngSpd) & 3U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_EngTrq) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataECM' incorporates:
         *  Switch: '<S816>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvDataECM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S816>/Switch' */

    /* RelationalOperator: '<S824>/Relational Operator3' incorporates:
     *  Constant: '<S824>/Constant3'
     *  S-Function (sfix_bitop): '<S824>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S824>/EdgeFalling1' */
    /* Logic: '<S825>/AND' incorporates:
     *  Logic: '<S825>/OR1'
     *  UnitDelay: '<S825>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_j));

    /* Update for UnitDelay: '<S825>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_j = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S824>/EdgeFalling1' */

    /* Switch: '<S824>/Switch' incorporates:
     *  Logic: '<S620>/OR'
     *  Logic: '<S824>/OR4'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator6'
     *  Switch: '<S824>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
         *  Constant: '<S829>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(CeDFIB_e_Init);
    }
    else
    {
        if (((((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_APM__p) & 3U) != 0U) ||
              ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_AC_L_i) & 3U) != 0U))
             || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_DC_T_o) & 3U) != 0U))
            || ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_Char_f) & 3U) != 0U))
        {
            /* Switch: '<S824>/Switch1' incorporates:
             *  Constant: '<S830>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S824>/Switch1' incorporates:
             *  Constant: '<S831>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
         *  Switch: '<S824>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S824>/Switch' */

    /* RelationalOperator: '<S832>/Relational Operator3' incorporates:
     *  Constant: '<S832>/Constant3'
     *  S-Function (sfix_bitop): '<S832>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_nh) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S832>/EdgeFalling1' */
    /* Logic: '<S833>/AND' incorporates:
     *  Logic: '<S833>/OR1'
     *  UnitDelay: '<S833>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S833>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_f = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S832>/EdgeFalling1' */

    /* Switch: '<S832>/Switch' incorporates:
     *  Logic: '<S621>/OR'
     *  Logic: '<S832>/OR4'
     *  S-Function (sfix_bitop): '<S621>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S621>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S621>/Bitwise Operator4'
     *  Switch: '<S832>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
         *  Constant: '<S837>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_a) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPA_e) & 3U) != 0U))
        {
            /* Switch: '<S832>/Switch1' incorporates:
             *  Constant: '<S838>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S832>/Switch1' incorporates:
             *  Constant: '<S839>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
         *  Switch: '<S832>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S832>/Switch' */

    /* RelationalOperator: '<S840>/Relational Operator3' incorporates:
     *  Constant: '<S840>/Constant3'
     *  S-Function (sfix_bitop): '<S840>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_o) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S840>/EdgeFalling1' */
    /* Logic: '<S841>/AND' incorporates:
     *  Logic: '<S841>/OR1'
     *  UnitDelay: '<S841>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) &&
                  (CCMB_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S841>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE_p = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S840>/EdgeFalling1' */

    /* Switch: '<S840>/Switch' incorporates:
     *  Logic: '<S622>/OR'
     *  Logic: '<S840>/OR4'
     *  S-Function (sfix_bitop): '<S622>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S622>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S622>/Bitwise Operator4'
     *  Switch: '<S840>/Switch1'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
         *  Constant: '<S845>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value
            (CeDFIB_e_Init);
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_h) & 3U) != 0U) ||
            ((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_MCPB_a) & 3U) != 0U))
        {
            /* Switch: '<S840>/Switch1' incorporates:
             *  Constant: '<S846>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            /* Switch: '<S840>/Switch1' incorporates:
             *  Constant: '<S847>/Constant'
             */
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
         *  Switch: '<S840>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value(tmpRead_1v);
    }

    /* End of Switch: '<S840>/Switch' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_InvData_SGCM' */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_SGCM_Value(&tmpRead_3);

    /* RelationalOperator: '<S848>/Relational Operator3' incorporates:
     *  Constant: '<S848>/Constant3'
     *  S-Function (sfix_bitop): '<S848>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_na = ((((uint32)tmpRead_3) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S848>/EdgeFalling1' */
    /* Logic: '<S849>/AND' incorporates:
     *  Logic: '<S849>/OR1'
     *  UnitDelay: '<S849>/Unit Delay'
     */
    rtb_AND_pg = ((!rtb_RelationalOperator3_na) && (CCMB_ac_DW.UnitDelay_DSTATE));

    /* Update for UnitDelay: '<S849>/Unit Delay' */
    CCMB_ac_DW.UnitDelay_DSTATE = rtb_RelationalOperator3_na;

    /* End of Outputs for SubSystem: '<S848>/EdgeFalling1' */

    /* Switch: '<S848>/Switch' incorporates:
     *  Inport: '<Root>/VeSR1B_y_SGCP_6SO_Status_P_FD5_SigSts'
     *  Logic: '<S848>/OR4'
     *  S-Function (sfix_bitop): '<S623>/Bitwise Operator4'
     */
    if ((rtb_NOT4 || rtb_AND_pg) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR1B_y_SGCP_n) & 4U) != 0U))
    {
        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_SGCM' incorporates:
         *  Constant: '<S853>/Constant'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_SGCM_Value(CeDFIB_e_Init);
    }
    else
    {
        (void)Rte_Read_VeSR1B_y_SGCP_6SO_Status_P_FD5_SigSts_Value(&tmpRead_4);

        /* Switch: '<S848>/Switch1' incorporates:
         *  Constant: '<S854>/Constant'
         *  Constant: '<S855>/Constant'
         *  Inport: '<Root>/VeSR1B_y_SGCP_6SO_Status_P_FD5_SigSts'
         *  Logic: '<S623>/OR'
         *  S-Function (sfix_bitop): '<S623>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S623>/Bitwise Operator3'
         */
        if (((((uint32)rtb_TmpSignalConversionAtVeSR1B_y_SGCP_n) & 3U) != 0U) ||
            ((((uint32)tmpRead_4) & 3U) != 0U))
        {
            tmpRead_1v = CeDFIB_e_Fail;
        }
        else
        {
            tmpRead_1v = CeDFIB_e_Pass;
        }

        /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_SGCM' incorporates:
         *  Switch: '<S848>/Switch1'
         */
        (void)Rte_Write_VeCCMB_e_FaultSts_InvData_SGCM_Value(tmpRead_1v);
    }

    /* End of Switch: '<S848>/Switch' */
    /* End of Outputs for SubSystem: '<S4>/PEGASUS' */
#endif

    /* End of Outputs for SubSystem: '<S1>/10ms_VariantOptions' */
#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, CCMB_CODE) CCMB_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/Init' */
#if Rte_SysCon_Variant_CCMB_BLUEN || Rte_SysCon_Variant_CCMB_COREBEV || Rte_SysCon_Variant_CCMB_PEGASUS

    /* Outputs for Atomic SubSystem: '<S2>/Init_VariantOptions' */
#if Rte_SysCon_Variant_CCMB_BLUEN

    /* Outputs for Atomic SubSystem: '<S856>/BLUEN' */
    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
     *  Constant: '<S893>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
     *  Constant: '<S860>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
     *  Constant: '<S871>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
     *  Constant: '<S882>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
     *  Constant: '<S894>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
     *  Constant: '<S895>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
     *  Constant: '<S896>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
     *  Constant: '<S897>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
     *  Constant: '<S898>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
     *  Constant: '<S861>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
     *  Constant: '<S862>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
     *  Constant: '<S863>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
     *  Constant: '<S864>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
     *  Constant: '<S865>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
     *  Constant: '<S866>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
     *  Constant: '<S867>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
     *  Constant: '<S868>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
     *  Constant: '<S869>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
     *  Constant: '<S870>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
     *  Constant: '<S872>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
     *  Constant: '<S873>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A' incorporates:
     *  Constant: '<S874>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A' incorporates:
     *  Constant: '<S875>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_BusB' incorporates:
     *  Constant: '<S876>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_SGCM' incorporates:
     *  Constant: '<S877>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_SGCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC' incorporates:
     *  Constant: '<S878>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_GenrA_CM' incorporates:
     *  Constant: '<S879>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_GenrA_CM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommECM_PCM_A' incorporates:
     *  Constant: '<S880>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostCommECM_PCM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataECM' incorporates:
     *  Constant: '<S881>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvDataECM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_TCSBM' incorporates:
     *  Constant: '<S883>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_TCSBM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_RFHub_CRC_MC' incorporates:
     *  Constant: '<S884>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_RFHub_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataFD11DMPI' incorporates:
     *  Constant: '<S885>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvDataFD11DMPI_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_DMCM_A_InvDataBPCM' incorporates:
     *  Constant: '<S886>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_DMCM_A_InvDataBPCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataPBW' incorporates:
     *  Constant: '<S887>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvDataPBW_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataFD5DMPI' incorporates:
     *  Constant: '<S888>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvDataFD5DMPI_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommDrvMtrPwrInvCntrlMod' incorporates:
     *  Constant: '<S889>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostCommDrvMtrPwrInvCntrlMod_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_ParkPawlCM' incorporates:
     *  Constant: '<S890>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_ParkPawlCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommABSCM' incorporates:
     *  Constant: '<S891>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostCommABSCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_PSCM_A' incorporates:
     *  Constant: '<S892>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_PSCM_A_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S856>/BLUEN' */
#elif Rte_SysCon_Variant_CCMB_COREBEV

    /* Outputs for Atomic SubSystem: '<S856>/COREBEV' */
    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
     *  Constant: '<S915>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
     *  Constant: '<S899>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
     *  Constant: '<S910>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
     *  Constant: '<S914>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
     *  Constant: '<S916>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
     *  Constant: '<S917>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
     *  Constant: '<S918>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
     *  Constant: '<S919>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
     *  Constant: '<S920>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
     *  Constant: '<S900>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
     *  Constant: '<S901>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
     *  Constant: '<S902>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
     *  Constant: '<S903>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
     *  Constant: '<S904>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
     *  Constant: '<S905>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
     *  Constant: '<S906>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
     *  Constant: '<S907>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
     *  Constant: '<S908>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
     *  Constant: '<S909>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
     *  Constant: '<S911>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
     *  Constant: '<S912>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A' incorporates:
     *  Constant: '<S913>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A_Value
        (CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S856>/COREBEV' */
#elif Rte_SysCon_Variant_CCMB_PEGASUS

    /* Outputs for Atomic SubSystem: '<S856>/PEGASUS' */
    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CADM' incorporates:
     *  Constant: '<S944>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CADM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CANC2_BCM' incorporates:
     *  Constant: '<S921>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CANC2_BCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABS_BusB' incorporates:
     *  Constant: '<S932>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABS_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM_CANC11' incorporates:
     *  Constant: '<S943>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC' incorporates:
     *  Constant: '<S945>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_BusB' incorporates:
     *  Constant: '<S946>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC' incorporates:
     *  Constant: '<S947>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC' incorporates:
     *  Constant: '<S948>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_IDCM' incorporates:
     *  Constant: '<S949>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_IDCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_BECM_CANC11' incorporates:
     *  Constant: '<S922>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_BECM_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11' incorporates:
     *  Constant: '<S923>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_A_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11' incorporates:
     *  Constant: '<S924>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_DMCM_B_CANC11_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ABSCM_A' incorporates:
     *  Constant: '<S925>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ABSCM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ORC' incorporates:
     *  Constant: '<S926>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ORC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_BCCM_C' incorporates:
     *  Constant: '<S927>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_BCCM_C_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LosCommBECM_A' incorporates:
     *  Constant: '<S928>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LosCommBECM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2' incorporates:
     *  Constant: '<S929>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_A_ePT2_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_DMCM_B' incorporates:
     *  Constant: '<S930>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_DMCM_B_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommISM' incorporates:
     *  Constant: '<S931>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostCommISM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ESM_CRC_MC' incorporates:
     *  Constant: '<S933>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ESM_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_CCN_CRC_MC' incorporates:
     *  Constant: '<S934>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_CCN_CRC_MC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A' incorporates:
     *  Constant: '<S935>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_AutoDrvSys_CM_A_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_A' incorporates:
     *  Constant: '<S936>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_ECM_BusB' incorporates:
     *  Constant: '<S937>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_ECM_BusB_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_SGCM' incorporates:
     *  Constant: '<S938>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_SGCM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC' incorporates:
     *  Constant: '<S939>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvData_GenrA_CM_CRC_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostComm_GenrA_CM' incorporates:
     *  Constant: '<S940>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostComm_GenrA_CM_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_LostCommECM_PCM_A' incorporates:
     *  Constant: '<S941>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_LostCommECM_PCM_A_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCCMB_e_FaultSts_InvDataECM' incorporates:
     *  Constant: '<S942>/Constant'
     */
    (void)Rte_Write_VeCCMB_e_FaultSts_InvDataECM_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S856>/PEGASUS' */
#endif

    /* End of Outputs for SubSystem: '<S2>/Init_VariantOptions' */
#endif

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
